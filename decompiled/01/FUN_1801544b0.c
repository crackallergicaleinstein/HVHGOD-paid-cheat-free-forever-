// FUN_1801544b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801544b0 */

void FUN_1801544b0(undefined8 *param_1)

{
  byte *pbVar1;
  uint uVar2;
  undefined1 local_res8 [8];
  
  uVar2 = *(uint *)((longlong)param_1 + 0x14);
  do {
    while( true ) {
      param_1[4] = param_1[4] + 1;
      param_1[5] = param_1[5] + 1;
      if (*(char *)(param_1 + 3) == '\0') {
        pbVar1 = (byte *)*param_1;
        if (pbVar1 == (byte *)param_1[1]) {
          uVar2 = 0xffffffff;
        }
        else {
          uVar2 = (uint)*pbVar1;
          *param_1 = pbVar1 + 1;
        }
        *(uint *)((longlong)param_1 + 0x14) = uVar2;
      }
      else {
        *(undefined1 *)(param_1 + 3) = 0;
      }
      if (uVar2 != 0xffffffff) {
        local_res8[0] = (undefined1)uVar2;
        FUN_180157850(param_1 + 7,local_res8);
      }
      uVar2 = *(uint *)((longlong)param_1 + 0x14);
      if (uVar2 != 10) break;
      param_1[6] = param_1[6] + 1;
      param_1[5] = 0;
    }
  } while (((uVar2 == 0x20) || (uVar2 == 9)) || (uVar2 == 0xd));
  return;
}



