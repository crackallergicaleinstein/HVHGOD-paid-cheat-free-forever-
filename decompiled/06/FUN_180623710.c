// FUN_180623710 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180623710 */

undefined8
FUN_180623710(ulonglong *param_1,undefined1 *param_2,ulonglong param_3,longlong param_4,
             longlong param_5,int param_6,undefined4 param_7,ulonglong param_8,uint param_9,
             longlong param_10)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 in_stack_ffffffffffffffe0;
  undefined4 uVar8;
  
  if (param_2 == (undefined1 *)0x0) {
    *(undefined1 *)(param_10 + 0x30) = 1;
    *(undefined4 *)(param_10 + 0x2c) = 0x16;
  }
  else {
    if (((param_3 != 0) && (param_4 != 0)) && (param_5 != 0)) {
      if ((param_6 == 0x41) || (param_6 - 0x45U < 3)) {
        uVar5 = 1;
      }
      else {
        uVar5 = 0;
      }
      if (((param_8 & 8) == 0) && (uVar1 = *param_1, ((uint)(uVar1 >> 0x34) & 0x7ff) == 0x7ff)) {
        uVar6 = 0xc;
        if ((uVar1 & 0xfffffffffffff) == 0) {
          lVar3 = 0;
        }
        else if (((longlong)uVar1 < 0) && ((uVar1 & 0xfffffffffffff) == 0x8000000000000)) {
          lVar3 = 0xc;
        }
        else {
          lVar3 = (-(ulonglong)((uVar1 & 0x8000000000000) != 0) & 0xfffffffffffffffc) + 8;
        }
        if (param_3 < -((longlong)uVar1 >> 0x3f) + 4U) {
          *param_2 = 0;
        }
        else {
          lVar7 = -1;
          if ((char)-((longlong)uVar1 >> 0x3f) != '\0') {
            *param_2 = 0x2d;
            param_2[1] = 0;
          }
          do {
            lVar7 = lVar7 + 1;
          } while ((&PTR_DAT_1806b1230)[(ulonglong)((uVar5 ^ 1) * 2) + lVar3][lVar7] != '\0');
          iVar2 = FUN_18061f0b0();
          if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          uVar6 = 0;
        }
        return uVar6;
      }
      uVar4 = (undefined4)(param_8 >> 4);
      param_9 = -(uint)((param_8 & 0x20) != 0) & param_9;
      uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffffe0 >> 0x20);
      if (param_6 == 0x41) {
LAB_180623997:
        uVar6 = FUN_180622c00(param_1,param_2,param_3,param_4,param_5,param_7,uVar5,
                              CONCAT44(uVar8,uVar4) & 0xffffffff00000001 | 2,param_9,param_10);
        return uVar6;
      }
      if (param_6 == 0x45) {
LAB_18062395d:
        uVar6 = FUN_180622f94(param_1,param_2,param_3,param_4,param_5,param_7,uVar5,
                              CONCAT44(uVar8,uVar4) & 0xffffffff00000001 | 2,param_9,param_10);
        return uVar6;
      }
      if (param_6 == 0x46) {
LAB_18062392c:
        uVar6 = FUN_18062327c(param_1,param_2,param_3,param_4,param_5,param_7,param_9,param_10);
        return uVar6;
      }
      if (param_6 != 0x47) {
        if (param_6 == 0x61) goto LAB_180623997;
        if (param_6 == 0x65) goto LAB_18062395d;
        if (param_6 == 0x66) goto LAB_18062392c;
      }
      uVar6 = FUN_1806234a4(param_1,param_2,param_3,param_4,param_5,param_7,uVar5,
                            CONCAT44(uVar8,uVar4) & 0xffffffff00000001 | 2,param_9,param_10);
      return uVar6;
    }
    *(undefined1 *)(param_10 + 0x30) = 1;
    *(undefined4 *)(param_10 + 0x2c) = 0x16;
  }
  FUN_18060aa1c(0,0,0,0,0,param_10);
  return 0x16;
}



