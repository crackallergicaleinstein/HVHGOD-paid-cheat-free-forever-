// FUN_1800f9910 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800f9910 */

undefined8 * FUN_1800f9910(float *param_1,undefined8 *param_2,byte *param_3)

{
  short sVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  float *local_38;
  undefined8 *local_30;
  
  uVar8 = (((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_3[1]) *
          0x100000001b3;
  plVar2 = *(longlong **)
            (*(longlong *)(param_1 + 6) + 8 + (uVar8 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
  local_38 = param_1 + 2;
  plVar7 = *(longlong **)local_38;
  if (plVar2 != *(longlong **)local_38) {
    sVar1 = (short)plVar2[2];
    while (*(short *)param_3 != sVar1) {
      if (plVar2 == *(longlong **)
                     (*(longlong *)(param_1 + 6) + (uVar8 & *(ulonglong *)(param_1 + 0xc)) * 0x10))
      {
        plVar7 = plVar2;
        goto LAB_1800f99a7;
      }
      plVar2 = (longlong *)plVar2[1];
      sVar1 = (short)plVar2[2];
    }
    plVar7 = (longlong *)*plVar2;
    if (plVar2 != (longlong *)0x0) {
      *param_2 = plVar2;
      *(undefined1 *)(param_2 + 1) = 0;
      return param_2;
    }
  }
LAB_1800f99a7:
  if (*(longlong *)(param_1 + 4) == 0xf83e0f83e0f83e) {
                    /* WARNING: Subroutine does not return */
    FUN_1805fa8b8("unordered_map/set too long");
  }
  local_30 = (undefined8 *)0x0;
  FUN_180150a90(&local_38);
  puVar5 = local_30;
  *(undefined2 *)(local_30 + 2) = *(undefined2 *)param_3;
  FUN_18063ab10(local_30 + 3,0,0xf0);
  FUN_1801576b0(puVar5 + 3);
  if (*param_1 < (float)(*(longlong *)(param_1 + 4) + 1) / (float)*(ulonglong *)(param_1 + 0xe)) {
    uVar6 = FUN_180151090(param_1);
    FUN_180150ee0(param_1,uVar6);
    plVar2 = *(longlong **)
              (*(longlong *)(param_1 + 6) + 8 + (*(ulonglong *)(param_1 + 0xc) & uVar8) * 0x10);
    plVar7 = *(longlong **)(param_1 + 2);
    if (plVar2 != plVar7) {
      sVar1 = (short)plVar2[2];
      plVar7 = plVar2;
      while (*(short *)(puVar5 + 2) != sVar1) {
        if (plVar7 == *(longlong **)
                       (*(longlong *)(param_1 + 6) + (*(ulonglong *)(param_1 + 0xc) & uVar8) * 0x10)
           ) goto LAB_1800f9aa9;
        plVar7 = (longlong *)plVar7[1];
        sVar1 = (short)plVar7[2];
      }
      plVar7 = (longlong *)*plVar7;
    }
  }
LAB_1800f9aa9:
  puVar3 = (undefined8 *)plVar7[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar5 = plVar7;
  puVar5[1] = puVar3;
  *puVar3 = puVar5;
  plVar7[1] = (longlong)puVar5;
  uVar8 = *(ulonglong *)(param_1 + 0xc) & uVar8;
  lVar4 = *(longlong *)(param_1 + 6);
  plVar2 = *(longlong **)(lVar4 + uVar8 * 0x10);
  if (plVar2 == *(longlong **)(param_1 + 2)) {
    *(undefined8 **)(lVar4 + uVar8 * 0x10) = puVar5;
  }
  else {
    if (plVar2 == plVar7) {
      *(undefined8 **)(lVar4 + uVar8 * 0x10) = puVar5;
      goto LAB_1800f9af9;
    }
    if (*(undefined8 **)(lVar4 + 8 + uVar8 * 0x10) != puVar3) goto LAB_1800f9af9;
  }
  *(undefined8 **)(lVar4 + 8 + uVar8 * 0x10) = puVar5;
LAB_1800f9af9:
  *param_2 = puVar5;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



