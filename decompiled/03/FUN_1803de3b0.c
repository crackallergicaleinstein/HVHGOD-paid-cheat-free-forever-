// FUN_1803de3b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803de3b0 */

void FUN_1803de3b0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  puVar2 = (undefined8 *)FUN_1803dff30();
  lVar3 = 0;
  DAT_180b0dfc8 = *puVar2;
  uVar1 = DAT_180b0dfc8;
  DAT_180b0dfd0 = *(undefined4 *)(puVar2 + 1);
  if (param_2 == 0) {
    DAT_180b0dfd8 = 0;
  }
  else {
    DAT_180b0dfd8 = *(undefined8 *)(param_2 + 0x60);
    if (*(longlong *)(param_2 + 0x40) != 0) {
      lVar3 = *(longlong *)(param_2 + 0x40) + 0x10;
    }
    if (lVar3 != 0) {
      lVar4 = 0;
      if (*(longlong *)(lVar3 + 0x30) != 0) {
        lVar4 = *(longlong *)(lVar3 + 0x30) + 0x10;
      }
      if (lVar4 != 0) {
        DAT_180b0dfe0 = *(undefined4 *)(lVar4 + 0xc);
        DAT_180b0dfe4 = *(undefined4 *)(lVar3 + 0x10);
        DAT_180b0dfe8 = 0;
        return;
      }
    }
  }
  DAT_180b0dfc8._4_4_ = (undefined4)((ulonglong)*puVar2 >> 0x20);
  DAT_180b0dfe0 = DAT_180b0dfc8._4_4_;
  if (lVar3 == 0) {
    DAT_180b0dfe4 = 0;
    DAT_180b0dfe8 = 0;
    DAT_180b0dfc8 = uVar1;
    return;
  }
  DAT_180b0dfe4 = *(undefined4 *)(lVar3 + 0x10);
  DAT_180b0dfe8 = 0;
  DAT_180b0dfc8 = uVar1;
  return;
}



