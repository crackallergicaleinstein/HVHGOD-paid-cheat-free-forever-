// FUN_1800b7660 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800b7660 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800b7660(longlong param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  uint uVar2;
  char *pcVar3;
  undefined1 *puVar4;
  undefined8 *****pppppuVar5;
  uint uVar6;
  char *pcVar7;
  longlong lVar8;
  ulonglong uVar9;
  char *pcVar10;
  uint uVar11;
  undefined1 auStack_1a8 [32];
  longlong local_188;
  char *local_180;
  undefined8 local_178;
  char *local_168;
  undefined8 local_160;
  undefined1 *local_158;
  undefined8 local_150;
  undefined8 *****local_148;
  undefined8 local_140;
  undefined1 *local_138;
  undefined8 local_130;
  undefined8 *****local_128;
  undefined8 local_120;
  undefined1 *local_118;
  undefined8 local_110;
  undefined1 local_108 [32];
  undefined1 local_e8 [32];
  undefined1 local_c8 [16];
  undefined8 local_b8;
  ulonglong local_b0;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined8 *****local_88 [2];
  longlong local_78;
  ulonglong local_70;
  undefined8 *****local_68 [2];
  undefined8 local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_1a8;
  local_158 = (undefined1 *)((ulonglong)local_158 & 0xffffffff00000000);
  local_c8 = (undefined1  [16])0x0;
  local_b8 = 0;
  local_b0 = 0;
  FUN_18015ba30(local_c8,*param_2,param_2[1]);
  if ((undefined1 *)(param_1 + 0x40) != local_c8) {
    puVar4 = local_c8;
    if (0xf < local_b0) {
      puVar4 = (undefined1 *)local_c8._0_8_;
    }
    FUN_180113930((undefined1 *)(param_1 + 0x40),puVar4,local_b8);
  }
  if ((undefined1 *)(param_1 + 0xe8) != local_c8) {
    puVar4 = local_c8;
    if (0xf < local_b0) {
      puVar4 = (undefined1 *)local_c8._0_8_;
    }
    FUN_180113930((undefined1 *)(param_1 + 0xe8),puVar4,local_b8);
  }
  if ((undefined1 *)(param_1 + 0x158) != local_c8) {
    puVar4 = local_c8;
    if (0xf < local_b0) {
      puVar4 = (undefined1 *)local_c8._0_8_;
    }
    FUN_180113930((undefined1 *)(param_1 + 0x158),puVar4,local_b8);
  }
  if ((undefined1 *)(param_1 + 0x1e8) != local_c8) {
    puVar4 = local_c8;
    if (0xf < local_b0) {
      puVar4 = (undefined1 *)local_c8._0_8_;
    }
    FUN_180113930((undefined1 *)(param_1 + 0x1e8),puVar4,local_b8);
  }
  if ((undefined1 *)(param_1 + 0x250) != local_c8) {
    puVar4 = local_c8;
    if (0xf < local_b0) {
      puVar4 = (undefined1 *)local_c8._0_8_;
    }
    FUN_180113930((undefined1 *)(param_1 + 0x250),puVar4,local_b8);
  }
  if ((undefined1 *)(param_1 + 0x2f0) != local_c8) {
    puVar4 = local_c8;
    if (0xf < local_b0) {
      puVar4 = (undefined1 *)local_c8._0_8_;
    }
    FUN_180113930((undefined1 *)(param_1 + 0x2f0),puVar4,local_b8);
  }
  if ((undefined1 *)(param_1 + 0x358) != local_c8) {
    puVar4 = local_c8;
    if (0xf < local_b0) {
      puVar4 = (undefined1 *)local_c8._0_8_;
    }
    FUN_180113930((undefined1 *)(param_1 + 0x358),puVar4,local_b8);
  }
  if ((undefined1 *)(param_1 + 0x3c0) != local_c8) {
    puVar4 = local_c8;
    if (0xf < local_b0) {
      puVar4 = (undefined1 *)local_c8._0_8_;
    }
    FUN_180113930((undefined1 *)(param_1 + 0x3c0),puVar4,local_b8);
  }
  if ((undefined1 *)(param_1 + 0xb40) != local_c8) {
    puVar4 = local_c8;
    if (0xf < local_b0) {
      puVar4 = (undefined1 *)local_c8._0_8_;
    }
    FUN_180113930((undefined1 *)(param_1 + 0xb40),puVar4,local_b8);
  }
  local_158 = local_c8;
  if (0xf < local_b0) {
    local_158 = (undefined1 *)local_c8._0_8_;
  }
  local_168 = "fov";
  local_160 = 3;
  local_150 = local_b8;
  FUN_1800f2e80(param_1 + 0x68,&local_158,&local_168);
  local_158 = local_c8;
  if (0xf < local_b0) {
    local_158 = (undefined1 *)local_c8._0_8_;
  }
  local_168 = "smooth";
  local_160 = 6;
  local_150 = local_b8;
  FUN_1800f3030(param_1 + 0x6c,&local_158,&local_168);
  local_158 = local_c8;
  if (0xf < local_b0) {
    local_158 = (undefined1 *)local_c8._0_8_;
  }
  local_168 = "hitboxes";
  local_160 = 8;
  local_150 = local_b8;
  FUN_1800f2820(param_1 + 0x9d,&local_158,&local_168);
  local_158 = local_c8;
  if (0xf < local_b0) {
    local_158 = (undefined1 *)local_c8._0_8_;
  }
  local_168 = "rcs min";
  local_160 = 7;
  local_150 = local_b8;
  FUN_1800f3030(param_1 + 0x110,&local_158,&local_168);
  local_158 = local_c8;
  if (0xf < local_b0) {
    local_158 = (undefined1 *)local_c8._0_8_;
  }
  local_168 = "rcs max";
  local_160 = 7;
  local_150 = local_b8;
  FUN_1800f3030(param_1 + 0x114,&local_158,&local_168);
  local_158 = local_c8;
  if (0xf < local_b0) {
    local_158 = (undefined1 *)local_c8._0_8_;
  }
  local_168 = "standalone rcs strength";
  local_160 = 0x17;
  local_150 = local_b8;
  FUN_1800f3030(param_1 + 0x180,&local_158,&local_168);
  local_158 = local_c8;
  if (0xf < local_b0) {
    local_158 = (undefined1 *)local_c8._0_8_;
  }
  local_168 = "standalone rcs min";
  local_160 = 0x12;
  local_150 = local_b8;
  FUN_1800f3030(param_1 + 0x184,&local_158,&local_168);
  local_158 = local_c8;
  if (0xf < local_b0) {
    local_158 = (undefined1 *)local_c8._0_8_;
  }
  local_168 = "standalone rcs max";
  local_160 = 0x12;
  local_150 = local_b8;
  FUN_1800f3030(param_1 + 0x188,&local_158,&local_168);
  local_158 = local_c8;
  if (0xf < local_b0) {
    local_158 = (undefined1 *)local_c8._0_8_;
  }
  local_168 = "trigger delay";
  local_160 = 0xd;
  local_150 = local_b8;
  FUN_1800f3030(param_1 + 0x27c,&local_158,&local_168);
  local_158 = local_c8;
  if (0xf < local_b0) {
    local_158 = (undefined1 *)local_c8._0_8_;
  }
  local_168 = "trigger hitchance";
  local_160 = 0x11;
  local_150 = local_b8;
  FUN_1800f3030(param_1 + 0x280,&local_158,&local_168);
  local_158 = local_c8;
  if (0xf < local_b0) {
    local_158 = (undefined1 *)local_c8._0_8_;
  }
  local_168 = "auto wall hit chance";
  local_160 = 0x14;
  local_150 = local_b8;
  FUN_1800f3030(param_1 + 0x284,&local_158,&local_168);
  local_158 = local_c8;
  if (0xf < local_b0) {
    local_158 = (undefined1 *)local_c8._0_8_;
  }
  local_168 = "min damage";
  local_160 = 10;
  local_150 = local_b8;
  FUN_1800f3030(param_1 + 1000,&local_158,&local_168);
  local_158 = local_c8;
  if (0xf < local_b0) {
    local_158 = (undefined1 *)local_c8._0_8_;
  }
  local_168 = "fov color";
  local_160 = 9;
  local_150 = local_b8;
  FUN_1800aa4b0(param_1 + 0xb68,&local_158,&local_168);
  local_158 = local_c8;
  if (0xf < local_b0) {
    local_158 = (undefined1 *)local_c8._0_8_;
  }
  local_168 = "fov randomization";
  local_160 = 0x11;
  local_150 = local_b8;
  FUN_1800f2e80(param_1 + 0x70,&local_158,&local_168);
  local_158 = local_c8;
  if (0xf < local_b0) {
    local_158 = (undefined1 *)local_c8._0_8_;
  }
  local_168 = "aim motion";
  local_160 = 10;
  local_150 = local_b8;
  FUN_1800f3030(param_1 + 0x74,&local_158,&local_168);
  local_158 = local_c8;
  if (0xf < local_b0) {
    local_158 = (undefined1 *)local_c8._0_8_;
  }
  local_168 = "aim speed";
  local_160 = 9;
  local_150 = local_b8;
  FUN_1800f3030(param_1 + 0x78,&local_158,&local_168);
  local_158 = local_c8;
  if (0xf < local_b0) {
    local_158 = (undefined1 *)local_c8._0_8_;
  }
  local_168 = "aim randomization";
  local_160 = 0x11;
  local_150 = local_b8;
  FUN_1800f3030(param_1 + 0x7c,&local_158,&local_168);
  local_158 = local_c8;
  if (0xf < local_b0) {
    local_158 = (undefined1 *)local_c8._0_8_;
  }
  local_168 = "aim start speed";
  local_160 = 0xf;
  local_150 = local_b8;
  FUN_1800f3030(param_1 + 0x80,&local_158,&local_168);
  local_158 = local_c8;
  if (0xf < local_b0) {
    local_158 = (undefined1 *)local_c8._0_8_;
  }
  local_168 = "aim acceleration";
  local_160 = 0x10;
  local_150 = local_b8;
  FUN_1800f3030(param_1 + 0x84,&local_158,&local_168);
  local_158 = local_c8;
  if (0xf < local_b0) {
    local_158 = (undefined1 *)local_c8._0_8_;
  }
  local_168 = "aim edge smoothing";
  local_160 = 0x12;
  local_150 = local_b8;
  FUN_1800f3030(param_1 + 0x88,&local_158,&local_168);
  local_158 = local_c8;
  if (0xf < local_b0) {
    local_158 = (undefined1 *)local_c8._0_8_;
  }
  local_168 = "aim target priority";
  local_160 = 0x13;
  local_150 = local_b8;
  FUN_1800f3030(param_1 + 0x8c,&local_158,&local_168);
  local_158 = local_c8;
  if (0xf < local_b0) {
    local_158 = (undefined1 *)local_c8._0_8_;
  }
  local_168 = "target override";
  local_160 = 0xf;
  local_150 = local_b8;
  FUN_1800f3030(param_1 + 0x90,&local_158,&local_168);
  local_158 = local_c8;
  if (0xf < local_b0) {
    local_158 = (undefined1 *)local_c8._0_8_;
  }
  local_168 = "keep aim target";
  local_160 = 0xf;
  local_150 = local_b8;
  FUN_1800f29f0(param_1 + 0x94,&local_158,&local_168);
  local_a8 = (undefined1  [16])0x0;
  local_98 = (undefined1  [16])0x0;
  FUN_18015ba30(local_a8,&DAT_1806bcd70,3);
  local_168 = local_c8;
  if (0xf < local_b0) {
    local_168 = (char *)local_c8._0_8_;
  }
  local_160 = local_b8;
  FUN_1800b73f0(param_1 + 0x95,&local_168,local_a8);
  FUN_18015c010(local_a8);
  local_a8 = (undefined1  [16])0x0;
  local_98 = (undefined1  [16])0x0;
  FUN_18015ba30(local_a8,"trigger",7);
  local_168 = local_c8;
  if (0xf < local_b0) {
    local_168 = (char *)local_c8._0_8_;
  }
  local_160 = local_b8;
  FUN_1800b73f0(param_1 + 0x99,&local_168,local_a8);
  FUN_18015c010(local_a8);
  local_158 = local_c8;
  if (0xf < local_b0) {
    local_158 = (undefined1 *)local_c8._0_8_;
  }
  local_168 = "recoil pitch";
  local_160 = 0xc;
  local_150 = local_b8;
  FUN_1800f3030(param_1 + 0x18c,&local_158,&local_168);
  local_158 = local_c8;
  if (0xf < local_b0) {
    local_158 = (undefined1 *)local_c8._0_8_;
  }
  local_168 = "recoil yaw";
  local_160 = 10;
  local_150 = local_b8;
  FUN_1800f3030(param_1 + 400,&local_158,&local_168);
  local_158 = local_c8;
  if (0xf < local_b0) {
    local_158 = (undefined1 *)local_c8._0_8_;
  }
  local_168 = "standalone recoil pitch";
  local_160 = 0x17;
  local_150 = local_b8;
  FUN_1800f3030(param_1 + 0x194,&local_158,&local_168);
  local_158 = local_c8;
  if (0xf < local_b0) {
    local_158 = (undefined1 *)local_c8._0_8_;
  }
  local_168 = "standalone recoil yaw";
  local_160 = 0x15;
  local_150 = local_b8;
  FUN_1800f3030(param_1 + 0x198,&local_158,&local_168);
  local_158 = local_c8;
  if (0xf < local_b0) {
    local_158 = (undefined1 *)local_c8._0_8_;
  }
  local_168 = "standalone recoil smoothing";
  local_160 = 0x1b;
  local_150 = local_b8;
  FUN_1800f3030(param_1 + 0x19c,&local_158,&local_168);
  local_158 = local_c8;
  if (0xf < local_b0) {
    local_158 = (undefined1 *)local_c8._0_8_;
  }
  local_168 = "standalone start bullet";
  local_160 = 0x17;
  local_150 = local_b8;
  FUN_1800f3030(param_1 + 0x1a0,&local_158,&local_168);
  local_158 = local_c8;
  if (0xf < local_b0) {
    local_158 = (undefined1 *)local_c8._0_8_;
  }
  local_168 = "trigger reaction variation";
  local_160 = 0x1a;
  local_150 = local_b8;
  FUN_1800f3030(param_1 + 0x288,&local_158,&local_168);
  local_158 = local_c8;
  if (0xf < local_b0) {
    local_158 = (undefined1 *)local_c8._0_8_;
  }
  local_168 = "trigger shot interval";
  local_160 = 0x15;
  local_150 = local_b8;
  FUN_1800f3030(param_1 + 0x28c,&local_158,&local_168);
  local_158 = local_c8;
  if (0xf < local_b0) {
    local_158 = (undefined1 *)local_c8._0_8_;
  }
  local_168 = "trigger interval variation";
  local_160 = 0x1a;
  local_150 = local_b8;
  FUN_1800f3030(param_1 + 0x290,&local_158,&local_168);
  local_158 = local_c8;
  if (0xf < local_b0) {
    local_158 = (undefined1 *)local_c8._0_8_;
  }
  local_168 = "trigger penetration";
  local_160 = 0x13;
  local_150 = local_b8;
  FUN_1800f3030(param_1 + 0x29c,&local_158,&local_168);
  local_158 = local_c8;
  if (0xf < local_b0) {
    local_158 = (undefined1 *)local_c8._0_8_;
  }
  local_168 = "trigger reaction maximum";
  local_160 = 0x18;
  local_150 = local_b8;
  FUN_1800f3030(param_1 + 0x294,&local_158,&local_168);
  local_158 = local_c8;
  if (0xf < local_b0) {
    local_158 = (undefined1 *)local_c8._0_8_;
  }
  local_168 = "trigger interval maximum";
  local_160 = 0x18;
  local_150 = local_b8;
  FUN_1800f3030(param_1 + 0x298,&local_158,&local_168);
  local_158 = local_c8;
  if (0xf < local_b0) {
    local_158 = (undefined1 *)local_c8._0_8_;
  }
  local_168 = "trigger penetration damage";
  local_160 = 0x1a;
  local_150 = local_b8;
  FUN_1800f3030(param_1 + 0x2a0,&local_158,&local_168);
  local_158 = local_c8;
  if (0xf < local_b0) {
    local_158 = (undefined1 *)local_c8._0_8_;
  }
  local_168 = "trigger wait for stop";
  local_160 = 0x15;
  local_150 = local_b8;
  FUN_1800f29f0(param_1 + 0x2a8,&local_158,&local_168);
  local_158 = local_c8;
  if (0xf < local_b0) {
    local_158 = (undefined1 *)local_c8._0_8_;
  }
  local_168 = "trigger auto scope";
  local_160 = 0x12;
  local_150 = local_b8;
  FUN_1800f29f0(param_1 + 0x2a9,&local_158,&local_168);
  local_158 = local_c8;
  if (0xf < local_b0) {
    local_158 = (undefined1 *)local_c8._0_8_;
  }
  local_168 = "trigger maximum accuracy";
  local_160 = 0x18;
  local_150 = local_b8;
  FUN_1800f29f0(param_1 + 0x2aa,&local_158,&local_168);
  local_158 = local_c8;
  if (0xf < local_b0) {
    local_158 = (undefined1 *)local_c8._0_8_;
  }
  local_168 = "trigger auto stop";
  local_160 = 0x11;
  local_150 = local_b8;
  FUN_1800f29f0(param_1 + 0x278,&local_158,&local_168);
  local_158 = local_c8;
  if (0xf < local_b0) {
    local_158 = (undefined1 *)local_c8._0_8_;
  }
  local_168 = "trigger direct damage";
  local_160 = 0x15;
  local_150 = local_b8;
  FUN_1800f3030(param_1 + 0x2a4,&local_158,&local_168);
  local_158 = local_c8;
  if (0xf < local_b0) {
    local_158 = (undefined1 *)local_c8._0_8_;
  }
  local_168 = "trigger use aim hitboxes";
  local_160 = 0x18;
  local_150 = local_b8;
  FUN_1800f29f0(param_1 + 0x2ab,&local_158,&local_168);
  uVar11 = 0;
  local_168 = (char *)0x0;
  local_158 = (undefined1 *)0x0;
  do {
    puVar4 = local_158;
    pcVar7 = local_168;
    if (uVar11 == 0) {
      pcVar3 = "min damage override";
    }
    else if (uVar11 == 1) {
      pcVar3 = "hit chance override";
    }
    else {
      pcVar3 = "auto wall hit chance override";
      if (uVar11 == 2) {
        pcVar3 = "auto wall min damage override";
      }
    }
    local_a8 = (undefined1  [16])0x0;
    local_98 = (undefined1  [16])0x0;
    lVar8 = -1;
    do {
      lVar8 = lVar8 + 1;
    } while (pcVar3[lVar8] != '\0');
    FUN_18015ba30(local_a8);
    if (0x7fffffffffffffff - local_98._0_8_ < 6) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bb70();
    }
    local_178 = 6;
    local_180 = " count";
    local_188 = local_98._0_8_;
    FUN_18015a9c0(local_68);
    local_148 = local_68;
    if (0xf < local_50) {
      local_148 = local_68[0];
    }
    local_138 = local_c8;
    if (0xf < local_b0) {
      local_138 = (undefined1 *)local_c8._0_8_;
    }
    local_140 = local_58;
    local_130 = local_b8;
    FUN_1800f3030(puVar4 + param_1 + 0xaf0,&local_138,&local_148);
    FUN_18015c010(local_68);
    lVar8 = 0;
    uVar6 = 1;
    do {
      pcVar3 = (char *)((longlong)&local_58 + 5);
      if ((int)uVar6 < 0) {
        uVar2 = -uVar6;
        do {
          pcVar10 = pcVar3;
          pcVar3 = pcVar10 + -1;
          *pcVar3 = (char)uVar2 + (char)((ulonglong)uVar2 / 10) * -10 + '0';
          uVar2 = (uint)((ulonglong)uVar2 / 10);
        } while (uVar2 != 0);
        pcVar3 = pcVar10 + -2;
        *pcVar3 = '-';
      }
      else {
        uVar9 = (ulonglong)uVar6;
        do {
          pcVar3 = pcVar3 + -1;
          uVar1 = uVar9 / 10;
          *pcVar3 = (char)uVar9 + (char)uVar1 * -10 + '0';
          uVar9 = uVar1;
        } while ((int)uVar1 != 0);
      }
      FUN_18015bdb0(local_e8,pcVar3,(longlong)&local_58 + 5);
      if (local_98._0_8_ == 0x7fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
        FUN_18015bb70();
      }
      local_178 = 1;
      local_180 = " ";
      local_188 = local_98._0_8_;
      FUN_18015a9c0(local_108);
      FUN_18015a6e0(local_88);
      FUN_18015c010(local_108);
      FUN_18015c010(local_e8);
      if (pcVar7 + param_1 + 0x430 != local_c8) {
        puVar4 = local_c8;
        if (0xf < local_b0) {
          puVar4 = (undefined1 *)local_c8._0_8_;
        }
        FUN_180113930(pcVar7 + param_1 + 0x430,puVar4,local_b8);
      }
      if ((undefined8 ******)(pcVar7 + param_1 + 0x410) != local_88) {
        pppppuVar5 = local_88;
        if (0xf < local_70) {
          pppppuVar5 = local_88[0];
        }
        FUN_180113930(pcVar7 + param_1 + 0x410,pppppuVar5,local_78);
      }
      *(uint *)(pcVar7 + param_1 + 0x458) = (uVar11 & 1) * 0x40 + 0xb;
      if (0x7fffffffffffffffU - local_78 < 6) {
                    /* WARNING: Subroutine does not return */
        FUN_18015bb70();
      }
      local_178 = 6;
      local_180 = " value";
      local_188 = local_78;
      FUN_18015a9c0(local_68);
      local_128 = local_68;
      if (0xf < local_50) {
        local_128 = local_68[0];
      }
      local_118 = local_c8;
      if (0xf < local_b0) {
        local_118 = (undefined1 *)local_c8._0_8_;
      }
      local_120 = local_58;
      local_110 = local_b8;
      FUN_1800f3030(pcVar7 + param_1 + 0x458,&local_118,&local_128);
      FUN_18015c010(local_68);
      FUN_18015c010(local_88);
      uVar6 = uVar6 + 1;
      lVar8 = lVar8 + 1;
      pcVar7 = pcVar7 + 0x70;
    } while (lVar8 < 4);
    FUN_18015c010(local_a8);
    uVar11 = uVar11 + 1;
    local_158 = local_158 + 4;
    local_168 = local_168 + 0x1c0;
    if (3 < (int)uVar11) {
      FUN_18015c010(local_c8);
    }
  } while( true );
}



