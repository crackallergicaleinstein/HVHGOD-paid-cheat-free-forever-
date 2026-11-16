// FUN_180492580 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180492580 */

int * FUN_180492580(int *param_1,int *param_2,longlong *param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  longlong lVar6;
  undefined8 *puVar7;
  byte *pbVar8;
  bool bVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  longlong local_48;
  
  if (param_1 == param_2) {
    return param_2;
  }
  piVar12 = param_1 + 1;
  if (piVar12 != param_2) {
    local_48 = 4;
    do {
      iVar3 = *piVar12;
      pbVar8 = *(byte **)(*param_3 + (longlong)*param_1 * 8);
      if (0xf < *(ulonglong *)(pbVar8 + 0x18)) {
        pbVar8 = *(byte **)pbVar8;
      }
      puVar7 = *(undefined8 **)((longlong)iVar3 * 8 + *param_3);
      if (0xf < (ulonglong)puVar7[3]) {
        puVar7 = (undefined8 *)*puVar7;
      }
      lVar6 = (longlong)puVar7 - (longlong)pbVar8;
      while( true ) {
        bVar1 = pbVar8[lVar6];
        bVar2 = *pbVar8;
        bVar4 = bVar1 & 0xdf;
        if (0x19 < (byte)(bVar1 + 0x9f)) {
          bVar4 = bVar1;
        }
        bVar5 = bVar2 & 0xdf;
        if (0x19 < (byte)(bVar2 + 0x9f)) {
          bVar5 = bVar2;
        }
        iVar10 = (int)(char)bVar4 - (int)(char)bVar5;
        if ((iVar10 != 0) || (bVar1 == 0)) break;
        pbVar8 = pbVar8 + 1;
      }
      if ((int)param_3[0x28] == 1) {
        bVar9 = SUB41((uint)iVar10 >> 0x1f,0);
      }
      else {
        bVar9 = 0 < iVar10;
      }
      if (bVar9 == false) {
        piVar11 = piVar12;
        while( true ) {
          pbVar8 = *(byte **)(*param_3 + (longlong)piVar11[-1] * 8);
          if (0xf < *(ulonglong *)(pbVar8 + 0x18)) {
            pbVar8 = *(byte **)pbVar8;
          }
          puVar7 = *(undefined8 **)((longlong)iVar3 * 8 + *param_3);
          if (0xf < (ulonglong)puVar7[3]) {
            puVar7 = (undefined8 *)*puVar7;
          }
          lVar6 = (longlong)puVar7 - (longlong)pbVar8;
          while( true ) {
            bVar1 = pbVar8[lVar6];
            bVar2 = *pbVar8;
            bVar4 = bVar1 & 0xdf;
            if (0x19 < (byte)(bVar1 + 0x9f)) {
              bVar4 = bVar1;
            }
            bVar5 = bVar2 & 0xdf;
            if (0x19 < (byte)(bVar2 + 0x9f)) {
              bVar5 = bVar2;
            }
            iVar10 = (int)(char)bVar4 - (int)(char)bVar5;
            if ((iVar10 != 0) || (bVar1 == 0)) break;
            pbVar8 = pbVar8 + 1;
          }
          if ((int)param_3[0x28] == 1) {
            bVar9 = SUB41((uint)iVar10 >> 0x1f,0);
          }
          else {
            bVar9 = 0 < iVar10;
          }
          if (bVar9 == false) break;
          *piVar11 = piVar11[-1];
          piVar11 = piVar11 + -1;
        }
        *piVar11 = iVar3;
      }
      else {
        FUN_18063aed0(param_1 + 1,param_1,local_48);
        *param_1 = iVar3;
      }
      local_48 = local_48 + 4;
      piVar12 = piVar12 + 1;
    } while (piVar12 != param_2);
  }
  return param_2;
}



