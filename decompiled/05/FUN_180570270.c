// FUN_180570270 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180570270 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

longlong * FUN_180570270(float *param_1,longlong *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  void *_Buf1;
  size_t _Size;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  undefined1 auVar14 [16];
  float fVar15;
  undefined1 auVar16 [12];
  undefined8 *local_58;
  longlong lStack_50;
  char *local_48;
  undefined8 local_40;
  
  local_58 = (undefined8 *)*param_3;
  lStack_50 = param_3[1];
  uVar13 = 0xcbf29ce484222325;
  uVar9 = 0;
  if (param_3[1] != 0) {
    do {
      uVar13 = (uVar13 ^ *(byte *)(uVar9 + (longlong)local_58)) * 0x100000001b3;
      uVar9 = uVar9 + 1;
    } while (uVar9 < (ulonglong)param_3[1]);
  }
  FUN_18056f3c0(param_1,&local_58,param_3,uVar13);
  if (lStack_50 != 0) {
    *param_2 = lStack_50;
    *(undefined1 *)(param_2 + 1) = 0;
    return param_2;
  }
  if (*(longlong *)(param_1 + 4) == 0x555555555555555) {
                    /* WARNING: Subroutine does not return */
    FUN_1805fa8b8("unordered_map/set too long");
  }
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_48 = "tier0.dll:g_pMemAlloc";
    local_40 = 0x15;
    DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_48);
  }
  puVar6 = (undefined8 *)
           (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x30);
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  puVar6[2] = *param_3;
  puVar6[3] = uVar2;
  puVar6[4] = uVar3;
  puVar6[5] = uVar4;
  uVar9 = *(ulonglong *)(param_1 + 0xe);
  auVar16 = SUB1612(ZEXT816(0),4);
  if ((longlong)(*(longlong *)(param_1 + 4) + 1U) < 0) {
    auVar16 = (undefined1  [12])0x0;
  }
  fVar15 = (float)(*(longlong *)(param_1 + 4) + 1U);
  if (fVar15 / (float)uVar9 <= *param_1) {
    puVar11 = local_58;
  }
  else {
    auVar14._0_4_ = fVar15 / *param_1;
    auVar14._4_12_ = auVar16;
    auVar14 = vroundss_avx(ZEXT816(0),auVar14,2);
    fVar15 = auVar14._0_4_;
    lVar7 = 0;
    if ((9.223372e+18 <= fVar15) && (fVar15 = fVar15 - 9.223372e+18, fVar15 < 9.223372e+18)) {
      lVar7 = -0x8000000000000000;
    }
    uVar8 = 8;
    if (8 < (ulonglong)((longlong)fVar15 + lVar7)) {
      uVar8 = (longlong)fVar15 + lVar7;
    }
    uVar10 = uVar9;
    if ((uVar9 < uVar8) && ((0x1ff < uVar9 || (uVar10 = uVar9 * 8, uVar9 * 8 < uVar8)))) {
      uVar10 = uVar8;
    }
    FUN_180572260(param_1,uVar10);
    puVar12 = *(undefined8 **)
               (*(longlong *)(param_1 + 6) + 8 + (*(ulonglong *)(param_1 + 0xc) & uVar13) * 0x10);
    puVar11 = *(undefined8 **)(param_1 + 2);
    if (puVar12 != *(undefined8 **)(param_1 + 2)) {
      puVar11 = *(undefined8 **)
                 (*(longlong *)(param_1 + 6) + (*(ulonglong *)(param_1 + 0xc) & uVar13) * 0x10);
      _Buf1 = (void *)puVar6[2];
      _Size = puVar6[3];
      while( true ) {
        if ((_Size == puVar12[3]) &&
           ((_Size == 0 || (iVar5 = memcmp(_Buf1,(void *)puVar12[2],_Size), iVar5 == 0)))) {
          puVar11 = (undefined8 *)*puVar12;
          goto LAB_1805704d0;
        }
        if (puVar12 == puVar11) break;
        puVar12 = (undefined8 *)puVar12[1];
      }
      puVar11 = puVar12;
    }
  }
LAB_1805704d0:
  puVar12 = (undefined8 *)puVar11[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar6 = puVar11;
  puVar6[1] = puVar12;
  *puVar12 = puVar6;
  puVar11[1] = puVar6;
  uVar13 = *(ulonglong *)(param_1 + 0xc) & uVar13;
  lVar7 = *(longlong *)(param_1 + 6);
  puVar1 = *(undefined8 **)(lVar7 + uVar13 * 0x10);
  if (puVar1 == *(undefined8 **)(param_1 + 2)) {
    *(undefined8 **)(lVar7 + uVar13 * 0x10) = puVar6;
  }
  else {
    if (puVar1 == puVar11) {
      *(undefined8 **)(lVar7 + uVar13 * 0x10) = puVar6;
      goto LAB_18057051a;
    }
    if (*(undefined8 **)(lVar7 + 8 + uVar13 * 0x10) != puVar12) goto LAB_18057051a;
  }
  *(undefined8 **)(lVar7 + 8 + uVar13 * 0x10) = puVar6;
LAB_18057051a:
  *param_2 = (longlong)puVar6;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



