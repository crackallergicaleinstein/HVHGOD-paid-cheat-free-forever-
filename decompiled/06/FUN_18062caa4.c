// FUN_18062caa4 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18062caa4 */

ulonglong FUN_18062caa4(ushort *param_1,byte *param_2,ulonglong param_3,longlong param_4)

{
  int iVar1;
  DWORD DVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  byte *pbVar7;
  undefined8 local_res8;
  byte *local_res10;
  undefined8 in_stack_ffffffffffffffd0;
  uint uVar8;
  undefined8 uVar9;
  
  uVar8 = (uint)((ulonglong)in_stack_ffffffffffffffd0 >> 0x20);
  uVar9 = 0xfffffffffffffffe;
  uVar3 = 0;
  if (param_1 != (ushort *)0x0) {
    if (param_3 == 0) {
      return 0;
    }
    *param_1 = 0;
  }
  local_res10 = param_2;
  if (param_2 == (byte *)0x0) {
    *(undefined1 *)(param_4 + 0x30) = 1;
    *(undefined4 *)(param_4 + 0x2c) = 0x16;
    FUN_18060aa1c(0,0,0,0,0,param_4);
    return 0xffffffffffffffff;
  }
  if (*(char *)(param_4 + 0x28) == '\0') {
    FUN_18060e230(param_4);
  }
  iVar1 = *(int *)(*(longlong *)(param_4 + 0x18) + 0xc);
  if (iVar1 == 0xfde9) {
    local_res8 = 0;
    uVar3 = FUN_1806240a8(param_1,&local_res10,param_3,&local_res8,param_4);
    return uVar3;
  }
  lVar4 = *(longlong *)(*(longlong *)(param_4 + 0x18) + 0x138);
  if (param_1 == (ushort *)0x0) {
    uVar3 = 0xffffffffffffffff;
    if (lVar4 == 0) {
      do {
        uVar3 = uVar3 + 1;
      } while (local_res10[uVar3] != 0);
    }
    else {
      iVar1 = FUN_18062b5a8(iVar1,9,local_res10,0xffffffff,0,(ulonglong)uVar8 << 0x20,uVar9);
      lVar4 = (longlong)iVar1;
      if (lVar4 != 0) goto LAB_18062cc86;
      *(undefined1 *)(param_4 + 0x30) = 1;
      *(undefined4 *)(param_4 + 0x2c) = 0x2a;
    }
  }
  else if (lVar4 == 0) {
    if (param_3 != 0) {
      do {
        *param_1 = (ushort)local_res10[uVar3];
        if (local_res10[uVar3] == 0) {
          return uVar3;
        }
        uVar3 = uVar3 + 1;
        param_1 = param_1 + 1;
      } while (uVar3 < param_3);
    }
  }
  else {
    uVar5 = (uint)param_3;
    uVar3 = 0xffffffffffffffff;
    iVar1 = FUN_18062b5a8(iVar1,9,local_res10,0xffffffff,param_1,CONCAT44(uVar8,uVar5),uVar9);
    lVar4 = (longlong)iVar1;
    if (lVar4 != 0) {
LAB_18062cc86:
      return lVar4 - 1;
    }
    DVar2 = GetLastError();
    if (DVar2 == 0x7a) {
      uVar6 = param_3 & 0xffffffff;
      pbVar7 = local_res10;
      while (uVar5 != 0) {
        uVar5 = (int)uVar6 - 1;
        uVar6 = (ulonglong)uVar5;
        if (*pbVar7 == 0) break;
        if ((*(short *)(**(longlong **)(param_4 + 0x18) + (ulonglong)*pbVar7 * 2) < 0) &&
           (pbVar7 = pbVar7 + 1, *pbVar7 == 0)) goto LAB_18062cbcb;
        pbVar7 = pbVar7 + 1;
      }
      iVar1 = FUN_18062b5a8(*(undefined4 *)(*(longlong *)(param_4 + 0x18) + 0xc),1,local_res10,
                            (int)pbVar7 - (int)local_res10,param_1,param_3 & 0xffffffff);
      if ((longlong)iVar1 != 0) {
        return (longlong)iVar1;
      }
    }
LAB_18062cbcb:
    *(undefined1 *)(param_4 + 0x30) = 1;
    *(undefined4 *)(param_4 + 0x2c) = 0x2a;
    *param_1 = 0;
  }
  return uVar3;
}



