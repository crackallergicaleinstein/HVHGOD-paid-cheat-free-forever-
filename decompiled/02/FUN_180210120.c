// FUN_180210120 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180210120 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

longlong * FUN_180210120(float *param_1,longlong *param_2,undefined8 *param_3)

{
  float *pfVar1;
  undefined8 *puVar2;
  size_t _Size;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 *_Buf1;
  ulonglong uVar11;
  undefined8 *_Buf2;
  undefined8 *puVar12;
  ulonglong uVar13;
  undefined1 auVar14 [16];
  float fVar15;
  undefined1 auVar16 [12];
  char *local_68;
  undefined8 local_60;
  float *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  longlong local_40;
  
  puVar7 = param_3;
  if (0xf < (ulonglong)param_3[3]) {
    puVar7 = (undefined8 *)*param_3;
  }
  uVar13 = 0xcbf29ce484222325;
  uVar8 = 0;
  if (param_3[2] != 0) {
    do {
      uVar13 = (uVar13 ^ *(byte *)(uVar8 + (longlong)puVar7)) * 0x100000001b3;
      uVar8 = uVar8 + 1;
    } while (uVar8 < (ulonglong)param_3[2]);
  }
  FUN_180177b00(param_1,&local_48,param_3,uVar13);
  if (local_40 != 0) {
    *param_2 = local_40;
    *(undefined1 *)(param_2 + 1) = 0;
    return param_2;
  }
  pfVar1 = param_1 + 2;
  if (*(longlong *)(param_1 + 4) == 0x38e38e38e38e38e) {
                    /* WARNING: Subroutine does not return */
    FUN_1805fa8b8("unordered_map/set too long");
  }
  local_50 = (undefined8 *)0x0;
  local_58 = pfVar1;
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_68 = "tier0.dll:g_pMemAlloc";
    local_60 = 0x15;
    DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_68);
  }
  puVar7 = (undefined8 *)
           (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x48);
  *(undefined1 (*) [16])(puVar7 + 2) = (undefined1  [16])0x0;
  puVar7[4] = 0;
  puVar7[5] = 0;
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  puVar7[2] = *param_3;
  puVar7[3] = uVar3;
  puVar7[4] = uVar4;
  puVar7[5] = uVar5;
  *(undefined1 *)param_3 = 0;
  param_3[2] = 0;
  param_3[3] = 0xf;
  *(undefined1 (*) [16])(puVar7 + 6) = (undefined1  [16])0x0;
  puVar7[8] = 0;
  uVar8 = *(ulonglong *)(param_1 + 0xe);
  auVar16 = SUB1612(ZEXT816(0),4);
  if ((longlong)(*(longlong *)(param_1 + 4) + 1U) < 0) {
    auVar16 = (undefined1  [12])0x0;
  }
  fVar15 = (float)(*(longlong *)(param_1 + 4) + 1U);
  if (*param_1 < fVar15 / (float)uVar8) {
    auVar14._0_4_ = fVar15 / *param_1;
    auVar14._4_12_ = auVar16;
    auVar14 = vroundss_avx(ZEXT816(0),auVar14,2);
    fVar15 = auVar14._0_4_;
    lVar9 = 0;
    if ((9.223372e+18 <= fVar15) && (fVar15 = fVar15 - 9.223372e+18, fVar15 < 9.223372e+18)) {
      lVar9 = -0x8000000000000000;
    }
    uVar10 = 8;
    if (8 < (ulonglong)((longlong)fVar15 + lVar9)) {
      uVar10 = (longlong)fVar15 + lVar9;
    }
    uVar11 = uVar8;
    if ((uVar8 < uVar10) && ((0x1ff < uVar8 || (uVar11 = uVar8 * 8, uVar8 * 8 < uVar10)))) {
      uVar11 = uVar10;
    }
    local_50 = puVar7;
    FUN_1801b7e40(param_1,uVar11);
    puVar12 = *(undefined8 **)
               (*(longlong *)(param_1 + 6) + 8 + (*(ulonglong *)(param_1 + 0xc) & uVar13) * 0x10);
    local_48 = *(undefined8 **)pfVar1;
    if (puVar12 != *(undefined8 **)pfVar1) {
      puVar2 = *(undefined8 **)
                (*(longlong *)(param_1 + 6) + (*(ulonglong *)(param_1 + 0xc) & uVar13) * 0x10);
      _Size = puVar7[4];
      while( true ) {
        _Buf2 = puVar12 + 2;
        if (0xf < (ulonglong)puVar12[5]) {
          _Buf2 = (undefined8 *)*_Buf2;
        }
        _Buf1 = puVar7 + 2;
        if (0xf < (ulonglong)puVar7[5]) {
          _Buf1 = (undefined8 *)puVar7[2];
        }
        if ((_Size == puVar12[4]) &&
           ((_Size == 0 || (iVar6 = memcmp(_Buf1,_Buf2,_Size), iVar6 == 0)))) {
          local_48 = (undefined8 *)*puVar12;
          goto LAB_1802103b6;
        }
        if (puVar12 == puVar2) break;
        puVar12 = (undefined8 *)puVar12[1];
      }
      local_48 = puVar12;
    }
  }
LAB_1802103b6:
  puVar12 = (undefined8 *)local_48[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar7 = local_48;
  puVar7[1] = puVar12;
  *puVar12 = puVar7;
  local_48[1] = puVar7;
  uVar13 = *(ulonglong *)(param_1 + 0xc) & uVar13;
  lVar9 = *(longlong *)(param_1 + 6);
  puVar2 = *(undefined8 **)(lVar9 + uVar13 * 0x10);
  if (puVar2 == *(undefined8 **)(param_1 + 2)) {
    *(undefined8 **)(lVar9 + uVar13 * 0x10) = puVar7;
  }
  else {
    if (puVar2 == local_48) {
      *(undefined8 **)(lVar9 + uVar13 * 0x10) = puVar7;
      goto LAB_180210400;
    }
    if (*(undefined8 **)(lVar9 + 8 + uVar13 * 0x10) != puVar12) goto LAB_180210400;
  }
  *(undefined8 **)(lVar9 + 8 + uVar13 * 0x10) = puVar7;
LAB_180210400:
  *param_2 = (longlong)puVar7;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



