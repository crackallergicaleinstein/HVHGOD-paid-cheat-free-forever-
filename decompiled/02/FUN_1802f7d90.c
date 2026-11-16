// FUN_1802f7d90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802f7d90 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802f7d90(undefined8 param_1,char *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_648 [32];
  undefined **local_628;
  char *local_620;
  char local_618 [1536];
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_648;
  iVar1 = FUN_1805f68d0(&DAT_1808e4ee0);
  if (iVar1 != 0) {
LAB_1802f7fe6:
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_1808e4f2c == 0x7fffffff) {
    DAT_1808e4f2c = 0x7ffffffe;
  }
  else {
    FUN_180450790(&DAT_180bbb168);
    FUN_1805f68fc(&DAT_1808e4ee0);
    iVar1 = FUN_1805f68d0(&DAT_180b8f998);
    if (iVar1 != 0) goto LAB_1802f7fe6;
    if (DAT_180b8f9e4 != 0x7fffffff) {
      DAT_180b8f9f0 = 0;
      puVar2 = &DAT_180b8fa20;
      if (0xf < DAT_180b8fa38) {
        puVar2 = _DAT_180b8fa20;
      }
      DAT_180b8fa30 = 0;
      *puVar2 = 0;
      DAT_180b8fa50 = 0;
      puVar2 = &DAT_180b8fa40;
      if (0xf < DAT_180b8fa58) {
        puVar2 = _DAT_180b8fa40;
      }
      *puVar2 = 0;
      DAT_180b8fa70 = 0;
      puVar3 = &DAT_180b8fa60;
      if (0xf < DAT_180b8fa78) {
        puVar3 = DAT_180b8fa60;
      }
      *(undefined1 *)puVar3 = 0;
      DAT_180b8fa80 = 0;
      puVar3 = &DAT_180b8fa88;
      if (0xf < DAT_180b8faa0) {
        puVar3 = DAT_180b8fa88;
      }
      DAT_180b8fa98 = 0;
      *(undefined1 *)puVar3 = 0;
      DAT_180b8faa8 = 0;
      if ((DAT_180b8f9ec == '\0') || ((DAT_180b8f9e9 == '\0' && (DAT_180b8f9eb == '\0')))) {
        DAT_180b8f9eb = 0;
      }
      else {
        DAT_180b8f9eb = 1;
      }
      DAT_180b8f9e9 = 0;
      DAT_180b8fab0 = 0;
      LOCK();
      DAT_180b8fab1 = 0;
      UNLOCK();
      LOCK();
      DAT_180b8fab8 = 0;
      UNLOCK();
      LOCK();
      DAT_180b8fac0 = 0;
      UNLOCK();
      LOCK();
      DAT_180b8fac8 = 0;
      UNLOCK();
      LOCK();
      DAT_180b8fad0 = 0;
      UNLOCK();
      DAT_180b8fad8 = 0;
      FUN_18063ab10(local_618,0,0x600);
      local_620 = "false";
      if (DAT_180b8f9ec != '\0') {
        local_620 = "true";
      }
      local_628 = (undefined **)"unknown";
      if (param_2 != (char *)0x0) {
        local_628 = (undefined **)param_2;
      }
      FUN_18015ad60(local_618,0x600,0xffffffffffffffff,"reason=%s originals_preserved=%s");
      local_628 = &PTR_180700558;
      if (local_618[0] != '\0') {
        local_628 = (undefined **)&DAT_1806bcfc0;
      }
      local_620 = local_618;
      FUN_1800f6900(0,local_620,"ProfileChanger","PROFILE_STATE_RESET");
      FUN_1805f68fc(&DAT_180b8f998);
    }
    DAT_180b8f9e4 = 0x7ffffffe;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1805f6d44(6);
}



