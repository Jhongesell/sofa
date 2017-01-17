/******************************************************************************
*       SOFA, Simulation Open-Framework Architecture, development version     *
*                (c) 2006-2017 INRIA, USTL, UJF, CNRS, MGH                    *
*                                                                             *
* This program is free software; you can redistribute it and/or modify it     *
* under the terms of the GNU Lesser General Public License as published by    *
* the Free Software Foundation; either version 2.1 of the License, or (at     *
* your option) any later version.                                             *
*                                                                             *
* This program is distributed in the hope that it will be useful, but WITHOUT *
* ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or       *
* FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License *
* for more details.                                                           *
*                                                                             *
* You should have received a copy of the GNU Lesser General Public License    *
* along with this program. If not, see <http://www.gnu.org/licenses/>.        *
*******************************************************************************
* Authors: The SOFA Team and external contributors (see Authors.txt)          *
*                                                                             *
* Contact information: contact@sofa-framework.org                             *
******************************************************************************/



// File automatically generated by "generateTypedef"


#ifndef SOFA_TYPEDEF_ProjectiveConstraintSet_double_H
#define SOFA_TYPEDEF_ProjectiveConstraintSet_double_H

//Default files containing the declaration of the vector type
#include <sofa/defaulttype/VecTypes.h>
#include <sofa/defaulttype/RigidTypes.h>
#include <sofa/defaulttype/Mat.h>




#include <SofaGeneralObjectInteraction/AttachConstraint.h>
#include <SofaBoundaryCondition/FixedConstraint.h>
#include <SofaBoundaryCondition/FixedPlaneConstraint.h>
#include <SofaBoundaryCondition/FixedRotationConstraint.h>
#include <SofaBoundaryCondition/FixedTranslationConstraint.h>
#include <SofaBoundaryCondition/HermiteSplineConstraint.h>
#include <SofaBoundaryCondition/LinearMovementConstraint.h>
#include <SofaBoundaryCondition/LinearVelocityConstraint.h>
#include <SofaBoundaryCondition/OscillatorConstraint.h>
#include <SofaBoundaryCondition/ParabolicConstraint.h>
#include <SofaBoundaryCondition/PartialFixedConstraint.h>
#include <SofaBoundaryCondition/PartialLinearMovementConstraint.h>
#include <SofaSphFluid/ParticleSink.h>
#include <SofaSphFluid/ParticleSource.h>



//---------------------------------------------------------------------------------------------
//Typedef for AttachConstraint
typedef sofa::component::projectiveconstraintset::AttachConstraint<sofa::defaulttype::StdRigidTypes<3, double> > AttachConstraintRigid3d;
typedef sofa::component::projectiveconstraintset::AttachConstraint<sofa::defaulttype::StdRigidTypes<2, double> > AttachConstraintRigid2d;
typedef sofa::component::projectiveconstraintset::AttachConstraint<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<1, double>, sofa::defaulttype::Vec<1, double>, double> > AttachConstraint1d;
typedef sofa::component::projectiveconstraintset::AttachConstraint<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<2, double>, sofa::defaulttype::Vec<2, double>, double> > AttachConstraint2d;
typedef sofa::component::projectiveconstraintset::AttachConstraint<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, double>, sofa::defaulttype::Vec<3, double>, double> > AttachConstraint3d;



//---------------------------------------------------------------------------------------------
//Typedef for FixedConstraint
typedef sofa::component::projectiveconstraintset::FixedConstraint<sofa::defaulttype::StdRigidTypes<3, double> > FixedConstraintRigid3d;
typedef sofa::component::projectiveconstraintset::FixedConstraint<sofa::defaulttype::StdRigidTypes<2, double> > FixedConstraintRigid2d;
typedef sofa::component::projectiveconstraintset::FixedConstraint<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<1, double>, sofa::defaulttype::Vec<1, double>, double> > FixedConstraint1d;
typedef sofa::component::projectiveconstraintset::FixedConstraint<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<2, double>, sofa::defaulttype::Vec<2, double>, double> > FixedConstraint2d;
typedef sofa::component::projectiveconstraintset::FixedConstraint<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, double>, sofa::defaulttype::Vec<3, double>, double> > FixedConstraint3d;
typedef sofa::component::projectiveconstraintset::FixedConstraint<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<6, double>, sofa::defaulttype::Vec<6, double>, double> > FixedConstraint6d;



//---------------------------------------------------------------------------------------------
//Typedef for FixedPlaneConstraint
typedef sofa::component::projectiveconstraintset::FixedPlaneConstraint<sofa::defaulttype::StdRigidTypes<3, double> > FixedPlaneConstraintRigid3d;
typedef sofa::component::projectiveconstraintset::FixedPlaneConstraint<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, double>, sofa::defaulttype::Vec<3, double>, double> > FixedPlaneConstraint3d;
typedef sofa::component::projectiveconstraintset::FixedPlaneConstraint<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<6, double>, sofa::defaulttype::Vec<6, double>, double> > FixedPlaneConstraint6d;



//---------------------------------------------------------------------------------------------
//Typedef for FixedRotationConstraint
typedef sofa::component::projectiveconstraintset::FixedRotationConstraint<sofa::defaulttype::StdRigidTypes<3, double> > FixedRotationConstraintRigid3d;



//---------------------------------------------------------------------------------------------
//Typedef for FixedTranslationConstraint
typedef sofa::component::projectiveconstraintset::FixedTranslationConstraint<sofa::defaulttype::StdRigidTypes<3, double> > FixedTranslationConstraintRigid3d;
typedef sofa::component::projectiveconstraintset::FixedTranslationConstraint<sofa::defaulttype::StdRigidTypes<2, double> > FixedTranslationConstraintRigid2d;
typedef sofa::component::projectiveconstraintset::FixedTranslationConstraint<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<6, double>, sofa::defaulttype::Vec<6, double>, double> > FixedTranslationConstraint6d;



//---------------------------------------------------------------------------------------------
//Typedef for HermiteSplineConstraint
typedef sofa::component::projectiveconstraintset::HermiteSplineConstraint<sofa::defaulttype::StdRigidTypes<3, double> > HermiteSplineConstraintRigid3d;
typedef sofa::component::projectiveconstraintset::HermiteSplineConstraint<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, double>, sofa::defaulttype::Vec<3, double>, double> > HermiteSplineConstraint3d;



//---------------------------------------------------------------------------------------------
//Typedef for LinearMovementConstraint
typedef sofa::component::projectiveconstraintset::LinearMovementConstraint<sofa::defaulttype::StdRigidTypes<3, double> > LinearMovementConstraintRigid3d;
typedef sofa::component::projectiveconstraintset::LinearMovementConstraint<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<1, double>, sofa::defaulttype::Vec<1, double>, double> > LinearMovementConstraint1d;
typedef sofa::component::projectiveconstraintset::LinearMovementConstraint<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<2, double>, sofa::defaulttype::Vec<2, double>, double> > LinearMovementConstraint2d;
typedef sofa::component::projectiveconstraintset::LinearMovementConstraint<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, double>, sofa::defaulttype::Vec<3, double>, double> > LinearMovementConstraint3d;
typedef sofa::component::projectiveconstraintset::LinearMovementConstraint<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<6, double>, sofa::defaulttype::Vec<6, double>, double> > LinearMovementConstraint6d;



//---------------------------------------------------------------------------------------------
//Typedef for LinearVelocityConstraint
typedef sofa::component::projectiveconstraintset::LinearVelocityConstraint<sofa::defaulttype::StdRigidTypes<3, double> > LinearVelocityConstraintRigid3d;
typedef sofa::component::projectiveconstraintset::LinearVelocityConstraint<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<1, double>, sofa::defaulttype::Vec<1, double>, double> > LinearVelocityConstraint1d;
typedef sofa::component::projectiveconstraintset::LinearVelocityConstraint<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<2, double>, sofa::defaulttype::Vec<2, double>, double> > LinearVelocityConstraint2d;
typedef sofa::component::projectiveconstraintset::LinearVelocityConstraint<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, double>, sofa::defaulttype::Vec<3, double>, double> > LinearVelocityConstraint3d;
typedef sofa::component::projectiveconstraintset::LinearVelocityConstraint<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<6, double>, sofa::defaulttype::Vec<6, double>, double> > LinearVelocityConstraint6d;



//---------------------------------------------------------------------------------------------
//Typedef for OscillatorConstraint
typedef sofa::component::projectiveconstraintset::OscillatorConstraint<sofa::defaulttype::StdRigidTypes<3, double> > OscillatorConstraintRigid3d;
typedef sofa::component::projectiveconstraintset::OscillatorConstraint<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, double>, sofa::defaulttype::Vec<3, double>, double> > OscillatorConstraint3d;



//---------------------------------------------------------------------------------------------
//Typedef for ParabolicConstraint
typedef sofa::component::projectiveconstraintset::ParabolicConstraint<sofa::defaulttype::StdRigidTypes<3, double> > ParabolicConstraintRigid3d;
typedef sofa::component::projectiveconstraintset::ParabolicConstraint<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, double>, sofa::defaulttype::Vec<3, double>, double> > ParabolicConstraint3d;



//---------------------------------------------------------------------------------------------
//Typedef for PartialFixedConstraint
typedef sofa::component::projectiveconstraintset::PartialFixedConstraint<sofa::defaulttype::StdRigidTypes<3, double> > PartialFixedConstraintRigid3d;
typedef sofa::component::projectiveconstraintset::PartialFixedConstraint<sofa::defaulttype::StdRigidTypes<2, double> > PartialFixedConstraintRigid2d;
typedef sofa::component::projectiveconstraintset::PartialFixedConstraint<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<1, double>, sofa::defaulttype::Vec<1, double>, double> > PartialFixedConstraint1d;
typedef sofa::component::projectiveconstraintset::PartialFixedConstraint<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<2, double>, sofa::defaulttype::Vec<2, double>, double> > PartialFixedConstraint2d;
typedef sofa::component::projectiveconstraintset::PartialFixedConstraint<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, double>, sofa::defaulttype::Vec<3, double>, double> > PartialFixedConstraint3d;
typedef sofa::component::projectiveconstraintset::PartialFixedConstraint<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<6, double>, sofa::defaulttype::Vec<6, double>, double> > PartialFixedConstraint6d;



//---------------------------------------------------------------------------------------------
//Typedef for PartialLinearMovementConstraint
typedef sofa::component::projectiveconstraintset::PartialLinearMovementConstraint<sofa::defaulttype::StdRigidTypes<3, double> > PartialLinearMovementConstraintRigid3d;
typedef sofa::component::projectiveconstraintset::PartialLinearMovementConstraint<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<1, double>, sofa::defaulttype::Vec<1, double>, double> > PartialLinearMovementConstraint1d;
typedef sofa::component::projectiveconstraintset::PartialLinearMovementConstraint<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<2, double>, sofa::defaulttype::Vec<2, double>, double> > PartialLinearMovementConstraint2d;
typedef sofa::component::projectiveconstraintset::PartialLinearMovementConstraint<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, double>, sofa::defaulttype::Vec<3, double>, double> > PartialLinearMovementConstraint3d;
typedef sofa::component::projectiveconstraintset::PartialLinearMovementConstraint<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<6, double>, sofa::defaulttype::Vec<6, double>, double> > PartialLinearMovementConstraint6d;



//---------------------------------------------------------------------------------------------
//Typedef for ParticleSink
typedef sofa::component::misc::ParticleSink<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<2, double>, sofa::defaulttype::Vec<2, double>, double> > ParticleSink2d;
typedef sofa::component::misc::ParticleSink<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, double>, sofa::defaulttype::Vec<3, double>, double> > ParticleSink3d;



//---------------------------------------------------------------------------------------------
//Typedef for ParticleSource
typedef sofa::component::misc::ParticleSource<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<2, double>, sofa::defaulttype::Vec<2, double>, double> > ParticleSource2d;
typedef sofa::component::misc::ParticleSource<sofa::defaulttype::StdVectorTypes<sofa::defaulttype::Vec<3, double>, sofa::defaulttype::Vec<3, double>, double> > ParticleSource3d;





#ifndef SOFA_FLOAT
typedef AttachConstraintRigid3d AttachConstraintRigid3;
typedef AttachConstraintRigid2d AttachConstraintRigid2;
typedef AttachConstraint1d AttachConstraint1;
typedef AttachConstraint2d AttachConstraint2;
typedef AttachConstraint3d AttachConstraint3;
typedef FixedConstraintRigid3d FixedConstraintRigid3;
typedef FixedConstraintRigid2d FixedConstraintRigid2;
typedef FixedConstraint1d FixedConstraint1;
typedef FixedConstraint2d FixedConstraint2;
typedef FixedConstraint3d FixedConstraint3;
typedef FixedConstraint6d FixedConstraint6;
typedef FixedPlaneConstraintRigid3d FixedPlaneConstraintRigid3;
typedef FixedPlaneConstraint3d FixedPlaneConstraint3;
typedef FixedPlaneConstraint6d FixedPlaneConstraint6;
typedef FixedRotationConstraintRigid3d FixedRotationConstraintRigid3;
typedef FixedTranslationConstraintRigid3d FixedTranslationConstraintRigid3;
typedef FixedTranslationConstraintRigid2d FixedTranslationConstraintRigid2;
typedef FixedTranslationConstraint6d FixedTranslationConstraint6;
typedef HermiteSplineConstraintRigid3d HermiteSplineConstraintRigid3;
typedef HermiteSplineConstraint3d HermiteSplineConstraint3;
typedef LinearMovementConstraintRigid3d LinearMovementConstraintRigid3;
typedef LinearMovementConstraint1d LinearMovementConstraint1;
typedef LinearMovementConstraint2d LinearMovementConstraint2;
typedef LinearMovementConstraint3d LinearMovementConstraint3;
typedef LinearMovementConstraint6d LinearMovementConstraint6;
typedef LinearVelocityConstraintRigid3d LinearVelocityConstraintRigid3;
typedef LinearVelocityConstraint1d LinearVelocityConstraint1;
typedef LinearVelocityConstraint2d LinearVelocityConstraint2;
typedef LinearVelocityConstraint3d LinearVelocityConstraint3;
typedef LinearVelocityConstraint6d LinearVelocityConstraint6;
typedef OscillatorConstraintRigid3d OscillatorConstraintRigid3;
typedef OscillatorConstraint3d OscillatorConstraint3;
typedef ParabolicConstraintRigid3d ParabolicConstraintRigid3;
typedef ParabolicConstraint3d ParabolicConstraint3;
typedef PartialFixedConstraintRigid3d PartialFixedConstraintRigid3;
typedef PartialFixedConstraintRigid2d PartialFixedConstraintRigid2;
typedef PartialFixedConstraint1d PartialFixedConstraint1;
typedef PartialFixedConstraint2d PartialFixedConstraint2;
typedef PartialFixedConstraint3d PartialFixedConstraint3;
typedef PartialFixedConstraint6d PartialFixedConstraint6;
typedef PartialLinearMovementConstraintRigid3d PartialLinearMovementConstraintRigid3;
typedef PartialLinearMovementConstraint1d PartialLinearMovementConstraint1;
typedef PartialLinearMovementConstraint2d PartialLinearMovementConstraint2;
typedef PartialLinearMovementConstraint3d PartialLinearMovementConstraint3;
typedef PartialLinearMovementConstraint6d PartialLinearMovementConstraint6;
typedef ParticleSink2d ParticleSink2;
typedef ParticleSink3d ParticleSink3;
typedef ParticleSource2d ParticleSource2;
typedef ParticleSource3d ParticleSource3;
#endif

#endif
