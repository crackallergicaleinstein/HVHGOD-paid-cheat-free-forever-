// FUN_1805c5e90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805c5e90 */

ulonglong FUN_1805c5e90(longlong param_1,int *param_2,uint *param_3)

{
  uint uVar1;
  longlong lVar2;
  byte *pbVar3;
  byte *in_RAX;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  byte *pbVar7;
  int local_res8;
  ushort local_resc;
  
  lVar2 = *(longlong *)(param_1 + 0x4e0);
  if (((lVar2 != 0) && (*(longlong *)(lVar2 + 0x80) != 0)) && (param_3 != (uint *)0x0)) {
    uVar1 = param_3[1];
    in_RAX = (byte *)(ulonglong)uVar1;
    if (uVar1 < *param_3) {
      pbVar3 = *(byte **)(param_3 + 2);
      if (*(byte **)(lVar2 + 0x40) <= pbVar3) {
        iVar6 = *param_3 - uVar1;
        uVar1 = iVar6 * 10 - 10;
        if ((char)param_3[4] == '\0') {
          uVar1 = iVar6 * 6 - 6;
        }
        lVar5 = 10;
        if ((char)param_3[4] == '\0') {
          lVar5 = 6;
        }
        in_RAX = (byte *)(((ulonglong)*(uint *)(lVar2 + 0x88) - lVar5) + *(longlong *)(lVar2 + 0x80)
                         );
        if (pbVar3 + uVar1 <= in_RAX) {
          pbVar7 = pbVar3 + 6;
          *param_2 = ((int)(short)((ushort)*pbVar3 << 8) | (uint)pbVar3[1]) << 2;
          *(ushort *)(param_2 + 1) = CONCAT11(pbVar3[2],pbVar3[3]);
          uVar4 = (ulonglong)pbVar3[4] << 8;
          *(ushort *)((longlong)param_2 + 6) = (ushort)pbVar3[5] | (ushort)uVar4;
          if ((char)param_3[4] != '\0') {
            pbVar7 = pbVar3 + 10;
            in_RAX = (byte *)FUN_1805c9fe0(param_1,lVar2,
                                           CONCAT31(CONCAT21(CONCAT11(pbVar3[6],pbVar3[7]),pbVar3[8]
                                                            ),pbVar3[9]),2,&local_res8);
            if ((char)in_RAX == '\0') goto LAB_1805c5ffb;
            *param_2 = *param_2 + local_res8 * 4;
            uVar4 = (ulonglong)local_resc;
            *(short *)((longlong)param_2 + 6) = *(short *)((longlong)param_2 + 6) + local_resc;
          }
          param_3[1] = param_3[1] + 1;
          *(byte **)(param_3 + 2) = pbVar7;
          return CONCAT71((int7)(uVar4 >> 8),1);
        }
      }
    }
  }
LAB_1805c5ffb:
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}



