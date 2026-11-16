// FUN_180229750 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180229750 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180229750(longlong param_1,undefined4 param_2,longlong param_3,longlong param_4,
                  undefined1 param_5)

{
  bool bVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  char cVar4;
  short sVar5;
  ULONGLONG UVar6;
  longlong lVar7;
  int iVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  undefined4 local_88 [4];
  longlong local_78;
  longlong lStack_70;
  longlong lStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  longlong lStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 uStack_40;
  undefined7 uStack_3f;
  
  uVar2 = DAT_180c63120;
  if (((((DAT_180c63119 != '\0') && (DAT_1808e6c00 != '\0')) &&
       (UVar6 = GetTickCount64(), UVar6 < uVar2)) && ((param_3 != 0 && (DAT_180c630f0 == param_3))))
     && (cVar4 = FUN_180224970(param_1,param_2), cVar4 != '\0')) {
    fVar10 = *(float *)(param_4 + 4);
    sVar5 = thunk_FUN_180624430(fVar10);
    if (sVar5 < 1) {
      fVar11 = *(float *)(param_4 + 8);
      sVar5 = thunk_FUN_180624430(fVar11);
      if (((sVar5 < 1) && (ABS(fVar10) <= 20.0)) && (ABS(fVar11) <= 20.0)) {
        if ((DAT_180cd3ab8 & 1) == 0) {
          DAT_180cd3ab8 = DAT_180cd3ab8 | 1;
          DAT_180cd3ac0 = FUN_1802299f0();
        }
        if (DAT_180cd3ac0 != 0) {
          lVar7 = FUN_18017ea70();
          *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
          bVar1 = false;
          if (param_1 + 0x8f8 != 0) {
            local_88[0] = 0;
            cVar4 = FUN_1804514f0(local_88,param_1 + 0x8f8,4);
            if (cVar4 == '\0') {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
          }
          uVar3 = local_88[0];
          lVar7 = FUN_18017ea70();
          iVar8 = *(int *)(lVar7 + 4);
          if (iVar8 != 0) {
            iVar8 = iVar8 + -1;
            *(int *)(lVar7 + 4) = iVar8;
          }
          uVar9 = 0xffffffff;
          if (bVar1) {
            uVar9 = uVar3;
          }
          lVar7 = FUN_1803d4150(iVar8,uVar9);
          if ((lVar7 != 0) && (iVar8 = FUN_180224a80(lVar7), iVar8 != 0)) {
            iVar8 = FUN_1805f68d0(&DAT_1808db030);
            if (iVar8 != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_1805f6d44(5);
            }
            if (DAT_1808db07c == 0x7fffffff) {
              DAT_1808db07c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
              FUN_1805f6d44(6);
            }
            lStack_68 = DAT_180cd3ac0;
            local_78 = param_1;
            lStack_70 = lVar7;
            uStack_60 = uVar9;
            uStack_5c = param_2;
            local_58 = param_3;
            UVar6 = GetTickCount64();
            DAT_180bbed68 = UVar6 + 0xfa;
            uStack_48 = *(undefined4 *)(param_4 + 4);
            uStack_44 = *(undefined4 *)(param_4 + 8);
            _DAT_180bbed70 = *(undefined8 *)(param_4 + 4);
            uStack_40 = param_5;
            _DAT_180bbed58 = CONCAT44(uStack_5c,uStack_60);
            DAT_180bbed40 = local_78;
            DAT_180bbed48 = lStack_70;
            DAT_180bbed50 = lStack_68;
            _DAT_180bbed78 = CONCAT71(uStack_3f,param_5);
            DAT_180bbed60 = local_58;
            lStack_50 = DAT_180bbed68;
            FUN_1805f68fc(&DAT_1808db030);
          }
        }
      }
    }
  }
  return;
}



