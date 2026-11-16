// FUN_1805d82d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805d82d0 */

undefined8 FUN_1805d82d0(longlong *param_1)

{
  uint uVar1;
  longlong *plVar2;
  uint uVar3;
  undefined8 uVar4;
  
  param_1[0x40f] = (longlong)param_1 + 0x1074;
  param_1[5] = (longlong)param_1 + 0x1074;
  *(undefined4 *)(param_1 + 6) = 0x1000;
  do {
    if ((int)param_1[4] == 0) {
      plVar2 = (longlong *)*param_1;
      uVar1 = *(uint *)((longlong)plVar2 + 0xc);
      if ((code *)plVar2[4] == (code *)0x0) {
        uVar3 = (int)plVar2[1] - uVar1;
        if (uVar3 < 0x1001) {
          if (uVar3 == 0) goto LAB_1805d8336;
        }
        else {
          uVar3 = 0x1000;
        }
        FUN_18063aed0((longlong)param_1 + 0x74,(ulonglong)uVar1 + *plVar2,uVar3);
      }
      else {
        uVar3 = (*(code *)plVar2[4])(plVar2,(ulonglong)uVar1,(longlong)param_1 + 0x74,0x1000);
        if (uVar3 == 0) {
LAB_1805d8336:
          param_1[0x410] = param_1[0x40f];
          return 0x55;
        }
      }
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + uVar3;
      param_1[3] = (longlong)param_1 + 0x74;
      *(uint *)(param_1 + 4) = uVar3;
    }
    uVar4 = FUN_1805d8890(param_1 + 3,0);
    if ((int)uVar4 == 1) {
      param_1[0x410] = param_1[5];
      if (param_1[5] == param_1[0x40f]) {
        return 0x55;
      }
      return 0;
    }
    if ((int)uVar4 != 0) {
      param_1[0x410] = param_1[0x40f];
      return 0x55;
    }
    if ((int)param_1[6] == 0) {
      return uVar4;
    }
  } while( true );
}



