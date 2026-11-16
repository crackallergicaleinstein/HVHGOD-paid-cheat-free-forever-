// FUN_1803000b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803000b0 */

undefined1 FUN_1803000b0(undefined8 param_1,longlong param_2,uint param_3,float param_4)

{
  uint *puVar1;
  
  for (; 180.0 < param_4; param_4 = param_4 + -360.0) {
  }
  for (; param_4 < -180.0; param_4 = param_4 + 360.0) {
  }
  if (0.01 < ABS(param_4)) {
    if ((param_2 == -8) || (puVar1 = (uint *)FUN_1803dfb00(), puVar1 == (uint *)0x0)) {
      return 0;
    }
    *puVar1 = *puVar1 | 0x7f;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *(undefined1 *)(puVar1 + 4) = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[5] = param_3;
    puVar1[9] = (uint)param_4;
  }
  return 1;
}



