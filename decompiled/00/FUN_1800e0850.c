// FUN_1800e0850 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800e0850 */

undefined1 FUN_1800e0850(undefined8 param_1,char *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 local_res8;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [64];
  
  if (*param_2 == '\x01') {
    plVar1 = *(longlong **)(param_2 + 8);
    local_res8 = param_1;
    plVar2 = (longlong *)FUN_1800f6de0(plVar1,&local_res8,&DAT_1806bbee0);
    if (*plVar2 != *plVar1) {
      local_68 = (undefined1  [16])0x0;
      local_58 = (undefined1  [16])0x0;
      FUN_18015ba30(local_68,&DAT_1806bbee0,1);
      pcVar3 = (char *)FUN_180113610(param_2,local_68);
      FUN_18015c010(local_68);
      if (*pcVar3 == '\x04') {
        local_68 = (undefined1  [16])0x0;
        local_58 = (undefined1  [16])0x0;
        FUN_18015ba30(local_68,&DAT_1806bbee0,1);
        pcVar3 = (char *)FUN_180113610(param_2,local_68);
        FUN_18015c010(local_68);
        if (*pcVar3 != '\x04') {
          local_res8 = FUN_180112a50(pcVar3);
          uVar4 = FUN_180156f00(local_68);
          FUN_1800f6ca0(local_48,0x12e,uVar4);
                    /* WARNING: Subroutine does not return */
          FUN_180606630(local_48,&DAT_1808d1050);
        }
        if (pcVar3[8] != '\0') {
          return 1;
        }
      }
    }
  }
  return 0;
}



