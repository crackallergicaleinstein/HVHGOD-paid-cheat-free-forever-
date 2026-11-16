// FUN_1800f3aa0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800f3aa0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800f3aa0(char *param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  undefined8 uVar4;
  undefined1 auStack_d8 [32];
  ulonglong local_b8;
  ulonglong uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulonglong local_80;
  ulonglong uStack_78;
  undefined1 local_70 [56];
  ulonglong local_38;
  undefined8 *puStack_30;
  ulonglong local_28;
  
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_d8;
  if ((*param_1 == '\x01') &&
     (puVar1 = (ulonglong *)*param_2, (param_2[1] - (longlong)puVar1) - 0x30 < 0x18)) {
    puVar2 = (ulonglong *)puVar1[2];
    puVar3 = puVar1;
    if (puVar2 != (ulonglong *)0x0) {
      puVar3 = puVar2;
    }
    if ((char)*puVar3 == '\x03') {
      if (puVar2 == (ulonglong *)0x0) {
        local_38 = *puVar1;
        puStack_30 = (undefined8 *)puVar1[1];
        *(char *)puVar1 = '\0';
        puVar1[1] = 0;
      }
      else {
        FUN_1800f4a50(&local_38);
      }
      if (puVar1[5] == 0) {
        local_b8 = puVar1[3];
        uStack_b0 = puVar1[4];
        *(char *)(puVar1 + 3) = '\0';
        puVar1[4] = 0;
      }
      else {
        FUN_1800f4a50(&local_b8);
      }
      if (((char)local_38 == '\x03') && (puStack_30 != (undefined8 *)0x0)) {
        local_a0 = *puStack_30;
        uStack_98 = puStack_30[1];
        uStack_90 = puStack_30[2];
        uStack_88 = puStack_30[3];
        *(undefined1 *)puStack_30 = 0;
        puStack_30[2] = 0;
        puStack_30[3] = 0xf;
        local_80 = local_b8;
        uStack_78 = uStack_b0;
        local_b8 = local_b8 & 0xffffffffffffff00;
        uStack_b0 = 0;
        FUN_180113470(param_1,&local_a0);
        FUN_1800aab30(&local_80);
        FUN_18015c010(&local_a0);
        FUN_1801409d0(&uStack_b0,local_b8 & 0xff);
        FUN_1801409d0(&puStack_30,local_38 & 0xff);
      }
      local_a8 = FUN_180112a50(&local_38);
      uVar4 = FUN_1801141f0(&local_a0);
      FUN_1800f6ca0(local_70,0x12f,uVar4);
                    /* WARNING: Subroutine does not return */
      FUN_180606630(local_70,&DAT_1808d1050);
    }
  }
  local_b8 = *param_2;
  uStack_b0 = param_2[1];
  uVar4 = FUN_1800f4e90(&local_38,&local_b8,1,2);
  FUN_1800f3c60(param_1,uVar4);
  FUN_1801409d0(&puStack_30,local_38 & 0xff);
}



