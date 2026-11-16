// FUN_1804b75e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804b75e0 */

void FUN_1804b75e0(longlong param_1)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  
  lVar2 = DAT_180bb8ae8;
  *(longlong *)(DAT_180bb8ae8 + 0x14d0) = param_1;
  if (param_1 == 0) {
    *(undefined8 *)(lVar2 + 0x28c0) = 0;
  }
  else {
    *(longlong *)(lVar2 + 0x28c0) =
         *(longlong *)(lVar2 + 0x14a8) + 0x58 + (longlong)(*(int *)(lVar2 + 0x14a0) + -1) * 0x88;
    if (*(int *)(param_1 + 0x1d0) != -1) {
      *(longlong *)(lVar2 + 0x2338) =
           (longlong)*(int *)(param_1 + 0x1d0) * 600 + *(longlong *)(lVar2 + 0x2360);
      *(undefined4 *)(lVar2 + 0x11f0) = 0x3f800000;
      goto LAB_1804b7676;
    }
  }
  *(undefined8 *)(lVar2 + 0x2338) = 0;
  *(undefined4 *)(lVar2 + 0x11f0) = 0x3f800000;
  if (param_1 == 0) {
    return;
  }
LAB_1804b7676:
  if ((*(byte *)(lVar2 + 0x2c) & 0x10) != 0) {
    fVar4 = *(float *)(*(longlong *)(param_1 + 0x20) + 0x18);
    if (fVar4 == 0.0) {
      fVar4 = *(float *)(lVar2 + 0x38);
    }
    *(float *)(lVar2 + 0x11ec) = fVar4;
  }
  uVar1 = *(undefined1 *)(param_1 + 0xd1);
  *(undefined1 *)(param_1 + 0xd1) = 0;
  FUN_1804c2460(0);
  lVar3 = DAT_180bb8ae8;
  *(undefined1 *)(param_1 + 0xd1) = uVar1;
  lVar2 = *(longlong *)(lVar3 + 0x14d0);
  if ((*(longlong *)(lVar3 + 0x2338) == 0) && (*(longlong *)(lVar2 + 0x1c8) == 0)) {
    *(undefined1 *)(lVar2 + 0x178) = 1;
    return;
  }
  *(undefined1 *)(lVar2 + 0x178) = 0;
  return;
}



