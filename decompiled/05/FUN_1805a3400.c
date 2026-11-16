// FUN_1805a3400 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805a3400 */

ulonglong FUN_1805a3400(longlong *param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1805772f0(*param_1);
  if ((int)uVar3 == 0) {
    puVar1 = *(undefined8 **)(*param_1 + 0x1d8);
    lVar4 = FUN_180573a00(*(undefined8 *)(*(longlong *)(*param_1 + 0x90) + 8),"pshinter");
    if (((lVar4 != 0) && (puVar1 != (undefined8 *)0x0)) &&
       (pcVar2 = (code *)*puVar1, pcVar2 != (code *)0x0)) {
      lVar4 = (*pcVar2)(lVar4);
      if (lVar4 != 0) {
        (**(code **)(lVar4 + 8))
                  (*(undefined8 *)param_1[7],*(undefined4 *)((longlong)param_1 + 0x1c),
                   (int)param_1[4],0,0);
      }
    }
    uVar3 = uVar3 & 0xffffffff;
  }
  return uVar3;
}



