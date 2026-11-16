// FUN_180421b00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180421b00 */

float FUN_180421b00(longlong param_1,undefined8 param_2,float param_3,float param_4)

{
  longlong lVar1;
  float local_res10;
  
  lVar1 = (longlong)*(int *)(param_1 + 0x9c00) * 0x138;
  local_res10 = (float)param_2;
  switch((int)((ulonglong)param_2 >> 0x20)) {
  default:
    return local_res10;
  case 2:
    return (local_res10 / 72.0) * *(float *)(param_1 + 0x9c54);
  case 3:
    return (local_res10 / 6.0) * *(float *)(param_1 + 0x9c54);
  case 4:
    return (local_res10 / 25.4) * *(float *)(param_1 + 0x9c54);
  case 5:
    return (local_res10 / 2.54) * *(float *)(param_1 + 0x9c54);
  case 6:
    return local_res10 * *(float *)(param_1 + 0x9c54);
  case 7:
    return (local_res10 / 100.0) * param_4 + param_3;
  case 8:
    return local_res10 * *(float *)(lVar1 + 0x124 + param_1);
  case 9:
    return local_res10 * *(float *)(lVar1 + 0x124 + param_1) * 0.52;
  }
}



