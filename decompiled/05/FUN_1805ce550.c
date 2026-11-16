// FUN_1805ce550 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805ce550 */

int FUN_1805ce550(longlong param_1,undefined1 *param_2,undefined1 *param_3,int param_4,int param_5,
                 int param_6)

{
  undefined1 *puVar1;
  char *pcVar2;
  char *pcVar3;
  char cVar4;
  char cVar5;
  byte bVar6;
  char cVar7;
  char cVar8;
  byte bVar9;
  undefined1 uVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  undefined1 *puVar14;
  uint uVar15;
  
  lVar11 = *(longlong *)(param_1 + 0x18);
  puVar14 = param_2 + 2;
  iVar12 = 0;
  cVar4 = *(char *)(lVar11 + 6);
  cVar5 = *(char *)(lVar11 + 4);
  bVar6 = *(byte *)(lVar11 + 8);
  cVar7 = *(char *)(lVar11 + 10);
  cVar8 = *(char *)(lVar11 + 0xc);
  bVar9 = *(byte *)(lVar11 + 0xe);
  if ((param_3 < puVar14) ||
     (uVar15 = (uint)CONCAT11(*param_2,param_2[1]), param_3 < puVar14 + uVar15 * 4)) {
    return 3;
  }
  uVar13 = 0;
  if (uVar15 != 0) {
    do {
      puVar1 = puVar14 + 1;
      uVar10 = *puVar14;
      pcVar2 = puVar14 + 2;
      pcVar3 = puVar14 + 3;
      puVar14 = puVar14 + 4;
      iVar12 = FUN_1805ce6f0(param_1,CONCAT11(uVar10,*puVar1),*pcVar2 + param_4,*pcVar3 + param_5,
                             param_6 + 1,0);
      if (iVar12 != 0) break;
      uVar13 = uVar13 + 1;
    } while (uVar13 < uVar15);
  }
  *(short *)(*(longlong *)(param_1 + 0x18) + 4) = (short)cVar5;
  *(short *)(*(longlong *)(param_1 + 0x18) + 6) = (short)cVar4;
  *(ushort *)(*(longlong *)(param_1 + 0x18) + 8) = (ushort)bVar6;
  *(short *)(*(longlong *)(param_1 + 0x18) + 10) = (short)cVar7;
  *(short *)(*(longlong *)(param_1 + 0x18) + 0xc) = (short)cVar8;
  *(ushort *)(*(longlong *)(param_1 + 0x18) + 0xe) = (ushort)bVar9;
  *(ushort *)(*(longlong *)(param_1 + 0x18) + 2) =
       (ushort)*(byte *)(*(longlong *)(param_1 + 0x10) + 4);
  **(ushort **)(param_1 + 0x18) = (ushort)**(byte **)(param_1 + 0x10);
  return iVar12;
}



