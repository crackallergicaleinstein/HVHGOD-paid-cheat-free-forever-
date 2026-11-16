// FUN_1805e5230 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805e5230 */

ulonglong FUN_1805e5230(longlong param_1,ulonglong param_2,ulonglong param_3,longlong param_4,
                       ulonglong param_5,undefined4 param_6)

{
  byte bVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  byte bVar5;
  byte *pbVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  uVar9 = param_5;
  uVar7 = 0x20000;
  if (*(int *)(param_1 + 0x75e0) == 0) {
    uVar4 = 0x20000;
  }
  else {
    uVar4 = (ulonglong)*(uint *)(param_1 + 0x74f8);
  }
  if (uVar4 < param_5) {
    uVar4 = 0xffffffffffffffb8;
  }
  else {
    uVar4 = FUN_1805e46e0(param_1,param_4,param_5,param_2,param_3,param_6);
    if (uVar4 < 0xffffffffffffff89) {
      param_4 = param_4 + uVar4;
      lVar8 = uVar9 - uVar4;
      if (*(int *)(param_1 + 0x75e0) == 0) {
        uVar9 = 0x20000;
      }
      else {
        uVar9 = (ulonglong)*(uint *)(param_1 + 0x74f8);
      }
      if (param_3 < uVar9) {
        uVar9 = param_3;
      }
      else {
        if (*(int *)(param_1 + 0x75e0) != 0) {
          uVar7 = *(uint *)(param_1 + 0x74f8);
        }
        uVar9 = (ulonglong)uVar7;
      }
      uVar7 = *(uint *)(param_1 + 0x75fc);
      uVar10 = uVar9 + param_2;
      if ((longlong)uVar9 < 1) {
        uVar10 = param_2;
      }
      lVar2 = *(longlong *)(param_1 + 0x74d0);
      uVar4 = FUN_1805e4d20(param_1,&param_5,param_4,lVar8);
      if (uVar4 < 0xffffffffffffff89) {
        if ((((param_2 == 0) || (param_3 == 0)) && (0 < (int)param_5)) || (~param_2 < 0x100000)) {
          uVar4 = 0xffffffffffffffba;
        }
        else {
          if (((uVar7 == 0) && (0x1000000 < uVar10 - lVar2)) && (8 < (int)param_5)) {
            uVar7 = 0;
            if ((int)param_5 != 0) {
              bVar5 = (byte)*(undefined4 *)(*(longlong *)(param_1 + 0x10) + 4);
              uVar3 = 1 << (bVar5 & 0x1f);
              if (uVar3 != 0) {
                pbVar6 = (byte *)(*(longlong *)(param_1 + 0x10) + 10);
                uVar9 = (ulonglong)uVar3;
                do {
                  bVar1 = *pbVar6;
                  pbVar6 = pbVar6 + 8;
                  uVar3 = uVar7 + 1;
                  if (bVar1 < 0x17) {
                    uVar3 = uVar7;
                  }
                  uVar7 = uVar3;
                  uVar9 = uVar9 - 1;
                } while (uVar9 != 0);
              }
              uVar7 = uVar7 << (8 - bVar5 & 0x1f);
            }
            uVar7 = (uint)(6 < uVar7);
          }
          *(undefined4 *)(param_1 + 0x75fc) = 0;
          if (uVar7 == 0) {
            if (*(int *)(param_1 + 0x76b0) == 2) {
              uVar4 = FUN_1805e72d0();
            }
            else {
              uVar4 = FUN_1805e86f0(param_1,param_2,param_3,param_4 + uVar4,lVar8 - uVar4,
                                    (int)param_5,0);
            }
          }
          else {
            uVar4 = FUN_1805e5430();
          }
        }
      }
    }
  }
  return uVar4;
}



