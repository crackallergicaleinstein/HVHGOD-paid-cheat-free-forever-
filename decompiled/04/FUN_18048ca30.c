// FUN_18048ca30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18048ca30 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18048ca30(longlong *param_1,undefined8 param_2,undefined4 *param_3,char param_4)

{
  float fVar1;
  undefined8 *puVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  undefined1 auStack_d8 [32];
  float *local_b8;
  undefined1 *local_b0;
  undefined1 local_a8;
  undefined4 local_98;
  float local_84;
  float local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  float fStack_68;
  float fStack_64;
  undefined8 uStack_60;
  undefined8 local_58;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  char local_40 [16];
  ulonglong local_30;
  
  local_30 = DAT_1808d5f00 ^ (ulonglong)auStack_d8;
  puVar2 = (undefined8 *)*param_1;
  local_78 = *puVar2;
  uStack_70 = puVar2[1];
  uStack_60 = puVar2[3];
  if (param_4 == '\0') {
    fVar1 = DAT_180b0a41c * 49.0 + *(float *)param_1[2];
  }
  else {
    fVar1 = *(float *)param_1[1];
  }
  _fStack_68 = CONCAT44(fVar1,DAT_180b0a41c * 27.0 + *(float *)(puVar2 + 3));
  local_50 = 0.0;
  local_b8 = &local_50;
  local_4c = local_50;
  local_48 = local_50;
  local_44 = local_50;
  FUN_18048b8e0(&local_78,param_2,1,&local_48);
  FUN_18015abc0(local_40,0x10,&DAT_1807c6e5c,*param_3);
  local_98 = 0x1041;
  local_84 = local_50 - DAT_180b0a41c * 5.0;
  local_a8 = 0;
  local_b0 = &DAT_180700844;
  local_80 = local_4c;
  local_b8 = &local_84;
  local_58 = (char *)CONCAT44(local_44,DAT_180b0a41c * 5.0 + local_48);
  cVar3 = FUN_1804ad540(param_2,local_40,0x10,&local_58);
  if (cVar3 == '\0') {
    if ((*(uint *)(DAT_180bb8ae8 + 0x1ec8) & 0x20) == 0) {
      if (((*(int *)(DAT_180bb8ae8 + 0x1584) != *(int *)(DAT_180bb8ae8 + 0x1ec0)) ||
          (*(int *)(DAT_180bb8ae8 + 0x1ec0) == 0)) ||
         (*(int *)(DAT_180bb8ae8 + 0x1588) < *(int *)(DAT_180bb8ae8 + 4))) goto LAB_18048cc23;
    }
    else if ((*(uint *)(DAT_180bb8ae8 + 0x1ec8) >> 6 & 1) == 0) goto LAB_18048cc23;
    if (*(char *)(DAT_180bb8ae8 + 0x158c) == '\0') goto LAB_18048cc23;
  }
  local_58 = (char *)0x0;
  iVar4 = FUN_18060f9f0(local_40,&local_58,10);
  if ((local_58 != local_40) && (*local_58 == '\0')) {
    iVar6 = *(int *)param_1[4];
    if ((*(int *)param_1[4] <= iVar4) && (iVar6 = iVar4, *(int *)param_1[5] < iVar4)) {
      iVar6 = *(int *)param_1[5];
    }
    FUN_18048c9d0(param_1[3],param_4,iVar6);
  }
  if (cVar3 != '\0') {
    FUN_1804b7870(0,0);
  }
LAB_18048cc23:
  cVar3 = FUN_1804b7b20(0);
  if (cVar3 != '\0') {
    pcVar5 = "Minimum. Ctrl+click to type; Enter to apply. Crossing swaps endpoints.";
    if (param_4 != '\0') {
      pcVar5 = "Maximum. Ctrl+click to type; Enter to apply. Crossing swaps endpoints.";
    }
    FUN_1804c75b0(pcVar5);
  }
}



