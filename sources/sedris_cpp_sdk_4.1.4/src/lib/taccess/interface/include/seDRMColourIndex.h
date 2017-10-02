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

/** @file seDRMColourIndex.h
@author Warren Macchi (Accent Geographic)
@brief Accessors to the seDRMColourIndex (38) class.
*/

#ifndef _seDRMColourIndex_h
#define _seDRMColourIndex_h

#include "seDRMColour.h"

namespace sedris {

/** seDRMColourIndex wraps the DRM <a href="../drm/classes/ColourIndex.htm">&lt;Colour_Index&gt;</a> class.
@author Warren Macchi
@version Revision: 1.8
@see seDRMColour
*/
class seDRMColourIndex : public seDRMColour
{
public:

    /// Default constructor
    seDRMColourIndex() {}

    /// Constructor for seDRM... class conversions
    seDRMColourIndex( const seObject &other ) : seDRMColour(other) {}

    /// Get field <a href="../drm/classes/ColourIndex.htm#colour_mapping">colour_mapping</a>
    SE_Colour_Mapping get_colour_mapping()
    {
        DRMBASE_RET_FIELDS(Colour_Index, colour_mapping);
    }

    /// Set field <a href="../drm/classes/ColourIndex.htm#colour_mapping">colour_mapping</a>
    void set_colour_mapping( SE_Colour_Mapping colour_mapping )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(Colour_Index, colour_mapping, colour_mapping);
    }

    /// Set field <a href="../drm/classes/ColourIndex.htm#colour_mapping">colour_mapping</a> by parameter list (Set type)
    void set_colour_mapping
    (
         SE_Integer_Unsigned Front_Primary,
         SE_Integer_Unsigned Front_Distance_Blend,
         SE_Integer_Unsigned Front_Image_Blend,
         SE_Integer_Unsigned Back_Primary,
         SE_Integer_Unsigned Back_Distance_Blend,
         SE_Integer_Unsigned Back_Image_Blend,
         SE_Integer_Unsigned Primary_Light_Rendering_Behaviour,
         SE_Integer_Unsigned Secondary_Light_Rendering_Behaviour
    )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(Colour_Index, colour_mapping.member.Front_Primary, Front_Primary);
        DRMBASE_SET_FIELDS(Colour_Index, colour_mapping.member.Front_Distance_Blend, Front_Distance_Blend);
        DRMBASE_SET_FIELDS(Colour_Index, colour_mapping.member.Front_Image_Blend, Front_Image_Blend);
        DRMBASE_SET_FIELDS(Colour_Index, colour_mapping.member.Back_Primary, Back_Primary);
        DRMBASE_SET_FIELDS(Colour_Index, colour_mapping.member.Back_Distance_Blend, Back_Distance_Blend);
        DRMBASE_SET_FIELDS(Colour_Index, colour_mapping.member.Back_Image_Blend, Back_Image_Blend);
        DRMBASE_SET_FIELDS(Colour_Index, colour_mapping.member.Primary_Light_Rendering_Behaviour, Primary_Light_Rendering_Behaviour);
        DRMBASE_SET_FIELDS(Colour_Index, colour_mapping.member.Secondary_Light_Rendering_Behaviour, Secondary_Light_Rendering_Behaviour);
    }

    /// Set field <a href="../drm/classes/ColourIndex.htm#colour_mapping_Front_Primary">colour_mapping_Front_Primary</a>
    void set_colour_mapping_Front_Primary( SE_Integer_Unsigned Front_Primary )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(Colour_Index, colour_mapping.member.Front_Primary, Front_Primary);
    }

    /// Set field <a href="../drm/classes/ColourIndex.htm#colour_mapping_Front_Distance_Blend">colour_mapping_Front_Distance_Blend</a>
    void set_colour_mapping_Front_Distance_Blend( SE_Integer_Unsigned Front_Distance_Blend )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(Colour_Index, colour_mapping.member.Front_Distance_Blend, Front_Distance_Blend);
    }

    /// Set field <a href="../drm/classes/ColourIndex.htm#colour_mapping_Front_Image_Blend">colour_mapping_Front_Image_Blend</a>
    void set_colour_mapping_Front_Image_Blend( SE_Integer_Unsigned Front_Image_Blend )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(Colour_Index, colour_mapping.member.Front_Image_Blend, Front_Image_Blend);
    }

    /// Set field <a href="../drm/classes/ColourIndex.htm#colour_mapping_Back_Primary">colour_mapping_Back_Primary</a>
    void set_colour_mapping_Back_Primary( SE_Integer_Unsigned Back_Primary )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(Colour_Index, colour_mapping.member.Back_Primary, Back_Primary);
    }

    /// Set field <a href="../drm/classes/ColourIndex.htm#colour_mapping_Back_Distance_Blend">colour_mapping_Back_Distance_Blend</a>
    void set_colour_mapping_Back_Distance_Blend( SE_Integer_Unsigned Back_Distance_Blend )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(Colour_Index, colour_mapping.member.Back_Distance_Blend, Back_Distance_Blend);
    }

    /// Set field <a href="../drm/classes/ColourIndex.htm#colour_mapping_Back_Image_Blend">colour_mapping_Back_Image_Blend</a>
    void set_colour_mapping_Back_Image_Blend( SE_Integer_Unsigned Back_Image_Blend )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(Colour_Index, colour_mapping.member.Back_Image_Blend, Back_Image_Blend);
    }

    /// Set field <a href="../drm/classes/ColourIndex.htm#colour_mapping_Primary_Light_Rendering_Behaviour">colour_mapping_Primary_Light_Rendering_Behaviour</a>
    void set_colour_mapping_Primary_Light_Rendering_Behaviour( SE_Integer_Unsigned Primary_Light_Rendering_Behaviour )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(Colour_Index, colour_mapping.member.Primary_Light_Rendering_Behaviour, Primary_Light_Rendering_Behaviour);
    }

    /// Set field <a href="../drm/classes/ColourIndex.htm#colour_mapping_Secondary_Light_Rendering_Behaviour">colour_mapping_Secondary_Light_Rendering_Behaviour</a>
    void set_colour_mapping_Secondary_Light_Rendering_Behaviour( SE_Integer_Unsigned Secondary_Light_Rendering_Behaviour )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(Colour_Index, colour_mapping.member.Secondary_Light_Rendering_Behaviour, Secondary_Light_Rendering_Behaviour);
    }

    /// Get field <a href="../drm/classes/ColourIndex.htm#index">index</a>
    SE_Integer_Positive get_index()
    {
        DRMBASE_RET_FIELDS(Colour_Index, index);
    }

    /// Set field <a href="../drm/classes/ColourIndex.htm#index">index</a>
    void set_index( SE_Integer_Positive index )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(Colour_Index, index, index);
    }

    /// Get field <a href="../drm/classes/ColourIndex.htm#intensity_level">intensity_level</a>
    SE_Long_Float get_intensity_level()
    {
        DRMBASE_RET_FIELDS(Colour_Index, intensity_level);
    }

    /// Set field <a href="../drm/classes/ColourIndex.htm#intensity_level">intensity_level</a>
    void set_intensity_level( SE_Long_Float intensity_level )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(Colour_Index, intensity_level, intensity_level);
    }

    /** Gets the DRM class type this object can reference (mostly internal use).
        @warning Don't confuse with getDRMClass(), which is dependent on the
            actual type held by this DRM class object reference.
        @return SE_CLS_DRM_COLOUR_INDEX
    */
    virtual SE_DRM_Class getClassType() const
    {
        return SE_CLS_DRM_COLOUR_INDEX;
    }

};

} // namespace sedris

#endif // _seDRMColourIndex_h
