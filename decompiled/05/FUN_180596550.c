// FUN_180596550 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180596550 */

ulonglong FUN_180596550(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  puVar1 = *(undefined8 **)(*param_1 + 0x300);
  lVar3 = FUN_180573a00(*(undefined8 *)(*(longlong *)(*param_1 + 0x90) + 8),"pshinter");
  if (((lVar3 == 0) || (puVar1 == (undefined8 *)0x0)) ||
     (pcVar2 = (code *)*puVar1, pcVar2 == (code *)0x0)) {
    lVar3 = 0;
  }
  else {
    lVar3 = (*pcVar2)(lVar3);
  }
  uVar4 = FUN_1805772f0(*param_1,param_2);
  if (((int)uVar4 == 0) && (lVar3 != 0)) {
    (**(code **)(lVar3 + 8))
              (*(undefined8 *)param_1[7],*(undefined4 *)((longlong)param_1 + 0x1c),(int)param_1[4],0
               ,0);
    uVar4 = uVar4 & 0xffffffff;
  }
  return uVar4;
}



