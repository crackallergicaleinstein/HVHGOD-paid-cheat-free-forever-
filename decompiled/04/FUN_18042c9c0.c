// FUN_18042c9c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18042c9c0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18042c9c0(void)

{
  code *pcVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_2a8 [32];
  longlong *local_288;
  undefined4 local_278;
  undefined4 local_274;
  undefined4 local_270;
  undefined4 local_26c;
  undefined8 local_268;
  undefined4 local_260;
  undefined4 local_25c;
  undefined1 local_258 [16];
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined4 local_230;
  undefined4 local_22c;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined4 local_218;
  undefined1 local_214;
  undefined1 local_213 [235];
  undefined1 local_128 [36];
  undefined1 local_104;
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_2a8;
  FUN_18063ab10(local_128,0,0x108);
  lVar3 = DAT_180bbaf60;
  plVar2 = DAT_180bbab70;
  local_104 = 0xf;
  pcVar1 = *(code **)(*DAT_180bbab70 + 0xa0);
  if (DAT_180bbaf60 != 0) {
    DAT_180bbaf60 = 0;
    (**(code **)(*(longlong *)lVar3 + 0x10))();
  }
  iVar4 = (*pcVar1)(plVar2,local_128,&DAT_180bbaf60);
  lVar3 = DAT_180bbaf68;
  plVar2 = DAT_180bbab70;
  if (-1 < iVar4) {
    local_258 = (undefined1  [16])0x0;
    local_240 = 0;
    local_260 = 3;
    local_25c = 1;
    local_248 = 1;
    pcVar1 = *(code **)(*DAT_180bbab70 + 0xb0);
    if (DAT_180bbaf68 != 0) {
      DAT_180bbaf68 = 0;
      (**(code **)(*(longlong *)lVar3 + 0x10))();
    }
    iVar4 = (*pcVar1)(plVar2,&local_260,&DAT_180bbaf68);
    lVar3 = DAT_180bbaf58;
    plVar2 = DAT_180bbab70;
    if (-1 < iVar4) {
      local_268 = 0;
      local_278 = 0x10;
      local_274 = 2;
      local_270 = 4;
      local_26c = 0x10000;
      pcVar1 = *(code **)(*DAT_180bbab70 + 0x18);
      if (DAT_180bbaf58 != 0) {
        DAT_180bbaf58 = 0;
        (**(code **)(*(longlong *)lVar3 + 0x10))();
      }
      iVar4 = (*pcVar1)(plVar2,&local_278,0,&DAT_180bbaf58);
      lVar3 = DAT_180bbaf40;
      plVar2 = DAT_180bbab70;
      if (-1 < iVar4) {
        pcVar1 = *(code **)(*DAT_180bbab70 + 0x60);
        if (DAT_180bbaf40 != 0) {
          DAT_180bbaf40 = 0;
          (**(code **)(*(longlong *)lVar3 + 0x10))();
        }
        local_288 = &DAT_180bbaf40;
        iVar4 = (*pcVar1)(plVar2,&DAT_180711690,0x2e0,0);
        lVar3 = DAT_180bbaf48;
        plVar2 = DAT_180bbab70;
        if (-1 < iVar4) {
          pcVar1 = *(code **)(*DAT_180bbab70 + 0x78);
          if (DAT_180bbaf48 != 0) {
            DAT_180bbaf48 = 0;
            (**(code **)(*(longlong *)lVar3 + 0x10))();
          }
          local_288 = &DAT_180bbaf48;
          iVar4 = (*pcVar1)(plVar2,&DAT_180711970,0x560,0);
          lVar3 = DAT_180bbaf50;
          plVar2 = DAT_180bbab70;
          if (-1 < iVar4) {
            pcVar1 = *(code **)(*DAT_180bbab70 + 0x78);
            if (DAT_180bbaf50 != 0) {
              DAT_180bbaf50 = 0;
              (**(code **)(*(longlong *)lVar3 + 0x10))();
            }
            local_288 = &DAT_180bbaf50;
            iVar4 = (*pcVar1)(plVar2,&DAT_180712e60,0x76c,0);
            if (-1 < iVar4) {
              local_238 = 0;
              FUN_18063ab10(local_213,0,0xe3);
              lVar3 = DAT_180bbaf98;
              plVar2 = DAT_180bbab70;
              local_230 = 1;
              local_22c = 2;
              local_228 = 0x100000002;
              uStack_220 = 0x200000002;
              local_218 = 1;
              local_214 = 0xf;
              pcVar1 = *(code **)(*DAT_180bbab70 + 0xa0);
              if (DAT_180bbaf98 != 0) {
                DAT_180bbaf98 = 0;
                (**(code **)(*(longlong *)lVar3 + 0x10))();
              }
              (*pcVar1)(plVar2,&local_238,&DAT_180bbaf98);
            }
          }
        }
      }
    }
  }
}



