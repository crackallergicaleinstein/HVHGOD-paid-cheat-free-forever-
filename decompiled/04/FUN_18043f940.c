// FUN_18043f940 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18043f940 */

undefined8 * FUN_18043f940(float *param_1,undefined8 *param_2,byte *param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  longlong *plVar7;
  float *local_38;
  undefined8 *local_30;
  
  uVar6 = (((((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_3[1]) *
            0x100000001b3 ^ (ulonglong)param_3[2]) * 0x100000001b3 ^ (ulonglong)param_3[3]) *
          0x100000001b3;
  plVar2 = *(longlong **)
            (*(longlong *)(param_1 + 6) + 8 + (uVar6 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
  local_38 = param_1 + 2;
  plVar7 = *(longlong **)local_38;
  if (plVar2 != *(longlong **)local_38) {
    iVar1 = (int)plVar2[2];
    while (*(int *)param_3 != iVar1) {
      if (plVar2 == *(longlong **)
                     (*(longlong *)(param_1 + 6) + (uVar6 & *(ulonglong *)(param_1 + 0xc)) * 0x10))
      {
        plVar7 = plVar2;
        goto LAB_18043f9ed;
      }
      plVar2 = (longlong *)plVar2[1];
      iVar1 = (int)plVar2[2];
    }
    plVar7 = (longlong *)*plVar2;
    if (plVar2 != (longlong *)0x0) {
      *param_2 = plVar2;
      *(undefined1 *)(param_2 + 1) = 0;
      return param_2;
    }
  }
LAB_18043f9ed:
  if (*(longlong *)(param_1 + 4) == 0xaaaaaaaaaaaaaaa) {
                    /* WARNING: Subroutine does not return */
    FUN_1805fa8b8("unordered_map/set too long");
  }
  local_30 = (undefined8 *)0x0;
  FUN_1801ba620(&local_38);
  puVar5 = local_30;
  *(undefined4 *)(local_30 + 2) = *(undefined4 *)param_3;
  *(undefined1 *)((longlong)local_30 + 0x14) = 0;
  if (*param_1 < (float)(*(longlong *)(param_1 + 4) + 1) / (float)*(ulonglong *)(param_1 + 0xe)) {
    FUN_1803d2720(param_1);
    plVar2 = *(longlong **)
              (*(longlong *)(param_1 + 6) + 8 + (*(ulonglong *)(param_1 + 0xc) & uVar6) * 0x10);
    plVar7 = *(longlong **)(param_1 + 2);
    if (plVar2 != plVar7) {
      iVar1 = (int)plVar2[2];
      plVar7 = plVar2;
      while (*(int *)(puVar5 + 2) != iVar1) {
        if (plVar7 == *(longlong **)
                       (*(longlong *)(param_1 + 6) + (*(ulonglong *)(param_1 + 0xc) & uVar6) * 0x10)
           ) goto LAB_18043fac6;
        plVar7 = (longlong *)plVar7[1];
        iVar1 = (int)plVar7[2];
      }
      plVar7 = (longlong *)*plVar7;
    }
  }
LAB_18043fac6:
  puVar3 = (undefined8 *)plVar7[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar5 = plVar7;
  puVar5[1] = puVar3;
  *puVar3 = puVar5;
  plVar7[1] = (longlong)puVar5;
  uVar6 = *(ulonglong *)(param_1 + 0xc) & uVar6;
  lVar4 = *(longlong *)(param_1 + 6);
  plVar2 = *(longlong **)(lVar4 + uVar6 * 0x10);
  if (plVar2 == *(longlong **)(param_1 + 2)) {
    *(undefined8 **)(lVar4 + uVar6 * 0x10) = puVar5;
  }
  else {
    if (plVar2 == plVar7) {
      *(undefined8 **)(lVar4 + uVar6 * 0x10) = puVar5;
      goto LAB_18043fb16;
    }
    if (*(undefined8 **)(lVar4 + 8 + uVar6 * 0x10) != puVar3) goto LAB_18043fb16;
  }
  *(undefined8 **)(lVar4 + 8 + uVar6 * 0x10) = puVar5;
LAB_18043fb16:
  *param_2 = puVar5;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



