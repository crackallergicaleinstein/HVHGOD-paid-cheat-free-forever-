// FUN_1804ce630 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804ce630 */

void FUN_1804ce630(longlong param_1,undefined8 param_2,longlong param_3)

{
  ushort uVar1;
  bool bVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  
  lVar3 = 0;
  if (*(longlong *)(param_1 + 0x27a8) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x27a8) + 4;
  }
  do {
    if (lVar3 == 0) {
      return;
    }
    uVar1 = *(ushort *)(lVar3 + 0xc);
    if ((((uVar1 & 0x7f) == 0) || ((uVar1 >> 7 & 0xf) == 0)) || (uVar1 >> 0xb == 0)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (*(int *)(param_3 + 0xc) == 0) {
LAB_1804ce6e6:
      if ((*(char *)(param_3 + 8) != '\0') && (!bVar2)) goto LAB_1804ce6f2;
    }
    else {
      if ((((uVar1 & 0x7f) == 0) || ((uVar1 >> 7 & 0xf) == 0)) || (uVar1 >> 0xb == 0)) {
        iVar4 = 0;
      }
      else {
        iVar4 = (((uVar1 & 0x7f) + 2000) * 100 + (uVar1 >> 7 & 0xf)) * 100 + (uint)(uVar1 >> 0xb);
      }
      if (*(int *)(param_3 + 0xc) <= iVar4) goto LAB_1804ce6e6;
LAB_1804ce6f2:
      *(byte *)(lVar3 + 0xe) = *(byte *)(lVar3 + 0xe) | 8;
    }
    if ((*(char *)(param_3 + 10) != '\0') || ((*(char *)(param_3 + 0xb) != '\0' && (!bVar2)))) {
      *(undefined2 *)(lVar3 + 0xc) = *(undefined2 *)(param_1 + 0x2778);
    }
    lVar5 = *(int *)(lVar3 + -4) + lVar3;
    lVar3 = 0;
    if (lVar5 != *(longlong *)(param_1 + 0x27a8) + 4 + (longlong)*(int *)(param_1 + 0x27a0)) {
      lVar3 = lVar5;
    }
  } while( true );
}



