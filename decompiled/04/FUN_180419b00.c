// FUN_180419b00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180419b00 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180419b00(void)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  float *pfVar12;
  longlong lVar13;
  undefined1 uVar14;
  bool bVar15;
  float fVar16;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  if (DAT_180c7d880 == (undefined8 *)0x0) {
    DAT_180b8e2b0 = 0;
    return;
  }
  uVar3 = *DAT_180c7d880;
  uVar4 = DAT_180c7d880[1];
  uVar5 = DAT_180c7d880[2];
  uVar6 = DAT_180c7d880[3];
  local_48 = uVar3;
  uStack_40 = uVar4;
  uStack_38 = uVar5;
  uStack_30 = uVar6;
  uVar7 = DAT_180c7d880[4];
  uVar8 = DAT_180c7d880[5];
  uVar9 = DAT_180c7d880[6];
  uVar10 = DAT_180c7d880[7];
  local_28 = uVar7;
  uStack_20 = uVar8;
  uStack_18 = uVar9;
  uStack_10 = uVar10;
  bVar15 = true;
  pfVar12 = (float *)((longlong)&local_48 + 4);
  fVar16 = 0.0;
  lVar13 = 4;
  do {
    fVar1 = pfVar12[-1];
    if ((bVar15) && (((uint)fVar1 & 0x7f800000) != 0x7f800000)) {
      fVar2 = *pfVar12;
      fVar16 = ABS(fVar1) + fVar16;
      if (((uint)fVar2 & 0x7f800000) == 0x7f800000) goto LAB_180419bf1;
      fVar1 = pfVar12[1];
      fVar16 = ABS(fVar2) + fVar16;
      if (((uint)fVar1 & 0x7f800000) == 0x7f800000) goto LAB_180419bfe;
      fVar16 = ABS(fVar1) + fVar16;
      fVar1 = pfVar12[2];
      bVar15 = ((uint)fVar1 & 0x7f800000) != 0x7f800000;
      if (!bVar15) goto LAB_180419c0b;
    }
    else {
      fVar2 = *pfVar12;
      fVar16 = ABS(fVar1) + fVar16;
LAB_180419bf1:
      fVar1 = pfVar12[1];
      fVar16 = ABS(fVar2) + fVar16;
LAB_180419bfe:
      fVar16 = ABS(fVar1) + fVar16;
      fVar1 = pfVar12[2];
LAB_180419c0b:
      bVar15 = false;
    }
    pfVar12 = pfVar12 + 4;
    fVar16 = fVar16 + ABS(fVar1);
    lVar13 = lVar13 + -1;
    if (lVar13 == 0) {
      if ((!bVar15) || (fVar16 <= 0.001)) {
        uVar14 = 0;
      }
      else {
        uVar14 = 1;
        iVar11 = FUN_1805f68d0(&DAT_180b8e260);
        if (iVar11 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(5);
        }
        if (DAT_180b8e2ac == 0x7fffffff) {
          DAT_180b8e2ac = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(6);
        }
        _DAT_180b8e220 = uVar3;
        uRam0000000180b8e228 = uVar4;
        uRam0000000180b8e230 = uVar5;
        uRam0000000180b8e238 = uVar6;
        _DAT_180b8e240 = uVar7;
        uRam0000000180b8e248 = uVar8;
        uRam0000000180b8e250 = uVar9;
        uRam0000000180b8e258 = uVar10;
        FUN_1805f68fc(&DAT_180b8e260);
      }
      DAT_180b8e2b0 = uVar14;
      return;
    }
  } while( true );
}



