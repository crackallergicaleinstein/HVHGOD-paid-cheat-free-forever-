// FUN_1803d0b70 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803d0b70 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1803d0b70(void)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  ulonglong uVar3;
  longlong ****pppplVar4;
  size_t sVar5;
  char cVar6;
  int iVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong ****pppplVar11;
  undefined1 *puVar12;
  undefined8 **_Buf2;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined1 (**ppauVar16) [16];
  float fVar17;
  float fVar18;
  undefined1 auStack_d8 [32];
  longlong ****local_b8 [2];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_68;
  longlong ****local_60 [2];
  size_t local_50;
  ulonglong local_48;
  undefined1 local_40 [16];
  undefined8 local_30;
  ulonglong local_28;
  
  uVar3 = DAT_180bb8d78;
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_d8;
  local_b8[0] = (longlong ****)((ulonglong)local_b8[0] & 0xffffffff00000000);
  if (DAT_180bb903c == '\0') {
    local_78 = 0;
    uStack_70 = 0xf;
    local_88._1_15_ = SUB1615((undefined1  [16])0x0,1);
    auVar2[0xf] = 0;
    auVar2._0_15_ = local_88._1_15_;
    local_88 = auVar2 << 8;
    puVar12 = local_88;
    uVar14 = 2;
  }
  else {
    local_a8 = (undefined1  [16])0x0;
    local_98 = (undefined1  [16])0x0;
    ppauVar16 = &DAT_180bb8d68;
    if (0xf < DAT_180bb8d80) {
      ppauVar16 = (undefined1 (**) [16])DAT_180bb8d68;
    }
    if (0x7fffffffffffffff < DAT_180bb8d78) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bb70();
    }
    if (DAT_180bb8d78 < 0x10) {
      local_98._8_8_ = 0xf;
      local_98._0_8_ = DAT_180bb8d78;
      local_a8 = *(undefined1 (*) [16])ppauVar16;
    }
    else {
      uVar8 = DAT_180bb8d78 | 0xf;
      uVar15 = 0x7fffffffffffffff;
      if ((uVar8 < 0x8000000000000000) && (uVar15 = uVar8, uVar8 < 0x16)) {
        uVar15 = 0x16;
      }
      uVar9 = FUN_18015bca0(uVar15 + 1);
      local_a8._0_8_ = uVar9;
      local_98._8_8_ = uVar15;
      local_98._0_8_ = uVar3;
      FUN_18063aed0(uVar9,ppauVar16,uVar3 + 1);
    }
    puVar12 = local_a8;
    uVar14 = 1;
  }
  local_b8[0] = (longlong ****)CONCAT44(local_b8[0]._4_4_,uVar14);
  FUN_18015b360(local_60,puVar12);
  if ((uVar14 & 2) != 0) {
    uVar14 = uVar14 & 0xfffffffd;
    FUN_18015c010(local_88);
  }
  if ((uVar14 & 1) != 0) {
    FUN_18015c010(local_a8);
  }
  uVar3 = local_48;
  sVar5 = local_50;
  pppplVar4 = local_60[0];
  _Buf2 = &DAT_180ccddc8;
  if (0xf < DAT_180ccdde0) {
    _Buf2 = (undefined8 **)DAT_180ccddc8;
  }
  pppplVar11 = (longlong ****)local_60;
  if (0xf < local_48) {
    pppplVar11 = local_60[0];
  }
  fVar17 = 0.0;
  fVar18 = 0.0;
  if (local_50 == DAT_180ccddd8) {
    if (local_50 != 0) {
      fVar17 = 0.0;
      iVar7 = memcmp(pppplVar11,_Buf2,local_50);
      fVar18 = fVar17;
      if (iVar7 != 0) goto LAB_1803d0d03;
    }
    local_50 = sVar5;
    local_48 = uVar3;
    local_60[0] = pppplVar4;
  }
  else {
LAB_1803d0d03:
    pppplVar11 = (longlong ****)local_60;
    if (0xf < uVar3) {
      pppplVar11 = pppplVar4;
    }
    fVar17 = fVar18;
    FUN_180113930(&DAT_180ccddc8,pppplVar11,sVar5);
    lVar13 = DAT_180ccde48;
    if (DAT_180ccde48 != 0) {
      DAT_180ccde48 = 0;
      (**(code **)(*(longlong *)lVar13 + 0x10))();
    }
    _DAT_180ccde50 = 0;
    DAT_180ccddc4 = 0.0;
  }
  if ((local_50 != 0) && (DAT_180ccde48 == 0)) {
    DAT_180ccddc4 = DAT_180ccddc4 - DAT_180bbae00;
    if (DAT_180ccddc4 <= fVar17) {
      DAT_180ccddc4 = 5.0;
      local_40 = (undefined1  [16])0x0;
      local_30 = 0;
      local_b8[0] = (longlong ****)local_60;
      if (0xf < local_48) {
        local_b8[0] = local_60[0];
      }
      cVar6 = FUN_1803cfed0(local_b8,local_40);
      if (cVar6 != '\0') {
        local_a8._8_8_ = local_40._8_8_ - local_40._0_8_;
        local_a8._0_8_ = local_40._0_8_;
        plVar10 = (longlong *)FUN_180437520(local_b8,local_a8,&DAT_180ccde50,&DAT_180ccde54);
        lVar13 = 0;
        if (&local_68 != plVar10) {
          lVar13 = *plVar10;
          *plVar10 = 0;
        }
        if (DAT_180ccde48 != 0) {
          lVar1 = *(longlong *)DAT_180ccde48;
          DAT_180ccde48 = lVar13;
          (**(code **)(lVar1 + 0x10))();
          lVar13 = DAT_180ccde48;
        }
        DAT_180ccde48 = lVar13;
        pppplVar4 = local_b8[0];
        if (local_b8[0] != (longlong ****)0x0) {
          local_b8[0] = (longlong ****)0x0;
          (*(code *)(*pppplVar4)[2])();
        }
      }
      FUN_180113710(local_40);
    }
  }
  FUN_18015c010(local_60);
}



