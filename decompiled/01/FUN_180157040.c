// FUN_180157040 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180157040 */

char * FUN_180157040(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  int *piVar2;
  byte *pbVar3;
  uint uVar4;
  int *piVar5;
  undefined1 local_res8 [8];
  
  FUN_18015af80(param_1 + 10,*(undefined1 *)((longlong)param_1 + 0x14));
  piVar5 = (int *)*param_2;
  piVar2 = (int *)param_2[1];
  while( true ) {
    if (piVar5 == piVar2) {
      return (char *)0x1;
    }
    param_1[4] = param_1[4] + 1;
    param_1[5] = param_1[5] + 1;
    if (*(char *)(param_1 + 3) == '\0') {
      pbVar3 = (byte *)*param_1;
      if (pbVar3 == (byte *)param_1[1]) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (uint)*pbVar3;
        *param_1 = pbVar3 + 1;
      }
      *(uint *)((longlong)param_1 + 0x14) = uVar4;
    }
    else {
      *(undefined1 *)(param_1 + 3) = 0;
    }
    if (*(int *)((longlong)param_1 + 0x14) != -1) {
      local_res8[0] = (undefined1)*(int *)((longlong)param_1 + 0x14);
      FUN_180157850(param_1 + 7,local_res8);
    }
    iVar1 = *(int *)((longlong)param_1 + 0x14);
    if (iVar1 == 10) {
      param_1[6] = param_1[6] + 1;
      param_1[5] = 0;
    }
    if ((iVar1 < *piVar5) || (piVar5[1] < iVar1)) break;
    FUN_18015af80(param_1 + 10);
    piVar5 = piVar5 + 2;
  }
  param_1[0xe] = "invalid string: ill-formed UTF-8 byte";
  return "control character U+001F (US) must be escaped to \\u001F";
}



