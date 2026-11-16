// FUN_1804a2590 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804a2590 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804a2590(undefined8 *param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 (*pauVar12) [16];
  longlong lVar13;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [16];
  ulonglong uStack_b8;
  ulonglong uStack_b0;
  undefined4 local_a8;
  longlong *local_a0;
  longlong local_98;
  undefined8 *local_90;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined8 *local_68;
  undefined1 local_60 [16];
  ulonglong local_50;
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = DAT_1808d5f00 ^ (ulonglong)auStack_e8;
  local_98 = param_4;
  local_a0 = param_2;
  local_90 = param_1;
  local_a8 = 0;
  uVar10 = 0;
  local_50 = 0;
  local_48 = 0xf;
  local_60._1_15_ = SUB1615((undefined1  [16])0x0,1);
  auVar3[0xf] = 0;
  auVar3._0_15_ = local_60._1_15_;
  local_60 = auVar3 << 8;
  uVar9 = param_2[1];
  uVar8 = 0;
  lVar11 = -1;
  local_68 = param_1;
  if (uVar9 != 0) {
    bVar5 = false;
    bVar4 = true;
    do {
      if (*(char *)(uVar8 + param_3) != '\0') {
        if (uVar10 != 0) {
          FUN_18015b2a0(local_60,&DAT_1806c0ec4,2);
        }
        lVar13 = -1;
        do {
          lVar13 = lVar13 + 1;
        } while (*(char *)(*(longlong *)(*param_2 + uVar8 * 8) + lVar13) != '\0');
        FUN_18015b2a0();
        uVar10 = local_50;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar9);
    if (uVar10 != 0) {
      local_c8 = (undefined1  [16])0x0;
      pauVar12 = &local_60;
      if (0xf < local_48) {
        pauVar12 = (undefined1 (*) [16])local_60._0_8_;
      }
      if (0x7fffffffffffffff < uVar10) {
                    /* WARNING: Subroutine does not return */
        FUN_18015bb70();
      }
      if (uVar10 < 0x10) {
        uStack_b8 = uVar10;
        uStack_b0 = 0xf;
        local_c8 = *pauVar12;
        puVar7 = (undefined8 *)local_c8;
      }
      else {
        uVar8 = uVar10 | 0xf;
        uVar9 = 0x7fffffffffffffff;
        if ((uVar8 < 0x8000000000000000) && (uVar9 = uVar8, uVar8 < 0x16)) {
          uVar9 = 0x16;
        }
        uVar6 = FUN_18015bca0(uVar9 + 1);
        local_c8._0_8_ = uVar6;
        uStack_b8 = uVar10;
        uStack_b0 = uVar9;
        FUN_18063aed0(uVar6,pauVar12,uVar10 + 1);
        puVar7 = (undefined8 *)local_c8;
      }
      goto LAB_1804a2733;
    }
  }
  local_88 = (undefined1  [16])0x0;
  local_78 = (undefined1  [16])0x0;
  do {
    lVar11 = lVar11 + 1;
  } while (*(char *)(local_98 + lVar11) != '\0');
  FUN_18015ba30(local_88,local_98,lVar11);
  puVar7 = (undefined8 *)local_88;
  bVar5 = true;
  bVar4 = false;
LAB_1804a2733:
  uVar6 = puVar7[1];
  uVar1 = puVar7[2];
  uVar2 = puVar7[3];
  *local_90 = *puVar7;
  local_90[1] = uVar6;
  local_90[2] = uVar1;
  local_90[3] = uVar2;
  *(undefined1 *)puVar7 = 0;
  puVar7[2] = 0;
  puVar7[3] = 0xf;
  if (bVar4) {
    FUN_18015c010(local_c8);
  }
  if (bVar5) {
    FUN_18015c010(local_88);
  }
  FUN_18015c010(local_60);
}



