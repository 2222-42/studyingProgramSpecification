//
// THIS FILE IS AUTOMATICALLY GENERATED!!
//
// Generated at 2020-08-26 by the VDM-SL to C++ Code Generator
// (v9.0.7 - Sat 09-Jun-2018 09:35:14 +0900)
//
// This file was genereted from "E:\\VDM-SL\\studyingProgramSpecification\\chap4\\exchangeOp.vdmsl".


#include "exchangeOp.h"


static Int vdm_exchangeOp_x;

static Int vdm_exchangeOp_y;

TYPE_exchangeOp_vars &TYPE_exchangeOp_vars::Init (const Int &p1, const Int &p2) {
  this->SetField(1, p1);
  this->SetField(2, p2);
  return * this;
}

Int TYPE_exchangeOp_vars::get_x () const {
  return this->GetInt(1);
}

void TYPE_exchangeOp_vars::set_x (const Int &p) {
  this->SetField(1, p);
}

Int TYPE_exchangeOp_vars::get_y () const {
  return this->GetInt(2);
}

void TYPE_exchangeOp_vars::set_y (const Int &p) {
  this->SetField(2, p);
}

void init_exchangeOp_VDMLib () {
  VDMGetDefaultRecInfoMap().NewTag(TAG_TYPE_exchangeOp_vars, 2);
  VDMGetDefaultRecInfoMap().SetSymTag(TAG_TYPE_exchangeOp_vars, L"exchangeOp`vars");
  AddRecordTag(L"exchangeOp`vars", TAG_TYPE_exchangeOp_vars);
}

#include "exchangeOp_userimpl.cpp"


void init_exchangeOp () {
  init_exchangeOp_VDMLib();
}

#ifndef DEF_exchangeOp_post_exchange

Bool vdm_exchangeOp_post_exchange (const TYPE_exchangeOp_vars &var_1_1, const TYPE_exchangeOp_vars &var_2_2) {
  const Int _vdm_exchangeOp_x (var_1_1.GetInt(pos_exchangeOp_vars_x));
  const Int _vdm_exchangeOp_y (var_1_1.GetInt(pos_exchangeOp_vars_y));
  const Int vdm_exchangeOp_x (var_2_2.GetInt(pos_exchangeOp_vars_x));
  const Int vdm_exchangeOp_y (var_2_2.GetInt(pos_exchangeOp_vars_y));
  return Bool((vdm_exchangeOp_x.GetValue() == _vdm_exchangeOp_y.GetValue()) ? (vdm_exchangeOp_y.GetValue() == _vdm_exchangeOp_x.GetValue()) : false);
}

#endif // DEF_exchangeOp_post_exchange


