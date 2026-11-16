// FUN_18048e2f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18048e2f0 */

undefined1 (*) [16]
FUN_18048e2f0(undefined1 (*param_1) [16],longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  *param_1 = (undefined1  [16])0x0;
  *(undefined8 *)param_1[1] = 0;
  *(undefined8 *)(param_1[1] + 8) = 0xf;
  (*param_1)[0] = 0;
  FUN_1800f5540(param_1,((param_2[1] - *param_2) + 2U) / 3 << 2,param_3,param_4,1);
  uVar6 = 0;
  lVar2 = param_2[1];
  lVar4 = *param_2;
  if (lVar2 != lVar4) {
    do {
      if (uVar6 + 1 < (ulonglong)(lVar2 - lVar4)) {
        uVar1 = (ulonglong)*(byte *)(lVar4 + 1 + uVar6) << 8;
      }
      else {
        uVar1 = 0;
      }
      if (uVar6 + 2 < (ulonglong)(lVar2 - lVar4)) {
        uVar5 = (ulonglong)*(byte *)(lVar4 + 2 + uVar6);
      }
      else {
        uVar5 = 0;
      }
      uVar1 = (ulonglong)*(byte *)(lVar4 + uVar6) << 0x10 | uVar1;
      uVar5 = uVar1 | uVar5;
      FUN_18015af80(param_1,"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                            [*(byte *)(lVar4 + uVar6) >> 2]);
      FUN_18015af80(param_1,"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                            [(uint)(uVar1 >> 0xc) & 0x3f]);
      if (uVar6 + 1 < (ulonglong)(param_2[1] - *param_2)) {
        cVar3 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                [(uint)(uVar5 >> 6) & 0x3f];
      }
      else {
        cVar3 = '=';
      }
      FUN_18015af80(param_1,cVar3);
      if (uVar6 + 2 < (ulonglong)(param_2[1] - *param_2)) {
        cVar3 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                [(uint)uVar5 & 0x3f];
      }
      else {
        cVar3 = '=';
      }
      FUN_18015af80(param_1,cVar3);
      uVar6 = uVar6 + 3;
      lVar2 = param_2[1];
      lVar4 = *param_2;
    } while (uVar6 < (ulonglong)(lVar2 - lVar4));
  }
  return param_1;
}



