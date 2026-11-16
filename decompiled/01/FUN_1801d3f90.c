// FUN_1801d3f90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801d3f90 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

longlong * FUN_1801d3f90(float *param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4)

{
  float *pfVar1;
  undefined8 *puVar2;
  size_t _Size;
  int iVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 *_Buf1;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined8 *_Buf2;
  ulonglong uVar10;
  undefined1 auVar11 [16];
  float fVar12;
  undefined1 auVar13 [12];
  char *local_78;
  undefined8 local_70;
  float *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  longlong local_50;
  
  puVar8 = param_3;
  if (0xf < (ulonglong)param_3[3]) {
    puVar8 = (undefined8 *)*param_3;
  }
  uVar10 = 0xcbf29ce484222325;
  uVar5 = 0;
  if (param_3[2] != 0) {
    do {
      uVar10 = (uVar10 ^ *(byte *)((longlong)puVar8 + uVar5)) * 0x100000001b3;
      uVar5 = uVar5 + 1;
    } while (uVar5 < (ulonglong)param_3[2]);
  }
  FUN_180177b00(param_1,&local_58,param_3,uVar10);
  if (local_50 != 0) {
    *param_2 = local_50;
    *(undefined1 *)(param_2 + 1) = 0;
    return param_2;
  }
  pfVar1 = param_1 + 2;
  if (*(longlong *)(param_1 + 4) == 0x38e38e38e38e38e) {
                    /* WARNING: Subroutine does not return */
    FUN_1805fa8b8("unordered_map/set too long");
  }
  local_60 = (undefined8 *)0x0;
  local_68 = pfVar1;
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_78 = "tier0.dll:g_pMemAlloc";
    local_70 = 0x15;
    DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_78);
  }
  puVar4 = (undefined8 *)
           (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x48);
  local_60 = puVar4;
  FUN_18015b360(puVar4 + 2,param_3);
  puVar8 = puVar4 + 6;
  *puVar8 = 0;
  if (puVar8 != param_4) {
    *puVar8 = *param_4;
    *param_4 = 0;
  }
  *(undefined4 *)(puVar4 + 7) = *(undefined4 *)(param_4 + 1);
  *(undefined4 *)((longlong)puVar4 + 0x3c) = *(undefined4 *)((longlong)param_4 + 0xc);
  *(undefined1 *)(puVar4 + 8) = *(undefined1 *)(param_4 + 2);
  uVar5 = *(ulonglong *)(param_1 + 0xe);
  auVar13 = SUB1612(ZEXT816(0),4);
  if ((longlong)(*(longlong *)(param_1 + 4) + 1U) < 0) {
    auVar13 = (undefined1  [12])0x0;
  }
  fVar12 = (float)(*(longlong *)(param_1 + 4) + 1U);
  if (*param_1 < fVar12 / (float)uVar5) {
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
    uVar9 = uVar5;
    if ((uVar5 < uVar7) && ((0x1ff < uVar5 || (uVar9 = uVar5 * 8, uVar5 * 8 < uVar7)))) {
      uVar9 = uVar7;
    }
    FUN_18017a4d0(param_1,uVar9);
    puVar8 = *(undefined8 **)
              (*(longlong *)(param_1 + 6) + 8 + (*(ulonglong *)(param_1 + 0xc) & uVar10) * 0x10);
    local_58 = *(undefined8 **)pfVar1;
    if (puVar8 != *(undefined8 **)pfVar1) {
      puVar2 = *(undefined8 **)
                (*(longlong *)(param_1 + 6) + (*(ulonglong *)(param_1 + 0xc) & uVar10) * 0x10);
      _Size = puVar4[4];
      while( true ) {
        _Buf2 = puVar8 + 2;
        if (0xf < (ulonglong)puVar8[5]) {
          _Buf2 = (undefined8 *)*_Buf2;
        }
        _Buf1 = puVar4 + 2;
        if (0xf < (ulonglong)puVar4[5]) {
          _Buf1 = (undefined8 *)puVar4[2];
        }
        if ((_Size == puVar8[4]) &&
           ((_Size == 0 || (iVar3 = memcmp(_Buf1,_Buf2,_Size), iVar3 == 0)))) {
          local_58 = (undefined8 *)*puVar8;
          goto LAB_1801d4226;
        }
        if (puVar8 == puVar2) break;
        puVar8 = (undefined8 *)puVar8[1];
      }
      local_58 = puVar8;
    }
  }
LAB_1801d4226:
  puVar8 = (undefined8 *)local_58[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar4 = local_58;
  puVar4[1] = puVar8;
  *puVar8 = puVar4;
  local_58[1] = puVar4;
  uVar10 = *(ulonglong *)(param_1 + 0xc) & uVar10;
  lVar6 = *(longlong *)(param_1 + 6);
  puVar2 = *(undefined8 **)(lVar6 + uVar10 * 0x10);
  if (puVar2 == *(undefined8 **)(param_1 + 2)) {
    *(undefined8 **)(lVar6 + uVar10 * 0x10) = puVar4;
  }
  else {
    if (puVar2 == local_58) {
      *(undefined8 **)(lVar6 + uVar10 * 0x10) = puVar4;
      goto LAB_1801d4271;
    }
    if (*(undefined8 **)(lVar6 + 8 + uVar10 * 0x10) != puVar8) goto LAB_1801d4271;
  }
  *(undefined8 **)(lVar6 + 8 + uVar10 * 0x10) = puVar4;
LAB_1801d4271:
  *param_2 = (longlong)puVar4;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



