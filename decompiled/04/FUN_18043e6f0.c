// FUN_18043e6f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18043e6f0 */

undefined8 * FUN_18043e6f0(float *param_1,undefined8 *param_2,byte *param_3,undefined4 *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  longlong *plVar6;
  float *local_48;
  undefined8 *local_40;
  
  uVar5 = (((((((((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_3[1])
                * 0x100000001b3 ^ (ulonglong)param_3[2]) * 0x100000001b3 ^ (ulonglong)param_3[3]) *
              0x100000001b3 ^ (ulonglong)param_3[4]) * 0x100000001b3 ^ (ulonglong)param_3[5]) *
            0x100000001b3 ^ (ulonglong)param_3[6]) * 0x100000001b3 ^ (ulonglong)param_3[7]) *
          0x100000001b3;
  plVar1 = *(longlong **)
            (*(longlong *)(param_1 + 6) + 8 + (uVar5 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
  local_48 = param_1 + 2;
  plVar6 = *(longlong **)local_48;
  if (plVar1 != *(longlong **)local_48) {
    lVar2 = plVar1[2];
    while (*(longlong *)param_3 != lVar2) {
      if (plVar1 == *(longlong **)
                     (*(longlong *)(param_1 + 6) + (uVar5 & *(ulonglong *)(param_1 + 0xc)) * 0x10))
      {
        plVar6 = plVar1;
        goto LAB_18043e7d7;
      }
      plVar1 = (longlong *)plVar1[1];
      lVar2 = plVar1[2];
    }
    plVar6 = (longlong *)*plVar1;
    if (plVar1 != (longlong *)0x0) {
      *param_2 = plVar1;
      *(undefined1 *)(param_2 + 1) = 0;
      return param_2;
    }
  }
LAB_18043e7d7:
  if (*(longlong *)(param_1 + 4) == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_1805fa8b8("unordered_map/set too long");
  }
  local_40 = (undefined8 *)0x0;
  FUN_1801ba690(&local_48);
  puVar4 = local_40;
  local_40[2] = *(undefined8 *)param_3;
  *(undefined4 *)(local_40 + 3) = *param_4;
  if (*param_1 < (float)(*(longlong *)(param_1 + 4) + 1) / (float)*(ulonglong *)(param_1 + 0xe)) {
    FUN_1801b8c20(param_1);
    plVar1 = *(longlong **)
              (*(longlong *)(param_1 + 6) + 8 + (uVar5 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
    plVar6 = *(longlong **)(param_1 + 2);
    if (plVar1 != plVar6) {
      lVar2 = plVar1[2];
      plVar6 = plVar1;
      while (puVar4[2] != lVar2) {
        if (plVar6 == *(longlong **)
                       (*(longlong *)(param_1 + 6) + (uVar5 & *(ulonglong *)(param_1 + 0xc)) * 0x10)
           ) goto LAB_18043e8b7;
        plVar6 = (longlong *)plVar6[1];
        lVar2 = plVar6[2];
      }
      plVar6 = (longlong *)*plVar6;
    }
  }
LAB_18043e8b7:
  puVar3 = (undefined8 *)plVar6[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar4 = plVar6;
  puVar4[1] = puVar3;
  *puVar3 = puVar4;
  plVar6[1] = (longlong)puVar4;
  uVar5 = *(ulonglong *)(param_1 + 0xc) & uVar5;
  lVar2 = *(longlong *)(param_1 + 6);
  plVar1 = *(longlong **)(lVar2 + uVar5 * 0x10);
  if (plVar1 == *(longlong **)(param_1 + 2)) {
    *(undefined8 **)(lVar2 + uVar5 * 0x10) = puVar4;
  }
  else {
    if (plVar1 == plVar6) {
      *(undefined8 **)(lVar2 + uVar5 * 0x10) = puVar4;
      goto LAB_18043e907;
    }
    if (*(undefined8 **)(lVar2 + 8 + uVar5 * 0x10) != puVar3) goto LAB_18043e907;
  }
  *(undefined8 **)(lVar2 + 8 + uVar5 * 0x10) = puVar4;
LAB_18043e907:
  *param_2 = puVar4;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



