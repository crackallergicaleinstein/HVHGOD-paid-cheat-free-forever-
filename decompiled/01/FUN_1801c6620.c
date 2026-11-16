// FUN_1801c6620 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801c6620 */

void FUN_1801c6620(char *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 local_res8;
  undefined1 local_68 [32];
  undefined1 local_48 [64];
  
  if (*param_1 == '\0') {
    *param_1 = '\x02';
    FUN_180111d10(&local_res8,2);
    *(undefined8 *)(param_1 + 8) = local_res8;
  }
  else if (*param_1 != '\x02') {
    local_res8 = FUN_180112a50();
    uVar3 = FUN_1800f6bd0(local_68,"cannot use push_back() with ",&local_res8);
    FUN_1800f6ca0(local_48,0x134,uVar3);
                    /* WARNING: Subroutine does not return */
    FUN_180606630(local_48,&DAT_1808d1050);
  }
  lVar1 = *(longlong *)(param_1 + 8);
  lVar2 = *(longlong *)(lVar1 + 8);
  if (lVar2 == *(longlong *)(lVar1 + 0x10)) {
    FUN_1801c7210(lVar1,lVar2,param_2);
    return;
  }
  FUN_1800f4a50(lVar2,param_2);
  *(longlong *)(lVar1 + 8) = *(longlong *)(lVar1 + 8) + 0x10;
  return;
}



