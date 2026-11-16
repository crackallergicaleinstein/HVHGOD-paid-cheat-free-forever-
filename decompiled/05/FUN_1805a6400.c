// FUN_1805a6400 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805a6400 */

undefined8
FUN_1805a6400(longlong param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
             undefined4 *param_5)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x80);
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x188);
  }
  puVar1 = (undefined4 *)(param_1 + 0x18c);
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *puVar1;
  }
  uVar3 = 0x10000;
  uVar4 = 0x10000;
  if (lVar2 != 0) {
    uVar3 = FUN_180573310((ulonglong)*(ushort *)(lVar2 + 0x18) << 6,*puVar1);
    uVar4 = FUN_180573310((ulonglong)*(ushort *)(lVar2 + 0x1a) << 6,*puVar1);
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = uVar3;
  }
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = uVar4;
  }
  return 0;
}



