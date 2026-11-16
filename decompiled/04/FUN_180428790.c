// FUN_180428790 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180428790 */

void FUN_180428790(longlong param_1,longlong param_2,float param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  
  plVar1 = *(longlong **)(param_2 + 0x140);
  do {
    if (plVar1 == (longlong *)0x0) {
      return;
    }
    *(undefined4 *)(param_1 + 0x28) = 0;
    fVar11 = param_3 * ((float *)*plVar1)[1];
    fVar12 = param_3 * *(float *)*plVar1;
    iVar10 = 0;
    if (*(int *)(param_1 + 0x2c) < 1) {
      uVar6 = SUB168(ZEXT816(0x20) * ZEXT816(0x40),0);
      *(undefined4 *)(param_1 + 0x2c) = 0x40;
      if (SUB168(ZEXT816(0x20) * ZEXT816(0x40),8) != 0) {
        uVar6 = 0xffffffffffffffff;
      }
      lVar7 = _realloc_base(*(undefined8 *)(param_1 + 0x20),uVar6);
      *(longlong *)(param_1 + 0x20) = lVar7;
      if (lVar7 != 0) {
        iVar10 = *(int *)(param_1 + 0x28);
        goto LAB_18042882f;
      }
    }
    else {
LAB_18042882f:
      lVar7 = *(longlong *)(param_1 + 0x20);
      lVar9 = (longlong)iVar10 * 0x20;
      *(float *)(lVar9 + lVar7) = fVar12;
      *(float *)(lVar9 + 4 + lVar7) = fVar11;
      *(undefined1 *)(lVar9 + 0x1c + lVar7) = 0;
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    }
    iVar10 = 0;
    if (0 < (int)plVar1[1] + -1) {
      lVar7 = 0;
      do {
        lVar9 = *plVar1;
        FUN_1804284d0(param_1,param_3 * *(float *)(lVar7 + lVar9),
                      param_3 * *(float *)(lVar7 + 4 + lVar9),
                      param_3 * *(float *)(lVar7 + 8 + lVar9),
                      param_3 * *(float *)(lVar7 + 0xc + lVar9),
                      param_3 * *(float *)(lVar7 + 0x10 + lVar9),
                      param_3 * *(float *)(lVar7 + 0x14 + lVar9),
                      param_3 * *(float *)(lVar7 + 0x18 + lVar9),
                      param_3 * *(float *)(lVar7 + 0x1c + lVar9),0,0);
        lVar7 = lVar7 + 0x18;
        iVar10 = iVar10 + 3;
      } while (iVar10 < (int)plVar1[1] + -1);
    }
    iVar10 = *(int *)(param_1 + 0x28);
    fVar11 = param_3 * ((float *)*plVar1)[1];
    fVar12 = param_3 * *(float *)*plVar1;
    if ((iVar10 < 1) ||
       (fVar4 = fVar11 - *(float *)((longlong)iVar10 * 0x20 + -0x1c + *(longlong *)(param_1 + 0x20))
       , fVar5 = fVar12 - *(float *)((longlong)iVar10 * 0x20 + -0x20 + *(longlong *)(param_1 + 0x20)
                                    ),
       *(float *)(param_1 + 0xc) * *(float *)(param_1 + 0xc) <= fVar4 * fVar4 + fVar5 * fVar5)) {
      iVar8 = *(int *)(param_1 + 0x2c);
      if (iVar8 < iVar10 + 1) {
        if (iVar8 < 1) {
          iVar8 = 0x40;
        }
        else {
          iVar8 = iVar8 * 2;
        }
        *(int *)(param_1 + 0x2c) = iVar8;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = (longlong)iVar8;
        uVar6 = SUB168(ZEXT816(0x20) * auVar3,0);
        if (SUB168(ZEXT816(0x20) * auVar3,8) != 0) {
          uVar6 = 0xffffffffffffffff;
        }
        lVar7 = _realloc_base(*(undefined8 *)(param_1 + 0x20),uVar6);
        *(longlong *)(param_1 + 0x20) = lVar7;
        if (lVar7 == 0) goto LAB_18042897b;
      }
      lVar7 = *(longlong *)(param_1 + 0x20);
      lVar9 = (longlong)*(int *)(param_1 + 0x28) * 0x20;
      *(float *)(lVar9 + lVar7) = fVar12;
      *(float *)(lVar9 + 4 + lVar7) = fVar11;
      *(undefined1 *)(lVar9 + 0x1c + lVar7) = 0;
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    }
LAB_18042897b:
    iVar10 = 0;
    if (0 < *(int *)(param_1 + 0x28)) {
      lVar7 = (longlong)(*(int *)(param_1 + 0x28) + -1) << 5;
      lVar9 = 0;
      do {
        lVar2 = *(longlong *)(param_1 + 0x20);
        FUN_1804283c0(param_1,*(undefined4 *)(lVar7 + lVar2),*(undefined4 *)(lVar7 + 4 + lVar2),
                      *(undefined4 *)(lVar9 + lVar2),*(undefined4 *)(lVar9 + 4 + lVar2));
        iVar10 = iVar10 + 1;
        lVar7 = lVar9;
        lVar9 = lVar9 + 0x20;
      } while (iVar10 < *(int *)(param_1 + 0x28));
    }
    plVar1 = (longlong *)plVar1[4];
  } while( true );
}



