// FUN_18016da30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18016da30 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18016da30(longlong param_1,longlong *param_2,char param_3)

{
  int iVar1;
  ulonglong uVar2;
  size_t sVar3;
  size_t sVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  char cVar10;
  char cVar11;
  int iVar12;
  undefined1 (*pauVar13) [16];
  ULONGLONG UVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  void *_Buf2;
  longlong *_Buf2_00;
  undefined8 *puVar17;
  longlong *plVar18;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  longlong *local_120;
  size_t local_118;
  char local_108;
  undefined1 local_100 [16];
  undefined1 auStack_f0 [16];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [16];
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_148;
  iVar1 = *(int *)(param_1 + 0x4a4);
  if (iVar1 == 0) {
  }
  puVar16 = (undefined8 *)param_2[1];
  puVar17 = (undefined8 *)*param_2;
  local_108 = param_3;
  if (puVar17 != puVar16) {
    uVar2 = *(ulonglong *)(param_1 + 0x4c0);
    sVar3 = *(size_t *)(param_1 + 0x4b8);
    do {
      _Buf2 = (void *)(param_1 + 0x4a8);
      if (0xf < uVar2) {
        _Buf2 = *(void **)(param_1 + 0x4a8);
      }
      sVar4 = puVar17[2];
      puVar15 = puVar17;
      if (0xf < (ulonglong)puVar17[3]) {
        puVar15 = (undefined8 *)*puVar17;
      }
    } while (((sVar4 != sVar3) ||
             ((sVar4 != 0 && (iVar12 = memcmp(puVar15,_Buf2,sVar4), iVar12 != 0)))) &&
            (puVar17 = puVar17 + 0x2d, puVar17 != puVar16));
  }
  cVar10 = local_108;
  uStack_48 = 0;
  uStack_40 = 0xf;
  local_58._1_15_ = SUB1615((undefined1  [16])0x0,1);
  auVar6[0xf] = 0;
  auVar6._0_15_ = local_58._1_15_;
  local_58 = auVar6 << 8;
  if (iVar1 == 1) {
    if (puVar17 != puVar16) {
      puVar15 = (undefined8 *)(param_1 + 0x4e8);
      puVar16 = puVar17 + 8;
      if (0xf < *(ulonglong *)(param_1 + 0x500)) {
        puVar15 = (undefined8 *)*puVar15;
      }
      sVar3 = puVar17[10];
      if (0xf < (ulonglong)puVar17[0xb]) {
        puVar16 = (undefined8 *)*puVar16;
      }
      if (((sVar3 != *(size_t *)(param_1 + 0x4f8)) ||
          ((sVar3 != 0 && (iVar12 = memcmp(puVar16,puVar15,sVar3), iVar12 != 0)))) &&
         (cVar11 = FUN_180176400(param_1 + 0x420,param_1 + 0x4a8), cVar11 == '\0')) {
        local_120 = (longlong *)(param_1 + 0x4c8);
        local_118 = *(size_t *)(param_1 + 0x4d8);
        if (0x7fffffffffffffff - local_118 < 7) {
                    /* WARNING: Subroutine does not return */
          FUN_18015bb70();
        }
        if (0xf < *(ulonglong *)(param_1 + 0x4e0)) {
          local_120 = (longlong *)*local_120;
        }
        local_128 = 7;
        FUN_18015a9c0(local_b8);
        pauVar13 = (undefined1 (*) [16])FUN_18015b2a0(local_b8,"\' to cloud",10);
        local_d8 = *(undefined8 *)*pauVar13;
        uStack_d0 = *(undefined8 *)(*pauVar13 + 8);
        local_100 = *pauVar13;
        uStack_c8 = *(undefined8 *)pauVar13[1];
        uStack_c0 = *(undefined8 *)(pauVar13[1] + 8);
        auStack_f0 = pauVar13[1];
        (*pauVar13)[0] = 0;
        *(undefined8 *)pauVar13[1] = 0;
        *(undefined8 *)(pauVar13[1] + 8) = 0xf;
        FUN_18015c010(local_58);
        local_58._8_8_ = uStack_d0;
        local_58._0_8_ = local_d8;
        uStack_48 = uStack_c8;
        uStack_40 = uStack_c0;
        auStack_f0 = ZEXT816(0xf) << 0x40;
        auVar7[0xf] = 0;
        auVar7._0_15_ = local_100._1_15_;
        local_100 = auVar7 << 8;
        FUN_18015c010(local_100);
        FUN_18015c010(local_b8);
        FUN_18016df60(param_1,local_58,1);
        goto LAB_18016defd;
      }
    }
LAB_18016de67:
    if ((iVar1 == 4) && (cVar10 != '\0')) {
      FUN_180113930(local_58,"Config library refreshed",0x18);
      FUN_18016df60(param_1,local_58,1);
    }
    else {
      lVar5 = *(longlong *)(param_1 + 0x508);
      if ((lVar5 == 0) || (UVar14 = GetTickCount64(), UVar14 - lVar5 < 0x2711)) goto LAB_18016df0b;
      local_100 = (undefined1  [16])0x0;
      auStack_f0 = (undefined1  [16])0x0;
      FUN_18015ba30(local_100,
                    "Config operation did not complete. Keep the loader open and try again.",0x46);
      FUN_18016df60(param_1,local_100,0);
      FUN_18015c010(local_100);
    }
  }
  else {
    if (iVar1 != 2) {
      if ((iVar1 == 3) && (puVar17 != puVar16)) {
        plVar18 = (longlong *)(param_1 + 0x4c8);
        puVar16 = puVar17 + 4;
        sVar3 = *(size_t *)(param_1 + 0x4d8);
        uVar2 = *(ulonglong *)(param_1 + 0x4e0);
        _Buf2_00 = plVar18;
        if (0xf < uVar2) {
          _Buf2_00 = (longlong *)*plVar18;
        }
        sVar4 = puVar17[6];
        if (0xf < (ulonglong)puVar17[7]) {
          puVar16 = (undefined8 *)*puVar16;
        }
        if ((sVar4 == sVar3) &&
           ((sVar4 == 0 || (iVar12 = memcmp(puVar16,_Buf2_00,sVar4), iVar12 == 0)))) {
          if (0x7fffffffffffffff - sVar3 < 0xc) {
                    /* WARNING: Subroutine does not return */
            FUN_18015bb70();
          }
          if (0xf < uVar2) {
            plVar18 = (longlong *)*plVar18;
          }
          local_128 = 0xc;
          local_120 = plVar18;
          local_118 = sVar3;
          FUN_18015a9c0(local_78);
          pauVar13 = (undefined1 (*) [16])FUN_18015b2a0(local_78,&DAT_180700f08,1);
          local_d8 = *(undefined8 *)*pauVar13;
          uStack_d0 = *(undefined8 *)(*pauVar13 + 8);
          local_100 = *pauVar13;
          uStack_c8 = *(undefined8 *)pauVar13[1];
          uStack_c0 = *(undefined8 *)(pauVar13[1] + 8);
          auStack_f0 = pauVar13[1];
          (*pauVar13)[0] = 0;
          *(undefined8 *)pauVar13[1] = 0;
          *(undefined8 *)(pauVar13[1] + 8) = 0xf;
          FUN_18015c010(local_58);
          local_58._8_8_ = uStack_d0;
          local_58._0_8_ = local_d8;
          uStack_48 = uStack_c8;
          uStack_40 = uStack_c0;
          auStack_f0 = ZEXT816(0xf) << 0x40;
          auVar9[0xf] = 0;
          auVar9._0_15_ = local_100._1_15_;
          local_100 = auVar9 << 8;
          FUN_18015c010(local_100);
          FUN_18015c010(local_78);
          FUN_18016df60(param_1,local_58,1);
          goto LAB_18016defd;
        }
      }
      goto LAB_18016de67;
    }
    if (puVar17 != puVar16) goto LAB_18016de67;
    local_120 = (longlong *)(param_1 + 0x4c8);
    local_118 = *(size_t *)(param_1 + 0x4d8);
    if (0x7fffffffffffffff - local_118 < 9) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bb70();
    }
    if (0xf < *(ulonglong *)(param_1 + 0x4e0)) {
      local_120 = (longlong *)*local_120;
    }
    local_128 = 9;
    FUN_18015a9c0(local_98);
    pauVar13 = (undefined1 (*) [16])FUN_18015b2a0(local_98,&DAT_180700f08,1);
    local_d8 = *(undefined8 *)*pauVar13;
    uStack_d0 = *(undefined8 *)(*pauVar13 + 8);
    local_100 = *pauVar13;
    uStack_c8 = *(undefined8 *)pauVar13[1];
    uStack_c0 = *(undefined8 *)(pauVar13[1] + 8);
    auStack_f0 = pauVar13[1];
    (*pauVar13)[0] = 0;
    *(undefined8 *)pauVar13[1] = 0;
    *(undefined8 *)(pauVar13[1] + 8) = 0xf;
    FUN_18015c010(local_58);
    local_58._8_8_ = uStack_d0;
    local_58._0_8_ = local_d8;
    uStack_48 = uStack_c8;
    uStack_40 = uStack_c0;
    auStack_f0 = ZEXT816(0xf) << 0x40;
    auVar8[0xf] = 0;
    auVar8._0_15_ = local_100._1_15_;
    local_100 = auVar8 << 8;
    FUN_18015c010(local_100);
    FUN_18015c010(local_98);
    FUN_18016df60(param_1,local_58,1);
  }
LAB_18016defd:
  *(undefined8 *)(param_1 + 0x508) = 0;
  *(undefined4 *)(param_1 + 0x4a4) = 0;
LAB_18016df0b:
  FUN_18015c010(local_58);
}



