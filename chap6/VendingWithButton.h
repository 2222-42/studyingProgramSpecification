//
// THIS FILE IS AUTOMATICALLY GENERATED!!
//
// Generated at 2020-09-06 by the VDM-SL to C++ Code Generator
// (v9.0.7 - Sat 09-Jun-2018 09:35:14 +0900)
//
// This file was genereted from "E:/VDM-SL/studyingProgramSpecification/chap6/VendingWithButton.vdmsl".

#ifndef _VendingWithButton_h
#define _VendingWithButton_h

#include <math.h>
#include "metaiv.h"
#include "cg.h"
#include "cg_aux.h"
#include "VendingWithButton_anonym.h"


enum {
  vdm_VendingWithButton_VendingMachine = TAG_TYPE_VendingWithButton_VendingMachine,
  length_VendingWithButton_VendingMachine = 3,
  pos_VendingWithButton_VendingMachine_model = 1,
  pos_VendingWithButton_VendingMachine_button = 2,
  pos_VendingWithButton_VendingMachine_column = 3,
  vdm_VendingWithButton_Lamp = TAG_TYPE_VendingWithButton_Lamp,
  length_VendingWithButton_Lamp = 2,
  pos_VendingWithButton_Lamp_soldOut = 1,
  pos_VendingWithButton_Lamp_sell = 2,
  vdm_VendingWithButton_Model = TAG_TYPE_VendingWithButton_Model,
  length_VendingWithButton_Model = 3,
  pos_VendingWithButton_Model_stock = 1,
  pos_VendingWithButton_Model_price = 2,
  pos_VendingWithButton_Model_amount = 3,
  vdm_VendingWithButton_ButtonInfo = TAG_TYPE_VendingWithButton_ButtonInfo,
  length_VendingWithButton_ButtonInfo = 2,
  pos_VendingWithButton_ButtonInfo_b2g = 1,
  pos_VendingWithButton_ButtonInfo_lamp = 2,
  vdm_VendingWithButton_ColumnInfo = TAG_TYPE_VendingWithButton_ColumnInfo,
  length_VendingWithButton_ColumnInfo = 2,
  pos_VendingWithButton_ColumnInfo_c2g = 1,
  pos_VendingWithButton_ColumnInfo_stock = 2
};

class TYPE_VendingWithButton_VendingMachine : public Record {
public:
  TYPE_VendingWithButton_VendingMachine () : Record(TAG_TYPE_VendingWithButton_VendingMachine, 3) {}

  TYPE_VendingWithButton_VendingMachine &Init (const TYPE_VendingWithButton_Model &p1, const TYPE_VendingWithButton_ButtonInfo &p2, const TYPE_VendingWithButton_ColumnInfo &p3);
  TYPE_VendingWithButton_VendingMachine (const Common &c) : Record(c) {}

  const wchar_t * GetTypeName () const   {
    return L"TYPE_VendingWithButton_VendingMachine";
  }

  TYPE_VendingWithButton_Model get_model () const;
  void set_model (const TYPE_VendingWithButton_Model &p);
  TYPE_VendingWithButton_ButtonInfo get_button () const;
  void set_button (const TYPE_VendingWithButton_ButtonInfo &p);
  TYPE_VendingWithButton_ColumnInfo get_column () const;
  void set_column (const TYPE_VendingWithButton_ColumnInfo &p);
};


class TYPE_VendingWithButton_Lamp : public Record {
public:
  TYPE_VendingWithButton_Lamp () : Record(TAG_TYPE_VendingWithButton_Lamp, 2) {}

  TYPE_VendingWithButton_Lamp &Init (const type_tUM &p1, const type_tUM &p2);
  TYPE_VendingWithButton_Lamp (const Common &c) : Record(c) {}

  const wchar_t * GetTypeName () const   {
    return L"TYPE_VendingWithButton_Lamp";
  }

  type_tUM get_soldOut () const;
  void set_soldOut (const type_tUM &p);
  type_tUM get_sell () const;
  void set_sell (const type_tUM &p);
};


class TYPE_VendingWithButton_Model : public Record {
public:
  TYPE_VendingWithButton_Model () : Record(TAG_TYPE_VendingWithButton_Model, 3) {}

  TYPE_VendingWithButton_Model &Init (const type_tiM &p1, const type_tiM &p2, const TYPE_VendingWithButton_Yen &p3);
  TYPE_VendingWithButton_Model (const Common &c) : Record(c) {}

  const wchar_t * GetTypeName () const   {
    return L"TYPE_VendingWithButton_Model";
  }

  type_tiM get_stock () const;
  void set_stock (const type_tiM &p);
  type_tiM get_price () const;
  void set_price (const type_tiM &p);
  TYPE_VendingWithButton_Yen get_amount () const;
  void set_amount (const TYPE_VendingWithButton_Yen &p);
};


class TYPE_VendingWithButton_ButtonInfo : public Record {
public:
  TYPE_VendingWithButton_ButtonInfo () : Record(TAG_TYPE_VendingWithButton_ButtonInfo, 2) {}

  TYPE_VendingWithButton_ButtonInfo &Init (const type_ttM &p1, const TYPE_VendingWithButton_Lamp &p2);
  TYPE_VendingWithButton_ButtonInfo (const Common &c) : Record(c) {}

  const wchar_t * GetTypeName () const   {
    return L"TYPE_VendingWithButton_ButtonInfo";
  }

  type_ttM get_b2g () const;
  void set_b2g (const type_ttM &p);
  TYPE_VendingWithButton_Lamp get_lamp () const;
  void set_lamp (const TYPE_VendingWithButton_Lamp &p);
};


class TYPE_VendingWithButton_ColumnInfo : public Record {
public:
  TYPE_VendingWithButton_ColumnInfo () : Record(TAG_TYPE_VendingWithButton_ColumnInfo, 2) {}

  TYPE_VendingWithButton_ColumnInfo &Init (const type_ttM &p1, const type_tiM &p2);
  TYPE_VendingWithButton_ColumnInfo (const Common &c) : Record(c) {}

  const wchar_t * GetTypeName () const   {
    return L"TYPE_VendingWithButton_ColumnInfo";
  }

  type_ttM get_c2g () const;
  void set_c2g (const type_ttM &p);
  type_tiM get_stock () const;
  void set_stock (const type_tiM &p);
};

Bool vdm_VendingWithButton_inv_VendingMachine (const TYPE_VendingWithButton_VendingMachine &);

Bool vdm_VendingWithButton_inv_Coin (const TYPE_VendingWithButton_Yen &);

Bool vdm_VendingWithButton_inv_Lamp (const TYPE_VendingWithButton_Lamp &);

Bool vdm_VendingWithButton_inv_Model (const TYPE_VendingWithButton_Model &);

Bool vdm_VendingWithButton_inv_ButtonInfo (const TYPE_VendingWithButton_ButtonInfo &);

Bool vdm_VendingWithButton_inv_ColumnInfo (const TYPE_VendingWithButton_ColumnInfo &);

void init_VendingWithButton ();

type_tiM vdm_VendingWithButton_Stock (const TYPE_VendingWithButton_ColumnInfo &);

type_tUM vdm_VendingWithButton_SellLamp (const type_ttM &, const TYPE_VendingWithButton_Model &);

Bool vdm_VendingWithButton_pre_SellLamp (const type_ttM &, const TYPE_VendingWithButton_Model &);

Int vdm_VendingWithButton_SumStock (const type_tiM &);

Bool vdm_VendingWithButton_ExistStock (const TYPE_VendingWithButton_Goods &, const type_tiM &);

Bool vdm_VendingWithButton_pre_ExistStock (const TYPE_VendingWithButton_Goods &, const type_tiM &);

TYPE_VendingWithButton_Lamp vdm_VendingWithButton_LampStatus (const type_ttM &, const TYPE_VendingWithButton_Model &);

type_tUM vdm_VendingWithButton_SellStatus (const TYPE_VendingWithButton_Model &);

Bool vdm_VendingWithButton_EnoughMoney (const TYPE_VendingWithButton_Goods &, const type_tiM &, const TYPE_VendingWithButton_Yen &);

Bool vdm_VendingWithButton_pre_EnoughMoney (const TYPE_VendingWithButton_Goods &, const type_tiM &, const TYPE_VendingWithButton_Yen &);

type_tUM vdm_VendingWithButton_SoldOutLamp (const type_ttM &, const TYPE_VendingWithButton_Model &);

Bool vdm_VendingWithButton_pre_SoldOutLamp (const type_ttM &, const TYPE_VendingWithButton_Model &);

type_tUM vdm_VendingWithButton_SoldOutStatus (const TYPE_VendingWithButton_Model &);

Bool vdm_VendingWithButton_AvailablePurchase (const TYPE_VendingWithButton_Goods &, const type_tiM &, const type_tiM &, const TYPE_VendingWithButton_Yen &);

Bool vdm_VendingWithButton_pre_AvailablePurchase (const TYPE_VendingWithButton_Goods &, const type_tiM &, const type_tiM &, const TYPE_VendingWithButton_Yen &);

Bool vdm_VendingWithButton_init_uVendingMachine (const TYPE_VendingWithButton_VendingMachine &);


#endif // _VendingWithButton_h
