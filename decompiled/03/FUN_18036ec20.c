// FUN_18036ec20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18036ec20 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

longlong * FUN_18036ec20(float *param_1,longlong *param_2,longlong *param_3,undefined8 *param_4)

{
  size_t _Size;
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  char *_Buf2;
  char *pcVar8;
  ulonglong uVar9;
  char *pcVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined1 auVar13 [16];
  float fVar14;
  undefined1 auVar15 [12];
  char *local_58;
  longlong local_50;
  float *local_48;
  undefined8 *local_40;
  
  local_48 = param_1 + 2;
  uVar9 = 0;
  local_40 = (undefined8 *)0x0;
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_58 = "tier0.dll:g_pMemAlloc";
    local_50 = 0x15;
    DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_58);
  }
  puVar3 = (undefined8 *)
           (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x40);
  lVar5 = *param_3;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  lVar12 = -1;
  do {
    lVar12 = lVar12 + 1;
  } while (*(char *)(lVar5 + lVar12) != '\0');
  local_40 = puVar3;
  FUN_18015ba30(puVar3 + 2);
  uVar1 = param_4[1];
  puVar3[6] = *param_4;
  puVar3[7] = uVar1;
  puVar6 = puVar3 + 2;
  if (0xf < (ulonglong)puVar3[5]) {
    puVar6 = (undefined8 *)puVar3[2];
  }
  uVar11 = 0xcbf29ce484222325;
  if (puVar3[4] != 0) {
    do {
      uVar11 = (uVar11 ^ *(byte *)((longlong)puVar6 + uVar9)) * 0x100000001b3;
      uVar9 = uVar9 + 1;
    } while (uVar9 < (ulonglong)puVar3[4]);
  }
  FUN_180177b00(param_1,&local_58,puVar3 + 2,uVar11);
  if (local_50 != 0) {
    *param_2 = local_50;
    *(undefined1 *)(param_2 + 1) = 0;
    if (puVar3 == (undefined8 *)0x0) {
      return param_2;
    }
    FUN_18015c010(puVar3 + 2);
    FUN_1804547d0(puVar3,0x40);
    return param_2;
  }
  if (*(longlong *)(param_1 + 4) == 0x3ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_1805fa8b8("unordered_map/set too long");
  }
  uVar9 = *(ulonglong *)(param_1 + 0xe);
  uVar4 = *(longlong *)(param_1 + 4) + 1;
  auVar15 = SUB1612(ZEXT816(0),4);
  if ((longlong)uVar4 < 0) {
    auVar15 = (undefined1  [12])0x0;
  }
  fVar14 = (float)uVar4;
  if (fVar14 / (float)uVar9 <= *param_1) {
    pcVar8 = local_58;
  }
  else {
    auVar13._0_4_ = fVar14 / *param_1;
    auVar13._4_12_ = auVar15;
    auVar13 = vroundss_avx(ZEXT816(0),auVar13,2);
    fVar14 = auVar13._0_4_;
    lVar5 = 0;
    if ((9.223372e+18 <= fVar14) && (fVar14 = fVar14 - 9.223372e+18, fVar14 < 9.223372e+18)) {
      lVar5 = -0x8000000000000000;
    }
    uVar4 = 8;
    if (8 < (ulonglong)((longlong)fVar14 + lVar5)) {
      uVar4 = (longlong)fVar14 + lVar5;
    }
    uVar7 = uVar9;
    if ((uVar9 < uVar4) && ((0x1ff < uVar9 || (uVar7 = uVar9 * 8, uVar9 * 8 < uVar4)))) {
      uVar7 = uVar4;
    }
    FUN_1801b7e40(param_1,uVar7);
    pcVar10 = *(char **)(*(longlong *)(param_1 + 6) + 8 +
                        (*(ulonglong *)(param_1 + 0xc) & uVar11) * 0x10);
    pcVar8 = *(char **)(param_1 + 2);
    if (pcVar10 != *(char **)(param_1 + 2)) {
      pcVar8 = *(char **)(*(longlong *)(param_1 + 6) +
                         (*(ulonglong *)(param_1 + 0xc) & uVar11) * 0x10);
      _Size = puVar3[4];
      while( true ) {
        _Buf2 = pcVar10 + 0x10;
        if (0xf < *(ulonglong *)(pcVar10 + 0x28)) {
          _Buf2 = *(char **)_Buf2;
        }
        puVar6 = puVar3 + 2;
        if (0xf < (ulonglong)puVar3[5]) {
          puVar6 = (undefined8 *)puVar3[2];
        }
        if ((_Size == *(size_t *)(pcVar10 + 0x20)) &&
           ((_Size == 0 || (iVar2 = memcmp(puVar6,_Buf2,_Size), iVar2 == 0)))) {
          pcVar8 = *(char **)pcVar10;
          goto LAB_18036eece;
        }
        if (pcVar10 == pcVar8) break;
        pcVar10 = *(char **)(pcVar10 + 8);
      }
      pcVar8 = pcVar10;
    }
  }
LAB_18036eece:
  puVar6 = *(undefined8 **)(pcVar8 + 8);
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar3 = pcVar8;
  puVar3[1] = puVar6;
  *puVar6 = puVar3;
  *(undefined8 **)(pcVar8 + 8) = puVar3;
  uVar11 = *(ulonglong *)(param_1 + 0xc) & uVar11;
  lVar5 = *(longlong *)(param_1 + 6);
  pcVar10 = *(char **)(lVar5 + uVar11 * 0x10);
  if (pcVar10 == *(char **)(param_1 + 2)) {
    *(undefined8 **)(lVar5 + uVar11 * 0x10) = puVar3;
  }
  else {
    if (pcVar10 == pcVar8) {
      *(undefined8 **)(lVar5 + uVar11 * 0x10) = puVar3;
      goto LAB_18036ef19;
    }
    if (*(undefined8 **)(lVar5 + 8 + uVar11 * 0x10) != puVar6) goto LAB_18036ef19;
  }
  *(undefined8 **)(lVar5 + 8 + uVar11 * 0x10) = puVar3;
LAB_18036ef19:
  *param_2 = (longlong)puVar3;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



