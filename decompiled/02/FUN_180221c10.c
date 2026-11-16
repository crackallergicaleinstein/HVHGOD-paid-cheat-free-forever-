// FUN_180221c10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180221c10 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180221c10(undefined8 param_1,ushort param_2,int param_3)

{
  ushort uVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_138 [32];
  undefined1 local_118 [24];
  undefined1 local_100 [216];
  char local_28;
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_138;
  FUN_1801d6430(&DAT_180cc8068,local_118,param_2,param_3);
  iVar4 = FUN_1805f68d0(&DAT_180cc9e50);
  lVar2 = DAT_180cca008;
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_180cc9e9c == 0x7fffffff) {
    DAT_180cc9e9c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  if (DAT_180cca114 != '\0') {
    plVar6 = (longlong *)
             ((((ulonglong)(param_2 >> 8) ^
               ((ulonglong)param_2 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3) * 0x100000001b3 &
              DAT_180cc9cb8) * 0x10 + DAT_180cc9ca0);
    lVar5 = plVar6[1];
    if (lVar5 == DAT_180cc9c90) {
LAB_180221cf3:
      lVar5 = 0;
    }
    else {
      uVar1 = *(ushort *)(lVar5 + 0x10);
      while (param_2 != uVar1) {
        if (lVar5 == *plVar6) goto LAB_180221cf3;
        lVar5 = *(longlong *)(lVar5 + 8);
        uVar1 = *(ushort *)(lVar5 + 0x10);
      }
    }
    lVar7 = DAT_180cc9c90;
    if (lVar5 != 0) {
      lVar7 = lVar5;
    }
    lVar5 = DAT_180cc9fe8;
    if (((lVar7 == DAT_180cc9c90) ||
        (lVar7 = *(longlong *)(lVar7 + 0x18) * 0xb8 + DAT_180cc9bf8, lVar7 == 0)) ||
       (*(char *)(lVar7 + 0xb0) != '\0')) {
      for (; (lVar5 != DAT_180cc9ff0 &&
             ((*(ushort *)(lVar5 + 0x10) != param_2 || (*(int *)(lVar5 + 0x108) != param_3))));
          lVar5 = lVar5 + 0x128) {
      }
    }
    else {
      lVar5 = DAT_180cca000;
      if (local_28 != '\0') {
        while ((lVar5 != lVar2 &&
               (((*(char *)(lVar5 + 0x120) == '\0' || (*(char *)(lVar5 + 0x110) == '\0')) ||
                ((*(char *)(lVar5 + 0x111) != '\0' ||
                 ((*(ushort *)(lVar5 + 0x10) != param_2 ||
                  (cVar3 = FUN_1801d8910(lVar5 + 0x18,local_118), cVar3 == '\0'))))))))) {
          lVar5 = lVar5 + 0x128;
        }
      }
    }
  }
  FUN_1805f68fc(&DAT_180cc9e50);
  if (local_28 != '\0') {
    FUN_18015c010(local_100);
  }
}



