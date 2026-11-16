// FUN_180588ac0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180588ac0 */

void FUN_180588ac0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  ushort *puVar4;
  short sVar5;
  uint uVar6;
  short *psVar7;
  int *piVar8;
  uint uVar9;
  short sVar10;
  short sVar11;
  
  uVar9 = 0;
  sVar5 = 0;
  sVar11 = 0;
  sVar10 = 0;
  if ((*(uint *)(param_1 + 0x410) & 0x100) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x408);
    puVar4 = *(ushort **)(lVar3 + 0x60);
    piVar8 = *(int **)(puVar4 + 0x14);
    if (piVar8 != (int *)0x0) {
      piVar1 = piVar8 + (ulonglong)*puVar4 * 3;
      sVar5 = 0;
      for (; piVar8 < piVar1; piVar8 = piVar8 + 3) {
        psVar7 = (short *)FUN_1805914f0(param_1,*piVar8);
        uVar6 = FUN_1805893c0(param_1,*(longlong *)(lVar3 + 0x60) + 8,(short)piVar8[1],
                              *(undefined2 *)((longlong)piVar8 + 6));
        if (psVar7 != (short *)0x0) {
          if (uVar6 != 0) {
            sVar5 = (short)uVar6;
            *psVar7 = sVar5 + (short)piVar8[2];
            iVar2 = *piVar8;
            if (iVar2 == 0x68617363) {
              uVar9 = uVar6 & 0xffff;
            }
            else if (iVar2 == 0x68647363) {
              sVar11 = sVar5;
            }
            else if (iVar2 == 0x686c6770) {
              sVar10 = sVar5;
            }
          }
        }
        sVar5 = (short)uVar9;
      }
    }
    *(short *)(param_1 + 0x6a) = *(short *)(param_1 + 0x6a) + sVar5;
    *(short *)(param_1 + 0x6c) = *(short *)(param_1 + 0x6c) + sVar11;
    *(short *)(param_1 + 0x6e) = *(short *)(param_1 + 0x6e) + (sVar10 - sVar11) + sVar5;
    *(short *)(param_1 + 0x76) = *(short *)(param_1 + 0x27a);
    *(short *)(param_1 + 0x74) = *(short *)(param_1 + 0x278) - *(short *)(param_1 + 0x27a) / 2;
    if ((*(longlong *)(param_1 + 0x2f0) != 0) &&
       (*(longlong *)(*(longlong *)(param_1 + 0x2f0) + 0x40) != 0)) {
      FUN_1805745c0(param_1 + 0xa8,FUN_1805913e0);
    }
  }
  return;
}



