// FUN_1802dc7b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802dc7b0 */

undefined8
FUN_1802dc7b0(longlong param_1,longlong *param_2,longlong *param_3,uint param_4,float param_5,
             char param_6,undefined4 param_7)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong lStack_88;
  uint uStack_80;
  undefined4 uStack_7c;
  undefined1 local_78 [16];
  undefined4 uStack_68;
  uint uStack_64;
  uint uStack_60;
  float fStack_5c;
  undefined4 local_58;
  uint uStack_54;
  undefined4 local_50;
  
  cVar3 = FUN_1802c9810(param_2,param_7);
  if ((cVar3 == '\0') || (cVar3 = FUN_1802c9810(param_3,param_7), cVar3 == '\0')) {
    return 0;
  }
  uVar4 = 0;
  if (param_6 != '\0') {
    plVar2 = *(longlong **)(param_1 + 8);
    local_50 = *(undefined4 *)(param_1 + 0x1c);
    local_98 = 0;
    local_78 = ZEXT816(0);
    lVar1 = *param_2;
    uStack_64 = ((((int)((float)(param_4 >> 0x18) * 0.25) & 0xffU) << 8 | param_4 >> 0x10 & 0xff) <<
                 8 | param_4 >> 8 & 0xff) << 8 | param_4 & 0xff;
    uStack_8c = (undefined4)param_2[1];
    uStack_94 = (undefined4)lVar1;
    uStack_90 = (undefined4)((ulonglong)lVar1 >> 0x20);
    lStack_88 = *param_3;
    uStack_80 = *(uint *)(param_3 + 1);
    fStack_5c = param_5 * 2.5;
    uStack_54 = *(uint *)(param_1 + 0x18);
    uStack_7c = 0;
    uStack_68 = 0;
    local_58 = 0;
    if (plVar2 == *(longlong **)(param_1 + 0x10)) {
      uVar4 = 0;
      uStack_60 = uStack_64;
      FUN_1802eafb0(param_1,plVar2,&local_98);
    }
    else {
      *plVar2 = lVar1 << 0x20;
      plVar2[1] = CONCAT44(uStack_8c,uStack_90);
      plVar2[2] = lStack_88;
      plVar2[3] = (ulonglong)uStack_80;
      plVar2[4] = 0;
      plVar2[5] = 0;
      plVar2[6] = (ulonglong)uStack_64 << 0x20;
      plVar2[7] = CONCAT44(fStack_5c,uStack_64);
      plVar2[8] = (ulonglong)uStack_54 << 0x20;
      *(undefined4 *)(plVar2 + 9) = local_50;
      *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x4c;
    }
  }
  uStack_8c = (undefined4)param_2[1];
  plVar2 = *(longlong **)(param_1 + 8);
  local_50 = *(undefined4 *)(param_1 + 0x1c);
  local_78 = ZEXT816(0);
  lVar1 = *param_2;
  uStack_80 = (uint)param_3[1];
  uStack_94 = (undefined4)lVar1;
  uStack_90 = (undefined4)((ulonglong)lVar1 >> 0x20);
  lStack_88 = *param_3;
  uStack_54 = *(undefined4 *)(param_1 + 0x18);
  local_98 = 0;
  if (plVar2 == *(longlong **)(param_1 + 0x10)) {
    uStack_7c = uVar4;
    uStack_68 = uVar4;
    uStack_64 = param_4;
    uStack_60 = param_4;
    fStack_5c = param_5;
    local_58 = uVar4;
    FUN_1802eafb0(param_1,plVar2,&local_98);
    return 1;
  }
  *plVar2 = lVar1 << 0x20;
  plVar2[1] = CONCAT44(uStack_8c,uStack_90);
  plVar2[2] = lStack_88;
  plVar2[3] = CONCAT44(uVar4,uStack_80);
  plVar2[4] = 0;
  plVar2[5] = 0;
  plVar2[6] = CONCAT44(param_4,uVar4);
  plVar2[7] = CONCAT44(param_5,param_4);
  plVar2[8] = CONCAT44(uStack_54,uVar4);
  *(undefined4 *)(plVar2 + 9) = local_50;
  *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x4c;
  return 1;
}



