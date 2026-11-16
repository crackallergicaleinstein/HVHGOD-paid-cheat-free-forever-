// FUN_180154fc0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180154fc0 */

char * FUN_180154fc0(undefined8 *param_1)

{
  int iVar1;
  byte *pbVar2;
  longlong lVar3;
  uint uVar4;
  byte local_res8 [8];
  
  param_1[4] = param_1[4] + 1;
  param_1[5] = param_1[5] + 1;
  if (*(char *)(param_1 + 3) == '\0') {
    pbVar2 = (byte *)*param_1;
    if (pbVar2 == (byte *)param_1[1]) {
      uVar4 = 0xffffffff;
    }
    else {
      uVar4 = (uint)*pbVar2;
      *param_1 = pbVar2 + 1;
    }
    *(uint *)((longlong)param_1 + 0x14) = uVar4;
  }
  else {
    *(undefined1 *)(param_1 + 3) = 0;
  }
  if (*(int *)((longlong)param_1 + 0x14) != -1) {
    local_res8[0] = (byte)*(int *)((longlong)param_1 + 0x14);
    FUN_180157850(param_1 + 7,local_res8);
  }
  uVar4 = *(uint *)((longlong)param_1 + 0x14);
  if (uVar4 == 10) {
    param_1[6] = param_1[6] + 1;
    param_1[0xe] = "invalid comment; expecting \'/\' or \'*\' after \'/\'";
    param_1[5] = 0;
    return "";
  }
  if (uVar4 != 0x2a) {
    if (uVar4 != 0x2f) {
      param_1[0xe] = "invalid comment; expecting \'/\' or \'*\' after \'/\'";
      return "";
    }
    while( true ) {
      param_1[4] = param_1[4] + 1;
      param_1[5] = param_1[5] + 1;
      if (*(char *)(param_1 + 3) == '\0') {
        pbVar2 = (byte *)*param_1;
        if (pbVar2 == (byte *)param_1[1]) {
          uVar4 = 0xffffffff;
        }
        else {
          uVar4 = (uint)*pbVar2;
          *param_1 = pbVar2 + 1;
        }
        *(uint *)((longlong)param_1 + 0x14) = uVar4;
      }
      else {
        *(undefined1 *)(param_1 + 3) = 0;
      }
      if (uVar4 != 0xffffffff) {
        local_res8[0] = (byte)uVar4;
        FUN_180157850(param_1 + 7,local_res8);
      }
      uVar4 = *(uint *)((longlong)param_1 + 0x14);
      if (uVar4 == 10) break;
      if ((uVar4 + 1 < 2) || (uVar4 == 0xd)) {
        return (char *)0x1;
      }
    }
    param_1[6] = param_1[6] + 1;
    param_1[5] = 0;
    return (char *)0x1;
  }
  do {
    do {
      param_1[4] = param_1[4] + 1;
      param_1[5] = param_1[5] + 1;
      if (*(char *)(param_1 + 3) == '\0') {
        pbVar2 = (byte *)*param_1;
        if (pbVar2 == (byte *)param_1[1]) {
          uVar4 = 0xffffffff;
        }
        else {
          uVar4 = (uint)*pbVar2;
          *param_1 = pbVar2 + 1;
        }
        *(uint *)((longlong)param_1 + 0x14) = uVar4;
      }
      else {
        *(undefined1 *)(param_1 + 3) = 0;
      }
      if (*(int *)((longlong)param_1 + 0x14) != -1) {
        local_res8[0] = (byte)*(int *)((longlong)param_1 + 0x14);
        FUN_180157850(param_1 + 7,local_res8);
      }
      iVar1 = *(int *)((longlong)param_1 + 0x14);
      if (iVar1 == 10) {
        param_1[6] = param_1[6] + 1;
        param_1[5] = 0;
      }
      else if (iVar1 + 1U < 2) {
        param_1[0xe] = "invalid comment; missing closing \'*/\'";
        return "";
      }
    } while (iVar1 != 0x2a);
    param_1[4] = param_1[4] + 1;
    param_1[5] = param_1[5] + 1;
    if (*(char *)(param_1 + 3) == '\0') {
      pbVar2 = (byte *)*param_1;
      if (pbVar2 != (byte *)param_1[1]) {
        local_res8[0] = *pbVar2;
        *param_1 = pbVar2 + 1;
        *(uint *)((longlong)param_1 + 0x14) = (uint)local_res8[0];
        goto LAB_180155188;
      }
      *(undefined4 *)((longlong)param_1 + 0x14) = 0xffffffff;
    }
    else {
      *(undefined1 *)(param_1 + 3) = 0;
      local_res8[0] = 0x2a;
LAB_180155188:
      FUN_180157850(param_1 + 7,local_res8);
    }
    iVar1 = *(int *)((longlong)param_1 + 0x14);
    if (iVar1 == 10) {
      param_1[6] = param_1[6] + 1;
      param_1[5] = 0;
    }
    else if (iVar1 == 0x2f) {
      return (char *)0x1;
    }
    param_1[4] = param_1[4] + -1;
    *(undefined1 *)(param_1 + 3) = 1;
    if (param_1[5] == 0) {
      lVar3 = param_1[6];
      if (lVar3 != 0) {
        param_1[6] = lVar3 + -1;
      }
    }
    else {
      param_1[5] = param_1[5] + -1;
    }
    if (iVar1 != -1) {
      param_1[8] = param_1[8] + -1;
    }
  } while( true );
}



