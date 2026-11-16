// FUN_180579780 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180579780 */

void FUN_180579780(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  code *pcVar8;
  longlong lVar9;
  longlong lVar10;
  
  lVar3 = *(longlong *)(param_3 + 0x18);
  if (*(code **)(param_2 + 0xc0) != (code *)0x0) {
    (**(code **)(param_2 + 0xc0))(*(undefined8 *)(param_2 + 0xb8));
  }
  lVar4 = *(longlong *)(param_2 + 0x78);
  do {
    if (lVar4 == 0) {
      plVar1 = (longlong *)(param_2 + 0xa8);
      if ((plVar1 != (longlong *)0x0) && (param_1 != 0)) {
        lVar4 = *plVar1;
        while (lVar4 != 0) {
          lVar5 = *(longlong *)(lVar4 + 8);
          lVar6 = *(longlong *)(lVar4 + 0x10);
          pcVar8 = *(code **)(*(longlong *)(param_3 + 0x18) + 0x60);
          if (pcVar8 != (code *)0x0) {
            (*pcVar8)(lVar6);
          }
          if (*(code **)(lVar6 + 0x10) != (code *)0x0) {
            (**(code **)(lVar6 + 0x10))(lVar6);
          }
          if (*(longlong *)(lVar6 + 0x38) != 0) {
            (**(code **)(param_1 + 0x10))(param_1);
          }
          *(undefined8 *)(lVar6 + 0x38) = 0;
          (**(code **)(param_1 + 0x10))(param_1,lVar6);
          (**(code **)(param_1 + 0x10))(param_1,lVar4);
          lVar4 = lVar5;
        }
        *plVar1 = 0;
        *(undefined8 *)(param_2 + 0xb0) = 0;
      }
      *(undefined8 *)(param_2 + 0x80) = 0;
      FUN_1805796b0(param_2,param_1);
      pcVar8 = *(code **)(lVar3 + 0x50);
      if (pcVar8 != (code *)0x0) {
        (*pcVar8)(param_2);
      }
      uVar2 = *(uint *)(param_2 + 8);
      lVar3 = *(longlong *)(param_2 + 0xa0);
      if (lVar3 != 0) {
        lVar4 = *(longlong *)(lVar3 + 0x30);
        if (*(code **)(lVar3 + 0x28) != (code *)0x0) {
          (**(code **)(lVar3 + 0x28))(lVar3);
        }
        if ((uVar2 & 0x400) == 0) {
          (**(code **)(lVar4 + 0x10))(lVar4,lVar3);
        }
      }
      *(undefined8 *)(param_2 + 0xa0) = 0;
      if (*(code **)(param_2 + 0x50) != (code *)0x0) {
        (**(code **)(param_2 + 0x50))(param_2);
      }
      if (*(longlong *)(param_2 + 0xd0) != 0) {
        (**(code **)(param_1 + 0x10))(param_1);
        *(undefined8 *)(param_2 + 0xd0) = 0;
      }
                    /* WARNING: Could not recover jumptable at 0x00018057999a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1 + 0x10))(param_1,param_2);
      return;
    }
    lVar5 = *(longlong *)(lVar4 + 8);
    lVar6 = *(longlong *)(*(longlong *)(lVar5 + 0x90) + 0x10);
    lVar7 = *(longlong *)(lVar5 + 0x78);
    lVar10 = 0;
    do {
      lVar9 = lVar10;
      lVar10 = lVar7;
      if (lVar10 == 0) goto LAB_180579837;
      lVar7 = *(longlong *)(lVar10 + 0x10);
    } while (lVar10 != lVar4);
    if (lVar9 == 0) {
      *(longlong *)(lVar5 + 0x78) = lVar7;
    }
    else {
      *(longlong *)(lVar9 + 0x10) = lVar7;
    }
    if (*(code **)(lVar4 + 0x28) != (code *)0x0) {
      (**(code **)(lVar4 + 0x28))(lVar4);
    }
    FUN_180579d30(lVar4);
    (**(code **)(lVar6 + 0x10))(lVar6);
LAB_180579837:
    lVar4 = *(longlong *)(param_2 + 0x78);
  } while( true );
}



