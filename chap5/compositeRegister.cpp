//
// THIS FILE IS AUTOMATICALLY GENERATED!!
//
// Generated at 2020-09-02 by the VDM-SL to C++ Code Generator
// (v9.0.7 - Sat 09-Jun-2018 09:35:14 +0900)
//
// This file was genereted from "E:/VDM-SL/studyingProgramSpecification/chap5/compositeRegister.vdmsl".


#include "compositeRegister.h"


TYPE_compositeRegister_Info &TYPE_compositeRegister_Info::Init (const TYPE_compositeRegister_Email &p1, const TYPE_compositeRegister_Address &p2, const TYPE_compositeRegister_Telephone &p3) {
  this->SetField(1, p1);
  this->SetField(2, p2);
  this->SetField(3, p3);
  return * this;
}

TYPE_compositeRegister_Email TYPE_compositeRegister_Info::get_email () const {
  return this->GetField(1);
}

void TYPE_compositeRegister_Info::set_email (const TYPE_compositeRegister_Email &p) {
  this->SetField(1, p);
}

TYPE_compositeRegister_Address TYPE_compositeRegister_Info::get_address () const {
  return this->GetField(2);
}

void TYPE_compositeRegister_Info::set_address (const TYPE_compositeRegister_Address &p) {
  this->SetField(2, p);
}

TYPE_compositeRegister_Telephone TYPE_compositeRegister_Info::get_telephone () const {
  return this->GetField(3);
}

void TYPE_compositeRegister_Info::set_telephone (const TYPE_compositeRegister_Telephone &p) {
  this->SetField(3, p);
}

void init_compositeRegister_VDMLib () {
  VDMGetDefaultRecInfoMap().NewTag(TAG_TYPE_compositeRegister_Info, 3);
  VDMGetDefaultRecInfoMap().SetSymTag(TAG_TYPE_compositeRegister_Info, L"compositeRegister`Info");
  AddRecordTag(L"compositeRegister`Info", TAG_TYPE_compositeRegister_Info);
}

#ifdef DEF_compositeRegister_USERIMPL

#include "compositeRegister_userimpl.cpp"


#endif // DEF_compositeRegister_USERIMPL


void init_compositeRegister () {
  init_compositeRegister_VDMLib();
}

#ifndef DEF_compositeRegister_Add

TYPE_compositeRegister_RegisterBook vdm_compositeRegister_Add (const TYPE_compositeRegister_Name &vdm_compositeRegister_name, const TYPE_compositeRegister_Info &vdm_compositeRegister_info, const TYPE_compositeRegister_RegisterBook &vdm_compositeRegister_book) {
  if (!vdm_compositeRegister_pre_Add(vdm_compositeRegister_name, vdm_compositeRegister_info, vdm_compositeRegister_book).GetValue()) {
    CGUTIL::RunTime(L"Precondition failure in Add");
  }
  Map m1_9 (vdm_compositeRegister_book);
  Map m2_10 (Map().Insert(vdm_compositeRegister_name, vdm_compositeRegister_info));
  if (!m1_9.IsCompatible(m2_10)) {
    CGUTIL::RunTime(L"Duplicate entries had different values");
  }
  m1_9.ImpOverride(m2_10);
  return m1_9;
}

#endif // DEF_compositeRegister_Add

#ifndef DEF_compositeRegister_pre_Add

Bool vdm_compositeRegister_pre_Add (const TYPE_compositeRegister_Name &vdm_compositeRegister_name, const TYPE_compositeRegister_Info &vdm_compositeRegister_info, const TYPE_compositeRegister_RegisterBook &vdm_compositeRegister_book) {
  return Bool(!vdm_compositeRegister_book.Dom().InSet(vdm_compositeRegister_name));
}

#endif // DEF_compositeRegister_pre_Add

#ifndef DEF_compositeRegister_Delete

TYPE_compositeRegister_RegisterBook vdm_compositeRegister_Delete (const TYPE_compositeRegister_Name &vdm_compositeRegister_name, const TYPE_compositeRegister_RegisterBook &vdm_compositeRegister_book) {
  if (!vdm_compositeRegister_pre_Delete(vdm_compositeRegister_name, vdm_compositeRegister_book).GetValue()) {
    CGUTIL::RunTime(L"Precondition failure in Delete");
  }
  return vdm_compositeRegister_book.DomRestrictedBy(mk_set(vdm_compositeRegister_name));
}

#endif // DEF_compositeRegister_Delete

#ifndef DEF_compositeRegister_pre_Delete

Bool vdm_compositeRegister_pre_Delete (const TYPE_compositeRegister_Name &vdm_compositeRegister_name, const TYPE_compositeRegister_RegisterBook &vdm_compositeRegister_book) {
  return Bool(vdm_compositeRegister_book.Dom().InSet(vdm_compositeRegister_name));
}

#endif // DEF_compositeRegister_pre_Delete

#ifndef DEF_compositeRegister_Number

Int vdm_compositeRegister_Number (const TYPE_compositeRegister_RegisterBook &vdm_compositeRegister_book) {
  return Int(vdm_compositeRegister_book.Dom().Card());
}

#endif // DEF_compositeRegister_Number

#ifndef DEF_compositeRegister_FindInfo

TYPE_compositeRegister_Info vdm_compositeRegister_FindInfo (const TYPE_compositeRegister_Name &vdm_compositeRegister_name, const TYPE_compositeRegister_RegisterBook &vdm_compositeRegister_book) {
  if (!vdm_compositeRegister_pre_FindInfo(vdm_compositeRegister_name, vdm_compositeRegister_book).GetValue()) {
    CGUTIL::RunTime(L"Precondition failure in FindInfo");
  }
  return static_cast<const TYPE_compositeRegister_Info &>(vdm_compositeRegister_book[vdm_compositeRegister_name]);
}

#endif // DEF_compositeRegister_FindInfo

#ifndef DEF_compositeRegister_pre_FindInfo

Bool vdm_compositeRegister_pre_FindInfo (const TYPE_compositeRegister_Name &vdm_compositeRegister_name, const TYPE_compositeRegister_RegisterBook &vdm_compositeRegister_book) {
  return Bool(vdm_compositeRegister_book.Dom().InSet(vdm_compositeRegister_name));
}

#endif // DEF_compositeRegister_pre_FindInfo

#ifndef DEF_compositeRegister_FindEmail

TYPE_compositeRegister_Email vdm_compositeRegister_FindEmail (const TYPE_compositeRegister_Name &vdm_compositeRegister_name, const TYPE_compositeRegister_RegisterBook &vdm_compositeRegister_book) {
  if (!vdm_compositeRegister_pre_FindEmail(vdm_compositeRegister_name, vdm_compositeRegister_book).GetValue()) {
    CGUTIL::RunTime(L"Precondition failure in FindEmail");
  }
  return (static_cast<const TYPE_compositeRegister_Info &>(vdm_compositeRegister_book[vdm_compositeRegister_name])).GetField(pos_compositeRegister_Info_email);
}

#endif // DEF_compositeRegister_FindEmail

#ifndef DEF_compositeRegister_pre_FindEmail

Bool vdm_compositeRegister_pre_FindEmail (const TYPE_compositeRegister_Name &vdm_compositeRegister_name, const TYPE_compositeRegister_RegisterBook &vdm_compositeRegister_book) {
  return Bool(vdm_compositeRegister_book.Dom().InSet(vdm_compositeRegister_name));
}

#endif // DEF_compositeRegister_pre_FindEmail

#ifndef DEF_compositeRegister_ChangeEmail

TYPE_compositeRegister_RegisterBook vdm_compositeRegister_ChangeEmail (const TYPE_compositeRegister_Name &vdm_compositeRegister_name, const TYPE_compositeRegister_Email &vdm_compositeRegister_email, const TYPE_compositeRegister_RegisterBook &vdm_compositeRegister_book) {
  if (!vdm_compositeRegister_pre_ChangeEmail(vdm_compositeRegister_name, vdm_compositeRegister_email, vdm_compositeRegister_book).GetValue()) {
    CGUTIL::RunTime(L"Precondition failure in ChangeEmail");
  }
  Map varRes_4;
  Map modmap_7;
  TYPE_compositeRegister_Info tmpRE_13 (static_cast<const TYPE_compositeRegister_Info &>(vdm_compositeRegister_book[vdm_compositeRegister_name]));
  tmpRE_13.SetField(pos_compositeRegister_Info_email, vdm_compositeRegister_email);
  modmap_7.Insert(vdm_compositeRegister_name, tmpRE_13);
  Map modmap_5 (modmap_7);
  varRes_4 = vdm_compositeRegister_book;
  varRes_4.ImpOverride(modmap_5);
  return varRes_4;
}

#endif // DEF_compositeRegister_ChangeEmail

#ifndef DEF_compositeRegister_pre_ChangeEmail

Bool vdm_compositeRegister_pre_ChangeEmail (const TYPE_compositeRegister_Name &vdm_compositeRegister_name, const TYPE_compositeRegister_Email &vdm_compositeRegister_email, const TYPE_compositeRegister_RegisterBook &vdm_compositeRegister_book) {
  return Bool(vdm_compositeRegister_book.Dom().InSet(vdm_compositeRegister_name));
}

#endif // DEF_compositeRegister_pre_ChangeEmail


