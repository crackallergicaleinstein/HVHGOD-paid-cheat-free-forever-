// FUN_1802cc9c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802cc9c0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802cc9c0(undefined1 (*param_1) [16],undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  ULONGLONG UVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  char *pcVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined1 auStack_e8 [48];
  char *local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined1 local_98 [16];
  undefined1 auStack_88 [16];
  undefined1 *local_78;
  longlong local_70;
  ulonglong local_58;
  char *local_50;
  ulonglong local_40;
  
  local_40 = DAT_1808d5f00 ^ (ulonglong)auStack_e8;
  local_a8 = 0;
  local_b8 = "weapon";
  local_b0 = 6;
  uVar6 = FUN_1802c7fb0(&local_b8);
  local_58 = (ulonglong)uVar6 | 0xffffffff00000000;
  local_50 = "weapon";
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  lVar9 = DAT_1808fd488;
  lVar10 = DAT_1808da460;
  if ((DAT_1808fd488 == DAT_1808da460) && (lVar14 = DAT_180c6ebb8, DAT_180c6ebb8 != 0))
  goto LAB_1802ccb92;
  UVar8 = GetTickCount64();
  if ((lVar9 == lVar10) && (UVar8 < DAT_180c6ebc0)) {
    lVar14 = 0;
    goto LAB_1802ccb92;
  }
  local_b8 = &DAT_1808fd490;
  iVar7 = FUN_1805f68d0(&DAT_1808fd490);
  if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_1808fd4dc == 0x7fffffff) {
    DAT_1808fd4dc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  uVar13 = 1000;
  if (DAT_1808fd488 == lVar10) {
    if ((DAT_180c6ebb8 == 0) && (DAT_180c6ebc0 <= UVar8)) goto LAB_1802ccaf7;
  }
  else {
    DAT_1808fd480 = 1000;
LAB_1802ccaf7:
    lVar9 = -1;
    do {
      local_70 = lVar9 + 1;
      pcVar12 = "lient.dll:488D05*????????4D8BF8488901+50~" + lVar9;
      lVar9 = local_70;
    } while (*pcVar12 != '\0');
    local_78 = &DAT_1808266d8;
    local_98._8_8_ = 0x1f;
    local_98._0_8_ = "patterns::game_event_get_string";
    DAT_180c6ebb8 = FUN_1800e5d20(local_98,&local_78);
    DAT_1808fd488 = lVar10;
    DAT_180c6ebc0 = 0xffffffffffffffff;
    if (DAT_180c6ebb8 == 0) {
      DAT_180c6ebc0 = DAT_1808fd480 + UVar8;
      uVar13 = 60000;
      if (DAT_1808fd480 < 60000) {
        uVar13 = DAT_1808fd480 * 2;
      }
    }
    DAT_1808fd480 = uVar13;
  }
  lVar14 = DAT_180c6ebb8;
  FUN_1805f68fc(&DAT_1808fd490);
LAB_1802ccb92:
  cVar4 = FUN_1804513c0(lVar14,1,2);
  cVar5 = '\0';
  if (cVar4 != '\0') {
    lVar10 = FUN_18017ea70();
    *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
    FUN_1802e72e0(&local_b8,lVar14,param_2,&local_58);
    lVar10 = FUN_18017ea70();
    if (*(int *)(lVar10 + 4) != 0) {
      *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
    }
    cVar5 = (char)local_b0;
  }
  pcVar12 = local_b8;
  if (cVar5 == '\0') {
    pcVar12 = (char *)0x0;
  }
  if (pcVar12 == (char *)0x0) {
    local_98 = (undefined1  [16])0x0;
    auStack_88 = (undefined1  [16])0x0;
    FUN_18015ba30(local_98,"unknown",7);
    puVar11 = (undefined8 *)local_98;
  }
  else {
    puVar11 = (undefined8 *)FUN_180454280(&local_78,pcVar12,0x50);
  }
  *param_1 = (undefined1  [16])0x0;
  *(undefined8 *)param_1[1] = 0;
  *(undefined8 *)(param_1[1] + 8) = 0;
  uVar1 = puVar11[1];
  uVar2 = puVar11[2];
  uVar3 = puVar11[3];
  *(undefined8 *)*param_1 = *puVar11;
  *(undefined8 *)(*param_1 + 8) = uVar1;
  *(undefined8 *)param_1[1] = uVar2;
  *(undefined8 *)(param_1[1] + 8) = uVar3;
  *(undefined1 *)puVar11 = 0;
  puVar11[2] = 0;
  puVar11[3] = 0xf;
  if (pcVar12 == (char *)0x0) {
    FUN_18015c010(local_98);
  }
  else {
    FUN_18015c010(&local_78);
  }
}



