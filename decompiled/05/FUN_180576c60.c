// FUN_180576c60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180576c60 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180576c60(undefined8 param_1,longlong *param_2,uint param_3,int *param_4,int *param_5)

{
  int iVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  bool bVar12;
  undefined1 auStack_88 [32];
  int local_68 [2];
  byte local_60;
  char local_5f;
  char local_5e;
  char local_5d;
  byte local_5c;
  char local_5b;
  char local_5a;
  char local_59;
  byte local_58;
  char local_57;
  char local_56;
  char local_55;
  byte local_54;
  char local_53;
  char local_52;
  char local_51;
  byte local_50;
  char local_4f;
  char local_4e;
  char local_4d;
  byte local_4c;
  char local_4b;
  char local_4a;
  char local_49;
  byte local_48;
  char local_47;
  char local_46;
  char local_45;
  byte local_44;
  char local_43;
  char local_42;
  char local_41;
  ulonglong local_40;
  
  local_40 = DAT_1808d5f00 ^ (ulonglong)auStack_88;
  uVar8 = (ulonglong)param_3;
  if ((code *)param_2[4] == (code *)0x0) {
    uVar4 = *(uint *)(param_2 + 1);
    if (uVar4 < param_3) {
    }
  }
  else {
    iVar3 = (*(code *)param_2[4])(param_2,uVar8,0,0);
    if (iVar3 != 0) {
    }
    uVar4 = *(uint *)(param_2 + 1);
  }
  *(uint *)((longlong)param_2 + 0xc) = param_3;
  if (param_3 < uVar4) {
    if ((code *)param_2[4] == (code *)0x0) {
      uVar4 = uVar4 - param_3;
      if (0x10 < uVar4) {
        uVar4 = 0x10;
      }
      FUN_18063aed0(&local_60,uVar8 + *param_2,uVar4);
    }
    else {
      uVar4 = (*(code *)param_2[4])(param_2,uVar8,&local_60,0x10);
    }
    *(uint *)((longlong)param_2 + 0xc) = uVar4 + param_3;
    if ((((0xf < uVar4) && (local_60 < 0x80)) && (local_5c < 0x80)) &&
       ((local_58 < 0x80 && (local_54 < 0x80)))) {
      iVar3 = CONCAT31(CONCAT21(CONCAT11(local_60,local_5f),local_5e),local_5d);
      *param_5 = iVar3;
      iVar9 = CONCAT31(CONCAT21(CONCAT11(local_5c,local_5b),local_5a),local_59);
      iVar7 = CONCAT31(CONCAT21(CONCAT11(local_58,local_57),local_56),local_55);
      iVar10 = CONCAT31(CONCAT21(CONCAT11(local_54,local_53),local_52),local_51);
      if (iVar9 != 0) {
        if (iVar3 < iVar9) {
          iVar5 = iVar9 - iVar7;
          bVar12 = SBORROW4(iVar3,iVar5);
          iVar1 = iVar3 - iVar5;
          bVar11 = iVar3 == iVar5;
        }
        else {
          iVar5 = iVar3 - iVar10;
          bVar12 = SBORROW4(iVar9,iVar5);
          iVar1 = iVar9 - iVar5;
          bVar11 = iVar9 == iVar5;
        }
        if (((bVar11 || bVar12 != iVar1 < 0) && (iVar3 <= 0x7fffffff - iVar7)) &&
           ((iVar9 <= 0x7fffffff - iVar10 &&
            (((int)param_3 <= (0x7fffffff - iVar3) - iVar7 &&
             ((int)param_3 <= (0x7fffffff - iVar10) - iVar9)))))) {
          if ((iVar3 + param_3 + iVar7 <= *(uint *)(param_2 + 1)) &&
             (param_3 + iVar10 + iVar9 <= *(uint *)(param_2 + 1))) {
            *param_5 = iVar3 + param_3;
            iVar3 = FUN_1805788b0(param_2,iVar9 + param_3);
            if (iVar3 == 0) {
              uVar4 = *(uint *)((longlong)param_2 + 0xc);
              local_41 = local_51 + '\x01';
              if (uVar4 < *(uint *)(param_2 + 1)) {
                if ((code *)param_2[4] == (code *)0x0) {
                  uVar6 = *(uint *)(param_2 + 1) - uVar4;
                  if (0x10 < uVar6) {
                    uVar6 = 0x10;
                  }
                  FUN_18063aed0(&local_50,(ulonglong)uVar4 + *param_2);
                }
                else {
                  uVar6 = (*(code *)param_2[4])(param_2,(ulonglong)uVar4,&local_50,0x10);
                }
                *(uint *)((longlong)param_2 + 0xc) = uVar6 + uVar4;
                if (0xf < uVar6) {
                  if ((local_41 == '\0' &&
                       (local_42 == '\0' &&
                       (local_43 == '\0' &&
                       (local_44 == 0 &&
                       (local_45 == '\0' &&
                       (local_46 == '\0' &&
                       (local_47 == '\0' &&
                       (local_48 == 0 &&
                       (local_49 == '\0' &&
                       (local_4a == '\0' &&
                       (local_4b == '\0' &&
                       (local_4c == 0 &&
                       (local_4d == '\0' &&
                       (local_4e == '\0' && (local_4f == '\0' && local_50 == 0))))))))))))))) ||
                     (local_41 == local_51 &&
                      (local_42 == local_52 &&
                      (local_43 == local_53 &&
                      (local_44 == local_54 &&
                      (local_45 == local_55 &&
                      (local_46 == local_56 &&
                      (local_47 == local_57 &&
                      (local_48 == local_58 &&
                      (local_49 == local_59 &&
                      (local_4a == local_5a &&
                      (local_4b == local_5b &&
                      (local_4c == local_5c &&
                      (local_4d == local_5d &&
                      (local_4e == local_5e && (local_4f == local_5f && local_50 == local_60))))))))
                      )))))))) {
                    local_68[0] = FUN_180578910(param_2,8);
                    sVar2 = FUN_180578720(param_2,local_68);
                    if ((local_68[0] == 0) && (-1 < sVar2)) {
                      iVar7 = iVar9 + param_3 + (int)sVar2;
                      iVar3 = FUN_1805788b0(param_2,iVar7);
                      if (iVar3 == 0) {
                        *param_4 = iVar7;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}



