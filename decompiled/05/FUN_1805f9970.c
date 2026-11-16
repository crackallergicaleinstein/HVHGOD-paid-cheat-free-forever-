// FUN_1805f9970 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805f9970 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1805f9970(undefined1 (*param_1) [16],longlong param_2,undefined1 (*param_3) [16],
                  ulonglong param_4)

{
  undefined1 auVar1 [16];
  int iVar2;
  ulonglong uVar3;
  char *pcVar4;
  undefined1 (*pauVar5) [16];
  uint uVar6;
  longlong lVar7;
  undefined1 uVar8;
  bool bVar9;
  undefined1 auVar10 [16];
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_78;
  if (param_4 != 0) {
    if (param_4 == 1) {
      FUN_1805f7e70(param_1,param_2,(*param_3)[0]);
    }
    else {
      uVar3 = param_2 - (longlong)param_1;
      if (param_4 <= uVar3) {
        if ((((byte)DAT_1808d5f64 & 4) == 0) || (uVar3 < 0x10)) {
          pauVar5 = (undefined1 (*) [16])((longlong)param_1 + uVar3 + (1 - param_4));
          if (param_1 != pauVar5) {
            lVar7 = (longlong)param_3 - (longlong)param_1;
            do {
              if ((*param_1)[0] == (*param_3)[0]) {
                pcVar4 = *param_1 + 1;
                while (*pcVar4 == pcVar4[lVar7]) {
                  pcVar4 = pcVar4 + 1;
                  if ((longlong)pcVar4 - (longlong)param_1 == param_4) {
                  }
                }
              }
              param_1 = (undefined1 (*) [16])(*param_1 + 1);
              lVar7 = lVar7 + -1;
            } while (param_1 != pauVar5);
          }
        }
        else if (param_4 < 0x11) {
          uVar6 = (uint)param_4;
          uVar8 = 0x10 < uVar6;
          FUN_18063aed0(local_58,param_3,param_4);
          auVar1 = local_58;
          do {
            iVar2 = pcmpestri(local_58,*param_1,0xc,uVar6,0x10);
            if ((bool)uVar8) {
              param_1 = (undefined1 (*) [16])(*param_1 + iVar2);
              if (iVar2 <= (int)(0x10 - uVar6)) {
              }
            }
            else {
              param_1 = param_1 + 1;
            }
            uVar8 = param_1 < (undefined1 (*) [16])(param_2 - 0x10U);
          } while (param_1 <= (undefined1 (*) [16])(param_2 - 0x10U));
          param_2 = param_2 - (longlong)param_1;
          if (param_2 != 0) {
            FUN_18063aed0(local_58,param_1,param_2);
            pcmpestri(auVar1,local_58,0xc,uVar6,(int)param_2);
          }
        }
        else {
          auVar1 = *param_3;
          bVar9 = CARRY8((longlong)param_1 - param_4,uVar3);
          pauVar5 = (undefined1 (*) [16])(((longlong)param_1 - param_4) + uVar3);
          do {
            iVar2 = pcmpestri(auVar1,*param_1,0xc,0x10,0x10);
            if (bVar9) {
              if (iVar2 == 0) {
LAB_1805f9ac5:
                iVar2 = memcmp(param_1 + 1,param_3 + 1,param_4 - 0x10);
                if (iVar2 == 0) {
                }
              }
              else {
                param_1 = (undefined1 (*) [16])(*param_1 + iVar2);
                if (pauVar5 < param_1) {
                }
                auVar10._0_4_ = *(uint *)*param_1 ^ auVar1._0_4_;
                auVar10._4_4_ = *(uint *)(*param_1 + 4) ^ auVar1._4_4_;
                auVar10._8_4_ = *(uint *)(*param_1 + 8) ^ auVar1._8_4_;
                auVar10._12_4_ = *(uint *)(*param_1 + 0xc) ^ auVar1._12_4_;
                if (auVar10 == (undefined1  [16])0x0) goto LAB_1805f9ac5;
              }
              param_1 = (undefined1 (*) [16])(*param_1 + 1);
            }
            else {
              param_1 = param_1 + 1;
            }
            bVar9 = param_1 < pauVar5;
          } while (param_1 <= pauVar5);
        }
      }
    }
  }
}



