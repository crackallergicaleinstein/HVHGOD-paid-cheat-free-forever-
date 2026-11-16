// FUN_1800e6780 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800e6780 */

ulonglong FUN_1800e6780(char *param_1)

{
  char cVar1;
  byte *pbVar2;
  double *pdVar3;
  undefined8 uVar4;
  undefined8 local_res8 [4];
  undefined1 local_68 [32];
  undefined1 local_48 [72];
  
  cVar1 = *param_1;
  switch(cVar1) {
  default:
    local_res8[0] = FUN_180112a50();
    uVar4 = FUN_1800f6bd0(local_68,"type must be number, but is ",local_res8);
    FUN_1800f6ca0(local_48,0x12e,uVar4);
                    /* WARNING: Subroutine does not return */
    FUN_180606630(local_48,&DAT_1808d1050);
  case '\x04':
    pbVar2 = (byte *)(param_1 + 8);
    if (cVar1 != '\x04') {
      pbVar2 = (byte *)0x0;
    }
    return (ulonglong)*pbVar2;
  case '\x05':
    pbVar2 = (byte *)(param_1 + 8);
    if (cVar1 != '\x05') {
      pbVar2 = (byte *)0x0;
    }
    break;
  case '\x06':
    pbVar2 = (byte *)(param_1 + 8);
    if (cVar1 != '\x06') {
      pbVar2 = (byte *)0x0;
    }
    return (ulonglong)*pbVar2;
  case '\a':
    pdVar3 = (double *)(param_1 + 8);
    if (cVar1 != '\a') {
      pdVar3 = (double *)0x0;
    }
    return CONCAT44((int)((ulonglong)pdVar3 >> 0x20),(int)*pdVar3);
  }
  return (ulonglong)*pbVar2;
}



