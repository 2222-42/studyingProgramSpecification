//
// THIS FILE IS AUTOMATICALLY GENERATED!!
//
// Generated at 2020-09-02 by the VDM-SL to C++ Code Generator
// (v9.0.7 - Sat 09-Jun-2018 09:35:14 +0900)
//
// This file was genereted from "E:\\VDM-SL\\studyingProgramSpecification\\chap5\\compositeRegister.vdmsl".

#ifndef _compositeRegister_h
#define _compositeRegister_h

#include <math.h>
#include "metaiv.h"
#include "cg.h"
#include "cg_aux.h"
#include "compositeRegister_anonym.h"


enum {
  vdm_compositeRegister_Info = TAG_TYPE_compositeRegister_Info,
  length_compositeRegister_Info = 4,
  pos_compositeRegister_Info_email = 1,
  pos_compositeRegister_Info_address = 2,
  pos_compositeRegister_Info_telephone = 3,
  pos_compositeRegister_Info_age = 4,
  vdm_compositeRegister_Address = TAG_TYPE_compositeRegister_Address,
  length_compositeRegister_Address = 3,
  pos_compositeRegister_Address_prefecture = 1,
  pos_compositeRegister_Address_city = 2,
  pos_compositeRegister_Address_detail = 3
};

class TYPE_compositeRegister_Info : public Record {
public:
  TYPE_compositeRegister_Info () : Record(TAG_TYPE_compositeRegister_Info, 4) {}

  TYPE_compositeRegister_Info &Init (const TYPE_compositeRegister_Email &p1, const TYPE_compositeRegister_Address &p2, const Generic &p3, const Int &p4);
  TYPE_compositeRegister_Info (const Common &c) : Record(c) {}

  const wchar_t * GetTypeName () const   {
    return L"TYPE_compositeRegister_Info";
  }

  TYPE_compositeRegister_Email get_email () const;
  void set_email (const TYPE_compositeRegister_Email &p);
  TYPE_compositeRegister_Address get_address () const;
  void set_address (const TYPE_compositeRegister_Address &p);
  Generic get_telephone () const;
  void set_telephone (const Generic &p);
  Int get_age () const;
  void set_age (const Int &p);
};


class TYPE_compositeRegister_Address : public Record {
public:
  TYPE_compositeRegister_Address () : Record(TAG_TYPE_compositeRegister_Address, 3) {}

  TYPE_compositeRegister_Address &Init (const TYPE_compositeRegister_Prefecture &p1, const TYPE_compositeRegister_City &p2, const TYPE_compositeRegister_Detail &p3);
  TYPE_compositeRegister_Address (const Common &c) : Record(c) {}

  const wchar_t * GetTypeName () const   {
    return L"TYPE_compositeRegister_Address";
  }

  TYPE_compositeRegister_Prefecture get_prefecture () const;
  void set_prefecture (const TYPE_compositeRegister_Prefecture &p);
  TYPE_compositeRegister_City get_city () const;
  void set_city (const TYPE_compositeRegister_City &p);
  TYPE_compositeRegister_Detail get_detail () const;
  void set_detail (const TYPE_compositeRegister_Detail &p);
};

void init_compositeRegister ();

TYPE_compositeRegister_RegisterBook vdm_compositeRegister_Add (const TYPE_compositeRegister_Name &, const TYPE_compositeRegister_Info &, const TYPE_compositeRegister_RegisterBook &);

Bool vdm_compositeRegister_pre_Add (const TYPE_compositeRegister_Name &, const TYPE_compositeRegister_Info &, const TYPE_compositeRegister_RegisterBook &);

TYPE_compositeRegister_RegisterBook vdm_compositeRegister_Delete (const TYPE_compositeRegister_Name &, const TYPE_compositeRegister_RegisterBook &);

Bool vdm_compositeRegister_pre_Delete (const TYPE_compositeRegister_Name &, const TYPE_compositeRegister_RegisterBook &);

Int vdm_compositeRegister_Number (const TYPE_compositeRegister_RegisterBook &);

TYPE_compositeRegister_Info vdm_compositeRegister_FindInfo (const TYPE_compositeRegister_Name &, const TYPE_compositeRegister_RegisterBook &);

Bool vdm_compositeRegister_pre_FindInfo (const TYPE_compositeRegister_Name &, const TYPE_compositeRegister_RegisterBook &);

TYPE_compositeRegister_Email vdm_compositeRegister_FindEmail (const TYPE_compositeRegister_Name &, const TYPE_compositeRegister_RegisterBook &);

Bool vdm_compositeRegister_pre_FindEmail (const TYPE_compositeRegister_Name &, const TYPE_compositeRegister_RegisterBook &);

TYPE_compositeRegister_RegisterBook vdm_compositeRegister_ChangeEmail (const TYPE_compositeRegister_Name &, const TYPE_compositeRegister_Email &, const TYPE_compositeRegister_RegisterBook &);

Bool vdm_compositeRegister_pre_ChangeEmail (const TYPE_compositeRegister_Name &, const TYPE_compositeRegister_Email &, const TYPE_compositeRegister_RegisterBook &);

type_tS vdm_compositeRegister_FindNamesByX (const TYPE_compositeRegister_Prefecture &, const Int &, const TYPE_compositeRegister_RegisterBook &);

type_tS vdm_compositeRegister_FindNamesAltByX (const TYPE_compositeRegister_Prefecture &, const Int &, const TYPE_compositeRegister_RegisterBook &);

type_tS vdm_compositeRegister_FindNamesByOverAge (const Int &, const TYPE_compositeRegister_RegisterBook &);

type_tS vdm_compositeRegister_FindNamesByPrefecture (const TYPE_compositeRegister_Prefecture &, const TYPE_compositeRegister_RegisterBook &);

type_tS vdm_compositeRegister_FindNamesByPrefectures (const type_tS &, const TYPE_compositeRegister_RegisterBook &);


#endif // _compositeRegister_h
