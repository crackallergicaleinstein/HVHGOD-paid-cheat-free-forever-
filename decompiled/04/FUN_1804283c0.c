// FUN_1804283c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804283c0 */

void FUN_1804283c0(longlong param_1,undefined4 param_2,float param_3,undefined4 param_4,
                  float param_5)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  
  if (param_3 != param_5) {
    iVar4 = *(int *)(param_1 + 0x1c);
    if (iVar4 < *(int *)(param_1 + 0x18) + 1) {
      if (iVar4 < 1) {
        iVar4 = 0x40;
      }
      else {
        iVar4 = iVar4 * 2;
      }
      *(int *)(param_1 + 0x1c) = iVar4;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = (longlong)iVar4;
      uVar2 = SUB168(ZEXT816(0x20) * auVar1,0);
      if (SUB168(ZEXT816(0x20) * auVar1,8) != 0) {
        uVar2 = 0xffffffffffffffff;
      }
      lVar3 = _realloc_base(*(undefined8 *)(param_1 + 0x10),uVar2);
      *(longlong *)(param_1 + 0x10) = lVar3;
      if (lVar3 == 0) {
        return;
      }
    }
    lVar3 = *(longlong *)(param_1 + 0x10);
    lVar5 = (longlong)*(int *)(param_1 + 0x18) * 0x20;
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    if (param_5 <= param_3) {
      *(undefined4 *)(lVar5 + lVar3) = param_4;
      *(float *)(lVar5 + 4 + lVar3) = param_5;
      *(undefined4 *)(lVar5 + 8 + lVar3) = param_2;
      *(float *)(lVar5 + 0xc + lVar3) = param_3;
      *(undefined4 *)(lVar5 + 0x10 + lVar3) = 0xffffffff;
    }
    else {
      *(undefined4 *)(lVar5 + lVar3) = param_2;
      *(float *)(lVar5 + 4 + lVar3) = param_3;
      *(undefined4 *)(lVar5 + 8 + lVar3) = param_4;
      *(float *)(lVar5 + 0xc + lVar3) = param_5;
      *(undefined4 *)(lVar5 + 0x10 + lVar3) = 1;
    }
  }
  return;
}



