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

/** @file seDRMRegularAxis.h
@author Warren Macchi (Accent Geographic)
@brief Accessors to the seDRMRegularAxis (219) class.
*/

#ifndef _seDRMRegularAxis_h
#define _seDRMRegularAxis_h

#include "seDRMAxis.h"

namespace sedris {

/** seDRMRegularAxis wraps the DRM <a href="../drm/classes/RegularAxis.htm">&lt;Regular_Axis&gt;</a> class.
@author Warren Macchi
@version Revision: 1.8
@see seDRMAxis
*/
class seDRMRegularAxis : public seDRMAxis
{
public:

    /// Default constructor
    seDRMRegularAxis() {}

    /// Constructor for seDRM... class conversions
    seDRMRegularAxis( const seObject &other ) : seDRMAxis(other) {}

    /// Get field <a href="../drm/classes/RegularAxis.htm#axis_type">axis_type</a>
    EDCS_Attribute_Code get_axis_type()
    {
        DRMBASE_RET_FIELDS(Regular_Axis, axis_type);
    }

    /// Set field <a href="../drm/classes/RegularAxis.htm#axis_type">axis_type</a>
    void set_axis_type( EDCS_Attribute_Code axis_type )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(Regular_Axis, axis_type, axis_type);
    }

    /// Get field <a href="../drm/classes/RegularAxis.htm#axis_value_count">axis_value_count</a>
    SE_Short_Integer_Positive get_axis_value_count()
    {
        DRMBASE_RET_FIELDS(Regular_Axis, axis_value_count);
    }

    /// Set field <a href="../drm/classes/RegularAxis.htm#axis_value_count">axis_value_count</a>
    void set_axis_value_count( SE_Short_Integer_Positive axis_value_count )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(Regular_Axis, axis_value_count, axis_value_count);
    }

    /// Get field <a href="../drm/classes/RegularAxis.htm#value_unit">value_unit</a>
    EDCS_Unit_Code get_value_unit()
    {
        DRMBASE_RET_FIELDS(Regular_Axis, value_unit);
    }

    /// Set field <a href="../drm/classes/RegularAxis.htm#value_unit">value_unit</a>
    void set_value_unit( EDCS_Unit_Code value_unit )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(Regular_Axis, value_unit, value_unit);
    }

    /// Get field <a href="../drm/classes/RegularAxis.htm#value_scale">value_scale</a>
    EDCS_Unit_Scale_Code get_value_scale()
    {
        DRMBASE_RET_FIELDS(Regular_Axis, value_scale);
    }

    /// Set field <a href="../drm/classes/RegularAxis.htm#value_scale">value_scale</a>
    void set_value_scale( EDCS_Unit_Scale_Code value_scale )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(Regular_Axis, value_scale, value_scale);
    }

    /// Get field <a href="../drm/classes/RegularAxis.htm#interpolation_type">interpolation_type</a>
    SE_Interpolation_Type get_interpolation_type()
    {
        DRMBASE_RET_FIELDS(Regular_Axis, interpolation_type);
    }

    /// Set field <a href="../drm/classes/RegularAxis.htm#interpolation_type">interpolation_type</a>
    void set_interpolation_type( SE_Interpolation_Type interpolation_type )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(Regular_Axis, interpolation_type, interpolation_type);
    }

    /// Get field <a href="../drm/classes/RegularAxis.htm#first_value">first_value</a>
    const SE_Single_Value& get_first_value()
    {
        DRMBASE_RET_FIELDS(Regular_Axis, first_value);
    }

    /// Set field <a href="../drm/classes/RegularAxis.htm#first_value">first_value</a>
    void set_first_value( const SE_Single_Value& first_value )
    {
        DRMBASE_ALLOC_FIELDS;
        set_SE_Single_Value(DRMBASE_ACC_FIELDS(Regular_Axis, first_value), first_value);
    }

    /// Set field <a href="../drm/classes/RegularAxis.htm#first_value_value_type">first_value_value_type</a>
    void set_first_value_value_type( SE_Single_Value_Type value_type )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(Regular_Axis, first_value.value_type, value_type);
    }

    /// Get field <a href="../drm/classes/RegularAxis.htm#spacing">spacing</a>
    const SE_Single_Value& get_spacing()
    {
        DRMBASE_RET_FIELDS(Regular_Axis, spacing);
    }

    /// Set field <a href="../drm/classes/RegularAxis.htm#spacing">spacing</a>
    void set_spacing( const SE_Single_Value& spacing )
    {
        DRMBASE_ALLOC_FIELDS;
        set_SE_Single_Value(DRMBASE_ACC_FIELDS(Regular_Axis, spacing), spacing);
    }

    /// Set field <a href="../drm/classes/RegularAxis.htm#spacing_value_type">spacing_value_type</a>
    void set_spacing_value_type( SE_Single_Value_Type value_type )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(Regular_Axis, spacing.value_type, value_type);
    }

    /// Get field <a href="../drm/classes/RegularAxis.htm#spacing_type">spacing_type</a>
    SE_Spacing_Type get_spacing_type()
    {
        DRMBASE_RET_FIELDS(Regular_Axis, spacing_type);
    }

    /// Set field <a href="../drm/classes/RegularAxis.htm#spacing_type">spacing_type</a>
    void set_spacing_type( SE_Spacing_Type spacing_type )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(Regular_Axis, spacing_type, spacing_type);
    }

    /// Get field <a href="../drm/classes/RegularAxis.htm#axis_alignment">axis_alignment</a>
    SE_Axis_Alignment get_axis_alignment()
    {
        DRMBASE_RET_FIELDS(Regular_Axis, axis_alignment);
    }

    /// Set field <a href="../drm/classes/RegularAxis.htm#axis_alignment">axis_alignment</a>
    void set_axis_alignment( SE_Axis_Alignment axis_alignment )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(Regular_Axis, axis_alignment, axis_alignment);
    }

    /** Gets the DRM class type this object can reference (mostly internal use).
        @warning Don't confuse with getDRMClass(), which is dependent on the
            actual type held by this DRM class object reference.
        @return SE_CLS_DRM_REGULAR_AXIS
    */
    virtual SE_DRM_Class getClassType() const
    {
        return SE_CLS_DRM_REGULAR_AXIS;
    }

};

} // namespace sedris

#endif // _seDRMRegularAxis_h
