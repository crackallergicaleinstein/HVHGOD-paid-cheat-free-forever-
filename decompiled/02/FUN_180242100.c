// FUN_180242100 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180242100 */

void FUN_180242100(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 local_18 [16];
  
  puVar2 = (undefined8 *)
           FUN_1802770e0(param_1,local_18,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 8));
  puVar1 = *(undefined8 **)(param_1 + 8);
  *puVar1 = *puVar2;
  *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar2 + 1);
  uVar4 = FUN_180277c60();
  *(int *)(*(longlong *)(param_1 + 0x18) + 0x48) = (int)uVar4;
  uVar3 = FUN_180277ea0(uVar4,1);
  *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x44) = uVar3;
  return;
}



