//
// THIS FILE IS AUTOMATICALLY GENERATED!!
//
// Generated at 2020-09-02 by the VDM-SL to C++ Code Generator
// (v9.0.7 - Sat 09-Jun-2018 09:35:14 +0900)
//
// This file was genereted from "E:/VDM-SL/studyingProgramSpecification/chap5/register.vdmsl".


#include "register.h"


#ifdef DEF_register_USERIMPL

#include "register_userimpl.cpp"


#endif // DEF_register_USERIMPL


void init_register () {}

#ifndef DEF_register_Add

TYPE_register_RegisterBook vdm_register_Add (const TYPE_register_Name &vdm_register_name, const TYPE_register_Email &vdm_register_email, const TYPE_register_RegisterBook &vdm_register_book) {
  if (!vdm_register_pre_Add(vdm_register_name, vdm_register_email, vdm_register_book).GetValue()) {
    CGUTIL::RunTime(L"Precondition failure in Add");
  }
  Map m1_9 (vdm_register_book);
  Map m2_10 (Map().Insert(vdm_register_name, vdm_register_email));
  if (!m1_9.IsCompatible(m2_10)) {
    CGUTIL::RunTime(L"Duplicate entries had different values");
  }
  m1_9.ImpOverride(m2_10);
  return m1_9;
}

#endif // DEF_register_Add

#ifndef DEF_register_pre_Add

Bool vdm_register_pre_Add (const TYPE_register_Name &vdm_register_name, const TYPE_register_Email &vdm_register_email, const TYPE_register_RegisterBook &vdm_register_book) {
  return Bool(!vdm_register_book.Dom().InSet(vdm_register_name));
}

#endif // DEF_register_pre_Add

#ifndef DEF_register_Delete

TYPE_register_RegisterBook vdm_register_Delete (const TYPE_register_Name &vdm_register_name, const TYPE_register_RegisterBook &vdm_register_book) {
  if (!vdm_register_pre_Delete(vdm_register_name, vdm_register_book).GetValue()) {
    CGUTIL::RunTime(L"Precondition failure in Delete");
  }
  return vdm_register_book.DomRestrictedBy(mk_set(vdm_register_name));
}

#endif // DEF_register_Delete

#ifndef DEF_register_pre_Delete

Bool vdm_register_pre_Delete (const TYPE_register_Name &vdm_register_name, const TYPE_register_RegisterBook &vdm_register_book) {
  return Bool(vdm_register_book.Dom().InSet(vdm_register_name));
}

#endif // DEF_register_pre_Delete

#ifndef DEF_register_Number

Int vdm_register_Number (const TYPE_register_RegisterBook &vdm_register_book) {
  return Int(vdm_register_book.Dom().Card());
}

#endif // DEF_register_Number

#ifndef DEF_register_FindEmail

TYPE_register_Email vdm_register_FindEmail (const TYPE_register_Name &vdm_register_name, const TYPE_register_RegisterBook &vdm_register_book) {
  if (!vdm_register_pre_FindEmail(vdm_register_name, vdm_register_book).GetValue()) {
    CGUTIL::RunTime(L"Precondition failure in FindEmail");
  }
  return static_cast<const Token &>(vdm_register_book[vdm_register_name]);
}

#endif // DEF_register_FindEmail

#ifndef DEF_register_pre_FindEmail

Bool vdm_register_pre_FindEmail (const TYPE_register_Name &vdm_register_name, const TYPE_register_RegisterBook &vdm_register_book) {
  return Bool(vdm_register_book.Dom().InSet(vdm_register_name));
}

#endif // DEF_register_pre_FindEmail

#ifndef DEF_register_ChangeEmail

TYPE_register_RegisterBook vdm_register_ChangeEmail (const TYPE_register_Name &vdm_register_name, const TYPE_register_Email &vdm_register_email, const TYPE_register_RegisterBook &vdm_register_book) {
  if (!vdm_register_pre_ChangeEmail(vdm_register_name, vdm_register_email, vdm_register_book).GetValue()) {
    CGUTIL::RunTime(L"Precondition failure in ChangeEmail");
  }
  Map varRes_4;
  Map modmap_5 (Map().Insert(vdm_register_name, vdm_register_email));
  varRes_4 = vdm_register_book;
  varRes_4.ImpOverride(modmap_5);
  return varRes_4;
}

#endif // DEF_register_ChangeEmail

#ifndef DEF_register_pre_ChangeEmail

Bool vdm_register_pre_ChangeEmail (const TYPE_register_Name &vdm_register_name, const TYPE_register_Email &vdm_register_email, const TYPE_register_RegisterBook &vdm_register_book) {
  return Bool(vdm_register_book.Dom().InSet(vdm_register_name));
}

#endif // DEF_register_pre_ChangeEmail

#ifndef DEF_register_ChangeEmailAlt

TYPE_register_RegisterBook vdm_register_ChangeEmailAlt (const TYPE_register_Name &vdm_register_name, const TYPE_register_Email &vdm_register_email, const TYPE_register_RegisterBook &vdm_register_book) {
  if (!vdm_register_pre_ChangeEmailAlt(vdm_register_name, vdm_register_email, vdm_register_book).GetValue()) {
    CGUTIL::RunTime(L"Precondition failure in ChangeEmailAlt");
  }
  return vdm_register_Add(vdm_register_name, vdm_register_email, vdm_register_Delete(vdm_register_name, vdm_register_book));
}

#endif // DEF_register_ChangeEmailAlt

#ifndef DEF_register_pre_ChangeEmailAlt

Bool vdm_register_pre_ChangeEmailAlt (const TYPE_register_Name &vdm_register_name, const TYPE_register_Email &vdm_register_email, const TYPE_register_RegisterBook &vdm_register_book) {
  return Bool(vdm_register_book.Dom().InSet(vdm_register_name));
}

#endif // DEF_register_pre_ChangeEmailAlt


