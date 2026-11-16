// FUN_1801a5ff0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801a5ff0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

longlong * FUN_1801a5ff0(float *param_1,longlong *param_2,undefined8 *param_3,undefined4 *param_4)

{
  float *pfVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  bool bVar13;
  undefined1 auVar14 [16];
  float fVar15;
  undefined1 auVar16 [12];
  char *local_68;
  undefined8 local_60;
  float *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  longlong local_40;
  
  puVar4 = param_3;
  if (7 < (ulonglong)param_3[3]) {
    puVar4 = (undefined8 *)*param_3;
  }
  uVar12 = 0xcbf29ce484222325;
  uVar5 = 0;
  if (param_3[2] * 2 != 0) {
    do {
      uVar12 = (uVar12 ^ *(byte *)((longlong)puVar4 + uVar5)) * 0x100000001b3;
      uVar5 = uVar5 + 1;
    } while (uVar5 < (ulonglong)(param_3[2] * 2));
  }
  FUN_1801ad830(param_1,&local_48,param_3,uVar12);
  if (local_40 != 0) {
    *param_2 = local_40;
    *(undefined1 *)(param_2 + 1) = 0;
    return param_2;
  }
  pfVar1 = param_1 + 2;
  if (*(longlong *)(param_1 + 4) == 0x492492492492492) {
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
  puVar4 = (undefined8 *)
           (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x38);
  local_50 = puVar4;
  FUN_1800f5370(puVar4 + 2,param_3);
  *(undefined4 *)(puVar4 + 6) = *param_4;
  uVar5 = *(ulonglong *)(param_1 + 0xe);
  auVar16 = SUB1612(ZEXT816(0),4);
  if ((longlong)(*(longlong *)(param_1 + 4) + 1U) < 0) {
    auVar16 = (undefined1  [12])0x0;
  }
  fVar15 = (float)(*(longlong *)(param_1 + 4) + 1U);
  if (*param_1 < fVar15 / (float)uVar5) {
    auVar14._0_4_ = fVar15 / *param_1;
    auVar14._4_12_ = auVar16;
    auVar14 = vroundss_avx(ZEXT816(0),auVar14,2);
    fVar15 = auVar14._0_4_;
    lVar6 = 0;
    if ((9.223372e+18 <= fVar15) && (fVar15 = fVar15 - 9.223372e+18, fVar15 < 9.223372e+18)) {
      lVar6 = -0x8000000000000000;
    }
    uVar7 = 8;
    if (8 < (ulonglong)((longlong)fVar15 + lVar6)) {
      uVar7 = (longlong)fVar15 + lVar6;
    }
    uVar9 = uVar5;
    if ((uVar5 < uVar7) && ((0x1ff < uVar5 || (uVar9 = uVar5 * 8, uVar5 * 8 < uVar7)))) {
      uVar9 = uVar7;
    }
    FUN_1801b8820(param_1,uVar9);
    puVar11 = *(undefined8 **)
               (*(longlong *)(param_1 + 6) + 8 + (*(ulonglong *)(param_1 + 0xc) & uVar12) * 0x10);
    local_48 = *(undefined8 **)pfVar1;
    if (puVar11 != *(undefined8 **)pfVar1) {
      puVar2 = *(undefined8 **)
                (*(longlong *)(param_1 + 6) + (*(ulonglong *)(param_1 + 0xc) & uVar12) * 0x10);
      while( true ) {
        plVar10 = puVar11 + 2;
        if (7 < (ulonglong)puVar11[5]) {
          plVar10 = (longlong *)*plVar10;
        }
        puVar8 = puVar4 + 2;
        if (7 < (ulonglong)puVar4[5]) {
          puVar8 = (undefined8 *)puVar4[2];
        }
        if (puVar4[4] == puVar11[4]) {
          if (puVar4[4] == 0) {
            bVar13 = false;
          }
          else {
            iVar3 = FUN_1801594c0(puVar8,plVar10);
            bVar13 = iVar3 != 0;
          }
        }
        else {
          bVar13 = true;
        }
        if (!bVar13) {
          local_48 = (undefined8 *)*puVar11;
          goto LAB_1801a6261;
        }
        if (puVar11 == puVar2) break;
        puVar11 = (undefined8 *)puVar11[1];
      }
      local_48 = puVar11;
    }
  }
LAB_1801a6261:
  puVar11 = (undefined8 *)local_48[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar4 = local_48;
  puVar4[1] = puVar11;
  *puVar11 = puVar4;
  local_48[1] = puVar4;
  uVar12 = *(ulonglong *)(param_1 + 0xc) & uVar12;
  lVar6 = *(longlong *)(param_1 + 6);
  puVar2 = *(undefined8 **)(lVar6 + uVar12 * 0x10);
  if (puVar2 == *(undefined8 **)pfVar1) {
    *(undefined8 **)(lVar6 + uVar12 * 0x10) = puVar4;
  }
  else {
    if (puVar2 == local_48) {
      *(undefined8 **)(lVar6 + uVar12 * 0x10) = puVar4;
      goto LAB_1801a62ac;
    }
    if (*(undefined8 **)(lVar6 + 8 + uVar12 * 0x10) != puVar11) goto LAB_1801a62ac;
  }
  *(undefined8 **)(lVar6 + 8 + uVar12 * 0x10) = puVar4;
LAB_1801a62ac:
  *param_2 = (longlong)puVar4;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



