// FUN_180157850 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180157850 */

void FUN_180157850(longlong *param_1,undefined1 *param_2)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  
  puVar5 = (undefined1 *)param_1[1];
  if (puVar5 == (undefined1 *)param_1[2]) {
    lVar8 = (longlong)puVar5 - *param_1;
    if (lVar8 == 0x7fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_1801136f0();
    }
    uVar1 = lVar8 + 1;
    uVar4 = param_1[2] - *param_1;
    uVar6 = 0x7fffffffffffffff;
    if ((uVar4 <= 0x7fffffffffffffff - (uVar4 >> 1)) &&
       (uVar6 = (uVar4 >> 1) + uVar4, uVar6 < uVar1)) {
      uVar6 = uVar1;
    }
    lVar3 = FUN_18015bca0(uVar6);
    *(undefined1 *)(lVar8 + lVar3) = *param_2;
    puVar2 = (undefined1 *)*param_1;
    if (puVar5 == (undefined1 *)param_1[1]) {
      lVar7 = param_1[1] - (longlong)puVar2;
      lVar8 = lVar3;
      puVar5 = puVar2;
    }
    else {
      FUN_18063aed0(lVar3,puVar2,(longlong)puVar5 - (longlong)puVar2);
      lVar7 = param_1[1] - (longlong)puVar5;
      lVar8 = lVar8 + 1 + lVar3;
    }
    FUN_18063aed0(lVar8,puVar5,lVar7);
    FUN_1801413a0(param_1,lVar3,uVar1,uVar6);
  }
  else {
    *puVar5 = *param_2;
    param_1[1] = param_1[1] + 1;
  }
  return;
}



