// FUN_1801b1240 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801b1240 */

undefined8 * FUN_1801b1240(float *param_1,undefined8 *param_2,byte *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  float *local_38;
  undefined8 *local_30;
  
  uVar6 = (((((((((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_3[1])
                * 0x100000001b3 ^ (ulonglong)param_3[2]) * 0x100000001b3 ^ (ulonglong)param_3[3]) *
              0x100000001b3 ^ (ulonglong)param_3[4]) * 0x100000001b3 ^ (ulonglong)param_3[5]) *
            0x100000001b3 ^ (ulonglong)param_3[6]) * 0x100000001b3 ^ (ulonglong)param_3[7]) *
          0x100000001b3;
  plVar1 = *(longlong **)
            (*(longlong *)(param_1 + 6) + 8 + (uVar6 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
  local_38 = param_1 + 2;
  plVar7 = *(longlong **)local_38;
  if (plVar1 != *(longlong **)local_38) {
    lVar2 = plVar1[2];
    while (*(longlong *)param_3 != lVar2) {
      if (plVar1 == *(longlong **)
                     (*(longlong *)(param_1 + 6) + (uVar6 & *(ulonglong *)(param_1 + 0xc)) * 0x10))
      {
        plVar7 = plVar1;
        goto LAB_1801b131f;
      }
      plVar1 = (longlong *)plVar1[1];
      lVar2 = plVar1[2];
    }
    plVar7 = (longlong *)*plVar1;
    if (plVar1 != (longlong *)0x0) {
      *param_2 = plVar1;
      *(undefined1 *)(param_2 + 1) = 0;
      return param_2;
    }
  }
LAB_1801b131f:
  if (*(longlong *)(param_1 + 4) == 0xaaaaaaaaaaaaaaa) {
                    /* WARNING: Subroutine does not return */
    FUN_1805fa8b8("unordered_map/set too long");
  }
  local_30 = (undefined8 *)0x0;
  FUN_1801ba620(&local_38);
  puVar4 = local_30;
  local_30[2] = *(undefined8 *)param_3;
  if (*param_1 < (float)(*(longlong *)(param_1 + 4) + 1) / (float)*(ulonglong *)(param_1 + 0xe)) {
    uVar5 = FUN_180151090(param_1);
    FUN_1801bb6e0(param_1,uVar5);
    plVar1 = *(longlong **)
              (*(longlong *)(param_1 + 6) + 8 + (*(ulonglong *)(param_1 + 0xc) & uVar6) * 0x10);
    plVar7 = *(longlong **)(param_1 + 2);
    if (plVar1 != plVar7) {
      lVar2 = plVar1[2];
      plVar7 = plVar1;
      while (puVar4[2] != lVar2) {
        if (plVar7 == *(longlong **)
                       (*(longlong *)(param_1 + 6) + (*(ulonglong *)(param_1 + 0xc) & uVar6) * 0x10)
           ) goto LAB_1801b1406;
        plVar7 = (longlong *)plVar7[1];
        lVar2 = plVar7[2];
      }
      plVar7 = (longlong *)*plVar7;
    }
  }
LAB_1801b1406:
  puVar3 = (undefined8 *)plVar7[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar4 = plVar7;
  puVar4[1] = puVar3;
  *puVar3 = puVar4;
  plVar7[1] = (longlong)puVar4;
  uVar6 = *(ulonglong *)(param_1 + 0xc) & uVar6;
  lVar2 = *(longlong *)(param_1 + 6);
  plVar1 = *(longlong **)(lVar2 + uVar6 * 0x10);
  if (plVar1 == *(longlong **)(param_1 + 2)) {
    *(undefined8 **)(lVar2 + uVar6 * 0x10) = puVar4;
  }
  else {
    if (plVar1 == plVar7) {
      *(undefined8 **)(lVar2 + uVar6 * 0x10) = puVar4;
      goto LAB_1801b1456;
    }
    if (*(undefined8 **)(lVar2 + 8 + uVar6 * 0x10) != puVar3) goto LAB_1801b1456;
  }
  *(undefined8 **)(lVar2 + 8 + uVar6 * 0x10) = puVar4;
LAB_1801b1456:
  *param_2 = puVar4;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



