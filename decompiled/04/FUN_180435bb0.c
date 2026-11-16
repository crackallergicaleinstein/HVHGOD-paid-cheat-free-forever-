// FUN_180435bb0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180435bb0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180435bb0(longlong *param_1,longlong *param_2)

{
  code *pcVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_b8 [48];
  undefined4 *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_60 [2];
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined8 local_44;
  undefined4 local_3c;
  undefined4 local_38;
  undefined8 local_34;
  ulonglong local_28;
  
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_b8;
  if ((param_1 != (longlong *)0x0) && (param_2 != (longlong *)0x0)) {
    plVar2 = (longlong *)DAT_180bbab70;
    if (((longlong *)DAT_180bbab70 != param_1) &&
       ((**(code **)(*param_1 + 8))(), plVar2 = param_1, DAT_180bbab70 != 0)) {
      lVar5 = *(longlong *)DAT_180bbab70;
      DAT_180bbab70 = (longlong)param_1;
      (**(code **)(lVar5 + 0x10))();
      plVar2 = (longlong *)DAT_180bbab70;
    }
    DAT_180bbab70 = (longlong)plVar2;
    plVar2 = (longlong *)DAT_180bbab78;
    if (((longlong *)DAT_180bbab78 != param_2) &&
       ((**(code **)(*param_2 + 8))(param_2), plVar2 = param_2, DAT_180bbab78 != 0)) {
      lVar5 = *(longlong *)DAT_180bbab78;
      DAT_180bbab78 = (longlong)param_2;
      (**(code **)(lVar5 + 0x10))();
      plVar2 = (longlong *)DAT_180bbab78;
    }
    DAT_180bbab78 = (longlong)plVar2;
    cVar3 = FUN_18042c560();
    if ((cVar3 != '\0') &&
       (cVar3 = FUN_18042c760(), lVar6 = DAT_180bbabd8, lVar5 = DAT_180bbab70, cVar3 != '\0')) {
      local_44 = 1;
      local_34 = 0;
      local_58 = 1;
      local_54 = 1;
      local_50 = 1;
      local_4c = 1;
      local_48 = 0x1c;
      local_3c = 1;
      local_38 = 8;
      local_60[0] = 0xffffffff;
      local_88 = local_60;
      local_80 = 4;
      pcVar1 = *(code **)(*(longlong *)DAT_180bbab70 + 0x28);
      if (DAT_180bbabd8 != 0) {
        DAT_180bbabd8 = 0;
        (**(code **)(*(longlong *)lVar6 + 0x10))();
      }
      iVar4 = (*pcVar1)(lVar5,&local_58,&local_88,&DAT_180bbabd8);
      lVar6 = DAT_180bbabe0;
      lVar5 = DAT_180bbab70;
      if (-1 < iVar4) {
        local_74 = 4;
        local_68 = 0;
        local_78 = local_48;
        local_6c = 1;
        pcVar1 = *(code **)(*(longlong *)DAT_180bbab70 + 0x38);
        if (DAT_180bbabe0 != 0) {
          DAT_180bbabe0 = 0;
          (**(code **)(*(longlong *)lVar6 + 0x10))();
        }
        iVar4 = (*pcVar1)(lVar5,DAT_180bbabd8,&local_78,&DAT_180bbabe0);
        if ((-1 < iVar4) && (cVar3 = FUN_18042c9c0(), lVar5 = DAT_180bbab90, cVar3 != '\0')) {
          local_68 = 0;
          local_78 = 0x40;
          local_74 = 0x400000002;
          local_6c = 0x10000;
          pcVar1 = *(code **)(*param_1 + 0x18);
          if (DAT_180bbab90 != 0) {
            DAT_180bbab90 = 0;
            (**(code **)(*(longlong *)lVar5 + 0x10))();
          }
          iVar4 = (*pcVar1)(param_1,&local_78,0,&DAT_180bbab90);
          lVar5 = DAT_180bbab80;
          if (-1 < iVar4) {
            DAT_180bbab98 = 0x140000;
            DAT_180bbab9c = 0x80000;
            local_68 = 0;
            local_78 = 0x140000;
            local_74 = 0x100000002;
            local_6c = 0x10000;
            pcVar1 = *(code **)(*param_1 + 0x18);
            if (DAT_180bbab80 != 0) {
              DAT_180bbab80 = 0;
              (**(code **)(*(longlong *)lVar5 + 0x10))();
            }
            iVar4 = (*pcVar1)(param_1,&local_78,0,&DAT_180bbab80);
            lVar5 = DAT_180bbab88;
            if (-1 < iVar4) {
              local_68 = 0;
              local_78 = DAT_180bbab9c;
              local_74 = 0x200000002;
              local_6c = 0x10000;
              pcVar1 = *(code **)(*param_1 + 0x18);
              if (DAT_180bbab88 != 0) {
                DAT_180bbab88 = 0;
                (**(code **)(*(longlong *)lVar5 + 0x10))();
              }
              iVar4 = (*pcVar1)(param_1,&local_78,0,&DAT_180bbab88);
              if (-1 < iVar4) {
                local_88 = (undefined4 *)&DAT_180ab6420;
                local_80 = 0x53f14;
                lVar5 = FUN_180438560(&local_88,0x41700000,0x400);
                if (lVar5 != 0) {
                  local_88 = (undefined4 *)&DAT_1809c11c0;
                  local_80 = 0xf5258;
                  lVar6 = FUN_180438560(&local_88,0x41700000,0x400);
                  if (lVar6 != 0) {
                    *(longlong *)(lVar5 + 0x88) = lVar6;
                    _DAT_180bbade8 = lVar6;
                  }
                  QueryPerformanceFrequency((LARGE_INTEGER *)&DAT_180bbadf0);
                  QueryPerformanceCounter((LARGE_INTEGER *)&DAT_180bbadf8);
                }
              }
            }
          }
        }
      }
    }
  }
}



