// FUN_1805b5d40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805b5d40 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1805b5d40(longlong param_1,int *param_2,int *param_3,undefined8 param_4,longlong param_5,
                  char param_6)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  int *piVar10;
  longlong lVar11;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_98;
  int local_90 [6];
  undefined4 local_78 [4];
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  ulonglong local_58;
  
  local_58 = DAT_1808d5f00 ^ (ulonglong)auStack_d8;
  piVar10 = local_90 + 2;
  iVar7 = 0;
  local_90[0] = *param_2;
  cVar1 = *(char *)(param_5 + 9);
  local_90[1] = *param_3;
  uVar9 = 0;
  lVar11 = 0;
  do {
    iVar3 = piVar10[-2];
    lVar5 = *(longlong *)(param_1 + 0x10);
    *piVar10 = iVar3;
    if (*(char *)(param_5 + lVar11) != '\0') {
      if (uVar9 < (uint)(*(longlong *)(param_1 + 0x18) - lVar5 >> 3)) {
        iVar4 = *(int *)(lVar5 + 4 + (ulonglong)uVar9 * 8);
        piVar2 = (int *)(lVar5 + (ulonglong)uVar9 * 8);
        if (iVar4 == 1) {
          iVar4 = *piVar2;
          iVar6 = iVar4 + (iVar4 >> 0x1f) + 0x2000 >> 0xe;
        }
        else {
          iVar6 = *piVar2;
          if (iVar4 == 2) {
            uVar9 = uVar9 + 1;
            *piVar10 = iVar3 + iVar6 * 0x10000;
            goto LAB_1805b5e49;
          }
        }
        uVar9 = uVar9 + 1;
        *piVar10 = iVar3 + iVar6;
      }
      else {
        piVar2 = *(int **)(param_1 + 8);
        if ((piVar2 != (int *)0x0) && (*piVar2 == 0)) {
          *piVar2 = 0x82;
        }
        lVar5 = *(longlong *)(param_1 + 0x10);
        *piVar10 = iVar3;
        uVar9 = uVar9 + 1;
      }
    }
LAB_1805b5e49:
    lVar11 = lVar11 + 1;
    piVar10 = piVar10 + 1;
  } while (lVar11 < (longlong)((ulonglong)(cVar1 != '\0') + 9));
  if (cVar1 == '\0') {
    local_64 = *param_3;
  }
  if (param_6 == '\0') {
    if (*(char *)(param_5 + 10) == '\0') {
      local_68 = *param_2;
    }
    else if (uVar9 < (uint)(*(longlong *)(param_1 + 0x18) - lVar5 >> 3)) {
      iVar3 = *(int *)(lVar5 + 4 + (ulonglong)uVar9 * 8);
      piVar10 = (int *)(lVar5 + (ulonglong)uVar9 * 8);
      if (iVar3 == 1) {
        iVar3 = *piVar10;
        iVar4 = iVar3 + (iVar3 >> 0x1f) + 0x2000 >> 0xe;
      }
      else {
        iVar4 = *piVar10;
        if (iVar3 == 2) {
          local_68 = local_68 + iVar4 * 0x10000;
          uVar9 = uVar9 + 1;
          goto LAB_1805b601a;
        }
      }
      local_68 = local_68 + iVar4;
      uVar9 = uVar9 + 1;
    }
    else {
      piVar10 = *(int **)(param_1 + 8);
      if ((piVar10 != (int *)0x0) && (*piVar10 == 0)) {
        *piVar10 = 0x82;
        lVar5 = *(longlong *)(param_1 + 0x10);
      }
      uVar9 = uVar9 + 1;
    }
LAB_1805b601a:
    local_60 = local_68;
    if (*(char *)(param_5 + 0xb) != '\0') {
      if (uVar9 < (uint)(*(longlong *)(param_1 + 0x18) - lVar5 >> 3)) {
        piVar10 = (int *)(lVar5 + (ulonglong)uVar9 * 8);
        iVar3 = *(int *)(lVar5 + 4 + (ulonglong)uVar9 * 8);
        if (iVar3 == 1) {
          iVar7 = *piVar10;
          iVar7 = iVar7 + (iVar7 >> 0x1f) + 0x2000 >> 0xe;
        }
        else {
          iVar7 = *piVar10;
          if (iVar3 == 2) {
            iVar7 = local_64 + iVar7 * 0x10000;
            goto LAB_1805b5f0a;
          }
        }
      }
      else {
        piVar10 = *(int **)(param_1 + 8);
        if ((piVar10 != (int *)0x0) && (*piVar10 == 0)) {
          *piVar10 = 0x82;
          iVar7 = local_64;
          goto LAB_1805b5f0a;
        }
      }
      iVar7 = local_64 + iVar7;
      goto LAB_1805b5f0a;
    }
  }
  else {
    iVar3 = local_68 - *param_2;
    if (iVar3 < 0) {
      iVar3 = *param_2 - local_68;
    }
    iVar4 = local_64 - *param_3;
    if (iVar4 < 0) {
      iVar4 = *param_3 - local_64;
    }
    if (uVar9 < (uint)(*(longlong *)(param_1 + 0x18) - lVar5 >> 3)) {
      piVar10 = (int *)(lVar5 + (ulonglong)uVar9 * 8);
      iVar6 = *(int *)(lVar5 + 4 + (ulonglong)uVar9 * 8);
      if (iVar6 == 1) {
        iVar7 = *piVar10;
        iVar7 = iVar7 + (iVar7 >> 0x1f) + 0x2000 >> 0xe;
      }
      else {
        iVar7 = *piVar10;
        if (iVar6 == 2) {
          iVar7 = iVar7 << 0x10;
        }
      }
    }
    else {
      piVar10 = *(int **)(param_1 + 8);
      if ((piVar10 != (int *)0x0) && (*piVar10 == 0)) {
        *piVar10 = 0x82;
      }
    }
    if (iVar3 <= iVar4) {
      local_60 = *param_2;
      iVar7 = local_64 + iVar7;
      goto LAB_1805b5f0a;
    }
    local_68 = local_68 + iVar7;
    local_60 = local_68;
  }
  iVar7 = *param_3;
  local_60 = local_68;
LAB_1805b5f0a:
  iVar3 = local_60;
  puVar8 = local_78;
  local_5c = iVar7;
  lVar11 = 2;
  local_98 = param_4;
  do {
    local_a8 = puVar8[1];
    local_b0 = *puVar8;
    local_b8 = puVar8[-1];
    FUN_1805b6d90(param_4,puVar8[-4],puVar8[-3],puVar8[-2]);
    puVar8 = puVar8 + 6;
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x10);
  *param_2 = iVar3;
  *param_3 = iVar7;
}



