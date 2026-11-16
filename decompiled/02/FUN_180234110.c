// FUN_180234110 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180234110 */

undefined8 *
FUN_180234110(undefined8 *param_1,int param_2,undefined8 param_3,undefined8 param_4,int param_5)

{
  double dVar1;
  short sVar2;
  int iVar3;
  double dVar4;
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fStack_34;
  undefined4 local_30;
  
  sVar2 = thunk_FUN_180624430(param_3);
  fVar7 = (float)param_3;
  if (((((sVar2 < 1) && (sVar2 = thunk_FUN_180624430(param_4), sVar2 < 1)) && (-1.0 <= fVar7)) &&
      ((fVar7 <= 2.0 && (fVar6 = (float)param_4, -2.0 <= fVar6)))) && (fVar6 <= 2.0)) {
    dVar1 = (double)param_2 + (double)fVar7 + (double)fVar6;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = dVar1;
    auVar5 = vroundsd_avx(ZEXT816(0),auVar5,1);
    dVar4 = auVar5._0_8_;
    if ((-2147483648.0 <= dVar4) && (dVar4 <= 2147483647.0)) {
      iVar3 = (int)dVar4;
      if (param_5 == iVar3) {
        fStack_34 = (float)(dVar1 - dVar4);
      }
      else {
        fStack_34 = 0.0;
      }
      local_30 = CONCAT31(local_30._1_3_,iVar3 <= param_5);
      *(undefined1 *)((longlong)param_1 + 0xc) = 1;
      *param_1 = CONCAT44(fStack_34,iVar3);
      *(undefined4 *)(param_1 + 1) = local_30;
      return param_1;
    }
  }
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  return param_1;
}



