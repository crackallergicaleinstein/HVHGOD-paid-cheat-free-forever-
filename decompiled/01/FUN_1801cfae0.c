// FUN_1801cfae0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801cfae0 */

undefined1 (*) [16] FUN_1801cfae0(undefined1 (*param_1) [16],longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 (*pauVar4) [16];
  undefined8 *puVar5;
  longlong *plVar6;
  undefined **ppuVar7;
  longlong *plVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 local_50 [16];
  undefined1 auStack_40 [16];
  undefined1 local_30 [16];
  undefined1 local_20 [16];
  
  if (*(longlong *)(param_2 + 0x70) == 0) {
    *param_1 = (undefined1  [16])0x0;
    *(undefined8 *)param_1[1] = 0;
    *(undefined8 *)(param_1[1] + 8) = 0;
    FUN_18015ba30(0,"Source version unavailable",0x1a);
  }
  else {
    plVar8 = (longlong *)(param_2 + 0x60);
    plVar6 = plVar8;
    if (0xf < *(ulonglong *)(param_2 + 0x78)) {
      plVar6 = (longlong *)*plVar8;
    }
    if (*(longlong *)(param_2 + 0x70) == 0) {
      bVar10 = false;
    }
    else {
      bVar10 = (char)*plVar6 == 'v';
    }
    ppuVar7 = (undefined **)&DAT_1806bbee0;
    if (bVar10) {
      ppuVar7 = &PTR_180700558;
    }
    local_30 = (undefined1  [16])0x0;
    local_20 = (undefined1  [16])0x0;
    lVar9 = -1;
    do {
      lVar9 = lVar9 + 1;
    } while (*(char *)((longlong)ppuVar7 + lVar9) != '\0');
    FUN_18015ba30(local_30);
    pauVar4 = (undefined1 (*) [16])FUN_180141490(local_30,0,"Forked from ",0xc);
    local_50 = *pauVar4;
    auStack_40 = pauVar4[1];
    (*pauVar4)[0] = 0;
    *(undefined8 *)pauVar4[1] = 0;
    *(undefined8 *)(pauVar4[1] + 8) = 0xf;
    if (0xf < *(ulonglong *)(param_2 + 0x78)) {
      plVar8 = (longlong *)*plVar8;
    }
    puVar5 = (undefined8 *)FUN_18015b2a0(local_50,plVar8,*(undefined8 *)(param_2 + 0x70));
    *param_1 = (undefined1  [16])0x0;
    *(undefined8 *)param_1[1] = 0;
    *(undefined8 *)(param_1[1] + 8) = 0;
    uVar1 = puVar5[1];
    uVar2 = puVar5[2];
    uVar3 = puVar5[3];
    *(undefined8 *)*param_1 = *puVar5;
    *(undefined8 *)(*param_1 + 8) = uVar1;
    *(undefined8 *)param_1[1] = uVar2;
    *(undefined8 *)(param_1[1] + 8) = uVar3;
    *(undefined1 *)puVar5 = 0;
    puVar5[2] = 0;
    puVar5[3] = 0xf;
    FUN_18015c010(local_50);
    FUN_18015c010(local_30);
  }
  return param_1;
}



