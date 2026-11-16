// FUN_180231ce0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180231ce0 */

undefined8 * FUN_180231ce0(float *param_1,undefined8 *param_2,byte *param_3)

{
  short sVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  float *local_38;
  undefined8 *local_30;
  
  uVar7 = (((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_3[1]) *
          0x100000001b3;
  plVar2 = *(longlong **)
            (*(longlong *)(param_1 + 6) + 8 + (uVar7 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
  local_38 = param_1 + 2;
  plVar8 = *(longlong **)local_38;
  if (plVar2 != *(longlong **)local_38) {
    sVar1 = (short)plVar2[2];
    while (*(short *)param_3 != sVar1) {
      if (plVar2 == *(longlong **)
                     (*(longlong *)(param_1 + 6) + (uVar7 & *(ulonglong *)(param_1 + 0xc)) * 0x10))
      {
        plVar8 = plVar2;
        goto LAB_180231d78;
      }
      plVar2 = (longlong *)plVar2[1];
      sVar1 = (short)plVar2[2];
    }
    plVar8 = (longlong *)*plVar2;
    if (plVar2 != (longlong *)0x0) {
      *param_2 = plVar2;
      *(undefined1 *)(param_2 + 1) = 0;
      return param_2;
    }
  }
LAB_180231d78:
  if (*(longlong *)(param_1 + 4) == 0xf83e0f83e0f83e) {
                    /* WARNING: Subroutine does not return */
    FUN_1805fa8b8("unordered_map/set too long");
  }
  local_30 = (undefined8 *)0x0;
  FUN_180150a90(&local_38);
  puVar5 = local_30;
  *(undefined2 *)(local_30 + 2) = *(undefined2 *)param_3;
  FUN_18019f170(local_30 + 3,param_3 + 8);
  if (*param_1 < (float)(*(longlong *)(param_1 + 4) + 1) / (float)*(ulonglong *)(param_1 + 0xe)) {
    uVar6 = FUN_180151090(param_1);
    FUN_180150ee0(param_1,uVar6);
    plVar2 = *(longlong **)
              (*(longlong *)(param_1 + 6) + 8 + (*(ulonglong *)(param_1 + 0xc) & uVar7) * 0x10);
    plVar8 = *(longlong **)(param_1 + 2);
    if (plVar2 != plVar8) {
      sVar1 = (short)plVar2[2];
      plVar8 = plVar2;
      while (*(short *)(puVar5 + 2) != sVar1) {
        if (plVar8 == *(longlong **)
                       (*(longlong *)(param_1 + 6) + (*(ulonglong *)(param_1 + 0xc) & uVar7) * 0x10)
           ) goto LAB_180231e72;
        plVar8 = (longlong *)plVar8[1];
        sVar1 = (short)plVar8[2];
      }
      plVar8 = (longlong *)*plVar8;
    }
  }
LAB_180231e72:
  puVar3 = (undefined8 *)plVar8[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar5 = plVar8;
  puVar5[1] = puVar3;
  *puVar3 = puVar5;
  plVar8[1] = (longlong)puVar5;
  uVar7 = *(ulonglong *)(param_1 + 0xc) & uVar7;
  lVar4 = *(longlong *)(param_1 + 6);
  plVar2 = *(longlong **)(lVar4 + uVar7 * 0x10);
  if (plVar2 == *(longlong **)(param_1 + 2)) {
    *(undefined8 **)(lVar4 + uVar7 * 0x10) = puVar5;
  }
  else {
    if (plVar2 == plVar8) {
      *(undefined8 **)(lVar4 + uVar7 * 0x10) = puVar5;
      goto LAB_180231ec2;
    }
    if (*(undefined8 **)(lVar4 + 8 + uVar7 * 0x10) != puVar3) goto LAB_180231ec2;
  }
  *(undefined8 **)(lVar4 + 8 + uVar7 * 0x10) = puVar5;
LAB_180231ec2:
  *param_2 = puVar5;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



