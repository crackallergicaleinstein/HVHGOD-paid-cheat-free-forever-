// FUN_180636420 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180636420 */

float FUN_180636420(float param_1,float param_2)

{
  double dVar1;
  float fVar2;
  double dVar3;
  
  dVar1 = (double)param_1;
  dVar3 = (double)param_2;
  if ((ulonglong)ABS(dVar1) >> 0x34 == 0x7ff) {
    if (((ulonglong)dVar1 & 0xfffffffffffff) == 0) goto LAB_18063653f;
    if ((ulonglong)ABS(dVar3) >> 0x34 != 0x7ff) goto LAB_180636521;
  }
  else if ((ulonglong)ABS(dVar3) >> 0x34 != 0x7ff) {
    dVar3 = SQRT(dVar3 * dVar3 + dVar1 * dVar1);
    if (3.4028234663852886e+38 < dVar3) {
      fVar2 = (float)FUN_180622560("_hypotf",0x18,0x7f800000,3,0x11,0x22,param_1,param_2,2);
      return fVar2;
    }
    return (float)dVar3;
  }
  if (((ulonglong)dVar3 & 0xfffffffffffff) != 0) {
LAB_180636521:
    return param_1 * param_1 + param_2 * param_2;
  }
LAB_18063653f:
  FUN_1806281c0(0);
  return INFINITY;
}



