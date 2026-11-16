// FUN_1805a6760 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805a6760 */

int FUN_1805a6760(byte *param_1,byte *param_2,undefined8 *param_3)

{
  byte *pbVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  int local_res18 [2];
  
  local_res18[0] = 0;
  if (param_3[0xb] != 0) {
    return 0;
  }
  if (param_1 + 1 <= param_2) {
    uVar3 = *param_1 & 0xf;
    iVar4 = (*param_1 >> 4) + uVar3;
    if (param_1 + 1 + (uint)(iVar4 * 2) <= param_2) {
      puVar2 = (uint *)FUN_18057ac40(*param_3,4,0,iVar4,0,local_res18);
      if (local_res18[0] == 0) {
        param_3[0xb] = puVar2;
        param_3[9] = puVar2 + uVar3;
        if (iVar4 != 0) {
          do {
            pbVar1 = param_1 + 1;
            param_1 = param_1 + 2;
            *puVar2 = (int)(short)((ushort)*pbVar1 << 8) | (uint)*param_1;
            iVar4 = iVar4 + -1;
            puVar2 = puVar2 + 1;
          } while (iVar4 != 0);
          return 0;
        }
      }
      return local_res18[0];
    }
  }
  return 8;
}



