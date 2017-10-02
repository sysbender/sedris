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

/** @file seDRMAll.h
@author Warren Macchi (Accent Geographic)
@brief A convenience header to include all DRM handle classes.
*/

#ifndef _seDRMAll_h
#define _seDRMAll_h

#include "seDRMAbsoluteTime.h"
#include "seDRMAbsoluteTimeInterval.h"
#include "seDRMAlternateHierarchyRelatedFeatures.h"
#include "seDRMAlternateHierarchyRelatedGeometry.h"
#include "seDRMAmbientColour.h"
#include "seDRMAnimationBehaviour.h"
#include "seDRMAnimationRelatedGeometry.h"
#include "seDRMArc.h"
#include "seDRMArealFeature.h"
#include "seDRMAttachmentPoint.h"
#include "seDRMBlendDirectionalLight.h"
#include "seDRMBoundingVolume.h"
#include "seDRMBrowseMedia.h"
#include "seDRMCameraPoint.h"
#include "seDRMCC3DLocation.h"
#include "seDRMCD3DLocation.h"
#include "seDRMCDSurfaceLocation.h"
#include "seDRMCitation.h"
#include "seDRMClassificationData.h"
#include "seDRMClassificationRelatedFeatures.h"
#include "seDRMClassificationRelatedGeometry.h"
#include "seDRMCM3DLocation.h"
#include "seDRMCMYColour.h"
#include "seDRMCMYColourControlLink.h"
#include "seDRMCollisionVolume.h"
#include "seDRMColourIndex.h"
#include "seDRMColourIndexControlLink.h"
#include "seDRMColourShininess.h"
#include "seDRMColourTable.h"
#include "seDRMColourTableGroup.h"
#include "seDRMColourTableLibrary.h"
#include "seDRMConeDirectionalLight.h"
#include "seDRMConformalBehaviour.h"
#include "seDRMContactPoint.h"
#include "seDRMContinuousLODRelatedGeometry.h"
#include "seDRMCylindricalVolumeExtent.h"
#include "seDRMDataQuality.h"
#include "seDRMDataTableLibrary.h"
#include "seDRMDiffuseColour.h"
#include "seDRMDistanceLODData.h"
#include "seDRMDRMClassSummaryItem.h"
#include "seDRMECAugmented3DLocation.h"
#include "seDRMECSurfaceLocation.h"
#include "seDRMEDCSUseSummaryItem.h"
#include "seDRMEdgeDirection.h"
#include "seDRMEI3DLocation.h"
#include "seDRMEllipse.h"
#include "seDRMEmissiveColour.h"
#include "seDRMEnumerationAxis.h"
#include "seDRMEnvironmentRoot.h"
#include "seDRMEnvironmentalDomainSummary.h"
#include "seDRMFaceDirection.h"
#include "seDRMFadeRange.h"
#include "seDRMFeatureEdge.h"
#include "seDRMFeatureFace.h"
#include "seDRMFeatureFaceRing.h"
#include "seDRMFeatureModel.h"
#include "seDRMFeatureModelInstance.h"
#include "seDRMFeatureNode.h"
#include "seDRMFeatureVolume.h"
#include "seDRMFeatureVolumeShell.h"
#include "seDRMFiniteElementMesh.h"
#include "seDRMFlashingLightBehaviour.h"
#include "seDRMFunctionalAssociationData.h"
#include "seDRMGeometricCentre.h"
#include "seDRMGeometryEdge.h"
#include "seDRMGeometryFace.h"
#include "seDRMGeometryModel.h"
#include "seDRMGeometryModelInstance.h"
#include "seDRMGeometryNode.h"
#include "seDRMGeometryVolume.h"
#include "seDRMGridOverlap.h"
#include "seDRMHAEC3DLocation.h"
#include "seDRMHEEC3DLocation.h"
#include "seDRMHEEQ3DLocation.h"
#include "seDRMHierarchyData.h"
#include "seDRMHierarchySummaryItem.h"
#include "seDRMHSVColour.h"
#include "seDRMHSVColourControlLink.h"
#include "seDRMIdentification.h"
#include "seDRMImage.h"
#include "seDRMImageAnchor.h"
#include "seDRMImageLibrary.h"
#include "seDRMImageMappingFunction.h"
#include "seDRMInOut.h"
#include "seDRMIndexLODData.h"
#include "seDRMInfiniteLight.h"
#include "seDRMInlineColour.h"
#include "seDRMInterfaceTemplate.h"
#include "seDRMIntervalAxis.h"
#include "seDRMIrregularAxis.h"
#include "seDRMKeywords.h"
#include "seDRMLabel.h"
#include "seDRMLCCAugmented3DLocation.h"
#include "seDRMLCCSurfaceLocation.h"
#include "seDRMLCE3DLocation.h"
#include "seDRMLegalConstraints.h"
#include "seDRMLightRenderingProperties.h"
#include "seDRMLightRenderingPropertiesControlLink.h"
#include "seDRMLightSourceControlLink.h"
#include "seDRMLine.h"
#include "seDRMLineage.h"
#include "seDRMLinearFeature.h"
#include "seDRMLiteral.h"
#include "seDRMLobeData.h"
#include "seDRMLocal4x4.h"
#include "seDRMLODRelatedFeatures.h"
#include "seDRMLODRelatedGeometry.h"
#include "seDRMLSA2DLocation.h"
#include "seDRMLSP2DLocation.h"
#include "seDRMLSR2DLocation.h"
#include "seDRMLSR3DLocation.h"
#include "seDRMLSR3DLocationControlLink.h"
#include "seDRMLSRTransformation.h"
#include "seDRMLTSAS3DLocation.h"
#include "seDRMLTSASSurfaceLocation.h"
#include "seDRMLTSC3DLocation.h"
#include "seDRMLTSCSurfaceLocation.h"
#include "seDRMLTSE3DLocation.h"
#include "seDRMLTSESurfaceLocation.h"
#include "seDRMMAugmented3DLocation.h"
#include "seDRMMSurfaceLocation.h"
#include "seDRMMapScaleLODData.h"
#include "seDRMMeshFaceTable.h"
#include "seDRMModel.h"
#include "seDRMModelInstanceTemplateIndex.h"
#include "seDRMModelLibrary.h"
#include "seDRMMovingLightBehaviour.h"
#include "seDRMOctantData.h"
#include "seDRMOctantRelatedFeatures.h"
#include "seDRMOctantRelatedGeometry.h"
#include "seDRMOMSAugmented3DLocation.h"
#include "seDRMOMSSurfaceLocation.h"
#include "seDRMOverloadPriorityIndex.h"
#include "seDRMParallelepipedVolumeExtent.h"
#include "seDRMPD3DLocation.h"
#include "seDRMPDSurfaceLocation.h"
#include "seDRMPerimeterData.h"
#include "seDRMPerimeterRelatedFeatureTopology.h"
#include "seDRMPerimeterRelatedFeatures.h"
#include "seDRMPerimeterRelatedGeometry.h"
#include "seDRMPerimeterRelatedGeometryTopology.h"
#include "seDRMPoint.h"
#include "seDRMPointFeature.h"
#include "seDRMPolygon.h"
#include "seDRMPolygonControlLink.h"
#include "seDRMPolyhedron.h"
#include "seDRMPositionalLight.h"
#include "seDRMPredefinedFunction.h"
#include "seDRMPresentationDomain.h"
#include "seDRMPrimitiveColour.h"
#include "seDRMPrimitiveSummaryItem.h"
#include "seDRMProcessStep.h"
#include "seDRMPropertyCharacteristic.h"
#include "seDRMPropertyDescription.h"
#include "seDRMPropertyGrid.h"
#include "seDRMPropertyGridHookPoint.h"
#include "seDRMPropertySet.h"
#include "seDRMPropertySetIndex.h"
#include "seDRMPropertySetIndexControlLink.h"
#include "seDRMPropertySetTable.h"
#include "seDRMPropertySetTableGroup.h"
#include "seDRMPropertySetTableLibrary.h"
#include "seDRMPropertyTable.h"
#include "seDRMPropertyTableReference.h"
#include "seDRMPropertyTableReferenceControlLink.h"
#include "seDRMPropertyValue.h"
#include "seDRMProximityData.h"
#include "seDRMPSAugmented3DLocation.h"
#include "seDRMPSSurfaceLocation.h"
#include "seDRMPseudoCodeFunction.h"
#include "seDRMPyramidDirectionalLight.h"
#include "seDRMQuadrantData.h"
#include "seDRMQuadrantRelatedFeatures.h"
#include "seDRMQuadrantRelatedGeometry.h"
#include "seDRMReferenceOrigin.h"
#include "seDRMReferenceSurface.h"
#include "seDRMReferenceVector.h"
#include "seDRMReferenceVectorControlLink.h"
#include "seDRMRegularAxis.h"
#include "seDRMRelativeTime.h"
#include "seDRMRelativeTimeInterval.h"
#include "seDRMRenderingPriorityLevel.h"
#include "seDRMRenderingProperties.h"
#include "seDRMResponsibleParty.h"
#include "seDRMRGBColour.h"
#include "seDRMRGBColourControlLink.h"
#include "seDRMRoleData.h"
#include "seDRMRotatingLightBehaviour.h"
#include "seDRMRotation.h"
#include "seDRMRotationControlLink.h"
#include "seDRMScale.h"
#include "seDRMScaleControlLink.h"
#include "seDRMSeason.h"
#include "seDRMSecurityConstraints.h"
#include "seDRMSEC3DLocation.h"
#include "seDRMSeparatingPlane.h"
#include "seDRMSeparatingPlaneData.h"
#include "seDRMSeparatingPlaneRelatedGeometry.h"
#include "seDRMSeparatingPlaneRelations.h"
#include "seDRMSEQ3DLocation.h"
#include "seDRMSMD3DLocation.h"
#include "seDRMSME3DLocation.h"
#include "seDRMSound.h"
#include "seDRMSoundInstance.h"
#include "seDRMSoundInstanceControlLink.h"
#include "seDRMSoundLibrary.h"
#include "seDRMSoundVolume.h"
#include "seDRMSource.h"
#include "seDRMSpatialAssociationData.h"
#include "seDRMSpatialExtent.h"
#include "seDRMSpatialIndexData.h"
#include "seDRMSpatialIndexRelatedFeatureTopology.h"
#include "seDRMSpatialIndexRelatedFeatures.h"
#include "seDRMSpatialIndexRelatedGeometry.h"
#include "seDRMSpatialIndexRelatedGeometryTopology.h"
#include "seDRMSpatialResolutionLODData.h"
#include "seDRMSpecularColour.h"
#include "seDRMSphericalVolumeExtent.h"
#include "seDRMSpotLight.h"
#include "seDRMSRFSummary.h"
#include "seDRMStampBehaviour.h"
#include "seDRMStateControlLink.h"
#include "seDRMStateData.h"
#include "seDRMStateRelatedFeatures.h"
#include "seDRMStateRelatedGeometry.h"
#include "seDRMStrobingLightBehaviour.h"
#include "seDRMSymbol.h"
#include "seDRMSymbolLibrary.h"
#include "seDRMTablePropertyDescription.h"
#include "seDRMTackPoint.h"
#include "seDRMText.h"
#include "seDRMTextureCoordinate.h"
#include "seDRMTextureCoordinateControlLink.h"
#include "seDRMTimeConstraintsData.h"
#include "seDRMTimeOfDay.h"
#include "seDRMTimeRelatedFeatures.h"
#include "seDRMTimeRelatedGeometry.h"
#include "seDRMTMAugmented3DLocation.h"
#include "seDRMTMSurfaceLocation.h"
#include "seDRMTranslation.h"
#include "seDRMTranslationControlLink.h"
#include "seDRMTranslucency.h"
#include "seDRMTranslucencyControlLink.h"
#include "seDRMTransmittalRoot.h"
#include "seDRMTransmittalSummary.h"
#include "seDRMTwinklingLightBehaviour.h"
#include "seDRMUnionOfFeatureTopology.h"
#include "seDRMUnionOfFeatures.h"
#include "seDRMUnionOfGeometryHierarchy.h"
#include "seDRMUnionOfGeometryTopology.h"
#include "seDRMUnionOfPrimitiveGeometry.h"
#include "seDRMVariable.h"
#include "seDRMVertex.h"
#include "seDRMVolumeLightBehaviour.h"
#include "seDRMVolumeLODData.h"
#include "seDRMVolumeObject.h"
#include "seDRMVolumetricFeature.h"
#include "seDRMWorld3x3.h"
#include "seDRMWorldTransformation.h"

#endif // _seDRMAll_h

