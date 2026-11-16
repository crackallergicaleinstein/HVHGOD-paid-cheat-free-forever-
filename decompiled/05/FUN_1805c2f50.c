// FUN_1805c2f50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805c2f50 */

void FUN_1805c2f50(longlong param_1,undefined8 param_2)

{
  int iVar1;
  ushort *puVar2;
  
  iVar1 = (**(code **)(param_1 + 0x2a0))(param_1,0x4f532f32,param_2,0);
  if (iVar1 == 0) {
    puVar2 = (ushort *)(param_1 + 0x208);
    iVar1 = FUN_180578280(param_2,&DAT_1806849e0,puVar2);
    if (iVar1 == 0) {
      *(undefined2 *)(param_1 + 0x26c) = 0xffff;
      *(undefined8 *)(param_1 + 600) = 0;
      *(undefined8 *)(param_1 + 0x260) = 0;
      *(undefined4 *)(param_1 + 0x268) = 0;
      if (*puVar2 != 0) {
        iVar1 = FUN_180578280(param_2,&DAT_180684ee8,puVar2);
        if ((iVar1 == 0) && (1 < *puVar2)) {
          iVar1 = FUN_180578280(param_2,&DAT_180684ef8,puVar2);
          if ((iVar1 == 0) && (4 < *puVar2)) {
            FUN_180578280(param_2,&DAT_180684f18,puVar2);
          }
        }
      }
    }
  }
  return;
}



