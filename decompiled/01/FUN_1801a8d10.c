// FUN_1801a8d10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801a8d10 */

undefined8 * FUN_1801a8d10(float *param_1,undefined8 *param_2,byte *param_3,undefined8 *param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  longlong *plVar7;
  float *local_48;
  undefined8 *local_40;
  
  uVar6 = (((((((((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_3[1])
                * 0x100000001b3 ^ (ulonglong)param_3[2]) * 0x100000001b3 ^ (ulonglong)param_3[3]) *
              0x100000001b3 ^ (ulonglong)param_3[4]) * 0x100000001b3 ^ (ulonglong)param_3[5]) *
            0x100000001b3 ^ (ulonglong)param_3[6]) * 0x100000001b3 ^ (ulonglong)param_3[7]) *
          0x100000001b3;
  plVar2 = *(longlong **)
            (*(longlong *)(param_1 + 6) + 8 + (uVar6 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
  local_48 = param_1 + 2;
  plVar7 = *(longlong **)local_48;
  if (plVar2 != *(longlong **)local_48) {
    lVar3 = plVar2[2];
    while (*(longlong *)param_3 != lVar3) {
      if (plVar2 == *(longlong **)
                     (*(longlong *)(param_1 + 6) + (uVar6 & *(ulonglong *)(param_1 + 0xc)) * 0x10))
      {
        plVar7 = plVar2;
        goto LAB_1801a8df7;
      }
      plVar2 = (longlong *)plVar2[1];
      lVar3 = plVar2[2];
    }
    plVar7 = (longlong *)*plVar2;
    if (plVar2 != (longlong *)0x0) {
      *param_2 = plVar2;
      *(undefined1 *)(param_2 + 1) = 0;
      return param_2;
    }
  }
LAB_1801a8df7:
  if (*(longlong *)(param_1 + 4) == 0x666666666666666) {
                    /* WARNING: Subroutine does not return */
    FUN_1805fa8b8("unordered_map/set too long");
  }
  local_40 = (undefined8 *)0x0;
  FUN_1801b7670(&local_48);
  puVar5 = local_40;
  local_40[2] = *(undefined8 *)param_3;
  local_40[3] = 0;
  local_40[4] = 0;
  if (param_4[1] != 0) {
    LOCK();
    piVar1 = (int *)(param_4[1] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_40[3] = *param_4;
  local_40[4] = param_4[1];
  if (*param_1 < (float)(*(longlong *)(param_1 + 4) + 1) / (float)*(ulonglong *)(param_1 + 0xe)) {
    FUN_1801b39e0(param_1);
    plVar2 = *(longlong **)
              (*(longlong *)(param_1 + 6) + 8 + (uVar6 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
    plVar7 = *(longlong **)(param_1 + 2);
    if (plVar2 != plVar7) {
      lVar3 = plVar2[2];
      plVar7 = plVar2;
      while (puVar5[2] != lVar3) {
        if (plVar7 == *(longlong **)
                       (*(longlong *)(param_1 + 6) + (uVar6 & *(ulonglong *)(param_1 + 0xc)) * 0x10)
           ) goto LAB_1801a8f02;
        plVar7 = (longlong *)plVar7[1];
        lVar3 = plVar7[2];
      }
      plVar7 = (longlong *)*plVar7;
    }
  }
LAB_1801a8f02:
  puVar4 = (undefined8 *)plVar7[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar5 = plVar7;
  puVar5[1] = puVar4;
  *puVar4 = puVar5;
  plVar7[1] = (longlong)puVar5;
  uVar6 = *(ulonglong *)(param_1 + 0xc) & uVar6;
  lVar3 = *(longlong *)(param_1 + 6);
  plVar2 = *(longlong **)(lVar3 + uVar6 * 0x10);
  if (plVar2 == *(longlong **)(param_1 + 2)) {
    *(undefined8 **)(lVar3 + uVar6 * 0x10) = puVar5;
  }
  else {
    if (plVar2 == plVar7) {
      *(undefined8 **)(lVar3 + uVar6 * 0x10) = puVar5;
      goto LAB_1801a8f52;
    }
    if (*(undefined8 **)(lVar3 + 8 + uVar6 * 0x10) != puVar4) goto LAB_1801a8f52;
  }
  *(undefined8 **)(lVar3 + 8 + uVar6 * 0x10) = puVar5;
LAB_1801a8f52:
  *param_2 = puVar5;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



