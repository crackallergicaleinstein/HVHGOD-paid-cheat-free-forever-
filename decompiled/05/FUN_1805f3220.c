// FUN_1805f3220 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805f3220 */

longlong FUN_1805f3220(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((*param_1 == 0) && (param_1[1] == 0)) {
    *param_1 = (longlong)FUN_1805f1460;
    param_1[1] = (longlong)FUN_1805f1470;
    param_1[2] = 0;
  }
  if (((code *)*param_1 != (code *)0x0) && (param_1[1] != 0)) {
    lVar4 = (*(code *)*param_1)(param_1[2],0x25520);
    if (lVar4 != 0) {
      lVar2 = *param_1;
      lVar3 = param_1[1];
      *(undefined8 *)(lVar4 + 0x5430) = 5;
      lVar1 = param_1[2];
      *(longlong *)(lVar4 + 0x54e0) = lVar2;
      *(longlong *)(lVar4 + 0x54e8) = lVar3;
      *(undefined8 *)(lVar4 + 0x5464) = 0;
      *(longlong *)(lVar4 + 0x54f0) = lVar1;
      *(undefined4 *)(lVar4 + 0x140c) = 0xc00000c;
      *(undefined8 *)(lVar4 + 0x5410) = 0;
      *(undefined8 *)(lVar4 + 0x5418) = 0;
      *(undefined8 *)(lVar4 + 0x5420) = 0;
      *(undefined8 *)(lVar4 + 0x5428) = 0;
      *(undefined4 *)(lVar4 + 0x546c) = 0;
      *(undefined4 *)(lVar4 + 0x54d0) = 0;
      *(undefined4 *)(lVar4 + 0x5438) = 1;
      *(undefined4 *)(lVar4 + 0x543c) = 4;
      *(undefined4 *)(lVar4 + 0x5440) = 8;
      return lVar4;
    }
  }
  return 0;
}



