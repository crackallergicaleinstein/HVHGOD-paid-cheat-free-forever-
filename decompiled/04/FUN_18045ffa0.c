// FUN_18045ffa0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18045ffa0 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_18045ffa0(undefined8 param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined1 local_11b8;
  undefined1 auStack_11b7 [4519];
  undefined8 uStack_10;
  
  uStack_10 = 0x18045ffac;
  FUN_18063ab10(&local_11b8,0);
  puVar3 = auStack_11b7;
  lVar2 = 0x1d;
  do {
    *(undefined2 *)(puVar3 + -1) = 0x100;
    *(undefined8 *)(puVar3 + 3) = 0;
    *(undefined4 *)(puVar3 + 0xb) = 0x3f800000;
    *(undefined4 *)(puVar3 + 0xf) = 0x3f800000;
    *(undefined4 *)(puVar3 + 0x13) = 0x3f800000;
    *(undefined4 *)(puVar3 + 0x17) = 0x3f800000;
    *(undefined2 *)(puVar3 + 0x1b) = 0x100;
    *(undefined4 *)(puVar3 + 0x1f) = 0x3f800000;
    puVar3[0x23] = 0;
    *(undefined8 *)(puVar3 + 0x27) = 0;
    *(undefined4 *)(puVar3 + 0x2f) = 0;
    *(undefined4 *)(puVar3 + 0x33) = 0x3f59999a;
    puVar3[0x37] = 0;
    *(undefined4 *)(puVar3 + 0x3b) = 1;
    puVar3[0x3f] = 0;
    *(undefined4 *)(puVar3 + 0x43) = 0x3f68f5c3;
    *(undefined4 *)(puVar3 + 0x47) = 0x3e8a3d71;
    *(undefined4 *)(puVar3 + 0x4b) = 0x3e8a3d71;
    *(undefined4 *)(puVar3 + 0x4f) = 0x3f800000;
    *(undefined2 *)(puVar3 + 0x53) = 1;
    *(undefined4 *)(puVar3 + 0x57) = 0x3f800000;
    *(undefined4 *)(puVar3 + 0x5b) = 0x3f800000;
    *(undefined4 *)(puVar3 + 0x5f) = 0x3f800000;
    *(undefined4 *)(puVar3 + 99) = 0x3f800000;
    puVar3[0x67] = 1;
    *(undefined8 *)(puVar3 + 0x6b) = 0;
    *(undefined4 *)(puVar3 + 0x73) = 0;
    *(undefined4 *)(puVar3 + 0x77) = 0x3f800000;
    *(undefined4 *)(puVar3 + 0x7b) = 0x41100000;
    *(undefined4 *)(puVar3 + 0x7f) = 0x40000000;
    *(undefined2 *)(puVar3 + 0x83) = 0;
    *(undefined4 *)(puVar3 + 0x87) = 0x3f6bebec;
    *(undefined4 *)(puVar3 + 0x8b) = 0x3e828283;
    *(undefined4 *)(puVar3 + 0x8f) = 0x3e8c8c8d;
    *(undefined4 *)(puVar3 + 0x93) = 0x3f800000;
    puVar3[0x97] = 0;
    puVar3 = puVar3 + 0x9c;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  lVar2 = 0;
  puVar7 = &DAT_18077eecd;
  puVar3 = auStack_11b7;
  iVar6 = 0;
  while( true ) {
    iVar5 = iVar6;
    uVar1 = *(uint *)(puVar7 + 3);
    puVar3[-1] = puVar7[1];
    *puVar3 = *puVar7;
    *(float *)(puVar3 + 3) = (float)iVar5;
    *(float *)(puVar3 + 0xb) = (float)(uVar1 & 0xff) * 0.003921569;
    *(float *)(puVar3 + 0xf) = (float)(uVar1 >> 8 & 0xff) * 0.003921569;
    *(float *)(puVar3 + 0x13) = (float)(uVar1 >> 0x10 & 0xff) * 0.003921569;
    *(float *)(puVar3 + 0x17) = (float)(uVar1 >> 0x18) * 0.003921569;
    if (iVar5 == 3) {
      *(undefined4 *)(puVar3 + 0xb) = 0x3eececed;
      *(undefined4 *)(puVar3 + 0xf) = 0x3f62e2e3;
      *(undefined4 *)(puVar3 + 0x13) = 0x3ef0f0f1;
      *(undefined4 *)(puVar3 + 0x17) = 0x3f800000;
      *(undefined4 *)(puVar3 + 0x43) = 0x3f68e8e9;
      *(undefined4 *)(puVar3 + 0x47) = 0x3e888889;
      *(undefined4 *)(puVar3 + 0x4b) = 0x3e888889;
      *(undefined4 *)(puVar3 + 0x4f) = 0x3f800000;
      puVar3[0x3f] = 2;
    }
    uVar1 = *(uint *)(puVar7 + 0x23);
    puVar3[0x9b] = puVar7[0x21];
    puVar3[0x9c] = puVar7[0x20];
    *(float *)(puVar3 + 0x9f) = (float)(iVar5 + 1);
    *(float *)(puVar3 + 0xa7) = (float)(uVar1 & 0xff) * 0.003921569;
    *(float *)(puVar3 + 0xab) = (float)(uVar1 >> 8 & 0xff) * 0.003921569;
    *(float *)(puVar3 + 0xaf) = (float)(uVar1 >> 0x10 & 0xff) * 0.003921569;
    *(float *)(puVar3 + 0xb3) = (float)(uVar1 >> 0x18) * 0.003921569;
    if (iVar5 == 2) {
      *(undefined4 *)(puVar3 + 0xa7) = 0x3eececed;
      *(undefined4 *)(puVar3 + 0xab) = 0x3f62e2e3;
      *(undefined4 *)(puVar3 + 0xaf) = 0x3ef0f0f1;
      *(undefined4 *)(puVar3 + 0xb3) = 0x3f800000;
      *(undefined4 *)(puVar3 + 0xdf) = 0x3f68e8e9;
      *(undefined4 *)(puVar3 + 0xe3) = 0x3e888889;
      *(undefined4 *)(puVar3 + 0xe7) = 0x3e888889;
      *(undefined4 *)(puVar3 + 0xeb) = 0x3f800000;
      puVar3[0xdb] = 2;
    }
    uVar1 = *(uint *)(puVar7 + 0x43);
    puVar3[0x137] = puVar7[0x41];
    puVar3[0x138] = puVar7[0x40];
    *(float *)(puVar3 + 0x13b) = (float)(iVar5 + 2);
    *(float *)(puVar3 + 0x143) = (float)(uVar1 & 0xff) * 0.003921569;
    *(float *)(puVar3 + 0x147) = (float)(uVar1 >> 8 & 0xff) * 0.003921569;
    *(float *)(puVar3 + 0x14b) = (float)(uVar1 >> 0x10 & 0xff) * 0.003921569;
    *(float *)(puVar3 + 0x14f) = (float)(uVar1 >> 0x18) * 0.003921569;
    if (iVar5 == 1) {
      *(undefined4 *)(puVar3 + 0x143) = 0x3eececed;
      *(undefined4 *)(puVar3 + 0x147) = 0x3f62e2e3;
      *(undefined4 *)(puVar3 + 0x14b) = 0x3ef0f0f1;
      *(undefined4 *)(puVar3 + 0x14f) = 0x3f800000;
      *(undefined4 *)(puVar3 + 0x17b) = 0x3f68e8e9;
      *(undefined4 *)(puVar3 + 0x17f) = 0x3e888889;
      *(undefined4 *)(puVar3 + 0x183) = 0x3e888889;
      *(undefined4 *)(puVar3 + 0x187) = 0x3f800000;
      puVar3[0x177] = 2;
    }
    uVar1 = *(uint *)(puVar7 + 99);
    puVar3[0x1d3] = puVar7[0x61];
    puVar3[0x1d4] = puVar7[0x60];
    *(float *)(puVar3 + 0x1d7) = (float)(iVar5 + 3);
    *(float *)(puVar3 + 0x1df) = (float)(uVar1 & 0xff) * 0.003921569;
    *(float *)(puVar3 + 0x1e3) = (float)(uVar1 >> 8 & 0xff) * 0.003921569;
    *(float *)(puVar3 + 0x1e7) = (float)(uVar1 >> 0x10 & 0xff) * 0.003921569;
    *(float *)(puVar3 + 0x1eb) = (float)(uVar1 >> 0x18) * 0.003921569;
    if (iVar5 == 0) {
      *(undefined4 *)(puVar3 + 0x1df) = 0x3eececed;
      *(undefined4 *)(puVar3 + 0x1e3) = 0x3f62e2e3;
      *(undefined4 *)(puVar3 + 0x1e7) = 0x3ef0f0f1;
      *(undefined4 *)(puVar3 + 0x1eb) = 0x3f800000;
      *(undefined4 *)(puVar3 + 0x217) = 0x3f68e8e9;
      *(undefined4 *)(puVar3 + 0x21b) = 0x3e888889;
      *(undefined4 *)(puVar3 + 0x21f) = 0x3e888889;
      *(undefined4 *)(puVar3 + 0x223) = 0x3f800000;
      puVar3[0x213] = 2;
    }
    uVar1 = *(uint *)(puVar7 + 0x83);
    puVar3[0x26f] = puVar7[0x81];
    puVar3[0x270] = puVar7[0x80];
    *(float *)(puVar3 + 0x273) = (float)(iVar5 + 4);
    *(float *)(puVar3 + 0x27b) = (float)(uVar1 & 0xff) * 0.003921569;
    *(float *)(puVar3 + 0x27f) = (float)(uVar1 >> 8 & 0xff) * 0.003921569;
    *(float *)(puVar3 + 0x283) = (float)(uVar1 >> 0x10 & 0xff) * 0.003921569;
    *(float *)(puVar3 + 0x287) = (float)(uVar1 >> 0x18) * 0.003921569;
    uVar1 = *(uint *)(puVar7 + 0xa3);
    puVar3[0x30b] = puVar7[0xa1];
    puVar3[0x30c] = puVar7[0xa0];
    *(float *)(puVar3 + 0x30f) = (float)(iVar5 + 5);
    *(float *)(puVar3 + 0x317) = (float)(uVar1 & 0xff) * 0.003921569;
    *(float *)(puVar3 + 0x31b) = (float)(uVar1 >> 8 & 0xff) * 0.003921569;
    *(float *)(puVar3 + 799) = (float)(uVar1 >> 0x10 & 0xff) * 0.003921569;
    *(float *)(puVar3 + 0x323) = (float)(uVar1 >> 0x18) * 0.003921569;
    uVar1 = *(uint *)(puVar7 + 0xc3);
    puVar3[0x3a7] = puVar7[0xc1];
    puVar3[0x3a8] = puVar7[0xc0];
    *(float *)(puVar3 + 0x3ab) = (float)(iVar5 + 6);
    *(float *)(puVar3 + 0x3b3) = (float)(uVar1 & 0xff) * 0.003921569;
    *(float *)(puVar3 + 0x3b7) = (float)(uVar1 >> 8 & 0xff) * 0.003921569;
    *(float *)(puVar3 + 0x3bb) = (float)(uVar1 >> 0x10 & 0xff) * 0.003921569;
    *(float *)(puVar3 + 0x3bf) = (float)(uVar1 >> 0x18) * 0.003921569;
    if (iVar5 == 0x15) {
      *(undefined4 *)(puVar3 + 0x3eb) = 0x3e808081;
      *(undefined4 *)(puVar3 + 0x3ef) = 0x3ec8c8c9;
      *(undefined4 *)(puVar3 + 0x3f3) = 0x3f1b9b9c;
      *(undefined4 *)(puVar3 + 0x3f7) = 0x3f800000;
    }
    lVar2 = lVar2 + 8;
    uVar1 = *(uint *)(puVar7 + 0xe3);
    puVar3[0x443] = puVar7[0xe1];
    puVar3[0x444] = puVar7[0xe0];
    *(float *)(puVar3 + 0x447) = (float)(iVar5 + 7);
    *(float *)(puVar3 + 0x44f) = (float)(uVar1 & 0xff) * 0.003921569;
    *(float *)(puVar3 + 0x453) = (float)(uVar1 >> 8 & 0xff) * 0.003921569;
    *(float *)(puVar3 + 0x457) = (float)(uVar1 >> 0x10 & 0xff) * 0.003921569;
    *(float *)(puVar3 + 0x45b) = (float)(uVar1 >> 0x18) * 0.003921569;
    if (iVar5 == 0x14) break;
    puVar7 = puVar7 + 0x100;
    puVar3 = puVar3 + 0x4e0;
    iVar6 = iVar5 + 8;
    if (0x15 < iVar5 + 8) {
LAB_1804607a4:
      if (iVar5 + 8 < 0x1d) {
        puVar3 = &DAT_18077eecd + lVar2 * 0x20;
        puVar7 = auStack_11b7 + lVar2 * 0x9c;
        iVar6 = iVar5 + 8;
        do {
          while( true ) {
            while( true ) {
              uVar1 = *(uint *)(puVar3 + 3);
              puVar7[-1] = puVar3[1];
              *puVar7 = *puVar3;
              puVar3 = puVar3 + 0x20;
              *(float *)(puVar7 + 3) = (float)iVar6;
              *(float *)(puVar7 + 0xb) = (float)(uVar1 & 0xff) * 0.003921569;
              puVar4 = puVar7 + 0x9c;
              *(float *)(puVar7 + 0xf) = (float)(uVar1 >> 8 & 0xff) * 0.003921569;
              *(float *)(puVar7 + 0x13) = (float)(uVar1 >> 0x10 & 0xff) * 0.003921569;
              iVar5 = iVar6 + 1;
              *(float *)(puVar7 + 0x17) = (float)(uVar1 >> 0x18) * 0.003921569;
              if (iVar6 != 3) break;
              *(float *)(puVar7 + 0xb) = 0.4627451;
              *(float *)(puVar7 + 0xf) = 0.8862745;
              *(float *)(puVar7 + 0x13) = 0.47058824;
              *(float *)(puVar7 + 0x17) = 1.0;
              *(undefined4 *)(puVar7 + 0x43) = 0x3f68e8e9;
              *(undefined4 *)(puVar7 + 0x47) = 0x3e888889;
              *(undefined4 *)(puVar7 + 0x4b) = 0x3e888889;
              *(undefined4 *)(puVar7 + 0x4f) = 0x3f800000;
              puVar7[0x3f] = 2;
              puVar7 = puVar4;
              iVar6 = iVar5;
            }
            if (iVar6 != 0x1b) break;
            *(undefined4 *)(puVar7 + 0x43) = 0x3e808081;
            *(undefined4 *)(puVar7 + 0x47) = 0x3ec8c8c9;
            *(undefined4 *)(puVar7 + 0x4b) = 0x3f1b9b9c;
            *(undefined4 *)(puVar7 + 0x4f) = 0x3f800000;
            puVar7 = puVar4;
            iVar6 = iVar5;
          }
          puVar7 = puVar4;
          iVar6 = iVar5;
        } while (iVar5 < 0x1d);
      }
      FUN_18063aed0(param_1,&local_11b8,0x11ac);
      return param_1;
    }
  }
  *(undefined4 *)(puVar3 + 0x487) = 0x3e808081;
  *(undefined4 *)(puVar3 + 0x48b) = 0x3ec8c8c9;
  *(undefined4 *)(puVar3 + 0x48f) = 0x3f1b9b9c;
  *(undefined4 *)(puVar3 + 0x493) = 0x3f800000;
  goto LAB_1804607a4;
}



