// FUN_1804272d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804272d0 */

void FUN_1804272d0(longlong param_1,longlong *param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  
  iVar9 = 0;
  lVar10 = (longlong)*(int *)(param_1 + 0x9c00) * 0x138;
  *(undefined8 *)(param_1 + 300 + lVar10) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x128 + lVar10) = 0;
  lVar3 = *param_2;
  if (lVar3 != 0) {
    lVar5 = 0;
    plVar6 = param_2;
    do {
      FUN_180423a20(param_1,lVar3,plVar6[1]);
      lVar5 = lVar5 + 0x10;
      lVar3 = *(longlong *)(lVar5 + (longlong)param_2);
      plVar6 = (longlong *)(lVar5 + (longlong)param_2);
    } while (lVar3 != 0);
  }
  lVar3 = *(longlong *)(param_1 + 0x9c28);
  if (lVar3 != 0) {
    iVar11 = *(int *)(lVar3 + 200);
    *(int *)(lVar3 + 200) = iVar11 + 1;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = (longlong)iVar11 + 1;
    uVar4 = SUB168(ZEXT816(8) * auVar2,0);
    if (SUB168(ZEXT816(8) * auVar2,8) != 0) {
      uVar4 = 0xffffffffffffffff;
    }
    lVar5 = _realloc_base(*(undefined8 *)(lVar3 + 0xd0),uVar4);
    *(longlong *)(lVar3 + 0xd0) = lVar5;
    if (lVar5 != 0) {
      iVar8 = *(int *)(lVar3 + 200) + -1;
      iVar11 = iVar8;
      if (0 < iVar8) {
        lVar7 = 0;
        do {
          if (*(float *)(param_1 + 0x130 + lVar10) < *(float *)(lVar7 + 4 + lVar5)) {
            iVar11 = iVar9;
            if (iVar9 != iVar8) {
              for (lVar5 = (longlong)iVar8; iVar9 < lVar5; lVar5 = lVar5 + -1) {
                *(undefined8 *)(*(longlong *)(lVar3 + 0xd0) + lVar5 * 8) =
                     *(undefined8 *)(*(longlong *)(lVar3 + 0xd0) + -8 + lVar5 * 8);
              }
            }
            break;
          }
          iVar9 = iVar9 + 1;
          lVar7 = lVar7 + 8;
        } while (iVar9 < iVar8);
      }
      uVar1 = *(uint *)(param_1 + 0x128 + lVar10);
      lVar3 = *(longlong *)(lVar3 + 0xd0);
      lVar5 = (longlong)iVar11;
      *(uint *)(lVar3 + lVar5 * 8) = uVar1;
      *(uint *)(lVar3 + lVar5 * 8) =
           (int)(longlong)(*(float *)(param_1 + 300 + lVar10) * 255.0) << 0x18 | uVar1;
      *(undefined4 *)(lVar3 + 4 + lVar5 * 8) = *(undefined4 *)(param_1 + 0x130 + lVar10);
    }
  }
  return;
}



