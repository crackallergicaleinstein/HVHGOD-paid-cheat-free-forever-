// FUN_180218f00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180218f00 */

ulonglong FUN_180218f00(longlong *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  ulonglong in_RAX;
  float *pfVar3;
  float fVar4;
  float fVar5;
  undefined4 uStack_34;
  
  if ((((*param_1 != 0) && (param_1[1] != 0)) &&
      (in_RAX = thunk_FUN_180624430((int)param_1[3]), (short)in_RAX < 1)) &&
     (in_RAX = thunk_FUN_180624430(*(undefined4 *)((longlong)param_1 + 0x1c)), (short)in_RAX < 1)) {
    fVar4 = *(float *)(param_1 + 4);
    in_RAX = thunk_FUN_180624430(fVar4);
    if ((short)in_RAX < 1) {
      fVar5 = *(float *)((longlong)param_1 + 0x24);
      in_RAX = thunk_FUN_180624430(fVar5);
      if ((((short)in_RAX < 1) && (16.0 <= fVar4)) &&
         ((16.0 <= fVar5 && ((fVar4 <= 16384.0 && (fVar5 <= 16384.0)))))) {
        fVar4 = *(float *)(param_1 + 5);
        in_RAX = thunk_FUN_180624430(fVar4);
        if (((short)in_RAX < 1) &&
           (((((1.0 <= fVar4 && (fVar4 <= 150.0)) &&
              (in_RAX = FUN_180218e30((longlong)param_1 + 0x2c), (char)in_RAX != '\0')) &&
             ((in_RAX = FUN_180218e30(param_1 + 9), (char)in_RAX != '\0' &&
              (in_RAX = FUN_180218e30((longlong)param_1 + 100), (char)in_RAX != '\0')))) &&
            (in_RAX = FUN_180218e30(param_1 + 0x10), (char)in_RAX != '\0')))) {
          uVar1 = *(undefined8 *)((longlong)param_1 + 0x9c);
          in_RAX = thunk_FUN_180624430(uVar1);
          if ((short)in_RAX < 1) {
            uStack_34 = (undefined4)((ulonglong)uVar1 >> 0x20);
            in_RAX = thunk_FUN_180624430(uStack_34);
            if (((short)in_RAX < 1) &&
               (in_RAX = thunk_FUN_180624430(*(undefined4 *)((longlong)param_1 + 0xa4)),
               (short)in_RAX < 1)) {
              pfVar3 = (float *)(param_1 + 0x15);
              uVar1 = *(undefined8 *)pfVar3;
              in_RAX = thunk_FUN_180624430(uVar1);
              if ((short)in_RAX < 1) {
                uStack_34 = (undefined4)((ulonglong)uVar1 >> 0x20);
                in_RAX = thunk_FUN_180624430(uStack_34);
                if (((short)in_RAX < 1) &&
                   (in_RAX = thunk_FUN_180624430((int)param_1[0x16]), (short)in_RAX < 1)) {
                  uVar1 = *(undefined8 *)((longlong)param_1 + 0xb4);
                  in_RAX = thunk_FUN_180624430(uVar1);
                  if ((short)in_RAX < 1) {
                    uStack_34 = (undefined4)((ulonglong)uVar1 >> 0x20);
                    in_RAX = thunk_FUN_180624430(uStack_34);
                    if (((short)in_RAX < 1) &&
                       (in_RAX = thunk_FUN_180624430(*(undefined4 *)((longlong)param_1 + 0xbc)),
                       (short)in_RAX < 1)) {
                      in_RAX = 0;
                      while( true ) {
                        if ((*pfVar3 <= pfVar3[-3]) || (64.0 < *pfVar3 - pfVar3[-3])) break;
                        uVar2 = (int)in_RAX + 1;
                        in_RAX = (ulonglong)uVar2;
                        pfVar3 = pfVar3 + 1;
                        if (2 < (int)uVar2) {
                          return CONCAT71((uint7)(uint3)(uVar2 >> 8),1);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



