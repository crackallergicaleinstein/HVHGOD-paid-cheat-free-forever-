// FUN_1804c7d70 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804c7d70 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804c7d70(int param_1,undefined8 param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  lVar3 = DAT_180bb8ae8;
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_c8;
  if ((*(int *)(DAT_180bb8ae8 + 0x2008) < *(int *)(DAT_180bb8ae8 + 0x1ff8)) &&
     (*(int *)((longlong)*(int *)(DAT_180bb8ae8 + 0x2008) * 0x38 +
              *(longlong *)(DAT_180bb8ae8 + 0x2000)) == param_1)) {
    if ((param_3 & 0x1000040) == 0x1000040) {
      uVar2 = *(uint *)(DAT_180bb8ae8 + 0x1f10);
      puVar1 = (uint *)(DAT_180bb8ae8 + 0x1f50);
      if ((uVar2 >> 9 & 1) == 0) {
        uVar5 = 0;
        *puVar1 = 0;
      }
      else {
        uVar5 = *(uint *)(DAT_180bb8ae8 + 0x1f54);
      }
      *puVar1 = *puVar1 | 0x40;
      *(uint *)(lVar3 + 0x1f54) = uVar5 & 0xffffffbf;
      *(uint *)(lVar3 + 0x1f10) = uVar2 | 0x200;
    }
    local_a8 = *(undefined4 *)(lVar3 + 0x2614);
    FUN_1804b08d0(local_98,0x80,"%s###Menu_%02d",param_2);
    cVar4 = FUN_1804bee10(local_98,0,param_3 | 0x4000000);
    if (cVar4 == '\0') {
      FUN_1804c7e80();
    }
  }
  else {
    *(undefined4 *)(DAT_180bb8ae8 + 0x1f10) = 0;
  }
}



