# Microsoft Developer Studio Project File - Name="lib_edcs" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Static Library" 0x0104

CFG=lib_edcs - Win32 Debug
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE 
!MESSAGE NMAKE /f "lib_edcs.mak".
!MESSAGE 
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "lib_edcs.mak" CFG="lib_edcs - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "lib_edcs - Win32 Release" (based on "Win32 (x86) Static Library")
!MESSAGE "lib_edcs - Win32 Debug" (based on "Win32 (x86) Static Library")
!MESSAGE 

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""
# PROP Scc_LocalPath ""
CPP=cl.exe
RSC=rc.exe

!IF  "$(CFG)" == "lib_edcs - Win32 Release"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "Release"
# PROP BASE Intermediate_Dir "Release"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "../../lib/Release"
# PROP Intermediate_Dir "../../lib/Release/edcs"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_MBCS" /D "_LIB" /YX /FD /c
# ADD CPP /nologo /MD /W3 /GX /O2 /I "../include" /D "WIN32" /D "NDEBUG" /D "_MBCS" /D "_LIB" /FD /c
# SUBTRACT CPP /YX
# ADD BASE RSC /l 0x409 /d "NDEBUG"
# ADD RSC /l 0x409 /d "NDEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LIB32=link.exe -lib
# ADD BASE LIB32 /nologo
# ADD LIB32 /nologo /out:"../../lib/Release/edcs.lib"

!ELSEIF  "$(CFG)" == "lib_edcs - Win32 Debug"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "Debug"
# PROP BASE Intermediate_Dir "Debug"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "../../lib/Debug"
# PROP Intermediate_Dir "../../lib/Debug/edcs"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_MBCS" /D "_LIB" /YX /FD /GZ /c
# ADD CPP /nologo /MDd /W3 /Gm /GX /ZI /Od /I "../include" /D "WIN32" /D "_DEBUG" /D "_MBCS" /D "_LIB" /FD /GZ /c
# SUBTRACT CPP /YX
# ADD BASE RSC /l 0x409 /d "_DEBUG"
# ADD RSC /l 0x409 /d "_DEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LIB32=link.exe -lib
# ADD BASE LIB32 /nologo
# ADD LIB32 /nologo /out:"../../lib/Debug/edcs.lib"

!ENDIF 

# Begin Target

# Name "lib_edcs - Win32 Release"
# Name "lib_edcs - Win32 Debug"
# Begin Group "Source Files"

# PROP Default_Filter "cpp;c;cxx;rc;def;r;odl;idl;hpj;bat"
# Begin Source File

SOURCE=.\edcs.c
# End Source File
# Begin Source File

SOURCE=.\edcs_attr_dict.c
# End Source File
# Begin Source File

SOURCE=.\edcs_class_dict.c
# End Source File
# Begin Source File

SOURCE=.\edcs_conversions.c
# End Source File
# Begin Source File

SOURCE=.\edcs_default.c
# End Source File
# Begin Source File

SOURCE=.\edcs_enum_dict.c
# End Source File
# Begin Source File

SOURCE=.\edcs_enum_labels.c
# End Source File
# Begin Source File

SOURCE=.\edcs_internal.c
# End Source File
# Begin Source File

SOURCE=.\edcs_org_schema_dict.c
# End Source File
# Begin Source File

SOURCE=.\edcs_print.c
# End Source File
# Begin Source File

SOURCE=.\edcs_print_gen.c
# End Source File
# Begin Source File

SOURCE=.\edcs_scale_dict.c
# End Source File
# Begin Source File

SOURCE=.\edcs_unit_dict.c
# End Source File
# Begin Source File

SOURCE=.\edcs_unit_equivalence_dict.c
# End Source File
# Begin Source File

SOURCE=.\edcs_util.c
# End Source File
# Begin Source File

SOURCE=.\edcs_util_gen.c
# End Source File
# Begin Source File

SOURCE=.\edcs_valid.c
# End Source File
# Begin Source File

SOURCE=.\edcs_valid_gen.c
# End Source File
# Begin Source File

SOURCE=.\edcs_value_characteristic_dict.c
# End Source File
# End Group
# Begin Group "Header Files"

# PROP Default_Filter "h;hpp;hxx;hm;inl"
# Begin Source File

SOURCE=..\include\edcs.h
# End Source File
# Begin Source File

SOURCE=..\include\edcs_attr_dict.h
# End Source File
# Begin Source File

SOURCE=..\include\edcs_class_dict.h
# End Source File
# Begin Source File

SOURCE=..\include\edcs_conversions.h
# End Source File
# Begin Source File

SOURCE=..\include\edcs_default.h
# End Source File
# Begin Source File

SOURCE=..\include\edcs_enum_dict.h
# End Source File
# Begin Source File

SOURCE=..\include\edcs_group_dict.h
# End Source File
# Begin Source File

SOURCE=..\include\edcs_internal.h
# End Source File
# Begin Source File

SOURCE=..\include\edcs_org_schema_dict.h
# End Source File
# Begin Source File

SOURCE=..\include\edcs_print.h
# End Source File
# Begin Source File

SOURCE=..\include\edcs_scale_dict.h
# End Source File
# Begin Source File

SOURCE=..\include\edcs_types.h
# End Source File
# Begin Source File

SOURCE=..\include\edcs_unit_dict.h
# End Source File
# Begin Source File

SOURCE=..\include\edcs_unit_equivalence_dict.h
# End Source File
# Begin Source File

SOURCE=..\include\edcs_util.h
# End Source File
# Begin Source File

SOURCE=..\include\edcs_valid.h
# End Source File
# Begin Source File

SOURCE=..\include\edcs_value_characteristic_dict.h
# End Source File
# End Group
# Begin Group "Resource Files"

# PROP Default_Filter "ico;cur;bmp;dlg;rc2;rct;bin;rgs;gif;jpg;jpeg;jpe"
# End Group
# End Target
# End Project
