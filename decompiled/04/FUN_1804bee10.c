// FUN_1804bee10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804bee10 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804bee10(char *param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  int *piVar1;
  short *psVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  undefined2 uVar7;
  short sVar8;
  short sVar9;
  code *pcVar10;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  float fVar14;
  int iVar15;
  undefined8 uVar16;
  bool bVar17;
  bool bVar18;
  longlong lVar19;
  uint uVar20;
  char cVar21;
  char cVar22;
  undefined1 uVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  undefined4 uVar27;
  char *pcVar28;
  longlong lVar29;
  longlong lVar30;
  char *pcVar31;
  longlong lVar32;
  undefined8 uVar33;
  float *pfVar34;
  byte bVar35;
  short sVar36;
  uint uVar37;
  int iVar38;
  uint uVar39;
  longlong lVar40;
  longlong lVar41;
  int *piVar42;
  undefined1 *puVar43;
  char cVar44;
  short sVar45;
  longlong *plVar46;
  undefined4 *puVar47;
  bool bVar48;
  longlong *plVar49;
  ulonglong uVar50;
  uint uVar51;
  longlong lVar52;
  ulonglong uVar53;
  bool bVar54;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  float fVar57;
  undefined1 auVar58 [16];
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  undefined1 auVar64 [32];
  undefined8 uVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  undefined1 auVar69 [64];
  undefined1 auStack_218 [32];
  undefined1 *local_1f8;
  float *local_1f0;
  float local_1e8;
  char local_1d8;
  bool local_1d7;
  char local_1d6;
  char local_1d5;
  uint local_1d4;
  int local_1d0;
  char local_1cc;
  uint local_1c8;
  int local_1c4;
  uint local_1c0;
  longlong local_1b8;
  undefined8 local_1b0;
  longlong local_1a8;
  char *local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  float local_188;
  float local_184;
  float local_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  longlong local_160;
  undefined1 local_148 [8];
  undefined1 local_140 [8];
  undefined1 local_138 [8];
  undefined1 local_130 [8];
  undefined1 local_128 [8];
  float local_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  undefined4 local_110;
  undefined4 local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  undefined1 local_f8 [16];
  ulonglong local_e8;
  
  lVar19 = DAT_180bb8ae8;
  local_e8 = DAT_1808d5f00 ^ (ulonglong)auStack_218;
  uVar37 = 0xffffffff;
  cVar22 = *param_1;
  pcVar31 = param_1;
  while (cVar22 != '\0') {
    pcVar28 = pcVar31 + 1;
    if (((cVar22 == '#') && (*pcVar28 == '#')) && (pcVar31[2] == '#')) {
      uVar37 = 0xffffffff;
      pcVar28 = pcVar31 + 3;
    }
    else {
      uVar37 = crc32(uVar37,cVar22);
    }
    pcVar31 = pcVar28;
    cVar22 = *pcVar28;
  }
  local_1a0 = param_1;
  lVar29 = FUN_1804bbfd0(~uVar37);
  uVar50 = CONCAT71((int7)((ulonglong)param_4 >> 8),lVar29 == 0);
  local_1d4 = (uint)uVar50;
  local_1a8 = lVar29;
  if (lVar29 == 0) {
    lVar29 = FUN_1804bc190(param_1,param_3);
    uVar50 = (ulonglong)local_1d4;
  }
  if (*(int *)(lVar19 + 0x14c8) == *(int *)(lVar29 + 0x10)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  if ((*(uint *)(lVar19 + 0x1f10) & 0x100) != 0) {
    param_3 = ~*(uint *)(lVar19 + 0x1f4c) & (param_3 | *(uint *)(lVar19 + 0x1f48));
  }
  local_1d0 = *(int *)(lVar29 + 0x290);
  piVar1 = (int *)(lVar19 + 0x14a0);
  uVar37 = param_3 | 6;
  if ((param_3 & 0x30200) != 0x30200) {
    uVar37 = param_3;
  }
  iVar25 = *(int *)(lVar19 + 4);
  if ((*piVar1 == 0) && (*(char *)(lVar19 + 2) != '\0')) {
    uVar23 = 1;
  }
  else {
    uVar23 = 0;
  }
  *(undefined1 *)(lVar29 + 0xd5) = uVar23;
  local_1d7 = local_1d0 < iVar25 + -1;
  if ((uVar37 >> 0x1a & 1) != 0) {
    lVar40 = (longlong)*(int *)(lVar19 + 0x2008) * 0x38;
    local_1d7 = local_1d7 ||
                (lVar29 != *(longlong *)(lVar40 + 8 + *(longlong *)(lVar19 + 0x2000)) ||
                *(int *)(lVar29 + 0x94) != *(int *)(lVar40 + *(longlong *)(lVar19 + 0x2000)));
  }
  *(bool *)(lVar29 + 0xd3) = local_1d7;
  if (local_1d7 != false) {
    *(byte *)(lVar29 + 0xf1) = *(byte *)(lVar29 + 0xf1) | 8;
    *(byte *)(lVar29 + 0xf2) = *(byte *)(lVar29 + 0xf2) | 8;
    *(byte *)(lVar29 + 0xf3) = *(byte *)(lVar29 + 0xf3) | 8;
  }
  local_1c4 = iVar25;
  if (local_1d0 == iVar25) {
    uVar37 = *(uint *)(lVar29 + 0x14);
  }
  else {
    FUN_1804c8740(lVar29,uVar50 & 0xff,uVar37);
    *(uint *)(lVar29 + 0x14) = uVar37;
    if ((*(uint *)(lVar19 + 0x1f10) & 0x200) == 0) {
      uVar27 = 0;
    }
    else {
      uVar27 = *(undefined4 *)(lVar19 + 0x1f50);
    }
    *(undefined4 *)(lVar29 + 0x18) = uVar27;
    *(int *)(lVar29 + 0x290) = iVar25;
    auVar55._8_8_ = 0;
    auVar55._0_8_ = *(ulonglong *)(lVar19 + 0x10);
    *(undefined2 *)(lVar29 + 0xde) = 0;
    auVar55 = vcvtpd2ps_avx(auVar55);
    *(int *)(lVar29 + 0x294) = auVar55._0_4_;
    uVar7 = *(undefined2 *)(lVar19 + 0x14c0);
    *(int *)(lVar19 + 0x14c0) = *(int *)(lVar19 + 0x14c0) + 1;
    *(undefined2 *)(lVar29 + 0xe0) = uVar7;
  }
  if (*piVar1 == 0) {
    lVar40 = 0;
  }
  else {
    lVar40 = *(longlong *)((longlong)*piVar1 * 0x88 + -0x88 + *(longlong *)(lVar19 + 0x14a8));
  }
  if (local_1d0 == iVar25) {
    local_1b8 = *(longlong *)(lVar29 + 0x3c8);
  }
  else {
    local_1b8 = 0;
    if ((uVar37 & 0x7000000) != 0) {
      local_1b8 = lVar40;
    }
  }
  piVar42 = (int *)(lVar29 + 0x108);
  if (*piVar42 == 0) {
    if (*(int *)(lVar29 + 0x10c) == 0) {
      FUN_1804d14d0(piVar42,8);
    }
    *(undefined4 *)(*(longlong *)(lVar29 + 0x110) + (longlong)*piVar42 * 4) =
         *(undefined4 *)(lVar29 + 0x10);
    *piVar42 = *piVar42 + 1;
  }
  *(longlong *)(lVar19 + 0x14d0) = lVar29;
  FUN_1804d0950(piVar1,*piVar1 + 1);
  lVar32 = *(longlong *)(lVar19 + 0x14a8);
  lVar52 = (longlong)*piVar1 * 0x88;
  *(longlong *)(lVar52 + -0x88 + lVar32) = lVar29;
  uVar33 = *(undefined8 *)(lVar19 + 0x1ec8);
  uVar65 = *(undefined8 *)(lVar19 + 0x1ed0);
  uVar16 = *(undefined8 *)(lVar19 + 0x1ed8);
  puVar3 = (undefined8 *)(lVar52 + -0x80 + lVar32);
  *puVar3 = *(undefined8 *)(lVar19 + 0x1ec0);
  puVar3[1] = uVar33;
  puVar3[2] = uVar65;
  puVar3[3] = uVar16;
  uVar33 = *(undefined8 *)(lVar19 + 0x1ee8);
  uVar65 = *(undefined8 *)(lVar19 + 0x1ef0);
  uVar16 = *(undefined8 *)(lVar19 + 0x1ef8);
  puVar3 = (undefined8 *)(lVar52 + -0x60 + lVar32);
  *puVar3 = *(undefined8 *)(lVar19 + 0x1ee0);
  puVar3[1] = uVar33;
  puVar3[2] = uVar65;
  puVar3[3] = uVar16;
  uVar33 = *(undefined8 *)(lVar19 + 0x1f08);
  puVar3 = (undefined8 *)(lVar52 + -0x40 + lVar32);
  *puVar3 = *(undefined8 *)(lVar19 + 0x1f00);
  puVar3[1] = uVar33;
  if (((uVar37 >> 0x19 & 1) == 0) || ((*(byte *)(lVar19 + 0x1e80) & 0x40) == 0)) {
    uVar23 = 0;
  }
  else {
    uVar23 = 1;
  }
  lVar30 = 0;
  *(undefined1 *)(lVar52 + -0x1a + lVar32) = uVar23;
  *(undefined4 *)(lVar52 + -0x18 + lVar32) = 0;
  lVar41 = lVar32 + -0x30 + lVar52;
  FUN_1804c5420();
  iVar25 = local_1c4;
  *(longlong *)(lVar19 + 0x28c0) = lVar41;
  if ((uVar37 >> 0x1c & 1) != 0) {
    *(int *)(lVar19 + 0x2614) = *(int *)(lVar19 + 0x2614) + 1;
  }
  fVar66 = 1.0;
  if (local_1d0 != local_1c4) {
    *(longlong *)(lVar29 + 0x3c8) = local_1b8;
    *(longlong *)(lVar29 + 0x3f0) = lVar29;
    *(longlong *)(lVar29 + 1000) = lVar29;
    *(longlong *)(lVar29 + 0x3e0) = lVar29;
    *(longlong *)(lVar29 + 0x3d8) = lVar29;
    if (local_1b8 != 0) {
      if ((uVar37 & 0x3000000) == 0x1000000) {
        *(undefined8 *)(lVar29 + 0x3d8) = *(undefined8 *)(local_1b8 + 0x3d8);
      }
      if ((uVar37 >> 0x1a & 1) != 0) {
        *(undefined8 *)(lVar29 + 0x3e0) = *(undefined8 *)(local_1b8 + 0x3e0);
      }
      if (((uVar37 >> 0x1b & 1) == 0) && ((uVar37 & 0x7000000) != 0)) {
        *(undefined8 *)(lVar29 + 1000) = *(undefined8 *)(local_1b8 + 1000);
      }
    }
    if ((*(uint *)(lVar29 + 0x18) & 0x100) != 0) {
      lVar41 = lVar29;
      do {
        lVar41 = *(longlong *)(lVar41 + 0x3c8);
        *(longlong *)(lVar29 + 0x3f0) = lVar41;
      } while ((*(uint *)(lVar41 + 0x18) & 0x100) != 0);
    }
    *(longlong *)(lVar29 + 0x3d0) = lVar40;
    if ((uVar37 >> 0x18 & 1) != 0) {
      lVar30 = lVar40;
    }
    *(longlong *)(lVar29 + 0x3f8) = lVar30;
    if (local_1b8 == 0) {
      fVar68 = 1.0;
    }
    else {
      fVar68 = *(float *)(local_1b8 + 700) * *(float *)(local_1b8 + 0x2b8);
    }
    *(float *)(lVar29 + 700) = fVar68;
  }
  FUN_1804c1d40();
  *(undefined4 *)(lVar29 + 0x440) = *(undefined4 *)(lVar19 + 0x1e7c);
  if ((uVar37 >> 0x1a & 1) != 0) {
    puVar47 = (undefined4 *)
              ((longlong)*(int *)(lVar19 + 0x2008) * 0x38 + *(longlong *)(lVar19 + 0x2000));
    *(longlong *)(puVar47 + 2) = lVar29;
    puVar47[6] = *(undefined4 *)(lVar40 + 0x170);
    FUN_1804d03f0((int *)(lVar19 + 0x2008),puVar47);
    *(undefined4 *)(lVar29 + 0x94) = *puVar47;
    iVar25 = local_1c4;
  }
  bVar54 = false;
  local_1d5 = '\0';
  local_1d6 = '\0';
  local_1d8 = '\0';
  if ((*(byte *)(lVar19 + 0x1f10) & 1) != 0) {
    local_1d5 = (*(uint *)(lVar19 + 0x1f14) & (int)*(char *)(lVar29 + 0xf1)) != 0;
    if (((*(uint *)(lVar19 + 0x1f14) & (int)*(char *)(lVar29 + 0xf1)) == 0) ||
       (*(float *)(lVar19 + 0x1f2c) * *(float *)(lVar19 + 0x1f2c) +
        *(float *)(lVar19 + 0x1f28) * *(float *)(lVar19 + 0x1f28) <= 1e-05)) {
      FUN_1804c1ac0(lVar29,lVar19 + 0x1f20);
    }
    else {
      *(undefined8 *)(lVar29 + 0xf4) = *(undefined8 *)(lVar19 + 0x1f20);
      uVar33 = *(undefined8 *)(lVar19 + 0x1f28);
      *(uint *)(lVar29 + 0xf0) =
           (*(uint *)(lVar29 + 0xf0) >> 8 & 0xf1) << 8 | *(uint *)(lVar29 + 0xf0) & 0xffff00ff;
      *(undefined8 *)(lVar29 + 0xfc) = uVar33;
    }
  }
  auVar69 = ZEXT864(0);
  if ((*(byte *)(lVar19 + 0x1f10) & 2) != 0) {
    uVar24 = (int)*(char *)(lVar29 + 0xf2) & *(uint *)(lVar19 + 0x1f18);
    if ((uVar24 == 0) || (*(float *)(lVar19 + 0x1f30) <= 0.0)) {
      local_1d6 = '\0';
      bVar54 = false;
      if (uVar24 != 0) goto LAB_1804bf382;
      local_1d6 = '\0';
LAB_1804bf39d:
      local_1d8 = '\0';
    }
    else {
      local_1d6 = '\x01';
      bVar54 = true;
LAB_1804bf382:
      if (*(float *)(lVar19 + 0x1f34) <= 0.0) goto LAB_1804bf39d;
      local_1d8 = '\x01';
    }
    if (((*(byte *)(lVar29 + 0x18) & 4) != 0) && (((int)*(char *)(lVar29 + 0xf2) & 4U) == 0)) {
      *(undefined4 *)(lVar19 + 0x1f30) = *(undefined4 *)(lVar29 + 0x38);
    }
    if (((*(byte *)(lVar29 + 0x18) & 8) != 0) && ((*(byte *)(lVar29 + 0xf2) & 4) == 0)) {
      *(undefined4 *)(lVar19 + 0x1f34) = *(undefined4 *)(lVar29 + 0x3c);
    }
    FUN_1804c1c10(lVar29,lVar19 + 0x1f30,*(undefined4 *)(lVar19 + 0x1f18));
  }
  if ((*(byte *)(lVar19 + 0x1f10) & 0x80) != 0) {
    if (auVar69._0_4_ <= *(float *)(lVar19 + 8000)) {
      *(float *)(lVar29 + 0xa8) = *(float *)(lVar19 + 8000);
      *(undefined4 *)(lVar29 + 0xb0) = 0;
    }
    if (auVar69._0_4_ <= *(float *)(lVar19 + 0x1f44)) {
      *(float *)(lVar29 + 0xac) = *(float *)(lVar19 + 0x1f44);
      *(undefined4 *)(lVar29 + 0xb4) = 0;
    }
  }
  if ((*(byte *)(lVar19 + 0x1f10) & 4) == 0) {
    if (local_1d0 != iVar25) {
      *(undefined8 *)(lVar29 + 0x50) = 0;
    }
  }
  else {
    *(undefined8 *)(lVar29 + 0x50) = *(undefined8 *)(lVar19 + 0x1f38);
  }
  if ((*(byte *)(lVar19 + 0x1f10) & 8) != 0) {
    cVar22 = *(char *)(lVar19 + 0x1f58);
    if ((*(uint *)(lVar19 + 0x1f1c) == 0) ||
       ((*(uint *)(lVar19 + 0x1f1c) & (int)*(char *)(lVar29 + 0xf3)) != 0)) {
      *(byte *)(lVar29 + 0xf3) = *(byte *)(lVar29 + 0xf3) & 0xf1;
      if (*(char *)(lVar29 + 0xd0) != '\0') {
        *(byte *)(lVar29 + 0xcf) = *(byte *)(lVar29 + 0xcf) ^ 1;
      }
      *(bool *)(lVar29 + 0xd0) = *(char *)(lVar29 + 0xcf) != cVar22;
    }
  }
  if ((*(byte *)(lVar19 + 0x1f10) & 0x20) != 0) {
    FUN_1804c8a10(lVar29,0);
  }
  if (*(char *)(lVar29 + 0xd3) != '\0') {
    *(byte *)(lVar29 + 0xf1) = *(byte *)(lVar29 + 0xf1) & 0xf7;
    *(byte *)(lVar29 + 0xf2) = *(byte *)(lVar29 + 0xf2) & 0xf7;
    *(byte *)(lVar29 + 0xf3) = *(byte *)(lVar29 + 0xf3) & 0xf7;
  }
  lVar40 = DAT_180bb8ae8;
  *(undefined1 *)(lVar29 + 0xd2) = 0;
  if (((((*(uint *)(lVar40 + 0x1f10) & 0x400) != 0) && ((*(uint *)(lVar40 + 0x1f8c) & 1) != 0)) &&
      (*(char *)(lVar29 + 0xd3) == '\0')) && (*(char *)(lVar29 + 0xd4) == '\0')) {
    if (((*(uint *)(lVar40 + 0x1f8c) & 2) != 0) && (*(longlong *)(lVar40 + 0x14d8) != 0)) {
      lVar30 = *(longlong *)(*(longlong *)(lVar40 + 0x14d8) + 0x3d8);
      if ((*(longlong *)(lVar29 + 0x3d8) == lVar30) || (*(longlong *)(lVar30 + 0x3d8) == lVar29))
      goto LAB_1804bf595;
      do {
        if (lVar30 == lVar29) goto LAB_1804bf595;
        lVar30 = *(longlong *)(lVar30 + 0x3d0);
      } while (lVar30 != 0);
    }
    if (((*(byte *)(lVar40 + 0x1f8c) & 4) != 0) && (*(longlong *)(lVar40 + 0x2040) != 0)) {
      lVar30 = *(longlong *)(*(longlong *)(lVar40 + 0x2040) + 0x3d8);
      if ((*(longlong *)(lVar29 + 0x3d8) == lVar30) || (*(longlong *)(lVar30 + 0x3d8) == lVar29))
      goto LAB_1804bf595;
      do {
        if (lVar30 == lVar29) goto LAB_1804bf595;
        lVar30 = *(longlong *)(lVar30 + 0x3d0);
      } while (lVar30 != 0);
    }
    *(undefined1 *)(lVar29 + 0xd2) = 1;
    *(undefined8 *)(lVar29 + 0x2c8) = 0;
  }
LAB_1804bf595:
  if ((*(char *)(lVar52 + -0x1a + lVar32) != '\0') && (*(longlong *)(lVar29 + 0x3d8) == lVar29)) {
    piVar1 = (int *)(lVar40 + 0x1fd8);
    *(undefined4 *)
     ((longlong)*(int *)(lVar40 + 0x14a0) * 0x88 + -0x18 + *(longlong *)(lVar40 + 0x14a8)) =
         *(undefined4 *)(lVar40 + 0xc84);
    *(uint *)(lVar40 + 0x1e80) = *(uint *)(lVar40 + 0x1e80) & 0xffffffbf;
    *(undefined4 *)(lVar40 + 0xc84) = *(undefined4 *)(lVar40 + 0x26a4);
    iVar25 = *(int *)(lVar40 + 0x1fdc);
    if (*piVar1 == iVar25) {
      iVar38 = *piVar1 + 1;
      if (iVar25 == 0) {
        iVar25 = 8;
      }
      else {
        iVar25 = iVar25 / 2 + iVar25;
      }
      if (iVar38 < iVar25) {
        iVar38 = iVar25;
      }
      FUN_1804d14d0(piVar1,iVar38);
    }
    *(undefined4 *)(*(longlong *)(lVar40 + 0x1fe0) + (longlong)*piVar1 * 4) =
         *(undefined4 *)(lVar40 + 0x1e80);
    *piVar1 = *piVar1 + 1;
    *(short *)(lVar40 + 0x26a8) = *(short *)(lVar40 + 0x26a8) + 1;
  }
  iVar38 = local_1c4;
  iVar25 = local_1d0;
  *(undefined8 *)(lVar19 + 0x14d0) = 0;
  if (local_1d0 == local_1c4) {
    if (*(char *)(lVar29 + 0xd2) != '\0') goto LAB_1804c1266;
LAB_1804c12ac:
    FUN_1804b75e0(lVar29);
    lVar40 = DAT_180bb8ae8;
    auVar56 = auVar69._0_16_;
    uVar27 = *(undefined4 *)(lVar29 + 0x1e0);
    auVar55 = vinsertps_avx(ZEXT416((uint)*(float *)(lVar29 + 0x28)),
                            ZEXT416((uint)*(float *)(lVar29 + 0x2c)),0x10);
    auVar55 = vinsertps_avx(auVar55,ZEXT416((uint)(*(float *)(lVar29 + 0x28) +
                                                  *(float *)(lVar29 + 0x38))),0x20);
    auVar55 = vinsertps_avx(auVar55,ZEXT416((uint)(*(float *)(lVar29 + 0x68) +
                                                  *(float *)(lVar29 + 0x2c))),0x30);
    auVar64._16_16_ = auVar55;
    auVar64._0_16_ = auVar55;
    *(undefined4 *)(DAT_180bb8ae8 + 0x1ec0) = *(undefined4 *)(lVar29 + 0x8c);
    *(undefined1 (*) [32])(lVar40 + 0x1ecc) = auVar64;
    *(undefined4 *)(lVar40 + 0x1ec4) = *(undefined4 *)(lVar40 + 0x1e80);
    *(undefined4 *)(lVar40 + 0x1ec8) = uVar27;
    lVar40 = local_1b8;
  }
  else {
    if (*(char *)(lVar29 + 0xd2) != '\0') {
LAB_1804c1266:
      *(undefined1 *)(lVar29 + 0xcc) = 1;
      plVar46 = *(longlong **)(lVar29 + 0x1b8);
      plVar49 = plVar46 + *(int *)(lVar29 + 0x1b0);
      if (plVar46 != plVar49) {
        do {
          lVar40 = *plVar46;
          if (*(char *)(lVar40 + 0xd4) == '\0') {
            *(undefined1 *)(lVar40 + 0xd2) = 1;
            *(undefined1 *)(lVar40 + 0xcc) = 1;
            FUN_1804beda0();
          }
          plVar46 = plVar46 + 1;
        } while (plVar46 != plVar49);
      }
      goto LAB_1804c12ac;
    }
    *(undefined1 *)(lVar29 + 0xcc) = 1;
    *(undefined1 *)(lVar29 + 0xd7) = 0;
    local_1c0 = uVar37 & 0x3000000;
    local_1cc = *(char *)(lVar29 + 0xec);
    *(undefined4 *)(lVar29 + 0x268) = 0xff7fffff;
    *(undefined4 *)(lVar29 + 0x26c) = 0xff7fffff;
    *(undefined4 *)(lVar29 + 0x270) = 0x7f7fffff;
    *(undefined4 *)(lVar29 + 0x274) = 0x7f7fffff;
    iVar25 = *(int *)(lVar29 + 0x10c);
    if (iVar25 < 1) {
      if (iVar25 == 0) {
        iVar25 = 8;
      }
      else {
        iVar25 = iVar25 / 2 + iVar25;
      }
      iVar38 = 1;
      if (1 < iVar25) {
        iVar38 = iVar25;
      }
      FUN_1804d14d0(lVar29 + 0x108,iVar38);
    }
    *(undefined4 *)(lVar29 + 0x108) = 1;
    FUN_1804d8e10(*(undefined8 *)(lVar29 + 0x2c8));
    *(undefined4 *)(lVar29 + 0x1d0) = 0xffffffff;
    if (*(char *)(lVar29 + 0x44c) != '\0') {
      *(undefined1 *)(lVar29 + 0x44c) = 0;
      FUN_1804d1090(*(longlong *)(lVar29 + 0x2c8) + 0x10,*(undefined4 *)(lVar29 + 0x444));
      FUN_1804d0cf0(*(longlong *)(lVar29 + 0x2c8) + 0x20,*(undefined4 *)(lVar29 + 0x448));
      *(undefined8 *)(lVar29 + 0x444) = 0;
    }
    bVar48 = local_1d7;
    lVar40 = DAT_180bb8ae8;
    bVar17 = false;
    if (((*(longlong *)(lVar19 + 0x2238) != 0) &&
        (*(char *)(*(longlong *)(lVar19 + 0x2238) + 0xcd) != '\0')) &&
       (bVar17 = false, (uVar37 >> 0x11 & 1) == 0)) {
      bVar17 = true;
    }
    if (((((uVar37 >> 0x1c & 1) != 0) || (bVar17)) || (local_1d7 != false)) && (local_1a8 != 0)) {
      lVar32 = *(longlong *)(lVar29 + 8);
      pcVar31 = local_1a0;
      do {
        cVar22 = *pcVar31;
        cVar44 = pcVar31[lVar32 - (longlong)local_1a0];
        if (cVar22 != cVar44) break;
        pcVar31 = pcVar31 + 1;
      } while (cVar44 != '\0');
      if (cVar22 != cVar44) {
        lVar52 = -1;
        do {
          lVar30 = lVar52;
          lVar52 = lVar30 + 1;
        } while (local_1a0[lVar30 + 1] != '\0');
        uVar50 = lVar30 + 2;
        uVar53 = (longlong)*(int *)(lVar29 + 0x88);
        if ((ulonglong)(longlong)*(int *)(lVar29 + 0x88) < uVar50) {
          if ((lVar32 != 0) && (DAT_180bb8ae8 != 0)) {
            piVar1 = (int *)(DAT_180bb8ae8 + 4);
            piVar42 = (int *)(DAT_180bb8ae8 + 0x2998 +
                             (longlong)*(short *)(DAT_180bb8ae8 + 0x2994) * 8);
            if (*piVar42 != *piVar1) {
              iVar25 = *(short *)(DAT_180bb8ae8 + 0x2994) + 1;
              sVar36 = (short)iVar25 + (short)(iVar25 / 6) * -6;
              *(short *)(DAT_180bb8ae8 + 0x2994) = sVar36;
              piVar42 = (int *)(lVar40 + ((longlong)sVar36 + 0x533) * 8);
              *piVar42 = *piVar1;
              piVar42[1] = 0;
            }
            *(short *)((longlong)piVar42 + 6) = *(short *)((longlong)piVar42 + 6) + 1;
            piVar1 = (int *)(lVar40 + 0x2990);
            *piVar1 = *piVar1 + 1;
          }
          thunk_FUN_180621380(lVar32);
          lVar32 = FUN_1804b8110(uVar50);
          uVar53 = uVar50;
        }
        uVar33 = FUN_18063aed0(lVar32,local_1a0,uVar50);
        *(undefined8 *)(lVar29 + 8) = uVar33;
        *(int *)(lVar29 + 0x88) = (int)uVar53;
        *(undefined8 *)(*(longlong *)(lVar29 + 0x2c8) + 0xf0) = uVar33;
      }
    }
    lVar40 = local_1a8;
    FUN_1804bc560(lVar29,lVar29 + 0x40,lVar29 + 0x48);
    cVar22 = local_1d8;
    if ('\0' < *(char *)(lVar29 + 0xeb)) {
      *(char *)(lVar29 + 0xeb) = *(char *)(lVar29 + 0xeb) + -1;
    }
    if ('\0' < *(char *)(lVar29 + 0xec)) {
      *(char *)(lVar29 + 0xec) = *(char *)(lVar29 + 0xec) + -1;
    }
    if ('\0' < *(char *)(lVar29 + 0xed)) {
      *(char *)(lVar29 + 0xed) = *(char *)(lVar29 + 0xed) + -1;
    }
    if ((lVar40 == 0) && ((!bVar54 || (local_1d8 == '\0')))) {
      *(undefined1 *)(lVar29 + 0xec) = 1;
    }
    if (((bVar48 != false) && ((uVar37 & 0x6000000) != 0)) &&
       (*(undefined1 *)(lVar29 + 0xec) = 1, (uVar37 & 0x40) != 0)) {
      if (!bVar54) {
        *(undefined4 *)(lVar29 + 0x38) = 0;
        *(undefined4 *)(lVar29 + 0x30) = 0;
      }
      if (local_1d8 == '\0') {
        *(undefined4 *)(lVar29 + 0x3c) = 0;
        *(undefined4 *)(lVar29 + 0x34) = 0;
      }
      *(undefined8 *)(lVar29 + 0x48) = 0;
      *(undefined8 *)(lVar29 + 0x40) = 0;
    }
    local_160 = **(longlong **)(DAT_180bb8ae8 + 0x2030);
    *(longlong *)(lVar29 + 0x20) = local_160;
    FUN_1804b75e0(lVar29);
    if ((uVar37 >> 0x18 & 1) == 0) {
      if (((uVar37 & 0x6000000) == 0) || ((uVar37 >> 0x1b & 1) != 0)) {
        fVar68 = *(float *)(lVar19 + 0xc98);
      }
      else {
        fVar68 = *(float *)(lVar19 + 0xcc0);
      }
    }
    else {
      fVar68 = *(float *)(lVar19 + 0xcb8);
    }
    *(float *)(lVar29 + 100) = fVar68;
    *(undefined8 *)(lVar29 + 0x58) = *(undefined8 *)(lVar19 + 0xc8c);
    fVar67 = auVar69._0_4_;
    if ((((uVar37 & 0x5000000) == 0x1000000) && ((*(byte *)(lVar29 + 0x18) & 2) == 0)) &&
       (fVar68 == fVar67)) {
      fVar68 = fVar67;
      if ((uVar37 >> 10 & 1) != 0) {
        fVar68 = *(float *)(lVar19 + 0xc90);
      }
      *(float *)(lVar29 + 0x5c) = fVar68;
      *(undefined4 *)(lVar29 + 0x58) = 0;
    }
    auVar55 = vmaxss_avx(ZEXT416(*(uint *)(lVar29 + 0x58)),ZEXT416(*(uint *)(lVar19 + 0xcd4)));
    auVar55 = vmaxss_avx(auVar55,ZEXT416(*(uint *)(lVar19 + 0x1f84)));
    *(int *)(lVar29 + 0x17c) = auVar55._0_4_;
    fVar68 = *(float *)(lVar19 + 0x1f88);
    *(float *)(lVar29 + 0x180) = fVar68;
    fVar57 = fVar67;
    if ((uVar37 & 1) == 0) {
      fVar57 = *(float *)(lVar19 + 0xcc8) + *(float *)(lVar19 + 0xcc8) + *(float *)(lVar19 + 0x11e0)
      ;
    }
    *(float *)(lVar29 + 0x68) = fVar57;
    fVar62 = fVar67;
    if ((uVar37 >> 10 & 1) != 0) {
      fVar62 = fVar68 + *(float *)(lVar19 + 0x11e0) +
               *(float *)(lVar19 + 0xcc8) + *(float *)(lVar19 + 0xcc8);
    }
    *(float *)(lVar29 + 0x6c) = fVar62;
    *(undefined4 *)(lVar29 + 0x2c0) = *(undefined4 *)(lVar19 + 0x11e0);
    lVar40 = DAT_180bb8ae8;
    uVar24 = local_1d4 & 0xff;
    local_1c8 = local_1d4 & 0xff;
    if ((bVar54) && (*(float *)(lVar29 + 0x50) != fVar67)) {
      local_1d4 = (uint)CONCAT71((uint7)(uint3)(local_1d4 >> 8),1);
    }
    if ((cVar22 != '\0') && (*(float *)(lVar29 + 0x54) != fVar67)) {
      uVar24 = 1;
      local_1c8 = 1;
    }
    if ((uVar37 & 0x21) == 0) {
      if ((((*(longlong *)(lVar19 + 0x14d8) == lVar29) && (*(int *)(lVar19 + 0x1538) == 0)) &&
          (*(int *)(lVar19 + 0x153c) == 0)) && (*(int *)(lVar19 + 0x1550) == 0)) {
        lVar32 = *(longlong *)(DAT_180bb8ae8 + 0x14d0);
        auVar55 = vmaxss_avx(ZEXT416((uint)*(float *)(lVar29 + 0x28)),
                             ZEXT416(*(uint *)(lVar32 + 0x268)));
        auVar56 = vmaxss_avx(ZEXT416(*(uint *)(lVar29 + 0x2c)),ZEXT416(*(uint *)(lVar32 + 0x26c)));
        auVar58 = vminss_avx(ZEXT416((uint)(*(float *)(lVar29 + 0x28) + *(float *)(lVar29 + 0x38))),
                             ZEXT416(*(uint *)(lVar32 + 0x270)));
        auVar13 = vminss_avx(ZEXT416((uint)(fVar57 + *(float *)(lVar29 + 0x2c))),
                             ZEXT416(*(uint *)(lVar32 + 0x274)));
        if (auVar55._0_4_ - *(float *)(DAT_180bb8ae8 + 0xcec) <= *(float *)(DAT_180bb8ae8 + 0x110))
        {
          if (((auVar56._0_4_ - *(float *)(DAT_180bb8ae8 + 0xcf0) <=
                *(float *)(DAT_180bb8ae8 + 0x114)) &&
              (*(float *)(DAT_180bb8ae8 + 0x110) < *(float *)(DAT_180bb8ae8 + 0xcec) + auVar58._0_4_
              )) && ((*(float *)(DAT_180bb8ae8 + 0x114) <
                      *(float *)(DAT_180bb8ae8 + 0xcf0) + auVar13._0_4_ &&
                     ((*(short *)(lVar19 + 0xb4a) == 2 && (*(int *)(DAT_180bb8ae8 + 0x1c94) == -1)))
                     ))) {
            uVar27 = *(undefined4 *)(lVar29 + 0x8c);
            *(undefined1 *)(lVar29 + 0xd0) = 1;
            *(undefined4 *)(lVar40 + 0x1c98) = uVar27;
            *(undefined4 *)(lVar40 + 0x1c94) = uVar27;
            *(undefined2 *)(lVar40 + 0x1c9c) = 0;
          }
        }
      }
      if (*(char *)(lVar29 + 0xd0) != '\0') {
        cVar44 = *(char *)(lVar29 + 0xcf);
        *(bool *)(lVar29 + 0xcf) = cVar44 == '\0';
        if (cVar44 != '\0') {
          uVar24 = 1;
        }
        local_1c8 = uVar24;
        if (((*(uint *)(lVar29 + 0x14) & 0x100) == 0) && (*(float *)(lVar40 + 0x277c) <= fVar67)) {
          *(undefined4 *)(lVar40 + 0x277c) = *(undefined4 *)(lVar40 + 0x44);
        }
      }
    }
    else {
      *(undefined1 *)(lVar29 + 0xcf) = 0;
    }
    *(undefined1 *)(lVar29 + 0xd0) = 0;
    *(undefined4 *)(lVar29 + 0x70) = 0;
    *(undefined8 *)(lVar29 + 0x78) = 0;
    fVar68 = *(float *)(lVar29 + 0xc0);
    fVar67 = *(float *)(lVar29 + 0xc4);
    *(undefined8 *)(lVar29 + 0xc0) = 0;
    *(float *)(lVar29 + 0x74) = *(float *)(lVar29 + 0x6c) + *(float *)(lVar29 + 0x68);
    if (((bVar54) || ((uVar37 & 0x40) == 0)) || (*(char *)(lVar29 + 0xcf) != '\0')) {
      bVar54 = false;
    }
    else {
      bVar54 = true;
    }
    if (((cVar22 == '\0') && ((uVar37 & 0x40) != 0)) && (*(char *)(lVar29 + 0xcf) == '\0')) {
      bVar17 = true;
    }
    else {
      bVar17 = false;
    }
    if ((local_1d6 == '\0') && ('\0' < *(char *)(lVar29 + 0xe8))) {
      bVar48 = true;
    }
    else {
      bVar48 = false;
    }
    if ((cVar22 == '\0') && ('\0' < *(char *)(lVar29 + 0xe9))) {
      bVar18 = true;
    }
    else {
      bVar18 = false;
    }
    uVar33 = FUN_1804bc6c0(&local_1b0,lVar29,lVar29 + 0x48);
    fVar57 = *(float *)(lVar29 + 0x38);
    fVar62 = *(float *)(lVar29 + 0x3c);
    fVar59 = (float)local_1b0;
    if (bVar54) {
LAB_1804bfd6e:
      local_1d4 = (uint)CONCAT71((int7)((ulonglong)uVar33 >> 8),1);
      *(float *)(lVar29 + 0x38) = fVar59;
    }
    else {
      fVar59 = fVar57;
      if (bVar48) {
        fVar59 = (float)local_1b0;
        if (*(char *)(lVar29 + 0xea) != '\0') {
          auVar55 = vmaxss_avx(ZEXT416((uint)fVar57),ZEXT416((uint)(float)local_1b0));
          fVar59 = auVar55._0_4_;
        }
        goto LAB_1804bfd6e;
      }
    }
    if (bVar17) {
      *(uint *)(lVar29 + 0x3c) = local_1b0._4_4_;
      uVar24 = 1;
    }
    else if (bVar18) {
      if (*(char *)(lVar29 + 0xea) == '\0') {
        *(uint *)(lVar29 + 0x3c) = local_1b0._4_4_;
        uVar24 = 1;
      }
      else {
        auVar55 = vmaxss_avx(ZEXT416(*(uint *)(lVar29 + 0x3c)),ZEXT416(local_1b0._4_4_));
        *(int *)(lVar29 + 0x3c) = auVar55._0_4_;
        uVar24 = 1;
      }
    }
    else {
      uVar24 = local_1c8;
    }
    if ((((fVar57 != fVar59) || (fVar62 != *(float *)(lVar29 + 0x3c))) &&
        ((*(uint *)(lVar29 + 0x14) & 0x100) == 0)) &&
       (*(float *)(DAT_180bb8ae8 + 0x277c) <= auVar69._0_4_)) {
      *(undefined4 *)(DAT_180bb8ae8 + 0x277c) = *(undefined4 *)(DAT_180bb8ae8 + 0x44);
    }
    pfVar34 = (float *)FUN_1804bc370(local_148,lVar29,lVar29 + 0x38);
    lVar40 = local_1b8;
    cVar22 = local_1d5;
    bVar54 = local_1d7;
    fVar57 = *pfVar34;
    fVar62 = pfVar34[1];
    *(float *)(lVar29 + 0x38) = fVar57;
    *(float *)(lVar29 + 0x3c) = fVar62;
    if ((*(char *)(lVar29 + 0xcf) == '\0') || ((uVar37 >> 0x18 & 1) != 0)) {
      auVar56 = vunpcklps_avx(ZEXT416((uint)fVar57),ZEXT416((uint)fVar62));
      local_1b0._0_4_ = auVar56._0_4_;
      auVar55 = vshufps_avx(auVar56,auVar56,0x55);
      fVar62 = auVar55._0_4_;
      fVar57 = (float)local_1b0;
      local_1b0 = auVar56._0_8_;
    }
    else {
      fVar62 = (*(float *)(lVar29 + 0x68) + *(float *)(lVar29 + 0x2c)) - *(float *)(lVar29 + 0x2c);
      fVar57 = (fVar57 + *(float *)(lVar29 + 0x28)) - *(float *)(lVar29 + 0x28);
    }
    *(float *)(lVar29 + 0x30) = fVar57;
    *(float *)(lVar29 + 0x34) = fVar62;
    if (((local_1d7 != false) &&
        (*(undefined4 *)(lVar29 + 0xe4) = 0xffffffff, (uVar37 & 0xc000000) == 0x4000000)) &&
       (local_1d5 == '\0')) {
      lVar32 = (longlong)*(int *)(lVar19 + 0x2008) * 0x38;
      uVar27 = *(undefined4 *)(lVar32 + -0x14 + *(longlong *)(lVar19 + 0x2010));
      *(undefined4 *)(lVar29 + 0x2c) =
           *(undefined4 *)(lVar32 + -0x10 + *(longlong *)(lVar19 + 0x2010));
      *(undefined4 *)(lVar29 + 0x28) = uVar27;
    }
    if ((uVar37 >> 0x18 & 1) != 0) {
      piVar1 = (int *)(local_1b8 + 0x1b0);
      *(undefined2 *)(lVar29 + 0xde) = *(undefined2 *)piVar1;
      iVar25 = *(int *)(local_1b8 + 0x1b4);
      if (*piVar1 == iVar25) {
        iVar38 = *piVar1 + 1;
        if (iVar25 == 0) {
          iVar25 = 8;
        }
        else {
          iVar25 = iVar25 / 2 + iVar25;
        }
        if (iVar38 < iVar25) {
          iVar38 = iVar25;
        }
        FUN_1804d0a80(piVar1,iVar38);
      }
      *(longlong *)(*(longlong *)(lVar40 + 0x1b8) + (longlong)*piVar1 * 8) = lVar29;
      *piVar1 = *piVar1 + 1;
      if ((((uVar37 >> 0x1a & 1) == 0) && (cVar22 == '\0')) && (local_1c0 != 0x3000000)) {
        *(undefined8 *)(lVar29 + 0x28) = *(undefined8 *)(local_1b8 + 0x118);
      }
    }
    uVar20 = local_1c0;
    if ((*(float *)(lVar29 + 0xf4) == 3.4028235e+38) || (*(char *)(lVar29 + 0xec) != '\0')) {
      if ((uVar37 >> 0x1c & 1) == 0) {
        if ((((uVar37 >> 0x1a & 1) == 0) || (cVar22 != '\0')) || (local_1cc < '\x01')) {
          if ((((uVar37 >> 0x19 & 1) == 0) || (cVar22 != '\0')) || (local_1c0 == 0x3000000))
          goto LAB_1804c0003;
          puVar43 = local_130;
        }
        else {
          puVar43 = local_138;
        }
      }
      else {
        puVar43 = local_140;
      }
      puVar47 = (undefined4 *)FUN_1804c8400(puVar43);
      uVar27 = *puVar47;
      *(undefined4 *)(lVar29 + 0x2c) = puVar47[1];
      *(undefined4 *)(lVar29 + 0x28) = uVar27;
    }
    else {
      local_188 = *(float *)(lVar29 + 0xf4) - *(float *)(lVar29 + 0xfc) * *(float *)(lVar29 + 0x30);
      local_184 = *(float *)(lVar29 + 0xf8) - *(float *)(lVar29 + 0x34) * *(float *)(lVar29 + 0x100)
      ;
      FUN_1804c1ac0(lVar29,&local_188,0);
    }
LAB_1804c0003:
    auVar55 = vmaxss_avx(ZEXT416(*(uint *)(lVar19 + 0xda0)),ZEXT416(*(uint *)(lVar19 + 0xda8)));
    local_180 = *(float *)(local_160 + 8);
    fStack_17c = *(float *)(local_160 + 0xc);
    fStack_178 = local_180 + *(float *)(local_160 + 0x10);
    fStack_174 = fStack_17c + *(float *)(local_160 + 0x14);
    auVar56 = vmaxss_avx(ZEXT416(*(uint *)(lVar19 + 0xd9c)),ZEXT416(*(uint *)(lVar19 + 0xda4)));
    local_100 = (*(float *)(local_160 + 0x20) + *(float *)(local_160 + 0x28)) - auVar56._0_4_;
    local_108 = auVar56._0_4_ + *(float *)(local_160 + 0x20);
    local_fc = (*(float *)(local_160 + 0x24) + *(float *)(local_160 + 0x2c)) - auVar55._0_4_;
    local_104 = auVar55._0_4_ + *(float *)(local_160 + 0x24);
    if (((cVar22 == '\0') && ((uVar37 >> 0x18 & 1) == 0)) &&
       ((auVar69._0_4_ < fStack_178 - local_180 && (auVar69._0_4_ < fStack_174 - fStack_17c)))) {
      fVar57 = *(float *)(lVar29 + 0x34);
      if (((*(byte *)(lVar29 + 0xf0) & 1) == 0) && ((*(byte *)(lVar29 + 0x14) & 1) == 0)) {
        fVar57 = *(float *)(lVar29 + 0x68);
      }
      fVar62 = local_108 - *(float *)(lVar29 + 0x30);
      fVar57 = local_104 - fVar57;
      if (fVar57 <= *(float *)(lVar29 + 0x2c)) {
        auVar55 = vminss_avx(ZEXT416((uint)local_fc),ZEXT416((uint)*(float *)(lVar29 + 0x2c)));
        fVar57 = auVar55._0_4_;
      }
      if (fVar62 <= *(float *)(lVar29 + 0x28)) {
        auVar55 = vminss_avx(ZEXT416((uint)local_100),ZEXT416((uint)*(float *)(lVar29 + 0x28)));
        fVar62 = auVar55._0_4_;
      }
      *(float *)(lVar29 + 0x28) = fVar62;
      *(float *)(lVar29 + 0x2c) = fVar57;
    }
    local_1c8 = (uint)*(float *)(lVar29 + 0x28);
    *(float *)(lVar29 + 0x28) = (float)(int)local_1c8;
    *(float *)(lVar29 + 0x2c) = (float)(int)*(float *)(lVar29 + 0x2c);
    if ((uVar37 >> 0x18 & 1) == 0) {
      local_1c8 = uVar37 & 0xc000000;
      if (local_1c8 == 0x4000000) {
        fVar57 = *(float *)(lVar19 + 0xcbc);
      }
      else {
        fVar57 = *(float *)(lVar19 + 0xc94);
      }
    }
    else {
      fVar57 = *(float *)(lVar19 + 0xcb4);
    }
    local_1c8 = local_1c8 & 0xffffff00;
    *(float *)(lVar29 + 0x60) = fVar57;
    if ((bVar54 != false) && ((uVar37 >> 0xc & 1) == 0)) {
      if ((uVar37 >> 0x1a & 1) == 0) {
        local_1c8 = (uint)((uVar37 & 0x3000000) == 0);
      }
      else {
        uVar51 = local_1c8 >> 8;
        local_1c8 = CONCAT31((int3)uVar51,1);
      }
    }
    bVar54 = true;
    if ((uVar37 >> 0x18 & 1) != 0) {
      bVar54 = *(char *)(*(longlong *)(lVar29 + 0x3c8) + 0xd1) == '\0';
    }
    local_110 = 0xffffffff;
    local_10c = 0xffffffff;
    local_f8 = (undefined1  [16])0x0;
    if ((uVar37 & 0x5000000) == 0x1000000) {
      uVar51 = (uint)(((byte)*(undefined4 *)(lVar29 + 0x18) & 0xc) == 0xc);
    }
    else {
      uVar51 = (*(char *)(lVar19 + 0x81) != '\0') + 1;
    }
    auVar55 = vmaxss_avx(ZEXT416((uint)(*(float *)(lVar19 + 0x11e0) * 1.1)),
                         ZEXT416((uint)(fVar57 + fVar66 + *(float *)(lVar19 + 0x11e0) * 0.2)));
    fVar66 = (float)(int)auVar55._0_4_;
    if ((bVar54 == false) || (*(char *)(lVar29 + 0xcf) != '\0')) {
      uVar39 = local_1d4;
    }
    else {
      local_1f0 = &local_108;
      local_1f8 = local_f8;
      uVar26 = FUN_1804bcd60(lVar29,&local_110,&local_10c);
      uVar39 = local_1d4;
      if (uVar26 != 0) {
        uVar39 = local_1d4 & 0xff;
        uVar24 = uVar24 & 0xff;
        if ((uVar26 & 1) != 0) {
          uVar39 = 1;
        }
        if ((uVar26 & 2) != 0) {
          uVar24 = 1;
        }
      }
    }
    *(undefined1 *)(lVar29 + 0xd8) = (undefined1)local_110;
    *(undefined1 *)(lVar29 + 0xd9) = (undefined1)local_10c;
    fVar57 = auVar69._0_4_;
    if (*(char *)(lVar29 + 0xcf) == '\0') {
      fVar62 = fVar57;
      fVar59 = fVar57;
      if (local_1a8 != 0) {
        fVar62 = *(float *)(lVar29 + 0x5c) + *(float *)(lVar29 + 0x5c) + *(float *)(lVar29 + 0x44);
        fVar59 = *(float *)(lVar29 + 0x58) + *(float *)(lVar29 + 0x58) + *(float *)(lVar29 + 0x40);
      }
      cVar22 = *(char *)(lVar29 + 200);
      auVar55 = vpcmpeqd_avx(ZEXT416(uVar39 & 0xff),SUB6416(ZEXT464(0),0));
      auVar55 = vblendvps_avx(ZEXT416(*(uint *)(lVar29 + 0x38)),
                              ZEXT416((uint)((*(float *)(lVar29 + 0x230) -
                                             *(float *)(lVar29 + 0x228)) + fVar68)),auVar55);
      auVar56 = vpcmpeqd_avx(ZEXT416(uVar24 & 0xff),SUB6416(ZEXT464(0),0));
      auVar56 = vblendvps_avx(ZEXT416((uint)(*(float *)(lVar29 + 0x3c) -
                                            (*(float *)(lVar29 + 0x7c) + *(float *)(lVar29 + 0x74)))
                                     ),ZEXT416((uint)((*(float *)(lVar29 + 0x234) -
                                                      *(float *)(lVar29 + 0x22c)) + fVar67)),auVar56
                             );
      if (((uVar37 >> 0xe & 1) != 0) || ((auVar56._0_4_ < fVar62 && ((uVar37 & 8) == 0)))) {
        cVar44 = '\x01';
      }
      else {
        cVar44 = '\0';
      }
      *(char *)(lVar29 + 0xc9) = cVar44;
      if ((uVar37 >> 0xf & 1) == 0) {
        fVar68 = fVar57;
        if (cVar44 != '\0') {
          fVar68 = *(float *)(lVar19 + 0xcfc);
        }
        if ((auVar55._0_4_ - fVar68 < fVar59) && ((uVar37 & 0x808) == 0x800)) goto LAB_1804c03a6;
        cVar21 = '\0';
      }
      else {
LAB_1804c03a6:
        cVar21 = '\x01';
      }
      *(char *)(lVar29 + 200) = cVar21;
      bVar35 = cVar22 != cVar21 | *(char *)(lVar29 + 0xcb) * '\x02';
      *(byte *)(lVar29 + 0xcb) = bVar35;
      if (bVar35 == 0) {
LAB_1804c03ea:
        uVar23 = 0;
      }
      else {
        uVar24 = 0;
        do {
          bVar35 = bVar35 - 1 & bVar35;
          uVar24 = uVar24 + 1;
        } while (bVar35 != 0);
        if (uVar24 < 4) goto LAB_1804c03ea;
        uVar23 = 1;
        *(undefined1 *)(lVar29 + 200) = 1;
      }
      *(undefined1 *)(lVar29 + 0xca) = uVar23;
      fVar68 = fVar57;
      if (*(char *)(lVar29 + 200) != '\0') {
        if (cVar44 == '\0') {
          if ((auVar56._0_4_ - *(float *)(lVar19 + 0xcfc) < fVar62) && ((uVar37 & 8) == 0)) {
            *(undefined1 *)(lVar29 + 0xc9) = 1;
            fVar68 = *(float *)(lVar19 + 0xcfc);
            goto LAB_1804c043c;
          }
          *(undefined1 *)(lVar29 + 0xc9) = 0;
        }
        fVar68 = *(float *)(lVar19 + 0xcfc);
      }
LAB_1804c043c:
      fVar67 = fVar57;
      if (*(char *)(lVar29 + 0xc9) != '\0') {
        fVar67 = *(float *)(lVar19 + 0xcfc);
      }
      *(float *)(lVar29 + 0xc0) = fVar67;
      *(float *)(lVar29 + 0x78) = fVar67 + *(float *)(lVar29 + 0x78);
      *(float *)(lVar29 + 0x7c) = fVar68 + *(float *)(lVar29 + 0x7c);
      *(float *)(lVar29 + 0xc4) = fVar68;
    }
    if (((uVar37 & 0x5000000) == 0x1000000) && (uVar20 != 0x3000000)) {
      pfVar34 = (float *)(local_1b8 + 0x268);
    }
    else {
      pfVar34 = &local_180;
    }
    uVar33 = *(undefined8 *)pfVar34;
    uVar65 = *(undefined8 *)(pfVar34 + 2);
    fStack_11c = *(float *)(lVar29 + 0x2c);
    local_120 = *(float *)(lVar29 + 0x28);
    fStack_118 = local_120 + *(float *)(lVar29 + 0x38);
    fStack_114 = fStack_11c + *(float *)(lVar29 + 0x68);
    *(float *)(lVar29 + 0x218) = local_120;
    *(float *)(lVar29 + 0x21c) = fStack_11c;
    *(float *)(lVar29 + 0x220) = local_120 + *(float *)(lVar29 + 0x30);
    *(float *)(lVar29 + 0x224) = fStack_11c + *(float *)(lVar29 + 0x34);
    local_198._0_4_ = (float)uVar33;
    local_198._4_4_ = (float)((ulonglong)uVar33 >> 0x20);
    uStack_190._4_4_ = (uint)((ulonglong)uVar65 >> 0x20);
    uStack_190._0_4_ = (uint)uVar65;
    auVar55 = vmaxss_avx(ZEXT416(*(uint *)(lVar29 + 0x218)),ZEXT416((uint)(float)local_198));
    *(int *)(lVar29 + 0x218) = auVar55._0_4_;
    auVar55 = vmaxss_avx(ZEXT416((uint)fStack_11c),ZEXT416((uint)local_198._4_4_));
    *(int *)(lVar29 + 0x21c) = auVar55._0_4_;
    auVar55 = vminss_avx(ZEXT416(*(uint *)(lVar29 + 0x224)),ZEXT416(uStack_190._4_4_));
    auVar56 = vminss_avx(ZEXT416(*(uint *)(lVar29 + 0x220)),ZEXT416((uint)uStack_190));
    *(int *)(lVar29 + 0x220) = auVar56._0_4_;
    *(int *)(lVar29 + 0x224) = auVar55._0_4_;
    fVar62 = (*(float *)(lVar29 + 0x28) + *(float *)(lVar29 + 0x30)) - *(float *)(lVar29 + 0x78);
    fVar59 = (*(float *)(lVar29 + 0x2c) + *(float *)(lVar29 + 0x34)) - *(float *)(lVar29 + 0x7c);
    fVar68 = *(float *)(lVar29 + 0x28) + *(float *)(lVar29 + 0x70);
    fVar67 = *(float *)(lVar29 + 0x2c) + *(float *)(lVar29 + 0x74);
    *(float *)(lVar29 + 0x234) = fVar59;
    *(float *)(lVar29 + 0x228) = fVar68;
    *(float *)(lVar29 + 0x22c) = fVar67;
    *(float *)(lVar29 + 0x230) = fVar62;
    if ((uVar37 & 0x401) == 1) {
      fVar60 = *(float *)(lVar29 + 100);
    }
    else {
      fVar60 = *(float *)(lVar19 + 0xcd0);
    }
    fVar14 = *(float *)(lVar29 + 100) * 0.5;
    fVar68 = fVar68 + 0.5 + fVar14;
    iVar25 = (int)fVar68;
    if ((fVar68 < fVar57) && ((float)iVar25 != fVar68)) {
      iVar25 = iVar25 + -1;
    }
    fVar68 = fVar60 * 0.5 + fVar67 + 0.5;
    *(float *)(lVar29 + 0x238) = (float)iVar25;
    iVar25 = (int)fVar68;
    if ((fVar68 < fVar57) && ((float)iVar25 != fVar68)) {
      iVar25 = iVar25 + -1;
    }
    fVar62 = fVar62 - fVar14;
    *(float *)(lVar29 + 0x23c) = (float)iVar25;
    iVar25 = (int)fVar62;
    if ((fVar62 < fVar57) && ((float)iVar25 != fVar62)) {
      iVar25 = iVar25 + -1;
    }
    fVar59 = fVar59 - fVar14;
    *(float *)(lVar29 + 0x240) = (float)iVar25;
    iVar25 = (int)fVar59;
    if ((fVar59 < fVar57) && ((float)iVar25 != fVar59)) {
      iVar25 = iVar25 + -1;
    }
    *(float *)(lVar29 + 0x244) = (float)iVar25;
    fVar68 = local_198._4_4_;
    if (local_198._4_4_ <= *(float *)(lVar29 + 0x23c)) {
      auVar55 = vminss_avx(ZEXT416(uStack_190._4_4_),ZEXT416((uint)*(float *)(lVar29 + 0x23c)));
      fVar68 = auVar55._0_4_;
    }
    if ((float)local_198 <= *(float *)(lVar29 + 0x238)) {
      auVar55 = vminss_avx(ZEXT416((uint)uStack_190),ZEXT416((uint)*(float *)(lVar29 + 0x238)));
      fVar67 = auVar55._0_4_;
    }
    else {
      fVar67 = (float)local_198;
    }
    *(float *)(lVar29 + 0x238) = fVar67;
    *(float *)(lVar29 + 0x23c) = fVar68;
    if (local_198._4_4_ <= *(float *)(lVar29 + 0x244)) {
      auVar55 = vminss_avx(ZEXT416(uStack_190._4_4_),ZEXT416((uint)*(float *)(lVar29 + 0x244)));
      local_198._4_4_ = auVar55._0_4_;
    }
    if ((float)local_198 <= *(float *)(lVar29 + 0x240)) {
      auVar55 = vminss_avx(ZEXT416((uint)uStack_190),ZEXT416((uint)*(float *)(lVar29 + 0x240)));
      local_198._0_4_ = auVar55._0_4_;
    }
    *(float *)(lVar29 + 0x240) = (float)local_198;
    *(float *)(lVar29 + 0x244) = local_198._4_4_;
    auVar55 = vmaxss_avx(auVar69._0_16_,
                         ZEXT416((uint)((*(float *)(lVar29 + 0x58) + *(float *)(lVar29 + 0x58) +
                                        *(float *)(lVar29 + 0x40)) -
                                       (*(float *)(lVar29 + 0x230) - *(float *)(lVar29 + 0x228)))));
    *(int *)(lVar29 + 0xa0) = auVar55._0_4_;
    auVar55 = vmaxss_avx(auVar69._0_16_,
                         ZEXT416((uint)((*(float *)(lVar29 + 0x5c) + *(float *)(lVar29 + 0x5c) +
                                        *(float *)(lVar29 + 0x44)) -
                                       (*(float *)(lVar29 + 0x234) - *(float *)(lVar29 + 0x22c)))));
    *(int *)(lVar29 + 0xa4) = auVar55._0_4_;
    local_198 = uVar33;
    uStack_190 = uVar65;
    puVar47 = (undefined4 *)FUN_1804c6df0(local_128,lVar29);
    uVar27 = puVar47[1];
    *(undefined4 *)(lVar29 + 0x98) = *puVar47;
    *(undefined4 *)(lVar29 + 0x9c) = uVar27;
    *(undefined4 *)(lVar29 + 0xa8) = 0x7f7fffff;
    *(undefined4 *)(lVar29 + 0xac) = 0x7f7fffff;
    *(undefined8 *)(lVar29 + 0x80) = 0;
    lVar40 = *(longlong *)(lVar29 + 0x2c8);
    fVar68 = *(float *)(*(longlong *)(lVar29 + 0x20) + 0x18);
    *(float *)(lVar40 + 0xe0) = 1.0 / fVar68;
    *(float *)(lVar40 + 0xe4) = fVar68;
    *(bool *)(lVar40 + 0xe8) = (float)(int)fVar68 == fVar68;
    lVar40 = *(longlong *)(lVar29 + 0x2c8);
    lVar32 = *(longlong *)(*(longlong *)(lVar19 + 0x11d0) + 8);
    piVar1 = (int *)(lVar40 + 0xb0);
    iVar25 = *(int *)(lVar40 + 0xb4);
    uVar33 = *(undefined8 *)(lVar32 + 0x28);
    uVar65 = *(undefined8 *)(lVar32 + 0x30);
    if (*piVar1 == iVar25) {
      iVar38 = *piVar1 + 1;
      if (iVar25 == 0) {
        iVar25 = 8;
      }
      else {
        iVar25 = iVar25 / 2 + iVar25;
      }
      if (iVar38 < iVar25) {
        iVar38 = iVar25;
      }
      FUN_1804aec70(piVar1,iVar38);
    }
    puVar3 = (undefined8 *)(*(longlong *)(lVar40 + 0xb8) + (longlong)*piVar1 * 0x10);
    *puVar3 = uVar33;
    puVar3[1] = uVar65;
    *piVar1 = *piVar1 + 1;
    *(undefined8 *)(lVar40 + 0x70) = uVar33;
    *(undefined8 *)(lVar40 + 0x78) = uVar65;
    FUN_1804d92c0(lVar40);
    lVar40 = DAT_180bb8ae8;
    *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
    lVar40 = *(longlong *)(lVar40 + 0x14d0);
    FUN_1804d9420(*(undefined8 *)(lVar40 + 0x2c8),&local_198,&uStack_190,0);
    lVar52 = (longlong)*(int *)(*(longlong *)(lVar40 + 0x2c8) + 0xa0);
    lVar32 = *(longlong *)(*(longlong *)(lVar40 + 0x2c8) + 0xa8);
    uVar27 = *(undefined4 *)(lVar32 + -0xc + lVar52 * 0x10);
    uVar4 = *(undefined4 *)(lVar32 + -8 + lVar52 * 0x10);
    uVar5 = *(undefined4 *)(lVar32 + -4 + lVar52 * 0x10);
    *(undefined4 *)(lVar40 + 0x268) = *(undefined4 *)(lVar32 + -0x10 + lVar52 * 0x10);
    *(undefined4 *)(lVar40 + 0x26c) = uVar27;
    *(undefined4 *)(lVar40 + 0x270) = uVar4;
    *(undefined4 *)(lVar40 + 0x274) = uVar5;
    bVar17 = false;
    if (((uVar37 & 0x5000000) == 0x1000000) && (local_1c0 != 0x3000000)) {
      if ((*(int *)(local_1b8 + 0x1b0) < 2) ||
         (lVar40 = *(longlong *)
                    (*(longlong *)(local_1b8 + 0x1b8) + -0x10 +
                    (longlong)*(int *)(local_1b8 + 0x1b0) * 8), lVar40 == 0)) {
LAB_1804c0976:
        bVar48 = false;
      }
      else {
        if ((((*(float *)(lVar40 + 0x2c) + *(float *)(lVar40 + 0x34) <= *(float *)(lVar29 + 0x2c))
             || (*(float *)(lVar29 + 0x2c) + *(float *)(lVar29 + 0x34) <= *(float *)(lVar40 + 0x2c))
             ) || (*(float *)(lVar40 + 0x28) + *(float *)(lVar40 + 0x30) <=
                   *(float *)(lVar29 + 0x28))) ||
           (*(float *)(lVar29 + 0x28) + *(float *)(lVar29 + 0x30) <= *(float *)(lVar40 + 0x28)))
        goto LAB_1804c0976;
        bVar48 = true;
      }
      if (((*(int *)(*(longlong *)(*(int **)(lVar29 + 0x2c8) + 2) + -0x20 +
                    (longlong)**(int **)(lVar29 + 0x2c8) * 0x48) == 0) &&
          (*(int *)(*(longlong *)(local_1b8 + 0x2c8) + 0x20) != 0)) && (!bVar48)) {
        bVar17 = true;
        *(longlong *)(lVar29 + 0x2c8) = *(longlong *)(local_1b8 + 0x2c8);
      }
    }
    lVar40 = *(longlong *)(lVar19 + 0x2228);
    if (lVar40 == 0) {
      lVar40 = *(longlong *)(lVar19 + 0x2040);
    }
    cVar22 = (char)local_1c8;
    if ((cVar22 == '\0') &&
       ((lVar40 == 0 || (*(longlong *)(lVar29 + 1000) != *(longlong *)(lVar40 + 1000))))) {
      uVar33 = 0;
    }
    else {
      uVar33 = 1;
    }
    local_1f0 = (float *)local_f8;
    local_1f8 = (undefined1 *)CONCAT44(local_1f8._4_4_,uVar51);
    local_1e8 = fVar66;
    FUN_1804bdf10(lVar29,&local_120,uVar33,bVar54);
    if (bVar17) {
      *(longlong *)(lVar29 + 0x2c8) = lVar29 + 0x2d0;
    }
    if (((uVar37 & 8) == 0) && ((uVar37 >> 0xb & 1) != 0)) {
      bVar54 = true;
    }
    else {
      bVar54 = false;
    }
    fVar66 = *(float *)(lVar29 + 0x50);
    fVar68 = auVar69._0_4_;
    if (fVar66 == fVar68) {
      auVar55 = ZEXT416((uint)((*(float *)(lVar29 + 0x30) -
                               (*(float *)(lVar29 + 0x58) + *(float *)(lVar29 + 0x58))) -
                              (*(float *)(lVar29 + 0x78) + *(float *)(lVar29 + 0x70))));
      if (bVar54) {
        auVar55 = vmaxss_avx(ZEXT416(*(uint *)(lVar29 + 0x40)),auVar55);
        fVar67 = auVar55._0_4_;
      }
      else {
        auVar55 = vmaxss_avx(auVar69._0_16_,auVar55);
        fVar67 = auVar55._0_4_;
      }
    }
    else {
      fVar67 = fVar66;
    }
    fVar57 = *(float *)(lVar29 + 0x54);
    if (fVar57 == fVar68) {
      auVar55 = ZEXT416((uint)((*(float *)(lVar29 + 0x34) -
                               (*(float *)(lVar29 + 0x5c) + *(float *)(lVar29 + 0x5c))) -
                              (*(float *)(lVar29 + 0x7c) + *(float *)(lVar29 + 0x74))));
      if ((uVar37 & 8) == 0) {
        auVar55 = vmaxss_avx(ZEXT416(*(uint *)(lVar29 + 0x44)),auVar55);
        fVar62 = auVar55._0_4_;
      }
      else {
        auVar55 = vmaxss_avx(auVar69._0_16_,auVar55);
        fVar62 = auVar55._0_4_;
      }
    }
    else {
      fVar62 = fVar57;
    }
    fVar59 = *(float *)(lVar29 + 0x58);
    fVar60 = *(float *)(lVar29 + 0x98);
    auVar55 = vmaxss_avx(ZEXT416((uint)fVar59),ZEXT416(*(uint *)(lVar29 + 100)));
    fVar63 = (float)(int)((*(float *)(lVar29 + 0x228) - fVar60) + auVar55._0_4_);
    *(float *)(lVar29 + 0x248) = fVar63;
    fVar14 = *(float *)(lVar29 + 0x5c);
    fVar6 = *(float *)(lVar29 + 0x9c);
    auVar55 = vmaxss_avx(ZEXT416((uint)fVar14),ZEXT416(*(uint *)(lVar29 + 100)));
    fVar61 = (float)(int)((*(float *)(lVar29 + 0x22c) - fVar6) + auVar55._0_4_);
    *(float *)(lVar29 + 0x24c) = fVar61;
    *(float *)(lVar29 + 0x250) = fVar67 + fVar63;
    *(float *)(lVar29 + 0x254) = fVar62 + fVar61;
    *(undefined8 *)(lVar29 + 600) = *(undefined8 *)(lVar29 + 0x248);
    *(undefined8 *)(lVar29 + 0x260) = *(undefined8 *)(lVar29 + 0x250);
    fVar67 = *(float *)(lVar29 + 0x70);
    fVar61 = (*(float *)(lVar29 + 0x28) - fVar60) + fVar59 + fVar67;
    *(float *)(lVar29 + 0x278) = fVar61;
    fVar62 = *(float *)(lVar29 + 0x74);
    fVar63 = (*(float *)(lVar29 + 0x2c) - fVar6) + fVar14 + fVar62;
    *(float *)(lVar29 + 0x27c) = fVar63;
    if (fVar66 == fVar68) {
      fVar66 = (*(float *)(lVar29 + 0x30) - (fVar59 + fVar59)) -
               (fVar67 + *(float *)(lVar29 + 0x78));
    }
    *(float *)(lVar29 + 0x280) = fVar61 + fVar66;
    if (fVar57 == fVar68) {
      fVar57 = (*(float *)(lVar29 + 0x34) - (fVar14 + fVar14)) -
               (fVar62 + *(float *)(lVar29 + 0x7c));
    }
    iVar25 = 0;
    psVar2 = (short *)(lVar29 + 0x196);
    *(float *)(lVar29 + 0x284) = fVar63 + fVar57;
    *(float *)(lVar29 + 0x15c) = (fVar67 + fVar59) - fVar60;
    *(undefined8 *)(lVar29 + 0x160) = 0;
    dVar11 = (((double)*(float *)(lVar29 + 0x28) + (double)fVar59) - (double)fVar60) +
             (double)fVar67 + 0.0;
    dVar12 = (((double)*(float *)(lVar29 + 0x2c) + (double)fVar14) - (double)fVar6) + (double)fVar62
    ;
    auVar56._0_4_ = (float)dVar12;
    auVar56._4_4_ = (int)((ulonglong)dVar12 >> 0x20);
    auVar56._8_8_ = 0;
    auVar58._0_4_ = (float)dVar11;
    auVar58._4_4_ = (int)((ulonglong)dVar11 >> 0x20);
    auVar58._8_8_ = 0;
    *(float *)(lVar29 + 0x128) = auVar58._0_4_;
    *(float *)(lVar29 + 300) = auVar56._0_4_;
    auVar55 = vinsertps_avx(auVar58,auVar56,0xe);
    *(float *)(lVar29 + 0x168) = (float)(dVar11 - (double)*(float *)(lVar29 + 0x128));
    *(float *)(lVar29 + 0x16c) = (float)(dVar12 - (double)auVar55._0_4_);
    uVar27 = *(undefined4 *)(lVar29 + 300);
    uVar4 = *(undefined4 *)(lVar29 + 0x128);
    *(undefined4 *)(lVar29 + 0x118) = uVar4;
    *(undefined4 *)(lVar29 + 0x11c) = uVar27;
    *(undefined4 *)(lVar29 + 0x120) = uVar4;
    *(undefined4 *)(lVar29 + 0x124) = uVar27;
    *(undefined4 *)(lVar29 + 0x130) = uVar4;
    *(undefined4 *)(lVar29 + 0x134) = uVar27;
    *(undefined4 *)(lVar29 + 0x138) = uVar4;
    *(undefined4 *)(lVar29 + 0x13c) = uVar27;
    *(undefined8 *)(lVar29 + 0x148) = 0;
    *(undefined8 *)(lVar29 + 0x140) = 0;
    *(undefined8 *)(lVar29 + 0x150) = 0;
    *(undefined2 *)(lVar29 + 0x158) = 0;
    *(undefined4 *)(lVar29 + 0x170) = 0;
    *(undefined2 *)(lVar29 + 0x174) = *(undefined2 *)(lVar29 + 0x176);
    *(undefined4 *)(lVar29 + 0x176) = 0x10000;
    *(bool *)(lVar29 + 0x17a) = fVar68 < *(float *)(lVar29 + 0xa4);
    *(undefined1 *)(lVar29 + 0x17b) = 0;
    fVar66 = *(float *)(lVar19 + 0xcd4);
    if (local_1d7 != false) {
      psVar2[0] = 0;
      psVar2[1] = 0;
      psVar2[2] = 0;
      psVar2[3] = 0;
    }
    sVar45 = (short)(int)fVar66;
    *(short *)(lVar29 + 0x18c) = sVar45;
    sVar36 = *psVar2;
    sVar8 = *(short *)(lVar29 + 0x198);
    bVar54 = sVar36 != 0;
    if ((sVar36 != 0) && (sVar8 != 0)) {
      sVar36 = sVar36 + sVar45;
    }
    *(short *)(lVar29 + 400) = sVar36;
    sVar36 = sVar36 + sVar8;
    sVar9 = *(short *)(lVar29 + 0x19a);
    if ((sVar8 != 0 || bVar54) && (sVar9 != 0)) {
      sVar36 = sVar36 + sVar45;
    }
    *(short *)(lVar29 + 0x192) = sVar36;
    sVar36 = sVar36 + sVar9;
    if ((sVar9 != 0 || (sVar8 != 0 || bVar54)) && (*(short *)(lVar29 + 0x19c) != 0)) {
      sVar36 = sVar36 + sVar45;
    }
    *(short *)(lVar29 + 0x194) = sVar36;
    *(uint *)(lVar29 + 0x188) = (uint)(ushort)(*(short *)(lVar29 + 0x19c) + sVar36);
    *(undefined8 *)(lVar29 + 0x196) = 0;
    *(undefined4 *)(lVar29 + 0x184) = *(undefined4 *)(lVar29 + 0x188);
    *(undefined4 *)(lVar29 + 0x188) = 0;
    *(undefined8 *)(lVar29 + 0x1a0) = 0;
    *(undefined4 *)(lVar29 + 0x1a8) = 0;
    iVar38 = *(int *)(lVar29 + 0x1b4);
    if (iVar38 < 0) {
      iVar38 = iVar38 + iVar38 / 2;
      iVar15 = iVar25;
      if (0 < iVar38) {
        iVar15 = iVar38;
      }
      FUN_1804d0a80(lVar29 + 0x1b0,iVar15);
    }
    lVar40 = local_1b8;
    *(undefined4 *)(lVar29 + 0x1b0) = 0;
    *(longlong *)(lVar29 + 0x1c0) = lVar29 + 0x298;
    uVar27 = 1;
    *(undefined8 *)(lVar29 + 0x1c8) = 0;
    *(undefined4 *)(lVar29 + 0x1d4) = 1;
    if (local_1b8 != 0) {
      uVar27 = *(undefined4 *)(local_1b8 + 0x1d4);
    }
    *(undefined4 *)(lVar29 + 0x1d8) = uVar27;
    fVar66 = *(float *)(lVar29 + 0x30);
    if ((uVar37 >> 0x18 & 1) == 0) {
      if (auVar69._0_4_ < fVar66) {
        bVar54 = (uVar37 & 0x40) == 0;
        goto LAB_1804c0f02;
      }
LAB_1804c0f08:
      bVar54 = false;
    }
    else {
      if (fVar66 <= auVar69._0_4_) goto LAB_1804c0f08;
      bVar54 = (*(byte *)(lVar29 + 0x18) & 0x50) == 0;
LAB_1804c0f02:
      if (!bVar54) goto LAB_1804c0f08;
      bVar54 = true;
    }
    if (bVar54) {
      fVar66 = fVar66 * 0.65;
    }
    else {
      fVar66 = *(float *)(lVar19 + 0x11e0) * 16.0;
    }
    *(float *)(lVar29 + 0x1ec) = (float)(int)fVar66;
    *(float *)(lVar29 + 0x1e8) = (float)(int)fVar66;
    iVar38 = *(int *)(lVar29 + 0x1fc);
    if (iVar38 < 0) {
      iVar38 = iVar38 + iVar38 / 2;
      iVar15 = iVar25;
      if (0 < iVar38) {
        iVar15 = iVar38;
      }
      FUN_1804d14d0(lVar29 + 0x1f8,iVar15);
    }
    *(undefined4 *)(lVar29 + 0x1f8) = 0;
    *(undefined4 *)(lVar29 + 0x1f0) = 0xbf800000;
    iVar38 = *(int *)(lVar29 + 0x20c);
    if (iVar38 < 0) {
      iVar38 = iVar38 + iVar38 / 2;
      if (0 < iVar38) {
        iVar25 = iVar38;
      }
      FUN_1804d14d0(lVar29 + 0x208,iVar25);
    }
    *(undefined4 *)(lVar29 + 0x208) = 0;
    if ((uVar37 >> 0x1b & 1) != 0) {
      uVar27 = FUN_1804b1120(DAT_180bb8ae8 + 0x1188);
      *(undefined4 *)(lVar29 + 0x1dc) = uVar27;
    }
    if ('\0' < *(char *)(lVar29 + 0xe8)) {
      *(char *)(lVar29 + 0xe8) = *(char *)(lVar29 + 0xe8) + -1;
    }
    if ('\0' < *(char *)(lVar29 + 0xe9)) {
      *(char *)(lVar29 + 0xe9) = *(char *)(lVar29 + 0xe9) + -1;
    }
    if ((cVar22 != '\0') && (FUN_1804c8a10(lVar29,2), lVar29 == *(longlong *)(lVar19 + 0x2040))) {
      FUN_1804c9d70(lVar29,0);
    }
    if ((((*(char *)(lVar19 + 0x83) != '\0') && (*(longlong *)(lVar19 + 0x2040) != 0)) &&
        (*(longlong *)(*(longlong *)(lVar19 + 0x2040) + 0x3d8) == lVar29)) &&
       ((*(int *)(lVar19 + 0x1550) == 0 && (cVar22 = FUN_1804c5370(0x1224,0,0), cVar22 != '\0')))) {
      FUN_1804cdca0();
    }
    auVar56 = auVar69._0_16_;
    if ((uVar37 & 1) == 0) {
      local_170 = *(float *)(lVar29 + 100) + local_120;
      local_16c = fStack_11c;
      local_168 = fStack_118 - *(float *)(lVar29 + 100);
      local_164 = fStack_114;
      FUN_1804be5d0(lVar29,&local_170,local_1a0,0);
      auVar56 = auVar69._0_16_;
    }
    *(undefined4 *)(lVar29 + 0x288) = 0;
    if ((uVar37 >> 0x19 & 1) != 0) {
      *(longlong *)(lVar19 + 0x26b0) = lVar29;
    }
    lVar32 = DAT_180bb8ae8;
    if ((uVar37 >> 0x18 & 1) == 0) {
      uVar23 = *(char *)(lVar19 + 0x82) == '\0';
    }
    else {
      uVar23 = *(undefined1 *)(lVar40 + 0xf0);
    }
    *(undefined1 *)(lVar29 + 0xf0) = uVar23;
    *(undefined4 *)(lVar29 + 0x1e0) = 0;
    if (*(float *)(lVar32 + 0x110) < local_120 - *(float *)(lVar32 + 0xcec)) {
LAB_1804c113c:
      uVar27 = 0;
    }
    else if (((*(float *)(lVar32 + 0x114) < fStack_11c - *(float *)(lVar32 + 0xcf0)) ||
             (*(float *)(lVar32 + 0xcec) + fStack_118 <= *(float *)(lVar32 + 0x110))) ||
            (uVar27 = 1, *(float *)(lVar32 + 0xcf0) + fStack_114 <= *(float *)(lVar32 + 0x114)))
    goto LAB_1804c113c;
    *(undefined4 *)(lVar29 + 0x1e0) = uVar27;
    *(undefined4 *)(lVar32 + 0x1ec0) = *(undefined4 *)(lVar29 + 0x8c);
    *(undefined4 *)(lVar32 + 0x1ec4) = *(undefined4 *)(lVar32 + 0x1e80);
    *(undefined4 *)(lVar32 + 0x1ec8) = uVar27;
    *(ulonglong *)(lVar32 + 0x1ecc) = CONCAT44(fStack_11c,local_120);
    *(ulonglong *)(lVar32 + 0x1ed4) = CONCAT44(fStack_114,fStack_118);
    *(ulonglong *)(lVar32 + 0x1edc) = CONCAT44(fStack_11c,local_120);
    *(ulonglong *)(lVar32 + 0x1ee4) = CONCAT44(fStack_114,fStack_118);
    iVar25 = *(int *)(lVar19 + 0x1e84);
    if ((iVar25 != 0) &&
       ((*(int *)(lVar29 + 0x10) == iVar25 || (*(int *)(lVar29 + 0x8c) == iVar25)))) {
      auVar69 = ZEXT1664(auVar56);
      FUN_1804cf500();
      auVar56 = auVar69._0_16_;
    }
    iVar38 = local_1c4;
    iVar25 = local_1d0;
  }
  fVar66 = auVar56._0_4_;
  if (*(char *)(lVar29 + 0xd2) == '\0') {
    auVar69 = ZEXT1664(auVar56);
    FUN_1804ba360(lVar29 + 0x238,lVar29 + 0x240,1);
    fVar66 = auVar69._0_4_;
  }
  *(undefined1 *)(lVar29 + 0xce) = 0;
  *(short *)(lVar29 + 0xda) = *(short *)(lVar29 + 0xda) + 1;
  *(undefined4 *)(lVar19 + 0x1f10) = 0;
  if (iVar25 == iVar38) goto LAB_1804c1443;
  if (*(char *)(lVar29 + 0xd2) != '\0') {
    *(undefined1 *)(lVar29 + 0xd1) = 1;
    goto LAB_1804c1443;
  }
  if ((uVar37 & 0x11000000) == 0x1000000) {
    if (((((*(uint *)(lVar29 + 0x18) & 0x100) == 0) || (*(char *)(lVar19 + 0x20a1) == '\0')) ||
        (*(longlong *)(lVar19 + 0x2040) == 0)) ||
       (*(longlong *)(*(longlong *)(lVar19 + 0x2040) + 0x3f0) != *(longlong *)(lVar29 + 0x3f0))) {
      bVar54 = false;
    }
    else {
      bVar54 = true;
    }
    if (((*(char *)(lVar19 + 0x2840) == '\0') && (!bVar54)) &&
       ((*(float *)(lVar29 + 0x220) <= *(float *)(lVar29 + 0x218) ||
        (*(float *)(lVar29 + 0x224) <= *(float *)(lVar29 + 0x21c))))) {
      if ((*(char *)(lVar29 + 0xe8) < '\x01') && (*(char *)(lVar29 + 0xe9) < '\x01')) {
        *(undefined1 *)(lVar29 + 0xeb) = 1;
      }
      else {
        *(undefined1 *)(lVar29 + 0xec) = 1;
      }
    }
    if (lVar40 != 0) {
      if ((*(char *)(lVar40 + 0xcf) != '\0') || ('\0' < *(char *)(lVar40 + 0xeb))) {
        *(undefined1 *)(lVar29 + 0xeb) = 1;
      }
      if ('\0' < *(char *)(lVar40 + 0xec)) {
        *(undefined1 *)(lVar29 + 0xec) = 1;
      }
    }
  }
  if (*(float *)(lVar19 + 0xc84) <= fVar66) {
    *(undefined1 *)(lVar29 + 0xeb) = 1;
  }
  if ((*(char *)(lVar29 + 0xeb) < '\x01') && (*(char *)(lVar29 + 0xec) < '\x01')) {
    bVar17 = false;
    bVar54 = false;
    if ('\0' < *(char *)(lVar29 + 0xed)) goto LAB_1804c13da;
    uVar23 = 0;
  }
  else {
    bVar54 = true;
LAB_1804c13da:
    bVar17 = bVar54;
    uVar23 = 1;
  }
  *(undefined1 *)(lVar29 + 0xd4) = uVar23;
  if ('\0' < *(char *)(lVar29 + 0xee)) {
    *(char *)(lVar29 + 0xee) = *(char *)(lVar29 + 0xee) + -1;
    *(uint *)(lVar29 + 0x14) = *(uint *)(lVar29 + 0x14) | 0x30200;
  }
  uVar23 = 0;
  if ((((*(char *)(lVar29 + 0xcf) != '\0') || (*(char *)(lVar29 + 0xcc) == '\0')) || (bVar17)) &&
     ((*(char *)(lVar29 + 0xe8) < '\x01' && (*(char *)(lVar29 + 0xe9) < '\x01')))) {
    if (*(char *)(lVar29 + 0xec) < '\x01') {
      uVar23 = 1;
    }
  }
  *(undefined1 *)(lVar29 + 0xd1) = uVar23;
LAB_1804c1443:
  if ((*(char *)(lVar29 + 0xd5) == '\0') &&
     (((*(char *)(lVar19 + 0xb3) != '\0' && (local_1a8 == 0)) ||
      ((*(char *)(lVar19 + 0xb4) != '\0' &&
       ((int)*(char *)(lVar19 + 0x2908) == *(int *)(lVar19 + 0x14a0))))))) {
    if ('\0' < *(char *)(lVar29 + 0xe8)) {
      *(char *)(lVar29 + 0xe8) = *(char *)(lVar29 + 0xe8) + '\x01';
    }
    if ('\0' < *(char *)(lVar29 + 0xe9)) {
      *(char *)(lVar29 + 0xe9) = *(char *)(lVar29 + 0xe9) + '\x01';
    }
  }
}



