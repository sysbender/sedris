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

/** @file seDRMRelativeTimeInterval.h
@author Warren Macchi (Accent Geographic)
@brief Accessors to the seDRMRelativeTimeInterval (221) class.
*/

#ifndef _seDRMRelativeTimeInterval_h
#define _seDRMRelativeTimeInterval_h

#include "seDRMTimeInterval.h"

namespace sedris {

/** seDRMRelativeTimeInterval wraps the DRM <a href="../drm/classes/RelativeTimeInterval.htm">&lt;Relative_Time_Interval&gt;</a> class.
@author Warren Macchi
@version Revision: 1.8
@see seDRMTimeInterval
*/
class seDRMRelativeTimeInterval : public seDRMTimeInterval
{
public:

    /// Default constructor
    seDRMRelativeTimeInterval() {}

    /// Constructor for seDRM... class conversions
    seDRMRelativeTimeInterval( const seObject &other ) : seDRMTimeInterval(other) {}

    /// Get field <a href="../drm/classes/RelativeTimeInterval.htm#time_significance">time_significance</a>
    SE_Time_Significance get_time_significance()
    {
        DRMBASE_RET_FIELDS(Relative_Time_Interval, time_significance);
    }

    /// Set field <a href="../drm/classes/RelativeTimeInterval.htm#time_significance">time_significance</a>
    void set_time_significance( SE_Time_Significance time_significance )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(Relative_Time_Interval, time_significance, time_significance);
    }

    /// Get field <a href="../drm/classes/RelativeTimeInterval.htm#delta_start_days">delta_start_days</a>
    SE_Integer get_delta_start_days()
    {
        DRMBASE_RET_FIELDS(Relative_Time_Interval, delta_start_days);
    }

    /// Set field <a href="../drm/classes/RelativeTimeInterval.htm#delta_start_days">delta_start_days</a>
    void set_delta_start_days( SE_Integer delta_start_days )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(Relative_Time_Interval, delta_start_days, delta_start_days);
    }

    /// Get field <a href="../drm/classes/RelativeTimeInterval.htm#delta_stop_days">delta_stop_days</a>
    SE_Integer get_delta_stop_days()
    {
        DRMBASE_RET_FIELDS(Relative_Time_Interval, delta_stop_days);
    }

    /// Set field <a href="../drm/classes/RelativeTimeInterval.htm#delta_stop_days">delta_stop_days</a>
    void set_delta_stop_days( SE_Integer delta_stop_days )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(Relative_Time_Interval, delta_stop_days, delta_stop_days);
    }

    /// Get field <a href="../drm/classes/RelativeTimeInterval.htm#delta_start_hours">delta_start_hours</a>
    SE_Byte_Unsigned get_delta_start_hours()
    {
        DRMBASE_RET_FIELDS(Relative_Time_Interval, delta_start_hours);
    }

    /// Set field <a href="../drm/classes/RelativeTimeInterval.htm#delta_start_hours">delta_start_hours</a>
    void set_delta_start_hours( SE_Byte_Unsigned delta_start_hours )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(Relative_Time_Interval, delta_start_hours, delta_start_hours);
    }

    /// Get field <a href="../drm/classes/RelativeTimeInterval.htm#delta_stop_hours">delta_stop_hours</a>
    SE_Byte_Unsigned get_delta_stop_hours()
    {
        DRMBASE_RET_FIELDS(Relative_Time_Interval, delta_stop_hours);
    }

    /// Set field <a href="../drm/classes/RelativeTimeInterval.htm#delta_stop_hours">delta_stop_hours</a>
    void set_delta_stop_hours( SE_Byte_Unsigned delta_stop_hours )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(Relative_Time_Interval, delta_stop_hours, delta_stop_hours);
    }

    /// Get field <a href="../drm/classes/RelativeTimeInterval.htm#delta_start_minutes">delta_start_minutes</a>
    SE_Byte_Unsigned get_delta_start_minutes()
    {
        DRMBASE_RET_FIELDS(Relative_Time_Interval, delta_start_minutes);
    }

    /// Set field <a href="../drm/classes/RelativeTimeInterval.htm#delta_start_minutes">delta_start_minutes</a>
    void set_delta_start_minutes( SE_Byte_Unsigned delta_start_minutes )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(Relative_Time_Interval, delta_start_minutes, delta_start_minutes);
    }

    /// Get field <a href="../drm/classes/RelativeTimeInterval.htm#delta_stop_minutes">delta_stop_minutes</a>
    SE_Byte_Unsigned get_delta_stop_minutes()
    {
        DRMBASE_RET_FIELDS(Relative_Time_Interval, delta_stop_minutes);
    }

    /// Set field <a href="../drm/classes/RelativeTimeInterval.htm#delta_stop_minutes">delta_stop_minutes</a>
    void set_delta_stop_minutes( SE_Byte_Unsigned delta_stop_minutes )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(Relative_Time_Interval, delta_stop_minutes, delta_stop_minutes);
    }

    /// Get field <a href="../drm/classes/RelativeTimeInterval.htm#delta_start_seconds">delta_start_seconds</a>
    SE_Long_Float get_delta_start_seconds()
    {
        DRMBASE_RET_FIELDS(Relative_Time_Interval, delta_start_seconds);
    }

    /// Set field <a href="../drm/classes/RelativeTimeInterval.htm#delta_start_seconds">delta_start_seconds</a>
    void set_delta_start_seconds( SE_Long_Float delta_start_seconds )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(Relative_Time_Interval, delta_start_seconds, delta_start_seconds);
    }

    /// Get field <a href="../drm/classes/RelativeTimeInterval.htm#delta_stop_seconds">delta_stop_seconds</a>
    SE_Long_Float get_delta_stop_seconds()
    {
        DRMBASE_RET_FIELDS(Relative_Time_Interval, delta_stop_seconds);
    }

    /// Set field <a href="../drm/classes/RelativeTimeInterval.htm#delta_stop_seconds">delta_stop_seconds</a>
    void set_delta_stop_seconds( SE_Long_Float delta_stop_seconds )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(Relative_Time_Interval, delta_stop_seconds, delta_stop_seconds);
    }

    /** Gets the DRM class type this object can reference (mostly internal use).
        @warning Don't confuse with getDRMClass(), which is dependent on the
            actual type held by this DRM class object reference.
        @return SE_CLS_DRM_RELATIVE_TIME_INTERVAL
    */
    virtual SE_DRM_Class getClassType() const
    {
        return SE_CLS_DRM_RELATIVE_TIME_INTERVAL;
    }

};

} // namespace sedris

#endif // _seDRMRelativeTimeInterval_h
