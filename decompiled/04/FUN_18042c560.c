// FUN_18042c560 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18042c560 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18042c560(void)

{
  code *pcVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  longlong *local_90;
  char *local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined8 local_64;
  undefined4 local_5c;
  char *local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined8 local_44;
  undefined4 local_3c;
  char *local_38;
  undefined4 local_30;
  undefined8 local_2c;
  undefined8 local_24;
  undefined4 local_1c;
  ulonglong local_18;
  
  lVar3 = DAT_180bbaba0;
  plVar2 = DAT_180bbab70;
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_b8;
  pcVar1 = *(code **)(*DAT_180bbab70 + 0x60);
  if (DAT_180bbaba0 != 0) {
    DAT_180bbaba0 = 0;
    (**(code **)(*(longlong *)lVar3 + 0x10))();
  }
  local_98 = &DAT_180bbaba0;
  iVar4 = (*pcVar1)(plVar2,&DAT_1807121b0,0x3c8,0);
  lVar3 = DAT_180bbaba8;
  plVar2 = DAT_180bbab70;
  if (-1 < iVar4) {
    pcVar1 = *(code **)(*DAT_180bbab70 + 0x78);
    if (DAT_180bbaba8 != 0) {
      DAT_180bbaba8 = 0;
      (**(code **)(*(longlong *)lVar3 + 0x10))();
    }
    local_98 = &DAT_180bbaba8;
    iVar4 = (*pcVar1)(plVar2,&DAT_180711ed0,0x2d8,0);
    lVar3 = DAT_180bbabb0;
    plVar2 = DAT_180bbab70;
    if (-1 < iVar4) {
      local_78 = "POSITION";
      local_70 = 0;
      local_6c = 0x10;
      local_64 = 0;
      local_5c = 0;
      local_58 = "TEXCOORD";
      local_50 = 0;
      local_4c = 0x10;
      local_44 = 8;
      local_3c = 0;
      local_38 = "COLOR";
      local_30 = 0;
      local_2c = 0x1c;
      local_24 = 0x10;
      local_1c = 0;
      pcVar1 = *(code **)(*DAT_180bbab70 + 0x58);
      if (DAT_180bbabb0 != 0) {
        DAT_180bbabb0 = 0;
        (**(code **)(*(longlong *)lVar3 + 0x10))();
      }
      local_90 = &DAT_180bbabb0;
      local_98 = (longlong *)0x3c8;
      (*pcVar1)(plVar2,&local_78,3,&DAT_1807121b0);
    }
  }
}



