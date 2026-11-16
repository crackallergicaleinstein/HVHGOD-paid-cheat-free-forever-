// FUN_1805c2b30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805c2b30 */

void FUN_1805c2b30(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_1 + 0x170);
  iVar2 = (**(code **)(param_1 + 0x2a0))(param_1,0x6d617870,param_2,0);
  if (iVar2 == 0) {
    iVar2 = FUN_180578280(param_2,&DAT_180684908,piVar1);
    if (iVar2 == 0) {
      *(undefined8 *)(param_1 + 0x176) = 0;
      *(undefined8 *)(param_1 + 0x17e) = 0;
      *(undefined8 *)(param_1 + 0x186) = 0;
      *(undefined2 *)(param_1 + 0x18e) = 0;
      if (0xffff < *piVar1) {
        iVar2 = FUN_180578280(param_2,&DAT_180684918,piVar1);
        if (iVar2 == 0) {
          if (*(ushort *)(param_1 + 0x184) < 0x40) {
            *(undefined2 *)(param_1 + 0x184) = 0x40;
          }
          if (0xfffb < *(ushort *)(param_1 + 0x180)) {
            *(undefined2 *)(param_1 + 0x180) = 0xfffb;
          }
        }
      }
    }
  }
  return;
}



