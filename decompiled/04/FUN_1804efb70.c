// FUN_1804efb70 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804efb70 */

void FUN_1804efb70(longlong param_1)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  longlong lVar4;
  
  lVar1 = *(longlong *)(param_1 + 400);
  lVar4 = (longlong)*(int *)(param_1 + 0x74) * 0x78 + *(longlong *)(param_1 + 0x18);
  if (*(char *)(lVar1 + 0x159) != '\0') {
    lVar3 = *(longlong *)(DAT_180bb8ae8 + 0x14d0);
    *(undefined1 *)(lVar3 + 0x159) = 0;
    if (((*(float *)(lVar3 + 0x130) < *(float *)(lVar3 + 0x118)) ||
        (*(float *)(lVar3 + 0x134) < *(float *)(lVar3 + 0x11c))) &&
       (*(char *)(lVar3 + 0xd1) == '\0')) {
      FUN_1804c5a40(
                   "Code uses SetCursorPos()/SetCursorScreenPos() to extend window/parent boundaries.\nPlease submit an item e.g. Dummy() afterwards in order to grow window/parent boundaries."
                   );
    }
  }
  if ((*(byte *)(param_1 + 0x94) & 1) == 0) {
    lVar3 = 0x4c;
    if (*(char *)(param_1 + 0x24d) == '\0') {
      lVar3 = 0x48;
    }
  }
  else {
    lVar3 = 0x50;
  }
  auVar2 = vmaxss_avx(ZEXT416(*(uint *)(lVar3 + lVar4)),ZEXT416(*(uint *)(lVar1 + 0x130)));
  *(int *)(lVar3 + lVar4) = auVar2._0_4_;
  if (*(char *)(lVar4 + 0x6a) != '\0') {
    auVar2 = vmaxss_avx(ZEXT416(*(uint *)(param_1 + 0x80)),
                        ZEXT416((uint)(*(float *)(lVar1 + 0x134) + *(float *)(param_1 + 0x88))));
    *(int *)(param_1 + 0x80) = auVar2._0_4_;
  }
  *(undefined4 *)(lVar4 + 0x44) = *(undefined4 *)(lVar1 + 0x1e8);
  auVar2 = vmaxss_avx(ZEXT416(*(uint *)(param_1 + 0x8c)),ZEXT416(*(uint *)(lVar1 + 0x154)));
  *(int *)(param_1 + 0x8c) = auVar2._0_4_;
  return;
}



