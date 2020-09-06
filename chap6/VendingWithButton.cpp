//
// THIS FILE IS AUTOMATICALLY GENERATED!!
//
// Generated at 2020-09-06 by the VDM-SL to C++ Code Generator
// (v9.0.7 - Sat 09-Jun-2018 09:35:14 +0900)
//
// This file was genereted from "E:/VDM-SL/studyingProgramSpecification/chap6/VendingWithButton.vdmsl".


#include "VendingWithButton.h"


static TYPE_VendingWithButton_Model vdm_VendingWithButton_model;

static TYPE_VendingWithButton_ButtonInfo vdm_VendingWithButton_button;

static TYPE_VendingWithButton_ColumnInfo vdm_VendingWithButton_column;

TYPE_VendingWithButton_VendingMachine &TYPE_VendingWithButton_VendingMachine::Init (const TYPE_VendingWithButton_Model &p1, const TYPE_VendingWithButton_ButtonInfo &p2, const TYPE_VendingWithButton_ColumnInfo &p3) {
  this->SetField(1, p1);
  this->SetField(2, p2);
  this->SetField(3, p3);
  return * this;
}

TYPE_VendingWithButton_Model TYPE_VendingWithButton_VendingMachine::get_model () const {
  return this->GetRecord(1);
}

void TYPE_VendingWithButton_VendingMachine::set_model (const TYPE_VendingWithButton_Model &p) {
  this->SetField(1, p);
}

TYPE_VendingWithButton_ButtonInfo TYPE_VendingWithButton_VendingMachine::get_button () const {
  return this->GetRecord(2);
}

void TYPE_VendingWithButton_VendingMachine::set_button (const TYPE_VendingWithButton_ButtonInfo &p) {
  this->SetField(2, p);
}

TYPE_VendingWithButton_ColumnInfo TYPE_VendingWithButton_VendingMachine::get_column () const {
  return this->GetRecord(3);
}

void TYPE_VendingWithButton_VendingMachine::set_column (const TYPE_VendingWithButton_ColumnInfo &p) {
  this->SetField(3, p);
}

TYPE_VendingWithButton_Lamp &TYPE_VendingWithButton_Lamp::Init (const type_tUM &p1, const type_tUM &p2) {
  this->SetField(1, p1);
  this->SetField(2, p2);
  return * this;
}

type_tUM TYPE_VendingWithButton_Lamp::get_soldOut () const {
  return this->GetMap(1);
}

void TYPE_VendingWithButton_Lamp::set_soldOut (const type_tUM &p) {
  this->SetField(1, p);
}

type_tUM TYPE_VendingWithButton_Lamp::get_sell () const {
  return this->GetMap(2);
}

void TYPE_VendingWithButton_Lamp::set_sell (const type_tUM &p) {
  this->SetField(2, p);
}

TYPE_VendingWithButton_Model &TYPE_VendingWithButton_Model::Init (const type_tiM &p1, const type_tiM &p2, const TYPE_VendingWithButton_Yen &p3) {
  this->SetField(1, p1);
  this->SetField(2, p2);
  this->SetField(3, p3);
  return * this;
}

type_tiM TYPE_VendingWithButton_Model::get_stock () const {
  return this->GetMap(1);
}

void TYPE_VendingWithButton_Model::set_stock (const type_tiM &p) {
  this->SetField(1, p);
}

type_tiM TYPE_VendingWithButton_Model::get_price () const {
  return this->GetMap(2);
}

void TYPE_VendingWithButton_Model::set_price (const type_tiM &p) {
  this->SetField(2, p);
}

TYPE_VendingWithButton_Yen TYPE_VendingWithButton_Model::get_amount () const {
  return this->GetInt(3);
}

void TYPE_VendingWithButton_Model::set_amount (const TYPE_VendingWithButton_Yen &p) {
  this->SetField(3, p);
}

TYPE_VendingWithButton_ButtonInfo &TYPE_VendingWithButton_ButtonInfo::Init (const type_ttM &p1, const TYPE_VendingWithButton_Lamp &p2) {
  this->SetField(1, p1);
  this->SetField(2, p2);
  return * this;
}

type_ttM TYPE_VendingWithButton_ButtonInfo::get_b2g () const {
  return this->GetMap(1);
}

void TYPE_VendingWithButton_ButtonInfo::set_b2g (const type_ttM &p) {
  this->SetField(1, p);
}

TYPE_VendingWithButton_Lamp TYPE_VendingWithButton_ButtonInfo::get_lamp () const {
  return this->GetRecord(2);
}

void TYPE_VendingWithButton_ButtonInfo::set_lamp (const TYPE_VendingWithButton_Lamp &p) {
  this->SetField(2, p);
}

TYPE_VendingWithButton_ColumnInfo &TYPE_VendingWithButton_ColumnInfo::Init (const type_ttM &p1, const type_tiM &p2) {
  this->SetField(1, p1);
  this->SetField(2, p2);
  return * this;
}

type_ttM TYPE_VendingWithButton_ColumnInfo::get_c2g () const {
  return this->GetMap(1);
}

void TYPE_VendingWithButton_ColumnInfo::set_c2g (const type_ttM &p) {
  this->SetField(1, p);
}

type_tiM TYPE_VendingWithButton_ColumnInfo::get_stock () const {
  return this->GetMap(2);
}

void TYPE_VendingWithButton_ColumnInfo::set_stock (const type_tiM &p) {
  this->SetField(2, p);
}

#ifndef DEF_VendingWithButton_inv_VendingMachine

Bool vdm_VendingWithButton_inv_VendingMachine (const TYPE_VendingWithButton_VendingMachine &var_1_1) {
  const TYPE_VendingWithButton_Model vdm_VendingWithButton_model (var_1_1.GetRecord(pos_VendingWithButton_VendingMachine_model));
  const TYPE_VendingWithButton_ButtonInfo vdm_VendingWithButton_button (var_1_1.GetRecord(pos_VendingWithButton_VendingMachine_button));
  const TYPE_VendingWithButton_ColumnInfo vdm_VendingWithButton_column (var_1_1.GetRecord(pos_VendingWithButton_VendingMachine_column));
  return Bool(((vdm_VendingWithButton_button.GetMap(pos_VendingWithButton_ButtonInfo_b2g).Rng().SubSet(vdm_VendingWithButton_model.GetMap(pos_VendingWithButton_Model_stock).Dom())) ? (vdm_VendingWithButton_button.GetRecord(pos_VendingWithButton_ButtonInfo_lamp) == vdm_VendingWithButton_LampStatus(vdm_VendingWithButton_button.GetMap(pos_VendingWithButton_ButtonInfo_b2g), vdm_VendingWithButton_model)) : false) ? (vdm_VendingWithButton_model.GetMap(pos_VendingWithButton_Model_stock) == vdm_VendingWithButton_Stock(vdm_VendingWithButton_column)) : false);
}

#endif // DEF_VendingWithButton_inv_VendingMachine

#ifndef DEF_VendingWithButton_inv_Coin

Bool vdm_VendingWithButton_inv_Coin (const TYPE_VendingWithButton_Yen &vdm_VendingWithButton_c) {
  return Bool(mk_set(Int(10), Int(50), Int(100), Int(500)).InSet(vdm_VendingWithButton_c));
}

#endif // DEF_VendingWithButton_inv_Coin

#ifndef DEF_VendingWithButton_inv_Lamp

Bool vdm_VendingWithButton_inv_Lamp (const TYPE_VendingWithButton_Lamp &var_1_1) {
  const Map vdm_VendingWithButton_soldOut (var_1_1.GetMap(pos_VendingWithButton_Lamp_soldOut));
  const Map vdm_VendingWithButton_sell (var_1_1.GetMap(pos_VendingWithButton_Lamp_sell));
  return Bool(vdm_VendingWithButton_soldOut.Dom() == vdm_VendingWithButton_sell.Dom());
}

#endif // DEF_VendingWithButton_inv_Lamp

#ifndef DEF_VendingWithButton_inv_Model

Bool vdm_VendingWithButton_inv_Model (const TYPE_VendingWithButton_Model &var_1_1) {
  const Map vdm_VendingWithButton_stock (var_1_1.GetMap(pos_VendingWithButton_Model_stock));
  const Map vdm_VendingWithButton_price (var_1_1.GetMap(pos_VendingWithButton_Model_price));
  return Bool(vdm_VendingWithButton_stock.Dom() == vdm_VendingWithButton_price.Dom());
}

#endif // DEF_VendingWithButton_inv_Model

#ifndef DEF_VendingWithButton_inv_ButtonInfo

Bool vdm_VendingWithButton_inv_ButtonInfo (const TYPE_VendingWithButton_ButtonInfo &var_1_1) {
  const Map vdm_VendingWithButton_b2g (var_1_1.GetMap(pos_VendingWithButton_ButtonInfo_b2g));
  const TYPE_VendingWithButton_Lamp vdm_VendingWithButton_lamp (var_1_1.GetRecord(pos_VendingWithButton_ButtonInfo_lamp));
  return Bool((vdm_VendingWithButton_b2g.Dom() == vdm_VendingWithButton_lamp.GetMap(pos_VendingWithButton_Lamp_soldOut).Dom()) ? (vdm_VendingWithButton_b2g.Dom() == vdm_VendingWithButton_lamp.GetMap(pos_VendingWithButton_Lamp_sell).Dom()) : false);
}

#endif // DEF_VendingWithButton_inv_ButtonInfo

#ifndef DEF_VendingWithButton_inv_ColumnInfo

Bool vdm_VendingWithButton_inv_ColumnInfo (const TYPE_VendingWithButton_ColumnInfo &var_1_1) {
  const Map vdm_VendingWithButton_c2g (var_1_1.GetMap(pos_VendingWithButton_ColumnInfo_c2g));
  const Map vdm_VendingWithButton_stock (var_1_1.GetMap(pos_VendingWithButton_ColumnInfo_stock));
  return Bool(vdm_VendingWithButton_c2g.Dom() == vdm_VendingWithButton_stock.Dom());
}

#endif // DEF_VendingWithButton_inv_ColumnInfo


void init_VendingWithButton_VDMLib () {
  VDMGetDefaultRecInfoMap().NewTag(TAG_TYPE_VendingWithButton_Lamp, 2);
  VDMGetDefaultRecInfoMap().SetSymTag(TAG_TYPE_VendingWithButton_Lamp, L"VendingWithButton`Lamp");
  AddRecordTag(L"VendingWithButton`Lamp", TAG_TYPE_VendingWithButton_Lamp);
  VDMGetDefaultRecInfoMap().NewTag(TAG_TYPE_VendingWithButton_Model, 3);
  VDMGetDefaultRecInfoMap().SetSymTag(TAG_TYPE_VendingWithButton_Model, L"VendingWithButton`Model");
  AddRecordTag(L"VendingWithButton`Model", TAG_TYPE_VendingWithButton_Model);
  VDMGetDefaultRecInfoMap().NewTag(TAG_TYPE_VendingWithButton_ButtonInfo, 2);
  VDMGetDefaultRecInfoMap().SetSymTag(TAG_TYPE_VendingWithButton_ButtonInfo, L"VendingWithButton`ButtonInfo");
  AddRecordTag(L"VendingWithButton`ButtonInfo", TAG_TYPE_VendingWithButton_ButtonInfo);
  VDMGetDefaultRecInfoMap().NewTag(TAG_TYPE_VendingWithButton_ColumnInfo, 2);
  VDMGetDefaultRecInfoMap().SetSymTag(TAG_TYPE_VendingWithButton_ColumnInfo, L"VendingWithButton`ColumnInfo");
  AddRecordTag(L"VendingWithButton`ColumnInfo", TAG_TYPE_VendingWithButton_ColumnInfo);
  VDMGetDefaultRecInfoMap().NewTag(TAG_TYPE_VendingWithButton_VendingMachine, 3);
  VDMGetDefaultRecInfoMap().SetSymTag(TAG_TYPE_VendingWithButton_VendingMachine, L"VendingWithButton`VendingMachine");
  AddRecordTag(L"VendingWithButton`VendingMachine", TAG_TYPE_VendingWithButton_VendingMachine);
}

#include "VendingWithButton_userimpl.cpp"


void init_VendingWithButton () {
  init_VendingWithButton_VDMLib();
  {

#include "VendingWithButton_init.cpp"


  }
}

#ifndef DEF_VendingWithButton_Stock

type_tiM vdm_VendingWithButton_Stock (const TYPE_VendingWithButton_ColumnInfo &vdm_VendingWithButton_column) {
  Map res_m_3;
  const Set e1_set_18 (vdm_VendingWithButton_column.GetMap(pos_VendingWithButton_ColumnInfo_c2g).Rng());
  Set tmpSet_21 (e1_set_18);
  Generic tmpe_20;
  for (bool bb_19 = tmpSet_21.First(tmpe_20); bb_19; bb_19 = tmpSet_21.Next(tmpe_20)) {
    const Token vdm_VendingWithButton_g (tmpe_20);
    res_m_3.Insert(vdm_VendingWithButton_g, vdm_VendingWithButton_SumStock(vdm_VendingWithButton_column.GetMap(pos_VendingWithButton_ColumnInfo_stock).DomRestrictedTo(vdm_VendingWithButton_column.GetMap(pos_VendingWithButton_ColumnInfo_c2g).RngRestrictedTo(mk_set(vdm_VendingWithButton_g)).Dom())));
  }
  return res_m_3;
}

#endif // DEF_VendingWithButton_Stock

#ifndef DEF_VendingWithButton_SellLamp

type_tUM vdm_VendingWithButton_SellLamp (const type_ttM &vdm_VendingWithButton_b2g, const TYPE_VendingWithButton_Model &vdm_VendingWithButton_model) {
  if (!vdm_VendingWithButton_pre_SellLamp(vdm_VendingWithButton_b2g, vdm_VendingWithButton_model).GetValue()) {
    CGUTIL::RunTime(L"Precondition failure in SellLamp");
  }
  Map res_m_4;
  const Set e1_set_14 (vdm_VendingWithButton_b2g.Dom());
  Set tmpSet_17 (e1_set_14);
  Generic tmpe_16;
  for (bool bb_15 = tmpSet_17.First(tmpe_16); bb_15; bb_15 = tmpSet_17.Next(tmpe_16)) {
    const Token vdm_VendingWithButton_b (tmpe_16);
    res_m_4.Insert(vdm_VendingWithButton_b, static_cast<const Quote &>(vdm_VendingWithButton_SellStatus(vdm_VendingWithButton_model)[static_cast<const Token &>(vdm_VendingWithButton_b2g[vdm_VendingWithButton_b])]));
  }
  return res_m_4;
}

#endif // DEF_VendingWithButton_SellLamp

#ifndef DEF_VendingWithButton_pre_SellLamp

Bool vdm_VendingWithButton_pre_SellLamp (const type_ttM &vdm_VendingWithButton_b2g, const TYPE_VendingWithButton_Model &vdm_VendingWithButton_model) {
  return Bool(vdm_VendingWithButton_b2g.Dom().SubSet(vdm_VendingWithButton_model.GetMap(pos_VendingWithButton_Model_stock).Dom()));
}

#endif // DEF_VendingWithButton_pre_SellLamp

#ifndef DEF_VendingWithButton_SumStock

Int vdm_VendingWithButton_SumStock (const type_tiM &vdm_VendingWithButton_m) {
  Int varRes_2;
  if (vdm_VendingWithButton_m == Map()) {
    varRes_2 = Int(0);
  }
  else {
    Token vdm_VendingWithButton_i;
    bool succ_26 = false;
    Set tmpSet_29 (vdm_VendingWithButton_m.Dom());
    Generic tmpe_28;
    for (bool bb_27 = tmpSet_29.First(tmpe_28); bb_27 && !succ_26; bb_27 = tmpSet_29.Next(tmpe_28)) {
      const Token tmpElem_23 (tmpe_28);
      vdm_VendingWithButton_i = tmpElem_23;
      succ_26 = true;
    }
    if (!succ_26) {
      CGUTIL::RunTime(L"The binding environment was empty");
    }
    varRes_2 = static_cast<const Int &>(vdm_VendingWithButton_m[vdm_VendingWithButton_i]) + vdm_VendingWithButton_SumStock(vdm_VendingWithButton_m.DomRestrictedBy(mk_set(vdm_VendingWithButton_i)));
  }
  return varRes_2;
}

#endif // DEF_VendingWithButton_SumStock

#ifndef DEF_VendingWithButton_ExistStock

Bool vdm_VendingWithButton_ExistStock (const TYPE_VendingWithButton_Goods &vdm_VendingWithButton_g, const type_tiM &vdm_VendingWithButton_stock) {
  if (!vdm_VendingWithButton_pre_ExistStock(vdm_VendingWithButton_g, vdm_VendingWithButton_stock).GetValue()) {
    CGUTIL::RunTime(L"Precondition failure in ExistStock");
  }
  return Bool((static_cast<const Int &>(vdm_VendingWithButton_stock[vdm_VendingWithButton_g])).GetValue() > 0);
}

#endif // DEF_VendingWithButton_ExistStock

#ifndef DEF_VendingWithButton_pre_ExistStock

Bool vdm_VendingWithButton_pre_ExistStock (const TYPE_VendingWithButton_Goods &vdm_VendingWithButton_g, const type_tiM &vdm_VendingWithButton_stock) {
  return Bool(vdm_VendingWithButton_stock.Dom().InSet(vdm_VendingWithButton_g));
}

#endif // DEF_VendingWithButton_pre_ExistStock

#ifndef DEF_VendingWithButton_LampStatus

TYPE_VendingWithButton_Lamp vdm_VendingWithButton_LampStatus (const type_ttM &vdm_VendingWithButton_b2g, const TYPE_VendingWithButton_Model &vdm_VendingWithButton_model) {
  return TYPE_VendingWithButton_Lamp().Init(vdm_VendingWithButton_SoldOutLamp(vdm_VendingWithButton_b2g, vdm_VendingWithButton_model), vdm_VendingWithButton_SellLamp(vdm_VendingWithButton_b2g, vdm_VendingWithButton_model));
}

#endif // DEF_VendingWithButton_LampStatus

#ifndef DEF_VendingWithButton_SellStatus

type_tUM vdm_VendingWithButton_SellStatus (const TYPE_VendingWithButton_Model &var_1_1) {
  Map vdm_VendingWithButton_price;
  Map vdm_VendingWithButton_stock;
  Int vdm_VendingWithButton_amount;
  bool succ_19 = false;
  if ((succ_19 = (var_1_1.Is(vdm_VendingWithButton_Model)))) {
    vdm_VendingWithButton_stock = var_1_1.GetMap(pos_VendingWithButton_Model_stock);
    vdm_VendingWithButton_price = var_1_1.GetMap(pos_VendingWithButton_Model_price);
    vdm_VendingWithButton_amount = var_1_1.GetInt(pos_VendingWithButton_Model_amount);
  }
  if (!succ_19) {
    CGUTIL::RunTime(L"Pattern match failed in function apply in function SellStatus");
  }
  Map res_m_3;
  const Set e1_set_15 (vdm_VendingWithButton_stock.Dom());
  Set tmpSet_18 (e1_set_15);
  Generic tmpe_17;
  for (bool bb_16 = tmpSet_18.First(tmpe_17); bb_16; bb_16 = tmpSet_18.Next(tmpe_17)) {
    const Token vdm_VendingWithButton_g (tmpe_17);
    res_m_3.Insert(vdm_VendingWithButton_g, (vdm_VendingWithButton_AvailablePurchase(vdm_VendingWithButton_g, vdm_VendingWithButton_stock, vdm_VendingWithButton_price, vdm_VendingWithButton_amount).GetValue() ? Quote(L"on") : Quote(L"off")));
  }
  return res_m_3;
}

#endif // DEF_VendingWithButton_SellStatus

#ifndef DEF_VendingWithButton_EnoughMoney

Bool vdm_VendingWithButton_EnoughMoney (const TYPE_VendingWithButton_Goods &vdm_VendingWithButton_g, const type_tiM &vdm_VendingWithButton_price, const TYPE_VendingWithButton_Yen &vdm_VendingWithButton_amount) {
  if (!vdm_VendingWithButton_pre_EnoughMoney(vdm_VendingWithButton_g, vdm_VendingWithButton_price, vdm_VendingWithButton_amount).GetValue()) {
    CGUTIL::RunTime(L"Precondition failure in EnoughMoney");
  }
  return Bool(vdm_VendingWithButton_amount.GetValue() >= (static_cast<const Int &>(vdm_VendingWithButton_price[vdm_VendingWithButton_g])).GetValue());
}

#endif // DEF_VendingWithButton_EnoughMoney

#ifndef DEF_VendingWithButton_pre_EnoughMoney

Bool vdm_VendingWithButton_pre_EnoughMoney (const TYPE_VendingWithButton_Goods &vdm_VendingWithButton_g, const type_tiM &vdm_VendingWithButton_price, const TYPE_VendingWithButton_Yen &vdm_VendingWithButton_amount) {
  return Bool(vdm_VendingWithButton_price.Dom().InSet(vdm_VendingWithButton_g));
}

#endif // DEF_VendingWithButton_pre_EnoughMoney

#ifndef DEF_VendingWithButton_SoldOutLamp

type_tUM vdm_VendingWithButton_SoldOutLamp (const type_ttM &vdm_VendingWithButton_b2g, const TYPE_VendingWithButton_Model &vdm_VendingWithButton_model) {
  if (!vdm_VendingWithButton_pre_SoldOutLamp(vdm_VendingWithButton_b2g, vdm_VendingWithButton_model).GetValue()) {
    CGUTIL::RunTime(L"Precondition failure in SoldOutLamp");
  }
  Map res_m_4;
  const Set e1_set_14 (vdm_VendingWithButton_b2g.Dom());
  Set tmpSet_17 (e1_set_14);
  Generic tmpe_16;
  for (bool bb_15 = tmpSet_17.First(tmpe_16); bb_15; bb_15 = tmpSet_17.Next(tmpe_16)) {
    const Token vdm_VendingWithButton_b (tmpe_16);
    res_m_4.Insert(vdm_VendingWithButton_b, static_cast<const Quote &>(vdm_VendingWithButton_SoldOutStatus(vdm_VendingWithButton_model)[static_cast<const Token &>(vdm_VendingWithButton_b2g[vdm_VendingWithButton_b])]));
  }
  return res_m_4;
}

#endif // DEF_VendingWithButton_SoldOutLamp

#ifndef DEF_VendingWithButton_pre_SoldOutLamp

Bool vdm_VendingWithButton_pre_SoldOutLamp (const type_ttM &vdm_VendingWithButton_b2g, const TYPE_VendingWithButton_Model &vdm_VendingWithButton_model) {
  return Bool(vdm_VendingWithButton_b2g.Dom().SubSet(vdm_VendingWithButton_model.GetMap(pos_VendingWithButton_Model_stock).Dom()));
}

#endif // DEF_VendingWithButton_pre_SoldOutLamp

#ifndef DEF_VendingWithButton_SoldOutStatus

type_tUM vdm_VendingWithButton_SoldOutStatus (const TYPE_VendingWithButton_Model &var_1_1) {
  Map vdm_VendingWithButton_stock;
  bool succ_18 = false;
  if ((succ_18 = (var_1_1.Is(vdm_VendingWithButton_Model)))) {
    vdm_VendingWithButton_stock = var_1_1.GetMap(pos_VendingWithButton_Model_stock);
  }
  if (!succ_18) {
    CGUTIL::RunTime(L"Pattern match failed in function apply in function SoldOutStatus");
  }
  Map res_m_3;
  const Set e1_set_14 (vdm_VendingWithButton_stock.Dom());
  Set tmpSet_17 (e1_set_14);
  Generic tmpe_16;
  for (bool bb_15 = tmpSet_17.First(tmpe_16); bb_15; bb_15 = tmpSet_17.Next(tmpe_16)) {
    const Token vdm_VendingWithButton_g (tmpe_16);
    res_m_3.Insert(vdm_VendingWithButton_g, (!((vdm_VendingWithButton_ExistStock(vdm_VendingWithButton_g, vdm_VendingWithButton_stock)).GetValue()) ? Quote(L"on") : Quote(L"off")));
  }
  return res_m_3;
}

#endif // DEF_VendingWithButton_SoldOutStatus

#ifndef DEF_VendingWithButton_AvailablePurchase

Bool vdm_VendingWithButton_AvailablePurchase (const TYPE_VendingWithButton_Goods &vdm_VendingWithButton_g, const type_tiM &vdm_VendingWithButton_stock, const type_tiM &vdm_VendingWithButton_price, const TYPE_VendingWithButton_Yen &vdm_VendingWithButton_amount) {
  if (!vdm_VendingWithButton_pre_AvailablePurchase(vdm_VendingWithButton_g, vdm_VendingWithButton_stock, vdm_VendingWithButton_price, vdm_VendingWithButton_amount).GetValue()) {
    CGUTIL::RunTime(L"Precondition failure in AvailablePurchase");
  }
  return Bool(vdm_VendingWithButton_ExistStock(vdm_VendingWithButton_g, vdm_VendingWithButton_stock).GetValue() ? vdm_VendingWithButton_EnoughMoney(vdm_VendingWithButton_g, vdm_VendingWithButton_price, vdm_VendingWithButton_amount).GetValue() : false);
}

#endif // DEF_VendingWithButton_AvailablePurchase

#ifndef DEF_VendingWithButton_pre_AvailablePurchase

Bool vdm_VendingWithButton_pre_AvailablePurchase (const TYPE_VendingWithButton_Goods &vdm_VendingWithButton_g, const type_tiM &vdm_VendingWithButton_stock, const type_tiM &vdm_VendingWithButton_price, const TYPE_VendingWithButton_Yen &vdm_VendingWithButton_amount) {
  return Bool((vdm_VendingWithButton_stock.Dom().InSet(vdm_VendingWithButton_g)) ? (vdm_VendingWithButton_price.Dom().InSet(vdm_VendingWithButton_g)) : false);
}

#endif // DEF_VendingWithButton_pre_AvailablePurchase

#ifndef DEF_VendingWithButton_init_uVendingMachine

Bool vdm_VendingWithButton_init_uVendingMachine (const TYPE_VendingWithButton_VendingMachine &var_1_1) {
  const TYPE_VendingWithButton_Model vdm_VendingWithButton_model (var_1_1.GetRecord(pos_VendingWithButton_VendingMachine_model));
  const TYPE_VendingWithButton_ButtonInfo vdm_VendingWithButton_button (var_1_1.GetRecord(pos_VendingWithButton_VendingMachine_button));
  const TYPE_VendingWithButton_ColumnInfo vdm_VendingWithButton_column (var_1_1.GetRecord(pos_VendingWithButton_VendingMachine_column));
  return Bool(((vdm_VendingWithButton_model == TYPE_VendingWithButton_Model().Init(Map(), Map(), Int(0))) ? (vdm_VendingWithButton_button == TYPE_VendingWithButton_ButtonInfo().Init(Map(), TYPE_VendingWithButton_Lamp().Init(Map(), Map()))) : false) ? (vdm_VendingWithButton_column == TYPE_VendingWithButton_ColumnInfo().Init(Map(), Map())) : false);
}

#endif // DEF_VendingWithButton_init_uVendingMachine

#ifndef DEF_VendingWithButton_post_Return

Bool vdm_VendingWithButton_post_Return (const TYPE_VendingWithButton_VendingMachine &var_1_1, const TYPE_VendingWithButton_VendingMachine &var_2_2) {
  const TYPE_VendingWithButton_Model _vdm_VendingWithButton_model (var_1_1.GetRecord(pos_VendingWithButton_VendingMachine_model));
  const TYPE_VendingWithButton_ButtonInfo _vdm_VendingWithButton_button (var_1_1.GetRecord(pos_VendingWithButton_VendingMachine_button));
  const TYPE_VendingWithButton_ColumnInfo _vdm_VendingWithButton_column (var_1_1.GetRecord(pos_VendingWithButton_VendingMachine_column));
  const TYPE_VendingWithButton_Model vdm_VendingWithButton_model (var_2_2.GetRecord(pos_VendingWithButton_VendingMachine_model));
  const TYPE_VendingWithButton_ButtonInfo vdm_VendingWithButton_button (var_2_2.GetRecord(pos_VendingWithButton_VendingMachine_button));
  const TYPE_VendingWithButton_ColumnInfo vdm_VendingWithButton_column (var_2_2.GetRecord(pos_VendingWithButton_VendingMachine_column));
  return Bool(vdm_VendingWithButton_model.GetInt(pos_VendingWithButton_Model_amount).GetValue() == 0);
}

#endif // DEF_VendingWithButton_post_Return

#ifndef DEF_VendingWithButton_pre_Purchase

Bool vdm_VendingWithButton_pre_Purchase (const TYPE_VendingWithButton_Goods &var_1_1, const TYPE_VendingWithButton_VendingMachine &var_2_2) {
  const Token vdm_VendingWithButton_g (var_1_1);
  const TYPE_VendingWithButton_Model vdm_VendingWithButton_model (var_2_2.GetRecord(pos_VendingWithButton_VendingMachine_model));
  const TYPE_VendingWithButton_ButtonInfo vdm_VendingWithButton_button (var_2_2.GetRecord(pos_VendingWithButton_VendingMachine_button));
  const TYPE_VendingWithButton_ColumnInfo vdm_VendingWithButton_column (var_2_2.GetRecord(pos_VendingWithButton_VendingMachine_column));
  return Bool((vdm_VendingWithButton_model.GetMap(pos_VendingWithButton_Model_stock).Dom().InSet(vdm_VendingWithButton_g)) ? vdm_VendingWithButton_AvailablePurchase(vdm_VendingWithButton_g, vdm_VendingWithButton_model.GetMap(pos_VendingWithButton_Model_stock), vdm_VendingWithButton_model.GetMap(pos_VendingWithButton_Model_price), vdm_VendingWithButton_model.GetInt(pos_VendingWithButton_Model_amount)).GetValue() : false);
}

#endif // DEF_VendingWithButton_pre_Purchase

#ifndef DEF_VendingWithButton_post_Purchase

Bool vdm_VendingWithButton_post_Purchase (const TYPE_VendingWithButton_Goods &var_1_1, const TYPE_VendingWithButton_VendingMachine &var_2_2, const TYPE_VendingWithButton_VendingMachine &var_3_3) {
  const Token vdm_VendingWithButton_g (var_1_1);
  const TYPE_VendingWithButton_Model _vdm_VendingWithButton_model (var_2_2.GetRecord(pos_VendingWithButton_VendingMachine_model));
  const TYPE_VendingWithButton_ButtonInfo _vdm_VendingWithButton_button (var_2_2.GetRecord(pos_VendingWithButton_VendingMachine_button));
  const TYPE_VendingWithButton_ColumnInfo _vdm_VendingWithButton_column (var_2_2.GetRecord(pos_VendingWithButton_VendingMachine_column));
  const TYPE_VendingWithButton_Model vdm_VendingWithButton_model (var_3_3.GetRecord(pos_VendingWithButton_VendingMachine_model));
  const TYPE_VendingWithButton_ButtonInfo vdm_VendingWithButton_button (var_3_3.GetRecord(pos_VendingWithButton_VendingMachine_button));
  const TYPE_VendingWithButton_ColumnInfo vdm_VendingWithButton_column (var_3_3.GetRecord(pos_VendingWithButton_VendingMachine_column));
  TYPE_VendingWithButton_Model tmpRE_8 (_vdm_VendingWithButton_model);
  Map val_9;
  Map modmap_10 (Map().Insert(vdm_VendingWithButton_g, static_cast<const Int &>(_vdm_VendingWithButton_model.GetMap(pos_VendingWithButton_Model_stock)[vdm_VendingWithButton_g]) - Int(1)));
  val_9 = _vdm_VendingWithButton_model.GetMap(pos_VendingWithButton_Model_stock);
  val_9.ImpOverride(modmap_10);
  tmpRE_8.SetField(pos_VendingWithButton_Model_stock, val_9);
  tmpRE_8.SetField(pos_VendingWithButton_Model_amount, _vdm_VendingWithButton_model.GetInt(pos_VendingWithButton_Model_amount) - static_cast<const Int &>(vdm_VendingWithButton_model.GetMap(pos_VendingWithButton_Model_price)[vdm_VendingWithButton_g]));
  return Bool(vdm_VendingWithButton_model == tmpRE_8);
}

#endif // DEF_VendingWithButton_post_Purchase

#ifndef DEF_VendingWithButton_post_InsertCoin

Bool vdm_VendingWithButton_post_InsertCoin (const TYPE_VendingWithButton_Coin &var_1_1, const TYPE_VendingWithButton_VendingMachine &var_2_2, const TYPE_VendingWithButton_VendingMachine &var_3_3) {
  const Int vdm_VendingWithButton_c (var_1_1);
  const TYPE_VendingWithButton_Model _vdm_VendingWithButton_model (var_2_2.GetRecord(pos_VendingWithButton_VendingMachine_model));
  const TYPE_VendingWithButton_ButtonInfo _vdm_VendingWithButton_button (var_2_2.GetRecord(pos_VendingWithButton_VendingMachine_button));
  const TYPE_VendingWithButton_ColumnInfo _vdm_VendingWithButton_column (var_2_2.GetRecord(pos_VendingWithButton_VendingMachine_column));
  const TYPE_VendingWithButton_Model vdm_VendingWithButton_model (var_3_3.GetRecord(pos_VendingWithButton_VendingMachine_model));
  const TYPE_VendingWithButton_ButtonInfo vdm_VendingWithButton_button (var_3_3.GetRecord(pos_VendingWithButton_VendingMachine_button));
  const TYPE_VendingWithButton_ColumnInfo vdm_VendingWithButton_column (var_3_3.GetRecord(pos_VendingWithButton_VendingMachine_column));
  Bool varRes_4;
  TYPE_VendingWithButton_Model tmpRE_9 (_vdm_VendingWithButton_model);
  tmpRE_9.SetField(pos_VendingWithButton_Model_amount, _vdm_VendingWithButton_model.GetInt(pos_VendingWithButton_Model_amount) + vdm_VendingWithButton_c);
  if (vdm_VendingWithButton_model == tmpRE_9) {
    TYPE_VendingWithButton_ButtonInfo tmpRE_18 (_vdm_VendingWithButton_button);
    tmpRE_18.SetField(pos_VendingWithButton_ButtonInfo_lamp, vdm_VendingWithButton_LampStatus(vdm_VendingWithButton_button.GetMap(pos_VendingWithButton_ButtonInfo_b2g), vdm_VendingWithButton_model));
    varRes_4 = Bool(vdm_VendingWithButton_button == tmpRE_18);
  }
  else {
    varRes_4 = Bool(false);
  }
  return varRes_4;
}

#endif // DEF_VendingWithButton_post_InsertCoin

#ifndef DEF_VendingWithButton_pre_SetupPrice

Bool vdm_VendingWithButton_pre_SetupPrice (const TYPE_VendingWithButton_Goods &var_1_1, const TYPE_VendingWithButton_Yen &var_2_2, const TYPE_VendingWithButton_VendingMachine &var_3_3) {
  const Token vdm_VendingWithButton_g (var_1_1);
  const Int vdm_VendingWithButton_p (var_2_2);
  const TYPE_VendingWithButton_Model vdm_VendingWithButton_model (var_3_3.GetRecord(pos_VendingWithButton_VendingMachine_model));
  const TYPE_VendingWithButton_ButtonInfo vdm_VendingWithButton_button (var_3_3.GetRecord(pos_VendingWithButton_VendingMachine_button));
  const TYPE_VendingWithButton_ColumnInfo vdm_VendingWithButton_column (var_3_3.GetRecord(pos_VendingWithButton_VendingMachine_column));
  return Bool(vdm_VendingWithButton_model.GetMap(pos_VendingWithButton_Model_price).Dom().InSet(vdm_VendingWithButton_g));
}

#endif // DEF_VendingWithButton_pre_SetupPrice

#ifndef DEF_VendingWithButton_post_SetupPrice

Bool vdm_VendingWithButton_post_SetupPrice (const TYPE_VendingWithButton_Goods &var_1_1, const TYPE_VendingWithButton_Yen &var_2_2, const TYPE_VendingWithButton_VendingMachine &var_3_3, const TYPE_VendingWithButton_VendingMachine &var_4_4) {
  const Token vdm_VendingWithButton_g (var_1_1);
  const Int vdm_VendingWithButton_p (var_2_2);
  const TYPE_VendingWithButton_Model _vdm_VendingWithButton_model (var_3_3.GetRecord(pos_VendingWithButton_VendingMachine_model));
  const TYPE_VendingWithButton_ButtonInfo _vdm_VendingWithButton_button (var_3_3.GetRecord(pos_VendingWithButton_VendingMachine_button));
  const TYPE_VendingWithButton_ColumnInfo _vdm_VendingWithButton_column (var_3_3.GetRecord(pos_VendingWithButton_VendingMachine_column));
  const TYPE_VendingWithButton_Model vdm_VendingWithButton_model (var_4_4.GetRecord(pos_VendingWithButton_VendingMachine_model));
  const TYPE_VendingWithButton_ButtonInfo vdm_VendingWithButton_button (var_4_4.GetRecord(pos_VendingWithButton_VendingMachine_button));
  const TYPE_VendingWithButton_ColumnInfo vdm_VendingWithButton_column (var_4_4.GetRecord(pos_VendingWithButton_VendingMachine_column));
  TYPE_VendingWithButton_Model tmpRE_9 (_vdm_VendingWithButton_model);
  Map val_10;
  Map modmap_11 (Map().Insert(vdm_VendingWithButton_g, vdm_VendingWithButton_p));
  val_10 = _vdm_VendingWithButton_model.GetMap(pos_VendingWithButton_Model_price);
  val_10.ImpOverride(modmap_11);
  tmpRE_9.SetField(pos_VendingWithButton_Model_price, val_10);
  return Bool(vdm_VendingWithButton_model == tmpRE_9);
}

#endif // DEF_VendingWithButton_post_SetupPrice

#ifndef DEF_VendingWithButton_pre_SetupStock

Bool vdm_VendingWithButton_pre_SetupStock (const TYPE_VendingWithButton_Goods &var_1_1, const Int &var_2_2, const TYPE_VendingWithButton_VendingMachine &var_3_3) {
  const Token vdm_VendingWithButton_g (var_1_1);
  const Int vdm_VendingWithButton_num (var_2_2);
  const TYPE_VendingWithButton_Model vdm_VendingWithButton_model (var_3_3.GetRecord(pos_VendingWithButton_VendingMachine_model));
  const TYPE_VendingWithButton_ButtonInfo vdm_VendingWithButton_button (var_3_3.GetRecord(pos_VendingWithButton_VendingMachine_button));
  const TYPE_VendingWithButton_ColumnInfo vdm_VendingWithButton_column (var_3_3.GetRecord(pos_VendingWithButton_VendingMachine_column));
  return Bool(vdm_VendingWithButton_model.GetMap(pos_VendingWithButton_Model_stock).Dom().InSet(vdm_VendingWithButton_g));
}

#endif // DEF_VendingWithButton_pre_SetupStock

#ifndef DEF_VendingWithButton_post_SetupStock

Bool vdm_VendingWithButton_post_SetupStock (const TYPE_VendingWithButton_Goods &var_1_1, const Int &var_2_2, const TYPE_VendingWithButton_VendingMachine &var_3_3, const TYPE_VendingWithButton_VendingMachine &var_4_4) {
  const Token vdm_VendingWithButton_g (var_1_1);
  const Int vdm_VendingWithButton_num (var_2_2);
  const TYPE_VendingWithButton_Model _vdm_VendingWithButton_model (var_3_3.GetRecord(pos_VendingWithButton_VendingMachine_model));
  const TYPE_VendingWithButton_ButtonInfo _vdm_VendingWithButton_button (var_3_3.GetRecord(pos_VendingWithButton_VendingMachine_button));
  const TYPE_VendingWithButton_ColumnInfo _vdm_VendingWithButton_column (var_3_3.GetRecord(pos_VendingWithButton_VendingMachine_column));
  const TYPE_VendingWithButton_Model vdm_VendingWithButton_model (var_4_4.GetRecord(pos_VendingWithButton_VendingMachine_model));
  const TYPE_VendingWithButton_ButtonInfo vdm_VendingWithButton_button (var_4_4.GetRecord(pos_VendingWithButton_VendingMachine_button));
  const TYPE_VendingWithButton_ColumnInfo vdm_VendingWithButton_column (var_4_4.GetRecord(pos_VendingWithButton_VendingMachine_column));
  TYPE_VendingWithButton_Model tmpRE_9 (_vdm_VendingWithButton_model);
  Map val_10;
  Map modmap_11 (Map().Insert(vdm_VendingWithButton_g, vdm_VendingWithButton_num));
  val_10 = _vdm_VendingWithButton_model.GetMap(pos_VendingWithButton_Model_stock);
  val_10.ImpOverride(modmap_11);
  tmpRE_9.SetField(pos_VendingWithButton_Model_stock, val_10);
  return Bool(vdm_VendingWithButton_model == tmpRE_9);
}

#endif // DEF_VendingWithButton_post_SetupStock

#ifndef DEF_VendingWithButton_pre_RegisterGoods

Bool vdm_VendingWithButton_pre_RegisterGoods (const TYPE_VendingWithButton_Goods &var_1_1, const TYPE_VendingWithButton_VendingMachine &var_2_2) {
  const Token vdm_VendingWithButton_g (var_1_1);
  const TYPE_VendingWithButton_Model vdm_VendingWithButton_model (var_2_2.GetRecord(pos_VendingWithButton_VendingMachine_model));
  const TYPE_VendingWithButton_ButtonInfo vdm_VendingWithButton_button (var_2_2.GetRecord(pos_VendingWithButton_VendingMachine_button));
  const TYPE_VendingWithButton_ColumnInfo vdm_VendingWithButton_column (var_2_2.GetRecord(pos_VendingWithButton_VendingMachine_column));
  return Bool(!vdm_VendingWithButton_model.GetMap(pos_VendingWithButton_Model_stock).Dom().InSet(vdm_VendingWithButton_g));
}

#endif // DEF_VendingWithButton_pre_RegisterGoods

#ifndef DEF_VendingWithButton_post_RegisterGoods

Bool vdm_VendingWithButton_post_RegisterGoods (const TYPE_VendingWithButton_Goods &var_1_1, const TYPE_VendingWithButton_VendingMachine &var_2_2, const TYPE_VendingWithButton_VendingMachine &var_3_3) {
  const Token vdm_VendingWithButton_g (var_1_1);
  const TYPE_VendingWithButton_Model _vdm_VendingWithButton_model (var_2_2.GetRecord(pos_VendingWithButton_VendingMachine_model));
  const TYPE_VendingWithButton_ButtonInfo _vdm_VendingWithButton_button (var_2_2.GetRecord(pos_VendingWithButton_VendingMachine_button));
  const TYPE_VendingWithButton_ColumnInfo _vdm_VendingWithButton_column (var_2_2.GetRecord(pos_VendingWithButton_VendingMachine_column));
  const TYPE_VendingWithButton_Model vdm_VendingWithButton_model (var_3_3.GetRecord(pos_VendingWithButton_VendingMachine_model));
  const TYPE_VendingWithButton_ButtonInfo vdm_VendingWithButton_button (var_3_3.GetRecord(pos_VendingWithButton_VendingMachine_button));
  const TYPE_VendingWithButton_ColumnInfo vdm_VendingWithButton_column (var_3_3.GetRecord(pos_VendingWithButton_VendingMachine_column));
  TYPE_VendingWithButton_Model tmpRE_8 (_vdm_VendingWithButton_model);
  Map m1_15 (_vdm_VendingWithButton_model.GetMap(pos_VendingWithButton_Model_stock));
  Map m2_16 (Map().Insert(vdm_VendingWithButton_g, Int(0)));
  if (!m1_15.IsCompatible(m2_16)) {
    CGUTIL::RunTime(L"Duplicate entries had different values");
  }
  m1_15.ImpOverride(m2_16);
  tmpRE_8.SetField(pos_VendingWithButton_Model_stock, m1_15);
  Map m1_23 (_vdm_VendingWithButton_model.GetMap(pos_VendingWithButton_Model_price));
  Map m2_24 (Map().Insert(vdm_VendingWithButton_g, Int(0)));
  if (!m1_23.IsCompatible(m2_24)) {
    CGUTIL::RunTime(L"Duplicate entries had different values");
  }
  m1_23.ImpOverride(m2_24);
  tmpRE_8.SetField(pos_VendingWithButton_Model_price, m1_23);
  return Bool(vdm_VendingWithButton_model == tmpRE_8);
}

#endif // DEF_VendingWithButton_post_RegisterGoods


