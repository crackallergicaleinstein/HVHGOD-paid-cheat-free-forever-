// FUN_1805c78e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805c78e0 */

void FUN_1805c78e0(longlong param_1,undefined8 param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_3 == '\0') {
    iVar1 = (**(code **)(param_1 + 0x2a0))(param_1,0x68686561,param_2,0);
    if (iVar1 != 0) {
      return;
    }
    lVar2 = 0x138;
    lVar4 = 0x160;
    lVar3 = 0x168;
  }
  else {
    iVar1 = (**(code **)(param_1 + 0x2a0))(param_1,0x76686561);
    if (iVar1 != 0) {
      return;
    }
    lVar2 = 0x198;
    lVar4 = 0x1c0;
    lVar3 = 0x1c8;
  }
  iVar1 = FUN_180578280(param_2,&DAT_180684fe0,lVar2 + param_1);
  if (iVar1 == 0) {
    *(undefined8 *)(lVar4 + param_1) = 0;
    *(undefined8 *)(lVar3 + param_1) = 0;
  }
  return;
}



