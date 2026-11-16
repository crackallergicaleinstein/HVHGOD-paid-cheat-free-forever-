// FUN_1802d1c40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802d1c40 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802d1c40(undefined8 param_1,longlong param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_658 [32];
  undefined **local_638;
  char *local_630;
  char local_628 [1536];
  ulonglong local_28;
  
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_658;
  iVar1 = FUN_1805f68d0(&DAT_180cc9b08);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_180cc9b54 == 0x7fffffff) {
    DAT_180cc9b54 = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  if (DAT_180cc9a08 != DAT_180cc9a10) {
    lVar4 = DAT_180cc9a08 + 0x13d0;
    lVar2 = DAT_180cc9a10;
    lVar3 = DAT_180cc9a08;
    do {
      if ((*(char *)(lVar4 + -0x2c) == '\0') && (*(longlong *)(lVar4 + -0x38) == param_2)) {
        if (param_3 != '\0') {
          *(undefined1 *)(lVar4 + -0x30) = 1;
          lVar2 = DAT_180cc9a10;
          goto LAB_1802d1d7f;
        }
        FUN_18063ab10(local_628,0,0x600);
        local_638 = (undefined **)param_2;
        FUN_18015ad60(local_628,0x600,0xffffffffffffffff,"command=%lld evidence=not_submitted");
        local_630 = local_628;
        local_638 = &PTR_180700558;
        if (local_628[0] != '\0') {
          local_638 = (undefined **)&DAT_1806bcfc0;
        }
        FUN_1800f6900(0);
        FUN_18063aed0(lVar3,lVar4,DAT_180cc9a10 - lVar4);
        lVar2 = DAT_180cc9a10 + -0x13d0;
        DAT_180cc9a10 = lVar2;
      }
      else {
LAB_1802d1d7f:
        lVar3 = lVar3 + 0x13d0;
        lVar4 = lVar4 + 0x13d0;
      }
    } while (lVar3 != lVar2);
  }
  FUN_1805f68fc(&DAT_180cc9b08);
}



