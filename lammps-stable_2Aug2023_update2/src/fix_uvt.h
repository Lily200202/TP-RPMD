/* -*- c++ -*- ----------------------------------------------------------
   LAMMPS - Large-scale Atomic/Molecular Massively Parallel Simulator
   https://www.lammps.org/, Sandia National Laboratories
   LAMMPS development team: developers@lammps.org

   Copyright (2003) Sandia Corporation.  Under the terms of Contract
   DE-AC04-94AL85000 with Sandia Corporation, the U.S. Government retains
   certain rights in this software.  This software is distributed under
   the GNU General Public License.

   See the README file in the top-level LAMMPS directory.
------------------------------------------------------------------------- */

#ifdef FIX_CLASS
// clang-format off
FixStyle(uvt,FixUVT);
// clang-format on
#else

#ifndef LMP_FIX_UVT_H
#define LMP_FIX_UVT_H

#include "fix_nh.h"

namespace LAMMPS_NS {

class FixUVT : public FixNH {
 public:
  FixUVT(class LAMMPS *, int, char **);
};

}    // namespace LAMMPS_NS

#endif
#endif