// FUN_180443f60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180443f60 */

/* WARNING: Control flow encountered bad instruction data */

undefined * FUN_180443f60(undefined1 *param_1,ulonglong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined2 uVar3;
  undefined6 uVar4;
  char unaff_R12B;
  
  uVar4 = (undefined6)(param_2 >> 0x10);
  uVar3 = (undefined2)param_2;
  switch(*param_1) {
  case 1:
    return &DAT_18075d250 + ((ulonglong)*(ushort *)(param_1 + 1) * 0xd + (param_2 & 0xffff)) * 3;
  case 2:
    return &DAT_1807643e0 + ((ulonglong)*(ushort *)(param_1 + 1) * 0x11 + (param_2 & 0xffff)) * 3;
  case 3:
    return &DAT_180764450 + ((ulonglong)*(ushort *)(param_1 + 1) * 0x31 + (param_2 & 0xffff)) * 3;
  case 4:
    return &DAT_18076bd80 + ((ulonglong)*(ushort *)(param_1 + 1) * 0x100 + (param_2 & 0xffff)) * 3;
  case 5:
    return &DAT_180742e10 + ((ulonglong)*(ushort *)(param_1 + 1) * 3 + (param_2 & 0xffff)) * 3;
  case 6:
    return &DAT_180742710 + ((param_2 & 0xffff) + (ulonglong)*(ushort *)(param_1 + 1) * 2) * 3;
  case 7:
    return &DAT_180774868 + ((param_2 & 0xffff) + (ulonglong)*(ushort *)(param_1 + 1) * 4) * 3;
  case 8:
    return &DAT_18075d3a0 + ((param_2 & 0xffff) + (ulonglong)*(ushort *)(param_1 + 1) * 2) * 3;
  case 9:
    return &DAT_180741b20 + ((param_2 & 0xffff) + (ulonglong)*(ushort *)(param_1 + 1) * 8) * 3;
  case 10:
    return &DAT_18076b670 + ((param_2 & 0xffff) + (ulonglong)*(ushort *)(param_1 + 1) * 8) * 3;
  case 0xb:
    return &DAT_180741ae0 + ((param_2 & 0xffff) + (ulonglong)*(ushort *)(param_1 + 1) * 2) * 3;
  case 0xc:
    return &DAT_180762770 + ((ulonglong)*(ushort *)(param_1 + 1) * 5 + (param_2 & 0xffff)) * 3;
  case 0xd:
    return &DAT_18077d5f0 + ((ulonglong)*(ushort *)(param_1 + 1) * 3 + (param_2 & 0xffff)) * 3;
  case 0xe:
    return &DAT_180753480 + ((ulonglong)*(ushort *)(param_1 + 1) * 3 + (param_2 & 0xffff)) * 3;
  case 0xf:
    return &DAT_1807536b0 + ((ulonglong)*(ushort *)(param_1 + 1) * 3 + (param_2 & 0xffff)) * 3;
  case 0x10:
    return &DAT_18075ff60 + ((param_2 & 0xffff) + (ulonglong)*(ushort *)(param_1 + 1) * 2) * 3;
  case 0x11:
    return &DAT_18076b080 + ((param_2 & 0xffff) + (ulonglong)*(ushort *)(param_1 + 1) * 2) * 3;
  case 0x12:
    return &DAT_18072c8f0 + ((param_2 & 0xffff) + (ulonglong)*(ushort *)(param_1 + 1) * 2) * 3;
  case 0x13:
    return &DAT_18076b1b0 + ((param_2 & 0xffff) + (ulonglong)*(ushort *)(param_1 + 1) * 2) * 3;
  case 0x14:
    return &DAT_18075d330 + ((param_2 & 0xffff) + (ulonglong)*(ushort *)(param_1 + 1) * 2) * 3;
  case 0x15:
    return &DAT_18076acb0 + ((param_2 & 0xffff) + (ulonglong)*(ushort *)(param_1 + 1) * 2) * 3;
  case 0x16:
    return &DAT_180742f98 + ((param_2 & 0xffff) + (ulonglong)*(ushort *)(param_1 + 1) * 2) * 3;
  case 0x17:
    return &DAT_18077d7d0 + ((param_2 & 0xffff) + (ulonglong)*(ushort *)(param_1 + 1) * 2) * 3;
  case 0x18:
    return &DAT_180768f78 + ((param_2 & 0xffff) + (ulonglong)*(ushort *)(param_1 + 1) * 2) * 3;
  case 0x19:
    return &DAT_1807748f8 + ((param_2 & 0xffff) + (ulonglong)*(ushort *)(param_1 + 1) * 2) * 3;
  case 0x1a:
    return &DAT_180741ad8 + ((param_2 & 0xffff) + (ulonglong)*(ushort *)(param_1 + 1) * 2) * 3;
  case 0x1b:
    return &DAT_18076ac58 + ((param_2 & 0xffff) + (ulonglong)*(ushort *)(param_1 + 1) * 2) * 3;
  default:
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)(0x25);
    pcVar1 = (char *)(CONCAT62(uVar4,uVar3) + -0x40ffbbc1);
    *pcVar1 = *pcVar1 + unaff_R12B;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



