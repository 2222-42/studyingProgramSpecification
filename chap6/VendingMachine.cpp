//
// THIS FILE IS AUTOMATICALLY GENERATED!!
//
// Generated at 2020-09-05 by the VDM-SL to C++ Code Generator
// (v9.0.7 - Sat 09-Jun-2018 09:35:14 +0900)
//
// This file was genereted from "E:/VDM-SL/studyingProgramSpecification/chap6/VendingMachine.vdmsl".


#include "VendingMachine.h"


static Map vdm_VendingMachine_stock;

static Map vdm_VendingMachine_price;

static Int vdm_VendingMachine_amount;

TYPE_VendingMachine_VendingMachine &TYPE_VendingMachine_VendingMachine::Init (const type_tiM &p1, const type_tiM &p2, const TYPE_VendingMachine_Yen &p3) {
  this->SetField(1, p1);
  this->SetField(2, p2);
  this->SetField(3, p3);
  return * this;
}

type_tiM TYPE_VendingMachine_VendingMachine::get_stock () const {
  return this->GetMap(1);
}

void TYPE_VendingMachine_VendingMachine::set_stock (const type_tiM &p) {
  this->SetField(1, p);
}

type_tiM TYPE_VendingMachine_VendingMachine::get_price () const {
  return this->GetMap(2);
}

void TYPE_VendingMachine_VendingMachine::set_price (const type_tiM &p) {
  this->SetField(2, p);
}

TYPE_VendingMachine_Yen TYPE_VendingMachine_VendingMachine::get_amount () const {
  return this->GetInt(3);
}

void TYPE_VendingMachine_VendingMachine::set_amount (const TYPE_VendingMachine_Yen &p) {
  this->SetField(3, p);
}

#ifndef DEF_VendingMachine_inv_VendingMachine

Bool vdm_VendingMachine_inv_VendingMachine (const TYPE_VendingMachine_VendingMachine &var_1_1) {
  const Map vdm_VendingMachine_stock (var_1_1.GetMap(pos_VendingMachine_VendingMachine_stock));
  const Map vdm_VendingMachine_price (var_1_1.GetMap(pos_VendingMachine_VendingMachine_price));
  return Bool(vdm_VendingMachine_stock.Dom() == vdm_VendingMachine_price.Dom());
}

#endif // DEF_VendingMachine_inv_VendingMachine

#ifndef DEF_VendingMachine_inv_Coint

Bool vdm_VendingMachine_inv_Coint (const TYPE_VendingMachine_Yen &vdm_VendingMachine_c) {
  return Bool(mk_set(Int(10), Int(50), Int(100), Int(500)).InSet(vdm_VendingMachine_c));
}

#endif // DEF_VendingMachine_inv_Coint


void init_VendingMachine_VDMLib () {
  VDMGetDefaultRecInfoMap().NewTag(TAG_TYPE_VendingMachine_VendingMachine, 3);
  VDMGetDefaultRecInfoMap().SetSymTag(TAG_TYPE_VendingMachine_VendingMachine, L"VendingMachine`VendingMachine");
  AddRecordTag(L"VendingMachine`VendingMachine", TAG_TYPE_VendingMachine_VendingMachine);
}

#ifdef DEF_VendingMachine_USERIMPL

#include "VendingMachine_userimpl.cpp"


#endif // DEF_VendingMachine_USERIMPL


void init_VendingMachine () {
  init_VendingMachine_VDMLib();
  {

#include "VendingMachine_init.cpp"


  }
}

#ifndef DEF_VendingMachine_init_uVendingMachine

Bool vdm_VendingMachine_init_uVendingMachine (const TYPE_VendingMachine_VendingMachine &var_1_1) {
  const Map vdm_VendingMachine_stock (var_1_1.GetMap(pos_VendingMachine_VendingMachine_stock));
  const Map vdm_VendingMachine_price (var_1_1.GetMap(pos_VendingMachine_VendingMachine_price));
  const Int vdm_VendingMachine_amount (var_1_1.GetInt(pos_VendingMachine_VendingMachine_amount));
  return Bool(((vdm_VendingMachine_stock == Map()) ? (vdm_VendingMachine_price == Map()) : false) ? (vdm_VendingMachine_amount.GetValue() == 0) : false);
}

#endif // DEF_VendingMachine_init_uVendingMachine

