// FUN_180441cb0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180441cb0 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_180441cb0(longlong param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  code *UNRECOVERED_JUMPTABLE;
  byte bVar5;
  int iVar6;
  ulonglong uVar7;
  byte bVar8;
  longlong lVar9;
  longlong lVar10;
  
  iVar6 = *(int *)(param_2 + 0xc);
  if (iVar6 == 2) {
    *(undefined2 *)(param_2 + 0x38) =
         *(undefined2 *)(&DAT_18075340c + (ulonglong)*(byte *)(param_1 + 0xf) * 2);
    return;
  }
  if (iVar6 == 3) {
    *(undefined2 *)(param_2 + 0x38) =
         *(undefined2 *)(&DAT_18075368c + (ulonglong)*(byte *)(param_1 + 0xf) * 2);
    if ((*(byte *)(param_3 + 0xf) & 7) == 0) {
      return;
    }
    *(undefined1 *)(param_2 + 0x44) = 1;
    *(undefined4 *)(param_2 + 0x48) =
         *(undefined4 *)(&DAT_180753138 + (ulonglong)(*(byte *)(param_3 + 0xf) & 7) * 4);
    return;
  }
  lVar10 = param_3;
  if (iVar6 == 4) goto LAB_180441fae;
  if (iVar6 != 5) {
    return;
  }
  *(undefined2 *)(param_2 + 0x38) = 0x200;
  bVar8 = -(*(char *)(param_3 + 0xf) >> 7);
  if ((bVar8 == 0) && ((*(byte *)(param_3 + 0x10) & 7) != 0)) {
    *(undefined1 *)(param_2 + 0x44) = 1;
    bVar5 = *(byte *)(param_3 + 0x10) & 7;
    if (bVar5 == 1) {
      *(undefined4 *)(param_2 + 0x48) = 3;
    }
    else {
      if (bVar5 != 2) {
        bVar8 = 2;
        if (bVar5 == 3) {
          *(undefined4 *)(param_2 + 0x48) = 10;
        }
        else {
          *(undefined4 *)(param_2 + 0x48) = 0xb;
        }
        goto LAB_180441d4b;
      }
      *(undefined4 *)(param_2 + 0x48) = 4;
    }
    bVar8 = 1;
  }
LAB_180441d4b:
  lVar9 = 0x180000000;
  switch(*(byte *)(param_3 + 0xf) & 0x1f) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 8:
  case 9:
    goto switchD_180441d79_caseD_0;
  case 4:
  case 5:
  case 6:
  case 7:
    *(undefined1 *)(param_1 + 0x1d) = 0x40;
    goto switchD_180441d79_caseD_0;
  case 10:
  case 0xb:
  case 0xc:
  case 0x12:
    uVar2 = (&UNK_180768fb0)[(ulonglong)*(byte *)(param_2 + 0xf9) + (ulonglong)bVar8 * 8];
    break;
  case 0xd:
  case 0x11:
  case 0x13:
  case 0x15:
    uVar2 = (&UNK_1807643c8)[(ulonglong)*(byte *)(param_2 + 0xf9) + (ulonglong)bVar8 * 3];
    break;
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x14:
    uVar2 = (&UNK_18072c8a0)[(ulonglong)*(byte *)(param_2 + 0xf9) + (ulonglong)bVar8 * 8];
    break;
  case 0x16:
  case 0x18:
    uVar2 = (&UNK_18077d8a0)[(ulonglong)*(byte *)(param_2 + 0xf9) + (ulonglong)bVar8 * 8];
    break;
  case 0x17:
  case 0x19:
    uVar2 = (&UNK_180701ca4)[(ulonglong)*(byte *)(param_2 + 0xf9) + (ulonglong)bVar8];
    break;
  default:
    goto switchD_180441d79_default;
  }
  *(undefined1 *)(param_1 + 0x1d) = uVar2;
switchD_180441d79_caseD_0:
  *(byte *)(param_1 + 0x1c) = *(byte *)(param_3 + 0xf) & 0x1f;
  switch(*(byte *)(param_3 + 0xf) & 0x1f) {
  case 0:
  case 1:
  case 4:
  case 5:
  case 6:
  case 7:
  case 0x13:
  case 0x15:
  case 0x17:
  case 0x19:
    break;
  case 2:
    *(uint *)(param_2 + 0x4c) = (*(byte *)(param_2 + 0xf9) & 3) + 1;
  case 3:
    if (3 < *(byte *)(param_2 + 0xf9)) {
      *(undefined1 *)(param_2 + 0x58) = 1;
    }
    break;
  case 8:
  case 9:
    *(uint *)(param_2 + 0x50) = *(byte *)(param_2 + 0xf9) + 1;
    break;
  case 10:
  case 0xb:
  case 0xc:
    switch(*(undefined1 *)(param_2 + 0xf9)) {
    case 0:
      break;
    case 1:
      *(undefined4 *)(param_2 + 0x48) = 4;
      break;
    case 2:
      *(undefined4 *)(param_2 + 0x48) = 0xb;
      break;
    case 3:
switchD_180441f10_caseD_3:
      *(undefined4 *)(param_2 + 0x54) = 1;
      break;
    case 4:
      goto switchD_180441f10_caseD_4;
    case 5:
      goto switchD_180441f10_caseD_5;
    case 6:
      goto switchD_180441f10_caseD_6;
    case 7:
      goto switchD_180441f10_caseD_7;
    default:
      UNRECOVERED_JUMPTABLE = (code *)swi(0x29);
      (*UNRECOVERED_JUMPTABLE)(0x25);
      goto switchD_180441e3d_caseD_e;
    }
    break;
  case 0xd:
  case 0x11:
    goto switchD_180441e3d_caseD_d;
  case 0xe:
  case 0xf:
  case 0x10:
switchD_180441e3d_caseD_e:
    if (*(byte *)(param_2 + 0xf9) < 8) {
      UNRECOVERED_JUMPTABLE =
           (code *)((ulonglong)
                    *(uint *)(lVar9 + 0x442360 + (ulonglong)*(byte *)(param_2 + 0xf9) * 4) + lVar9);
                    /* WARNING: Could not recover jumptable at 0x000180441eb3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
      return;
    }
    UNRECOVERED_JUMPTABLE = (code *)swi(0x29);
    (*UNRECOVERED_JUMPTABLE)(0x25);
    goto switchD_180441e3d_caseD_d;
  case 0x12:
  case 0x16:
    bVar8 = *(byte *)(param_2 + 0xf9);
    pcVar4 = (char *)(ulonglong)bVar8;
    switch(pcVar4) {
    case (char *)0x0:
      goto switchD_180441e3d_caseD_0;
    case (char *)0x1:
    case (char *)0x2:
      cRam0000000000000003 = cRam0000000000000003 + bVar8;
      *pcVar4 = *pcVar4 + bVar8;
      *(char *)((longlong)pcVar4 * 2) = *(char *)((longlong)pcVar4 * 2) + bVar8;
      *pcVar4 = *pcVar4 + bVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (char *)0x3:
      goto switchD_180441f10_caseD_3;
    case (char *)0x4:
      goto switchD_180441f10_caseD_4;
    case (char *)0x5:
      goto switchD_180441f10_caseD_5;
    case (char *)0x6:
      goto switchD_180441f10_caseD_6;
    case (char *)0x7:
      goto switchD_180441f10_caseD_7;
    default:
      UNRECOVERED_JUMPTABLE = (code *)swi(0x29);
      (*UNRECOVERED_JUMPTABLE)(0x25);
    }
  case 0x14:
  case 0x18:
    cVar1 = *(char *)(param_2 + 0xf9);
    if (cVar1 == '\x04') {
switchD_180441f10_caseD_4:
      *(undefined4 *)(param_2 + 0x54) = 3;
    }
    else if (cVar1 == '\x05') {
switchD_180441f10_caseD_5:
      *(undefined4 *)(param_2 + 0x54) = 2;
    }
    else if (cVar1 == '\x06') {
switchD_180441f10_caseD_6:
      *(undefined4 *)(param_2 + 0x54) = 5;
    }
    else if (cVar1 == '\a') {
switchD_180441f10_caseD_7:
      *(undefined4 *)(param_2 + 0x54) = 4;
    }
    break;
  default:
    UNRECOVERED_JUMPTABLE = (code *)swi(0x29);
    (*UNRECOVERED_JUMPTABLE)(0x25);
    param_3 = lVar9;
switchD_180441d79_default:
    UNRECOVERED_JUMPTABLE = (code *)swi(0x29);
    (*UNRECOVERED_JUMPTABLE)(0x25);
LAB_180441fae:
    bVar5 = *(byte *)(param_3 + 0xf) & 3;
    bVar8 = bVar5 - 1;
    if (bVar5 == 0) {
      bVar8 = *(byte *)(param_1 + 0xf);
    }
    uVar7 = (ulonglong)bVar8;
    *(undefined2 *)(param_2 + 0x38) = *(undefined2 *)(&DAT_180742f7c + uVar7 * 2);
    *(byte *)(param_1 + 0x1a) = *(byte *)(lVar10 + 0xf) >> 2 & 0x1f;
    if ((*(byte *)(lVar10 + 0xf) & 0x7c) == 0) goto LAB_18044205e;
    bVar8 = (&DAT_18076b65c)[*(byte *)(lVar10 + 0x10) & 7];
    *(byte *)(param_1 + 0x1b) = bVar8;
    switch(*(byte *)(lVar10 + 0xf) >> 2 & 0x1f) {
    case 1:
      lVar9 = uVar7 + ((ulonglong)(bVar8 >> 5) + (ulonglong)*(byte *)(param_2 + 0xfb) * 3) * 3;
      *(undefined *)(param_1 + 0x1d) = (&DAT_180768f88)[lVar9];
      uVar3 = *(undefined4 *)(&DAT_18075d2a0 + lVar9 * 4);
      goto LAB_18044205a;
    case 2:
      lVar9 = uVar7 + ((ulonglong)(bVar8 >> 5) + (ulonglong)*(byte *)(param_2 + 0xfb) * 2) * 3;
      *(undefined *)(param_1 + 0x1d) = (&DAT_180768fa0)[lVar9];
      uVar3 = *(undefined4 *)(&DAT_1807138c8 + lVar9 * 4);
      goto LAB_18044205a;
    case 3:
      *(undefined *)(param_1 + 0x1d) = (&DAT_180701d48)[uVar7];
      break;
    case 4:
    case 7:
      *(undefined *)(param_1 + 0x1d) = (&DAT_180753474)[*(byte *)(lVar10 + 0x10) & 7];
      break;
    case 5:
      *(undefined *)(param_1 + 0x1d) = (&DAT_18077d7f0)[bVar8 >> 5];
      break;
    case 6:
    case 0xe:
      *(undefined1 *)(param_1 + 0x1d) = 0x10;
      break;
    case 8:
      uVar2 = 0x10;
      if (*(char *)(param_1 + 10) == '\0') {
        uVar2 = 8;
      }
      *(undefined1 *)(param_1 + 0x1d) = uVar2;
      break;
    case 9:
      uVar2 = 0x20;
      if (*(char *)(param_1 + 10) == '\0') {
        uVar2 = 0x10;
      }
      *(undefined1 *)(param_1 + 0x1d) = uVar2;
      break;
    case 10:
      *(undefined1 *)(param_1 + 0x1d) = 0x20;
      break;
    case 0xb:
      *(undefined *)(param_1 + 0x1d) = (&DAT_18076ac30)[uVar7];
      break;
    case 0xc:
      *(undefined *)(param_1 + 0x1d) = (&DAT_1807644f0)[uVar7];
      break;
    case 0xd:
      *(undefined *)(param_1 + 0x1d) = (&DAT_180769f70)[uVar7];
      break;
    case 0xf:
      *(undefined *)(param_1 + 0x1d) = (&DAT_1807030a4)[uVar7];
      break;
    case 0x10:
      lVar9 = uVar7 + (ulonglong)*(byte *)(param_2 + 0xfb) * 3;
      *(undefined *)(param_1 + 0x1d) = (&DAT_1807643d4)[lVar9];
      uVar3 = *(undefined4 *)(&DAT_18076b060 + lVar9 * 4);
LAB_18044205a:
      *(undefined4 *)(param_2 + 0x48) = uVar3;
      break;
    default:
      UNRECOVERED_JUMPTABLE = (code *)swi(0x29);
      (*UNRECOVERED_JUMPTABLE)(0x25);
      goto LAB_1804421f1;
    }
LAB_18044205e:
    if ((*(byte *)(lVar10 + 0x11) & 0x3c) != 0) {
      *(undefined1 *)(param_2 + 0x44) = 1;
      *(undefined4 *)(param_2 + 0x48) =
           *(undefined4 *)(&DAT_180743040 + (ulonglong)(*(byte *)(lVar10 + 0x11) >> 2 & 0xf) * 4);
    }
    if (*(char *)(param_2 + 0xfb) != '\0') {
      bVar8 = *(byte *)(lVar10 + 0x10) >> 3 & 3;
      if (bVar8 == 2) {
LAB_1804421f1:
        *(uint *)(param_2 + 0x4c) = *(byte *)(param_1 + 0xf) + 1;
      }
      else if (bVar8 != 3) goto LAB_180442201;
      *(undefined1 *)(param_2 + 0x58) = 1;
    }
LAB_180442201:
    *(uint *)(param_2 + 0x40) = *(byte *)(param_2 + 0xfd) + 0xf8;
    if ((*(byte *)(lVar10 + 0x11) & 3) == 0) {
      iVar6 = *(byte *)(param_2 + 0xf8) + 2;
    }
    else if ((*(byte *)(lVar10 + 0x11) & 3) == 1) {
      iVar6 = 3;
    }
    else {
      iVar6 = *(byte *)(param_2 + 0xf8) + 4;
    }
    *(int *)(param_2 + 0x3c) = iVar6;
    if (*(char *)(param_2 + 0xfd) == '\0') {
      *(undefined4 *)(param_2 + 0x3c) = 1;
      return;
    }
    return;
  }
switchD_180441e3d_caseD_0:
  if ((*(char *)(param_2 + 0xff) != '\x03') && (*(char *)(param_2 + 0xf8) != '\0')) {
    *(undefined1 *)(param_2 + 0x59) = 1;
  }
  *(uint *)(param_2 + 0x40) = *(byte *)(param_2 + 0xfb) + 0xf8;
  *(undefined4 *)(param_2 + 0x3c) = 2;
  return;
switchD_180441e3d_caseD_d:
  if (*(char *)(param_2 + 0xf9) == '\x01') {
    *(undefined4 *)(param_2 + 0x48) = 3;
  }
  else if (*(char *)(param_2 + 0xf9) == '\x02') {
    *(undefined4 *)(param_2 + 0x48) = 10;
  }
  goto switchD_180441e3d_caseD_0;
}



