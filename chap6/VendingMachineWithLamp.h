//
// THIS FILE IS AUTOMATICALLY GENERATED!!
//
// Generated at 2020-09-05 by the VDM-SL to C++ Code Generator
// (v9.0.7 - Sat 09-Jun-2018 09:35:14 +0900)
//
// This file was genereted from "E:\\VDM-SL\\studyingProgramSpecification\\chap6\\VendingMachineWithLamp.vdmsl".

#ifndef _VendingMachineWithLamp_h
#define _VendingMachineWithLamp_h

#include <math.h>
#include "metaiv.h"
#include "cg.h"
#include "cg_aux.h"
#include "VendingMachineWithLamp_anonym.h"


enum {
  vdm_VendingMachineWithLamp_VendingMachine = TAG_TYPE_VendingMachineWithLamp_VendingMachine,
  length_VendingMachineWithLamp_VendingMachine = 2,
  pos_VendingMachineWithLamp_VendingMachine_model = 1,
  pos_VendingMachineWithLamp_VendingMachine_lamp = 2,
  vdm_VendingMachineWithLamp_Lamp = TAG_TYPE_VendingMachineWithLamp_Lamp,
  length_VendingMachineWithLamp_Lamp = 2,
  pos_VendingMachineWithLamp_Lamp_soldOut = 1,
  pos_VendingMachineWithLamp_Lamp_sell = 2,
  vdm_VendingMachineWithLamp_Model = TAG_TYPE_VendingMachineWithLamp_Model,
  length_VendingMachineWithLamp_Model = 3,
  pos_VendingMachineWithLamp_Model_stock = 1,
  pos_VendingMachineWithLamp_Model_price = 2,
  pos_VendingMachineWithLamp_Model_amount = 3
};

class TYPE_VendingMachineWithLamp_VendingMachine : public Record {
public:
  TYPE_VendingMachineWithLamp_VendingMachine () : Record(TAG_TYPE_VendingMachineWithLamp_VendingMachine, 2) {}

  TYPE_VendingMachineWithLamp_VendingMachine &Init (const TYPE_VendingMachineWithLamp_Model &p1, const TYPE_VendingMachineWithLamp_Lamp &p2);
  TYPE_VendingMachineWithLamp_VendingMachine (const Common &c) : Record(c) {}

  const wchar_t * GetTypeName () const   {
    return L"TYPE_VendingMachineWithLamp_VendingMachine";
  }

  TYPE_VendingMachineWithLamp_Model get_model () const;
  void set_model (const TYPE_VendingMachineWithLamp_Model &p);
  TYPE_VendingMachineWithLamp_Lamp get_lamp () const;
  void set_lamp (const TYPE_VendingMachineWithLamp_Lamp &p);
};


class TYPE_VendingMachineWithLamp_Lamp : public Record {
public:
  TYPE_VendingMachineWithLamp_Lamp () : Record(TAG_TYPE_VendingMachineWithLamp_Lamp, 2) {}

  TYPE_VendingMachineWithLamp_Lamp &Init (const type_tUM &p1, const type_tUM &p2);
  TYPE_VendingMachineWithLamp_Lamp (const Common &c) : Record(c) {}

  const wchar_t * GetTypeName () const   {
    return L"TYPE_VendingMachineWithLamp_Lamp";
  }

  type_tUM get_soldOut () const;
  void set_soldOut (const type_tUM &p);
  type_tUM get_sell () const;
  void set_sell (const type_tUM &p);
};


class TYPE_VendingMachineWithLamp_Model : public Record {
public:
  TYPE_VendingMachineWithLamp_Model () : Record(TAG_TYPE_VendingMachineWithLamp_Model, 3) {}

  TYPE_VendingMachineWithLamp_Model &Init (const type_tiM &p1, const type_tiM &p2, const TYPE_VendingMachineWithLamp_Yen &p3);
  TYPE_VendingMachineWithLamp_Model (const Common &c) : Record(c) {}

  const wchar_t * GetTypeName () const   {
    return L"TYPE_VendingMachineWithLamp_Model";
  }

  type_tiM get_stock () const;
  void set_stock (const type_tiM &p);
  type_tiM get_price () const;
  void set_price (const type_tiM &p);
  TYPE_VendingMachineWithLamp_Yen get_amount () const;
  void set_amount (const TYPE_VendingMachineWithLamp_Yen &p);
};

Bool vdm_VendingMachineWithLamp_inv_VendingMachine (const TYPE_VendingMachineWithLamp_VendingMachine &);

Bool vdm_VendingMachineWithLamp_inv_Coin (const TYPE_VendingMachineWithLamp_Yen &);

Bool vdm_VendingMachineWithLamp_inv_Lamp (const TYPE_VendingMachineWithLamp_Lamp &);

Bool vdm_VendingMachineWithLamp_inv_Model (const TYPE_VendingMachineWithLamp_Model &);

void init_VendingMachineWithLamp ();

void vdm_VendingMachineWithLamp_Return ();

Bool vdm_VendingMachineWithLamp_post_Return (const TYPE_VendingMachineWithLamp_VendingMachine &, const TYPE_VendingMachineWithLamp_VendingMachine &);

void vdm_VendingMachineWithLamp_Purchase (const TYPE_VendingMachineWithLamp_Goods &);

Bool vdm_VendingMachineWithLamp_pre_Purchase (const TYPE_VendingMachineWithLamp_Goods &, const TYPE_VendingMachineWithLamp_VendingMachine &);

Bool vdm_VendingMachineWithLamp_post_Purchase (const TYPE_VendingMachineWithLamp_Goods &, const TYPE_VendingMachineWithLamp_VendingMachine &, const TYPE_VendingMachineWithLamp_VendingMachine &);

Bool vdm_VendingMachineWithLamp_ExistStock (const TYPE_VendingMachineWithLamp_Goods &, const type_tiM &);

Bool vdm_VendingMachineWithLamp_pre_ExistStock (const TYPE_VendingMachineWithLamp_Goods &, const type_tiM &);

void vdm_VendingMachineWithLamp_InsertCoin (const TYPE_VendingMachineWithLamp_Coin &);

Bool vdm_VendingMachineWithLamp_post_InsertCoin (const TYPE_VendingMachineWithLamp_Coin &, const TYPE_VendingMachineWithLamp_VendingMachine &, const TYPE_VendingMachineWithLamp_VendingMachine &);

TYPE_VendingMachineWithLamp_Lamp vdm_VendingMachineWithLamp_LampStatus (const TYPE_VendingMachineWithLamp_Model &);

type_tUM vdm_VendingMachineWithLamp_SellStatus (const TYPE_VendingMachineWithLamp_Model &);

void vdm_VendingMachineWithLamp_SetupPrice (const TYPE_VendingMachineWithLamp_Goods &, const TYPE_VendingMachineWithLamp_Yen &);

Bool vdm_VendingMachineWithLamp_pre_SetupPrice (const TYPE_VendingMachineWithLamp_Goods &, const TYPE_VendingMachineWithLamp_Yen &, const TYPE_VendingMachineWithLamp_VendingMachine &);

Bool vdm_VendingMachineWithLamp_post_SetupPrice (const TYPE_VendingMachineWithLamp_Goods &, const TYPE_VendingMachineWithLamp_Yen &, const TYPE_VendingMachineWithLamp_VendingMachine &, const TYPE_VendingMachineWithLamp_VendingMachine &);

void vdm_VendingMachineWithLamp_SetupStock (const TYPE_VendingMachineWithLamp_Goods &, const Int &);

Bool vdm_VendingMachineWithLamp_pre_SetupStock (const TYPE_VendingMachineWithLamp_Goods &, const Int &, const TYPE_VendingMachineWithLamp_VendingMachine &);

Bool vdm_VendingMachineWithLamp_post_SetupStock (const TYPE_VendingMachineWithLamp_Goods &, const Int &, const TYPE_VendingMachineWithLamp_VendingMachine &, const TYPE_VendingMachineWithLamp_VendingMachine &);

Bool vdm_VendingMachineWithLamp_EnoughMoney (const TYPE_VendingMachineWithLamp_Goods &, const type_tiM &, const TYPE_VendingMachineWithLamp_Yen &);

Bool vdm_VendingMachineWithLamp_pre_EnoughMoney (const TYPE_VendingMachineWithLamp_Goods &, const type_tiM &, const TYPE_VendingMachineWithLamp_Yen &);

void vdm_VendingMachineWithLamp_RegisterGoods (const TYPE_VendingMachineWithLamp_Goods &);

Bool vdm_VendingMachineWithLamp_pre_RegisterGoods (const TYPE_VendingMachineWithLamp_Goods &, const TYPE_VendingMachineWithLamp_VendingMachine &);

Bool vdm_VendingMachineWithLamp_post_RegisterGoods (const TYPE_VendingMachineWithLamp_Goods &, const TYPE_VendingMachineWithLamp_VendingMachine &, const TYPE_VendingMachineWithLamp_VendingMachine &);

type_tUM vdm_VendingMachineWithLamp_SoldOutStatus (const TYPE_VendingMachineWithLamp_Model &);

Bool vdm_VendingMachineWithLamp_AvailablePurchase (const TYPE_VendingMachineWithLamp_Goods &, const type_tiM &, const type_tiM &, const TYPE_VendingMachineWithLamp_Yen &);

Bool vdm_VendingMachineWithLamp_pre_AvailablePurchase (const TYPE_VendingMachineWithLamp_Goods &, const type_tiM &, const type_tiM &, const TYPE_VendingMachineWithLamp_Yen &);

Bool vdm_VendingMachineWithLamp_init_uVendingMachine (const TYPE_VendingMachineWithLamp_VendingMachine &);


#endif // _VendingMachineWithLamp_h
