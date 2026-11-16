// FUN_180442f90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180442f90 */

undefined8 FUN_180442f90(longlong param_1,int *param_2,byte param_3,byte param_4,byte param_5)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  byte bVar5;
  longlong lVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  char cVar10;
  char cVar11;
  byte bVar12;
  byte bVar13;
  
  cVar1 = *(char *)(param_1 + 0x14);
  iVar2 = *param_2;
  if ((cVar1 == '\0') && (*(char *)((longlong)param_2 + 0x101) == '\x04')) {
    bVar7 = 4;
    bVar3 = true;
    if (param_4 == 4) {
      bVar4 = true;
      goto LAB_180442fdc;
    }
  }
  else {
    bVar7 = *(byte *)((longlong)param_2 + 0x101);
    bVar3 = false;
  }
  bVar4 = false;
LAB_180442fdc:
  bVar8 = *(byte *)(param_2 + 0x40);
  bVar9 = *(byte *)(param_1 + 0x12);
  if (iVar2 != 0) {
    bVar9 = *(byte *)(param_1 + 0x12) & 7;
  }
  if (bVar3) {
    bVar12 = *(byte *)((longlong)param_2 + 0x105);
  }
  else {
    bVar12 = bVar7;
  }
  bVar13 = *(byte *)(param_2 + 0x41);
  if (iVar2 == 0) {
    if ((param_2[3] == 4) || (param_2[3] == 5)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (bVar4) {
      cVar11 = *(char *)(param_1 + 0x11);
    }
    else {
      cVar11 = '\0';
    }
    if (bVar3) {
      cVar10 = *(char *)(param_1 + 0xc);
    }
    else {
      cVar10 = '\0';
    }
    bVar7 = bVar7 | (cVar10 * '\x02' | *(byte *)(param_1 + 0xd)) << 3;
    bVar9 = *(char *)(param_1 + 0x11) << 4 | bVar9;
    bVar12 = bVar12 | *(byte *)(param_1 + 0xd) << 3;
    bVar13 = bVar13 | (cVar11 * '\x02' | *(byte *)(param_1 + 0xc)) << 3;
    bVar8 = (bVar8 | (*(char *)(param_1 + 0x10) * '\x02' | *(byte *)(param_1 + 0xb)) << 3) &
            (&DAT_18076b538)[param_3];
    if (cVar1 != '\0') {
      bVar7 = bVar7 & (&DAT_18076b528)[param_4];
    }
  }
  if ((param_5 != 0) ||
     ((*(char *)(param_1 + 0x12) == '\0' && ((bVar4 || (*(char *)(param_1 + 0x11) == '\0')))))) {
    lVar6 = 0;
    if (iVar2 == 0) {
      lVar6 = 0xc;
    }
    if (((bVar8 < (byte)(&DAT_180742fb8)[lVar6 + (ulonglong)param_3]) &&
        (bVar9 < (byte)(&DAT_180742fb8)[lVar6 + (ulonglong)param_5])) &&
       ((cVar1 == '\0' || (bVar7 < (byte)(&DAT_180742fb8)[(ulonglong)param_4 + lVar6])))) {
      bVar5 = 0xff;
      if (param_3 == 8) {
        bVar5 = bVar8;
      }
      if ((cVar1 != '\0') && (param_4 == 8)) {
        bVar5 = bVar7;
      }
      if (((char)bVar5 < '\0') || ((&DAT_1807533b0)[(char)bVar5] != '\0')) {
        bVar5 = 0xff;
        if (param_3 != 0) {
          bVar5 = bVar8;
        }
        *(byte *)(param_1 + 0x15) = bVar5;
        if ((param_4 == 0) || (cVar1 == '\0')) {
          bVar7 = 0xff;
        }
        *(byte *)(param_1 + 0x16) = bVar7;
        bVar7 = 0xff;
        if (param_5 != 0) {
          bVar7 = bVar9;
        }
        *(byte *)(param_1 + 0x18) = bVar12;
        *(byte *)(param_1 + 0x17) = bVar7;
        *(byte *)(param_1 + 0x19) = bVar13;
        return 0x100000;
      }
    }
  }
  return 0x80200003;
}



