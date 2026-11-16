// FUN_180292550 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180292550 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180292550(longlong param_1,ulonglong param_2,char param_3)

{
  int *piVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  char cVar4;
  int iVar5;
  ULONGLONG UVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined1 auStack_1138 [32];
  ulonglong local_1118 [2];
  undefined8 local_1108;
  undefined8 local_1100;
  undefined *local_10f8;
  undefined8 local_10e8;
  undefined8 local_10e0;
  undefined1 local_10d8;
  undefined4 local_10d4;
  undefined8 local_10d0;
  undefined4 local_10c8;
  undefined8 local_10c0;
  undefined1 local_10b8 [16];
  ULONGLONG local_10a8;
  ulonglong local_10a0;
  undefined1 local_1098 [16];
  undefined1 local_1088 [4128];
  undefined1 local_68;
  undefined4 local_64;
  ulonglong local_58;
  
  if (param_2 == 0) {
    return;
  }
  local_58 = DAT_1808d5f00 ^ (ulonglong)auStack_1138;
  if (DAT_180cb1998 == '\0') {
  }
  if ((DAT_180cb1d1c != '\0') && (param_3 == '\0')) {
  }
  local_1118[0] = param_2;
  cVar4 = FUN_180292050(param_2);
  if (cVar4 == '\0') {
  }
  local_10f8 = &DAT_1808e3940;
  iVar5 = FUN_1805f68d0(&DAT_1808e3940);
  if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_1808e398c == 0x7fffffff) {
    DAT_1808e398c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  uVar8 = ((((((((local_1118[0] & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                local_1118[0] >> 8 & 0xff) * 0x100000001b3 ^ local_1118[0] >> 0x10 & 0xff) *
               0x100000001b3 ^ local_1118[0] >> 0x18 & 0xff) * 0x100000001b3 ^
             local_1118[0] >> 0x20 & 0xff) * 0x100000001b3 ^ local_1118[0] >> 0x28 & 0xff) *
            0x100000001b3 ^ local_1118[0] >> 0x30 & 0xff) * 0x100000001b3 ^ local_1118[0] >> 0x38) *
          0x100000001b3 & *(ulonglong *)(param_1 + 0x60);
  lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 8 + uVar8 * 0x10);
  uVar10 = 0;
  if (lVar9 == *(longlong *)(param_1 + 0x38)) {
LAB_1802926a8:
    lVar9 = 0;
  }
  else {
    uVar2 = *(ulonglong *)(lVar9 + 0x10);
    while (local_1118[0] != uVar2) {
      if (lVar9 == *(longlong *)(*(longlong *)(param_1 + 0x48) + uVar8 * 0x10)) goto LAB_1802926a8;
      lVar9 = *(longlong *)(lVar9 + 8);
      uVar2 = *(ulonglong *)(lVar9 + 0x10);
    }
  }
  if (lVar9 == 0) {
    lVar9 = *(longlong *)(param_1 + 0x38);
  }
  UVar6 = GetTickCount64();
  if ((((lVar9 == *(longlong *)(param_1 + 0x38)) || (*(longlong *)(lVar9 + 0x40) == 0)) ||
      (uVar8 = UVar6 - *(longlong *)
                        (*(longlong *)
                          (*(longlong *)(lVar9 + 0x28) +
                          (*(longlong *)(lVar9 + 0x38) + -1 + *(longlong *)(lVar9 + 0x40) &
                          *(longlong *)(lVar9 + 0x30) - 1U) * 8) + 0x1010), 0xfa < uVar8)) ||
     (uVar8 = FUN_1803d4150(uVar8,*(undefined4 *)(lVar9 + 0x18)), uVar8 != local_1118[0]))
  goto LAB_1802928d5;
  local_10e8 = 0;
  local_10e0 = 0;
  local_10d8 = 0;
  uVar11 = 0;
  local_10d4 = 0;
  local_10d0 = 0;
  local_10c8 = 0;
  local_10c0 = 0;
  local_10b8 = (undefined1  [16])0x0;
  local_10a8 = 0;
  local_1098 = (undefined1  [16])0x0;
  FUN_1802929a0(local_1088);
  local_68 = 0;
  local_10a0 = local_1118[0];
  local_10c8 = *(undefined4 *)(lVar9 + 0x18);
  local_1100 = *(undefined8 *)(lVar9 + 0x38);
  if (((longlong *)(lVar9 + 0x20) != (longlong *)0x0) &&
     (puVar3 = *(undefined8 **)(lVar9 + 0x20), puVar3 != (undefined8 *)0x0)) {
    uVar10 = *puVar3;
  }
  local_1108 = uVar10;
  local_10a8 = UVar6;
  local_64 = uVar11;
  FUN_180298250(&local_10c0,&local_1108,*(undefined8 *)(lVar9 + 0x40));
  if (*(ulonglong *)(param_1 + 0xc0) < 0x10) {
LAB_18029285f:
    plVar7 = (longlong *)FUN_180298820(param_1 + 0xb0,&local_1108,local_1118);
    FUN_1802966d0(*plVar7 + 0x18,&local_10e8);
  }
  else {
    uVar8 = ((((((((local_1118[0] & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                  local_1118[0] >> 8 & 0xff) * 0x100000001b3 ^ local_1118[0] >> 0x10 & 0xff) *
                 0x100000001b3 ^ local_1118[0] >> 0x18 & 0xff) * 0x100000001b3 ^
               local_1118[0] >> 0x20 & 0xff) * 0x100000001b3 ^ local_1118[0] >> 0x28 & 0xff) *
              0x100000001b3 ^ local_1118[0] >> 0x30 & 0xff) * 0x100000001b3 ^ local_1118[0] >> 0x38)
            * 0x100000001b3 & *(ulonglong *)(param_1 + 0xe0);
    lVar9 = *(longlong *)(*(longlong *)(param_1 + 200) + 8 + uVar8 * 0x10);
    if (lVar9 != *(longlong *)(param_1 + 0xb8)) {
      uVar2 = *(ulonglong *)(lVar9 + 0x10);
      while (local_1118[0] != uVar2) {
        if (lVar9 == *(longlong *)(*(longlong *)(param_1 + 200) + uVar8 * 0x10)) goto LAB_180292887;
        lVar9 = *(longlong *)(lVar9 + 8);
        uVar2 = *(ulonglong *)(lVar9 + 0x10);
      }
      goto LAB_18029285f;
    }
  }
LAB_180292887:
  uVar10 = local_1098._8_8_;
  if ((longlong *)local_1098._8_8_ != (longlong *)0x0) {
    LOCK();
    plVar7 = (longlong *)(local_1098._8_8_ + 8);
    lVar9 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (*(code *)**(undefined8 **)local_1098._8_8_)(local_1098._8_8_);
      LOCK();
      piVar1 = (int *)(uVar10 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*(longlong *)uVar10 + 8))(uVar10);
      }
    }
  }
  FUN_1801bd3e0(&local_10c0);
LAB_1802928d5:
  FUN_1805f68fc(&DAT_1808e3940);
}



