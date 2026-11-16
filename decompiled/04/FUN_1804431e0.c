// FUN_1804431e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804431e0 */

undefined8 FUN_1804431e0(undefined8 *param_1,int *param_2,longlong param_3)

{
  byte bVar1;
  char cVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  char cVar6;
  char cVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte local_res10;
  
  bVar1 = *(byte *)(param_3 + 0xc);
  bVar10 = 0;
  local_res10 = 0;
  bVar8 = *(byte *)(param_3 + 0xb) & 0x1f;
  bVar12 = 0;
  bVar14 = 0;
  bVar11 = 0;
  switch(param_2[3]) {
  case 0:
    if (((*(char *)(param_3 + 6) < '\0') && (*param_2 == 5)) ||
       (((*(byte *)(param_3 + 7) & 1) != 0 && ((*param_2 == 2 || (*param_2 == 1)))))) {
      return 0x80200001;
    }
    if ((*(char *)(param_1 + 4) != '\0') && ((*(byte *)(param_3 + 0xd) & 0x40) == 0)) {
      return 0x80200004;
    }
    break;
  case 1:
    break;
  case 2:
    bVar12 = *(byte *)(param_3 + 0xe) & 0x1f;
    break;
  case 3:
    bVar14 = *(byte *)(param_3 + 0xe);
    bVar12 = bVar14 & 0x1f;
    bVar10 = bVar14 >> 5 & 1;
    bVar14 = bVar14 >> 7;
    break;
  case 4:
    bVar12 = *(byte *)(param_3 + 0xe);
    local_res10 = bVar12 >> 6 & 1;
    bVar10 = bVar12 >> 5 & 1;
    bVar12 = bVar12 & 0x1f;
    bVar11 = *(byte *)(param_3 + 0x10) >> 5 & 3;
    if (((char)param_2[0x3e] != '\0') && (-1 < (char)*(byte *)(param_3 + 0x10))) {
      return 0x8020000a;
    }
    break;
  case 5:
    bVar12 = *(byte *)(param_3 + 0xe) & 0x1f;
    bVar10 = *(byte *)(param_3 + 0xe) >> 5 & 1;
    bVar11 = *(byte *)(param_3 + 0xf) >> 5 & 3;
    if ((&DAT_18076a040)
        [(ulonglong)*(byte *)((longlong)param_2 + 0xf9) +
         (ulonglong)(*(byte *)(param_3 + 0xf) & 0x1f) * 8] == '\0') {
      return 0x80200001;
    }
    break;
  default:
    pcVar4 = (code *)swi(0x29);
    (*pcVar4)(0x25);
    pcVar4 = (code *)swi(3);
    uVar5 = (*pcVar4)();
    return uVar5;
  }
  lVar3 = param_1[1];
  bVar13 = 0;
  bVar15 = 0;
  cVar2 = *(char *)(lVar3 + 0x14);
  bVar9 = 0;
  if (bVar8 != 0) {
    bVar13 = bVar8 >> 4;
    bVar9 = *(byte *)(param_3 + 0xb) & 0xf;
  }
  bVar8 = 0;
  if ((bVar1 & 0x1f) != 0) {
    if (cVar2 == '\0') {
      bVar8 = bVar1 & 7;
      if (((((bVar1 & 8) != 0) && (*(int *)*param_1 == 0)) &&
          (*(char *)((longlong)param_2 + 0xff) == '\0')) &&
         (*(char *)((longlong)param_2 + 0x101) == '\x05')) {
        return 0x80200003;
      }
    }
    else {
      bVar15 = (bVar1 & 0x1f) >> 4;
      bVar8 = bVar1 & 0xf;
    }
  }
  uVar5 = FUN_180442f90(lVar3,param_2,bVar9,bVar8,bVar12);
  if ((int)uVar5 < 0) {
    return uVar5;
  }
  if (((bVar13 == 0) || (*(char *)(lVar3 + 0x15) != '\x01')) &&
     ((bVar15 == 0 || (*(char *)(lVar3 + 0x16) != '\x01')))) {
    if (bVar10 != 0) {
      cVar7 = -0x10;
      cVar6 = *(char *)(lVar3 + 0x15);
      if (param_2[3] == 3) {
        cVar7 = *(char *)(lVar3 + 0x17);
      }
      else if ((param_2[3] - 4U < 2) && (bVar9 == 0)) {
        cVar6 = -0xf;
      }
      if (cVar6 == *(char *)(lVar3 + 0x19)) {
        return 0x80200003;
      }
      if (cVar6 == cVar7) {
        return 0x80200003;
      }
      if (*(char *)(lVar3 + 0x19) == cVar7) {
        return 0x80200003;
      }
    }
    if ((local_res10 == 0) ||
       ((*(char *)(lVar3 + 0x15) != *(char *)(lVar3 + 0x17) &&
        ((cVar2 == '\0' || (*(char *)(lVar3 + 0x15) != *(char *)(lVar3 + 0x16))))))) {
      if (bVar14 != 0) {
        if (*(char *)(lVar3 + 0x15) == *(char *)(lVar3 + 0x17)) {
          return 0x80200003;
        }
        if (*(char *)(lVar3 + 0x15) == *(char *)(lVar3 + 0x16)) {
          return 0x80200003;
        }
        if (*(char *)(lVar3 + 0x17) == *(char *)(lVar3 + 0x16)) {
          return 0x80200003;
        }
      }
      if (bVar11 == 2) {
        if (*(char *)(lVar3 + 0x13) == '\0') {
          return 0x8020000a;
        }
        return 0x100000;
      }
      if ((bVar11 == 3) && (*(char *)(lVar3 + 0x13) != '\0')) {
        return 0x8020000a;
      }
      return 0x100000;
    }
  }
  return 0x80200003;
}



