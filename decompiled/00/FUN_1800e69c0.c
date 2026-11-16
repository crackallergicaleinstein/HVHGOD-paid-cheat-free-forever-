// FUN_1800e69c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800e69c0 */

undefined1 (*) [16]
FUN_1800e69c0(char *param_1,undefined1 (*param_2) [16],undefined8 param_3,undefined8 param_4)

{
  undefined1 (*pauVar1) [16];
  undefined8 uVar2;
  undefined1 (*pauVar3) [16];
  undefined8 local_70;
  undefined1 (*local_68) [16];
  undefined1 local_60 [56];
  undefined1 local_28 [32];
  
  *param_2 = (undefined1  [16])0x0;
  *(undefined8 *)param_2[1] = 0;
  *(undefined8 *)(param_2[1] + 8) = 0xf;
  (*param_2)[0] = 0;
  local_68 = param_2;
  if (*param_1 != '\x03') {
    local_70 = FUN_180112a50();
    uVar2 = FUN_1800f6bd0(local_28,"type must be string, but is ",&local_70);
    FUN_1800f6ca0(local_60,0x12e,uVar2);
                    /* WARNING: Subroutine does not return */
    FUN_180606630(local_60,&DAT_1808d1050);
  }
  pauVar3 = *(undefined1 (**) [16])(param_1 + 8);
  if (param_2 != pauVar3) {
    pauVar1 = pauVar3 + 1;
    if (0xf < *(ulonglong *)(pauVar3[1] + 8)) {
      pauVar3 = *(undefined1 (**) [16])*pauVar3;
    }
    FUN_180113930(param_2,pauVar3,*(undefined8 *)*pauVar1,param_4,2);
  }
  return param_2;
}



