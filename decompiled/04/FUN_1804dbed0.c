// FUN_1804dbed0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804dbed0 */

void FUN_1804dbed0(longlong param_1,float *param_2,float param_3,float param_4,float param_5,
                  int param_6)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [64];
  float fVar9;
  
  if (*(float *)(param_1 + 0xe0) * 0.25 <= param_3) {
    FUN_1804d0a80(param_1 + 0x50,param_6 + 1 + *(int *)(param_1 + 0x50));
    iVar5 = 0;
    if (-1 < param_6) {
      fVar9 = (float)param_6;
      param_5 = param_5 - param_4;
      do {
        fVar2 = ((float)iVar5 / fVar9) * param_5 + param_4;
        auVar8 = ZEXT464((uint)fVar2);
        fVar6 = (float)FUN_180637540(fVar2);
        fVar6 = fVar6 * param_3;
        fVar2 = *param_2;
        fVar7 = (float)FUN_180638e00(auVar8._0_8_);
        iVar3 = *(int *)(param_1 + 0x54);
        fVar7 = fVar7 * param_3;
        fVar1 = param_2[1];
        if (*(int *)(param_1 + 0x50) == iVar3) {
          iVar4 = *(int *)(param_1 + 0x50) + 1;
          if (iVar3 == 0) {
            iVar3 = 8;
          }
          else {
            iVar3 = iVar3 / 2 + iVar3;
          }
          if (iVar4 < iVar3) {
            iVar4 = iVar3;
          }
          FUN_1804d0a80(param_1 + 0x50,iVar4);
        }
        iVar5 = iVar5 + 1;
        *(ulonglong *)(*(longlong *)(param_1 + 0x58) + (longlong)*(int *)(param_1 + 0x50) * 8) =
             CONCAT44(fVar7 + fVar1,fVar6 + fVar2);
        *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
      } while (iVar5 <= param_6);
    }
  }
  else {
    FUN_1804d0c90(param_1 + 0x50);
  }
  return;
}



