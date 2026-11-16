// FUN_18059baf0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18059baf0 */

ulonglong FUN_18059baf0(longlong param_1,void *param_2,ulonglong param_3)

{
  short sVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  short sVar5;
  uint local_res20 [2];
  
  uVar3 = FUN_1805788b0(param_1,0);
  if ((int)uVar3 == 0) {
    sVar1 = FUN_180578720(param_1,local_res20);
    uVar3 = (ulonglong)local_res20[0];
    sVar5 = 0;
    if (local_res20[0] == 0) {
      if ((ushort)(sVar1 + 0x7fffU) < 2) {
        FUN_1805785e0(param_1,local_res20);
        uVar3 = (ulonglong)local_res20[0];
      }
      sVar5 = sVar1;
    }
    if (((int)uVar3 == 0) &&
       (((sVar5 == -0x7fff || (uVar3 = FUN_1805788b0(param_1,0), (int)uVar3 == 0)) &&
        (uVar3 = FUN_180577bf0(param_1,param_3 & 0xffffffff), (int)uVar3 == 0)))) {
      iVar2 = memcmp(*(void **)(param_1 + 0x38),param_2,param_3);
      uVar4 = 0;
      if (iVar2 != 0) {
        uVar4 = 2;
      }
      FUN_180577d30(param_1);
      uVar3 = (ulonglong)uVar4;
    }
  }
  return uVar3;
}



