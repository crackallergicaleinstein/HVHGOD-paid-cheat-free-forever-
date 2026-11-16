// FUN_1801777e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801777e0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 * FUN_1801777e0(float *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char *_Buf1;
  size_t sVar3;
  void *_Buf1_00;
  int iVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  undefined1 auVar13 [16];
  float fVar14;
  undefined1 auVar15 [12];
  char *local_48;
  size_t sStack_40;
  
  _Buf1 = (char *)*param_3;
  sVar3 = param_3[1];
  uVar11 = 0xcbf29ce484222325;
  uVar6 = 0;
  if (param_3[1] != 0) {
    do {
      uVar11 = (uVar11 ^ (byte)_Buf1[uVar6]) * 0x100000001b3;
      uVar6 = uVar6 + 1;
    } while (uVar6 < (ulonglong)param_3[1]);
  }
  puVar5 = *(undefined8 **)
            (*(longlong *)(param_1 + 6) + 8 + (*(ulonglong *)(param_1 + 0xc) & uVar11) * 0x10);
  puVar12 = *(undefined8 **)(param_1 + 2);
  if (puVar5 != *(undefined8 **)(param_1 + 2)) {
    puVar12 = *(undefined8 **)
               (*(longlong *)(param_1 + 6) + (*(ulonglong *)(param_1 + 0xc) & uVar11) * 0x10);
    local_48 = _Buf1;
    sStack_40 = sVar3;
    while( true ) {
      if ((sVar3 == puVar5[3]) &&
         ((sVar3 == 0 || (iVar4 = memcmp(_Buf1,(void *)puVar5[2],sVar3), iVar4 == 0)))) {
        *param_2 = puVar5;
        *(undefined1 *)(param_2 + 1) = 0;
        return param_2;
      }
      if (puVar5 == puVar12) break;
      puVar5 = (undefined8 *)puVar5[1];
    }
    puVar12 = puVar5;
  }
  if (*(longlong *)(param_1 + 4) == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_1805fa8b8("unordered_map/set too long");
  }
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_48 = "tier0.dll:g_pMemAlloc";
    sStack_40 = 0x15;
    DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_48);
  }
  puVar5 = (undefined8 *)
           (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x20);
  uVar2 = param_3[1];
  puVar5[2] = *param_3;
  puVar5[3] = uVar2;
  uVar6 = *(ulonglong *)(param_1 + 0xe);
  auVar15 = SUB1612(ZEXT816(0),4);
  if ((longlong)(*(longlong *)(param_1 + 4) + 1U) < 0) {
    auVar15 = (undefined1  [12])0x0;
  }
  fVar14 = (float)(*(longlong *)(param_1 + 4) + 1U);
  if (*param_1 < fVar14 / (float)uVar6) {
    auVar13._0_4_ = fVar14 / *param_1;
    auVar13._4_12_ = auVar15;
    auVar13 = vroundss_avx(ZEXT816(0),auVar13,2);
    fVar14 = auVar13._0_4_;
    lVar7 = 0;
    if ((9.223372e+18 <= fVar14) && (fVar14 = fVar14 - 9.223372e+18, fVar14 < 9.223372e+18)) {
      lVar7 = -0x8000000000000000;
    }
    uVar8 = 8;
    if (8 < (ulonglong)((longlong)fVar14 + lVar7)) {
      uVar8 = (longlong)fVar14 + lVar7;
    }
    uVar9 = uVar6;
    if ((uVar6 < uVar8) && ((0x1ff < uVar6 || (uVar9 = uVar6 * 8, uVar6 * 8 < uVar8)))) {
      uVar9 = uVar8;
    }
    FUN_18017a280(param_1,uVar9);
    puVar10 = *(undefined8 **)
               (*(longlong *)(param_1 + 6) + 8 + (*(ulonglong *)(param_1 + 0xc) & uVar11) * 0x10);
    puVar12 = *(undefined8 **)(param_1 + 2);
    if (puVar10 != *(undefined8 **)(param_1 + 2)) {
      puVar12 = *(undefined8 **)
                 (*(longlong *)(param_1 + 6) + (*(ulonglong *)(param_1 + 0xc) & uVar11) * 0x10);
      _Buf1_00 = (void *)puVar5[2];
      sVar3 = puVar5[3];
      while( true ) {
        if ((sVar3 == puVar10[3]) &&
           ((sVar3 == 0 || (iVar4 = memcmp(_Buf1_00,(void *)puVar10[2],sVar3), iVar4 == 0)))) {
          puVar12 = (undefined8 *)*puVar10;
          goto LAB_180177a76;
        }
        if (puVar10 == puVar12) break;
        puVar10 = (undefined8 *)puVar10[1];
      }
      puVar12 = puVar10;
    }
  }
LAB_180177a76:
  puVar10 = (undefined8 *)puVar12[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar5 = puVar12;
  puVar5[1] = puVar10;
  *puVar10 = puVar5;
  puVar12[1] = puVar5;
  uVar11 = *(ulonglong *)(param_1 + 0xc) & uVar11;
  lVar7 = *(longlong *)(param_1 + 6);
  puVar1 = *(undefined8 **)(lVar7 + uVar11 * 0x10);
  if (puVar1 == *(undefined8 **)(param_1 + 2)) {
    *(undefined8 **)(lVar7 + uVar11 * 0x10) = puVar5;
  }
  else {
    if (puVar1 == puVar12) {
      *(undefined8 **)(lVar7 + uVar11 * 0x10) = puVar5;
      goto LAB_180177ac1;
    }
    if (*(undefined8 **)(lVar7 + 8 + uVar11 * 0x10) != puVar10) goto LAB_180177ac1;
  }
  *(undefined8 **)(lVar7 + 8 + uVar11 * 0x10) = puVar5;
LAB_180177ac1:
  *param_2 = puVar5;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



