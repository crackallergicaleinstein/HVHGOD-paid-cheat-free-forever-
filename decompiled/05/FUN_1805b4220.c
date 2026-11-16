// FUN_1805b4220 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805b4220 */

undefined8 FUN_1805b4220(longlong *param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  pcVar2 = *(code **)(*(longlong *)(lVar1 + 0x298) + 8);
  if (pcVar2 == (code *)0x0) {
    return 7;
  }
  uVar3 = (*pcVar2)(*(undefined8 *)(lVar1 + 0x98),param_1,*(undefined4 *)(lVar1 + 0x240),
                    FUN_1805bd3a0,0,lVar1);
  return uVar3;
}



