//
// THIS FILE IS AUTOMATICALLY GENERATED!!
//
// Generated at 2020-08-26 by the VDM-SL to C++ Code Generator
// (v9.0.7 - Sat 09-Jun-2018 09:35:14 +0900)
//
// This file was genereted from "E:/VDM-SL/studyingProgramSpecification/chap4/fact.vdmsl".


#include "fact.h"


#ifdef DEF_fact_USERIMPL

#include "fact_userimpl.cpp"


#endif // DEF_fact_USERIMPL


void init_fact () {}

#ifndef DEF_fact_fact

Int vdm_fact_fact (const Int &vdm_fact_n) {
  Int varRes_2;
  bool succ_3 = false;
  if ((succ_3 = (vdm_fact_n == Int(0)))) {
    varRes_2 = Int(1);
  }
  if (!succ_3) {
    varRes_2 = vdm_fact_n * vdm_fact_fact(vdm_fact_n - Int(1));
  }
  return varRes_2;
}

#endif // DEF_fact_fact

