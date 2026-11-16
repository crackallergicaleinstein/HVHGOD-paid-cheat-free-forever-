// FUN_1800ea2a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800ea2a0 */

longlong FUN_1800ea2a0(char *param_1)

{
  char cVar1;
  longlong *plVar2;
  double *pdVar3;
  undefined8 uVar4;
  longlong lVar5;
  double dVar6;
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
  case '\x05':
    plVar2 = (longlong *)(param_1 + 8);
    if (cVar1 != '\x05') {
      plVar2 = (longlong *)0x0;
    }
    return *plVar2;
  case '\x06':
    plVar2 = (longlong *)(param_1 + 8);
    if (cVar1 != '\x06') {
      plVar2 = (longlong *)0x0;
    }
    break;
  case '\a':
    pdVar3 = (double *)(param_1 + 8);
    lVar5 = 0;
    if (cVar1 != '\a') {
      pdVar3 = (double *)0x0;
    }
    dVar6 = *pdVar3;
    if ((9.223372036854776e+18 <= dVar6) &&
       (dVar6 = dVar6 - 9.223372036854776e+18, dVar6 < 9.223372036854776e+18)) {
      lVar5 = -0x8000000000000000;
    }
    return (longlong)dVar6 + lVar5;
  }
  return *plVar2;
}



