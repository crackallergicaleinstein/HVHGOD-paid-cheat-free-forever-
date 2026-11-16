// FUN_1805794d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805794d0 */

uint FUN_1805794d0(longlong *param_1,longlong param_2,longlong param_3,int param_4,uint param_5,
                  undefined8 param_6)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  
  lVar2 = *param_1;
  uVar9 = ~param_5;
  if (-1 < (int)param_5) {
    uVar9 = param_5;
  }
  if ((int)uVar9 < param_4) {
    bVar3 = false;
    uVar8 = 0;
    uVar1 = *(uint *)(param_3 + (longlong)(int)uVar9 * 4);
    if (*(code **)(param_2 + 0x20) == (code *)0x0) {
      if (*(uint *)(param_2 + 8) < uVar1) {
        return 0x55;
      }
    }
    else {
      iVar5 = (**(code **)(param_2 + 0x20))(param_2,uVar1,0,0);
      uVar8 = -(uint)(iVar5 != 0) & 0x55;
      if (iVar5 != 0) goto LAB_180579686;
    }
    *(uint *)(param_2 + 0xc) = uVar1;
    param_5 = uVar8;
    uVar6 = FUN_180578540(param_2,&param_5);
    uVar4 = param_6;
    uVar8 = param_5;
    if (param_5 != 0) goto LAB_180579686;
    if (uVar6 != 0) {
      if (0xffffff < uVar6) {
        return 9;
      }
      iVar5 = FUN_18057c640(param_1,param_2,uVar9,0,0,param_6);
      uVar8 = 0;
      if ((iVar5 != 0) && (uVar8 = FUN_1805788b0(param_2,uVar1 + 4), uVar8 == 0)) {
        piVar10 = (int *)0x0;
        if ((int)uVar6 < 1) {
          if ((int)uVar6 < 0) {
            return 6;
          }
        }
        else {
          piVar10 = (int *)(**(code **)(lVar2 + 8))(lVar2,uVar6);
          if (piVar10 == (int *)0x0) {
            return 0x40;
          }
        }
        uVar8 = FUN_180578100(param_2,piVar10,uVar6);
        if (uVar8 == 0) {
          if ((4 < uVar6) && (*piVar10 == 0x4f54544f)) {
            bVar3 = true;
          }
          pcVar7 = "truetype";
          if (bVar3) {
            pcVar7 = "cff";
          }
          uVar8 = FUN_18057c7d0(param_1,piVar10,uVar6,0,pcVar7,uVar4);
        }
        else if (piVar10 != (int *)0x0) {
          (**(code **)(lVar2 + 0x10))(lVar2,piVar10);
          return uVar8;
        }
      }
      goto LAB_180579686;
    }
  }
  uVar8 = 1;
LAB_180579686:
  return uVar8;
}



