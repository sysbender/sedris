##
## This make include file establishes global targets that should exist
## regardless of what application or library is being built, or what
## directory the build was invoked from.
##


##
## The global library directory is where both static and shared libraries
## are placed when they are built.
## This rule creates the directory if it does not exist.  The macro,
## "$(LIB_DIR)", should be added as a dependancy to any library.  By
## default, this is done in the localtargets.mk file when building a library.
##
ifneq ($(LIB_DIR),)
$(LIB_DIR):
	mkdir -p $@
ifneq ($(EXPORTED_LIBS_DIR),)
ifneq ($(OSNAME),irix)
	$(COPY) -d $(EXPORTED_LIBS_DIR)/* $@
else
	$(COPY) -pR $(EXPORTED_LIBS_DIR)/* $@
endif
endif
endif



##
## The global executable directory is where application executables are
## placed when they are built.
## This rule creates the directory if it does not exist.  The macro,
## "$(EXE_DIR)", should be added as a dependancy to any executable.  By
## default, this is done in the localtargets.mk file when building a library.
##
ifneq ($(EXE_DIR),)
$(EXE_DIR):
	mkdir -p $@
endif



##
## The global include directory is where application include files are placed
## when they are built.
## This rule creates the directory if it does not exist.  The macro,
## "$(INC_DIR)", should be added as a dependancy to any global include file.
## By default, this is done in the localtargets.mk file when building a
## library.
##
ifneq ($(INC_DIR),)
$(INC_DIR):
	mkdir -p $@
endif


##
## The global target directory is where phony target files are placed.
## Phony target files are needed in order allow date and time checking on named
##
## This rule creates the directory if it does not exist.  The macro,
## "$(TGT_DIR)", should be added as a prefix for any named target.  Acutally,
## end users and developers shouldn't have to mess with this, just maintainers
## of the build environment.
##
ifneq ($(TGT_DIR),)
$(TGT_DIR):
	mkdir -p $@

##
## Define a pattern rule for named targets.  Named targets are really a files
## that get put in the $(TGT_DIR) directory.  They updated via this rule by
## echoing two lines into them.  The first is the list of all the dependancies
## of the named target.  The second is the list of the dependancies which are
## out-of-date and caused it to be rebuilt. Both of these can be useful when
## trying to figure out why something got built.
##
## this was switched to the for because the shell on irix cannot handle a
## large amount of arguments (ie, 300+ headers from the OOI).  It's ugly, but
## it does work and it was fun figuring out.  :)
##
$(TGT_DIR)/%:
	@$(RM) $@
	@echo -n "ALL =" > $@
	@FILES="$^" ; for file in $$FILES; do echo -n " $$file" >> $@ ; done
	@echo >> $@
	@echo -n "OOD =" >> $@
	@FILES="$?" ; for file in $$FILES; do echo -n " $$file" >> $@ ; done
	@echo >> $@

endif

###################################################################
##
## The global targets
##
###################################################################

##
## This target causes the creation of any directory used by the build
## environment that has not been created yet.
##
dir_targets:	$(TGT_DIR) $(INC_DIR) \
	$(LIB_DIR) $(EXE_DIR) $(ALL_OBJ_DIRS) $(ALL_DEP_DIRS)

##
## This target causes the creation of all ofthe libraries
##

lib_targets:    dir_targets $(LIB_TARGETS)

##
## This target causes all of the header files to be copied
## into the inlcude directory
##
header_targets: dir_targets $(HEADER_TARGETS) $(TGT_DIR)/header_targets

##
## This target removes all object code, any executables or libraries,
## and autogenerated (builder) files from the current directory and
## all directories beneath it. It also removes all inlcude files from
## the include directory.
##
realclean::
	$(RM) $(TGT_DIR)/header_targets

##
## This target causes all applications to be built.
##
app_targets:    dir_targets $(APP_TARGETS)

##
## This target causes the creation of all dependency files.
## *** experimental ***
##
depend_targets: dir_targets $(ALL_DEPENDS)


##
## Cause the creation of a makefile for a specific directory
## *** experimental ***
##
makefile_targets: dir_targets $(ALL_MAKEFILES)

##
## This target removes all dependency files
##
depclean:
	$(RM) $(ALL_DEPENDS)

##
## This throws the readme to the screen for user help. If the readme is
## not indepth enough, read the Starter Kit in teh docs directory
##
help:
	$(PAGER) $(DEPTH)/README

##
## This removes all object files, the lib directory, the bin directory,
## the depndency directories, the header files in the inlcude directory
## and any aoutogenerated builder files. Restores installation to
## original "pristine" state.
##
distclean:
	$(shell $(RM) -rf $(DEPTH)/bin )
	$(shell $(RM) -rf $(DEPTH)/lib )
	$(shell $(RM) -rf $(DEPTH)/include/*.h* )
	$(shell $(RM) -rf \
		$(DEPTH)/libsrc/api_impl/stf_core/STF_Map/fieldDataMap_statics_* )
	$(shell $(RM) -rf $(DEPTH)/.objects )
	$(shell $(RM) -rf $(DEPTH)/.depends )
	$(shell $(RM) -rf $(DEPTH)/.targets )


##
## This prints out useful information about the build environment
## that can be used for debugging pruposes.
##
env:
	@echo  "   Environment Settings   "
	@echo  "--------------------------"
	@echo  "BIND_STATIC    	= $(BIND_STATIC)"
	@echo  "USE_GNU        	= $(USE_GNU)"
	@echo  "USE_KAI        	= $(USE_KAI)"
	@echo  "API_IMPL       	= $(API_IMPL)"
	@echo  "BUILD_MODE	   	= $(BUILD_MODE)"
	@echo  "MEMORY_CHECKER 	= $(MEMORY_CHECKER)"
	@echo  "LD_LIBRARY_PATH	= $(LD_LIBRARY_PATH)"
	@echo  "USE_MESA        = $(USE_MESA)"
	@echo  ""
	@echo  ""
	@echo  "      Target Settings     "
	@echo  "--------------------------"
	@echo  "LIB_DIR         = $(LIB_DIR)"
	@echo  "EXE_DIR         = $(EXE_DIR)"
	@echo  "OBJ_DIR         = $(OBJ_DIR)"
	@echo  "DEP_DIR         = $(DEP_DIR)"
	@echo  "INC_DIR         = $(INC_DIR)"
	@echo  "APP_TARGETS    	= $(APP_TARGETS)"
	@echo  "LIB_TARGETS    	= $(LIB_TARGETS)"
	@echo  "HEADER_TARGETS 	= $(HEADER_TARGETS)"
	@echo  "DIRECTORY_TARGETS"
	@echo  ""
	@echo  ""
	@echo  "   Configuration Settings  "
	@echo  "---------------------------"
	@echo  "OSNAME           = " $(OSNAME)
	@echo  "BUILD_ARCH       = " $(BUILD_ARCH)
	@echo  "COMPENV          = " $(COMPENV)
	@echo  "GNUVERSION       = " $(GNUVERSION)
	@echo  "BUILD_PATH       = " $(BUILD_ARCH)/$(DEBIG_DIR)$(BUILD_MODE)
	@echo  ""
	@echo  "      Compilation Environment Settings"
	@echo  "      --------------------------------"
	@echo  "      OBJ_SUFFIX        	    = " $(OBJ_SUFFIX)
	@echo  "      SHARED_LIB_SUFFIX 	    = " $(SHARED_LIB_SUFFIX)
	@echo  "      STATIC_LIB_SUFFIX 	    = " $(STATIC_LIB_SUFFIX)
	@echo  "      EXE_SUFFIX        	    = " $(EXE_SUFFIX)
	@echo  "      LIBRARY_PREFIX    	    = " $(LIBRARY_PREFIX)
	@echo  ""
	@echo  "      CC                 	    = " $(CC)
	@echo  "      CFLAGS           		    = " $(CFLAGS)
	@echo  ""
	@echo  "      CXX 		                = " $(CXX)
	@echo  "      CXXFLAGS                  = " $(CXXFLAGS)
	@echo  ""
	@echo  "      SHARED_LIB_LINKER         = " $(SHARED_LIB_LINKER)
	@echo  "      SHARED_LIB_LINKFLAGS      = " $(SHARED_LIB_LINKFLAGS)
	@echo  ""
	@echo  "      EXE_LINKER                = " $(EXE_LINKER)
	@echo  "      SHARED_LIB_EXPORT_FILE    = " $(SHARED_LIB_EXPORT_FILE)
	@echo  "      USE_EXPORT_FILE           = " $(USE_EXPORT_FILE)
	@echo  "      SHARED_LIB_EXPORT_OPTIONS = " $(SHARED_LIB_EXPORT_OPTIONS)
