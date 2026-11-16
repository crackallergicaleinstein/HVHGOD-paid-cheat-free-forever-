// FUN_18026ba40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18026ba40 */

ulonglong FUN_18026ba40(float *param_1,float param_2,int param_3)

{
  undefined1 auVar1 [16];
  int *in_RAX;
  undefined1 in_register_00001244 [12];
  float fVar2;
  int local_res18 [4];
  int local_28 [8];
  
  fVar2 = *param_1 - param_2;
  if (*(char *)(param_1 + 2) != '\0') {
    auVar1._4_12_ = in_register_00001244;
    auVar1._0_4_ = param_2;
    local_res18[0] = param_3;
    in_RAX = (int *)thunk_FUN_180624430(auVar1._0_8_);
    if ((((short)in_RAX < 1) && (-0.0078125 <= fVar2)) && (fVar2 <= param_1[1])) {
      in_RAX = local_28;
      if (-1 < param_3) {
        in_RAX = local_res18;
      }
      if (200 < param_3) {
        in_RAX = &DAT_1806ff9a8;
      }
      if (fVar2 <= (float)*in_RAX / 1000.0) {
        return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
      }
    }
  }
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}



