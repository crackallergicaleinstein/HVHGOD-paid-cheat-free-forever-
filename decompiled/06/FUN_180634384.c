// FUN_180634384 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180634384 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_180634384(longlong *param_1,undefined8 param_2,undefined4 param_3,byte *param_4,int param_5
                  ,byte *param_6,int param_7,UINT param_8)

{
  int *piVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte *pbVar4;
  undefined8 uVar5;
  BOOL BVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  size_t sVar10;
  BYTE *pBVar11;
  ulonglong uVar12;
  undefined4 *puVar13;
  ulonglong uVar14;
  undefined4 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined4 *puVar19;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_88 [2];
  byte *local_80;
  undefined8 local_78;
  _cpinfo local_70;
  ulonglong local_58;
  
  puVar18 = auStack_d8;
  local_58 = DAT_1808d5f00 ^ (ulonglong)local_88;
  local_80 = param_6;
  local_88[0] = param_3;
  local_78 = param_2;
  if (param_5 < 1) {
    if (param_5 < -1) goto LAB_1806346ef;
  }
  else {
    sVar10 = __strncnt((char *)param_4,(longlong)param_5);
    param_5 = (int)sVar10;
  }
  puVar18 = auStack_d8;
  if (param_7 < 1) {
    if (param_7 < -1) goto LAB_1806346ef;
  }
  else {
    sVar10 = __strncnt((char *)param_6,(longlong)param_7);
    param_7 = (int)sVar10;
  }
  if (param_8 == 0) {
    param_8 = *(UINT *)(*param_1 + 0xc);
  }
  if ((param_5 == 0) || (param_7 == 0)) {
    local_70.LeadByte[10] = '\0';
    local_70.LeadByte[0xb] = '\0';
    local_70._18_2_ = 0;
    local_70.MaxCharSize = 0;
    local_70.DefaultChar[0] = '\0';
    local_70.DefaultChar[1] = '\0';
    local_70.LeadByte[0] = '\0';
    local_70.LeadByte[1] = '\0';
    local_70.LeadByte[2] = '\0';
    local_70.LeadByte[3] = '\0';
    local_70.LeadByte[4] = '\0';
    local_70.LeadByte[5] = '\0';
    local_70.LeadByte[6] = '\0';
    local_70.LeadByte[7] = '\0';
    local_70.LeadByte[8] = '\0';
    local_70.LeadByte[9] = '\0';
    if (param_5 == param_7) {
LAB_18063470c:
      puVar18 = auStack_d8;
      goto LAB_1806346ef;
    }
    if (param_7 < 2) {
      if (param_5 < 2) {
        BVar6 = GetCPInfo(param_8,&local_70);
        puVar18 = auStack_d8;
        if (BVar6 == 0) goto LAB_1806346ef;
        if (param_5 < 1) {
          if (param_7 < 1) goto LAB_1806344e0;
          if (1 < local_70.MaxCharSize) {
            pBVar11 = local_70.LeadByte;
            while ((local_70.LeadByte[0] != 0 && (pBVar11[1] != 0))) {
              if ((*pBVar11 <= *param_6) && (*param_6 <= pBVar11[1])) goto LAB_18063470c;
              pBVar11 = pBVar11 + 2;
              local_70.LeadByte[0] = *pBVar11;
            }
          }
          goto LAB_1806344d6;
        }
        if (1 < local_70.MaxCharSize) {
          pBVar11 = local_70.LeadByte;
          while ((local_70.LeadByte[0] != 0 && (pBVar11[1] != 0))) {
            if ((*pBVar11 <= *param_4) && (*param_4 <= pBVar11[1])) goto LAB_18063470c;
            pBVar11 = pBVar11 + 2;
            local_70.LeadByte[0] = *pBVar11;
          }
        }
      }
      puVar18 = auStack_d8;
    }
    else {
LAB_1806344d6:
      puVar18 = auStack_d8;
    }
    goto LAB_1806346ef;
  }
LAB_1806344e0:
  local_b0 = 0;
  local_b8 = 0;
  iVar7 = FUN_18062b5a8(param_8,9,param_4,param_5);
  puVar18 = auStack_d8;
  if ((iVar7 == 0) ||
     (uVar14 = (longlong)iVar7 * 2 + 0x10,
     uVar14 = -(ulonglong)((ulonglong)((longlong)iVar7 * 2) < uVar14) & uVar14, puVar18 = auStack_d8
     , uVar14 == 0)) goto LAB_1806346ef;
  if (uVar14 < 0x401) {
    uVar12 = uVar14 + 0xf;
    if (uVar12 <= uVar14) {
      uVar12 = 0xffffffffffffff0;
    }
    lVar2 = -(uVar12 & 0xfffffffffffffff0);
    puVar18 = auStack_d8 + lVar2;
    puVar16 = auStack_d8 + lVar2;
    puVar13 = (undefined4 *)((longlong)local_88 + lVar2);
    if (puVar13 == (undefined4 *)0x0) goto LAB_1806346ef;
    *puVar13 = 0xcccc;
LAB_180634578:
    puVar15 = puVar13 + 4;
    puVar18 = puVar16;
  }
  else {
    puVar13 = (undefined4 *)_malloc_base(uVar14);
    puVar18 = auStack_d8;
    puVar16 = auStack_d8;
    puVar15 = (undefined4 *)0x0;
    if (puVar13 != (undefined4 *)0x0) {
      *puVar13 = 0xdddd;
      goto LAB_180634578;
    }
  }
  if (puVar15 == (undefined4 *)0x0) goto LAB_1806346ef;
  *(int *)(puVar18 + 0x28) = iVar7;
  *(undefined4 **)(puVar18 + 0x20) = puVar15;
  *(undefined8 *)(puVar18 + -8) = 0x1806345a2;
  iVar8 = FUN_18062b5a8(param_8,1,param_4,param_5);
  if (iVar8 == 0) {
LAB_1806346dc:
    iVar7 = puVar15[-4];
  }
  else {
    *(undefined4 *)(puVar18 + 0x28) = 0;
    *(undefined8 *)(puVar18 + 0x20) = 0;
    *(undefined8 *)(puVar18 + -8) = 0x1806345c8;
    iVar8 = FUN_18062b5a8(param_8,9,param_6,param_7);
    if ((iVar8 == 0) ||
       (uVar14 = (longlong)iVar8 * 2 + 0x10,
       uVar14 = -(ulonglong)((ulonglong)((longlong)iVar8 * 2) < uVar14) & uVar14, uVar14 == 0))
    goto LAB_1806346dc;
    if (uVar14 < 0x401) {
      uVar12 = uVar14 + 0xf;
      if (uVar12 <= uVar14) {
        uVar12 = 0xffffffffffffff0;
      }
      *(undefined8 *)(puVar18 + -8) = 0x180634611;
      lVar2 = -(uVar12 & 0xfffffffffffffff0);
      puVar17 = puVar18 + lVar2;
      puVar13 = (undefined4 *)(puVar18 + lVar2 + 0x50);
      puVar18 = puVar18 + lVar2;
      if (puVar13 == (undefined4 *)0x0) goto LAB_1806346dc;
      *puVar13 = 0xcccc;
      puVar18 = puVar17;
LAB_18063463d:
      puVar19 = puVar13 + 4;
    }
    else {
      *(undefined8 *)(puVar18 + -8) = 0x18063462f;
      puVar13 = (undefined4 *)_malloc_base();
      puVar19 = (undefined4 *)0x0;
      if (puVar13 != (undefined4 *)0x0) {
        *puVar13 = 0xdddd;
        goto LAB_18063463d;
      }
    }
    pbVar4 = local_80;
    if (puVar19 == (undefined4 *)0x0) goto LAB_1806346dc;
    piVar1 = puVar19 + -4;
    *(int *)(puVar18 + 0x28) = iVar8;
    *(undefined4 **)(puVar18 + 0x20) = puVar19;
    *(undefined8 *)(puVar18 + -8) = 0x18063466c;
    iVar9 = FUN_18062b5a8(param_8,1,pbVar4,param_7);
    uVar3 = local_88[0];
    if (iVar9 != 0) {
      *(undefined8 *)(puVar18 + 0x40) = 0;
      *(undefined8 *)(puVar18 + 0x38) = 0;
      *(undefined8 *)(puVar18 + 0x30) = 0;
      uVar5 = local_78;
      *(int *)(puVar18 + 0x28) = iVar8;
      *(undefined4 **)(puVar18 + 0x20) = puVar19;
      *(undefined8 *)(puVar18 + -8) = 0x1806346b7;
      FUN_180621740(uVar5,uVar3,puVar15,iVar7);
      if (*piVar1 == 0xdddd) {
        *(undefined8 *)(puVar18 + -8) = 0x1806346cb;
        FUN_180621380(piVar1);
      }
      if (puVar15[-4] == 0xdddd) {
        *(undefined8 *)(puVar18 + -8) = 0x1806346d8;
        FUN_180621380();
      }
      goto LAB_1806346ef;
    }
    if (*piVar1 == 0xdddd) {
      *(undefined8 *)(puVar18 + -8) = 0x180634684;
      FUN_180621380(piVar1);
    }
    iVar7 = puVar15[-4];
  }
  if (iVar7 == 0xdddd) {
    *(undefined8 *)(puVar18 + -8) = 0x1806346ed;
    FUN_180621380();
  }
LAB_1806346ef:
  *(undefined **)(puVar18 + -8) = &UNK_1806346fb;
}



