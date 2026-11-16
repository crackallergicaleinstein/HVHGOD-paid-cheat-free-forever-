// FUN_18030d7f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18030d7f0 */

undefined1 * FUN_18030d7f0(undefined1 *param_1,longlong param_2)

{
  undefined1 uVar1;
  short sVar2;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0xbf800000;
  if (*(char *)(param_2 + 1) != '\0') {
    sVar2 = thunk_FUN_180624430(*(undefined4 *)(param_2 + 0x58));
    if (sVar2 < 1) {
      sVar2 = thunk_FUN_180624430(*(undefined4 *)(param_2 + 0x5c));
      if (sVar2 < 1) {
        sVar2 = thunk_FUN_180624430(*(undefined4 *)(param_2 + 0x60));
        if (sVar2 < 1) {
          sVar2 = thunk_FUN_180624430(*(undefined4 *)(param_2 + 100));
          if (sVar2 < 1) {
            sVar2 = thunk_FUN_180624430(*(undefined4 *)(param_2 + 0x68));
            if (sVar2 < 1) {
              sVar2 = thunk_FUN_180624430(*(undefined4 *)(param_2 + 0x6c));
              if (sVar2 < 1) {
                uVar1 = 1;
                goto LAB_18030d887;
              }
            }
          }
        }
      }
    }
  }
  uVar1 = 0;
LAB_18030d887:
  *param_1 = uVar1;
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 0x58);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 100);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x6c);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x80);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x88);
  param_1[0x28] = *(undefined1 *)(param_2 + 0x90);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x8c);
  return param_1;
}



