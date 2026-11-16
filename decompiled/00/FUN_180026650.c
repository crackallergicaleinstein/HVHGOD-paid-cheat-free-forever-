// FUN_180026650 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180026650 */

void FUN_180026650(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_58 = 0xc;
  FUN_1800484b0(0,&local_58);
  uVar4 = 0;
  while (uVar6 = param_2[1], uVar4 < uVar6) {
    lVar2 = *param_2;
    lVar5 = uVar6 + lVar2;
    lVar3 = thunk_FUN_1805f7e70(lVar2 + uVar4,lVar5,10);
    uVar6 = param_2[1];
    if ((lVar3 == lVar5) || (lVar3 = lVar3 - lVar2, lVar3 == -1)) break;
    if (uVar6 < uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_18015ac40();
    }
    uStack_50 = lVar3 - uVar4;
    if (uVar6 - uVar4 < lVar3 - uVar4) {
      uStack_50 = uVar6 - uVar4;
    }
    local_58 = uVar4 + *param_2;
    plVar1 = (longlong *)param_1[1];
    if (plVar1 == (longlong *)param_1[2]) {
      FUN_180178c40(param_1,plVar1,&local_58);
      lVar2 = param_1[1];
    }
    else {
      uStack_50._4_4_ = (undefined4)(uStack_50 >> 0x20);
      *plVar1 = local_58;
      *(undefined4 *)(plVar1 + 1) = (undefined4)uStack_50;
      *(undefined4 *)((longlong)plVar1 + 0xc) = uStack_50._4_4_;
      lVar2 = param_1[1] + 0x10;
      param_1[1] = lVar2;
    }
    uVar4 = lVar3 + 1;
    if (0xc0 < (ulonglong)(lVar2 - *param_1)) {
      return;
    }
  }
  if (uVar6 < uVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_18015ac40();
  }
  local_58 = uVar4 + *param_2;
  plVar1 = (longlong *)param_1[1];
  if (plVar1 == (longlong *)param_1[2]) {
    uStack_50 = uVar6 - uVar4;
    FUN_180178c40(param_1,plVar1,&local_58);
    return;
  }
  *plVar1 = local_58;
  plVar1[1] = uVar6 - uVar4;
  param_1[1] = param_1[1] + 0x10;
  return;
}



