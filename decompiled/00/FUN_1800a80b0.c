// FUN_1800a80b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800a80b0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800a80b0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  bool bVar2;
  undefined1 auStack_68 [32];
  uint local_48;
  undefined4 uStack_44;
  undefined1 local_38 [4];
  undefined4 uStack_34;
  uint local_28;
  int local_24;
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_68;
  if (7 < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  uVar1 = FUN_1805fb620(param_2,local_38,3,0xffffffff);
  if (uVar1 == 0) {
    uStack_44 = 0x1ff;
    if ((local_28 & 1) != 0) {
      uStack_44 = 0x16d;
    }
    if ((local_28 >> 10 & 1) != 0) {
      if (local_24 == -0x5ffffff4) {
        local_48 = 4;
        goto LAB_1800a8187;
      }
      if (local_24 == -0x5ffffffd) {
        local_48 = 10;
        goto LAB_1800a8187;
      }
    }
    local_48 = (local_28 & 0x10 | 0x20) >> 4;
    goto LAB_1800a8187;
  }
  uStack_44 = 0xffff;
  if (uVar1 < 0x41) {
    if (((uVar1 != 0x40) && (uVar1 != 2)) && (uVar1 != 3)) {
      bVar2 = uVar1 == 0x35;
      goto LAB_1800a8178;
    }
  }
  else if (uVar1 != 0x7b) {
    bVar2 = uVar1 == 0x10b;
LAB_1800a8178:
    if (!bVar2) {
      local_48 = 0;
      goto LAB_1800a8187;
    }
  }
  local_48 = 1;
LAB_1800a8187:
  *param_3 = CONCAT44(uStack_34,uVar1);
  param_3[1] = &PTR_vftable_1808d7db8;
  *param_1 = CONCAT44(uStack_44,local_48);
}



