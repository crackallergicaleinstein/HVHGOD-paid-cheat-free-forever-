// FUN_1804423e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804423e0 */

undefined8 FUN_1804423e0(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  
  bVar4 = 0;
  cVar3 = '\0';
  do {
    if (0xe < *(byte *)(param_2 + 8)) {
      return 0x80200002;
    }
    if (param_1[3] == 0) {
      return 0x80200000;
    }
    bVar2 = *(byte *)param_1[2];
    switch(bVar2) {
    case 0x26:
    case 0x2e:
    case 0x36:
    case 0x3e:
      if (*(int *)*param_1 != 0) goto switchD_180442454_caseD_64;
      if (((bVar2 == 0x3e) && (*(char *)((longlong)param_1 + 0x23) != 'd')) &&
         (*(char *)((longlong)param_1 + 0x23) != 'e')) {
        *(char *)((longlong)param_1 + 0x2c) = cVar3;
      }
      *(byte *)((longlong)param_1 + 0x22) = bVar2;
      *(char *)((longlong)param_1 + 0x27) = cVar3;
      break;
    default:
      if ((*(int *)*param_1 != 0) || ((bVar2 & 0xf0) != 0x40)) {
        if ((*(ulonglong *)(param_2 + 0x20) & 0x80000000000) != 0) {
          *(undefined4 *)(param_2 + 0x74 + (ulonglong)*(byte *)(param_1 + 5) * 8) = 1;
        }
        if ((*(ulonglong *)(param_2 + 0x20) & 0x100000000000) != 0) {
          *(undefined4 *)(param_2 + 0x74 + (ulonglong)*(byte *)((longlong)param_1 + 0x29) * 8) = 1;
        }
        if (bVar4 != 0) {
          bVar2 = bVar4 >> 3 & 1;
          *(undefined4 *)(param_2 + 0x74 + (ulonglong)*(byte *)(param_2 + 0xf4) * 8) = 1;
          lVar1 = param_1[1];
          *(ulonglong *)(param_2 + 0x20) = *(ulonglong *)(param_2 + 0x20) | 4;
          *(byte *)(param_2 + 0xf0) = bVar2;
          *(byte *)(param_2 + 0xf1) = bVar4 >> 2 & 1;
          *(byte *)(param_2 + 0xf2) = bVar4 >> 1 & 1;
          *(byte *)(param_2 + 0xf3) = bVar4 & 1;
          *(byte *)(lVar1 + 10) = bVar2;
          *(undefined1 *)(lVar1 + 0xb) = *(undefined1 *)(param_2 + 0xf1);
          *(undefined1 *)(lVar1 + 0xc) = *(undefined1 *)(param_2 + 0xf2);
          *(undefined1 *)(lVar1 + 0xd) = *(undefined1 *)(param_2 + 0xf3);
        }
        if ((*(int *)*param_1 != 0) && (*(char *)((longlong)param_1 + 0x22) == '>')) {
          *(undefined1 *)((longlong)param_1 + 0x2c) = *(undefined1 *)((longlong)param_1 + 0x27);
        }
        return 0x100000;
      }
      *(char *)(param_2 + 0xf4) = cVar3;
      bVar4 = bVar2;
      break;
    case 100:
    case 0x65:
switchD_180442454_caseD_64:
      *(byte *)((longlong)param_1 + 0x22) = bVar2;
      *(char *)((longlong)param_1 + 0x27) = cVar3;
      *(byte *)((longlong)param_1 + 0x23) = bVar2;
      *(char *)((longlong)param_1 + 0x2a) = cVar3;
      *(undefined1 *)((longlong)param_1 + 0x2c) = 0xff;
      break;
    case 0x66:
      *(char *)(param_1 + 5) = cVar3;
      if (*(char *)((longlong)param_1 + 0x24) == '\0') {
        *(undefined1 *)((longlong)param_1 + 0x24) = 0x66;
        *(char *)((longlong)param_1 + 0x2b) = cVar3;
      }
      *(ulonglong *)(param_2 + 0x20) = *(ulonglong *)(param_2 + 0x20) | 0x80000000000;
      break;
    case 0x67:
      *(char *)((longlong)param_1 + 0x29) = cVar3;
      *(ulonglong *)(param_2 + 0x20) = *(ulonglong *)(param_2 + 0x20) | 0x100000000000;
      break;
    case 0xf0:
      *(undefined1 *)(param_1 + 4) = 1;
      *(char *)((longlong)param_1 + 0x25) = cVar3;
      break;
    case 0xf2:
    case 0xf3:
      *(byte *)((longlong)param_1 + 0x21) = bVar2;
      *(byte *)((longlong)param_1 + 0x24) = bVar2;
      *(char *)((longlong)param_1 + 0x26) = cVar3;
      *(char *)((longlong)param_1 + 0x2b) = cVar3;
    }
    if ((bVar4 != 0) && (bVar4 != bVar2)) {
      bVar4 = 0;
      *(undefined1 *)(param_2 + 0xf4) = 0;
    }
    *(byte *)(param_2 + 0x78 + (ulonglong)*(byte *)(param_2 + 0x70) * 8) = bVar2;
    *(char *)(param_2 + 0x70) = *(char *)(param_2 + 0x70) + '\x01';
    *(char *)(param_2 + 8) = *(char *)(param_2 + 8) + '\x01';
    param_1[2] = param_1[2] + 1;
    param_1[3] = param_1[3] + -1;
    cVar3 = cVar3 + '\x01';
  } while( true );
}



