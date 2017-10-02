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

/** @file seDRMLSR3DLocationControlLink.h
@author Warren Macchi (Accent Geographic)
@brief Accessors to the seDRMLSR3DLocationControlLink (148) class.
*/

#ifndef _seDRMLSR3DLocationControlLink_h
#define _seDRMLSR3DLocationControlLink_h

#include "seDRMControlLink.h"

namespace sedris {

/** seDRMLSR3DLocationControlLink wraps the DRM <a href="../drm/classes/LSR3DLocationControlLink.htm">&lt;LSR_3D_Location_Control_Link&gt;</a> class.
@author Warren Macchi
@version Revision: 1.8
@see seDRMControlLink
*/
class seDRMLSR3DLocationControlLink : public seDRMControlLink
{
public:

    /// Default constructor
    seDRMLSR3DLocationControlLink() {}

    /// Constructor for seDRM... class conversions
    seDRMLSR3DLocationControlLink( const seObject &other ) : seDRMControlLink(other) {}

    /// Get field <a href="../drm/classes/LSR3DLocationControlLink.htm#description">description</a>
    const SE_String& get_description()
    {
        DRMBASE_RET_FIELDS(LSR_3D_Location_Control_Link, description);
    }

    /// Set field <a href="../drm/classes/LSR3DLocationControlLink.htm#description">description</a> by parameter list
    void set_description
    (
        const SE_Character* characters,
        SE_Integer_Unsigned length=0,
        const SE_Locale& locale=SE_LOCALE_DEFAULT
    )
    {
        DRMBASE_ALLOC_FIELDS;
        set_SE_String(DRMBASE_ACC_FIELDS(LSR_3D_Location_Control_Link, description), characters, length, locale);
    }

    /// Set field <a href="../drm/classes/LSR3DLocationControlLink.htm#description">description</a>
    void set_description( const SE_String& description )
    {
        DRMBASE_ALLOC_FIELDS;
        set_SE_String(DRMBASE_ACC_FIELDS(LSR_3D_Location_Control_Link, description), description);
    }

    /// Get field <a href="../drm/classes/LSR3DLocationControlLink.htm#u_expression_index">u_expression_index</a>
    SE_Integer_Unsigned get_u_expression_index()
    {
        DRMBASE_RET_FIELDS(LSR_3D_Location_Control_Link, u_expression_index);
    }

    /// Set field <a href="../drm/classes/LSR3DLocationControlLink.htm#u_expression_index">u_expression_index</a>
    void set_u_expression_index( SE_Integer_Unsigned u_expression_index )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(LSR_3D_Location_Control_Link, u_expression_index, u_expression_index);
    }

    /// Get field <a href="../drm/classes/LSR3DLocationControlLink.htm#v_expression_index">v_expression_index</a>
    SE_Integer_Unsigned get_v_expression_index()
    {
        DRMBASE_RET_FIELDS(LSR_3D_Location_Control_Link, v_expression_index);
    }

    /// Set field <a href="../drm/classes/LSR3DLocationControlLink.htm#v_expression_index">v_expression_index</a>
    void set_v_expression_index( SE_Integer_Unsigned v_expression_index )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(LSR_3D_Location_Control_Link, v_expression_index, v_expression_index);
    }

    /// Get field <a href="../drm/classes/LSR3DLocationControlLink.htm#w_expression_index">w_expression_index</a>
    SE_Integer_Unsigned get_w_expression_index()
    {
        DRMBASE_RET_FIELDS(LSR_3D_Location_Control_Link, w_expression_index);
    }

    /// Set field <a href="../drm/classes/LSR3DLocationControlLink.htm#w_expression_index">w_expression_index</a>
    void set_w_expression_index( SE_Integer_Unsigned w_expression_index )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(LSR_3D_Location_Control_Link, w_expression_index, w_expression_index);
    }

    /** Gets the DRM class type this object can reference (mostly internal use).
        @warning Don't confuse with getDRMClass(), which is dependent on the
            actual type held by this DRM class object reference.
        @return SE_CLS_DRM_LSR_3D_LOCATION_CONTROL_LINK
    */
    virtual SE_DRM_Class getClassType() const
    {
        return SE_CLS_DRM_LSR_3D_LOCATION_CONTROL_LINK;
    }

};

} // namespace sedris

#endif // _seDRMLSR3DLocationControlLink_h
