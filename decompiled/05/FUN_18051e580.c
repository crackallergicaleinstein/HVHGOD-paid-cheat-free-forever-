// FUN_18051e580 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18051e580 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18051e580(undefined8 param_1,undefined1 (*param_2) [16],longlong param_3)

{
  byte *pbVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  byte *pbVar5;
  longlong *plVar6;
  char *pcVar7;
  byte ****ppppbVar8;
  byte ****ppppbVar9;
  longlong lVar10;
  char **ppcVar11;
  undefined1 auStack_118 [32];
  longlong local_f8;
  undefined *local_f0;
  undefined8 local_e8;
  byte ****local_d8;
  undefined8 uStack_d0;
  ulonglong uStack_c8;
  ulonglong uStack_c0;
  undefined1 (*local_b0) [16];
  undefined1 local_a8 [32];
  byte ****local_88;
  undefined8 uStack_80;
  ulonglong uStack_78;
  ulonglong uStack_70;
  char *local_68 [6];
  char *local_38 [2];
  
  local_38[0] = (char *)(DAT_1808d5f00 ^ (ulonglong)auStack_118);
  plVar6 = (longlong *)(param_3 + 0x18);
  local_f8 = *(longlong *)(param_3 + 0x28);
  local_b0 = param_2;
  if (local_f8 == 0x7fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_18015bb70();
  }
  if (0xf < *(ulonglong *)(param_3 + 0x30)) {
    plVar6 = (longlong *)*plVar6;
  }
  local_e8 = 1;
  local_f0 = &DAT_1806bcfc0;
  FUN_18015a9c0(local_a8,param_2,param_3,plVar6);
  plVar6 = (longlong *)(param_3 + 0x38);
  if (0xf < *(ulonglong *)(param_3 + 0x50)) {
    plVar6 = (longlong *)*plVar6;
  }
  puVar3 = (undefined8 *)FUN_18015b2a0(local_a8,plVar6,*(undefined8 *)(param_3 + 0x48));
  local_d8 = (byte ****)*puVar3;
  uStack_c8 = puVar3[2];
  uStack_c0 = puVar3[3];
  uStack_d0 = puVar3[1];
  *(undefined1 *)puVar3 = 0;
  puVar3[2] = 0;
  puVar3[3] = 0xf;
  ppppbVar8 = (byte ****)&local_d8;
  if (0xf < uStack_c0) {
    ppppbVar8 = local_d8;
  }
  ppppbVar9 = (byte ****)((longlong)ppppbVar8 + uStack_c8);
  local_88 = local_d8;
  uStack_78 = uStack_c8;
  uStack_70 = uStack_c0;
  for (; ppppbVar8 != ppppbVar9; ppppbVar8 = (byte ****)((longlong)ppppbVar8 + 1)) {
    local_d8 = local_88;
    uStack_c8 = uStack_78;
    uStack_c0 = uStack_70;
    iVar2 = tolower((uint)*(byte *)ppppbVar8);
    *(byte *)ppppbVar8 = (byte)iVar2;
    if ((byte)iVar2 == 0x5f) {
      *(byte *)ppppbVar8 = 0x20;
    }
    local_88 = local_d8;
    uStack_78 = uStack_c8;
    uStack_70 = uStack_c0;
  }
  local_d8 = (byte ****)((ulonglong)local_88 & 0xffffffffffffff00);
  uStack_c8 = 0;
  uStack_c0 = 0xf;
  uStack_80 = uStack_d0;
  FUN_18015c010(&local_d8);
  FUN_18015c010(local_a8);
  local_68[0] = "edgebug";
  local_68[1] = "pixel surf";
  local_68[2] = "texture bug";
  local_68[3] = "jumpbug";
  local_68[4] = "airstrafe";
  local_68[5] = "slowwalk";
  ppcVar11 = local_68;
  lVar10 = -1;
LAB_18051e700:
  pcVar7 = *ppcVar11;
  local_f8 = -1;
  do {
    local_f8 = local_f8 + 1;
  } while (pcVar7[local_f8] != '\0');
  ppppbVar8 = (byte ****)&local_88;
  if (0xf < uStack_70) {
    ppppbVar8 = local_88;
  }
  lVar4 = FUN_180159df0(ppppbVar8,uStack_78,0,pcVar7);
  if (lVar4 == -1) goto code_r0x00018051e73a;
  *param_2 = (undefined1  [16])0x0;
  *(undefined8 *)param_2[1] = 0;
  *(undefined8 *)(param_2[1] + 8) = 0;
  do {
    lVar10 = lVar10 + 1;
  } while (pcVar7[lVar10] != '\0');
  goto LAB_18051e894;
code_r0x00018051e73a:
  ppcVar11 = ppcVar11 + 1;
  if (ppcVar11 == local_68 + 6) goto code_r0x00018051e747;
  goto LAB_18051e700;
code_r0x00018051e747:
  ppppbVar8 = (byte ****)&local_88;
  if (0xf < uStack_70) {
    ppppbVar8 = local_88;
  }
  if (((uStack_78 < 0x10) ||
      (pbVar1 = (byte *)((longlong)ppppbVar8 + uStack_78),
      pbVar5 = (byte *)thunk_FUN_1805f9970(ppppbVar8,pbVar1,"pursue direction",0x10),
      pbVar5 == pbVar1)) || ((longlong)pbVar5 - (longlong)ppppbVar8 == -1)) {
    ppppbVar8 = (byte ****)&local_88;
    if (0xf < uStack_70) {
      ppppbVar8 = local_88;
    }
    if (((uStack_78 < 0x12) ||
        (pbVar1 = (byte *)((longlong)ppppbVar8 + uStack_78),
        pbVar5 = (byte *)thunk_FUN_1805f9970(ppppbVar8,pbVar1,"landing prediction",0x12),
        pbVar5 == pbVar1)) || ((longlong)pbVar5 - (longlong)ppppbVar8 == -1)) {
      ppppbVar8 = (byte ****)&local_88;
      if (0xf < uStack_70) {
        ppppbVar8 = local_88;
      }
      if (((uStack_78 < 4) ||
          (pbVar1 = (byte *)((longlong)ppppbVar8 + uStack_78),
          pbVar5 = (byte *)thunk_FUN_1805f9970(ppppbVar8,pbVar1,&DAT_1806bc7c4,4), pbVar5 == pbVar1)
          ) || ((longlong)pbVar5 - (longlong)ppppbVar8 == -1)) {
        *param_2 = (undefined1  [16])0x0;
        *(undefined8 *)param_2[1] = 0;
        *(undefined8 *)(param_2[1] + 8) = 0xf;
        (*param_2)[0] = 0;
        goto LAB_18051e89d;
      }
    }
    *param_2 = (undefined1  [16])0x0;
    *(undefined8 *)param_2[1] = 0;
    *(undefined8 *)(param_2[1] + 8) = 0;
    lVar10 = 4;
    pcVar7 = "bhop";
  }
  else {
    *param_2 = (undefined1  [16])0x0;
    *(undefined8 *)param_2[1] = 0;
    *(undefined8 *)(param_2[1] + 8) = 0;
    lVar10 = 10;
    pcVar7 = "pixel surf";
  }
LAB_18051e894:
  FUN_18015ba30(param_2,pcVar7,lVar10);
LAB_18051e89d:
  FUN_18015c010(&local_88);
}



