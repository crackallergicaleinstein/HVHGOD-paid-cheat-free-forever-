// FUN_180172d30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180172d30 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180172d30(longlong param_1)

{
  char *pcVar1;
  ulonglong uVar2;
  size_t sVar3;
  size_t _Size;
  longlong lVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *_Buf1;
  undefined8 ******_Buf1_00;
  undefined8 *puVar7;
  undefined8 *_Buf2;
  longlong *plVar8;
  void *pvVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auStack_1b8 [32];
  undefined8 ******local_198 [2];
  size_t local_188;
  ulonglong local_180;
  undefined1 local_178 [32];
  undefined1 local_158 [32];
  undefined1 local_138 [32];
  undefined1 local_118 [32];
  undefined1 local_f8 [32];
  longlong local_d8 [5];
  undefined1 local_b0 [32];
  undefined1 local_90 [32];
  undefined1 local_70 [32];
  undefined1 local_50 [40];
  ulonglong local_28;
  
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_1b8;
  lVar10 = *(longlong *)(param_1 + 0x28);
  lVar12 = *(longlong *)(param_1 + 0x30);
  if (lVar10 != lVar12) {
    do {
      if (*(char *)(lVar10 + 0xe3) != '\0') break;
      lVar10 = lVar10 + 0x168;
    } while (lVar10 != lVar12);
    lVar13 = lVar10;
    if (lVar10 != lVar12) {
      while (lVar4 = lVar13 + 0x168, lVar4 != lVar12) {
        pcVar1 = (char *)(lVar13 + 0x24b);
        lVar13 = lVar4;
        if (*pcVar1 == '\0') {
          FUN_180175280(lVar10,lVar4);
          lVar10 = lVar10 + 0x168;
        }
      }
      if (lVar10 != lVar12) {
        lVar13 = *(longlong *)(param_1 + 0x30);
        for (; lVar12 != lVar13; lVar12 = lVar12 + 0x168) {
          FUN_180175280(lVar10,lVar12);
          lVar10 = lVar10 + 0x168;
        }
        lVar12 = *(longlong *)(param_1 + 0x30);
        for (lVar13 = lVar10; lVar13 != lVar12; lVar13 = lVar13 + 0x168) {
          FUN_180152210();
        }
        *(longlong *)(param_1 + 0x30) = lVar10;
      }
    }
  }
  if (*(longlong *)(param_1 + 0x1d0) != 0) {
    puVar6 = (undefined8 *)(param_1 + 0x1c0);
    puVar11 = *(undefined8 **)(param_1 + 0x168);
    puVar7 = *(undefined8 **)(param_1 + 0x170);
    if (puVar11 != puVar7) {
      uVar2 = *(ulonglong *)(param_1 + 0x1d8);
      sVar3 = *(size_t *)(param_1 + 0x1d0);
      do {
        _Buf2 = puVar6;
        if (0xf < uVar2) {
          _Buf2 = (undefined8 *)*puVar6;
        }
        _Size = puVar11[2];
        _Buf1 = puVar11;
        if (0xf < (ulonglong)puVar11[3]) {
          _Buf1 = (undefined8 *)*puVar11;
        }
        if ((_Size == sVar3) && ((_Size == 0 || (iVar5 = memcmp(_Buf1,_Buf2,_Size), iVar5 == 0)))) {
          if (puVar11 != puVar7) goto LAB_180172ee2;
          break;
        }
        puVar11 = puVar11 + 0x2d;
      } while (puVar11 != puVar7);
    }
    *(undefined8 *)(param_1 + 0x1d0) = 0;
    if (0xf < *(ulonglong *)(param_1 + 0x1d8)) {
      puVar6 = (undefined8 *)*puVar6;
    }
    *(undefined1 *)puVar6 = 0;
    puVar6 = (undefined8 *)(param_1 + 0x1e0);
    *(undefined8 *)(param_1 + 0x1f0) = 0;
    if (0xf < *(ulonglong *)(param_1 + 0x1f8)) {
      puVar6 = (undefined8 *)*puVar6;
    }
    *(undefined1 *)puVar6 = 0;
    plVar8 = (longlong *)(param_1 + 0x200);
    if ((longlong *)(param_1 + 0x3c0) != plVar8) {
      if (0xf < *(ulonglong *)(param_1 + 0x218)) {
        plVar8 = (longlong *)*plVar8;
      }
      FUN_180113930((longlong *)(param_1 + 0x3c0),plVar8,*(undefined8 *)(param_1 + 0x210));
    }
  }
LAB_180172ee2:
  if (*(longlong *)(param_1 + 0x1d0) != 0) {
    plVar8 = (longlong *)(param_1 + 0x1c0);
    if ((longlong *)(param_1 + 0x3c0) != plVar8) {
      if (0xf < *(ulonglong *)(param_1 + 0x1d8)) {
        plVar8 = (longlong *)*plVar8;
      }
      FUN_180113930((longlong *)(param_1 + 0x3c0),plVar8);
    }
  }
  lVar12 = *(longlong *)(param_1 + 0x170);
  for (lVar10 = *(longlong *)(param_1 + 0x168); lVar10 != lVar12; lVar10 = lVar10 + 0x168) {
    FUN_18016c8d0(local_198,lVar10);
    pvVar9 = (void *)(param_1 + 0x1c0);
    if (0xf < *(ulonglong *)(param_1 + 0x1d8)) {
      pvVar9 = *(void **)(param_1 + 0x1c0);
    }
    _Buf1_00 = local_198;
    if (0xf < local_180) {
      _Buf1_00 = local_198[0];
    }
    if ((local_188 == *(size_t *)(param_1 + 0x1d0)) &&
       (((local_188 == 0 || (iVar5 = memcmp(_Buf1_00,pvVar9,local_188), iVar5 == 0)) &&
        (plVar8 = (longlong *)(param_1 + 0x1e0), local_d8 != plVar8)))) {
      if (0xf < *(ulonglong *)(param_1 + 0x1f8)) {
        plVar8 = (longlong *)*plVar8;
      }
      FUN_180113930(local_d8,plVar8,*(undefined8 *)(param_1 + 0x1f0));
    }
    lVar13 = *(longlong *)(param_1 + 0x30);
    if (lVar13 == *(longlong *)(param_1 + 0x38)) {
      FUN_180178db0(param_1 + 0x28,lVar13,local_198);
    }
    else {
      FUN_18017a9c0(lVar13,local_198);
      *(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) + 0x168;
    }
    FUN_18015c010(local_50);
    FUN_18015c010(local_70);
    FUN_18015c010(local_90);
    FUN_18015c010(local_b0);
    FUN_18015c010(local_d8);
    FUN_18015c010(local_f8);
    FUN_18015c010(local_118);
    FUN_18015c010(local_138);
    FUN_18015c010(local_158);
    FUN_18015c010(local_178);
    FUN_18015c010(local_198);
  }
  puVar6 = *(undefined8 **)(param_1 + 0x30);
  for (puVar11 = *(undefined8 **)(param_1 + 0x28); puVar11 != puVar6; puVar11 = puVar11 + 0x2d) {
    pvVar9 = (void *)(param_1 + 0x3c0);
    if (0xf < *(ulonglong *)(param_1 + 0x3d8)) {
      pvVar9 = *(void **)(param_1 + 0x3c0);
    }
    sVar3 = puVar11[2];
    puVar7 = puVar11;
    if (0xf < (ulonglong)puVar11[3]) {
      puVar7 = (undefined8 *)*puVar11;
    }
    if (sVar3 == *(size_t *)(param_1 + 0x3d0)) {
      if (sVar3 == 0) {
        bVar14 = true;
      }
      else {
        iVar5 = memcmp(puVar7,pvVar9,sVar3);
        bVar14 = iVar5 == 0;
      }
    }
    else {
      bVar14 = false;
    }
    *(bool *)(puVar11 + 0x1c) = bVar14;
  }
}



