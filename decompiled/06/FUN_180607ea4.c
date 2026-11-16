// FUN_180607ea4 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180607ea4 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180607ea4(int *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,byte *param_5
                  ,char param_6,undefined4 param_7,longlong *param_8)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  longlong lVar13;
  int iVar14;
  int *piVar15;
  undefined1 auStack_1c8 [32];
  byte *local_1a8;
  undefined8 *local_1a0;
  longlong local_198;
  longlong *local_190;
  undefined4 local_188;
  longlong *local_180;
  undefined1 local_178;
  char local_170;
  undefined1 local_168;
  uint local_164;
  int local_160;
  undefined8 local_158;
  int local_150;
  longlong local_148;
  longlong local_140;
  undefined8 uStack_138;
  longlong *local_128;
  undefined8 local_120;
  longlong local_118;
  undefined8 uStack_110;
  uint local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  int local_d0 [10];
  int local_a8 [6];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  ulonglong local_58;
  
  local_58 = DAT_1808d5f00 ^ (ulonglong)auStack_1c8;
  local_128 = param_8;
  local_168 = 0;
  local_158 = param_3;
  local_120 = param_2;
  iVar6 = FUN_180607134(param_5,param_4);
  if (*(int *)(param_4 + 0x48) == 0) {
    lVar8 = FUN_180606ee8();
    if (*(int *)(lVar8 + 0x78) != -2) {
      lVar8 = FUN_180606ee8();
      iVar6 = *(int *)(lVar8 + 0x78);
      lVar8 = FUN_180606ee8();
      *(undefined4 *)(lVar8 + 0x78) = 0xfffffffe;
    }
  }
  else {
    lVar8 = FUN_180606ee8();
    if (*(int *)(lVar8 + 0x78) != -2) goto LAB_1806083d5;
    iVar6 = *(int *)(param_4 + 0x48) + -2;
  }
  if (-2 < iVar6) {
    if (*(int *)(param_5 + 8) == 0) {
      uVar9 = 0;
    }
    else {
      pbVar10 = (byte *)(*(longlong *)(param_4 + 8) + (longlong)*(int *)(param_5 + 8));
      uVar9 = *pbVar10 & 0xf;
      uVar9 = *(uint *)(pbVar10 + (-4 - (longlong)(char)(&DAT_1806acfc0)[uVar9])) >>
              ((&DAT_1806acfd0)[uVar9] & 0x1f);
    }
    if (iVar6 < (int)uVar9) {
      if ((((*param_1 == -0x1f928c9d) && (param_1[6] == 4)) &&
          ((param_1[8] == 0x19930520 || (param_1[8] + 0xe66cfadfU < 2)))) &&
         (*(longlong *)(param_1 + 0xc) == 0)) {
        lVar8 = FUN_180606ee8();
        if (*(longlong *)(lVar8 + 0x20) == 0) {
        }
        lVar8 = FUN_180606ee8();
        param_1 = *(int **)(lVar8 + 0x20);
        lVar8 = FUN_180606ee8();
        local_168 = 1;
        param_3 = *(undefined8 *)(lVar8 + 0x28);
        local_158 = param_3;
        FUN_180606350(*(undefined8 *)(param_1 + 0xe));
        if ((param_1 == (int *)0x0) ||
           (((*param_1 == -0x1f928c9d && (param_1[6] == 4)) &&
            (((param_1[8] == 0x19930520 || (param_1[8] + 0xe66cfadfU < 2)) &&
             (*(longlong *)(param_1 + 0xc) == 0)))))) goto LAB_1806083d5;
        lVar8 = FUN_180606ee8();
        if (*(longlong *)(lVar8 + 0x38) != 0) {
          lVar8 = FUN_180606ee8();
          uVar4 = *(undefined8 *)(lVar8 + 0x38);
          lVar8 = FUN_180606ee8();
          *(undefined8 *)(lVar8 + 0x38) = 0;
          cVar5 = FUN_180609df0(param_1,uVar4);
          if (cVar5 == '\0') {
            cVar5 = FUN_180609ed8(uVar4);
            if (cVar5 == '\0') {
                    /* WARNING: Subroutine does not return */
              FUN_18060ab3c();
            }
            FUN_1806064c0(param_1,1);
            FUN_1805fc994(&local_140);
                    /* WARNING: Subroutine does not return */
            FUN_180606630(&local_140,&DAT_1808d0cc0);
          }
          param_3 = local_158;
        }
      }
      FUN_180609158(local_d0,param_5,*(undefined8 *)(param_4 + 8));
      if (((*param_1 == -0x1f928c9d) && (param_1[6] == 4)) &&
         ((param_1[8] == 0x19930520 || (param_1[8] + 0xe66cfadfU < 2)))) {
        if (local_d0[0] != 0) {
          local_1a0 = (undefined8 *)CONCAT44(local_1a0._4_4_,param_7);
          local_1a8 = param_5;
          FUN_180605cf0(&local_118,local_d0,iVar6,param_4);
          local_140 = local_118;
          uStack_138 = uStack_110;
          if ((uint)uStack_110 < local_100) {
            local_148 = local_118;
            lVar8 = local_118;
            local_164 = (uint)uStack_110;
            do {
              uVar9 = local_164;
              local_140 = *(longlong *)(lVar8 + 0x18);
              uStack_138 = *(undefined8 *)(lVar8 + 0x20);
              if ((*(int *)(lVar8 + 0x18) <= iVar6) && (iVar6 <= *(int *)(lVar8 + 0x1c))) {
                FUN_1806090d4(local_a8,&local_140,*(undefined8 *)(param_4 + 8),
                              **(undefined4 **)(param_4 + 0x10));
                local_160 = 0;
                local_150 = local_a8[0];
                if (local_a8[0] != 0) {
                  do {
                    local_f8 = local_90;
                    uStack_f0 = uStack_88;
                    local_d8 = local_70;
                    local_e8 = local_80;
                    uStack_e4 = uStack_7c;
                    uStack_e0 = uStack_78;
                    uStack_dc = uStack_74;
                    iVar14 = *(int *)(*(longlong *)(param_1 + 0xc) + 0xc);
                    lVar8 = FUN_180606324();
                    piVar15 = (int *)((longlong)iVar14 + lVar8 + 4);
                    iVar14 = *(int *)(*(longlong *)(param_1 + 0xc) + 0xc);
                    lVar8 = FUN_180606324();
                    for (iVar14 = *(int *)(lVar8 + iVar14); 0 < iVar14; iVar14 = iVar14 + -1) {
                      iVar2 = *piVar15;
                      lVar8 = FUN_180606324();
                      iVar7 = FUN_180608a68(&local_f8,iVar2 + lVar8,*(undefined8 *)(param_1 + 0xc));
                      if (iVar7 != 0) {
                        local_170 = param_6;
                        local_178 = local_168;
                        local_180 = local_128;
                        local_188 = param_7;
                        local_190 = &local_140;
                        local_1a0 = &local_f8;
                        local_1a8 = param_5;
                        local_198 = iVar2 + lVar8;
                        FUN_1806078dc(param_1,local_120,local_158,param_4);
                        goto LAB_180608254;
                      }
                      piVar15 = piVar15 + 1;
                    }
                    FH4::HandlerMap4::DecompHandler((HandlerMap4 *)local_a8);
                    local_160 = local_160 + 1;
                  } while (local_160 != local_150);
LAB_180608254:
                  lVar8 = local_148;
                  uVar9 = local_164;
                }
              }
              pbVar10 = *(byte **)(lVar8 + 8);
              local_164 = uVar9 + 1;
              lVar13 = (longlong)(char)(&DAT_1806acfc0)[*pbVar10 & 0xf];
              bVar1 = (&DAT_1806acfd0)[*pbVar10 & 0xf];
              pbVar11 = pbVar10 + -lVar13;
              uVar9 = *(uint *)(pbVar11 + -4);
              *(byte **)(lVar8 + 8) = pbVar11;
              *(uint *)(lVar8 + 0x18) = uVar9 >> (bVar1 & 0x1f);
              cVar5 = (&DAT_1806acfc0)[*pbVar11 & 0xf];
              pbVar12 = pbVar10 + (-lVar13 - (longlong)cVar5);
              *(uint *)(lVar8 + 0x1c) =
                   *(uint *)(pbVar12 + -4) >> ((&DAT_1806acfd0)[*pbVar11 & 0xf] & 0x1f);
              *(byte **)(lVar8 + 8) = pbVar12;
              pbVar10 = pbVar10 + ((-(longlong)cVar5 -
                                   (longlong)(char)(&DAT_1806acfc0)[*pbVar12 & 0xf]) - lVar13);
              *(uint *)(lVar8 + 0x20) =
                   *(uint *)(pbVar10 + -4) >> ((&DAT_1806acfd0)[*pbVar12 & 0xf] & 0x1f);
              *(byte **)(lVar8 + 8) = pbVar10;
              uVar3 = *(undefined4 *)pbVar10;
              *(byte **)(lVar8 + 8) = pbVar10 + 4;
              *(undefined4 *)(lVar8 + 0x24) = uVar3;
            } while (local_164 < local_100);
          }
        }
        if (((*param_5 & 0x40) != 0) && (cVar5 = FUN_180605a0c(param_4,param_5), cVar5 == '\0')) {
          lVar8 = FUN_180606ee8();
          *(int **)(lVar8 + 0x20) = param_1;
          lVar8 = FUN_180606ee8();
          *(undefined8 *)(lVar8 + 0x28) = local_158;
                    /* WARNING: Subroutine does not return */
          FUN_18060ab3c();
        }
      }
      else if (local_d0[0] != 0) {
        if (param_6 != '\0') goto LAB_1806083d5;
        local_190 = param_8;
        local_198 = CONCAT44(local_198._4_4_,param_7);
        local_1a0 = (undefined8 *)CONCAT44(local_1a0._4_4_,iVar6);
        local_1a8 = param_5;
        FUN_180608640(param_1,param_2,param_3,param_4);
      }
      lVar8 = FUN_180606ee8();
      if (*(longlong *)(lVar8 + 0x38) == 0) {
      }
    }
  }
LAB_1806083d5:
                    /* WARNING: Subroutine does not return */
  abort();
}



