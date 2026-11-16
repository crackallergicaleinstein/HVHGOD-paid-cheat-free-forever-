// FUN_1805b08d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805b08d0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1805b08d0(undefined8 *param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  char *_Str1;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  uint uVar11;
  undefined1 auStack_b8 [32];
  undefined4 local_98 [2];
  uint local_90;
  undefined4 local_88 [2];
  uint local_80;
  undefined4 local_78 [2];
  undefined4 local_70;
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_b8;
  puVar1 = (undefined1 *)param_1[2];
  uVar2 = *param_1;
  if (puVar1 == (undefined1 *)0x0) {
  }
  plVar10 = (longlong *)param_1[1];
  do {
    if ((int)plVar10[3] < 2) {
      FUN_1805b4f30(plVar10);
    }
    *(undefined4 *)(plVar10 + 3) = 0;
    _Str1 = (char *)FUN_1805b4eb0(plVar10);
    if (_Str1 != (char *)0x0) break;
    if (2 < (int)plVar10[3]) {
    }
  } while (1 < (int)plVar10[3]);
  if (_Str1 == (char *)0x0) {
  }
  if (~(ulonglong)_Str1 + *plVar10 != 0x10) {
  }
  iVar5 = strncmp(_Str1,"StartFontMetrics",0x10);
  if (iVar5 != 0) {
  }
  do {
    plVar10 = (longlong *)param_1[1];
    do {
      if ((int)plVar10[3] < 2) {
        FUN_1805b4f30(plVar10);
      }
      *(undefined4 *)(plVar10 + 3) = 0;
      uVar7 = FUN_1805b4eb0(plVar10);
      if (uVar7 != 0) break;
      if (2 < (int)plVar10[3]) goto LAB_1805b09e5;
    } while (1 < (int)plVar10[3]);
    if (uVar7 == 0) {
LAB_1805b09e5:
      lVar9 = 0;
    }
    else {
      lVar9 = ~uVar7 + *plVar10;
    }
    if (uVar7 == 0) goto LAB_1805b0a44;
    uVar6 = FUN_1805b5010(uVar7,lVar9);
    switch(uVar6) {
    case 0:
      local_78[0] = 2;
      iVar5 = FUN_1805b4ba0(param_1,local_78,1);
      if (iVar5 != 1) goto LAB_1805b0a44;
      *(undefined4 *)(puVar1 + 0x14) = local_70;
      break;
    case 0xe:
      local_78[0] = 2;
      iVar5 = FUN_1805b4ba0(param_1,local_78,1);
      if (iVar5 != 1) goto LAB_1805b0a44;
      *(undefined4 *)(puVar1 + 0x18) = local_70;
      break;
    case 0x14:
      goto switchD_1805b0a12_caseD_14;
    case 0x1a:
      local_78[0] = 2;
      local_68 = 2;
      local_58 = 2;
      local_48 = 2;
      iVar5 = FUN_1805b4ba0(param_1,local_78,4);
      if (iVar5 != 4) goto LAB_1805b0a44;
      *(undefined4 *)(puVar1 + 4) = local_70;
      *(undefined4 *)(puVar1 + 8) = local_60;
      *(undefined4 *)(puVar1 + 0xc) = local_50;
      *(undefined4 *)(puVar1 + 0x10) = local_40;
      break;
    case 0x1e:
      local_78[0] = 4;
      iVar5 = FUN_1805b4ba0(param_1,local_78,1);
      if (iVar5 != 1) goto LAB_1805b0a44;
      *puVar1 = (undefined1)local_70;
      break;
    case 0x28:
      local_98[0] = 3;
      iVar5 = FUN_1805b4ba0(param_1,local_98,1);
      if ((iVar5 != 1) || ((local_90 & 0xfffffffd) != 0)) goto LAB_1805b0a44;
      break;
    case 0x2d:
      local_88[0] = 3;
      iVar5 = FUN_1805b4ba0(param_1,local_88,1);
      if (iVar5 != 1) goto LAB_1805b0a44;
      uVar7 = (ulonglong)local_80;
      uVar11 = local_80;
      while (0 < (int)uVar11) {
        lVar9 = param_1[1];
        uVar7 = (ulonglong)((int)uVar7 - 1);
        if (*(int *)(lVar9 + 0x18) < 2) {
          FUN_1805b4f30(lVar9);
        }
        while( true ) {
          *(undefined4 *)(lVar9 + 0x18) = 0;
          lVar8 = FUN_1805b4eb0(lVar9);
          if (lVar8 != 0) break;
          if (*(int *)(lVar9 + 0x18) != 2) {
          }
        }
        uVar11 = (uint)uVar7;
      }
      do {
        plVar10 = (longlong *)param_1[1];
        do {
          if ((int)plVar10[3] < 2) {
            FUN_1805b4f30(plVar10);
          }
          *(undefined4 *)(plVar10 + 3) = 0;
          uVar7 = FUN_1805b4eb0(plVar10);
          if (uVar7 != 0) break;
          if (2 < (int)plVar10[3]) {
          }
        } while (1 < (int)plVar10[3]);
        if (uVar7 == 0) {
        }
        iVar5 = FUN_1805b5010(uVar7,~uVar7 + *plVar10);
      } while ((iVar5 != 0x11) && (iVar5 != 0x14));
      break;
    case 0x31:
      bVar3 = false;
      bVar4 = false;
      goto switchD_1805b0cbf_caseD_4b;
    }
  } while( true );
switchD_1805b0a12_caseD_14:
switchD_1805b0cbf_caseD_4b:
  plVar10 = (longlong *)param_1[1];
  while( true ) {
    if ((int)plVar10[3] < 2) {
      FUN_1805b4f30(plVar10);
    }
    *(undefined4 *)(plVar10 + 3) = 0;
    uVar7 = FUN_1805b4eb0(plVar10);
    if (uVar7 != 0) break;
    if ((2 < (int)plVar10[3]) || ((int)plVar10[3] < 2)) goto switchD_1805b0cbf_caseD_16;
  }
  uVar6 = FUN_1805b5010(uVar7,~uVar7 + *plVar10);
  switch(uVar6) {
  case 0x14:
  case 0x15:
    goto switchD_1805b0a12_caseD_14;
  case 0x32:
  case 0x33:
    if (!bVar4) {
      iVar5 = FUN_1805b46f0(param_1);
      if (iVar5 != 0) goto LAB_1805b0a44;
      bVar4 = true;
      goto switchD_1805b0cbf_caseD_4b;
    }
    break;
  case 0x35:
    if (!bVar3) {
      iVar5 = FUN_1805b4980(param_1);
      if (iVar5 != 0) goto LAB_1805b0a44;
      bVar3 = true;
      goto switchD_1805b0cbf_caseD_4b;
    }
    break;
  case 0x4b:
    goto switchD_1805b0cbf_caseD_4b;
  }
switchD_1805b0cbf_caseD_16:
LAB_1805b0a44:
  FUN_18057abd0(uVar2,*(undefined8 *)(puVar1 + 0x20));
  *(undefined8 *)(puVar1 + 0x20) = 0;
  *(undefined4 *)(puVar1 + 0x28) = 0;
  FUN_18057abd0(uVar2,*(undefined8 *)(puVar1 + 0x30));
  *(undefined8 *)(puVar1 + 0x30) = 0;
  *(undefined4 *)(puVar1 + 0x38) = 0;
  *puVar1 = 0;
}



