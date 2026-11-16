// FUN_1800aab50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800aab50 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1800aab50(undefined1 (*param_1) [16],longlong param_2)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  int *piVar4;
  byte *pbVar5;
  undefined1 *puVar6;
  float *pfVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined1 (*pauVar10) [16];
  undefined8 uVar11;
  ulonglong uVar12;
  uint uVar13;
  float fVar14;
  undefined1 auStack_178 [32];
  undefined1 (*local_158) [16];
  undefined1 local_148 [16];
  undefined1 *local_138 [2];
  undefined1 local_128 [16];
  undefined8 local_118;
  undefined1 local_110 [16];
  undefined8 local_100;
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined1 local_e0 [16];
  undefined8 local_d0;
  undefined1 local_c8 [8];
  undefined1 local_c0 [24];
  undefined1 local_a8 [16];
  undefined8 local_98;
  undefined1 local_90 [16];
  undefined8 local_80;
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined1 local_60 [8];
  undefined1 *local_58;
  undefined1 *puStack_50;
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_178;
  local_158 = param_1;
  switch(*(undefined1 *)(param_2 + 4)) {
  case 0:
    puVar6 = *(undefined1 **)(param_2 + 8);
    FUN_1800e60e0(local_c0,&DAT_1806bbee0);
    local_a8 = ZEXT816(0);
    uVar2 = *puVar6;
    FUN_1801409d0(local_a8 + 8,0);
    local_a8[0] = 4;
    local_158 = (undefined1 (*) [16])CONCAT71(local_158._1_7_,uVar2);
    local_a8._8_8_ = local_158;
    local_98 = 0;
    local_58 = local_c0;
    puStack_50 = local_90;
    FUN_1800f4e90(local_90,&local_58,1,2);
    local_80 = 0;
    FUN_1800e60e0(local_128,&DAT_1806bbee4);
    pauVar10 = (undefined1 (*) [16])FUN_1800aa980(local_148,puVar6 + 8);
    local_110 = *pauVar10;
    (*pauVar10)[0] = 0;
    *(undefined8 *)(*pauVar10 + 8) = 0;
    local_100 = 0;
    local_58 = local_128;
    puStack_50 = local_f8;
    FUN_1800f4e90(local_78,&local_58,1,2);
    local_68 = 0;
    local_58 = local_90;
    puStack_50 = local_60;
    FUN_1800f4e90(param_1,&local_58,1,2);
    _eh_vector_destructor_iterator_(local_90,0x18,2,FUN_1800aab30);
    _eh_vector_destructor_iterator_(local_128,0x18,2,FUN_1800aab30);
    FUN_1801409d0(local_148 + 8,local_148[0]);
    _eh_vector_destructor_iterator_(local_c0,0x18,2,FUN_1800aab30);
    break;
  case 1:
    puVar6 = *(undefined1 **)(param_2 + 8);
    *param_1 = (undefined1  [16])0x0;
    (*param_1)[0] = 0;
    *(undefined8 *)(*param_1 + 8) = 0;
    uVar2 = *puVar6;
    FUN_1801409d0(*param_1 + 8,(*param_1)[0]);
    (*param_1)[0] = 4;
    local_158 = (undefined1 (*) [16])CONCAT71(local_158._1_7_,uVar2);
    *(undefined1 (**) [16])(*param_1 + 8) = local_158;
    break;
  case 2:
    piVar4 = *(int **)(param_2 + 8);
    *param_1 = (undefined1  [16])0x0;
    (*param_1)[0] = 0;
    *(undefined8 *)(*param_1 + 8) = 0;
    iVar3 = *piVar4;
    FUN_1801409d0(*param_1 + 8,(*param_1)[0]);
    (*param_1)[0] = 5;
    *(longlong *)(*param_1 + 8) = (longlong)iVar3;
    break;
  case 3:
    pbVar5 = *(byte **)(param_2 + 8);
    *param_1 = (undefined1  [16])0x0;
    (*param_1)[0] = 0;
    *(undefined8 *)(*param_1 + 8) = 0;
    bVar1 = *pbVar5;
    FUN_1801409d0(*param_1 + 8,(*param_1)[0]);
    (*param_1)[0] = 6;
    *(ulonglong *)(*param_1 + 8) = (ulonglong)bVar1;
    break;
  case 4:
    pfVar7 = *(float **)(param_2 + 8);
    *param_1 = (undefined1  [16])0x0;
    (*param_1)[0] = 0;
    *(undefined8 *)(*param_1 + 8) = 0;
    fVar14 = *pfVar7;
    FUN_1801409d0(*param_1 + 8,(*param_1)[0]);
    (*param_1)[0] = 7;
    *(double *)(*param_1 + 8) = (double)fVar14;
    break;
  case 5:
    puVar6 = *(undefined1 **)(param_2 + 8);
    local_128 = ZEXT816(0);
    uVar2 = *puVar6;
    FUN_1801409d0(local_128 + 8,0);
    local_128[0] = 6;
    local_128[8] = uVar2;
    local_128._9_7_ = 0;
    local_118 = 0;
    local_110 = ZEXT816(0);
    uVar2 = puVar6[1];
    FUN_1801409d0(local_110 + 8,0);
    local_110[0] = 6;
    local_110[8] = uVar2;
    local_110._9_7_ = 0;
    local_100 = 0;
    local_f8 = ZEXT816(0);
    uVar2 = puVar6[2];
    FUN_1801409d0(local_f8 + 8,0);
    local_f8[0] = 6;
    local_f8[8] = uVar2;
    local_f8._9_7_ = 0;
    local_e8 = 0;
    local_e0 = ZEXT816(0);
    uVar2 = puVar6[3];
    FUN_1801409d0(local_e0 + 8,0);
    local_e0[0] = 6;
    local_e0[8] = uVar2;
    local_e0._9_7_ = 0;
    local_d0 = 0;
    local_58 = local_128;
    puStack_50 = local_c8;
    FUN_1800f4e90(param_1,&local_58,0,2);
    _eh_vector_destructor_iterator_(local_128,0x18,4,FUN_1800aab30);
    break;
  case 6:
    pfVar7 = *(float **)(param_2 + 8);
    local_128 = ZEXT816(0);
    fVar14 = *pfVar7;
    FUN_1801409d0(local_128 + 8,0);
    local_128[0] = 7;
    local_128._8_8_ = (double)fVar14;
    local_118 = 0;
    local_110 = ZEXT816(0);
    fVar14 = pfVar7[1];
    FUN_1801409d0(local_110 + 8,0);
    local_110[0] = 7;
    local_110._8_8_ = (double)fVar14;
    local_100 = 0;
    local_f8 = ZEXT816(0);
    fVar14 = pfVar7[2];
    FUN_1801409d0(local_f8 + 8,0);
    local_f8[0] = 7;
    local_f8._8_8_ = (double)fVar14;
    local_e8 = 0;
    local_58 = local_128;
    puStack_50 = local_e0;
    FUN_1800f4e90(param_1,&local_58,0,2);
    _eh_vector_destructor_iterator_(local_128,0x18,3,FUN_1800aab30);
    break;
  case 7:
    lVar8 = *(longlong *)(param_2 + 8);
    local_148 = (undefined1  [16])0x0;
    FUN_1800f4e90(&local_58,local_148,0,2);
    uVar13 = 0;
    if (*(int *)(param_2 + 0x10) != 0) {
      do {
        local_148 = ZEXT816(0);
        uVar2 = *(undefined1 *)((ulonglong)uVar13 + lVar8);
        FUN_1801409d0(local_148 + 8,0);
        local_148[0] = 4;
        local_158 = (undefined1 (*) [16])CONCAT71(local_158._1_7_,uVar2);
        local_148._8_8_ = local_158;
        if (((char)local_58 != '\0') && ((char)local_58 != '\x02')) {
          local_138[0] = (undefined1 *)FUN_180112a50(&local_58);
          uVar11 = FUN_1800f6bd0(local_c0,"cannot use push_back() with ",local_138);
          FUN_1800f6ca0(local_128,0x134,uVar11);
                    /* WARNING: Subroutine does not return */
          FUN_180606630(local_128,&DAT_1808d1050);
        }
        if ((char)local_58 == '\0') {
          local_58 = (undefined1 *)CONCAT71(local_58._1_7_,2);
          FUN_180111d10(local_138,2);
          puStack_50 = local_138[0];
        }
        puVar9 = *(undefined8 **)(puStack_50 + 8);
        if (puVar9 == *(undefined8 **)(puStack_50 + 0x10)) {
          FUN_18014fc20(puStack_50,puVar9,local_148);
          uVar12 = (ulonglong)local_148[0];
        }
        else {
          *puVar9 = local_148._0_8_;
          puVar9[1] = local_148._8_8_;
          uVar12 = (ulonglong)puVar9 & 0xffffffffffffff00;
          local_148._0_8_ = local_148._1_8_ << 8;
          local_148._8_8_ = 0;
          *(longlong *)(puStack_50 + 8) = *(longlong *)(puStack_50 + 8) + 0x10;
        }
        FUN_1801409d0(local_148 + 8,uVar12);
        uVar13 = uVar13 + 1;
      } while (uVar13 < *(uint *)(param_2 + 0x10));
    }
    *(undefined1 **)*param_1 = local_58;
    *(undefined1 **)(*param_1 + 8) = puStack_50;
    local_58 = (undefined1 *)((ulonglong)local_58 & 0xffffffffffffff00);
    puStack_50 = (undefined1 *)0x0;
    FUN_1801409d0(&puStack_50,0);
    break;
  case 8:
    uVar11 = *(undefined8 *)(param_2 + 8);
    *param_1 = (undefined1  [16])0x0;
    (*param_1)[0] = 0;
    *(undefined8 *)(*param_1 + 8) = 0;
    FUN_1801409d0(*param_1 + 8,(*param_1)[0]);
    (*param_1)[0] = 3;
    FUN_180111c50(local_138,uVar11);
    *(undefined1 **)(*param_1 + 8) = local_138[0];
    break;
  case 9:
    (**(code **)(**(longlong **)(param_2 + 8) + 8))(*(longlong **)(param_2 + 8),param_1);
    break;
  default:
    (*param_1)[0] = 0;
    FUN_180111d10(*param_1 + 8,0);
  }
}



