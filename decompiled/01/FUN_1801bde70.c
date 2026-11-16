// FUN_1801bde70 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801bde70 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1801bde70(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  undefined1 auStack_288 [32];
  undefined1 local_268 [44];
  short local_23c;
  short local_23a;
  short local_238;
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_288;
  lVar3 = *param_1;
  do {
    iVar5 = FUN_1805fb424(*(undefined8 *)(lVar3 + 0x40),local_268);
    if (iVar5 == 0x12) {
      plVar4 = (longlong *)param_1[1];
      *param_1 = 0;
      param_1[1] = 0;
      if (plVar4 == (longlong *)0x0) {
      }
      LOCK();
      plVar1 = plVar4 + 1;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 != 1) {
      }
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
    if (iVar5 != 0) {
    }
  } while ((local_23c == 0x2e) && ((local_23a == 0 || ((local_23a == 0x2e && (local_238 == 0))))));
  FUN_18017d9c0(lVar3,local_268);
}



