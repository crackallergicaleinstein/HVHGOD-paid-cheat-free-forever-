// FUN_1803494b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803494b0 */

ulonglong FUN_1803494b0(undefined8 param_1,longlong param_2,longlong param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  ulonglong in_RAX;
  uint uVar5;
  
  if ((*(char *)(param_2 + 8) == '\0') || (*(char *)(param_3 + 8) == '\0')) {
LAB_18034952c:
    return in_RAX & 0xffffffffffffff00;
  }
  in_RAX = 0;
  if (*(char *)(param_2 + 9) == *(char *)(param_3 + 9)) {
    if (*(char *)(param_2 + 9) == '\0') goto LAB_18034952c;
    in_RAX = 0;
    if (*(char *)(param_2 + 10) == *(char *)(param_3 + 10)) {
      uVar5 = *(int *)(param_2 + 4) - *(int *)(param_3 + 4);
      uVar4 = -uVar5;
      if ((int)uVar4 < 0) {
        uVar4 = uVar5;
      }
      in_RAX = (ulonglong)uVar4;
      if ((int)uVar4 < 2) {
        fVar1 = *(float *)(param_2 + 0xc) - *(float *)(param_3 + 0xc);
        fVar2 = *(float *)(param_2 + 0x10) - *(float *)(param_3 + 0x10);
        fVar3 = *(float *)(param_2 + 0x14) - *(float *)(param_3 + 0x14);
        return (ulonglong)
               CONCAT31((int3)(uVar4 >> 8),100.0 < fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3);
      }
    }
  }
  return CONCAT71((int7)(in_RAX >> 8),1);
}



