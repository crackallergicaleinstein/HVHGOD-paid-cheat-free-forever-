// FUN_1805abac0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805abac0 */

undefined8 FUN_1805abac0(undefined4 *param_1,undefined8 param_2)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  
  iVar2 = FUN_1805788b0(param_2,*param_1);
  if (((iVar2 == 0) && (iVar2 = FUN_180578280(param_2,&DAT_180673630,param_1 + 1), iVar2 == 0)) &&
     ((sVar1 = *(short *)(param_1 + 1), sVar1 == 0x200 || (sVar1 == 0x300)))) {
    uVar3 = 0x76;
    if (sVar1 == 0x300) {
      uVar3 = 0x94;
    }
    if (uVar3 <= (uint)param_1[2]) {
      if (sVar1 == 0x200) {
        *(undefined8 *)(param_1 + 0x21) = 0;
        param_1[0x23] = 0;
      }
      if ((*(byte *)(param_1 + 0x12) & 1) == 0) {
        uVar4 = FUN_1805788b0(param_2,*param_1);
        if ((int)uVar4 == 0) {
          uVar4 = FUN_180577d80(param_2,param_1[2],param_1 + 0x28);
          return uVar4;
        }
        return uVar4;
      }
    }
  }
  return 2;
}



