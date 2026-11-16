// FUN_180442710 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180442710 */

undefined8 FUN_180442710(longlong param_1,int *param_2,byte *param_3)

{
  byte bVar1;
  char cVar2;
  longlong lVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  char cVar6;
  bool bVar7;
  
  lVar3 = *(longlong *)(param_1 + 8);
  if ((*param_3 & 1) == 0) goto LAB_1804428e0;
  if (*(char *)((longlong)param_2 + 0x102) == '\0') {
    *(byte *)((longlong)param_2 + 0x102) = *(byte *)(param_2 + 2);
    if (0xe < *(byte *)(param_2 + 2)) {
      return 0x80200002;
    }
    if (*(longlong *)(param_1 + 0x18) == 0) {
      return 0x80200000;
    }
    bVar1 = **(byte **)(param_1 + 0x10);
    *(byte **)(param_1 + 0x10) = *(byte **)(param_1 + 0x10) + 1;
    *(char *)(param_2 + 2) = (char)param_2[2] + '\x01';
    *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + -1;
    *(ulonglong *)(param_2 + 8) = *(ulonglong *)(param_2 + 8) | 1;
    *(byte *)((longlong)param_2 + 0xff) = bVar1 >> 6;
    *(byte *)(param_2 + 0x40) = bVar1 >> 3 & 7;
    *(byte *)((longlong)param_2 + 0x101) = bVar1 & 7;
  }
  if ((*param_3 & 0x10) == 0) {
    cVar2 = *(char *)((longlong)param_2 + 0xff);
    cVar6 = '\0';
    if (*(char *)((longlong)param_2 + 0x17) == '\x10') {
      if (cVar2 == '\0') {
        bVar7 = *(char *)((longlong)param_2 + 0x101) == '\x06';
      }
      else {
        if (cVar2 == '\x01') {
          cVar6 = '\b';
          goto LAB_1804428b9;
        }
        bVar7 = cVar2 == '\x02';
      }
      if (bVar7) {
        cVar6 = '\x10';
        goto LAB_1804428b9;
      }
    }
    else {
      if ((cVar2 == '\x03') || (*(char *)((longlong)param_2 + 0x101) != '\x04')) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      if (cVar2 == '\0') {
        if (*(char *)((longlong)param_2 + 0x101) == '\x05') {
          if (*param_2 == 0) {
            *(ulonglong *)(param_2 + 8) = *(ulonglong *)(param_2 + 8) | 0x80;
          }
LAB_180442818:
          cVar6 = ' ';
        }
      }
      else if (cVar2 == '\x01') {
        cVar6 = '\b';
      }
      else if (cVar2 == '\x02') goto LAB_180442818;
      if (bVar7) {
        *(byte *)((longlong)param_2 + 0x106) = *(byte *)(param_2 + 2);
        if (0xe < *(byte *)(param_2 + 2)) {
          return 0x80200002;
        }
        if (*(longlong *)(param_1 + 0x18) == 0) {
          return 0x80200000;
        }
        bVar1 = **(byte **)(param_1 + 0x10);
        *(byte **)(param_1 + 0x10) = *(byte **)(param_1 + 0x10) + 1;
        *(char *)(param_2 + 2) = (char)param_2[2] + '\x01';
        *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + -1;
        *(ulonglong *)(param_2 + 8) = *(ulonglong *)(param_2 + 8) | 2;
        *(byte *)((longlong)param_2 + 0x103) = bVar1 >> 6;
        *(byte *)((longlong)param_2 + 0x105) = bVar1 & 7;
        *(byte *)(param_2 + 0x41) = bVar1 >> 3 & 7;
        if (((bVar1 & 7) == 5) && (cVar6 = ' ', *(char *)((longlong)param_2 + 0xff) == '\x01')) {
          cVar6 = '\b';
        }
      }
      if (cVar6 != '\0') {
LAB_1804428b9:
        uVar5 = FUN_180441440(param_1,param_2,cVar6);
        if ((int)uVar5 < 0) {
          return uVar5;
        }
      }
    }
  }
  if ((*(char *)((longlong)param_2 + 0xff) == '\x03') || ((*param_3 & 0x10) != 0)) {
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  *(undefined1 *)(lVar3 + 0x14) = uVar4;
LAB_1804428e0:
  if (((*param_3 & 2) == 0) || (uVar5 = FUN_180441440(param_1), -1 < (int)uVar5)) {
    if ((*param_3 & 4) != 0) {
      if (param_3[8] != 0) {
        *(ulonglong *)(param_2 + 8) = *(ulonglong *)(param_2 + 8) | 0x80;
      }
      uVar5 = FUN_180441560(param_1);
      if ((int)uVar5 < 0) {
        return uVar5;
      }
    }
    if (((*param_3 & 8) == 0) || (uVar5 = FUN_180441560(param_1), -1 < (int)uVar5)) {
      uVar5 = 0x100000;
    }
  }
  return uVar5;
}



