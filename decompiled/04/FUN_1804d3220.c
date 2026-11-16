// FUN_1804d3220 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804d3220 */

int FUN_1804d3220(longlong param_1,int param_2,int param_3,int param_4,undefined2 param_5,
                 undefined2 param_6,int param_7,int param_8,int param_9,int param_10)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    if (param_3 != 0) {
      lVar1 = (longlong)param_2 * 0xe;
      param_2 = param_2 + 1;
      *(short *)(lVar1 + param_1) = (short)(param_7 + param_9 >> 1);
      *(undefined1 *)(lVar1 + 0xc + param_1) = 3;
      *(undefined2 *)(lVar1 + 4 + param_1) = (undefined2)param_9;
      *(undefined2 *)(lVar1 + 6 + param_1) = (undefined2)param_10;
      *(short *)(lVar1 + 2 + param_1) = (short)(param_8 + param_10 >> 1);
    }
    lVar1 = (longlong)param_2 * 0xe;
    *(undefined2 *)(lVar1 + param_1) = param_5;
    *(undefined2 *)(lVar1 + 2 + param_1) = param_6;
    *(short *)(lVar1 + 4 + param_1) = (short)param_7;
    *(undefined1 *)(lVar1 + 0xc + param_1) = 3;
    *(short *)(lVar1 + 6 + param_1) = (short)param_8;
    return param_2 + 1;
  }
  lVar1 = (longlong)param_2 * 0xe;
  *(undefined2 *)(lVar1 + param_1) = param_5;
  *(undefined2 *)(lVar1 + 2 + param_1) = param_6;
  if (param_3 == 0) {
    *(undefined1 *)(lVar1 + 0xc + param_1) = 2;
    *(undefined4 *)(lVar1 + 4 + param_1) = 0;
    return param_2 + 1;
  }
  *(undefined2 *)(lVar1 + 4 + param_1) = (undefined2)param_9;
  *(undefined2 *)(lVar1 + 6 + param_1) = (undefined2)param_10;
  *(undefined1 *)(lVar1 + 0xc + param_1) = 3;
  return param_2 + 1;
}



