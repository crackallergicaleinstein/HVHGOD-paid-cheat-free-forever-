// FUN_1800ea420 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800ea420 */

double FUN_1800ea420(char *param_1)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  longlong *plVar4;
  double *pdVar5;
  undefined8 uVar6;
  undefined8 local_res8 [4];
  undefined1 local_68 [32];
  undefined1 local_48 [72];
  
  cVar1 = *param_1;
  switch(cVar1) {
  default:
    local_res8[0] = FUN_180112a50();
    uVar6 = FUN_1800f6bd0(local_68,"type must be number, but is ",local_res8);
    FUN_1800f6ca0(local_48,0x12e,uVar6);
                    /* WARNING: Subroutine does not return */
    FUN_180606630(local_48,&DAT_1808d1050);
  case '\x05':
    plVar4 = (longlong *)(param_1 + 8);
    if (cVar1 != '\x05') {
      plVar4 = (longlong *)0x0;
    }
    return (double)*plVar4;
  case '\x06':
    break;
  case '\a':
    pdVar5 = (double *)(param_1 + 8);
    if (cVar1 != '\a') {
      pdVar5 = (double *)0x0;
    }
    return *pdVar5;
  }
  puVar3 = (ulonglong *)(param_1 + 8);
  if (cVar1 != '\x06') {
    puVar3 = (ulonglong *)0x0;
  }
  uVar2 = *puVar3;
  if ((longlong)uVar2 < 0) {
    return (double)uVar2;
  }
  return (double)(longlong)uVar2;
}



