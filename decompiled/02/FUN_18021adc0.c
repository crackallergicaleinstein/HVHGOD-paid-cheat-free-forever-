// FUN_18021adc0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18021adc0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18021adc0(undefined8 param_1,short param_2,undefined4 *param_3)

{
  short *psVar1;
  longlong lVar2;
  short *psVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  ULONGLONG UVar7;
  undefined1 auStack_188 [32];
  uint local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  short local_158 [4];
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined1 local_144;
  undefined4 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined8 uStack_74;
  undefined8 local_6c;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined2 local_50;
  undefined1 local_4e;
  undefined4 *local_48;
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_188;
  local_48 = param_3;
  FUN_1800cb400(param_3);
  local_168 = local_168 & 0xffffff00;
  uStack_160 = 0xffffffff;
  uStack_15c = 0xffffffff;
  *(ulonglong *)(param_3 + 0xe) = CONCAT44(0xffffffff,local_168);
  *(undefined8 *)(param_3 + 0x10) = 0xffffffffffffffff;
  local_168 = 0x80cc9e50;
  uStack_164 = 1;
  iVar6 = FUN_1805f68d0(&DAT_180cc9e50);
  lVar4 = DAT_180cca008;
  if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_180cc9e9c == 0x7fffffff) {
    DAT_180cc9e9c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  if (((DAT_180cca116 == '\0') && (DAT_180cca114 != '\0')) &&
     (psVar1 = DAT_180cc9ea8, lVar2 = DAT_180cca000, 0 < param_2)) {
    for (; DAT_180cc9ea8 = psVar1, lVar2 != lVar4; lVar2 = lVar2 + 0x128) {
      if (((*(short *)(lVar2 + 0x10) == param_2) &&
          (cVar5 = FUN_1801d8910(lVar2 + 0x18,param_3), cVar5 != '\0')) &&
         ((*(char *)(lVar2 + 0x110) != '\0' && (*(char *)(lVar2 + 0x111) == '\0')))) {
        UVar7 = GetTickCount64();
        *(ULONGLONG *)(lVar2 + 0x118) = UVar7;
        FUN_1805f68fc(&DAT_180cc9e50);
        FUN_18015c010(param_3 + 6);
      }
      psVar1 = DAT_180cc9ea8;
    }
    if (((ulonglong)((lVar4 - DAT_180cca000) / 0x128) < 0x800) &&
       (psVar3 = DAT_180cc9ea0,
       (ulonglong)(((longlong)psVar1 - (longlong)DAT_180cc9ea0) / 0x110) < 0x80)) {
      for (; psVar3 != psVar1; psVar3 = psVar3 + 0x88) {
        if ((((char)psVar3[0x85] != '\0') && (*psVar3 == param_2)) &&
           (cVar5 = FUN_1801d8910(psVar3 + 4,param_3), cVar5 != '\0')) goto LAB_18021b0a1;
      }
      local_150 = *param_3;
      local_14c = param_3[1];
      local_148 = param_3[2];
      local_144 = *(undefined1 *)(param_3 + 3);
      local_140 = param_3[4];
      local_138 = *(undefined8 *)(param_3 + 6);
      uStack_130 = *(undefined8 *)(param_3 + 8);
      uStack_128 = *(undefined8 *)(param_3 + 10);
      uStack_120 = *(undefined8 *)(param_3 + 0xc);
      *(undefined1 *)(param_3 + 6) = 0;
      *(undefined8 *)(param_3 + 10) = 0;
      *(undefined8 *)(param_3 + 0xc) = 0xf;
      local_118 = *(undefined8 *)(param_3 + 0xe);
      uStack_110 = *(undefined8 *)(param_3 + 0x10);
      local_108 = *(undefined8 *)(param_3 + 0x12);
      uStack_100 = *(undefined8 *)(param_3 + 0x14);
      uStack_f8 = *(undefined8 *)(param_3 + 0x16);
      uStack_f0 = *(undefined8 *)(param_3 + 0x18);
      local_e8 = *(undefined8 *)(param_3 + 0x1a);
      uStack_e0 = *(undefined8 *)(param_3 + 0x1c);
      uStack_d8 = *(undefined8 *)(param_3 + 0x1e);
      uStack_d0 = *(undefined8 *)(param_3 + 0x20);
      local_c8 = *(undefined8 *)(param_3 + 0x22);
      uStack_c0 = *(undefined8 *)(param_3 + 0x24);
      uStack_b8 = *(undefined8 *)(param_3 + 0x26);
      uStack_b0 = *(undefined8 *)(param_3 + 0x28);
      local_a8 = *(undefined8 *)(param_3 + 0x2a);
      uStack_a0 = *(undefined8 *)(param_3 + 0x2c);
      uStack_98 = *(undefined8 *)(param_3 + 0x2e);
      uStack_90 = *(undefined8 *)(param_3 + 0x30);
      local_88 = *(undefined8 *)(param_3 + 0x32);
      local_80 = param_3[0x34];
      local_7c = *(undefined8 *)(param_3 + 0x35);
      uStack_74 = *(undefined8 *)(param_3 + 0x37);
      local_6c = *(undefined8 *)(param_3 + 0x39);
      local_60 = 0;
      local_5c = 0xffffffff;
      local_58 = 0;
      local_50 = 0x100;
      local_4e = 1;
      local_158[0] = param_2;
      if (DAT_180cc9ea8 == DAT_180cc9eb0) {
        FUN_1802318f0(&DAT_180cc9ea0,DAT_180cc9ea8,local_158);
      }
      else {
        FUN_1802329a0(DAT_180cc9ea8,local_158);
        DAT_180cc9ea8 = DAT_180cc9ea8 + 0x88;
      }
      FUN_18015c010(&local_138);
    }
  }
LAB_18021b0a1:
  FUN_1805f68fc(&DAT_180cc9e50);
  FUN_18015c010(param_3 + 6);
}



