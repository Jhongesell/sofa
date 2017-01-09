/******************************************************************************
*       SOFA, Simulation Open-Framework Architecture, v16.12                  *
*                (c) 2006-2016 INRIA, USTL, UJF, CNRS, MGH                    *
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
#include "ParticleSink.h"
#include <sofa/core/ObjectFactory.h>
#include <sofa/defaulttype/VecTypes.h>
#include "sofa/defaulttype/Vec3Types.h"

namespace sofa
{

namespace component
{

namespace misc
{

SOFA_DECL_CLASS(ParticleSink)

int ParticleSinkClass = core::RegisterObject("Parametrable particle generator")
#ifndef SOFA_FLOAT
        .add< ParticleSink<defaulttype::Vec3dTypes> >()
        .add< ParticleSink<defaulttype::Vec2dTypes> >()
#endif
#ifndef SOFA_DOUBLE
        .add< ParticleSink<defaulttype::Vec3fTypes> >()
        .add< ParticleSink<defaulttype::Vec2fTypes> >()
#endif
        ;

}
}
}
