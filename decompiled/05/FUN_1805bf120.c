// FUN_1805bf120 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805bf120 */

int FUN_1805bf120(uint *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  int local_res8 [2];
  
  uVar3 = *param_1 + 1;
  if (param_1[1] < uVar3) {
    uVar4 = *param_1 + 8 & 0xfffffff8;
    local_res8[0] = 0;
    uVar2 = FUN_18057ad10(param_2,0x18,param_1[1],uVar4,*(undefined8 *)(param_1 + 2),local_res8);
    *(undefined8 *)(param_1 + 2) = uVar2;
    if (local_res8[0] != 0) {
      *param_3 = 0;
      return local_res8[0];
    }
    param_1[1] = uVar4;
  }
  uVar4 = *(uint *)(*(longlong *)(param_1 + 2) + -0x14 + (ulonglong)uVar3 * 0x18);
  puVar1 = (undefined4 *)(*(longlong *)(param_1 + 2) + -0x18 + (ulonglong)uVar3 * 0x18);
  *puVar1 = 0;
  puVar1[4] = 0;
  if (uVar4 != 0) {
    FUN_18063ab10(*(undefined8 *)(puVar1 + 2),0,uVar4 >> 3);
  }
  *param_1 = uVar3;
  *param_3 = puVar1;
  return 0;
}



