//
// THIS FILE IS AUTOMATICALLY GENERATED!!
//
// Generated at 2020-08-31 by the VDM-SL to C++ Code Generator
// (v9.0.7 - Sat 09-Jun-2018 09:35:14 +0900)
//
// This file was genereted from "E:\\VDM-SL\\studyingProgramSpecification\\chap5\\Address.vdmsl".

#ifndef _Address_h
#define _Address_h

#include <math.h>
#include "metaiv.h"
#include "cg.h"
#include "cg_aux.h"
#include "Address_anonym.h"


void init_Address ();

TYPE_Address_AddressBook vdm_Address_AddAddress (const TYPE_Address_Name &, const TYPE_Address_Address &, const TYPE_Address_AddressBook &);

Bool vdm_Address_pre_AddAddress (const TYPE_Address_Name &, const TYPE_Address_Address &, const TYPE_Address_AddressBook &);

TYPE_Address_Address vdm_Address_FindAddress (const TYPE_Address_Name &, const TYPE_Address_AddressBook &);

Bool vdm_Address_pre_FindAddress (const TYPE_Address_Name &, const TYPE_Address_AddressBook &);


#endif // _Address_h
