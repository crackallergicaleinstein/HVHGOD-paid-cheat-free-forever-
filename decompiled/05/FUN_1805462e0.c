// FUN_1805462e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805462e0 */

undefined8
FUN_1805462e0(undefined8 param_1,uint param_2,float *param_3,float *param_4,float *param_5,
             float *param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float local_c8;
  float fStack_c4;
  float local_b8;
  float fStack_b4;
  int local_a8 [42];
  
  local_a8[0] = 1;
  local_a8[1] = 2;
  local_a8[2] = 2;
  local_a8[3] = 3;
  local_a8[4] = 3;
  local_a8[5] = 4;
  local_a8[6] = 4;
  local_a8[7] = 6;
  local_a8[8] = 6;
  local_a8[9] = 7;
  local_a8[10] = 6;
  local_a8[0xb] = 8;
  local_a8[0xc] = 8;
  local_a8[0xd] = 9;
  local_a8[0xe] = 9;
  local_a8[0xf] = 10;
  local_a8[0x10] = 10;
  local_a8[0x11] = 0xb;
  local_a8[0x12] = 6;
  local_a8[0x13] = 0xc;
  local_a8[0x14] = 0xc;
  local_a8[0x15] = 0xd;
  local_a8[0x16] = 0xd;
  local_a8[0x17] = 0xe;
  local_a8[0x18] = 0xe;
  local_a8[0x19] = 0xf;
  local_a8[0x1a] = 1;
  local_a8[0x1b] = 0x11;
  local_a8[0x1c] = 0x11;
  local_a8[0x1d] = 0x12;
  local_a8[0x1e] = 0x12;
  local_a8[0x1f] = 0x13;
  local_a8[0x20] = 1;
  local_a8[0x21] = 0x14;
  local_a8[0x22] = 0x14;
  local_a8[0x23] = 0x15;
  local_a8[0x24] = 0x15;
  local_a8[0x25] = 0x16;
  if ((((DAT_180c62ff8 != 0) && (param_2 < 0x13)) && (*(char *)(DAT_180c62ff8 + 0x164) != '\0')) &&
     (*(char *)(DAT_180c62ff8 + 0x170) != '\0')) {
    uVar1 = *(undefined8 *)
             (DAT_180c62ff8 + ((longlong)local_a8[(longlong)(int)param_2 * 2] + 2) * 0xc);
    uVar2 = *(undefined8 *)
             (DAT_180c62ff8 + ((longlong)local_a8[(longlong)(int)param_2 * 2 + 1] + 2) * 0xc);
    if (((char)*(undefined4 *)
                (DAT_180c62ff8 + 8 + ((longlong)local_a8[(longlong)(int)param_2 * 2] + 2) * 0xc) !=
         '\0') &&
       (*(char *)(DAT_180c62ff8 + 8 + ((longlong)local_a8[(longlong)(int)param_2 * 2 + 1] + 2) * 0xc
                 ) != '\0')) {
      fVar3 = *(float *)(DAT_180c62ff8 + 0x168) - *(float *)(DAT_180c62ff8 + 0x15c);
      if ((0.0 < fVar3) &&
         (fVar4 = *(float *)(DAT_180c62ff8 + 0x16c) - *(float *)(DAT_180c62ff8 + 0x160), 0.0 < fVar4
         )) {
        local_c8 = (float)uVar1;
        fStack_c4 = (float)((ulonglong)uVar1 >> 0x20);
        *param_3 = (local_c8 - *(float *)(DAT_180c62ff8 + 0x15c)) / fVar3;
        local_b8 = (float)uVar2;
        *param_4 = (fStack_c4 - *(float *)(DAT_180c62ff8 + 0x160)) / fVar4;
        fStack_b4 = (float)((ulonglong)uVar2 >> 0x20);
        *param_5 = (local_b8 - *(float *)(DAT_180c62ff8 + 0x15c)) / fVar3;
        *param_6 = (fStack_b4 - *(float *)(DAT_180c62ff8 + 0x160)) / fVar4;
        return 1;
      }
    }
  }
  return 0;
}



