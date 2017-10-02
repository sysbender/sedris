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

/** @file seDRMECAugmented3DLocation.h
@author Warren Macchi (Accent Geographic)
@brief Accessors to the seDRMECAugmented3DLocation (57) class.
*/

#ifndef _seDRMECAugmented3DLocation_h
#define _seDRMECAugmented3DLocation_h

#include "seDRMLocation3D.h"

namespace sedris {

/** seDRMECAugmented3DLocation wraps the DRM <a href="../drm/classes/ECAugmented3DLocation.htm">&lt;EC_Augmented_3D_Location&gt;</a> class.
@author Warren Macchi
@version Revision: 1.8
@see seDRMLocation3D
*/
class seDRMECAugmented3DLocation : public seDRMLocation3D
{
public:

    /// Default constructor
    seDRMECAugmented3DLocation() {}

    /// Constructor for seDRM... class conversions
    seDRMECAugmented3DLocation( const seObject &other ) : seDRMLocation3D(other) {}

    /// Get field <a href="../drm/classes/ECAugmented3DLocation.htm#coordinate">coordinate</a>
    const SRM_Map_Projection_3D_Coordinate& get_coordinate()
    {
        DRMBASE_RET_FIELDS(EC_Augmented_3D_Location, coordinate);
    }

    /// Set field <a href="../drm/classes/ECAugmented3DLocation.htm#coordinate">coordinate</a>
    void set_coordinate( const SRM_Map_Projection_3D_Coordinate& coordinate )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(EC_Augmented_3D_Location, coordinate, coordinate);
    }

    /// Set field <a href="../drm/classes/ECAugmented3DLocation.htm#coordinate">coordinate</a> by parameter list
    void set_coordinate
    (
         SRM_Long_Float easting,
         SRM_Long_Float northing,
         SRM_Long_Float ellipsoidal_height
    )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(EC_Augmented_3D_Location, coordinate.easting, easting);
        DRMBASE_SET_FIELDS(EC_Augmented_3D_Location, coordinate.northing, northing);
        DRMBASE_SET_FIELDS(EC_Augmented_3D_Location, coordinate.ellipsoidal_height, ellipsoidal_height);
    }

    /// Set field <a href="../drm/classes/ECAugmented3DLocation.htm#coordinate_easting">coordinate_easting</a>
    void set_coordinate_easting( SRM_Long_Float easting )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(EC_Augmented_3D_Location, coordinate.easting, easting);
    }

    /// Set field <a href="../drm/classes/ECAugmented3DLocation.htm#coordinate_northing">coordinate_northing</a>
    void set_coordinate_northing( SRM_Long_Float northing )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(EC_Augmented_3D_Location, coordinate.northing, northing);
    }

    /// Set field <a href="../drm/classes/ECAugmented3DLocation.htm#coordinate_ellipsoidal_height">coordinate_ellipsoidal_height</a>
    void set_coordinate_ellipsoidal_height( SRM_Long_Float ellipsoidal_height )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(EC_Augmented_3D_Location, coordinate.ellipsoidal_height, ellipsoidal_height);
    }

    /** Gets the DRM class type this object can reference (mostly internal use).
        @warning Don't confuse with getDRMClass(), which is dependent on the
            actual type held by this DRM class object reference.
        @return SE_CLS_DRM_EC_AUGMENTED_3D_LOCATION
    */
    virtual SE_DRM_Class getClassType() const
    {
        return SE_CLS_DRM_EC_AUGMENTED_3D_LOCATION;
    }

};

} // namespace sedris

#endif // _seDRMECAugmented3DLocation_h
