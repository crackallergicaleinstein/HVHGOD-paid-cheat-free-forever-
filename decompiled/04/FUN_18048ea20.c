// FUN_18048ea20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18048ea20 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18048ea20(longlong *param_1,int param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined1 *puVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  undefined8 ****ppppuVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined1 uVar13;
  longlong lVar14;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 ****local_c0 [3];
  ulonglong local_a8;
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined1 local_80 [32];
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_e8;
  uVar7 = 0;
  if ((-1 < param_2) && (param_2 < (int)(param_1[1] - *param_1 >> 3))) {
    puVar8 = *(undefined8 **)(*param_1 + (longlong)param_2 * 8);
    local_60 = (undefined1 *)0x0;
    puStack_58 = (undefined1 *)0x0;
    local_50 = (undefined1 *)0x0;
    uVar12 = 0xff;
    if ((ulonglong)puVar8[2] < 0xff) {
      uVar12 = puVar8[2] & 0xffff;
    }
    local_c8 = puVar8;
    puVar1 = (undefined1 *)FUN_18015bca0(1);
    *puVar1 = (char)uVar12;
    puVar3 = puVar1;
    puVar5 = local_60;
    puVar9 = (undefined1 *)-(longlong)local_60;
    if (puStack_58 != (undefined1 *)0x0) {
      FUN_18063aed0(puVar1,local_60,(undefined1 *)-(longlong)local_60);
      puVar3 = puVar1 + 1;
      puVar5 = (undefined1 *)0x0;
      puVar9 = puStack_58;
    }
    FUN_18063aed0(puVar3,puVar5,puVar9);
    FUN_1801413a0(&local_60,puVar1,1);
    puVar3 = puStack_58;
    uVar13 = (undefined1)(uVar12 >> 8);
    if (puStack_58 == local_50) {
      lVar14 = (longlong)puStack_58 - (longlong)local_60;
      if (lVar14 == 0x7fffffffffffffff) {
LAB_18048ed9f:
                    /* WARNING: Subroutine does not return */
        FUN_1801136f0();
      }
      uVar4 = (longlong)local_50 - (longlong)local_60;
      if (0x7fffffffffffffff - (uVar4 >> 1) < uVar4) {
        uVar4 = 0x7fffffffffffffff;
      }
      else {
        uVar4 = uVar4 + (uVar4 >> 1);
        if (uVar4 < lVar14 + 1U) {
          uVar4 = lVar14 + 1U;
        }
      }
      lVar2 = FUN_18015bca0(uVar4);
      *(undefined1 *)(lVar2 + lVar14) = uVar13;
      if (puVar3 == puStack_58) {
        lVar10 = (longlong)puStack_58 - (longlong)local_60;
        lVar11 = lVar2;
        puVar3 = local_60;
      }
      else {
        FUN_18063aed0(lVar2,local_60,(longlong)puVar3 - (longlong)local_60);
        lVar10 = (longlong)puStack_58 - (longlong)puVar3;
        lVar11 = lVar14 + 1 + lVar2;
      }
      FUN_18063aed0(lVar11,puVar3,lVar10);
      FUN_1801413a0(&local_60,lVar2,lVar14 + 1,uVar4);
      puVar8 = local_c8;
    }
    else {
      *puStack_58 = uVar13;
      puStack_58 = puStack_58 + 1;
    }
    if (0xf < (ulonglong)puVar8[3]) {
      puVar8 = (undefined8 *)*puVar8;
    }
    FUN_1801adc40(&local_60,puStack_58,puVar8,uVar12);
    do {
      puVar3 = puStack_58;
      uVar13 = (undefined1)(0x69d8 >> (uVar7 & 0x1f));
      if (puStack_58 == local_50) {
        lVar14 = (longlong)puStack_58 - (longlong)local_60;
        if (lVar14 == 0x7fffffffffffffff) goto LAB_18048ed9f;
        uVar12 = lVar14 + 1;
        uVar4 = (longlong)local_50 - (longlong)local_60;
        if (0x7fffffffffffffff - (uVar4 >> 1) < uVar4) {
          uVar4 = 0x7fffffffffffffff;
        }
        else {
          uVar4 = (uVar4 >> 1) + uVar4;
          if (uVar4 < uVar12) {
            uVar4 = uVar12;
          }
        }
        lVar2 = FUN_18015bca0(uVar4);
        *(undefined1 *)(lVar2 + lVar14) = uVar13;
        if (puVar3 == puStack_58) {
          lVar11 = (longlong)puStack_58 - (longlong)local_60;
          lVar14 = lVar2;
          puVar3 = local_60;
        }
        else {
          FUN_18063aed0(lVar2,local_60,(longlong)puVar3 - (longlong)local_60);
          lVar11 = (longlong)puStack_58 - (longlong)puVar3;
          lVar14 = lVar14 + 1 + lVar2;
        }
        FUN_18063aed0(lVar14,puVar3,lVar11);
        FUN_1801413a0(&local_60,lVar2,uVar12,uVar4);
      }
      else {
        *puStack_58 = uVar13;
        puStack_58 = puStack_58 + 1;
      }
      uVar7 = uVar7 + 8;
    } while ((int)uVar7 < 0x20);
    FUN_1801adc40(&local_60,puStack_58,local_c8 + 5,0x69d8);
    FUN_18048e2f0(local_80,&local_60);
    local_a0 = (undefined1  [16])0x0;
    local_90 = (undefined1  [16])0x0;
    FUN_18015ba30(local_a0,&DAT_180858068,4);
    FUN_18015a6e0(local_c0);
    ppppuVar6 = local_c0;
    if (0xf < local_a8) {
      ppppuVar6 = local_c0[0];
    }
    if (*(code **)(DAT_180bb8ae8 + 0xc00) != (code *)0x0) {
      (**(code **)(DAT_180bb8ae8 + 0xc00))(DAT_180bb8ae8,ppppuVar6);
    }
    FUN_18015c010(local_c0);
    FUN_18015c010(local_a0);
    FUN_18015c010(local_80);
    FUN_180113710(&local_60);
  }
}



