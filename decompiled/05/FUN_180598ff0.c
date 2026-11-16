// FUN_180598ff0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180598ff0 */

undefined8 FUN_180598ff0(longlong param_1,int param_2,uint param_3,undefined8 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  *param_4 = 0;
  lVar1 = *(longlong *)(param_1 + 0x2a8);
  if (lVar1 != 0) {
    param_3 = param_2 << 0x10 | param_3;
    uVar5 = *(ulonglong *)(lVar1 + 0x30);
    uVar6 = (uVar5 - 0x10) + (ulonglong)*(uint *)(lVar1 + 0x38) * 0x10;
    if (uVar5 <= uVar6) {
      while( true ) {
        lVar2 = ((longlong)(uVar6 - uVar5) >> 4) - ((longlong)(uVar6 - uVar5) >> 0x3f) >> 1;
        lVar1 = uVar5 + lVar2 * 0x10;
        uVar4 = *(int *)(uVar5 + lVar2 * 0x10) << 0x10 | *(uint *)(lVar1 + 4);
        if (uVar4 == param_3) break;
        uVar3 = lVar1 + 0x10;
        if (param_3 <= uVar4) {
          uVar3 = uVar5;
          uVar6 = lVar1 - 0x10;
        }
        uVar5 = uVar3;
        if (uVar6 < uVar3) {
          return 0;
        }
      }
      *(undefined4 *)param_4 = *(undefined4 *)(lVar1 + 8);
      *(undefined4 *)((longlong)param_4 + 4) = *(undefined4 *)(lVar1 + 0xc);
    }
  }
  return 0;
}



