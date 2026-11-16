// FUN_180298820 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180298820 */

undefined8 * FUN_180298820(float *param_1,undefined8 *param_2,byte *param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  ulonglong uVar6;
  float *pfVar7;
  
  uVar6 = (((((((((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_3[1])
                * 0x100000001b3 ^ (ulonglong)param_3[2]) * 0x100000001b3 ^ (ulonglong)param_3[3]) *
              0x100000001b3 ^ (ulonglong)param_3[4]) * 0x100000001b3 ^ (ulonglong)param_3[5]) *
            0x100000001b3 ^ (ulonglong)param_3[6]) * 0x100000001b3 ^ (ulonglong)param_3[7]) *
          0x100000001b3;
  plVar1 = *(longlong **)
            (*(longlong *)(param_1 + 6) + 8 + (uVar6 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
  pfVar7 = param_1 + 2;
  plVar5 = *(longlong **)pfVar7;
  if (plVar1 != *(longlong **)pfVar7) {
    lVar2 = plVar1[2];
    while (*(longlong *)param_3 != lVar2) {
      if (plVar1 == *(longlong **)
                     (*(longlong *)(param_1 + 6) + (uVar6 & *(ulonglong *)(param_1 + 0xc)) * 0x10))
      {
        plVar5 = plVar1;
        goto LAB_1802988ff;
      }
      plVar1 = (longlong *)plVar1[1];
      lVar2 = plVar1[2];
    }
    plVar5 = (longlong *)*plVar1;
    if (plVar1 != (longlong *)0x0) {
      *param_2 = plVar1;
      *(undefined1 *)(param_2 + 1) = 0;
      return param_2;
    }
  }
LAB_1802988ff:
  if (*(longlong *)(param_1 + 4) == 0xf6603d980f660) {
                    /* WARNING: Subroutine does not return */
    FUN_1805fa8b8("unordered_map/set too long");
  }
  puVar4 = (undefined8 *)FUN_1801bc880();
  puVar4[2] = *(undefined8 *)param_3;
  FUN_18063ab10(puVar4 + 3,0,0x1088,param_4,pfVar7,puVar4);
  FUN_180292930(puVar4 + 3);
  if (*param_1 < (float)(*(longlong *)(param_1 + 4) + 1) / (float)*(ulonglong *)(param_1 + 0xe)) {
    FUN_1801b8c20(param_1);
    plVar1 = *(longlong **)
              (*(longlong *)(param_1 + 6) + 8 + (*(ulonglong *)(param_1 + 0xc) & uVar6) * 0x10);
    plVar5 = *(longlong **)(param_1 + 2);
    if (plVar1 != plVar5) {
      lVar2 = plVar1[2];
      plVar5 = plVar1;
      while (puVar4[2] != lVar2) {
        if (plVar5 == *(longlong **)
                       (*(longlong *)(param_1 + 6) + (*(ulonglong *)(param_1 + 0xc) & uVar6) * 0x10)
           ) goto LAB_1802989f2;
        plVar5 = (longlong *)plVar5[1];
        lVar2 = plVar5[2];
      }
      plVar5 = (longlong *)*plVar5;
    }
  }
LAB_1802989f2:
  puVar3 = (undefined8 *)plVar5[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar4 = plVar5;
  puVar4[1] = puVar3;
  *puVar3 = puVar4;
  plVar5[1] = (longlong)puVar4;
  uVar6 = *(ulonglong *)(param_1 + 0xc) & uVar6;
  lVar2 = *(longlong *)(param_1 + 6);
  plVar1 = *(longlong **)(lVar2 + uVar6 * 0x10);
  if (plVar1 == *(longlong **)(param_1 + 2)) {
    *(undefined8 **)(lVar2 + uVar6 * 0x10) = puVar4;
  }
  else {
    if (plVar1 == plVar5) {
      *(undefined8 **)(lVar2 + uVar6 * 0x10) = puVar4;
      goto LAB_180298a42;
    }
    if (*(undefined8 **)(lVar2 + 8 + uVar6 * 0x10) != puVar3) goto LAB_180298a42;
  }
  *(undefined8 **)(lVar2 + 8 + uVar6 * 0x10) = puVar4;
LAB_180298a42:
  *param_2 = puVar4;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



