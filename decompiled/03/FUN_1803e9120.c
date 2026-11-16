// FUN_1803e9120 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803e9120 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1803e9120(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  code *pcVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  undefined1 auStack_148 [32];
  longlong *local_128;
  undefined *local_120;
  undefined8 local_118;
  longlong *local_110;
  undefined4 local_f8 [2];
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e4;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined1 local_d0 [16];
  undefined4 local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_1808d5f00 ^ (ulonglong)auStack_148;
  pcVar1 = *(code **)*param_2;
  plVar2 = (longlong *)*param_1;
  if (plVar2 != (longlong *)0x0) {
    *param_1 = 0;
    (**(code **)(*plVar2 + 0x10))();
  }
  iVar4 = (*pcVar1)(param_2,&DAT_18080cdd8,param_1);
  if (-1 < iVar4) {
    pcVar1 = *(code **)*param_3;
    plVar2 = (longlong *)param_1[1];
    if (plVar2 != (longlong *)0x0) {
      param_1[1] = 0;
      (**(code **)(*plVar2 + 0x10))();
    }
    iVar4 = (*pcVar1)(param_3,&DAT_18080cde8,param_1 + 1);
    if (-1 < iVar4) {
      local_f8[0] = (**(code **)(*param_2 + 0x128))(param_2);
      plVar2 = (longlong *)*param_1;
      pcVar1 = *(code **)(*plVar2 + 0x178);
      local_110 = param_1 + 2;
      plVar3 = (longlong *)*local_110;
      if (plVar3 != (longlong *)0x0) {
        *local_110 = 0;
        (**(code **)(*plVar3 + 0x10))();
      }
      local_118 = 0;
      local_120 = &DAT_18080c258;
      local_128 = (longlong *)CONCAT44(local_128._4_4_,7);
      iVar4 = (*pcVar1)(plVar2,0,local_f8,1);
      if (-1 < iVar4) {
        pcVar1 = *(code **)(*param_2 + 0x60);
        plVar2 = param_1 + 3;
        plVar3 = (longlong *)*plVar2;
        if (plVar3 != (longlong *)0x0) {
          *plVar2 = 0;
          (**(code **)(*plVar3 + 0x10))();
        }
        local_128 = plVar2;
        iVar4 = (*pcVar1)(param_2,&DAT_18070f220,0x2e0,0);
        if (-1 < iVar4) {
          pcVar1 = *(code **)(*param_2 + 0x78);
          plVar2 = param_1 + 4;
          plVar3 = (longlong *)*plVar2;
          if (plVar3 != (longlong *)0x0) {
            *plVar2 = 0;
            (**(code **)(*plVar3 + 0x10))();
          }
          local_128 = plVar2;
          iVar4 = (*pcVar1)(param_2,&DAT_18070d390,0x1e88,0);
          if (-1 < iVar4) {
            pcVar1 = *(code **)(*param_2 + 0x78);
            plVar2 = param_1 + 5;
            plVar3 = (longlong *)*plVar2;
            if (plVar3 != (longlong *)0x0) {
              *plVar2 = 0;
              (**(code **)(*plVar3 + 0x10))();
            }
            local_128 = plVar2;
            iVar4 = (*pcVar1)(param_2,&DAT_18070d0f0,0x29c,0);
            if (-1 < iVar4) {
              pcVar1 = *(code **)(*param_2 + 0x78);
              plVar2 = param_1 + 6;
              plVar3 = (longlong *)*plVar2;
              if (plVar3 != (longlong *)0x0) {
                *plVar2 = 0;
                (**(code **)(*plVar3 + 0x10))();
              }
              local_128 = plVar2;
              iVar4 = (*pcVar1)(param_2,&DAT_1807101d0,0x13c4,0);
              if (-1 < iVar4) {
                pcVar1 = *(code **)(*param_2 + 0x78);
                plVar2 = param_1 + 7;
                plVar3 = (longlong *)*plVar2;
                if (plVar3 != (longlong *)0x0) {
                  *plVar2 = 0;
                  (**(code **)(*plVar3 + 0x10))();
                }
                local_128 = plVar2;
                iVar4 = (*pcVar1)(param_2,&DAT_18070f500,0xccc,0);
                if (-1 < iVar4) {
                  local_e4 = 0;
                  local_dc = 0;
                  local_f0 = 0x10;
                  local_e8 = 4;
                  local_a0 = 0;
                  uStack_98 = 0;
                  uStack_90 = 0;
                  uStack_88 = 0;
                  local_b0 = 0x15;
                  local_a4 = 3;
                  local_a8 = 3;
                  local_ac = 3;
                  local_80 = 0x7f7fffff;
                  local_d0 = (undefined1  [16])0x0;
                  local_bc = 0;
                  local_b4 = 0;
                  local_d8 = 3;
                  local_d4 = 1;
                  local_c0 = 1;
                  local_74 = 0;
                  local_68 = 0;
                  uStack_60 = 0;
                  uStack_58 = 0;
                  uStack_50 = 0;
                  local_48 = 0;
                  local_78 = 0;
                  local_6c = 0;
                  pcVar1 = *(code **)(*param_2 + 0x18);
                  plVar2 = (longlong *)param_1[8];
                  if (plVar2 != (longlong *)0x0) {
                    param_1[8] = 0;
                    (**(code **)(*plVar2 + 0x10))();
                  }
                  iVar4 = (*pcVar1)(param_2,&local_f0,0,param_1 + 8);
                  if (-1 < iVar4) {
                    pcVar1 = *(code **)(*param_2 + 0xb8);
                    plVar2 = (longlong *)param_1[9];
                    if (plVar2 != (longlong *)0x0) {
                      param_1[9] = 0;
                      (**(code **)(*plVar2 + 0x10))();
                    }
                    iVar4 = (*pcVar1)(param_2,&local_b0,param_1 + 9);
                    if (-1 < iVar4) {
                      pcVar1 = *(code **)(*param_2 + 0xb0);
                      plVar2 = (longlong *)param_1[10];
                      if (plVar2 != (longlong *)0x0) {
                        param_1[10] = 0;
                        (**(code **)(*plVar2 + 0x10))();
                      }
                      iVar4 = (*pcVar1)(param_2,&local_d8,param_1 + 10);
                      if (-1 < iVar4) {
                        pcVar1 = *(code **)(*param_2 + 0xa8);
                        plVar2 = (longlong *)param_1[0xb];
                        if (plVar2 != (longlong *)0x0) {
                          param_1[0xb] = 0;
                          (**(code **)(*plVar2 + 0x10))();
                        }
                        (*pcVar1)(param_2,&local_78,param_1 + 0xb);
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
  }
}



