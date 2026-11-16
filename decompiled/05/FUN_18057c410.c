// FUN_18057c410 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18057c410 */

int FUN_18057c410(longlong param_1,undefined8 *param_2,byte *param_3,undefined4 param_4,int param_5,
                 int *param_6,longlong *param_7)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int *piVar7;
  longlong lVar8;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x10);
  puVar6 = (undefined8 *)0x0;
  iVar4 = 0;
  iVar3 = *(int *)(lVar1 + 0x38);
  lVar5 = 0;
  if (iVar3 < 1) {
    if (-1 < iVar3) goto LAB_18057c48f;
    iVar4 = 6;
  }
  else {
    lVar5 = (**(code **)(lVar2 + 8))(lVar2,iVar3);
    iVar4 = 0x40;
    if (lVar5 == 0) {
LAB_18057c48f:
      if (iVar4 != 0) goto LAB_18057c4ec;
    }
    else {
      FUN_18063ab10(lVar5,0,(longlong)iVar3);
    }
    *(longlong *)(lVar5 + 0x90) = param_1;
    *(longlong *)(lVar5 + 0x98) = lVar2;
    *(undefined8 *)(lVar5 + 0xa0) = *param_2;
    if (*param_3 != 0) {
      *(uint *)(lVar5 + 8) = *(uint *)(lVar5 + 8) | 0x400;
    }
    puVar6 = (undefined8 *)(**(code **)(lVar2 + 8))(lVar2);
    if (puVar6 == (undefined8 *)0x0) {
      iVar4 = 0x40;
    }
    else {
      *puVar6 = 0;
      puVar6[1] = 0;
      iVar3 = 0;
      puVar6[2] = 0;
      puVar6[3] = 0;
      puVar6[4] = 0;
      puVar6[5] = 0;
      puVar6[6] = 0;
      puVar6[7] = 0;
      puVar6[8] = 0;
      puVar6[9] = 0;
      puVar6[10] = 0;
      puVar6[0xb] = 0;
      puVar6[0xc] = 0;
      *(undefined8 **)(lVar5 + 0xd0) = puVar6;
      puVar6[10] = 0;
      if (0 < param_5) {
        lVar8 = 0;
        piVar7 = param_6;
        do {
          if (*(longlong *)(*(longlong *)(lVar5 + 0xd0) + 0x50) != 0) break;
          if (*piVar7 == 0x696e6372) {
            *(undefined8 *)(*(longlong *)(lVar5 + 0xd0) + 0x50) = *(undefined8 *)(piVar7 + 2);
          }
          lVar8 = lVar8 + 1;
          piVar7 = piVar7 + 4;
        } while (lVar8 < param_5);
      }
      *(undefined4 *)(*(longlong *)(lVar5 + 0xd0) + 0x5c) = 0xffffffff;
      if (*(code **)(lVar1 + 0x48) != (code *)0x0) {
        iVar3 = (**(code **)(lVar1 + 0x48))(*param_2,lVar5,param_4,(longlong)param_5,param_6);
      }
      *param_2 = *(undefined8 *)(lVar5 + 0xa0);
      *param_3 = (byte)(*(uint *)(lVar5 + 8) >> 10) & 1;
      iVar4 = iVar3;
      if ((iVar3 == 0) &&
         ((iVar4 = FUN_180579a10(lVar5), lVar8 = lVar5, iVar4 == 0 || ((char)iVar4 == '&'))))
      goto LAB_18057c527;
    }
  }
LAB_18057c4ec:
  FUN_1805796b0(lVar5,lVar2);
  if (*(code **)(lVar1 + 0x50) != (code *)0x0) {
    (**(code **)(lVar1 + 0x50))(lVar5);
  }
  if (puVar6 != (undefined8 *)0x0) {
    (**(code **)(lVar2 + 0x10))(lVar2,puVar6);
  }
  lVar8 = 0;
  iVar3 = iVar4;
  if (lVar5 != 0) {
    (**(code **)(lVar2 + 0x10))(lVar2,lVar5);
  }
LAB_18057c527:
  *param_7 = lVar8;
  return iVar3;
}



