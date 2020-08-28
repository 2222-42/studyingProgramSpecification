//
// THIS FILE IS AUTOMATICALLY GENERATED!!
//
// Generated at 2020-08-28 by the VDM-SL to C++ Code Generator
// (v9.0.7 - Sat 09-Jun-2018 09:35:14 +0900)
//
// This file was genereted from "E:/VDM-SL/studyingProgramSpecification/chap4/sorting.vdmsl".

#ifndef _sorting_h
#define _sorting_h

#include <math.h>
#include "metaiv.h"
#include "cg.h"
#include "cg_aux.h"
#include "sorting_anonym.h"


enum {
  vdm_sorting_array = TAG_TYPE_sorting_array,
  length_sorting_array = 2,
  pos_sorting_array_N = 1,
  pos_sorting_array_X = 2
};

class TYPE_sorting_array : public Record {
public:
  TYPE_sorting_array () : Record(TAG_TYPE_sorting_array, 2) {}

  TYPE_sorting_array &Init (const Int &p1, const type_iL &p2);
  TYPE_sorting_array (const Common &c) : Record(c) {}

  const wchar_t * GetTypeName () const   {
    return L"TYPE_sorting_array";
  }

  Int get_N () const;
  void set_N (const Int &p);
  type_iL get_X () const;
  void set_X (const type_iL &p);
};

void init_sorting ();

Bool vdm_sorting_ordered (const type_iL &);

void vdm_sorting_sorting ();

Bool vdm_sorting_pre_sorting (const TYPE_sorting_array &);

Bool vdm_sorting_post_sorting (const TYPE_sorting_array &, const TYPE_sorting_array &);

Int vdm_sorting_numberof (const Int &, const type_iL &);

Bool vdm_sorting_permutation (const type_iL &, const type_iL &);


#endif // _sorting_h
