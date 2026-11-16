// FUN_1800f69b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800f69b0 */

ulonglong FUN_1800f69b0(char *param_1)

{
  char cVar1;
  ushort *puVar2;
  double *pdVar3;
  byte *pbVar4;
  undefined8 uVar5;
  undefined8 local_res8 [4];
  undefined1 local_68 [32];
  undefined1 local_48 [72];
  
  cVar1 = *param_1;
  switch(cVar1) {
  default:
    local_res8[0] = FUN_180112a50();
    uVar5 = FUN_1800f6bd0(local_68,"type must be number, but is ",local_res8);
    FUN_1800f6ca0(local_48,0x12e,uVar5);
                    /* WARNING: Subroutine does not return */
    FUN_180606630(local_48,&DAT_1808d1050);
  case '\x04':
    pbVar4 = (byte *)(param_1 + 8);
    if (cVar1 != '\x04') {
      pbVar4 = (byte *)0x0;
    }
    return (ulonglong)*pbVar4;
  case '\x05':
    puVar2 = (ushort *)(param_1 + 8);
    if (cVar1 != '\x05') {
      puVar2 = (ushort *)0x0;
    }
    break;
  case '\x06':
    puVar2 = (ushort *)(param_1 + 8);
    if (cVar1 != '\x06') {
      puVar2 = (ushort *)0x0;
    }
    return (ulonglong)*puVar2;
  case '\a':
    pdVar3 = (double *)(param_1 + 8);
    if (cVar1 != '\a') {
      pdVar3 = (double *)0x0;
    }
    return CONCAT44((int)((ulonglong)pdVar3 >> 0x20),(int)*pdVar3);
  }
  return (ulonglong)*puVar2;
}



