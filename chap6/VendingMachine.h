//
// THIS FILE IS AUTOMATICALLY GENERATED!!
//
// Generated at 2020-09-05 by the VDM-SL to C++ Code Generator
// (v9.0.7 - Sat 09-Jun-2018 09:35:14 +0900)
//
// This file was genereted from "E:/VDM-SL/studyingProgramSpecification/chap6/VendingMachine.vdmsl".

#ifndef _VendingMachine_h
#define _VendingMachine_h

#include <math.h>
#include "metaiv.h"
#include "cg.h"
#include "cg_aux.h"
#include "VendingMachine_anonym.h"


enum {
  vdm_VendingMachine_VendingMachine = TAG_TYPE_VendingMachine_VendingMachine,
  length_VendingMachine_VendingMachine = 3,
  pos_VendingMachine_VendingMachine_stock = 1,
  pos_VendingMachine_VendingMachine_price = 2,
  pos_VendingMachine_VendingMachine_amount = 3
};

class TYPE_VendingMachine_VendingMachine : public Record {
public:
  TYPE_VendingMachine_VendingMachine () : Record(TAG_TYPE_VendingMachine_VendingMachine, 3) {}

  TYPE_VendingMachine_VendingMachine &Init (const type_tiM &p1, const type_tiM &p2, const TYPE_VendingMachine_Yen &p3);
  TYPE_VendingMachine_VendingMachine (const Common &c) : Record(c) {}

  const wchar_t * GetTypeName () const   {
    return L"TYPE_VendingMachine_VendingMachine";
  }

  type_tiM get_stock () const;
  void set_stock (const type_tiM &p);
  type_tiM get_price () const;
  void set_price (const type_tiM &p);
  TYPE_VendingMachine_Yen get_amount () const;
  void set_amount (const TYPE_VendingMachine_Yen &p);
};

Bool vdm_VendingMachine_inv_VendingMachine (const TYPE_VendingMachine_VendingMachine &);

Bool vdm_VendingMachine_inv_Coin (const TYPE_VendingMachine_Yen &);

void init_VendingMachine ();

void vdm_VendingMachine_Return ();

Bool vdm_VendingMachine_post_Return (const TYPE_VendingMachine_VendingMachine &, const TYPE_VendingMachine_VendingMachine &);

void vdm_VendingMachine_Purchase (const TYPE_VendingMachine_Goods &);

Bool vdm_VendingMachine_pre_Purchase (const TYPE_VendingMachine_Goods &, const TYPE_VendingMachine_VendingMachine &);

Bool vdm_VendingMachine_post_Purchase (const TYPE_VendingMachine_Goods &, const TYPE_VendingMachine_VendingMachine &, const TYPE_VendingMachine_VendingMachine &);

void vdm_VendingMachine_SetupPrice (const TYPE_VendingMachine_Goods &, const TYPE_VendingMachine_Yen &);

Bool vdm_VendingMachine_pre_SetupPrice (const TYPE_VendingMachine_Goods &, const TYPE_VendingMachine_Yen &, const TYPE_VendingMachine_VendingMachine &);

Bool vdm_VendingMachine_post_SetupPrice (const TYPE_VendingMachine_Goods &, const TYPE_VendingMachine_Yen &, const TYPE_VendingMachine_VendingMachine &, const TYPE_VendingMachine_VendingMachine &);

void vdm_VendingMachine_SetupStock (const TYPE_VendingMachine_Goods &, const Int &);

Bool vdm_VendingMachine_pre_SetupStock (const TYPE_VendingMachine_Goods &, const Int &, const TYPE_VendingMachine_VendingMachine &);

Bool vdm_VendingMachine_post_SetupStock (const TYPE_VendingMachine_Goods &, const Int &, const TYPE_VendingMachine_VendingMachine &, const TYPE_VendingMachine_VendingMachine &);

void vdm_VendingMachine_InsertCoint (const TYPE_VendingMachine_Coin &);

Bool vdm_VendingMachine_post_InsertCoint (const TYPE_VendingMachine_Coin &, const TYPE_VendingMachine_VendingMachine &, const TYPE_VendingMachine_VendingMachine &);

void vdm_VendingMachine_RegisterGoods (const TYPE_VendingMachine_Goods &);

Bool vdm_VendingMachine_pre_RegisterGoods (const TYPE_VendingMachine_Goods &, const TYPE_VendingMachine_VendingMachine &);

Bool vdm_VendingMachine_post_RegisterGoods (const TYPE_VendingMachine_Goods &, const TYPE_VendingMachine_VendingMachine &, const TYPE_VendingMachine_VendingMachine &);

Bool vdm_VendingMachine_init_uVendingMachine (const TYPE_VendingMachine_VendingMachine &);


#endif // _VendingMachine_h
