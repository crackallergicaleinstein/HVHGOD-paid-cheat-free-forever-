// FUN_1800f5540 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800f5540 */

void FUN_1800f5540(undefined8 *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar2 = param_1[3];
  if (uVar2 < param_2) {
    lVar3 = param_1[2];
    if (0x7fffffffffffffffU - lVar3 < param_2 - lVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bb70();
    }
    uVar6 = param_2 | 0xf;
    uVar7 = 0x7fffffffffffffff;
    if (((uVar6 < 0x8000000000000000) && (uVar2 <= 0x7fffffffffffffff - (uVar2 >> 1))) &&
       (uVar1 = uVar2 + (uVar2 >> 1), uVar7 = uVar6, uVar6 < uVar1)) {
      uVar7 = uVar1;
    }
    uVar5 = FUN_18015bca0(uVar7 + 1);
    param_1[2] = param_2;
    param_1[3] = uVar7;
    if (uVar2 < 0x10) {
      FUN_18063aed0(uVar5,param_1,lVar3 + 1);
    }
    else {
      uVar4 = *param_1;
      FUN_18063aed0(uVar5,uVar4,lVar3 + 1);
      FUN_18015bfb0(param_1,uVar4,uVar2);
    }
    *param_1 = uVar5;
    param_1[2] = lVar3;
  }
  return;
}



