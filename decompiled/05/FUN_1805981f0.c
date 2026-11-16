// FUN_1805981f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805981f0 */

void FUN_1805981f0(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  uint *puVar4;
  ulonglong uVar5;
  uint *puVar6;
  ulonglong uVar7;
  
  puVar6 = *(uint **)(param_1 + 0x2e0);
  uVar3 = *(undefined8 *)(param_1 + 0x98);
  if (puVar6 != (uint *)0x0) {
    uVar1 = *puVar6;
    uVar5 = (ulonglong)uVar1;
    uVar2 = puVar6[1];
    uVar7 = (ulonglong)uVar2;
    FUN_18057abd0(uVar3,*(undefined8 *)(puVar6 + 10));
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    if (1 < uVar1) {
      FUN_18063ab10(puVar6 + 0xc,0,(ulonglong)(uVar1 - 1) << 3);
    }
    FUN_18057abd0(uVar3,*(undefined8 *)(puVar6 + 0x6a));
    puVar6[0x6a] = 0;
    puVar6[0x6b] = 0;
    FUN_18057abd0(uVar3,*(undefined8 *)(puVar6 + 0x48));
    puVar6[0x48] = 0;
    puVar6[0x49] = 0;
    FUN_18057abd0(uVar3,*(undefined8 *)(puVar6 + 0x8e));
    puVar6[0x8e] = 0;
    puVar6[0x8f] = 0;
    if (uVar1 != 0) {
      puVar4 = puVar6 + 0x46;
      do {
        puVar4[0x22] = 0;
        puVar4[0x23] = 0;
        puVar4[0] = 0;
        puVar4[1] = 0;
        puVar4[0x46] = 0;
        puVar4[0x47] = 0;
        puVar4 = puVar4 + 2;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    FUN_18057abd0(uVar3,*(undefined8 *)(puVar6 + 0x42));
    puVar6[0x42] = 0;
    puVar6[0x43] = 0;
    puVar6[0x44] = 0;
    puVar6[0x45] = 0;
    if (uVar2 != 0) {
      uVar5 = uVar7;
      puVar4 = puVar6;
      do {
        puVar4 = puVar4 + 2;
        FUN_18057abd0(uVar3,*(undefined8 *)puVar4);
        puVar4[0] = 0;
        puVar4[1] = 0;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
      puVar6 = puVar6 + 0x2c;
      do {
        FUN_18057abd0(uVar3,*(undefined8 *)(puVar6 + 2));
        puVar6[2] = 0;
        puVar6[3] = 0;
        FUN_18057abd0(uVar3,*(undefined8 *)puVar6);
        puVar6[0] = 0;
        puVar6[1] = 0;
        *(undefined1 *)(puVar6 + -2) = 0;
        puVar6 = puVar6 + 6;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    FUN_18057abd0(uVar3,*(undefined8 *)(param_1 + 0x2e0));
    *(undefined8 *)(param_1 + 0x2e0) = 0;
  }
  return;
}



