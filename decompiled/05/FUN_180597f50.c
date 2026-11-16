// FUN_180597f50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180597f50 */

undefined8 FUN_180597f50(longlong param_1,uint param_2,undefined4 *param_3)

{
  longlong lVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  undefined4 local_38 [4];
  
  lVar1 = *(longlong *)(param_1 + 0x2e0);
  if (lVar1 == 0) {
    return 6;
  }
  uVar7 = *(uint *)(lVar1 + 4);
  FUN_18059bc90(*(undefined8 *)(lVar1 + 0x108),local_38);
  uVar2 = param_2;
  if (uVar7 < param_2) {
    uVar2 = uVar7;
  }
  uVar5 = (ulonglong)uVar2;
  uVar7 = 0;
  if (uVar2 != 0) {
    lVar6 = 0;
    puVar4 = param_3;
    do {
      uVar3 = FUN_18059bbf0(lVar1 + 0xa8 + lVar6,
                            *(undefined4 *)
                             ((longlong)puVar4 + ((longlong)local_38 - (longlong)param_3)));
      lVar6 = lVar6 + 0x18;
      *puVar4 = uVar3;
      puVar4 = puVar4 + 1;
      uVar5 = uVar5 - 1;
      uVar7 = uVar2;
    } while (uVar5 != 0);
  }
  if (uVar7 < param_2) {
    FUN_18063ab10(param_3 + uVar7,0,(ulonglong)(param_2 - uVar7) << 2);
  }
  return 0;
}



