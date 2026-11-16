// FUN_1801eb960 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801eb960 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801eb960(undefined8 *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  char *pcVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined8 uVar13;
  bool bVar14;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined *local_58;
  longlong local_50;
  undefined8 *local_48;
  undefined1 local_38 [16];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_1808d5f00 ^ (ulonglong)auStack_88;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 (*) [16])(param_1 + 6) = (undefined1  [16])0x0;
  param_1[8] = 0;
  param_1[9] = 0xf;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined2 *)(param_1 + 10) = 0;
  local_68 = 1;
  local_38 = (undefined1  [16])0x0;
  local_28 = 0;
  local_58 = &DAT_1807cbfb0;
  local_50 = 4;
  local_48 = param_1;
  cVar5 = FUN_1801857a0(param_2,&local_58,local_38,0);
  if (cVar5 == '\0') {
    uVar13 = 0x12;
    pcVar10 = "Invalid model DATA";
  }
  else {
    local_58 = (undefined *)local_38._0_8_;
    local_50 = local_38._8_8_ - local_38._0_8_;
    cVar5 = FUN_1801eb1d0(&local_58,param_1 + 6,param_1);
    *(char *)((longlong)param_1 + 0x51) = cVar5;
    if (cVar5 == '\0') goto LAB_1801ebbd4;
    cVar5 = FUN_180185c60(param_2,param_1 + 3);
    if (cVar5 == '\0') {
      uVar13 = 0x18;
      pcVar10 = "Invalid model references";
    }
    else {
      bVar3 = false;
      bVar4 = false;
      for (puVar7 = (undefined8 *)param_1[3]; puVar7 != (undefined8 *)param_1[4];
          puVar7 = puVar7 + 4) {
        puVar8 = puVar7;
        if (0xf < (ulonglong)puVar7[3]) {
          puVar8 = (undefined8 *)*puVar7;
        }
        uVar1 = puVar7[2];
        if (uVar1 < 9) {
          bVar14 = false;
        }
        else {
          lVar9 = *(longlong *)((longlong)puVar8 + (uVar1 - 9)) + -0x706172676d6e762e;
          if (lVar9 == 0) {
            lVar9 = (ulonglong)*(byte *)((longlong)puVar8 + (uVar1 - 1)) - 0x68;
          }
          bVar14 = lVar9 == 0;
        }
        bVar3 = (bool)(bVar3 | bVar14);
        puVar8 = puVar7;
        if (0xf < (ulonglong)puVar7[3]) {
          puVar8 = (undefined8 *)*puVar7;
        }
        if (uVar1 < 8) {
          bVar14 = false;
        }
        else {
          bVar14 = *(longlong *)((longlong)puVar8 + (uVar1 - 8)) == 0x6c656b736d6e762e;
        }
        bVar4 = (bool)(bVar4 | bVar14);
      }
      plVar2 = (longlong *)param_1[1];
      for (plVar12 = (longlong *)*param_1; plVar12 != plVar2; plVar12 = plVar12 + 4) {
        plVar11 = plVar12;
        if (0xf < (ulonglong)plVar12[3]) {
          plVar11 = (longlong *)*plVar12;
        }
        if (plVar12[2] == 0x10) {
          lVar9 = 0x72476d696e615f6d - *plVar11;
          if (lVar9 == 0) {
            lVar9 = 0x7366655232687061 - plVar11[1];
          }
          if (lVar9 == 0) break;
        }
      }
      if ((plVar12 != plVar2) && (plVar12 = (longlong *)*param_1, plVar12 != plVar2)) {
        do {
          plVar11 = plVar12;
          if (0xf < (ulonglong)plVar12[3]) {
            plVar11 = (longlong *)*plVar12;
          }
        } while (((plVar12[2] != 0x13) ||
                 (iVar6 = memcmp("m_vecNmSkeletonRefs",plVar11,0x13), iVar6 != 0)) &&
                (plVar12 = plVar12 + 4, plVar12 != plVar2));
        if (((plVar12 != plVar2) && (bVar3)) && (bVar4)) {
          *(undefined1 *)(param_1 + 10) = 1;
          goto LAB_1801ebbd4;
        }
      }
      *(undefined1 *)(param_1 + 10) = 0;
      uVar13 = 0x22;
      pcVar10 = "AG1 or missing AG2 player bindings";
    }
  }
  FUN_180113930(param_1 + 6,pcVar10,uVar13);
LAB_1801ebbd4:
  FUN_180113710(local_38);
}



