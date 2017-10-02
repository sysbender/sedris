/*
 *  Copyright (c) 2006 Accent Geographic. All rights reserved.
 *  See the license file for licensing information.
 *  Created: Wed Jul 26 23:47:08 2006
 *
 *  DO NOT EDIT THIS FILE! (Autogenerated)
 */

// SEDRIS C++ SDK Release 4.1.4 - July 1, 2011

/*
 *                             NOTICE
 * 
 * This software is provided openly and freely for use in representing and
 * interchanging environmental data & databases.
 * 
 * This software was developed for use by the United States Government with
 * unlimited rights.  The software was developed under contract
 * DASG60-02-D-0006 TO-193 by Science Applications International Corporation.
 * The software is unclassified and is deemed as Distribution A, approved
 * for Public Release.
 * 
 * Use by others is permitted only upon the ACCEPTANCE OF THE TERMS AND
 * CONDITIONS, AS STIPULATED UNDER THE FOLLOWING PROVISIONS:
 * 
 *    1. Recipient may make unlimited copies of this software and give
 *       copies to other persons or entities as long as the copies contain
 *       this NOTICE, and as long as the same copyright notices that
 *       appear on, or in, this software remain.
 * 
 *    2. Trademarks. All trademarks belong to their respective trademark
 *       holders.  Third-Party applications/software/information are
 *       copyrighted by their respective owners.
 * 
 *    3. Recipient agrees to forfeit all intellectual property and
 *       ownership rights for any version created from the modification
 *       or adaptation of this software, including versions created from
 *       the translation and/or reverse engineering of the software design.
 * 
 *    4. Transfer.  Recipient may not sell, rent, lease, or sublicense
 *       this software.  Recipient may, however enable another person
 *       or entity the rights to use this software, provided that this
 *       AGREEMENT and NOTICE is furnished along with the software and
 *       /or software system utilizing this software.
 * 
 *       All revisions, modifications, created by the Recipient, to this
 *       software and/or related technical data shall be forwarded by the
 *       Recipient to the Government at the following address:
 * 
 *         SMDC
 *         Attention SEDRIS (TO193) TPOC
 *         P.O. Box 1500
 *         Huntsville, AL  35807-3801
 * 
 *         or via electronic mail to:  se-mgmt@sedris.org
 * 
 *    5. No Warranty. This software is being delivered to you AS IS
 *       and there is no warranty, EXPRESS or IMPLIED, as to its use
 *       or performance.
 * 
 *       The RECIPIENT ASSUMES ALL RISKS, KNOWN AND UNKNOWN, OF USING
 *       THIS SOFTWARE.  The DEVELOPER EXPRESSLY DISCLAIMS, and the
 *       RECIPIENT WAIVES, ANY and ALL PERFORMANCE OR RESULTS YOU MAY
 *       OBTAIN BY USING THIS SOFTWARE OR DOCUMENTATION.  THERE IS
 *       NO WARRANTY, EXPRESS OR, IMPLIED, AS TO NON-INFRINGEMENT OF
 *       THIRD PARTY RIGHTS, MERCHANTABILITY, OR FITNESS FOR ANY
 *       PARTICULAR PURPOSE.  IN NO EVENT WILL THE DEVELOPER, THE
 *       UNITED STATES GOVERNMENT OR ANYONE ELSE ASSOCIATED WITH THE
 *       DEVELOPMENT OF THIS SOFTWARE BE HELD LIABLE FOR ANY CONSEQUENTIAL,
 *       INCIDENTAL OR SPECIAL DAMAGES, INCLUDING ANY LOST PROFITS
 *       OR LOST SAVINGS WHATSOEVER.
 */

/** @file seDRMColourTableGroup.h
@author Warren Macchi (Accent Geographic)
@brief Accessors to the seDRMColourTableGroup (42) class.
*/

#ifndef _seDRMColourTableGroup_h
#define _seDRMColourTableGroup_h

#include "seDRMBase.h"

namespace sedris {

/** seDRMColourTableGroup wraps the DRM <a href="../drm/classes/ColourTableGroup.htm">&lt;Colour_Table_Group&gt;</a> class.
@author Warren Macchi
@version Revision: 1.8
@see seDRMBase
*/
class seDRMColourTableGroup : public seDRMBase
{
public:

    /// Default constructor
    seDRMColourTableGroup() {}

    /// Constructor for seDRM... class conversions
    seDRMColourTableGroup( const seObject &other ) : seDRMBase(other) {}

    /// Get field <a href="../drm/classes/ColourTableGroup.htm#primary_table_index">primary_table_index</a>
    SE_Integer_Positive get_primary_table_index()
    {
        DRMBASE_RET_FIELDS(Colour_Table_Group, primary_table_index);
    }

    /// Set field <a href="../drm/classes/ColourTableGroup.htm#primary_table_index">primary_table_index</a>
    void set_primary_table_index( SE_Integer_Positive primary_table_index )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(Colour_Table_Group, primary_table_index, primary_table_index);
    }

    /// Get field <a href="../drm/classes/ColourTableGroup.htm#table_size">table_size</a>
    SE_Integer_Positive get_table_size()
    {
        DRMBASE_RET_FIELDS(Colour_Table_Group, table_size);
    }

    /// Set field <a href="../drm/classes/ColourTableGroup.htm#table_size">table_size</a>
    void set_table_size( SE_Integer_Positive table_size )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(Colour_Table_Group, table_size, table_size);
    }

    /** Gets the DRM class type this object can reference (mostly internal use).
        @warning Don't confuse with getDRMClass(), which is dependent on the
            actual type held by this DRM class object reference.
        @return SE_CLS_DRM_COLOUR_TABLE_GROUP
    */
    virtual SE_DRM_Class getClassType() const
    {
        return SE_CLS_DRM_COLOUR_TABLE_GROUP;
    }

};

} // namespace sedris

#endif // _seDRMColourTableGroup_h
