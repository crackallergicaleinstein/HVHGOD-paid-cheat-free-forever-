// FUN_18021a830 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18021a830 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18021a830(undefined8 param_1,short param_2,int *param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  ULONGLONG UVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 auStack_188 [32];
  uint local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  short local_158;
  int local_150;
  int local_14c;
  int local_148;
  undefined1 local_144;
  int local_140;
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
  int local_80;
  undefined8 local_7c;
  undefined8 uStack_74;
  undefined8 local_6c;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined2 local_50;
  undefined1 local_4e;
  int *local_48;
  ulonglong local_40;
  
  local_40 = DAT_1808d5f00 ^ (ulonglong)auStack_188;
  local_48 = param_3;
  FUN_1800cb400(param_3);
  local_168 = local_168 & 0xffffff00;
  uStack_164 = 0xffffffff;
  uStack_160 = 0xffffffff;
  uStack_15c = 0xffffffff;
  *(ulonglong *)(param_3 + 0xe) = CONCAT44(0xffffffff,local_168);
  param_3[0x10] = -1;
  param_3[0x11] = -1;
  iVar3 = FUN_1805f68d0(&DAT_180cc9e50);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_180cc9e9c == 0x7fffffff) {
    DAT_180cc9e9c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  UVar4 = GetTickCount64();
  if ((DAT_180cca116 != '\0') || (param_2 < 1)) {
    FUN_1805f68fc(&DAT_180cc9e50);
    FUN_18015c010(param_3 + 6);
  }
  if (DAT_180cc9eb8 == param_2) {
    cVar2 = FUN_1801d8910(&DAT_180cc9ec0,param_3);
    if (cVar2 == '\0') {
      if (DAT_180cc9ec0 != *param_3) goto LAB_18021a904;
      goto LAB_18021a90b;
    }
  }
  else {
LAB_18021a904:
    DAT_180cc9fc8 = 0;
LAB_18021a90b:
    local_150 = *param_3;
    local_14c = param_3[1];
    local_148 = param_3[2];
    local_144 = (undefined1)param_3[3];
    local_140 = param_3[4];
    local_138 = *(undefined8 *)(param_3 + 6);
    uStack_130 = *(undefined8 *)(param_3 + 8);
    uStack_128 = *(undefined8 *)(param_3 + 10);
    uStack_120 = *(undefined8 *)(param_3 + 0xc);
    *(undefined1 *)(param_3 + 6) = 0;
    param_3[10] = 0;
    param_3[0xb] = 0;
    param_3[0xc] = 0xf;
    param_3[0xd] = 0;
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
    local_4e = 0;
    DAT_180cc9eb8 = param_2;
    local_158 = param_2;
    FUN_1800cf9c0(&DAT_180cc9ec0,&local_150);
    DAT_180cc9fb0 = local_60;
    DAT_180cc9fb4 = local_5c;
    DAT_180cc9fb8 = local_58;
    DAT_180cc9fc0 = (undefined1)local_50;
    DAT_180cc9fc1 = local_50._1_1_;
    DAT_180cc9fc2 = local_4e;
    FUN_18015c010(&local_138);
    DAT_180cc9fd8 = UVar4;
  }
  plVar1 = DAT_180cca008;
  plVar6 = DAT_180cca000;
  DAT_180cc9fd0 = UVar4 + 500;
  for (plVar5 = DAT_180cca000; plVar5 != plVar1; plVar5 = plVar5 + 0x25) {
    if (((((char)plVar5[0x24] != '\0') && ((char)plVar5[0x22] != '\0')) &&
        (*(char *)((longlong)plVar5 + 0x111) == '\0')) &&
       (((short)plVar5[2] == param_2 &&
        (cVar2 = FUN_1801d8910(plVar5 + 3,&DAT_180cc9ec0), cVar2 != '\0')))) {
      plVar5[0x23] = UVar4;
      DAT_180cc9fc8 = *plVar5;
      goto LAB_18021ab03;
    }
  }
  if (plVar6 != plVar1) {
    do {
      if (*plVar6 == DAT_180cc9fc8) break;
      plVar6 = plVar6 + 0x25;
    } while (plVar6 != plVar1);
    if ((plVar6 != plVar1) && (cVar2 = FUN_1801d8910(plVar6 + 3,&DAT_180cc9ec0), cVar2 != '\0'))
    goto LAB_18021ab03;
  }
LAB_18021ab03:
  FUN_1805f68fc(&DAT_180cc9e50);
  FUN_18015c010(param_3 + 6);
}



