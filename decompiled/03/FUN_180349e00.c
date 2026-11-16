// FUN_180349e00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180349e00 */

void FUN_180349e00(undefined8 *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  uint *puVar5;
  int iVar6;
  undefined1 (*pauVar7) [16];
  uint *puVar8;
  undefined8 uVar9;
  int iVar10;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar11;
  undefined1 local_18 [16];
  
  uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  piVar4 = (int *)*param_1;
  if (*(char *)((longlong)piVar4 + 0xdd) == '\0') {
    if ((((char)piVar4[0x37] == '\0') || (piVar4[0x36] == 0)) || (piVar4[0x36] < param_2)) {
      if ((piVar4[0x36] == 0) || (piVar4[0x36] < param_2)) {
        iVar10 = piVar4[1];
      }
      else {
        iVar10 = piVar4[0x35];
      }
      pauVar7 = (undefined1 (*) [16])FUN_18033d670(local_18,iVar10,*(undefined4 *)param_1[4]);
      auVar1 = *pauVar7;
      puVar5 = *(uint **)param_1[5];
      *puVar5 = *puVar5 | 4;
      puVar8 = (uint *)0x0;
      if (*(longlong *)(puVar5 + 0xc) != 0) {
        puVar8 = (uint *)(*(longlong *)(puVar5 + 0xc) + 0x10);
      }
      if (puVar8 != (uint *)0x0) {
        *puVar8 = *puVar8 | 2;
        uVar2 = vextractps_avx(auVar1,2);
        puVar8[3] = uVar2;
      }
      if ((*(int *)*param_1 == 1) && (*(int *)param_1[3] <= param_2)) {
        uVar9 = 1;
      }
      else {
        uVar9 = 0;
      }
      uVar3 = vextractps_avx(auVar1,1);
      FUN_18033cc00(*(undefined8 *)param_1[1],*(undefined8 *)param_1[2],uVar9,auVar1._0_8_,
                    CONCAT44(uVar11,uVar3));
    }
    else {
      if ((*piVar4 == 1) && (*(int *)param_1[3] <= param_2)) {
        uVar9 = 1;
      }
      else {
        uVar9 = 0;
      }
      FUN_18033d070(*(undefined8 *)param_1[1],*(undefined8 *)param_1[2],uVar9,piVar4[0x35],param_3);
    }
  }
  else {
    iVar6 = (piVar4[7] - param_2) + 1;
    iVar10 = 1;
    if (1 < iVar6) {
      iVar10 = iVar6;
    }
    if ((*piVar4 == 1) && (*(int *)param_1[3] <= param_2)) {
      uVar9 = 1;
    }
    else {
      uVar9 = 0;
    }
    FUN_18033d2f0(*(undefined8 *)param_1[1],*(undefined8 *)param_1[2],uVar9,piVar4 + 0x38,
                  CONCAT44(uVar11,iVar10),param_4,param_3);
  }
  return;
}



