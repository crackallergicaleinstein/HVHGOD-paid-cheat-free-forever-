// FUN_1804f11a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804f11a0 */

void FUN_1804f11a0(longlong param_1)

{
  short sVar1;
  bool bVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint *puVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  
  iVar5 = 0;
  iVar13 = *(int *)(param_1 + 0x6c);
  uVar7 = 0;
  uVar14 = 0;
  iVar11 = 0;
  if (iVar13 < 1) {
    lVar12 = 1;
    lVar9 = 1;
  }
  else {
    lVar12 = 0;
    do {
      lVar9 = *(longlong *)(param_1 + 0x18);
      sVar1 = *(short *)(lVar12 + 0x62 + lVar9);
      if (sVar1 != -1) {
        if (*(char *)(lVar12 + 0x6a + lVar9) == '\0') {
          *(undefined2 *)(lVar12 + 0x62 + lVar9) = 0xffff;
          iVar13 = *(int *)(param_1 + 0x6c);
        }
        else {
          uVar7 = uVar7 + 1;
          uVar14 = uVar14 | 1L << ((longlong)sVar1 & 0x3fU);
        }
      }
      iVar11 = iVar11 + 1;
      lVar12 = lVar12 + 0x78;
    } while (iVar11 < iVar13);
    lVar9 = uVar14 + 1;
    lVar12 = 1L << ((ulonglong)uVar7 & 0x3f);
    if ((1 < (int)uVar7) && ((*(uint *)(param_1 + 4) & 0x4000000) == 0)) {
      bVar2 = true;
      goto LAB_1804f1240;
    }
  }
  bVar2 = false;
LAB_1804f1240:
  if ((lVar12 != lVar9) || (bVar2)) {
    uVar14 = 0;
    iVar13 = 0;
    if (0 < (int)uVar7) {
      while( true ) {
        iVar11 = -1;
        lVar12 = -1;
        iVar8 = 0;
        lVar9 = 0;
        if (0 < *(int *)(param_1 + 0x6c)) {
          uVar3 = 1;
          lVar6 = -0x78;
          lVar4 = 0;
          do {
            if ((uVar14 & uVar3) == 0) {
              sVar1 = *(short *)(lVar4 + 0x62 + *(longlong *)(param_1 + 0x18));
              if ((sVar1 != -1) &&
                 ((lVar12 == -1 ||
                  (sVar1 < *(short *)(*(longlong *)(param_1 + 0x18) + 0x62 + lVar6))))) {
                lVar6 = lVar4;
                lVar12 = lVar9;
                iVar11 = iVar8;
              }
            }
            iVar8 = iVar8 + 1;
            uVar3 = uVar3 << 1 | (ulonglong)((longlong)uVar3 < 0);
            lVar9 = lVar9 + 1;
            lVar4 = lVar4 + 0x78;
          } while (iVar8 < *(int *)(param_1 + 0x6c));
        }
        uVar14 = uVar14 | 1L << ((longlong)iVar11 & 0x3fU);
        *(short *)(lVar12 * 0x78 + 0x62 + *(longlong *)(param_1 + 0x18)) = (short)iVar13;
        if (bVar2) break;
        iVar13 = iVar13 + 1;
        if ((int)uVar7 <= iVar13) {
          *(short *)(param_1 + 0x204) = (short)uVar7;
          return;
        }
      }
      if (0 < *(int *)(param_1 + 0x6c)) {
        lVar9 = 0;
        lVar6 = 0;
        do {
          if (lVar9 != lVar12) {
            *(undefined2 *)(lVar6 + 0x62 + *(longlong *)(param_1 + 0x18)) = 0xffff;
          }
          iVar5 = iVar5 + 1;
          lVar9 = lVar9 + 1;
          lVar6 = lVar6 + 0x78;
        } while (iVar5 < *(int *)(param_1 + 0x6c));
      }
      *(undefined2 *)(param_1 + 0x204) = 1;
      return;
    }
  }
  if ((uVar7 == 0) && ((*(uint *)(param_1 + 4) & 0x8000000) == 0)) {
    iVar13 = 0;
    if (0 < *(int *)(param_1 + 0x6c)) {
      puVar10 = *(uint **)(param_1 + 0x18);
      do {
        if ((*(char *)((longlong)puVar10 + 0x6a) != '\0') && ((*puVar10 & 0x200) == 0)) {
          *(undefined2 *)((longlong)puVar10 + 0x62) = 0;
          *(byte *)(puVar10 + 0x1d) =
               (byte)puVar10[0x1d] ^ ((byte)puVar10[0x1d] ^ *(byte *)((longlong)puVar10 + 0x75)) & 3
          ;
          *(undefined2 *)(param_1 + 0x204) = 1;
          return;
        }
        iVar13 = iVar13 + 1;
        puVar10 = puVar10 + 0x1e;
      } while (iVar13 < *(int *)(param_1 + 0x6c));
    }
  }
  *(short *)(param_1 + 0x204) = (short)uVar7;
  return;
}



