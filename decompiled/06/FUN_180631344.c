// FUN_180631344 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180631344 */

/* Library Function - Single Match
    __acrt_lowio_ensure_fh_exists
   
   Library: Visual Studio 2019 Release */

undefined4 __acrt_lowio_ensure_fh_exists(uint param_1)

{
  int iVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  
  if (param_1 < 0x2000) {
    uVar5 = 0;
    __acrt_lock(7);
    lVar4 = 0;
    iVar1 = DAT_180bb2530;
    while (iVar1 <= (int)param_1) {
      if ((&DAT_180bb2130)[lVar4] == 0) {
        lVar3 = __acrt_lowio_create_handle_array();
        (&DAT_180bb2130)[lVar4] = lVar3;
        if (lVar3 == 0) {
          uVar5 = 0xc;
          break;
        }
        iVar1 = DAT_180bb2530 + 0x40;
        DAT_180bb2530 = iVar1;
      }
      lVar4 = lVar4 + 1;
    }
    __acrt_unlock(7);
  }
  else {
    puVar2 = (undefined4 *)FUN_18060fe00();
    *puVar2 = 9;
    FUN_18060aad4();
    uVar5 = 9;
  }
  return uVar5;
}



