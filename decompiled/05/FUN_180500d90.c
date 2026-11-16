// FUN_180500d90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180500d90 */

void FUN_180500d90(int param_1,char *param_2,uint *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  char cVar6;
  
  lVar5 = DAT_180bb8ae8;
  cVar6 = *param_2;
  lVar1 = *(longlong *)(DAT_180bb8ae8 + 0x2478);
  if (*(char *)(lVar1 + 0x52) != '\0') {
    lVar2 = *(longlong *)(lVar1 + 0x28);
    lVar3 = *(longlong *)(DAT_180bb8ae8 + 0x1e98);
    if (*(char *)(lVar1 + 0x50) != -1) {
      cVar6 = *(char *)(lVar1 + 0x50) == '\x01';
    }
    if (*(char *)(lVar1 + 0x53) != '\0') {
      if ((*(char *)(lVar1 + 0x56) == '\0') && (*(int *)(DAT_180bb8ae8 + 0x220c) == param_1)) {
        bVar4 = true;
        *(undefined1 *)(lVar1 + 0x56) = 1;
        if (*(longlong *)(lVar2 + 0x18) == -1) {
          *(longlong *)(lVar2 + 0x18) = lVar3;
          *(bool *)(lVar2 + 0x14) = cVar6 != '\0';
        }
      }
      else {
        bVar4 = false;
      }
      if (((*(longlong *)(lVar2 + 0x18) == lVar3) || (bVar4)) ||
         (*(char *)(lVar1 + 0x55) != *(char *)(lVar1 + 0x56))) {
        cVar6 = *(char *)(lVar2 + 0x14) != '\0';
      }
      else if (((*(uint *)(lVar1 + 0x4c) & 0x1000) == 0) && ((*(byte *)(lVar1 + 0x34) & 0x10) == 0))
      {
        cVar6 = '\0';
      }
    }
    *param_2 = cVar6;
  }
  if (param_3 != (uint *)0x0) {
    if (((*(uint *)(lVar1 + 0x34) >> 0xe & 1) == 0) &&
       (((*(uint *)(lVar1 + 0x34) >> 0xf & 1) != 0 ||
        ((cVar6 != '\0' &&
         ((*(int *)(lVar5 + 0x1550) != param_1 || (*(char *)(lVar5 + 0x1561) == '\0')))))))) {
      *param_3 = *param_3 & 0xffffffcf | 0x80020;
      return;
    }
    *param_3 = *param_3 & 0xffffffcf | 0x80010;
  }
  return;
}



