// FUN_18022de40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18022de40 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18022de40(longlong param_1)

{
  char *pcVar1;
  undefined8 uVar2;
  double dVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  ULONGLONG UVar9;
  longlong lVar10;
  ulonglong *puVar11;
  undefined4 *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  undefined4 uVar21;
  undefined1 auStack_748 [32];
  undefined **local_728;
  char *local_720;
  double local_718;
  double local_710;
  double local_708;
  double local_700;
  ulonglong local_6f8;
  ulonglong local_6f0;
  ulonglong local_6e8;
  longlong *local_6d8 [2];
  undefined1 local_6c8 [16];
  longlong *local_6b8;
  longlong *local_6b0;
  undefined8 local_688;
  undefined1 local_680 [40];
  longlong local_658;
  longlong local_650;
  char local_648 [1536];
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_748;
  local_658 = param_1;
  if ((DAT_180cd3b70 & 1) == 0) {
    DAT_180cd3b70 = DAT_180cd3b70 | 1;
    DAT_180cd3b68 = FUN_18022e4c0();
  }
  lVar8 = FUN_180184240(local_680,local_658);
  uVar2 = *(undefined8 *)(lVar8 + 0x20);
  if (DAT_180cd3b68 == 0) {
  }
  local_688._1_1_ = (char)((ulonglong)uVar2 >> 8);
  if (local_688._1_1_ == '\0') {
  }
  local_688 = uVar2;
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  lVar10 = DAT_1808eb4e0;
  lVar8 = DAT_1808da460;
  if ((DAT_1808eb4e0 != DAT_1808da460) || (lVar14 = DAT_180c63cd8, DAT_180c63cd8 == 0)) {
    UVar9 = GetTickCount64();
    if ((lVar10 == lVar8) && (UVar9 < DAT_180c63cd0)) {
      lVar14 = 0;
    }
    else {
      local_6d8[0] = (longlong *)&DAT_1808eb490;
      iVar6 = FUN_1805f68d0(&DAT_1808eb490);
      if (iVar6 != 0) goto LAB_18022e49c;
      if (DAT_1808eb4dc == 0x7fffffff) {
        DAT_1808eb4dc = 0x7ffffffe;
        goto LAB_18022e4b1;
      }
      uVar15 = 1000;
      if (DAT_1808eb4e0 == lVar8) {
        if ((DAT_180c63cd8 == 0) && (DAT_180c63cd0 <= UVar9)) goto LAB_18022dfa4;
      }
      else {
        DAT_1808eb480 = 1000;
LAB_18022dfa4:
        lVar10 = -1;
        do {
          local_6c8._8_8_ = lVar10 + 1;
          pcVar1 = "lient.dll:48895C241048896C2418488974242057415641574883EC20440FB6F2488BF9" +
                   lVar10;
          lVar10 = local_6c8._8_8_;
        } while (*pcVar1 != '\0');
        local_6c8._0_8_ = &DAT_180824970;
        local_6b8 = (longlong *)0x1807ccc80;
        local_6b0 = (longlong *)0x2a;
        DAT_180c63cd8 = FUN_1800e5d20(&local_6b8,local_6c8);
        DAT_1808eb4e0 = lVar8;
        DAT_180c63cd0 = 0xffffffffffffffff;
        if (DAT_180c63cd8 == 0) {
          DAT_180c63cd0 = DAT_1808eb480 + UVar9;
          uVar15 = 60000;
          if (DAT_1808eb480 < 60000) {
            uVar15 = DAT_1808eb480 * 2;
          }
        }
        DAT_1808eb480 = uVar15;
      }
      lVar14 = DAT_180c63cd8;
      FUN_1805f68fc(&DAT_1808eb490);
    }
  }
  local_6b8 = &local_650;
  local_6b0 = &local_658;
  local_650 = lVar14;
  cVar5 = FUN_18022ea80(&local_6b8);
  if (cVar5 != '\0') {
    local_6d8[0] = &local_658;
    cVar5 = FUN_18022ed00(local_6d8);
    if (cVar5 != '\0') {
      uVar21 = 1;
      iVar6 = DAT_180c63cc4;
      if (DAT_180c63cc4 == 0) {
        UVar9 = GetTickCount64();
        if (UVar9 < DAT_180c63cc8) {
          iVar6 = 0;
        }
        else {
          local_6d8[0] = (longlong *)&DAT_1808eb430;
          iVar6 = FUN_1805f68d0(&DAT_1808eb430);
          if (iVar6 != 0) goto LAB_18022e49c;
          if (DAT_1808eb47c == 0x7fffffff) {
            DAT_1808eb47c = 0x7ffffffe;
            goto LAB_18022e4b1;
          }
          if ((DAT_180c63cc4 == 0) && (DAT_180c63cc8 <= UVar9)) {
            DAT_180c63cc4 = FUN_1804174b0("C_EconEntity",0x537b0586);
            if (DAT_180c63cc4 == 0) {
              DAT_180c63cc8 = UVar9 + 1000;
            }
            else {
              DAT_180c63cc8 = 0xffffffffffffffff;
            }
          }
          iVar6 = DAT_180c63cc4;
          FUN_1805f68fc(&DAT_1808eb430);
        }
      }
      iVar7 = DAT_180c63cc0;
      if (DAT_180c63cc0 == 0) {
        UVar9 = GetTickCount64();
        if (UVar9 < DAT_180c63cb8) {
          iVar7 = 0;
        }
        else {
          local_6d8[0] = (longlong *)&DAT_1808eb3e0;
          iVar7 = FUN_1805f68d0(&DAT_1808eb3e0);
          if (iVar7 != 0) {
LAB_18022e49c:
                    /* WARNING: Subroutine does not return */
            FUN_1805f6d44(5);
          }
          if (DAT_1808eb42c == 0x7fffffff) {
            DAT_1808eb42c = 0x7ffffffe;
LAB_18022e4b1:
                    /* WARNING: Subroutine does not return */
            FUN_1805f6d44(6);
          }
          if ((DAT_180c63cc0 == 0) && (DAT_180c63cb8 <= UVar9)) {
            DAT_180c63cc0 = FUN_1804174b0("C_AttributeContainer",0xdce71866);
            if (DAT_180c63cc0 == 0) {
              DAT_180c63cb8 = UVar9 + 1000;
            }
            else {
              DAT_180c63cb8 = 0xffffffffffffffff;
            }
          }
          iVar7 = DAT_180c63cc0;
          FUN_1805f68fc(&DAT_1808eb3e0);
        }
      }
      lVar8 = iVar7 + local_658;
      local_6c8 = ZEXT816(0x1807ce0a0);
      FUN_18017bf40(local_6c8 + 8);
      FUN_18022d6d0(local_658,iVar6 + lVar8);
      FUN_18017bf40(local_6d8);
      plVar4 = local_6d8[0];
      uVar16 = (longlong)local_6d8[0] - local_6c8._8_8_;
      puVar11 = (ulonglong *)FUN_180230e40();
      uVar17 = *puVar11 + 1;
      *puVar11 = uVar17;
      uVar15 = puVar11[1];
      puVar11[1] = uVar15 + uVar16;
      uVar18 = puVar11[3] + (ulonglong)(999999 < uVar16);
      puVar11[3] = uVar18;
      uVar19 = puVar11[4] + (ulonglong)(4999999 < uVar16);
      puVar11[4] = uVar19;
      uVar20 = puVar11[5] + (ulonglong)(15999999 < uVar16);
      puVar11[5] = uVar20;
      uVar13 = puVar11[2];
      if (puVar11[2] < uVar16) {
        puVar11[2] = uVar16;
        uVar13 = uVar16;
      }
      if ((plVar4 == (longlong *)puVar11[7]) || ((longlong)puVar11[7] <= (longlong)plVar4)) {
        local_708 = (double)(longlong)((longlong)plVar4 - puVar11[6]) / 1000000.0;
        dVar3 = (double)(uVar15 + uVar16);
        local_700 = 0.0;
        if (0.0 < local_708) {
          local_700 = (dVar3 / 1000.0) / local_708;
        }
        local_710 = dVar3 / 1000000.0;
        local_718 = (double)uVar13 / 1000.0;
        local_720 = (char *)((dVar3 / (double)uVar17) / 1000.0);
        local_728 = (undefined **)uVar17;
        local_6f8 = uVar18;
        local_6f0 = uVar19;
        local_6e8 = uVar20;
        FUN_1801af8a0(dVar3 / (double)uVar17,local_720,local_6c8._0_8_);
        puVar11[2] = 0;
        puVar11[1] = 0;
        *puVar11 = 0;
        puVar11[5] = 0;
        puVar11[4] = 0;
        puVar11[3] = 0;
        puVar11[6] = (ulonglong)plVar4;
        puVar11[7] = (ulonglong)(plVar4 + 625000000);
      }
      goto LAB_18022e3c3;
    }
  }
  uVar21 = 0;
LAB_18022e3c3:
  puVar12 = (undefined4 *)FUN_180184240(local_680,local_658);
  FUN_18063ab10(local_648,0,0x600);
  local_710 = (double)CONCAT44(local_710._4_4_,puVar12[4]);
  local_718 = (double)CONCAT44(local_718._4_4_,*puVar12);
  local_720 = (char *)CONCAT44(local_720._4_4_,uVar21);
  local_728 = (undefined **)local_658;
  FUN_18015ad60(local_648,0x600,0xffffffffffffffff,
                "weapon=%p submitted=%d primary=%d secondary=%d rendered_finish=unverified");
  local_728 = &PTR_180700558;
  if (local_648[0] != '\0') {
    local_728 = (undefined **)&DAT_1806bcfc0;
  }
  local_720 = local_648;
  FUN_1800f6900(0);
}



