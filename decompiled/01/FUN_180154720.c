// FUN_180154720 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180154720 */

undefined4 FUN_180154720(undefined8 *param_1,longlong param_2,ulonglong param_3,undefined4 param_4)

{
  byte *pbVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined1 local_res18 [8];
  
  uVar3 = 1;
  if (1 < param_3) {
    uVar2 = *(uint *)((longlong)param_1 + 0x14);
    do {
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
        local_res18[0] = (undefined1)uVar2;
        FUN_180157850(param_1 + 7,local_res18);
      }
      uVar2 = *(uint *)((longlong)param_1 + 0x14);
      if (uVar2 == 10) {
        param_1[6] = param_1[6] + 1;
        param_1[5] = 0;
      }
      if ((char)uVar2 != *(char *)(uVar3 + param_2)) {
        param_1[0xe] = "invalid literal";
        return 0xe;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < param_3);
  }
  return param_4;
}



