// FUN_1801c7800 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801c7800 */

undefined8 FUN_1801c7800(longlong *param_1,undefined8 *param_2)

{
  char cVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint3 uVar5;
  int iVar6;
  undefined8 *puVar7;
  byte bVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  uVar11 = 0;
  param_2[2] = 0;
  puVar7 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar7 = (undefined8 *)*param_2;
  }
  uVar3 = param_1[1];
  *(undefined1 *)puVar7 = 0;
  if (uVar3 != 0) {
    lVar4 = *param_1;
    do {
      bVar8 = *(byte *)(lVar4 + uVar11);
      uVar10 = (ulonglong)bVar8;
      if (bVar8 == 0x25) {
        if (uVar3 <= uVar11 + 2) {
          return 0;
        }
        cVar1 = *(char *)(lVar4 + 1 + uVar11);
        uVar9 = (uint)cVar1;
        uVar10 = (ulonglong)uVar9;
        if ((cVar1 < '0') || ('9' < cVar1)) {
          if ((byte)(cVar1 + 0x9fU) < 6) {
            iVar6 = uVar9 - 0x57;
          }
          else {
            if (5 < (byte)(cVar1 + 0xbfU)) {
              return 0;
            }
            iVar6 = uVar9 - 0x37;
          }
        }
        else {
          iVar6 = uVar9 - 0x30;
        }
        if (iVar6 < 0) {
          return 0;
        }
        cVar2 = *(char *)(lVar4 + 2 + uVar11);
        iVar6 = (int)cVar2;
        if ((cVar2 < '0') || ('9' < cVar2)) {
          if ((byte)(cVar2 + 0x9fU) < 6) {
            iVar6 = iVar6 + -0x57;
          }
          else {
            if (5 < (byte)(cVar2 + 0xbfU)) {
              return 0;
            }
            iVar6 = iVar6 + -0x37;
          }
        }
        else {
          iVar6 = iVar6 + -0x30;
        }
        if (iVar6 < 0) {
          return 0;
        }
        if ((cVar1 < '0') || ('9' < cVar1)) {
          uVar5 = (uint3)(uVar9 >> 8);
          if ((byte)(cVar1 + 0x9fU) < 6) {
            uVar10 = (ulonglong)CONCAT31(uVar5,cVar1 + -0x57);
          }
          else if ((byte)(cVar1 + 0xbfU) < 6) {
            uVar10 = (ulonglong)CONCAT31(uVar5,cVar1 + -0x37);
          }
          else {
            uVar10 = CONCAT71((uint7)uVar5,0xff);
          }
        }
        if ((cVar2 < '0') || ('9' < cVar2)) {
          if ((byte)(cVar2 + 0x9fU) < 6) {
            bVar8 = cVar2 + 0xa9;
          }
          else if ((byte)(cVar2 + 0xbfU) < 6) {
            bVar8 = cVar2 - 0x37;
          }
          else {
            bVar8 = 0xff;
          }
        }
        else {
          bVar8 = cVar2 - 0x30;
        }
        uVar10 = CONCAT71((int7)(uVar10 >> 8),(char)uVar10 << 4 | bVar8);
        uVar11 = uVar11 + 2;
LAB_1801c791e:
        if (((byte)uVar10 < 0x20) || ((byte)uVar10 == 0x7f)) {
          return 0;
        }
      }
      else {
        if (bVar8 != 0x2b) goto LAB_1801c791e;
        uVar10 = 0x20;
      }
      FUN_18015af80(param_2,uVar10);
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar3);
  }
  return 1;
}



