// FUN_180437520 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180437520 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_180437520(longlong **param_1,undefined8 *param_2,int *param_3,int *param_4)

{
  longlong *plVar1;
  longlong **pplVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStackY_128 [32];
  longlong *local_e0;
  longlong *local_d8;
  longlong *local_d0;
  longlong *local_c8;
  longlong **local_c0;
  int local_b8 [2];
  longlong *local_b0;
  int local_a8 [2];
  undefined1 local_a0 [16];
  longlong local_90;
  int local_88;
  int local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined8 local_74;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_1808d5f00 ^ (ulonglong)auStackY_128;
  local_c0 = param_1;
  if ((DAT_180cd48e0 & 1) == 0) {
    DAT_180cd48e0 = DAT_180cd48e0 | 1;
    DAT_180cd48e8 = 0;
    CoCreateInstance((IID *)&DAT_1807c6830,(LPUNKNOWN)0x0,1,(IID *)&DAT_1807c67d8,
                     (LPVOID *)&DAT_180cd48e8);
    atexit(FUN_1806630f0);
  }
  if (DAT_180cd48e8 == 0) {
    *param_1 = (longlong *)0x0;
  }
  else {
    local_e0 = (longlong *)0x0;
    iVar3 = (**(code **)(*(longlong *)DAT_180cd48e8 + 0x70))(DAT_180cd48e8,&local_e0);
    if (iVar3 < 0) {
      *param_1 = (longlong *)0x0;
    }
    else {
      iVar3 = (**(code **)(*local_e0 + 0x80))(local_e0,*param_2,*(undefined4 *)(param_2 + 1));
      if (iVar3 < 0) {
        *param_1 = (longlong *)0x0;
      }
      else {
        local_d8 = (longlong *)0x0;
        iVar3 = (**(code **)(*(longlong *)DAT_180cd48e8 + 0x20))(DAT_180cd48e8,local_e0,0,0);
        plVar1 = local_d8;
        if (iVar3 < 0) {
          *param_1 = (longlong *)0x0;
          if (local_d8 != (longlong *)0x0) {
            local_d8 = (longlong *)0x0;
            (**(code **)(*plVar1 + 0x10))();
          }
        }
        else {
          local_d0 = (longlong *)0x0;
          iVar3 = (**(code **)(*local_d8 + 0x68))(local_d8,0,&local_d0);
          plVar1 = local_d0;
          if (iVar3 < 0) {
            *param_1 = (longlong *)0x0;
            if (local_d0 != (longlong *)0x0) {
              local_d0 = (longlong *)0x0;
              (**(code **)(*plVar1 + 0x10))();
            }
            plVar1 = local_d8;
            if (local_d8 != (longlong *)0x0) {
              local_d8 = (longlong *)0x0;
              (**(code **)(*plVar1 + 0x10))();
            }
          }
          else {
            (**(code **)(*local_d0 + 0x18))(local_d0,local_b8,local_a8);
            local_c8 = (longlong *)0x0;
            iVar3 = (**(code **)(*(longlong *)DAT_180cd48e8 + 0x50))(DAT_180cd48e8,&local_c8);
            plVar1 = local_c8;
            if (iVar3 < 0) {
              *param_1 = (longlong *)0x0;
              if (local_c8 != (longlong *)0x0) {
                local_c8 = (longlong *)0x0;
                (**(code **)(*plVar1 + 0x10))();
              }
              plVar1 = local_d0;
              if (local_d0 != (longlong *)0x0) {
                local_d0 = (longlong *)0x0;
                (**(code **)(*plVar1 + 0x10))();
              }
              plVar1 = local_d8;
              if (local_d8 != (longlong *)0x0) {
                local_d8 = (longlong *)0x0;
                (**(code **)(*plVar1 + 0x10))();
              }
            }
            else {
              iVar3 = (**(code **)(*local_c8 + 0x40))(local_c8,local_d0,&DAT_1807c6800,0);
              plVar1 = local_c8;
              if (iVar3 < 0) {
                *param_1 = (longlong *)0x0;
                if (local_c8 != (longlong *)0x0) {
                  local_c8 = (longlong *)0x0;
                  (**(code **)(*plVar1 + 0x10))();
                }
                plVar1 = local_d0;
                if (local_d0 != (longlong *)0x0) {
                  local_d0 = (longlong *)0x0;
                  (**(code **)(*plVar1 + 0x10))();
                }
                plVar1 = local_d8;
                if (local_d8 != (longlong *)0x0) {
                  local_d8 = (longlong *)0x0;
                  (**(code **)(*plVar1 + 0x10))();
                }
              }
              else {
                uVar4 = local_b8[0] * local_a8[0] * 4;
                local_a0 = (undefined1  [16])0x0;
                local_90 = 0;
                lVar6 = 0;
                if (uVar4 != 0) {
                  lVar5 = FUN_18015bca0((ulonglong)uVar4);
                  local_a0._0_8_ = lVar5;
                  lVar6 = lVar5 + (ulonglong)uVar4;
                  local_90 = lVar6;
                  FUN_18063ab10(lVar5,0,uVar4);
                  local_a0._8_8_ = lVar6;
                }
                iVar3 = (**(code **)(*local_c8 + 0x38))
                                  (local_c8,0,local_b8[0] * 4,(int)lVar6 - local_a0._0_4_);
                if (iVar3 < 0) {
                  *param_1 = (longlong *)0x0;
                  FUN_180113710(local_a0);
                  plVar1 = local_c8;
                  if (local_c8 != (longlong *)0x0) {
                    local_c8 = (longlong *)0x0;
                    (**(code **)(*plVar1 + 0x10))();
                  }
                  plVar1 = local_d0;
                  if (local_d0 != (longlong *)0x0) {
                    local_d0 = (longlong *)0x0;
                    (**(code **)(*plVar1 + 0x10))();
                  }
                  plVar1 = local_d8;
                  if (local_d8 != (longlong *)0x0) {
                    local_d8 = (longlong *)0x0;
                    (**(code **)(*plVar1 + 0x10))();
                  }
                }
                else {
                  if (param_3 != (int *)0x0) {
                    *param_3 = local_b8[0];
                  }
                  if (param_4 != (int *)0x0) {
                    *param_4 = local_a8[0];
                  }
                  local_74 = 1;
                  local_68 = 0x28;
                  local_88 = local_b8[0];
                  local_84 = local_a8[0];
                  local_80 = 0;
                  local_7c = 1;
                  local_78 = 0x1c;
                  local_6c = 0;
                  local_60 = 1;
                  local_c0 = (longlong **)0x0;
                  iVar3 = (**(code **)(*DAT_180bbab70 + 0x28))(DAT_180bbab70,&local_88,0,&local_c0);
                  pplVar2 = local_c0;
                  if (iVar3 < 0) {
                    *param_1 = (longlong *)0x0;
                    if (local_c0 != (longlong **)0x0) {
                      local_c0 = (longlong **)0x0;
                      (*(code *)(*pplVar2)[2])();
                    }
                    FUN_180113710(local_a0);
                    plVar1 = local_c8;
                    if (local_c8 != (longlong *)0x0) {
                      local_c8 = (longlong *)0x0;
                      (**(code **)(*plVar1 + 0x10))();
                    }
                    plVar1 = local_d0;
                    if (local_d0 != (longlong *)0x0) {
                      local_d0 = (longlong *)0x0;
                      (**(code **)(*plVar1 + 0x10))();
                    }
                    plVar1 = local_d8;
                    if (local_d8 != (longlong *)0x0) {
                      local_d8 = (longlong *)0x0;
                      (**(code **)(*plVar1 + 0x10))();
                    }
                  }
                  else {
                    (**(code **)(*DAT_180bbab78 + 0x180))(DAT_180bbab78,local_c0,0,0);
                    local_54 = 4;
                    local_48 = 0;
                    local_58 = local_78;
                    local_4c = 0xffffffff;
                    local_b0 = (longlong *)0x0;
                    iVar3 = (**(code **)(*DAT_180bbab70 + 0x38))
                                      (DAT_180bbab70,local_c0,&local_58,&local_b0);
                    plVar1 = local_b0;
                    if (iVar3 < 0) {
                      *param_1 = (longlong *)0x0;
                      if (local_b0 != (longlong *)0x0) {
                        local_b0 = (longlong *)0x0;
                        (**(code **)(*plVar1 + 0x10))();
                      }
                      pplVar2 = local_c0;
                      if (local_c0 != (longlong **)0x0) {
                        local_c0 = (longlong **)0x0;
                        (*(code *)(*pplVar2)[2])();
                      }
                      FUN_180113710(local_a0);
                      plVar1 = local_c8;
                      if (local_c8 != (longlong *)0x0) {
                        local_c8 = (longlong *)0x0;
                        (**(code **)(*plVar1 + 0x10))();
                      }
                      plVar1 = local_d0;
                      if (local_d0 != (longlong *)0x0) {
                        local_d0 = (longlong *)0x0;
                        (**(code **)(*plVar1 + 0x10))();
                      }
                      plVar1 = local_d8;
                      if (local_d8 != (longlong *)0x0) {
                        local_d8 = (longlong *)0x0;
                        (**(code **)(*plVar1 + 0x10))();
                      }
                    }
                    else {
                      (**(code **)(*DAT_180bbab78 + 0x1b0))(DAT_180bbab78,local_b0);
                      *param_1 = (longlong *)0x0;
                      if (param_1 != &local_b0) {
                        *param_1 = local_b0;
                        local_b0 = (longlong *)0x0;
                      }
                      plVar1 = local_b0;
                      if (local_b0 != (longlong *)0x0) {
                        local_b0 = (longlong *)0x0;
                        (**(code **)(*plVar1 + 0x10))();
                      }
                      pplVar2 = local_c0;
                      if (local_c0 != (longlong **)0x0) {
                        local_c0 = (longlong **)0x0;
                        (*(code *)(*pplVar2)[2])();
                      }
                      FUN_180113710(local_a0);
                      plVar1 = local_c8;
                      if (local_c8 != (longlong *)0x0) {
                        local_c8 = (longlong *)0x0;
                        (**(code **)(*plVar1 + 0x10))();
                      }
                      plVar1 = local_d0;
                      if (local_d0 != (longlong *)0x0) {
                        local_d0 = (longlong *)0x0;
                        (**(code **)(*plVar1 + 0x10))();
                      }
                      plVar1 = local_d8;
                      if (local_d8 != (longlong *)0x0) {
                        local_d8 = (longlong *)0x0;
                        (**(code **)(*plVar1 + 0x10))();
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    plVar1 = local_e0;
    if (local_e0 != (longlong *)0x0) {
      local_e0 = (longlong *)0x0;
      (**(code **)(*plVar1 + 0x10))();
    }
  }
}



