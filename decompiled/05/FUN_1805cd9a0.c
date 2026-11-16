// FUN_1805cd9a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805cd9a0 */

undefined8
FUN_1805cd9a0(longlong param_1,uint param_2,uint param_3,undefined8 param_4,undefined8 param_5,
             undefined4 *param_6)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  
  iVar6 = *(int *)(*(longlong *)(param_1 + 0x480) + (ulonglong)param_2 * 4);
  *param_6 = 0;
  lVar5 = (ulonglong)(uint)(iVar6 * 4) + *(longlong *)(param_1 + 0x468);
  uVar7 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar5 + 8),*(undefined1 *)(lVar5 + 9)),
                            *(undefined1 *)(lVar5 + 10)),*(undefined1 *)(lVar5 + 0xb));
  iVar6 = 0;
  if (param_3 <= *(uint *)(param_1 + 0x10)) {
    do {
      if ((*(uint *)(param_1 + 0x4d4) <= uVar7) ||
         (*(uint *)(param_1 + 0x4d4) - uVar7 < param_3 * 4 + 0xc)) {
        return 3;
      }
      uVar4 = FUN_1805788b0(param_4,*(int *)(param_1 + 0x4d0) + 4 + param_3 * 4 + uVar7);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      uVar4 = FUN_180577bf0(param_4,8);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      uVar2 = FUN_180577e30(param_4);
      uVar3 = FUN_180577e30(param_4);
      FUN_180577d30(param_4);
      if (uVar2 == uVar3) {
        return 0x9d;
      }
      if (uVar3 < uVar2) {
        return 3;
      }
      if (uVar3 - uVar2 < 8) {
        return 3;
      }
      if (*(int *)(param_1 + 0x4d4) - uVar7 < uVar3) {
        return 3;
      }
      uVar4 = FUN_1805788b0(param_4,*(int *)(param_1 + 0x4d0) + uVar2 + uVar7);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      uVar4 = FUN_180577bf0(param_4,uVar3 - uVar2);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      FUN_180577ed0(param_4);
      FUN_180577ed0(param_4);
      uVar2 = FUN_180577e30(param_4);
      if (0x706e6720 < uVar2) {
        if (uVar2 != 0x7267626c) {
          bVar8 = uVar2 == 0x74696666;
          goto LAB_1805cdb9a;
        }
LAB_1805cdba1:
        uVar4 = 2;
LAB_1805cdba6:
        FUN_180577d30(param_4);
        return uVar4;
      }
      if (uVar2 == 0x706e6720) {
        FUN_180577d30(param_4);
        return 7;
      }
      if ((uVar2 != 0x64757065) && (uVar2 != 0x666c6970)) {
        bVar8 = uVar2 == 0x6a706720;
LAB_1805cdb9a:
        uVar4 = 7;
        if (!bVar8) goto LAB_1805cdba6;
        goto LAB_1805cdba1;
      }
      if (3 < iVar6) {
        FUN_180577d30(param_4);
        return 3;
      }
      uVar1 = FUN_180577ed0(param_4);
      param_3 = (uint)uVar1;
      FUN_180577d30(param_4);
      iVar6 = iVar6 + 1;
    } while (param_3 <= *(uint *)(param_1 + 0x10));
  }
  return 6;
}



