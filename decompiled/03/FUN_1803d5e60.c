// FUN_1803d5e60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803d5e60 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1803d5e60(void)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_668 [32];
  undefined **local_648;
  char *local_640;
  undefined *local_638;
  char local_628 [1544];
  ulonglong local_20;
  
  local_20 = DAT_1808d5f00 ^ (ulonglong)auStack_668;
  DAT_180c70e21 = 0;
  local_638 = &DAT_1809ba4c0;
  iVar4 = FUN_1805f68d0(&DAT_1809ba4c0);
  plVar2 = DAT_180b0dfa0;
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  plVar1 = DAT_180b0df98;
  lVar6 = DAT_180c71ea8;
  if (DAT_1809ba50c == 0x7fffffff) {
    DAT_1809ba50c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  do {
    DAT_180c71ea8 = lVar6;
    if (plVar1 == plVar2) {
      FUN_1805f68fc(&DAT_1809ba4c0);
    }
    lVar5 = *plVar1;
    if (*(char *)(lVar5 + 0x38) != '\0') {
      if (lVar6 != 0) {
        lVar5 = FUN_18017ea70();
        *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + 1;
        cVar3 = FUN_1803d6490(lVar6);
        lVar6 = FUN_18017ea70();
        if (*(int *)(lVar6 + 4) != 0) {
          *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
        }
        lVar5 = *plVar1;
        if (cVar3 != '\0') {
          *(undefined1 *)(lVar5 + 0x38) = 0;
          goto LAB_1803d5f6f;
        }
      }
      FUN_18063ab10(local_628,0,0x600);
      local_648 = *(undefined ***)(lVar5 + 0x30);
      FUN_18015ad60(local_628,0x600,0xffffffffffffffff,
                    "event=%s action=retain_listener_until_restart");
      local_648 = &PTR_180700558;
      if (local_628[0] != '\0') {
        local_648 = (undefined **)&DAT_1806bcfc0;
      }
      local_640 = local_628;
      FUN_1800f6900(3);
    }
LAB_1803d5f6f:
    plVar1 = plVar1 + 1;
    lVar6 = DAT_180c71ea8;
  } while( true );
}



