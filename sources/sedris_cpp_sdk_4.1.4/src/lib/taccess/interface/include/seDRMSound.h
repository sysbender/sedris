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

/** @file seDRMSound.h
@author Warren Macchi (Accent Geographic)
@brief Accessors to the seDRMSound (244) class.
*/

#ifndef _seDRMSound_h
#define _seDRMSound_h

#include "seDRMBase.h"

namespace sedris {

/** seDRMSound wraps the DRM <a href="../drm/classes/Sound.htm">&lt;Sound&gt;</a> class.
@author Warren Macchi
@version Revision: 1.8
@see seDRMBase
*/
class seDRMSound : public seDRMBase
{
public:

    /// Default constructor
    seDRMSound() {}

    /// Constructor for seDRM... class conversions
    seDRMSound( const seObject &other ) : seDRMBase(other) {}

    /// Get field <a href="../drm/classes/Sound.htm#name">name</a>
    const SE_String& get_name()
    {
        DRMBASE_RET_FIELDS(Sound, name);
    }

    /// Set field <a href="../drm/classes/Sound.htm#name">name</a> by parameter list
    void set_name
    (
        const SE_Character* characters,
        SE_Integer_Unsigned length=0,
        const SE_Locale& locale=SE_LOCALE_DEFAULT
    )
    {
        DRMBASE_ALLOC_FIELDS;
        set_SE_String(DRMBASE_ACC_FIELDS(Sound, name), characters, length, locale);
    }

    /// Set field <a href="../drm/classes/Sound.htm#name">name</a>
    void set_name( const SE_String& name )
    {
        DRMBASE_ALLOC_FIELDS;
        set_SE_String(DRMBASE_ACC_FIELDS(Sound, name), name);
    }

    /// Get field <a href="../drm/classes/Sound.htm#sound_format">sound_format</a>
    SE_Sound_Format get_sound_format()
    {
        DRMBASE_RET_FIELDS(Sound, sound_format);
    }

    /// Set field <a href="../drm/classes/Sound.htm#sound_format">sound_format</a>
    void set_sound_format( SE_Sound_Format sound_format )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(Sound, sound_format, sound_format);
    }

    /// Get field <a href="../drm/classes/Sound.htm#sound_urn">sound_urn</a>
    const SE_URN& get_sound_urn()
    {
        DRMBASE_RET_FIELDS(Sound, sound_urn);
    }

    /// Set field <a href="../drm/classes/Sound.htm#sound_urn">sound_urn</a> by parameter list
    void set_sound_urn
    (
        const SE_Character* characters,
        SE_Integer_Unsigned length=0
    )
    {
        DRMBASE_ALLOC_FIELDS;
        set_SE_URN(DRMBASE_ACC_FIELDS(Sound, sound_urn), characters, length);
    }

    /// Set field <a href="../drm/classes/Sound.htm#sound_urn">sound_urn</a>
    void set_sound_urn( const SE_URN& sound_urn )
    {
        DRMBASE_ALLOC_FIELDS;
        set_SE_URN(DRMBASE_ACC_FIELDS(Sound, sound_urn), sound_urn);
    }

    /// Get field <a href="../drm/classes/Sound.htm#duration">duration</a>
    SE_Float get_duration()
    {
        DRMBASE_RET_FIELDS(Sound, duration);
    }

    /// Set field <a href="../drm/classes/Sound.htm#duration">duration</a>
    void set_duration( SE_Float duration )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(Sound, duration, duration);
    }

    /// Get field <a href="../drm/classes/Sound.htm#sampling_rate">sampling_rate</a>
    SE_Float get_sampling_rate()
    {
        DRMBASE_RET_FIELDS(Sound, sampling_rate);
    }

    /// Set field <a href="../drm/classes/Sound.htm#sampling_rate">sampling_rate</a>
    void set_sampling_rate( SE_Float sampling_rate )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(Sound, sampling_rate, sampling_rate);
    }

    /// Get field <a href="../drm/classes/Sound.htm#bits_per_sample">bits_per_sample</a>
    SE_Byte_Positive get_bits_per_sample()
    {
        DRMBASE_RET_FIELDS(Sound, bits_per_sample);
    }

    /// Set field <a href="../drm/classes/Sound.htm#bits_per_sample">bits_per_sample</a>
    void set_bits_per_sample( SE_Byte_Positive bits_per_sample )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(Sound, bits_per_sample, bits_per_sample);
    }

    /// Get field <a href="../drm/classes/Sound.htm#channel_count">channel_count</a>
    SE_Byte_Positive get_channel_count()
    {
        DRMBASE_RET_FIELDS(Sound, channel_count);
    }

    /// Set field <a href="../drm/classes/Sound.htm#channel_count">channel_count</a>
    void set_channel_count( SE_Byte_Positive channel_count )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(Sound, channel_count, channel_count);
    }

    /// Get field <a href="../drm/classes/Sound.htm#method">method</a>
    const SE_String& get_method()
    {
        DRMBASE_RET_FIELDS(Sound, method);
    }

    /// Set field <a href="../drm/classes/Sound.htm#method">method</a> by parameter list
    void set_method
    (
        const SE_Character* characters,
        SE_Integer_Unsigned length=0,
        const SE_Locale& locale=SE_LOCALE_DEFAULT
    )
    {
        DRMBASE_ALLOC_FIELDS;
        set_SE_String(DRMBASE_ACC_FIELDS(Sound, method), characters, length, locale);
    }

    /// Set field <a href="../drm/classes/Sound.htm#method">method</a>
    void set_method( const SE_String& method )
    {
        DRMBASE_ALLOC_FIELDS;
        set_SE_String(DRMBASE_ACC_FIELDS(Sound, method), method);
    }

    /** Gets the DRM class type this object can reference (mostly internal use).
        @warning Don't confuse with getDRMClass(), which is dependent on the
            actual type held by this DRM class object reference.
        @return SE_CLS_DRM_SOUND
    */
    virtual SE_DRM_Class getClassType() const
    {
        return SE_CLS_DRM_SOUND;
    }

};

} // namespace sedris

#endif // _seDRMSound_h
