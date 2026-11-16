// FUN_1801a9080 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801a9080 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 * FUN_1801a9080(undefined8 param_1,undefined8 *param_2,byte *param_3,undefined4 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 auVar6 [16];
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  float fVar15;
  char *local_58;
  undefined8 local_50;
  undefined8 **local_48;
  undefined8 *local_40;
  
  uVar13 = (((((((((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_3[1]
                 ) * 0x100000001b3 ^ (ulonglong)param_3[2]) * 0x100000001b3 ^ (ulonglong)param_3[3])
               * 0x100000001b3 ^ (ulonglong)param_3[4]) * 0x100000001b3 ^ (ulonglong)param_3[5]) *
             0x100000001b3 ^ (ulonglong)param_3[6]) * 0x100000001b3 ^ (ulonglong)param_3[7]) *
           0x100000001b3;
  puVar1 = *(undefined8 **)(DAT_180bbe968 + 8 + (uVar13 & DAT_180bbe980) * 0x10);
  puVar14 = DAT_180bbe958;
  if (puVar1 != DAT_180bbe958) {
    lVar11 = puVar1[2];
    puVar14 = puVar1;
    while( true ) {
      if (*(longlong *)param_3 == lVar11) {
        *param_2 = puVar14;
        *(undefined1 *)(param_2 + 1) = 0;
        return param_2;
      }
      if (puVar14 == *(undefined8 **)(DAT_180bbe968 + (uVar13 & DAT_180bbe980) * 0x10)) break;
      puVar14 = (undefined8 *)puVar14[1];
      lVar11 = puVar14[2];
    }
  }
  if (DAT_180bbe960 == 0x49cd42e2049cd4) {
                    /* WARNING: Subroutine does not return */
    FUN_1805fa8b8("unordered_map/set too long");
  }
  local_48 = &DAT_180bbe958;
  local_40 = (undefined8 *)0x0;
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_58 = "tier0.dll:g_pMemAlloc";
    local_50 = 0x15;
    DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_58);
  }
  puVar7 = (undefined8 *)
           (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x378);
  puVar7[2] = *(undefined8 *)param_3;
  *(undefined4 *)(puVar7 + 3) = *param_4;
  *(undefined4 *)((longlong)puVar7 + 0x1c) = param_4[1];
  puVar7[4] = *(undefined8 *)(param_4 + 2);
  puVar7[5] = *(undefined8 *)(param_4 + 4);
  puVar7[6] = *(undefined8 *)(param_4 + 6);
  *(undefined1 *)(puVar7 + 7) = *(undefined1 *)(param_4 + 8);
  *(undefined1 *)((longlong)puVar7 + 0x39) = *(undefined1 *)((longlong)param_4 + 0x21);
  *(undefined1 *)((longlong)puVar7 + 0x3a) = *(undefined1 *)((longlong)param_4 + 0x22);
  *(undefined2 *)((longlong)puVar7 + 0x3c) = *(undefined2 *)(param_4 + 9);
  local_40 = puVar7;
  FUN_1801a4ee0(puVar7 + 8,param_4 + 10);
  lVar11 = 4;
  puVar1 = (undefined8 *)(param_4 + 0x46);
  puVar5 = puVar7 + 0x26;
  do {
    puVar9 = puVar5;
    puVar8 = puVar1;
    uVar2 = puVar8[1];
    *puVar9 = *puVar8;
    puVar9[1] = uVar2;
    uVar2 = puVar8[3];
    puVar9[2] = puVar8[2];
    puVar9[3] = uVar2;
    uVar2 = puVar8[5];
    puVar9[4] = puVar8[4];
    puVar9[5] = uVar2;
    uVar2 = puVar8[7];
    puVar9[6] = puVar8[6];
    puVar9[7] = uVar2;
    uVar2 = puVar8[9];
    puVar9[8] = puVar8[8];
    puVar9[9] = uVar2;
    uVar2 = puVar8[0xb];
    puVar9[10] = puVar8[10];
    puVar9[0xb] = uVar2;
    uVar2 = puVar8[0xd];
    puVar9[0xc] = puVar8[0xc];
    puVar9[0xd] = uVar2;
    uVar2 = puVar8[0xf];
    puVar9[0xe] = puVar8[0xe];
    puVar9[0xf] = uVar2;
    lVar11 = lVar11 + -1;
    puVar1 = puVar8 + 0x10;
    puVar5 = puVar9 + 0x10;
  } while (lVar11 != 0);
  uVar2 = puVar8[0x11];
  puVar9[0x10] = puVar8[0x10];
  puVar9[0x11] = uVar2;
  puVar9[0x12] = puVar8[0x12];
  uVar2 = *(undefined8 *)(param_4 + 0xd0);
  *(undefined8 *)(param_4 + 0xd0) = 0;
  uVar3 = *(undefined8 *)(param_4 + 0xce);
  *(undefined8 *)(param_4 + 0xce) = 0;
  uVar4 = *(undefined8 *)(param_4 + 0xcc);
  *(undefined8 *)(param_4 + 0xcc) = 0;
  puVar7[0x69] = uVar4;
  puVar7[0x6a] = uVar3;
  puVar7[0x6b] = uVar2;
  uVar2 = *(undefined8 *)(param_4 + 0xd4);
  puVar7[0x6c] = *(undefined8 *)(param_4 + 0xd2);
  puVar7[0x6d] = uVar2;
  puVar7[0x6e] = *(undefined8 *)(param_4 + 0xd6);
  if (DAT_180bbe950 < (float)(DAT_180bbe960 + 1) / (float)DAT_180bbe988) {
    auVar6 = vroundss_avx(ZEXT816(0),ZEXT416((uint)((float)(DAT_180bbe960 + 1) / DAT_180bbe950)),2);
    fVar15 = auVar6._0_4_;
    lVar11 = 0;
    if ((9.223372e+18 <= fVar15) && (fVar15 = fVar15 - 9.223372e+18, fVar15 < 9.223372e+18)) {
      lVar11 = -0x8000000000000000;
    }
    uVar10 = 8;
    if (8 < (ulonglong)((longlong)fVar15 + lVar11)) {
      uVar10 = (longlong)fVar15 + lVar11;
    }
    uVar12 = DAT_180bbe988;
    if ((DAT_180bbe988 < uVar10) &&
       ((0x1ff < DAT_180bbe988 || (uVar12 = DAT_180bbe988 * 8, DAT_180bbe988 * 8 < uVar10)))) {
      uVar12 = uVar10;
    }
    FUN_1801b7a90(0x5f000000,uVar12);
    puVar1 = *(undefined8 **)(DAT_180bbe968 + 8 + (DAT_180bbe980 & uVar13) * 0x10);
    puVar14 = DAT_180bbe958;
    if (puVar1 != DAT_180bbe958) {
      lVar11 = puVar1[2];
      puVar14 = puVar1;
      while (puVar7[2] != lVar11) {
        if (puVar14 == *(undefined8 **)(DAT_180bbe968 + (DAT_180bbe980 & uVar13) * 0x10))
        goto LAB_1801a9451;
        puVar14 = (undefined8 *)puVar14[1];
        lVar11 = puVar14[2];
      }
      puVar14 = (undefined8 *)*puVar14;
    }
  }
LAB_1801a9451:
  puVar1 = (undefined8 *)puVar14[1];
  DAT_180bbe960 = DAT_180bbe960 + 1;
  *puVar7 = puVar14;
  puVar7[1] = puVar1;
  *puVar1 = puVar7;
  puVar14[1] = puVar7;
  lVar11 = DAT_180bbe968;
  uVar13 = DAT_180bbe980 & uVar13;
  puVar5 = *(undefined8 **)(DAT_180bbe968 + uVar13 * 0x10);
  if (puVar5 == DAT_180bbe958) {
    *(undefined8 **)(DAT_180bbe968 + uVar13 * 0x10) = puVar7;
  }
  else {
    if (puVar5 == puVar14) {
      *(undefined8 **)(DAT_180bbe968 + uVar13 * 0x10) = puVar7;
      goto LAB_1801a94b0;
    }
    if (*(undefined8 **)(DAT_180bbe968 + 8 + uVar13 * 0x10) != puVar1) goto LAB_1801a94b0;
  }
  *(undefined8 **)(lVar11 + 8 + uVar13 * 0x10) = puVar7;
LAB_1801a94b0:
  *param_2 = puVar7;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



