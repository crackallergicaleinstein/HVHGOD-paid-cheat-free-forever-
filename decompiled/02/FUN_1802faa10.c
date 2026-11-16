// FUN_1802faa10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802faa10 */

void FUN_1802faa10(longlong param_1,char param_2,longlong param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  char cVar1;
  short sVar2;
  longlong lVar3;
  longlong lVar4;
  char *pcVar5;
  ulonglong uVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  ulonglong local_88;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_6c;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  float local_58;
  undefined4 local_54;
  char local_50;
  
  if ((param_2 == '\0') && (*(char *)(param_3 + 0x10) == '\0')) {
    lVar3 = param_1;
    if (param_1 == param_1 + 0x20) {
      return;
    }
    while (*(char *)(lVar3 + 4) == '\0') {
      lVar3 = lVar3 + 8;
      if (lVar3 == param_1 + 0x20) {
        return;
      }
    }
  }
  pcVar5 = (char *)(param_1 + 4);
  uVar6 = 0;
  do {
    FUN_1802fa740(param_4,&local_58,uVar6);
    if ((local_50 != '\0') && (fVar7 = local_58, sVar2 = thunk_FUN_180624430(local_58), sVar2 < 1))
    {
      if (*(char *)(param_3 + 0x10) == '\0') {
        if (param_2 == '\0') {
          if (*pcVar5 != '\0') {
            local_60 = *(undefined4 *)(pcVar5 + -4);
            uStack_5c = CONCAT31(uStack_5c._1_3_,1);
            local_88 = CONCAT44(uStack_5c,local_60);
            goto LAB_1802fab82;
          }
        }
        else {
          uVar8 = local_54;
          sVar2 = thunk_FUN_180624430(local_54);
          if (sVar2 < 1) {
            if (*pcVar5 == '\0') {
              uStack_6c = CONCAT31(uStack_6c._1_3_,1);
              *(ulonglong *)(pcVar5 + -4) = CONCAT44(uStack_6c,fVar7);
            }
            uStack_64 = CONCAT31(uStack_64._1_3_,1);
            local_88 = CONCAT44(uStack_64,uVar8);
LAB_1802fab82:
            if ((char)(local_88 >> 0x20) != '\0') {
              fVar9 = (float)local_88;
              sVar2 = thunk_FUN_180624430(local_88 & 0xffffffff);
              if (sVar2 < 1) {
                if (fVar9 == fVar7) {
LAB_1802fac0c:
                  if ((param_2 == '\0') && (*(char *)(param_3 + 0x10) == '\0')) {
                    *pcVar5 = '\0';
                  }
                }
                else {
                  local_88 = CONCAT44(local_88._4_4_,fVar9);
                  lVar3 = FUN_1802fa6a0(*param_5,uVar6);
                  if (lVar3 != 0) {
                    cVar1 = FUN_1804513c0(lVar3 + 0x58,4,1);
                    if (cVar1 != '\0') {
                      lVar4 = FUN_18017ea70();
                      *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
                      cVar1 = FUN_1801ad800(lVar3 + 0x58,&local_88);
                      lVar3 = FUN_18017ea70();
                      if (*(int *)(lVar3 + 4) != 0) {
                        *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) + -1;
                      }
                      if (cVar1 != '\0') goto LAB_1802fac0c;
                    }
                  }
                }
              }
            }
          }
        }
      }
      else {
        sVar2 = thunk_FUN_180624430(*(undefined4 *)(param_3 + uVar6 * 4));
        if (sVar2 < 1) {
          if (*pcVar5 == '\0') {
            uStack_7c = CONCAT31(uStack_7c._1_3_,1);
            *(ulonglong *)(pcVar5 + -4) = CONCAT44(uStack_7c,fVar7);
          }
          local_78 = *(undefined4 *)(param_3 + uVar6 * 4);
          uStack_74 = CONCAT31(uStack_74._1_3_,1);
          local_88 = CONCAT44(uStack_74,local_78);
          goto LAB_1802fab82;
        }
      }
    }
    uVar6 = uVar6 + 1;
    pcVar5 = pcVar5 + 8;
    if (3 < uVar6) {
      return;
    }
  } while( true );
}



