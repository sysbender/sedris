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

/** @file seDRMIdentification.h
@author Warren Macchi (Accent Geographic)
@brief Accessors to the seDRMIdentification (107) class.
*/

#ifndef _seDRMIdentification_h
#define _seDRMIdentification_h

#include "seDRMBase.h"

namespace sedris {

/** seDRMIdentification wraps the DRM <a href="../drm/classes/Identification.htm">&lt;Identification&gt;</a> class.
@author Warren Macchi
@version Revision: 1.8
@see seDRMBase
*/
class seDRMIdentification : public seDRMBase
{
public:

    /// Default constructor
    seDRMIdentification() {}

    /// Constructor for seDRM... class conversions
    seDRMIdentification( const seObject &other ) : seDRMBase(other) {}

    /// Get field <a href="../drm/classes/Identification.htm#abstract">abstract</a>
    const SE_String& get_abstract()
    {
        DRMBASE_RET_FIELDS(Identification, abstract);
    }

    /// Set field <a href="../drm/classes/Identification.htm#abstract">abstract</a> by parameter list
    void set_abstract
    (
        const SE_Character* characters,
        SE_Integer_Unsigned length=0,
        const SE_Locale& locale=SE_LOCALE_DEFAULT
    )
    {
        DRMBASE_ALLOC_FIELDS;
        set_SE_String(DRMBASE_ACC_FIELDS(Identification, abstract), characters, length, locale);
    }

    /// Set field <a href="../drm/classes/Identification.htm#abstract">abstract</a>
    void set_abstract( const SE_String& abstract )
    {
        DRMBASE_ALLOC_FIELDS;
        set_SE_String(DRMBASE_ACC_FIELDS(Identification, abstract), abstract);
    }

    /// Get field <a href="../drm/classes/Identification.htm#purpose">purpose</a>
    const SE_String& get_purpose()
    {
        DRMBASE_RET_FIELDS(Identification, purpose);
    }

    /// Set field <a href="../drm/classes/Identification.htm#purpose">purpose</a> by parameter list
    void set_purpose
    (
        const SE_Character* characters,
        SE_Integer_Unsigned length=0,
        const SE_Locale& locale=SE_LOCALE_DEFAULT
    )
    {
        DRMBASE_ALLOC_FIELDS;
        set_SE_String(DRMBASE_ACC_FIELDS(Identification, purpose), characters, length, locale);
    }

    /// Set field <a href="../drm/classes/Identification.htm#purpose">purpose</a>
    void set_purpose( const SE_String& purpose )
    {
        DRMBASE_ALLOC_FIELDS;
        set_SE_String(DRMBASE_ACC_FIELDS(Identification, purpose), purpose);
    }

    /// Get field <a href="../drm/classes/Identification.htm#credit_count">credit_count</a>
    SE_Short_Integer_Unsigned get_credit_count()
    {
        DRMBASE_RET_FIELDS(Identification, credit_count);
    }

    /// Set field <a href="../drm/classes/Identification.htm#credit_count">credit_count</a>
    void set_credit_count( SE_Short_Integer_Unsigned credit_count )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(Identification, credit_count, credit_count);
    }

    /// Get field <a href="../drm/classes/Identification.htm#credit">credit</a>
    const SE_String* get_credit()
    {
        DRMBASE_RET_FIELDS(Identification, credit);
    }

    /// Set field <a href="../drm/classes/Identification.htm#credit">credit</a>
    void set_credit( const SE_String* credit, SE_Short_Integer_Unsigned credit_count )
    {
        DRMBASE_ALLOC_FIELDS;
        set_SE_String(DRMBASE_ACC_FIELDS(Identification, credit), DRMBASE_ACC_FIELDS(Identification, credit_count), credit, credit_count);
    }

    /// Get field <a href="../drm/classes/Identification.htm#supplemental_information">supplemental_information</a>
    const SE_String& get_supplemental_information()
    {
        DRMBASE_RET_FIELDS(Identification, supplemental_information);
    }

    /// Set field <a href="../drm/classes/Identification.htm#supplemental_information">supplemental_information</a> by parameter list
    void set_supplemental_information
    (
        const SE_Character* characters,
        SE_Integer_Unsigned length=0,
        const SE_Locale& locale=SE_LOCALE_DEFAULT
    )
    {
        DRMBASE_ALLOC_FIELDS;
        set_SE_String(DRMBASE_ACC_FIELDS(Identification, supplemental_information), characters, length, locale);
    }

    /// Set field <a href="../drm/classes/Identification.htm#supplemental_information">supplemental_information</a>
    void set_supplemental_information( const SE_String& supplemental_information )
    {
        DRMBASE_ALLOC_FIELDS;
        set_SE_String(DRMBASE_ACC_FIELDS(Identification, supplemental_information), supplemental_information);
    }

    /** Gets the DRM class type this object can reference (mostly internal use).
        @warning Don't confuse with getDRMClass(), which is dependent on the
            actual type held by this DRM class object reference.
        @return SE_CLS_DRM_IDENTIFICATION
    */
    virtual SE_DRM_Class getClassType() const
    {
        return SE_CLS_DRM_IDENTIFICATION;
    }

};

} // namespace sedris

#endif // _seDRMIdentification_h
