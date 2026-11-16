// FUN_1804cbb10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804cbb10 */

void FUN_1804cbb10(void)

{
  longlong *plVar1;
  bool bVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  
  lVar4 = DAT_180bb8ae8;
  uVar8 = *(uint *)(DAT_180bb8ae8 + 0x28);
  *(undefined8 *)(DAT_180bb8ae8 + 0x2080) = 0;
  if (((uVar8 & 1) == 0) && ((uVar8 & 2) == 0)) {
    return;
  }
  plVar1 = *(longlong **)(lVar4 + 0x2040);
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  if (((uVar8 & 1) == 0) ||
     (((((*(float *)(lVar4 + 0x2ac) < 0.0 || (*(char *)(lVar4 + 0x2a4) != '\0')) ||
        ((*(char *)(lVar4 + 0x1e74) != '\0' && (*(int *)(lVar4 + 0x1550) != -1)))) ||
       (*(int *)(lVar4 + 0x16e8) != -1)) &&
      ((cVar5 = FUN_1804c3390(0x245,0,0xffffffff), cVar5 == '\0' ||
       (*(int *)(lVar4 + 0x130) != 0x2000)))))) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (((uVar8 & 2) == 0) || (cVar5 = FUN_1804c3390(0x27c,0,0xffffffff), cVar5 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2 && !bVar3) {
    return;
  }
  *(undefined4 *)(lVar4 + 0x2080) = *(undefined4 *)(lVar4 + 0x203c);
  *(int *)(lVar4 + 0x2084) = (int)plVar1[2];
  pcVar6 = "#CLOSE";
  uVar7 = ~*(uint *)(plVar1[0x22] + -4 + (longlong)(int)plVar1[0x21] * 4);
  cVar5 = '#';
  uVar8 = uVar7;
  do {
    pcVar6 = pcVar6 + 1;
    if (((cVar5 == '#') && (*pcVar6 == '#')) && (pcVar6[1] == '#')) {
      pcVar6 = pcVar6 + 2;
      uVar8 = uVar7;
    }
    else {
      uVar8 = crc32(uVar8,cVar5);
    }
    cVar5 = *pcVar6;
  } while (cVar5 != '\0');
  uVar8 = ~uVar8;
  if (*(uint *)(*plVar1 + 0x1534) == uVar8) {
    FUN_1804cf810(uVar8,0xb,"#CLOSE");
  }
  if (*(uint *)(lVar4 + 0x203c) != uVar8) {
    plVar1 = *(longlong **)(lVar4 + 0x2040);
    pcVar6 = "#COLLAPSE";
    uVar7 = ~*(uint *)(plVar1[0x22] + -4 + (longlong)(int)plVar1[0x21] * 4);
    cVar5 = '#';
    uVar8 = uVar7;
    do {
      pcVar6 = pcVar6 + 1;
      if (((cVar5 == '#') && (*pcVar6 == '#')) && (pcVar6[1] == '#')) {
        pcVar6 = pcVar6 + 2;
        uVar8 = uVar7;
      }
      else {
        uVar8 = crc32(uVar8,cVar5);
      }
      cVar5 = *pcVar6;
    } while (cVar5 != '\0');
    uVar8 = ~uVar8;
    if (*(uint *)(*plVar1 + 0x1534) == uVar8) {
      FUN_1804cf810(uVar8,0xb,"#COLLAPSE");
    }
    if (*(uint *)(lVar4 + 0x203c) != uVar8) goto LAB_1804cbcf3;
  }
  *(undefined4 *)(lVar4 + 0x2080) = *(undefined4 *)(*(longlong *)(lVar4 + 0x2040) + 0x8c);
LAB_1804cbcf3:
  *(undefined4 *)(lVar4 + 0x2090) = 2;
  FUN_1804c8df0();
  return;
}



