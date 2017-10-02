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

/** @file seDRMHierarchySummaryItem.h
@author Warren Macchi (Accent Geographic)
@brief Accessors to the seDRMHierarchySummaryItem (103) class.
*/

#ifndef _seDRMHierarchySummaryItem_h
#define _seDRMHierarchySummaryItem_h

#include "seDRMBaseSummaryItem.h"

namespace sedris {

/** seDRMHierarchySummaryItem wraps the DRM <a href="../drm/classes/HierarchySummaryItem.htm">&lt;Hierarchy_Summary_Item&gt;</a> class.
@author Warren Macchi
@version Revision: 1.8
@see seDRMBaseSummaryItem
*/
class seDRMHierarchySummaryItem : public seDRMBaseSummaryItem
{
public:

    /// Default constructor
    seDRMHierarchySummaryItem() {}

    /// Constructor for seDRM... class conversions
    seDRMHierarchySummaryItem( const seObject &other ) : seDRMBaseSummaryItem(other) {}

    /// Get field <a href="../drm/classes/HierarchySummaryItem.htm#drm_class">drm_class</a>
    SE_DRM_Class get_drm_class()
    {
        DRMBASE_RET_FIELDS(Hierarchy_Summary_Item, drm_class);
    }

    /// Set field <a href="../drm/classes/HierarchySummaryItem.htm#drm_class">drm_class</a>
    void set_drm_class( SE_DRM_Class drm_class )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(Hierarchy_Summary_Item, drm_class, drm_class);
    }

    /// Get field <a href="../drm/classes/HierarchySummaryItem.htm#multiplicity_meaning">multiplicity_meaning</a>
    SE_HS_Multiplicity_Code get_multiplicity_meaning()
    {
        DRMBASE_RET_FIELDS(Hierarchy_Summary_Item, multiplicity_meaning);
    }

    /// Set field <a href="../drm/classes/HierarchySummaryItem.htm#multiplicity_meaning">multiplicity_meaning</a>
    void set_multiplicity_meaning( SE_HS_Multiplicity_Code multiplicity_meaning )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(Hierarchy_Summary_Item, multiplicity_meaning, multiplicity_meaning);
    }

    /// Get field <a href="../drm/classes/HierarchySummaryItem.htm#multiplicity">multiplicity</a>
    SE_Integer_Unsigned get_multiplicity()
    {
        DRMBASE_RET_FIELDS(Hierarchy_Summary_Item, multiplicity);
    }

    /// Set field <a href="../drm/classes/HierarchySummaryItem.htm#multiplicity">multiplicity</a>
    void set_multiplicity( SE_Integer_Unsigned multiplicity )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(Hierarchy_Summary_Item, multiplicity, multiplicity);
    }

    /** Gets the DRM class type this object can reference (mostly internal use).
        @warning Don't confuse with getDRMClass(), which is dependent on the
            actual type held by this DRM class object reference.
        @return SE_CLS_DRM_HIERARCHY_SUMMARY_ITEM
    */
    virtual SE_DRM_Class getClassType() const
    {
        return SE_CLS_DRM_HIERARCHY_SUMMARY_ITEM;
    }

};

} // namespace sedris

#endif // _seDRMHierarchySummaryItem_h
