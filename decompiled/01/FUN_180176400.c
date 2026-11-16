// FUN_180176400 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180176400 */

bool FUN_180176400(undefined8 param_1,undefined8 *param_2)

{
  byte *pbVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined1 local_18 [16];
  
  puVar5 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar5 = (undefined8 *)*param_2;
  }
  uVar3 = 0;
  uVar4 = 0xcbf29ce484222325;
  if (param_2[2] != 0) {
    do {
      pbVar1 = (byte *)((longlong)puVar5 + uVar3);
      uVar3 = uVar3 + 1;
      uVar4 = (uVar4 ^ *pbVar1) * 0x100000001b3;
    } while (uVar3 < (ulonglong)param_2[2]);
  }
  lVar2 = FUN_180177b00(param_1,local_18,param_2,uVar4);
  return *(longlong *)(lVar2 + 8) != 0;
}



