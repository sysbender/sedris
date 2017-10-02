/*
 * SEDRIS Read 1 API
 *
 * FILE       :    se_read1_error.h
 *
 * PROGRAMMERS: Michele L. Worley (SAIC)
 *
 * DESCRIPTION:
 *    Interface to se_read1_error.c in SEDRIS Read 1 API.
 *
 * SEDRIS SDK Release 4.1.4 - July 1, 2011
 * - API spec. 4.1
 */

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

/*
 * COPYRIGHT 2011, SCIENCE APPLICATIONS INTERNATIONAL CORPORATION.
 *                 ALL RIGHTS RESERVED.
 */

/*
 * Ensure that this portion of the SEDRIS Level 1 Read API is only
 * included once.
 */
#ifndef SE_LEVEL_1_READ_API_ERROR_INCLUDED
#define SE_LEVEL_1_READ_API_ERROR_INCLUDED

#if !defined(_WIN32)
#define EXPORT_DLL
#elif !defined(EXPORT_DLL)
#if defined(_LIB)
#define EXPORT_DLL
#elif defined(_USRDLL)
#define EXPORT_DLL __declspec(dllexport)
#else
#define EXPORT_DLL __declspec(dllimport)
#endif
#endif /* _WIN32 && EXPORT_DLL */

#ifdef __cplusplus
extern "C" {
#endif

#include <stdio.h>
#include "se_read0.h"

/*
 *-----------------------------------------------------------------------------
 *
 * FUNCTION: SE_SetErrorHandlers
 *
 *   Sets up error handlers for the Read 0 API functions. Every Read 0
 *   function will have a handler assigned. Each error handler will
 *   print, for an error condition:
 *   - the name of the error handler
 *   - the error condition
 *   - the string set by SE_SetFirstErrorMessage(), if non-null
 *   - the string set by SE_SetSecondErrorMessage(), if non-null
 *
 *   See SE_SetFirstErrorMessage() and SE_SetSecondErrorMessage() in
 *   the Level 0 Read API for details on their use.
 *
 * PARAMETERS:
 *
 *   none
 *
 * RETURNS:
 *
 *   SE_STATCOD_SUCCESS if all operations succeed
 *
 *   SE_STATCOD_FAILURE if the error handlers cannot be set
 *
 *-----------------------------------------------------------------------------
 */
EXPORT_DLL extern SE_Status_Code
SE_SetErrorHandlers(void);
#ifdef __cplusplus
}
#endif
#endif
