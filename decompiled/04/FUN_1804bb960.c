// FUN_1804bb960 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804bb960 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804bb960(longlong param_1,uint param_2,undefined8 *param_3,uint param_4,uint param_5)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  longlong lVar5;
  char *pcVar6;
  char cVar7;
  uint uVar8;
  float *pfVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined4 uVar14;
  undefined1 auVar15 [64];
  undefined1 auStack_78 [32];
  longlong local_58;
  uint local_50;
  float local_48;
  float fStack_44;
  ulonglong local_40;
  
  lVar5 = DAT_180bb8ae8;
  local_40 = DAT_1808d5f00 ^ (ulonglong)auStack_78;
  uVar10 = *(uint *)(DAT_180bb8ae8 + 0x1f10);
  lVar1 = *(longlong *)(DAT_180bb8ae8 + 0x14d0);
  if ((uVar10 >> 9 & 1) != 0) {
    param_4 = ~*(uint *)(DAT_180bb8ae8 + 0x1f54) & (param_4 | *(uint *)(DAT_180bb8ae8 + 0x1f50));
  }
  uVar8 = param_4 & 0xfffffffb;
  if ((param_4 & 0x10) == 0) {
    uVar8 = param_4;
  }
  uVar11 = uVar8 & 0xfffffff7;
  if ((uVar8 & 0x20) == 0) {
    uVar11 = uVar8;
  }
  uVar8 = 0x1000041;
  if ((uVar11 & 0x70) == 0) {
    uVar8 = 0x1000001;
  }
  param_5 = uVar8 | *(uint *)(lVar1 + 0x14) & 4 | param_5;
  if ((uVar11 & 0xc) == 0) {
    param_5 = param_5 | 0x102;
  }
  if ((char)uVar11 < '\0') {
    FUN_1804b2af0(3,DAT_180bb8ae8 + 0xe38);
    FUN_1804b2c00(7,*(undefined4 *)(lVar5 + 0xccc));
    FUN_1804b2c00(8,*(undefined4 *)(lVar5 + 0xcd0));
    FUN_1804b2d30(2,lVar5 + 0xcc4);
    uVar10 = *(uint *)(lVar5 + 0x1f10);
    uVar11 = uVar11 | 3;
    param_5 = param_5 | 4;
  }
  uVar13 = (ulonglong)uVar10;
  lVar12 = *(longlong *)(DAT_180bb8ae8 + 0x14d0);
  if ((*(longlong *)(lVar12 + 0x1c8) != 0) ||
     (pfVar9 = (float *)(lVar12 + 0x280), *(longlong *)(DAT_180bb8ae8 + 0x2338) != 0)) {
    pfVar9 = (float *)(lVar12 + 0x250);
  }
  auVar4._12_4_ = 0;
  auVar4._0_12_ = ZEXT812(0);
  auVar15 = ZEXT1264(ZEXT812(0)) << 0x20;
  auVar2 = vpcmpeqd_avx(ZEXT416(uVar11 & 0x20),SUB6416(ZEXT464(0),0));
  auVar2 = vblendvps_avx(auVar4 << 0x20,ZEXT416((uint)(pfVar9[1] - *(float *)(lVar12 + 0x11c))),
                         auVar2);
  auVar3 = vpcmpeqd_avx(ZEXT416(uVar11 & 0x10),SUB6416(ZEXT464(0),0));
  auVar3 = vblendvps_avx(auVar4 << 0x20,ZEXT416((uint)(*pfVar9 - *(float *)(lVar12 + 0x118))),auVar3
                        );
  lVar12 = DAT_180bb8ae8;
  FUN_1804c67b0(&local_48,*param_3,auVar3._0_8_,auVar2._0_8_);
  if (((uVar13 & 2) != 0) && ((*(byte *)(lVar5 + 0x1f18) & 1) != 0)) {
    if (auVar15._0_4_ < *(float *)(lVar5 + 0x1f30)) {
      uVar11 = uVar11 & 0xfffffffb;
      local_48 = *(float *)(lVar5 + 0x1f30);
    }
    if (auVar15._0_4_ < *(float *)(lVar5 + 0x1f34)) {
      uVar11 = uVar11 & 0xfffffff7;
      fStack_44 = *(float *)(lVar5 + 0x1f34);
    }
  }
  *(undefined4 *)(lVar12 + 0x1f18) = 1;
  *(ulonglong *)(lVar12 + 0x1f30) = CONCAT44(fStack_44,local_48);
  if ((*(uint *)(lVar12 + 0x1f10) >> 9 & 1) == 0) {
    *(undefined8 *)(lVar12 + 0x1f50) = 0;
  }
  *(uint *)(lVar12 + 0x1f50) = *(uint *)(lVar12 + 0x1f50) | uVar11;
  *(uint *)(lVar12 + 0x1f10) = *(uint *)(lVar12 + 0x1f10) | 0x202;
  *(uint *)(lVar12 + 0x1f54) = *(uint *)(lVar12 + 0x1f54) & ~uVar11;
  if (param_1 == 0) {
    local_58 = CONCAT44(local_58._4_4_,param_2);
    FUN_1804b0920(&local_48,0,"%s/%08X",*(undefined8 *)(lVar1 + 8));
  }
  else {
    local_58 = param_1;
    local_50 = param_2;
    FUN_1804b0920(&local_48,0,"%s/%s_%08X",*(undefined8 *)(lVar1 + 8));
  }
  uVar14 = *(undefined4 *)(lVar5 + 0xcb8);
  if ((uVar11 & 1) == 0) {
    *(undefined4 *)(lVar5 + 0xcb8) = 0;
  }
  FUN_1804bee10(CONCAT44(fStack_44,local_48),0,param_5);
  *(undefined4 *)(lVar5 + 0xcb8) = uVar14;
  if ((char)uVar11 < '\0') {
    FUN_1804b2de0(3);
    FUN_1804b2b70(1);
  }
  lVar12 = *(longlong *)(lVar5 + 0x14d0);
  *(uint *)(lVar12 + 0x90) = param_2;
  if (*(short *)(lVar12 + 0xda) == 1) {
    *(undefined8 *)(lVar1 + 0x118) = *(undefined8 *)(lVar12 + 0x28);
  }
  pcVar6 = "#Child";
  cVar7 = '#';
  uVar10 = ~param_2;
  do {
    if (((cVar7 == '#') && (*pcVar6 == '#')) && (pcVar6[1] == '#')) {
      pcVar6 = pcVar6 + 2;
      uVar10 = ~param_2;
    }
    else {
      uVar10 = crc32(uVar10,cVar7);
    }
    cVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar7 != '\0');
  if (*(uint *)(lVar5 + 0x1550) == ~uVar10) {
    FUN_1804b7870(0,0);
  }
  if (((*(uint *)(lVar5 + 0x2054) == param_2) && ((uVar11 >> 8 & 1) == 0)) &&
     ((*(short *)(lVar12 + 0x174) != 0 || (*(char *)(lVar12 + 0x17a) != '\0')))) {
    FUN_1804c8a10(lVar12,0);
    FUN_1804c9d70(lVar12,0);
    FUN_1804b7870(~uVar10,lVar12);
    *(undefined4 *)(lVar5 + 0x1574) = *(undefined4 *)(lVar5 + 0x2090);
  }
}



