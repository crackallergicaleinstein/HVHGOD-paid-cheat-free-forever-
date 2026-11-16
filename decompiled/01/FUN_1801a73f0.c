// FUN_1801a73f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801a73f0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 * FUN_1801a73f0(float *param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  size_t _Size;
  int iVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 *_Buf1;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  undefined1 auVar14 [16];
  float fVar15;
  undefined1 auVar16 [12];
  char *local_68;
  undefined8 local_60;
  float *local_58;
  undefined8 *local_50;
  
  uVar1 = param_3[2];
  uVar10 = param_3[3];
  puVar6 = param_3;
  if (0xf < uVar10) {
    puVar6 = (undefined8 *)*param_3;
  }
  uVar13 = 0xcbf29ce484222325;
  uVar7 = 0;
  if (uVar1 != 0) {
    do {
      uVar13 = (uVar13 ^ *(byte *)((longlong)puVar6 + uVar7)) * 0x100000001b3;
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar1);
  }
  puVar6 = *(undefined8 **)
            (*(longlong *)(param_1 + 6) + 8 + (*(ulonglong *)(param_1 + 0xc) & uVar13) * 0x10);
  puVar12 = *(undefined8 **)(param_1 + 2);
  if (puVar6 != *(undefined8 **)(param_1 + 2)) {
    puVar12 = *(undefined8 **)
               (*(longlong *)(param_1 + 6) + (*(ulonglong *)(param_1 + 0xc) & uVar13) * 0x10);
    while( true ) {
      puVar11 = puVar6 + 2;
      if (0xf < (ulonglong)puVar6[5]) {
        puVar11 = (undefined8 *)*puVar11;
      }
      puVar8 = param_3;
      if (0xf < uVar10) {
        puVar8 = (undefined8 *)*param_3;
      }
      if ((uVar1 == puVar6[4]) &&
         ((uVar1 == 0 || (iVar5 = memcmp(puVar8,puVar11,uVar1), iVar5 == 0)))) {
        *param_2 = puVar6;
        *(undefined1 *)(param_2 + 1) = 0;
        return param_2;
      }
      if (puVar6 == puVar12) break;
      puVar6 = (undefined8 *)puVar6[1];
    }
    puVar12 = puVar6;
  }
  local_58 = param_1 + 2;
  if (*(longlong *)(param_1 + 4) == 0xb21642c8590b21) {
                    /* WARNING: Subroutine does not return */
    FUN_1805fa8b8("unordered_map/set too long");
  }
  local_50 = (undefined8 *)0x0;
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_68 = "tier0.dll:g_pMemAlloc";
    local_60 = 0x15;
    DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_68);
  }
  puVar6 = (undefined8 *)
           (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x170);
  local_50 = puVar6;
  FUN_18015b360(puVar6 + 2,param_3);
  FUN_1801b90e0(puVar6 + 6,param_4);
  *(undefined1 (*) [16])(puVar6 + 0x21) = (undefined1  [16])0x0;
  puVar6[0x23] = 0;
  puVar6[0x24] = 0;
  uVar2 = *(undefined8 *)(param_4 + 0xe0);
  uVar3 = *(undefined8 *)(param_4 + 0xe8);
  uVar4 = *(undefined8 *)(param_4 + 0xf0);
  puVar6[0x21] = *(undefined8 *)(param_4 + 0xd8);
  puVar6[0x22] = uVar2;
  puVar6[0x23] = uVar3;
  puVar6[0x24] = uVar4;
  *(undefined8 *)(param_4 + 0xf0) = 0xf;
  *(undefined1 *)(param_4 + 0xd8) = 0;
  *(undefined8 *)(param_4 + 0xe8) = 0;
  *(undefined1 (*) [16])(puVar6 + 0x25) = (undefined1  [16])0x0;
  puVar6[0x27] = 0;
  puVar6[0x28] = 0;
  uVar2 = *(undefined8 *)(param_4 + 0x100);
  uVar3 = *(undefined8 *)(param_4 + 0x108);
  uVar4 = *(undefined8 *)(param_4 + 0x110);
  puVar6[0x25] = *(undefined8 *)(param_4 + 0xf8);
  puVar6[0x26] = uVar2;
  puVar6[0x27] = uVar3;
  puVar6[0x28] = uVar4;
  *(undefined1 *)(param_4 + 0xf8) = 0;
  *(undefined8 *)(param_4 + 0x108) = 0;
  *(undefined8 *)(param_4 + 0x110) = 0xf;
  puVar6[0x29] = *(undefined8 *)(param_4 + 0x118);
  uVar2 = *(undefined8 *)(param_4 + 0x130);
  *(undefined8 *)(param_4 + 0x130) = 0;
  uVar3 = *(undefined8 *)(param_4 + 0x128);
  *(undefined8 *)(param_4 + 0x128) = 0;
  uVar4 = *(undefined8 *)(param_4 + 0x120);
  *(undefined8 *)(param_4 + 0x120) = 0;
  puVar6[0x2a] = uVar4;
  puVar6[0x2b] = uVar3;
  puVar6[0x2c] = uVar2;
  puVar6[0x2d] = *(undefined8 *)(param_4 + 0x138);
  uVar1 = *(ulonglong *)(param_1 + 0xe);
  auVar16 = SUB1612(ZEXT816(0),4);
  if ((longlong)(*(longlong *)(param_1 + 4) + 1U) < 0) {
    auVar16 = (undefined1  [12])0x0;
  }
  fVar15 = (float)(*(longlong *)(param_1 + 4) + 1U);
  if (*param_1 < fVar15 / (float)uVar1) {
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
    uVar7 = uVar1;
    if ((uVar1 < uVar10) && ((0x1ff < uVar1 || (uVar7 = uVar1 * 8, uVar1 * 8 < uVar10)))) {
      uVar7 = uVar10;
    }
    FUN_1801b82c0(param_1,uVar7);
    puVar11 = *(undefined8 **)
               (*(longlong *)(param_1 + 6) + 8 + (*(ulonglong *)(param_1 + 0xc) & uVar13) * 0x10);
    puVar12 = *(undefined8 **)(param_1 + 2);
    if (puVar11 != *(undefined8 **)(param_1 + 2)) {
      puVar12 = *(undefined8 **)
                 (*(longlong *)(param_1 + 6) + (*(ulonglong *)(param_1 + 0xc) & uVar13) * 0x10);
      uVar1 = puVar6[5];
      _Size = puVar6[4];
      while( true ) {
        puVar8 = puVar11 + 2;
        if (0xf < (ulonglong)puVar11[5]) {
          puVar8 = (undefined8 *)*puVar8;
        }
        _Buf1 = puVar6 + 2;
        if (0xf < uVar1) {
          _Buf1 = (undefined8 *)puVar6[2];
        }
        if ((_Size == puVar11[4]) &&
           ((_Size == 0 || (iVar5 = memcmp(_Buf1,puVar8,_Size), iVar5 == 0)))) break;
        if (puVar11 == puVar12) goto LAB_1801a77b8;
        puVar11 = (undefined8 *)puVar11[1];
      }
      puVar11 = (undefined8 *)*puVar11;
LAB_1801a77b8:
      puVar12 = puVar11;
    }
  }
  puVar11 = (undefined8 *)puVar12[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar6 = puVar12;
  puVar6[1] = puVar11;
  *puVar11 = puVar6;
  puVar12[1] = puVar6;
  uVar13 = *(ulonglong *)(param_1 + 0xc) & uVar13;
  lVar9 = *(longlong *)(param_1 + 6);
  puVar8 = *(undefined8 **)(lVar9 + uVar13 * 0x10);
  if (puVar8 == *(undefined8 **)(param_1 + 2)) {
    *(undefined8 **)(lVar9 + uVar13 * 0x10) = puVar6;
  }
  else {
    if (puVar8 == puVar12) {
      *(undefined8 **)(lVar9 + uVar13 * 0x10) = puVar6;
      goto LAB_1801a780a;
    }
    if (*(undefined8 **)(lVar9 + 8 + uVar13 * 0x10) != puVar11) goto LAB_1801a780a;
  }
  *(undefined8 **)(lVar9 + 8 + uVar13 * 0x10) = puVar6;
LAB_1801a780a:
  *param_2 = puVar6;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



