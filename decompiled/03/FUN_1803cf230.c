// FUN_1803cf230 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803cf230 */

undefined2 * FUN_1803cf230(undefined2 *param_1,undefined2 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  *(undefined8 *)(param_1 + 5) = *(undefined8 *)(param_2 + 5);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  uVar4 = *(undefined8 *)(param_2 + 0xf);
  uVar5 = *(undefined8 *)(param_2 + 0x13);
  uVar6 = *(undefined8 *)(param_2 + 0x17);
  *(undefined8 *)(param_1 + 0xb) = *(undefined8 *)(param_2 + 0xb);
  *(undefined8 *)(param_1 + 0xf) = uVar4;
  *(undefined8 *)(param_1 + 0x13) = uVar5;
  *(undefined8 *)(param_1 + 0x17) = uVar6;
  uVar4 = *(undefined8 *)(param_2 + 0x1f);
  uVar5 = *(undefined8 *)(param_2 + 0x23);
  uVar6 = *(undefined8 *)(param_2 + 0x27);
  *(undefined8 *)(param_1 + 0x1b) = *(undefined8 *)(param_2 + 0x1b);
  *(undefined8 *)(param_1 + 0x1f) = uVar4;
  *(undefined8 *)(param_1 + 0x23) = uVar5;
  *(undefined8 *)(param_1 + 0x27) = uVar6;
  uVar4 = *(undefined8 *)(param_2 + 0x2f);
  *(undefined8 *)(param_1 + 0x2b) = *(undefined8 *)(param_2 + 0x2b);
  *(undefined8 *)(param_1 + 0x2f) = uVar4;
  FUN_18063aed0(param_1 + 0x34,param_2 + 0x34);
  plVar1 = (longlong *)(param_2 + 0x434);
  plVar2 = (longlong *)(param_1 + 0x434);
  if (plVar2 != plVar1) {
    lVar3 = *plVar2;
    if (lVar3 != 0) {
      lVar7 = lVar3;
      if ((0xfff < (ulonglong)((*(longlong *)(param_1 + 0x43c) - lVar3 >> 1) * 2)) &&
         (lVar7 = *(longlong *)(lVar3 + -8), 0x1f < (lVar3 - lVar7) - 8U)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      FUN_1804547d0(lVar7);
      *plVar2 = 0;
      *(undefined8 *)(param_1 + 0x438) = 0;
      *(undefined8 *)(param_1 + 0x43c) = 0;
    }
    *plVar2 = *plVar1;
    *(undefined8 *)(param_1 + 0x438) = *(undefined8 *)(param_2 + 0x438);
    *(undefined8 *)(param_1 + 0x43c) = *(undefined8 *)(param_2 + 0x43c);
    *plVar1 = 0;
    *(undefined8 *)(param_2 + 0x438) = 0;
    *(undefined8 *)(param_2 + 0x43c) = 0;
  }
  *(undefined4 *)(param_1 + 0x440) = *(undefined4 *)(param_2 + 0x440);
  uVar4 = *(undefined8 *)(param_2 + 0x446);
  *(undefined8 *)(param_1 + 0x442) = *(undefined8 *)(param_2 + 0x442);
  *(undefined8 *)(param_1 + 0x446) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x44e);
  *(undefined8 *)(param_1 + 0x44a) = *(undefined8 *)(param_2 + 0x44a);
  *(undefined8 *)(param_1 + 0x44e) = uVar4;
  *(undefined8 *)(param_1 + 0x454) = *(undefined8 *)(param_2 + 0x454);
  *(undefined8 *)(param_1 + 0x458) = *(undefined8 *)(param_2 + 0x458);
  *(undefined8 *)(param_1 + 0x45c) = *(undefined8 *)(param_2 + 0x45c);
  *(undefined8 *)(param_1 + 0x460) = *(undefined8 *)(param_2 + 0x460);
  *(undefined8 *)(param_1 + 0x464) = *(undefined8 *)(param_2 + 0x464);
  FUN_18063aed0(param_1 + 0x468,param_2 + 0x468,0xe14);
  return param_1;
}



