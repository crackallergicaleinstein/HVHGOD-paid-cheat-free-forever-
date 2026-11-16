// FUN_180441720 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180441720 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_180441720(longlong *param_1,longlong param_2,longlong param_3)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  byte *pbVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  
  puVar5 = (ulonglong *)(param_2 + 0x20);
  if ((*(byte *)(param_3 + 0xc) & 0x60) != 0) {
    *puVar5 = *puVar5 | *(ulonglong *)
                         (&DAT_180753390 + (ulonglong)(*(byte *)(param_3 + 0xc) >> 5 & 3) * 8);
  }
  pbVar4 = (byte *)(param_3 + 0xd);
  if ((*(byte *)(param_3 + 0xd) & 3) != 0) {
    *puVar5 = *puVar5 | *(ulonglong *)
                         (&DAT_18076ac80 + (ulonglong)(*(byte *)(param_3 + 0xd) & 3) * 8);
  }
  if ((*(byte *)(param_3 + 0xd) & 0xc) != 0) {
    *puVar5 = *puVar5 | *(ulonglong *)
                         (&DAT_18077d830 + (ulonglong)(*(byte *)(param_3 + 0xd) >> 2 & 3) * 8);
  }
  puVar5 = (ulonglong *)(param_2 + 0x20);
  switch(*(undefined4 *)(param_2 + 0xc)) {
  case 0:
    if ((*(byte *)(param_3 + 0xd) & 0x20) != 0) {
      *puVar5 = *puVar5 | 0x100;
    }
    puVar3 = (ulonglong *)(param_2 + 0x20);
    if ((*pbVar4 & 0x40) != 0) {
      uVar6 = *puVar5;
      *puVar5 = uVar6 | 0x10000;
      if ((char)param_1[4] != '\0') {
        *puVar5 = uVar6 | 0x8010000;
        *(undefined4 *)(param_2 + 0x74 + (ulonglong)*(byte *)((longlong)param_1 + 0x25) * 8) = 1;
      }
    }
    if (*(char *)(param_3 + 0xd) < '\0') {
      *puVar3 = *puVar3 | 0x20000;
    }
    puVar5 = (ulonglong *)(param_2 + 0x20);
    if ((*(byte *)(param_3 + 0xe) & 1) != 0) {
      *puVar5 = *puVar3 | 0x40000;
    }
    if ((*(byte *)(param_3 + 0xe) & 2) != 0) {
      *puVar5 = *puVar5 | 0x80000;
    }
    puVar3 = (ulonglong *)(param_2 + 0x20);
    pbVar4 = (byte *)(param_3 + 0xe);
    if ((*pbVar4 & 4) != 0) {
      *puVar3 = *puVar5 | 0x100000;
    }
    if ((*pbVar4 & 8) != 0) {
      *puVar3 = *puVar3 | 0x200000;
    }
    puVar5 = (ulonglong *)(param_2 + 0x20);
    if ((*pbVar4 & 0x10) != 0) {
      *puVar5 = *puVar3 | 0x400000;
    }
    if ((*(byte *)(param_3 + 0xe) & 0x40) != 0) {
      *puVar5 = *puVar5 | 0x800000;
    }
    if (*(char *)((longlong)param_1 + 0x21) == -0xe) {
      uVar6 = *(ulonglong *)(param_2 + 0x20);
      if ((uVar6 >> 0x13 & 1) == 0) {
        if (((uVar6 >> 0x15 & 1) == 0) ||
           (((uVar6 >> 0x1b & 1) == 0 && ((*(byte *)(param_3 + 0xe) & 0x40) == 0)))) {
          if ((*(char *)(*param_1 + 0xb) != '\0') && ((uVar6 >> 0x14 & 1) != 0)) {
            uVar6 = uVar6 | 0x80000000;
            goto LAB_18044197e;
          }
        }
        else {
          *(ulonglong *)(param_2 + 0x20) = uVar6 | 0x100000000;
        }
      }
      else {
        uVar6 = uVar6 | 0x40000000;
LAB_18044197e:
        *(ulonglong *)(param_2 + 0x20) = uVar6;
      }
    }
    else if (*(char *)((longlong)param_1 + 0x21) == -0xd) {
      uVar6 = *puVar5;
      if ((uVar6 >> 0x11 & 1) == 0) {
        if ((uVar6 >> 0x12 & 1) == 0) {
          if (((uVar6 >> 0x16 & 1) != 0) &&
             (((uVar6 >> 0x1b & 1) != 0 || ((*(byte *)(param_3 + 0xe) & 0x40) != 0)))) {
            *(ulonglong *)(param_2 + 0x20) = uVar6 | 0x200000000;
          }
        }
        else {
          *(ulonglong *)(param_2 + 0x20) = uVar6 | 0x20000000;
        }
      }
      else {
        *(ulonglong *)(param_2 + 0x20) = uVar6 | 0x10000000;
      }
    }
    if ((*(int *)(param_2 + 0x74 + (ulonglong)*(byte *)((longlong)param_1 + 0x26) * 8) == 0) &&
       ((*(ulonglong *)(param_2 + 0x20) & 0x3f0000000) != 0)) {
      *(undefined4 *)(param_2 + 0x74 + (ulonglong)*(byte *)((longlong)param_1 + 0x26) * 8) = 1;
    }
    puVar3 = (ulonglong *)(param_2 + 0x20);
    if (*(char *)(param_3 + 0xe) < '\0') {
      uVar6 = *puVar3;
      *puVar3 = uVar6 | 0x1000000;
      if (*(char *)((longlong)param_1 + 0x22) == '.') {
        uVar2 = 0x401000000;
      }
      else {
        if (*(char *)((longlong)param_1 + 0x22) != '>') goto LAB_1804419fa;
        uVar2 = 0x801000000;
      }
      *puVar3 = uVar6 | uVar2;
      *(undefined4 *)(param_2 + 0x74 + (ulonglong)*(byte *)((longlong)param_1 + 0x27) * 8) = 1;
    }
LAB_1804419fa:
    puVar5 = (ulonglong *)(param_2 + 0x20);
    pbVar4 = &DAT_1000000000;
    if ((*(byte *)(param_3 + 0xe) & 0x20) != 0) {
      uVar6 = *puVar3;
      *puVar3 = uVar6 | 0x2000000;
      if ((*(char *)(*param_1 + 0xc) != '\0') && (-1 < *(char *)((longlong)param_1 + 0x2c))) {
        *puVar5 = uVar6 | 0x1002000000;
        *(undefined4 *)(param_2 + 0x74 + (longlong)*(char *)((longlong)param_1 + 0x2c) * 8) = 1;
      }
    }
    if ((*(byte *)(param_3 + 0xd) & 0x10) == 0) {
      return;
    }
    if (*(char *)(param_3 + 0xe) < '\0') {
      return;
    }
    uVar6 = *puVar5;
    uVar2 = uVar6 | 0x4000000;
    *puVar5 = uVar2;
    if ((*(char *)((longlong)param_1 + 0x23) == '\0') || ((uVar6 & 0x1000000000) != 0)) break;
    switch(*(char *)((longlong)param_1 + 0x23)) {
    case '&':
      uVar2 = 0x10004000000;
      break;
    default:
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(0x25);
      goto switchD_1804417af_caseD_1;
    case '.':
      uVar2 = 0x2004000000;
      break;
    case '6':
      uVar2 = 0x4004000000;
      break;
    case '>':
      uVar2 = 0x8004000000;
      break;
    case 'd':
      uVar2 = 0x20004000000;
      break;
    case 'e':
      uVar2 = 0x40004000000;
    }
    uVar2 = uVar6 | uVar2;
    *(ulonglong *)(param_2 + 0x20) = uVar2;
    break;
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
switchD_1804417af_caseD_1:
    if ((*pbVar4 & 0x10) == 0) {
      return;
    }
    uVar6 = *puVar5;
    uVar2 = uVar6 | 0x4000000;
    *puVar5 = uVar2;
    if (*(char *)((longlong)param_1 + 0x23) != '\0') {
      switch(*(char *)((longlong)param_1 + 0x23)) {
      case '&':
        uVar2 = uVar6 | 0x10004000000;
        *puVar5 = uVar2;
        break;
      default:
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(0x25);
switchD_1804417af_default:
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(0x25);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case '.':
        uVar2 = uVar6 | 0x2004000000;
        *puVar5 = uVar2;
        break;
      case '6':
        uVar2 = uVar6 | 0x4004000000;
        *puVar5 = uVar2;
        break;
      case '>':
        uVar2 = uVar6 | 0x8004000000;
        *puVar5 = uVar2;
        break;
      case 'd':
        uVar2 = uVar6 | 0x20004000000;
        *puVar5 = uVar2;
        break;
      case 'e':
        uVar2 = uVar6 | 0x40004000000;
        *puVar5 = uVar2;
      }
    }
    break;
  default:
    goto switchD_1804417af_default;
  }
  if ((uVar2 & 0x7e000000000) != 0) {
    *(undefined4 *)(param_2 + 0x74 + (ulonglong)*(byte *)((longlong)param_1 + 0x2a) * 8) = 1;
  }
  return;
}



