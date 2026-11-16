// FUN_180531470 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180531470 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180531470(longlong *param_1)

{
  char *pcVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  char cVar4;
  int iVar5;
  byte *pbVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  undefined8 *_Buf2;
  byte *pbVar10;
  longlong lVar11;
  size_t sVar12;
  size_t _Size;
  undefined7 uVar14;
  undefined8 uVar13;
  longlong lVar15;
  bool bVar16;
  undefined1 auStack_58 [32];
  undefined1 local_38 [16];
  undefined1 auStack_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_58;
  puVar8 = (undefined8 *)*param_1;
  _Buf2 = puVar8;
  if (0xf < (ulonglong)puVar8[3]) {
    _Buf2 = (undefined8 *)*puVar8;
  }
  sVar12 = 0xffffffffffffffff;
  do {
    _Size = sVar12 + 1;
    pcVar1 = &DAT_180c7e0d1 + sVar12;
    sVar12 = _Size;
  } while (*pcVar1 != '\0');
  uVar14 = (undefined7)(_Size >> 8);
  if (_Size == puVar8[2]) {
    if (_Size == 0) {
      bVar16 = true;
    }
    else {
      iVar5 = memcmp(&DAT_180c7e0d0,_Buf2,_Size);
      bVar16 = iVar5 == 0;
      uVar14 = (undefined7)(_Size >> 8);
    }
  }
  else {
    bVar16 = false;
  }
  cVar4 = FUN_18048b0e0("Apply Name",&DAT_18082ac70,CONCAT71(uVar14,bVar16) ^ 1);
  if (cVar4 != '\0') {
    local_38 = (undefined1  [16])0x0;
    auStack_28 = (undefined1  [16])0x0;
    lVar15 = -1;
    do {
      lVar11 = lVar15 + 1;
      pcVar1 = &DAT_180c7e0d1 + lVar15;
      lVar15 = lVar11;
    } while (*pcVar1 != '\0');
    FUN_18015ba30(local_38,&DAT_180c7e0d0,lVar11);
    pbVar9 = local_38;
    if (0xf < (ulonglong)auStack_28._8_8_) {
      pbVar9 = (byte *)local_38._0_8_;
    }
    pbVar6 = pbVar9 + auStack_28._0_8_;
    if (pbVar9 != pbVar6) {
      do {
        if ((*pbVar9 < 0x20) || (*pbVar9 == 0x3b)) break;
        pbVar9 = pbVar9 + 1;
      } while (pbVar9 != pbVar6);
      if ((pbVar9 != pbVar6) && (pbVar10 = pbVar9 + 1, pbVar10 != pbVar6)) {
        do {
          bVar2 = *pbVar10;
          if ((0x1f < bVar2) && (bVar2 != 0x3b)) {
            *pbVar9 = bVar2;
            pbVar9 = pbVar9 + 1;
          }
          pbVar10 = pbVar10 + 1;
        } while (pbVar10 != pbVar6);
      }
    }
    pbVar10 = local_38;
    if (0xf < (ulonglong)auStack_28._8_8_) {
      pbVar10 = (byte *)local_38._0_8_;
    }
    lVar15 = (longlong)pbVar9 - (longlong)pbVar10;
    uVar7 = (longlong)pbVar6 - (longlong)pbVar9;
    if ((ulonglong)(auStack_28._0_8_ - lVar15) < (ulonglong)((longlong)pbVar6 - (longlong)pbVar9)) {
      uVar7 = auStack_28._0_8_ - lVar15;
    }
    pbVar9 = local_38;
    if (0xf < (ulonglong)auStack_28._8_8_) {
      pbVar9 = (byte *)local_38._0_8_;
    }
    lVar11 = auStack_28._0_8_ - uVar7;
    FUN_18063aed0(pbVar9 + lVar15,pbVar9 + lVar15 + uVar7,(lVar11 - lVar15) + 1);
    auStack_28._0_8_ = lVar11;
    puVar8 = (undefined8 *)*param_1;
    if (puVar8 != (undefined8 *)local_38) {
      FUN_18015c010(puVar8);
      *puVar8 = local_38._0_8_;
      puVar8[1] = local_38._8_8_;
      puVar8[2] = auStack_28._0_8_;
      puVar8[3] = auStack_28._8_8_;
      auStack_28 = ZEXT816(0xf) << 0x40;
      auVar3[0xf] = 0;
      auVar3._0_15_ = local_38._1_15_;
      local_38 = auVar3 << 8;
    }
    FUN_1805310f0(param_1[1]);
    FUN_18015c010(local_38);
  }
  if ((*(longlong *)(*param_1 + 0x10) == 0) && (DAT_180c7e0d0 == '\0')) {
    uVar13 = 0;
  }
  else {
    uVar13 = 1;
  }
  cVar4 = FUN_18048b0e0("Use Default Name",&DAT_180829a4c,uVar13);
  if (cVar4 != '\0') {
    puVar8 = (undefined8 *)*param_1;
    puVar8[2] = 0;
    if (0xf < (ulonglong)puVar8[3]) {
      puVar8 = (undefined8 *)*puVar8;
    }
    *(undefined1 *)puVar8 = 0;
    FUN_1805310f0(param_1[1]);
  }
}



