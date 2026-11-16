// FUN_18030db60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18030db60 */

bool FUN_18030db60(char *param_1,char *param_2,float param_3)

{
  float fVar1;
  
  if ((((*param_1 != '\0') && (param_1[1] != '\0')) && (param_1[2] != '\0')) &&
     (-(param_3 + 0.35) <= *(float *)(param_1 + 0xc))) {
    fVar1 = *(float *)(param_1 + 0x10);
    if (*param_2 != '\0') {
      return ABS(fVar1 - *(float *)(param_2 + 4)) <= *(float *)(param_2 + 8);
    }
    if ((*(float *)(param_2 + 0xc) <= fVar1) && (fVar1 <= *(float *)(param_2 + 0x10))) {
      return true;
    }
  }
  return false;
}



