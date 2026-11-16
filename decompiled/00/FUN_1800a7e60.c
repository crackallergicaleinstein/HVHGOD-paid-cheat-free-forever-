// FUN_1800a7e60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800a7e60 */

undefined1 (*) [16] FUN_1800a7e60(undefined1 (*param_1) [16],uint *param_2,uint *param_3)

{
  short sVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 (*pauVar4) [16];
  undefined2 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint *puVar8;
  
  lVar2 = *(longlong *)(param_3 + 4);
  puVar8 = param_3;
  if (7 < *(ulonglong *)(param_3 + 6)) {
    puVar8 = *(uint **)param_3;
  }
  if (((lVar2 == 0) ||
      (((3 < lVar2 * 2 && ((*puVar8 & 0xffffffdf) - 0x3a0041 < 0x1a)) || ((short)*puVar8 == 0x5c))))
     || ((short)*puVar8 == 0x2f)) {
    FUN_1800f5370();
    FUN_1800a7c10(param_1,param_3);
    return param_1;
  }
  lVar3 = *(longlong *)(param_2 + 4);
  if (7 < *(ulonglong *)(param_2 + 6)) {
    param_2 = *(uint **)param_2;
  }
  if (lVar3 == 2) {
    if (0x19 < (*param_2 & 0xffffffdf) - 0x3a0041) {
LAB_1800a7f48:
      sVar1 = *(short *)((longlong)param_2 + lVar3 * 2 + -2);
      if ((sVar1 != 0x5c) && (sVar1 != 0x2f)) {
        lVar7 = 1;
        goto LAB_1800a7f08;
      }
    }
  }
  else if (lVar3 != 0) goto LAB_1800a7f48;
  lVar7 = 0;
LAB_1800a7f08:
  uVar6 = lVar7 + lVar3 + lVar2;
  *param_1 = (undefined1  [16])0x0;
  *(undefined8 *)param_1[1] = 0;
  *(undefined8 *)(param_1[1] + 8) = 7;
  *(undefined2 *)*param_1 = 0;
  if (uVar6 < 8) {
    *(ulonglong *)param_1[1] = uVar6;
  }
  else {
    FUN_18010f6b0(0,uVar6);
  }
  pauVar4 = param_1;
  if (7 < *(ulonglong *)(param_1[1] + 8)) {
    pauVar4 = *(undefined1 (**) [16])*param_1;
  }
  FUN_18063aed0(pauVar4,param_2,lVar3 * 2);
  puVar5 = (undefined2 *)(*pauVar4 + lVar3 * 2);
  if ((char)lVar7 != '\0') {
    *puVar5 = 0x5c;
    puVar5 = puVar5 + 1;
  }
  FUN_18063aed0(puVar5,puVar8,lVar2 * 2);
  *(ulonglong *)param_1[1] = uVar6;
  pauVar4 = param_1;
  if (7 < *(ulonglong *)(param_1[1] + 8)) {
    pauVar4 = *(undefined1 (**) [16])*param_1;
  }
  *(undefined2 *)(*pauVar4 + uVar6 * 2) = 0;
  return param_1;
}



