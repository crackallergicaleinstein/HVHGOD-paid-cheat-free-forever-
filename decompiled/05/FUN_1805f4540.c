// FUN_1805f4540 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805f4540 */

void FUN_1805f4540(int *param_1,byte *param_2,undefined8 *param_3,longlong *param_4)

{
  byte bVar1;
  byte *pbVar2;
  ulonglong uVar3;
  byte *pbVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  lVar6 = 0;
  if ((byte *)0x7 < param_2) {
    pbVar2 = (byte *)FUN_1805f4630();
    if ((byte *)0xffffffffffffff88 < pbVar2) goto LAB_1805f4613;
    if (*param_1 != -0x2d04ad9) {
      pbVar2 = (byte *)0xfffffffffffffff6;
      goto LAB_1805f4613;
    }
    if (pbVar2 + 3 <= param_2) {
      pbVar4 = pbVar2 + (longlong)param_1;
      for (uVar5 = (longlong)param_2 - (longlong)pbVar2; 2 < uVar5; uVar5 = (uVar5 - 3) - uVar3) {
        bVar1 = *pbVar4 >> 6;
        if (bVar1 == 3) {
          lVar6 = lVar6 << 0x11;
          pbVar2 = pbVar4 + (3 - (longlong)param_1);
          goto LAB_1805f461a;
        }
        if (bVar1 == 2) {
          uVar3 = 1;
        }
        else {
          uVar3 = (ulonglong)((uint6)CONCAT21(CONCAT11(*pbVar4,pbVar4[1]),pbVar4[2]) & 0x7ffff);
        }
        if (uVar5 - 3 < uVar3) break;
        pbVar4 = pbVar4 + uVar3 + 3;
        lVar6 = lVar6 + 1;
      }
    }
  }
  pbVar2 = (byte *)0xffffffffffffffb8;
LAB_1805f4613:
  lVar6 = -2;
LAB_1805f461a:
  *param_3 = pbVar2;
  *param_4 = lVar6;
  return;
}



