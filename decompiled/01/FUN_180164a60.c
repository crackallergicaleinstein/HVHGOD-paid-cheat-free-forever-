// FUN_180164a60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180164a60 */

undefined8 FUN_180164a60(longlong *param_1,char param_2)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  char cVar4;
  int iVar5;
  byte bVar6;
  ulonglong uVar7;
  
  uVar3 = param_1[1];
  uVar7 = 0;
  if (uVar3 != 0) {
    do {
      bVar6 = *(byte *)(*param_1 + uVar7);
      lVar1 = *param_1 + uVar7;
      if (bVar6 == 0x25) {
        uVar7 = uVar7 + 2;
        if (uVar3 <= uVar7) {
          return 0;
        }
        cVar4 = *(char *)(lVar1 + 1);
        iVar5 = (int)cVar4;
        if ((byte)(cVar4 - 0x30U) < 10) {
          iVar5 = iVar5 + -0x30;
        }
        else if ((byte)(cVar4 + 0x9fU) < 6) {
          iVar5 = iVar5 + -0x57;
        }
        else {
          if (5 < (byte)(cVar4 + 0xbfU)) {
            return 0;
          }
          iVar5 = iVar5 + -0x37;
        }
        if (iVar5 < 0) {
          return 0;
        }
        cVar2 = *(char *)(lVar1 + 2);
        iVar5 = (int)cVar2;
        if ((byte)(cVar2 - 0x30U) < 10) {
          iVar5 = iVar5 + -0x30;
        }
        else if ((byte)(cVar2 + 0x9fU) < 6) {
          iVar5 = iVar5 + -0x57;
        }
        else {
          if (5 < (byte)(cVar2 + 0xbfU)) {
            return 0;
          }
          iVar5 = iVar5 + -0x37;
        }
        if (iVar5 < 0) {
          return 0;
        }
        if (9 < (byte)(cVar4 - 0x30U)) {
          if ((byte)(cVar4 + 0x9fU) < 6) {
            cVar4 = cVar4 + -0x57;
          }
          else if ((byte)(cVar4 + 0xbfU) < 6) {
            cVar4 = cVar4 + -0x37;
          }
          else {
            cVar4 = -1;
          }
        }
        if ((byte)(cVar2 - 0x30U) < 10) {
          bVar6 = cVar2 - 0x30;
        }
        else if ((byte)(cVar2 + 0x9fU) < 6) {
          bVar6 = cVar2 + 0xa9;
        }
        else if ((byte)(cVar2 + 0xbfU) < 6) {
          bVar6 = cVar2 - 0x37;
        }
        else {
          bVar6 = 0xff;
        }
        bVar6 = cVar4 << 4 | bVar6;
      }
      if (((bVar6 == 0) || (bVar6 == 0x7f)) ||
         ((bVar6 < 0x20 && (((param_2 == '\0' || ((bVar6 - 9 & 0xfa) != 0)) || (bVar6 == 0xe)))))) {
        return 0;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar3);
  }
  return 1;
}



