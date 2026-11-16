// FUN_1800c85f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800c85f0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800c85f0(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_1f8 [32];
  longlong local_1d8;
  char *local_1d0;
  undefined8 local_1c8;
  undefined8 ****local_1b8 [2];
  undefined8 local_1a8;
  ulonglong local_1a0;
  undefined8 ****local_188;
  undefined8 local_180;
  longlong local_178;
  longlong local_170;
  undefined8 ****local_168;
  undefined8 local_160;
  longlong local_158;
  longlong local_150;
  undefined8 ****local_148;
  undefined8 local_140;
  longlong local_138;
  longlong local_130;
  undefined8 ****local_128;
  undefined8 local_120;
  longlong local_118;
  longlong local_110;
  undefined8 ****local_108;
  undefined8 local_100;
  longlong local_f8;
  longlong local_f0;
  undefined8 ****local_e8;
  undefined8 local_e0;
  longlong local_d8;
  longlong local_d0;
  undefined1 local_c8;
  undefined7 uStack_c7;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  longlong local_a8 [3];
  char *local_90 [3];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  ulonglong local_58;
  
  local_58 = DAT_1808d5f00 ^ (ulonglong)auStack_1f8;
  lVar4 = 0;
  local_a8[0] = param_2 + 0x68;
  local_a8[1] = param_2 + 0x170;
  local_a8[2] = param_2 + 0x278;
  local_90[0] = "primary";
  local_90[1] = "secondary";
  local_90[2] = "overlay";
  uVar5 = 0;
  uVar6 = 0xf;
  while( true ) {
    lVar2 = *(longlong *)((longlong)local_a8 + lVar4);
    local_78 = (undefined1  [16])0x0;
    local_68 = (undefined1  [16])0x0;
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (*(char *)(*(longlong *)((longlong)local_a8 + lVar4 + 0x18) + lVar3) != '\0');
    FUN_18015ba30(local_78);
    if (0x7fffffffffffffff - local_68._0_8_ < 6) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bb70();
    }
    local_1c8 = 6;
    local_1d0 = " layer";
    local_1d8 = local_68._0_8_;
    FUN_18015a9c0(&local_c8);
    puVar1 = (undefined8 *)(lVar2 + 0x20);
    if (puVar1 != (undefined8 *)&local_c8) {
      FUN_18015c010(puVar1);
      *puVar1 = CONCAT71(uStack_c7,local_c8);
      *(undefined8 *)(lVar2 + 0x28) = uStack_c0;
      *(undefined8 *)(lVar2 + 0x30) = uStack_b8;
      *(undefined8 *)(lVar2 + 0x38) = uStack_b0;
      local_c8 = 0;
      uStack_b8 = uVar5;
      uStack_b0 = uVar6;
    }
    FUN_18015c010(&local_c8);
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (*(char *)(param_3 + lVar3) != '\0');
    FUN_180113930(lVar2 + 0x40,param_3);
    if (0x7fffffffffffffff - local_68._0_8_ < 6) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bb70();
    }
    local_1c8 = 6;
    local_1d0 = " color";
    local_1d8 = local_68._0_8_;
    FUN_18015a9c0(local_1b8);
    local_188 = local_1b8;
    if (0xf < local_1a0) {
      local_188 = local_1b8[0];
    }
    local_170 = -1;
    do {
      local_170 = local_170 + 1;
    } while (*(char *)(param_3 + local_170) != '\0');
    local_180 = local_1a8;
    local_178 = param_3;
    FUN_1800aa4b0(lVar2 + 0x68,&local_178,&local_188);
    FUN_18015c010(local_1b8);
    if (0x7fffffffffffffff - local_68._0_8_ < 9) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bb70();
    }
    local_1c8 = 9;
    local_1d0 = " material";
    local_1d8 = local_68._0_8_;
    FUN_18015a9c0(local_1b8);
    local_168 = local_1b8;
    if (0xf < local_1a0) {
      local_168 = local_1b8[0];
    }
    local_150 = -1;
    do {
      local_150 = local_150 + 1;
    } while (*(char *)(param_3 + local_150) != '\0');
    local_160 = local_1a8;
    local_158 = param_3;
    FUN_1800f2660(lVar2 + 0x78,&local_158,&local_168);
    FUN_18015c010(local_1b8);
    if (0x7fffffffffffffff - local_68._0_8_ < 0x13) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bb70();
    }
    local_1c8 = 0x13;
    local_1d0 = " glow outline color";
    local_1d8 = local_68._0_8_;
    FUN_18015a9c0(local_1b8);
    local_148 = local_1b8;
    if (0xf < local_1a0) {
      local_148 = local_1b8[0];
    }
    local_130 = -1;
    do {
      local_130 = local_130 + 1;
    } while (*(char *)(param_3 + local_130) != '\0');
    local_140 = local_1a8;
    local_138 = param_3;
    FUN_1800aa4b0(lVar2 + 0x6c,&local_138,&local_148);
    FUN_18015c010(local_1b8);
    if (0x7fffffffffffffff - local_68._0_8_ < 0x11) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bb70();
    }
    local_1c8 = 0x11;
    local_1d0 = " electric overlay";
    local_1d8 = local_68._0_8_;
    FUN_18015a9c0(local_1b8);
    local_128 = local_1b8;
    if (0xf < local_1a0) {
      local_128 = local_1b8[0];
    }
    local_110 = -1;
    do {
      local_110 = local_110 + 1;
    } while (*(char *)(param_3 + local_110) != '\0');
    local_120 = local_1a8;
    local_118 = param_3;
    FUN_1800f29f0(lVar2 + 0x70,&local_118,&local_128);
    FUN_18015c010(local_1b8);
    if (0x7fffffffffffffff - local_68._0_8_ < 0xf) break;
    local_1c8 = 0xf;
    local_1d0 = " overlay effect";
    local_1d8 = local_68._0_8_;
    FUN_18015a9c0(local_1b8);
    local_108 = local_1b8;
    if (0xf < local_1a0) {
      local_108 = local_1b8[0];
    }
    local_f0 = -1;
    do {
      local_f0 = local_f0 + 1;
    } while (*(char *)(param_3 + local_f0) != '\0');
    local_100 = local_1a8;
    local_f8 = param_3;
    FUN_1800f3030(lVar2 + 0x74,&local_f8,&local_108);
    FUN_18015c010(local_1b8);
    if (0x7fffffffffffffff - local_68._0_8_ < 0xb) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bb70();
    }
    local_1c8 = 0xb;
    local_1d0 = " visibility";
    local_1d8 = local_68._0_8_;
    FUN_18015a9c0(local_1b8);
    local_e8 = local_1b8;
    if (0xf < local_1a0) {
      local_e8 = local_1b8[0];
    }
    local_d0 = -1;
    do {
      local_d0 = local_d0 + 1;
    } while (*(char *)(param_3 + local_d0) != '\0');
    local_e0 = local_1a8;
    local_d8 = param_3;
    FUN_1800f3030(lVar2 + 0x7c,&local_d8,&local_e8);
    FUN_18015c010(local_1b8);
    FUN_18015c010(local_78);
    lVar4 = lVar4 + 8;
    if (0x17 < lVar4) {
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_18015bb70();
}



