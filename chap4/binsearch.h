//
// THIS FILE IS AUTOMATICALLY GENERATED!!
//
// Generated at 2020-08-28 by the VDM-SL to C++ Code Generator
// (v9.0.7 - Sat 09-Jun-2018 09:35:14 +0900)
//
// This file was genereted from "E:/VDM-SL/studyingProgramSpecification/chap4/binsearch.vdmsl".

#ifndef _binsearch_h
#define _binsearch_h

#include <math.h>
#include "metaiv.h"
#include "cg.h"
#include "cg_aux.h"
#include "binsearch_anonym.h"


enum {
  vdm_binsearch_array = TAG_TYPE_binsearch_array,
  length_binsearch_array = 2,
  pos_binsearch_array_N = 1,
  pos_binsearch_array_a = 2
};

class TYPE_binsearch_array : public Record {
public:
  TYPE_binsearch_array () : Record(TAG_TYPE_binsearch_array, 2) {}

  TYPE_binsearch_array &Init (const Int &p1, const type_iL &p2);
  TYPE_binsearch_array (const Common &c) : Record(c) {}

  const wchar_t * GetTypeName () const   {
    return L"TYPE_binsearch_array";
  }

  Int get_N () const;
  void set_N (const Int &p);
  type_iL get_a () const;
  void set_a (const type_iL &p);
};

void init_binsearch ();

type_bU2P vdm_binsearch_binsearch (const Int &);

Bool vdm_binsearch_pre_binsearch (const Int &, const TYPE_binsearch_array &);

Bool vdm_binsearch_post_binsearch (const Int &, const type_bU2P &, const TYPE_binsearch_array &, const TYPE_binsearch_array &);


#endif // _binsearch_h