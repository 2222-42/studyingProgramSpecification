//
// THIS FILE IS AUTOMATICALLY GENERATED!!
//
// Generated at 2020-08-28 by the VDM-SL to C++ Code Generator
// (v9.0.7 - Sat 09-Jun-2018 09:35:14 +0900)
//
// This file was genereted from "E:/VDM-SL/studyingProgramSpecification/chap4/maximumOp.vdmsl".

#ifndef _maximumOp_h
#define _maximumOp_h

#include <math.h>
#include "metaiv.h"
#include "cg.h"
#include "cg_aux.h"
#include "maximumOp_anonym.h"


enum {
  vdm_maximumOp_valseq = TAG_TYPE_maximumOp_valseq,
  length_maximumOp_valseq = 2,
  pos_maximumOp_valseq_N = 1,
  pos_maximumOp_valseq_x = 2
};

class TYPE_maximumOp_valseq : public Record {
public:
  TYPE_maximumOp_valseq () : Record(TAG_TYPE_maximumOp_valseq, 2) {}

  TYPE_maximumOp_valseq &Init (const Int &p1, const type_iL &p2);
  TYPE_maximumOp_valseq (const Common &c) : Record(c) {}

  const wchar_t * GetTypeName () const   {
    return L"TYPE_maximumOp_valseq";
  }

  Int get_N () const;
  void set_N (const Int &p);
  type_iL get_x () const;
  void set_x (const type_iL &p);
};

void init_maximumOp ();

Int vdm_maximumOp_maximumOp ();

Bool vdm_maximumOp_pre_maximumOp (const TYPE_maximumOp_valseq &);

Bool vdm_maximumOp_post_maximumOp (const Int &, const TYPE_maximumOp_valseq &, const TYPE_maximumOp_valseq &);


#endif // _maximumOp_h