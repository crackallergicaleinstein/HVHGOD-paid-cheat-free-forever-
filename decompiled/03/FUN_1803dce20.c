// FUN_1803dce20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803dce20 */

ulonglong FUN_1803dce20(undefined8 param_1,undefined8 *param_2)

{
  byte *pbVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  
  puVar3 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar3 = (undefined8 *)*param_2;
  }
  uVar2 = 0;
  uVar4 = 0xcbf29ce484222325;
  if (param_2[2] != 0) {
    do {
      pbVar1 = (byte *)((longlong)puVar3 + uVar2);
      uVar2 = uVar2 + 1;
      uVar4 = (uVar4 ^ *pbVar1) * 0x100000001b3;
    } while (uVar2 < (ulonglong)param_2[2]);
  }
  return (((((ulonglong)*(byte *)(param_2 + 4) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
           (ulonglong)*(byte *)((longlong)param_2 + 0x21)) * 0x100000001b3 ^
          (ulonglong)*(byte *)((longlong)param_2 + 0x22)) * 0x100000001b3 ^
         (ulonglong)*(byte *)((longlong)param_2 + 0x23)) * 0x20000000366 ^ uVar4;
}



