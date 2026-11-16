// FUN_1800d3890 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800d3890 */

void FUN_1800d3890(undefined8 param_1,char *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong local_68;
  longlong local_60;
  undefined1 local_48 [72];
  
  if (*param_2 == '\x03') {
    plVar1 = *(longlong **)(param_2 + 8);
    if (plVar1 == (longlong *)0x0) {
      FUN_180112a50(param_2);
      uVar2 = FUN_1801141f0(&local_68);
      FUN_1800f6ca0(local_48,0x12f,uVar2);
                    /* WARNING: Subroutine does not return */
      FUN_180606630(local_48,&DAT_1808d1050);
    }
    local_68 = (longlong)plVar1;
    if (0xf < (ulonglong)plVar1[3]) {
      local_68 = *plVar1;
    }
    local_60 = plVar1[2];
  }
  else {
    local_60 = 0;
    local_68 = 0;
  }
  FUN_1800d3530(param_1,&local_68);
  return;
}



