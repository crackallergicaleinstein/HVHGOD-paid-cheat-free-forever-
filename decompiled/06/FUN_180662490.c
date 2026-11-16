// FUN_180662490 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180662490 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_180662490(void)

{
  longlong lVar1;
  
  lVar1 = DAT_180ccf680;
  if (DAT_180ccf680 != 0) {
    DAT_180ccf680 = 0;
    (**(code **)(*(longlong *)lVar1 + 0x10))();
  }
  lVar1 = DAT_180ccf678;
  if (DAT_180ccf678 != 0) {
    DAT_180ccf678 = 0;
    (**(code **)(*(longlong *)lVar1 + 0x10))();
  }
  lVar1 = DAT_180ccf670;
  if (DAT_180ccf670 != 0) {
    DAT_180ccf670 = 0;
    (**(code **)(*(longlong *)lVar1 + 0x10))();
  }
  FUN_18015c010(&DAT_180ccf610);
  FUN_18015c010(&DAT_180ccf5b8);
  FUN_18015c010(&DAT_180ccf550);
  FUN_18015c010(&DAT_180ccf520);
  FUN_180186810(&DAT_180ccf4e0);
  FUN_180186810(&DAT_180ccf4a0);
  FUN_1800f0160(&DAT_180ccf478);
  FUN_1801d9f50();
  FUN_1804547d0(DAT_180ccf468,0x38);
  FUN_1801d9af0(&DAT_180ccf448);
  FUN_1801d6fc0(&DAT_180ccf000);
  return;
}



