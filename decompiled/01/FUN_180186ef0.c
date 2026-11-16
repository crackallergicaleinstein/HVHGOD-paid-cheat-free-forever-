// FUN_180186ef0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180186ef0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180186ef0(undefined1 (*param_1) [16],undefined8 param_2)

{
  ulonglong uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  short *psVar5;
  ulonglong uVar6;
  int iVar7;
  short *psVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  undefined8 ****ppppuVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  short *psVar15;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined1 (*local_f0) [16];
  undefined1 local_e8 [16];
  ulonglong local_d8;
  ulonglong local_d0;
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined8 ****local_68 [2];
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_118;
  local_f8 = 0;
  local_f0 = param_1;
  psVar8 = (short *)FUN_18017d110(param_2,local_a8);
  if (*(ulonglong *)(psVar8 + 0xc) < 8) {
    psVar15 = psVar8 + *(longlong *)(psVar8 + 8);
    psVar5 = psVar8;
  }
  else {
    psVar15 = *(short **)psVar8 + *(longlong *)(psVar8 + 8);
    psVar5 = *(short **)psVar8;
  }
  for (; psVar5 != psVar15; psVar5 = psVar5 + 1) {
    if (*psVar5 == 0x2f) {
      *psVar5 = 0x5c;
    }
  }
  FUN_1800f5370(local_68,psVar8);
  local_f8 = 0x10;
  FUN_18015b930(local_a8);
  if (0xef < local_58) {
    ppppuVar11 = local_68;
    if (7 < local_50) {
      ppppuVar11 = local_68[0];
    }
    if ((local_58 < 4) || (iVar7 = FUN_1801594c0(ppppuVar11,L"\\\\?\\",4), iVar7 != 0)) {
      ppppuVar11 = local_68;
      if (7 < local_50) {
        ppppuVar11 = local_68[0];
      }
      if ((local_58 < 2) || (iVar7 = FUN_1801594c0(ppppuVar11,&DAT_1807c4838,2), iVar7 != 0)) {
        uVar6 = local_58;
        if (0x7ffffffffffffffe - local_58 < 4) {
                    /* WARNING: Subroutine does not return */
          FUN_18015bb70();
        }
        ppppuVar11 = local_68;
        if (7 < local_50) {
          ppppuVar11 = local_68[0];
        }
        local_e8 = (undefined1  [16])0x0;
        uVar1 = local_58 + 4;
        uVar13 = 7;
        puVar10 = (undefined8 *)local_e8;
        if (7 < uVar1) {
          uVar13 = uVar1 | 7;
          if (uVar13 < 0x7fffffffffffffff) {
            if (uVar13 < 10) {
              uVar13 = 10;
            }
            uVar12 = uVar13 + 1;
            if (0x7fffffffffffffff < uVar12) {
                    /* WARNING: Subroutine does not return */
              FUN_18015bc80();
            }
          }
          else {
            uVar13 = 0x7ffffffffffffffe;
            uVar12 = 0x7fffffffffffffff;
          }
          puVar10 = (undefined8 *)FUN_18015bca0(uVar12 * 2);
          local_e8._0_8_ = puVar10;
        }
        local_d8 = uVar1;
        local_d0 = uVar13;
        *puVar10 = 0x5c003f005c005c;
        FUN_18063aed0(puVar10 + 1,ppppuVar11,uVar6 * 2);
        *(undefined2 *)((longlong)puVar10 + uVar1 * 2) = 0;
        puVar9 = local_e8;
        bVar4 = false;
        bVar3 = false;
        bVar2 = true;
      }
      else {
        local_c8 = (undefined1  [16])0x0;
        local_b8 = (undefined1  [16])0x0;
        if (local_58 < 2) {
                    /* WARNING: Subroutine does not return */
          FUN_180141470();
        }
        lVar14 = -1;
        if (local_58 - 2 != -1) {
          lVar14 = local_58 - 2;
        }
        ppppuVar11 = local_68;
        if (7 < local_50) {
          ppppuVar11 = local_68[0];
        }
        FUN_180159e60(local_c8,(longlong)ppppuVar11 + 4,lVar14);
        local_f8 = 0x91;
        puVar9 = (undefined1 *)FUN_1801a6320(local_88,L"\\\\?\\UNC\\",local_c8);
        bVar4 = true;
        bVar3 = true;
        bVar2 = false;
      }
      FUN_180176c30(local_68,puVar9);
      if (bVar2) {
        FUN_18015b930(local_e8);
      }
      if (bVar3) {
        FUN_18015b930(local_88);
      }
      if (bVar4) {
        FUN_18015b930(local_c8);
      }
    }
  }
  ppppuVar11 = local_68;
  if (7 < local_50) {
    ppppuVar11 = local_68[0];
  }
  *param_1 = (undefined1  [16])0x0;
  *(undefined8 *)param_1[1] = 0;
  *(undefined8 *)(param_1[1] + 8) = 0;
  FUN_180159e60(param_1,ppppuVar11,local_58);
  FUN_18015b930(local_68);
}



