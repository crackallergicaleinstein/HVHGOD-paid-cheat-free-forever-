// FUN_1801a8140 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801a8140 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 *
FUN_1801a8140(float *param_1,undefined8 *param_2,undefined8 *param_3,undefined4 *param_4)

{
  ulonglong uVar1;
  size_t _Size;
  int iVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 *_Buf1;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined1 auVar11 [16];
  float fVar12;
  undefined1 auVar13 [12];
  char *local_58;
  undefined8 local_50;
  float *local_48;
  undefined8 *local_40;
  
  uVar1 = param_3[2];
  uVar7 = param_3[3];
  puVar3 = param_3;
  if (0xf < uVar7) {
    puVar3 = (undefined8 *)*param_3;
  }
  uVar4 = 0;
  uVar10 = 0xcbf29ce484222325;
  if (uVar1 != 0) {
    do {
      uVar10 = (uVar10 ^ *(byte *)((longlong)puVar3 + uVar4)) * 0x100000001b3;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  puVar3 = *(undefined8 **)
            (*(longlong *)(param_1 + 6) + 8 + (*(ulonglong *)(param_1 + 0xc) & uVar10) * 0x10);
  puVar9 = *(undefined8 **)(param_1 + 2);
  if (puVar3 != *(undefined8 **)(param_1 + 2)) {
    puVar9 = *(undefined8 **)
              (*(longlong *)(param_1 + 6) + (*(ulonglong *)(param_1 + 0xc) & uVar10) * 0x10);
    while( true ) {
      puVar8 = puVar3 + 2;
      if (0xf < (ulonglong)puVar3[5]) {
        puVar8 = (undefined8 *)*puVar8;
      }
      puVar5 = param_3;
      if (0xf < uVar7) {
        puVar5 = (undefined8 *)*param_3;
      }
      if ((uVar1 == puVar3[4]) &&
         ((uVar1 == 0 || (iVar2 = memcmp(puVar5,puVar8,uVar1), iVar2 == 0)))) {
        *param_2 = puVar3;
        *(undefined1 *)(param_2 + 1) = 0;
        return param_2;
      }
      if (puVar3 == puVar9) break;
      puVar3 = (undefined8 *)puVar3[1];
    }
    puVar9 = puVar3;
  }
  local_48 = param_1 + 2;
  if (*(longlong *)(param_1 + 4) == 0x492492492492492) {
                    /* WARNING: Subroutine does not return */
    FUN_1805fa8b8("unordered_map/set too long");
  }
  local_40 = (undefined8 *)0x0;
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_58 = "tier0.dll:g_pMemAlloc";
    local_50 = 0x15;
    DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_58);
  }
  puVar3 = (undefined8 *)
           (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x38);
  local_40 = puVar3;
  FUN_18015b360(puVar3 + 2,param_3);
  *(undefined4 *)(puVar3 + 6) = *param_4;
  uVar1 = *(ulonglong *)(param_1 + 0xe);
  auVar13 = SUB1612(ZEXT816(0),4);
  if ((longlong)(*(longlong *)(param_1 + 4) + 1U) < 0) {
    auVar13 = (undefined1  [12])0x0;
  }
  fVar12 = (float)(*(longlong *)(param_1 + 4) + 1U);
  if (*param_1 < fVar12 / (float)uVar1) {
    auVar11._0_4_ = fVar12 / *param_1;
    auVar11._4_12_ = auVar13;
    auVar11 = vroundss_avx(ZEXT816(0),auVar11,2);
    fVar12 = auVar11._0_4_;
    lVar6 = 0;
    if ((9.223372e+18 <= fVar12) && (fVar12 = fVar12 - 9.223372e+18, fVar12 < 9.223372e+18)) {
      lVar6 = -0x8000000000000000;
    }
    uVar7 = 8;
    if (8 < (ulonglong)((longlong)fVar12 + lVar6)) {
      uVar7 = (longlong)fVar12 + lVar6;
    }
    uVar4 = uVar1;
    if ((uVar1 < uVar7) && ((0x1ff < uVar1 || (uVar4 = uVar1 * 8, uVar1 * 8 < uVar7)))) {
      uVar4 = uVar7;
    }
    FUN_1801b7e40(param_1,uVar4);
    puVar8 = *(undefined8 **)
              (*(longlong *)(param_1 + 6) + 8 + (*(ulonglong *)(param_1 + 0xc) & uVar10) * 0x10);
    puVar9 = *(undefined8 **)(param_1 + 2);
    if (puVar8 != *(undefined8 **)(param_1 + 2)) {
      puVar9 = *(undefined8 **)
                (*(longlong *)(param_1 + 6) + (*(ulonglong *)(param_1 + 0xc) & uVar10) * 0x10);
      uVar1 = puVar3[5];
      _Size = puVar3[4];
      while( true ) {
        puVar5 = puVar8 + 2;
        if (0xf < (ulonglong)puVar8[5]) {
          puVar5 = (undefined8 *)*puVar5;
        }
        _Buf1 = puVar3 + 2;
        if (0xf < uVar1) {
          _Buf1 = (undefined8 *)puVar3[2];
        }
        if ((_Size == puVar8[4]) &&
           ((_Size == 0 || (iVar2 = memcmp(_Buf1,puVar5,_Size), iVar2 == 0)))) {
          puVar9 = (undefined8 *)*puVar8;
          goto LAB_1801a8406;
        }
        if (puVar8 == puVar9) break;
        puVar8 = (undefined8 *)puVar8[1];
      }
      puVar9 = puVar8;
    }
  }
LAB_1801a8406:
  puVar8 = (undefined8 *)puVar9[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar3 = puVar9;
  puVar3[1] = puVar8;
  *puVar8 = puVar3;
  puVar9[1] = puVar3;
  uVar10 = *(ulonglong *)(param_1 + 0xc) & uVar10;
  lVar6 = *(longlong *)(param_1 + 6);
  puVar5 = *(undefined8 **)(lVar6 + uVar10 * 0x10);
  if (puVar5 == *(undefined8 **)(param_1 + 2)) {
    *(undefined8 **)(lVar6 + uVar10 * 0x10) = puVar3;
  }
  else {
    if (puVar5 == puVar9) {
      *(undefined8 **)(lVar6 + uVar10 * 0x10) = puVar3;
      goto LAB_1801a8452;
    }
    if (*(undefined8 **)(lVar6 + 8 + uVar10 * 0x10) != puVar8) goto LAB_1801a8452;
  }
  *(undefined8 **)(lVar6 + 8 + uVar10 * 0x10) = puVar3;
LAB_1801a8452:
  *param_2 = puVar3;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



