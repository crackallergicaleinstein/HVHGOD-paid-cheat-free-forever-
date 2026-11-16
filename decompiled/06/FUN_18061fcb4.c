// FUN_18061fcb4 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18061fcb4 */

undefined8 FUN_18061fcb4(longlong param_1,short *param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  
  FUN_18063ab10(param_1,0,0x1ca);
  if (*param_2 != 0) {
    if ((*param_2 != 0x2e) || (param_2[1] == 0)) {
      iVar2 = 0;
      do {
        uVar4 = FUN_18062fb10(param_2,&DAT_1806b03c0);
        if (uVar4 == 0) {
          return 0xffffffff;
        }
        sVar1 = param_2[uVar4];
        if (iVar2 == 0) {
          if (0x3f < uVar4) {
            return 0xffffffff;
          }
          iVar3 = FUN_18062f9c0();
          if (iVar3 != 0) goto LAB_18061fe03;
          if (sVar1 != 0x2e) goto LAB_18061fdb6;
          iVar2 = 1;
        }
        else {
          if (iVar2 == 1) {
            if (0x3f < uVar4) {
              return 0xffffffff;
            }
            if (sVar1 == 0x5f) {
              return 0xffffffff;
            }
          }
          else {
            if (iVar2 != 2) {
              return 0xffffffff;
            }
            if (0xf < uVar4) {
              return 0xffffffff;
            }
            if ((sVar1 != 0) && (sVar1 != 0x2c)) {
              return 0xffffffff;
            }
          }
          iVar3 = FUN_18062f9c0();
          if (iVar3 != 0) goto LAB_18061fe03;
LAB_18061fdb6:
          if (sVar1 == 0x2c) {
            return 0;
          }
          if (sVar1 == 0) {
            return 0;
          }
        }
        param_2 = param_2 + uVar4 + 1;
        iVar2 = iVar2 + 1;
      } while( true );
    }
    iVar2 = FUN_18062f9c0();
    if (iVar2 != 0) {
LAB_18061fe03:
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    *(undefined2 *)(param_1 + 0x11e) = 0;
  }
  return 0;
}



