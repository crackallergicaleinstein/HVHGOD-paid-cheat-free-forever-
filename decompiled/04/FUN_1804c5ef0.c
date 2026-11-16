// FUN_1804c5ef0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804c5ef0 */

char FUN_1804c5ef0(void)

{
  char *pcVar1;
  undefined8 uVar2;
  char cVar3;
  undefined4 uVar4;
  bool bVar5;
  longlong lVar6;
  char cVar7;
  char *pcVar8;
  longlong lVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [64];
  
  lVar6 = DAT_180bb8ae8;
  uVar10 = 0xffffffff;
  pcVar8 = "##Tooltip_Error";
  cVar7 = '#';
  do {
    pcVar8 = pcVar8 + 1;
    if (((cVar7 == '#') && (*pcVar8 == '#')) && (pcVar8[1] == '#')) {
      uVar10 = 0xffffffff;
      pcVar8 = pcVar8 + 2;
    }
    else {
      uVar10 = crc32(uVar10,cVar7);
    }
    cVar7 = *pcVar8;
  } while (cVar7 != '\0');
  lVar9 = FUN_1804bbfd0(~uVar10);
  if (((*(char *)(lVar6 + 300) == '\0') || (lVar9 == 0)) || (*(char *)(lVar9 + 0xcd) == '\0')) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  fVar11 = (1.0 - *(float *)(lVar6 + 0xe08)) * 0.15 + *(float *)(lVar6 + 0xe08);
  auVar15 = ZEXT864(0);
  fVar12 = (0.0 - *(float *)(lVar6 + 0xe0c)) * 0.15 + *(float *)(lVar6 + 0xe0c);
  fVar13 = (0.0 - *(float *)(lVar6 + 0xe10)) * 0.15 + *(float *)(lVar6 + 0xe10);
  fVar14 = (1.0 - *(float *)(lVar6 + 0xe14)) * 0.15 + *(float *)(lVar6 + 0xe14);
  FUN_1804d0810(lVar6 + 0x1f98);
  if (*(int *)(lVar6 + 0x1f94) != 4) {
    *(float *)(lVar6 + 0xe08) = fVar11;
    *(float *)(lVar6 + 0xe0c) = fVar12;
    *(float *)(lVar6 + 0xe10) = fVar13;
    *(float *)(lVar6 + 0xe14) = fVar14;
  }
  lVar9 = DAT_180bb8ae8;
  if (bVar5) {
    *(uint *)(DAT_180bb8ae8 + 0x1f10) = *(uint *)(DAT_180bb8ae8 + 0x1f10) | 1;
    uVar2 = *(undefined8 *)(lVar6 + 0x2898);
    *(undefined4 *)(lVar9 + 0x1f14) = 1;
    *(undefined8 *)(lVar9 + 0x1f28) = 0;
    *(undefined8 *)(lVar9 + 0x1f20) = uVar2;
  }
  cVar7 = FUN_1804bee10("##Tooltip_Error",0,0x200016f);
  FUN_1804b2b70(1);
  lVar9 = DAT_180bb8ae8;
  if (cVar7 == '\0') {
    FUN_1804c14e0();
  }
  else if (*(short *)(*(longlong *)(lVar6 + 0x14d0) + 0xda) == 1) {
    *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
    if (*(char *)(*(longlong *)(lVar9 + 0x14d0) + 0xd1) == '\0') {
      pcVar8 = "MESSAGE FROM DEAR IMGUI";
      do {
        cVar3 = *pcVar8;
        if ((cVar3 == '\0') || ((pcVar1 = pcVar8 + 1, cVar3 == '#' && (*pcVar1 == '#')))) break;
        pcVar8 = pcVar1;
      } while (pcVar1 != (char *)0xffffffffffffffff);
      FUN_1804f7630(cVar3,"MESSAGE FROM DEAR IMGUI",pcVar8,auVar15._0_8_);
      lVar9 = DAT_180bb8ae8;
    }
    FUN_1804c8960(*(undefined8 *)(lVar6 + 0x14d0));
    FUN_1804c88c0(*(undefined8 *)(lVar6 + 0x14d0));
    uVar4 = *(undefined4 *)(*(longlong *)(lVar9 + 0x14d0) + 0x28);
    *(undefined4 *)(lVar6 + 0x289c) = *(undefined4 *)(*(longlong *)(lVar9 + 0x14d0) + 0x2c);
    *(undefined4 *)(lVar6 + 0x2898) = uVar4;
  }
  return cVar7;
}



