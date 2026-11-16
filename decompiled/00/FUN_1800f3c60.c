// FUN_1800f3c60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800f3c60 */

void FUN_1800f3c60(char *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
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
  puVar2 = *(undefined8 **)(lVar1 + 8);
  if (puVar2 == *(undefined8 **)(lVar1 + 0x10)) {
    FUN_18014fc20(lVar1,puVar2,param_2);
    return;
  }
  uVar3 = param_2[1];
  *puVar2 = *param_2;
  puVar2[1] = uVar3;
  *(undefined1 *)param_2 = 0;
  param_2[1] = 0;
  *(longlong *)(lVar1 + 8) = *(longlong *)(lVar1 + 8) + 0x10;
  return;
}



