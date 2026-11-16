// FUN_180441220 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180441220 */

undefined8 FUN_180441220(longlong param_1,int *param_2,longlong param_3)

{
  byte bVar1;
  undefined8 uVar2;
  char cVar3;
  byte bVar4;
  
  if (*param_2 == 5) {
    return 0x80200001;
  }
  *(ulonglong *)(param_2 + 8) = *(ulonglong *)(param_2 + 8) | 0x20;
  *(byte *)(param_2 + 0x3c) = *(byte *)(param_3 + 1) >> 7;
  *(byte *)((longlong)param_2 + 0xf1) = *(byte *)(param_3 + 1) >> 6 & 1;
  *(byte *)((longlong)param_2 + 0xf2) = *(byte *)(param_3 + 1) >> 5 & 1;
  *(byte *)((longlong)param_2 + 0xf3) = *(byte *)(param_3 + 1) >> 4 & 1;
  if ((*(byte *)(param_3 + 1) & 8) == 0) {
    bVar1 = *(byte *)(param_3 + 1) & 7;
    *(byte *)(param_2 + 0x3d) = bVar1;
    if (((bVar1 == 0) || (bVar1 == 4)) || (bVar1 == 7)) {
      return 0x80200007;
    }
    bVar4 = *(byte *)(param_3 + 2) >> 7;
    *(byte *)((longlong)param_2 + 0xf5) = bVar4;
    *(byte *)((longlong)param_2 + 0xf6) = *(byte *)(param_3 + 2) >> 3 & 0xf;
    *(byte *)((longlong)param_2 + 0xf7) = *(byte *)(param_3 + 2) & 3;
    cVar3 = -(*(char *)(param_3 + 3) >> 7);
    *(char *)(param_2 + 0x3e) = cVar3;
    *(byte *)((longlong)param_2 + 0xf9) = *(byte *)(param_3 + 3) >> 6 & 1;
    *(byte *)((longlong)param_2 + 0xfa) = *(byte *)(param_3 + 3) >> 5 & 1;
    *(byte *)((longlong)param_2 + 0xfb) = *(byte *)(param_3 + 3) >> 4 & 1;
    bVar1 = *(byte *)(param_3 + 3) >> 3 & 1;
    *(byte *)(param_2 + 0x3f) = bVar1;
    if ((bVar1 != 0) || (*param_2 == 0)) {
      bVar1 = *(byte *)(param_3 + 3) & 7;
      *(byte *)((longlong)param_2 + 0xfd) = bVar1;
      if ((cVar3 != '\0') && (bVar1 == 0)) {
        return 0x8020000a;
      }
      *(byte *)(param_1 + 10) = bVar4;
      *(byte *)(param_1 + 0xb) = ~*(byte *)(param_2 + 0x3c) & 1;
      *(byte *)(param_1 + 0xc) = ~*(byte *)((longlong)param_2 + 0xf1) & 1;
      *(byte *)(param_1 + 0xd) = ~*(byte *)((longlong)param_2 + 0xf2) & 1;
      bVar1 = *(byte *)(param_3 + 3) >> 5 & 3;
      *(byte *)(param_1 + 0xf) = bVar1;
      *(byte *)(param_1 + 0x10) = ~*(byte *)((longlong)param_2 + 0xf3) & 1;
      *(byte *)(param_1 + 0x11) = ~*(byte *)(param_2 + 0x3f) & 1;
      *(byte *)(param_1 + 0x12) = ~*(byte *)((longlong)param_2 + 0xf6) & 0xf;
      *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)((longlong)param_2 + 0xfd);
      if (((char)param_2[0x3f] != '\0') || (*param_2 == 0)) {
        if (*(char *)((longlong)param_2 + 0xfb) != '\0') {
          return 0x100000;
        }
        uVar2 = 0x100000;
        if (bVar1 == 3) {
          uVar2 = 0x80200008;
        }
        return uVar2;
      }
    }
  }
  return 0x80200008;
}



