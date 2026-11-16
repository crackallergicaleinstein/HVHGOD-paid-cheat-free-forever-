// FUN_1801e12c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801e12c0 */

void FUN_1801e12c0(undefined8 *param_1)

{
  ulonglong uVar1;
  
  uVar1 = param_1[1];
  switch((uint)*param_1 & 0xff) {
  case 0:
                    /* WARNING: Subroutine does not return */
    FUN_1801e1410();
  case 1:
    if ((int)uVar1 < 0) {
LAB_1801e1336:
                    /* WARNING: Subroutine does not return */
      FUN_1801e6400("Negative precision.");
    }
    uVar1 = (ulonglong)(int)uVar1;
    break;
  case 2:
    uVar1 = uVar1 & 0xffffffff;
    break;
  case 3:
    if ((longlong)uVar1 < 0) goto LAB_1801e1336;
    break;
  case 4:
    break;
  case 5:
                    /* WARNING: Subroutine does not return */
    FUN_1801e1410();
  case 6:
                    /* WARNING: Subroutine does not return */
    FUN_1801e1410();
  case 7:
                    /* WARNING: Subroutine does not return */
    FUN_1801e1410();
  case 8:
                    /* WARNING: Subroutine does not return */
    FUN_1801e1410();
  case 9:
                    /* WARNING: Subroutine does not return */
    FUN_1801e1410();
  case 10:
                    /* WARNING: Subroutine does not return */
    FUN_1801e1410();
  case 0xb:
                    /* WARNING: Subroutine does not return */
    FUN_1801e1410();
  case 0xc:
                    /* WARNING: Subroutine does not return */
    FUN_1801e1410();
  case 0xd:
                    /* WARNING: Subroutine does not return */
    FUN_1801e1410();
  default:
                    /* WARNING: Subroutine does not return */
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  if (0x7fffffff < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_1801e6400("Number is too big.");
  }
  return;
}



