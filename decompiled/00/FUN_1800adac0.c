// FUN_1800adac0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800adac0 */

undefined8 FUN_1800adac0(byte *param_1)

{
  short sVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  if ((((((*param_1 < 2) &&
         (sVar1 = thunk_FUN_180624430(*(undefined4 *)(param_1 + 0x10)), sVar1 < 1)) &&
        (sVar1 = thunk_FUN_180624430(*(undefined4 *)(param_1 + 0x14)), sVar1 < 1)) &&
       (((sVar1 = thunk_FUN_180624430(*(undefined4 *)(param_1 + 0x18)), sVar1 < 1 &&
         (sVar1 = thunk_FUN_180624430(*(undefined4 *)(param_1 + 0x1c)), sVar1 < 1)) &&
        ((sVar1 = thunk_FUN_180624430(*(undefined4 *)(param_1 + 0x20)), sVar1 < 1 &&
         ((sVar1 = thunk_FUN_180624430(*(undefined4 *)(param_1 + 0x24)), sVar1 < 1 &&
          (sVar1 = thunk_FUN_180624430(*(undefined4 *)(param_1 + 0x28)), sVar1 < 1)))))))) &&
      (((sVar1 = thunk_FUN_180624430(*(undefined4 *)(param_1 + 0x2c)), sVar1 < 1 &&
        ((((sVar1 = thunk_FUN_180624430(*(undefined4 *)(param_1 + 0x30)), sVar1 < 1 &&
           (sVar1 = thunk_FUN_180624430(*(undefined4 *)(param_1 + 0x34)), sVar1 < 1)) &&
          (param_1[0x38] < 2)) &&
         ((sVar1 = thunk_FUN_180624430(*(undefined4 *)(param_1 + 0x44)), sVar1 < 1 &&
          (sVar1 = thunk_FUN_180624430(*(undefined4 *)(param_1 + 0x48)), sVar1 < 1)))))) &&
       ((((sVar1 = thunk_FUN_180624430(*(undefined4 *)(param_1 + 0x4c)), sVar1 < 1 &&
          ((sVar1 = thunk_FUN_180624430(*(undefined4 *)(param_1 + 0x50)), sVar1 < 1 &&
           (sVar1 = thunk_FUN_180624430(*(undefined4 *)(param_1 + 0x54)), sVar1 < 1)))) &&
         (param_1[0x58] < 2)) &&
        ((((((param_1[0x60] < 2 && (param_1[0x61] < 2)) && (param_1[0x62] < 2)) &&
           ((param_1[99] < 2 && (param_1[100] < 2)))) &&
          ((param_1[0x65] < 2 && ((param_1[0x66] < 2 && (param_1[0x67] < 2)))))) &&
         (param_1[0x68] < 2)))))))) &&
     (((((param_1[0x69] < 2 && (param_1[0x6a] < 2)) && (param_1[0x6b] < 2)) &&
       (((((((param_1[0x6c] < 2 && (param_1[0x6d] < 2)) &&
            ((param_1[0x6e] < 2 && ((param_1[0x6f] < 2 && (param_1[0x70] < 2)))))) &&
           (param_1[0x71] < 2)) &&
          (((param_1[0x72] < 2 && (param_1[0x73] < 2)) && (param_1[0x74] < 2)))) &&
         ((sVar1 = thunk_FUN_180624430(*(undefined4 *)(param_1 + 0x80)), sVar1 < 1 &&
          (sVar1 = thunk_FUN_180624430(*(undefined4 *)(param_1 + 0x84)), sVar1 < 1)))) &&
        ((sVar1 = thunk_FUN_180624430(*(undefined4 *)(param_1 + 0x88)), sVar1 < 1 &&
         ((sVar1 = thunk_FUN_180624430(*(undefined4 *)(param_1 + 0x8c)), sVar1 < 1 &&
          (param_1[0x94] < 2)))))))) &&
      (((sVar1 = thunk_FUN_180624430(*(undefined4 *)(param_1 + 0x98)), sVar1 < 1 &&
        ((((sVar1 = thunk_FUN_180624430(*(undefined4 *)(param_1 + 0x9c)), sVar1 < 1 &&
           (param_1[0xa0] < 2)) && (param_1[0xa1] < 2)) &&
         ((param_1[0xa2] < 2 && (param_1[0xa3] < 2)))))) &&
       ((((sVar1 = thunk_FUN_180624430(*(undefined4 *)(param_1 + 0xa4)), sVar1 < 1 &&
          ((sVar1 = thunk_FUN_180624430(*(undefined4 *)(param_1 + 0xa8)), sVar1 < 1 &&
           (param_1[0xac] < 2)))) && (param_1[0xad] < 2)) &&
        (((sVar1 = thunk_FUN_180624430(*(undefined4 *)(param_1 + 0xb8)), sVar1 < 1 &&
          (sVar1 = thunk_FUN_180624430(*(undefined4 *)(param_1 + 0xbc)), sVar1 < 1)) &&
         (param_1[0xc0] < 2)))))))))) {
    pbVar3 = param_1 + 0xd8;
    for (pbVar2 = param_1 + 200; pbVar2 != pbVar3; pbVar2 = pbVar2 + 4) {
      sVar1 = thunk_FUN_180624430(*(undefined4 *)pbVar2);
      if (0 < sVar1) {
        return 0;
      }
    }
    pbVar2 = param_1 + 0xe8;
    for (; pbVar3 != pbVar2; pbVar3 = pbVar3 + 4) {
      sVar1 = thunk_FUN_180624430(*(undefined4 *)pbVar3);
      if (0 < sVar1) {
        return 0;
      }
    }
    for (; pbVar2 != param_1 + 0xf8; pbVar2 = pbVar2 + 4) {
      sVar1 = thunk_FUN_180624430(*(undefined4 *)pbVar2);
      if (0 < sVar1) {
        return 0;
      }
    }
    sVar1 = thunk_FUN_180624430(*(undefined4 *)(param_1 + 0xf8));
    if ((sVar1 < 1) && (param_1[0xfc] < 2)) {
      for (pbVar3 = param_1 + 0x108; pbVar3 != param_1 + 0x118; pbVar3 = pbVar3 + 4) {
        sVar1 = thunk_FUN_180624430(*(undefined4 *)pbVar3);
        if (0 < sVar1) {
          return 0;
        }
      }
      sVar1 = thunk_FUN_180624430(*(undefined4 *)(param_1 + 0x118));
      if ((((sVar1 < 1) &&
           (sVar1 = thunk_FUN_180624430(*(undefined4 *)(param_1 + 0x11c)), sVar1 < 1)) &&
          ((sVar1 = thunk_FUN_180624430(*(undefined4 *)(param_1 + 0x120)), sVar1 < 1 &&
           (((param_1[0x124] < 2 && (param_1[0x125] < 2)) && (param_1[0x126] < 2)))))) &&
         (((param_1[0x127] < 2 && (param_1[0x128] < 2)) &&
          ((sVar1 = thunk_FUN_180624430(*(undefined4 *)(param_1 + 0x130)), sVar1 < 1 &&
           (((sVar1 = thunk_FUN_180624430(*(undefined4 *)(param_1 + 0x138)), sVar1 < 1 &&
             (sVar1 = thunk_FUN_180624430(*(undefined4 *)(param_1 + 0x13c)), sVar1 < 1)) &&
            (sVar1 = thunk_FUN_180624430(*(undefined4 *)(param_1 + 0x140)), sVar1 < 1)))))))) {
        for (pbVar3 = param_1 + 0x144; pbVar3 != param_1 + 0x147; pbVar3 = pbVar3 + 1) {
          if (1 < *pbVar3) {
            return 0;
          }
        }
        for (pbVar3 = param_1 + 0x148; pbVar3 != param_1 + 0x154; pbVar3 = pbVar3 + 4) {
          sVar1 = thunk_FUN_180624430(*(undefined4 *)pbVar3);
          if (0 < sVar1) {
            return 0;
          }
        }
        if ((((((((((param_1[0x16c] < 2) && (param_1[0x16d] < 2)) &&
                  (sVar1 = thunk_FUN_180624430(*(undefined4 *)(param_1 + 0x178)), sVar1 < 1)) &&
                 ((param_1[0x180] < 2 && (param_1[0x181] < 2)))) && (param_1[0x182] < 2)) &&
               ((param_1[0x183] < 2 && (param_1[0x184] < 2)))) &&
              ((param_1[0x185] < 2 &&
               (((param_1[0x18c] < 2 &&
                 (sVar1 = thunk_FUN_180624430(*(undefined4 *)(param_1 + 400)), sVar1 < 1)) &&
                (param_1[0x194] < 2)))))) && ((param_1[0x195] < 2 && (param_1[0x196] < 2)))) &&
            (((param_1[0x19c] < 2 &&
              ((((param_1[0x19d] < 2 && (param_1[0x19e] < 2)) &&
                ((param_1[0x1a4] < 2 &&
                 (((param_1[0x1a5] < 2 &&
                   (sVar1 = thunk_FUN_180624430(*(undefined4 *)(param_1 + 0x1b0)), sVar1 < 1)) &&
                  (param_1[0x1b4] < 2)))))) && ((param_1[0x1bc] < 2 && (param_1[0x1c0] < 2)))))) &&
             (sVar1 = thunk_FUN_180624430(*(undefined4 *)(param_1 + 0x1d4)), sVar1 < 1)))) &&
           (((param_1[0x1d8] < 2 &&
             (sVar1 = thunk_FUN_180624430(*(undefined4 *)(param_1 + 0x1e4)), sVar1 < 1)) &&
            ((param_1[0x1e8] < 2 &&
             ((((param_1[0x1e9] < 2 &&
                (sVar1 = thunk_FUN_180624430(*(undefined4 *)(param_1 + 0x1ec)), sVar1 < 1)) &&
               (sVar1 = thunk_FUN_180624430(*(undefined4 *)(param_1 + 0x1f0)), sVar1 < 1)) &&
              (param_1[500] < 2)))))))) {
          return 1;
        }
      }
    }
  }
  return 0;
}



