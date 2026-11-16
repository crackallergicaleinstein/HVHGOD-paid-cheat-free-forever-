// FUN_180349f90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180349f90 */

ulonglong FUN_180349f90(undefined8 *param_1,int param_2)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  short sVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  byte bVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  ulonglong uVar13;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  float local_60;
  
  DAT_180bda1d8 = DAT_180bda1d8 + 1;
  if (0x168 < DAT_180bda1d8) {
    return CONCAT71((uint7)(uint3)((uint)DAT_180bda1d8 >> 8),1);
  }
  *(int *)*param_1 = param_2;
  fVar12 = DAT_180b8e17c;
  uVar5 = DAT_180b8e170;
  bVar9 = ~DAT_180b8e18c;
  local_68 = DAT_180b8e174;
  uVar7 = local_68;
  local_60 = DAT_180b8e17c;
  local_78 = DAT_180b8e168;
  local_70 = DAT_180b8e170;
  if (DAT_180b8e111 != '\0') {
    local_68._0_4_ = (float)DAT_180b8e174;
    fVar11 = (float)local_68;
    uVar13 = DAT_180b8e168;
    local_68 = uVar7;
    sVar6 = thunk_FUN_180624430(DAT_180b8e174 & 0xffffffff);
    if (sVar6 < 1) {
      fVar10 = local_68._4_4_;
      sVar6 = thunk_FUN_180624430(local_68._4_4_);
      if (((sVar6 < 1) && (sVar6 = thunk_FUN_180624430(fVar12), sVar6 < 1)) &&
         (sVar6 = thunk_FUN_180624430(local_78 & 0xffffffff), sVar6 < 1)) {
        sVar6 = thunk_FUN_180624430(local_78._4_4_);
        if ((sVar6 < 1) && (sVar6 = thunk_FUN_180624430(uVar5), sVar6 < 1)) {
          lVar3 = param_1[2];
          iVar2 = *(int *)(lVar3 + 0xac);
          if (iVar2 < 0xb) {
            *(int *)(lVar3 + 0xac) = iVar2 + 1;
            *(ulonglong *)(lVar3 + 0x1c + (longlong)iVar2 * 0xc) = uVar13;
            *(undefined4 *)(lVar3 + 0x24 + (longlong)iVar2 * 0xc) = uVar5;
          }
          if ((bVar9 & 1) == 0) {
            fVar12 = fVar10 * fVar10 + fVar11 * fVar11;
            *(int *)(param_1[2] + 8) = param_2;
            fVar11 = 0.0;
            *(undefined4 *)(param_1[2] + 0x14) = uVar5;
            if (fVar12 != 0.0) {
              if (fVar12 < 0.0) {
                fVar11 = (float)FUN_18061e150(fVar12);
              }
              else {
                fVar11 = SQRT(fVar12);
              }
            }
            *(float *)(param_1[2] + 0x18) = fVar11;
            puVar8 = (undefined4 *)param_1[5];
            *puVar8 = 4;
          }
          else {
            fVar1 = *(float *)param_1[3];
            if (((-60.0 < fVar1) || (fVar12 < -10.0)) || ((2.0 < fVar12 || (fVar12 <= fVar1 + 1.0)))
               ) {
              uVar4 = param_1[6];
              *(float *)param_1[3] = fVar12;
              uVar7 = FUN_180349e00(uVar4,param_2 + 1,&local_68,&local_78);
              return uVar7 & 0xffffffffffffff00;
            }
            if (0xb < param_2) {
              lVar3 = param_1[2];
              *(ulonglong *)(lVar3 + 0xa0) = uVar13;
              *(undefined4 *)(lVar3 + 0xa8) = uVar5;
              *(undefined4 *)(param_1[2] + 0xac) = 0xc;
            }
            fVar11 = fVar10 * fVar10 + fVar11 * fVar11;
            *(undefined1 *)param_1[2] = 1;
            fVar10 = 0.0;
            *(int *)(param_1[2] + 4) = param_2;
            *(undefined4 *)(param_1[2] + 0xc) = *(undefined4 *)param_1[3];
            *(float *)(param_1[2] + 0x10) = fVar12;
            if (fVar11 != 0.0) {
              if (fVar11 < 0.0) {
                fVar10 = (float)FUN_18061e150(fVar11);
              }
              else {
                fVar10 = SQRT(fVar11);
              }
            }
            *(float *)(param_1[2] + 0x18) = fVar10;
            puVar8 = (undefined4 *)param_1[5];
            *puVar8 = 3;
          }
          goto LAB_18034a25a;
        }
      }
    }
  }
  puVar8 = (undefined4 *)param_1[1];
  *(undefined1 *)puVar8 = 1;
LAB_18034a25a:
  return CONCAT71((int7)((ulonglong)puVar8 >> 8),1);
}



