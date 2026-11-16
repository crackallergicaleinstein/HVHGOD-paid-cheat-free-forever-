// FUN_180493b90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180493b90 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180493b90(void)

{
  size_t _Size;
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined4 uVar4;
  undefined4 uVar5;
  byte *pbVar6;
  int iVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  undefined8 *_Buf1;
  undefined1 (*pauVar10) [16];
  byte *pbVar11;
  undefined8 *puVar12;
  byte *pbVar13;
  undefined8 *puVar14;
  byte *pbVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined1 auStack_98 [32];
  undefined1 local_78 [16];
  undefined1 auStack_68 [16];
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50 [16];
  ulonglong local_40;
  ulonglong local_38;
  ulonglong local_30;
  
  pbVar6 = DAT_180c62d20;
  local_30 = DAT_1808d5f00 ^ (ulonglong)auStack_98;
  if (DAT_1808e4e38 < 0) {
    uVar18 = 0;
    uVar17 = 0;
    local_40 = 0;
    local_38 = 0xf;
    local_50._1_15_ = SUB1615((undefined1  [16])0x0,1);
    auVar2[0xf] = 0;
    auVar2._0_15_ = local_50._1_15_;
    local_50 = auVar2 << 8;
    pbVar15 = DAT_180c62d18;
    if (DAT_180c62d18 != DAT_180c62d20) {
      do {
        if (uVar17 != 0) {
          FUN_18015af80(local_50,0x1f);
          uVar17 = local_40;
        }
        if (*(ulonglong *)(pbVar15 + 0x18) < 0x10) {
          pbVar11 = pbVar15;
        }
        else {
          pbVar11 = *(byte **)pbVar15;
        }
        pbVar13 = pbVar11 + *(longlong *)(pbVar15 + 0x10);
        if (pbVar11 != pbVar13) {
          do {
            iVar7 = toupper((uint)*pbVar11);
            FUN_18015af80(local_50,iVar7);
            pbVar11 = pbVar11 + 1;
          } while (pbVar11 != pbVar13);
          uVar17 = local_40;
        }
        pbVar15 = pbVar15 + 0x20;
      } while (pbVar15 != pbVar6);
    }
    uVar8 = local_38;
    puVar14 = DAT_180c62d50;
    lVar1 = (longlong)DAT_180c62d50 - (longlong)DAT_180c62d48 >> 0x3f;
    lVar16 = ((longlong)DAT_180c62d50 - (longlong)DAT_180c62d48) / 0x28 + lVar1;
    uVar9 = local_50._0_8_;
    puVar12 = DAT_180c62d48;
    if (lVar16 != lVar1) {
      do {
        pauVar10 = &local_50;
        if (0xf < uVar8) {
          pauVar10 = (undefined1 (*) [16])uVar9;
        }
        _Size = puVar12[2];
        _Buf1 = puVar12;
        if (0xf < (ulonglong)puVar12[3]) {
          _Buf1 = (undefined8 *)*puVar12;
        }
        if ((_Size == uVar17) &&
           ((_Size == 0 || (iVar7 = memcmp(_Buf1,pauVar10,_Size), iVar7 == 0)))) goto LAB_180493e02;
        uVar18 = uVar18 + 1;
        puVar12 = puVar12 + 5;
      } while (uVar18 < (ulonglong)(lVar16 - lVar1));
    }
    local_78 = (undefined1  [16])0x0;
    auStack_68 = (undefined1  [16])0x0;
    pauVar10 = &local_50;
    if (0xf < uVar8) {
      pauVar10 = (undefined1 (*) [16])uVar9;
    }
    if (0x7fffffffffffffff < uVar17) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bb70();
    }
    if (uVar17 < 0x10) {
      auStack_68._8_8_ = 0xf;
      auStack_68._0_8_ = uVar17;
      local_78 = *pauVar10;
    }
    else {
      uVar8 = uVar17 | 0xf;
      uVar18 = 0x7fffffffffffffff;
      if ((uVar8 < 0x8000000000000000) && (uVar18 = uVar8, uVar8 < 0x16)) {
        uVar18 = 0x16;
      }
      uVar9 = FUN_18015bca0(uVar18 + 1);
      local_78._0_8_ = uVar9;
      auStack_68._8_8_ = uVar18;
      auStack_68._0_8_ = uVar17;
      FUN_18063aed0(uVar9,pauVar10,uVar17 + 1);
      puVar14 = DAT_180c62d50;
    }
    uVar5 = DAT_180bda1ec;
    uVar4 = DAT_180bda1e8;
    local_58 = DAT_180bda1e8;
    local_54 = DAT_180bda1ec;
    if (puVar14 == DAT_180c62d58) {
      FUN_180494660(DAT_180bda1ec,puVar14,local_78);
    }
    else {
      *puVar14 = local_78._0_8_;
      puVar14[1] = local_78._8_8_;
      puVar14[2] = auStack_68._0_8_;
      puVar14[3] = auStack_68._8_8_;
      auStack_68 = ZEXT816(0xf) << 0x40;
      auVar3[0xf] = 0;
      auVar3._0_15_ = local_78._1_15_;
      local_78 = auVar3 << 8;
      *(undefined4 *)(puVar14 + 4) = uVar4;
      *(undefined4 *)((longlong)puVar14 + 0x24) = uVar5;
      DAT_180c62d50 = DAT_180c62d50 + 5;
    }
    FUN_18015c010(local_78);
    uVar18 = (ulonglong)((int)(((longlong)DAT_180c62d50 - (longlong)DAT_180c62d48) / 0x28) - 1);
LAB_180493e02:
    DAT_1808e4e38 = (int)uVar18;
    FUN_18015c010(local_50);
  }
}



