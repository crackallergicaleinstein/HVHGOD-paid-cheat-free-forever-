// FUN_180562cc0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180562cc0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_180562cc0(undefined8 param_1,longlong *param_2,longlong *param_3,ulonglong param_4)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  ulonglong local_70;
  longlong **local_58;
  undefined8 local_50;
  ulonglong local_48;
  longlong *local_40;
  longlong *local_38;
  longlong local_30;
  
  plVar7 = DAT_180c630b0;
  plVar8 = DAT_180c630a8;
  if (param_4 != 0) {
    if ((ulonglong)(DAT_180c630b8 - (longlong)DAT_180c630b0 >> 3) < param_4) {
      lVar4 = (longlong)DAT_180c630b0 - (longlong)DAT_180c630a8 >> 3;
      if (0x1fffffffffffffffU - lVar4 < param_4) {
                    /* WARNING: Subroutine does not return */
        FUN_1801136f0();
      }
      uVar1 = param_4 + lVar4;
      uVar6 = DAT_180c630b8 - (longlong)DAT_180c630a8 >> 3;
      if (0x1fffffffffffffff - (uVar6 >> 1) < uVar6) {
        local_70 = 0x1fffffffffffffff;
      }
      else {
        uVar6 = (uVar6 >> 1) + uVar6;
        local_70 = uVar1;
        if (uVar1 <= uVar6) {
          local_70 = uVar6;
        }
        if (0x1fffffffffffffff < local_70) {
                    /* WARNING: Subroutine does not return */
          FUN_18015bc80();
        }
      }
      plVar3 = (longlong *)FUN_18015bca0(local_70 * 8);
      lVar4 = (longlong)param_2 - (longlong)plVar8 >> 3;
      plVar5 = plVar3 + param_4 + lVar4;
      local_58 = &DAT_180c630a8;
      local_40 = plVar3 + lVar4;
      plVar9 = local_40;
      uVar6 = param_4;
      local_48 = local_70;
      local_38 = plVar5;
      do {
        plVar2 = (longlong *)*param_3;
        *plVar9 = (longlong)plVar2;
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 8))();
        }
        plVar9 = plVar9 + 1;
        param_3 = param_3 + 1;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
      if ((param_4 == 1) && (param_2 == plVar7)) {
        if (plVar8 != plVar7) {
          lVar4 = (longlong)plVar3 - (longlong)plVar8;
          do {
            plVar5 = (longlong *)((longlong)plVar8 + lVar4);
            *plVar5 = 0;
            if (plVar5 != plVar8) {
              *plVar5 = *plVar8;
              *plVar8 = 0;
            }
            plVar8 = plVar8 + 1;
          } while (plVar8 != plVar7);
        }
      }
      else {
        if (plVar8 != param_2) {
          lVar4 = (longlong)plVar3 - (longlong)plVar8;
          do {
            plVar9 = (longlong *)((longlong)plVar8 + lVar4);
            *plVar9 = 0;
            if (plVar9 != plVar8) {
              *plVar9 = *plVar8;
              *plVar8 = 0;
            }
            plVar8 = plVar8 + 1;
          } while (plVar8 != param_2);
        }
        for (; local_40 = plVar3, param_2 != plVar7; param_2 = param_2 + 1) {
          *plVar5 = 0;
          if (plVar5 != param_2) {
            *plVar5 = *param_2;
            *param_2 = 0;
          }
          plVar5 = plVar5 + 1;
        }
      }
      local_50 = 0;
      FUN_1801d5780(&DAT_180c630a8,plVar3,uVar1,local_70);
      FUN_1801d56d0(&local_58);
    }
    else if (param_4 < (ulonglong)((longlong)DAT_180c630b0 - (longlong)param_2 >> 3)) {
      plVar5 = DAT_180c630b0 + -param_4;
      for (plVar8 = plVar5; plVar8 != DAT_180c630b0; plVar8 = plVar8 + 1) {
        *plVar7 = 0;
        if (plVar7 != plVar8) {
          *plVar7 = *plVar8;
          *plVar8 = 0;
        }
        plVar7 = plVar7 + 1;
      }
      plVar8 = DAT_180c630b0;
      while (DAT_180c630b0 = plVar7, param_2 != plVar5) {
        plVar5 = plVar5 + -1;
        plVar8 = plVar8 + -1;
        lVar4 = 0;
        if (&local_30 != plVar5) {
          lVar4 = *plVar5;
          *plVar5 = 0;
        }
        plVar9 = (longlong *)*plVar8;
        *plVar8 = lVar4;
        plVar7 = DAT_180c630b0;
        if (plVar9 != (longlong *)0x0) {
          (**(code **)(*plVar9 + 0x10))();
          plVar7 = DAT_180c630b0;
        }
      }
      for (plVar8 = param_2; plVar8 != param_2 + param_4; plVar8 = plVar8 + 1) {
        plVar7 = (longlong *)*plVar8;
        if (plVar7 != (longlong *)0x0) {
          *plVar8 = 0;
          (**(code **)(*plVar7 + 0x10))();
        }
      }
      lVar4 = (longlong)param_2 - (longlong)param_3;
      do {
        plVar8 = (longlong *)*param_3;
        *(longlong **)(lVar4 + (longlong)param_3) = plVar8;
        if (plVar8 != (longlong *)0x0) {
          (**(code **)(*plVar8 + 8))();
        }
        param_3 = param_3 + 1;
        param_4 = param_4 - 1;
      } while (param_4 != 0);
    }
    else {
      plVar8 = param_2 + param_4;
      plVar5 = param_2;
      if (param_2 == DAT_180c630b0) {
        DAT_180c630b0 = plVar8;
      }
      else {
        do {
          *plVar8 = 0;
          if (plVar8 != plVar5) {
            *plVar8 = *plVar5;
            *plVar5 = 0;
          }
          plVar8 = plVar8 + 1;
          plVar5 = plVar5 + 1;
        } while (plVar5 != DAT_180c630b0);
        plVar5 = param_2;
        DAT_180c630b0 = plVar8;
        do {
          plVar8 = (longlong *)*plVar5;
          if (plVar8 != (longlong *)0x0) {
            *plVar5 = 0;
            (**(code **)(*plVar8 + 0x10))();
          }
          plVar5 = plVar5 + 1;
        } while (plVar5 != plVar7);
      }
      lVar4 = (longlong)param_3 - (longlong)param_2;
      do {
        plVar8 = *(longlong **)((longlong)param_2 + lVar4);
        *param_2 = (longlong)plVar8;
        if (plVar8 != (longlong *)0x0) {
          (**(code **)(*plVar8 + 8))();
        }
        param_2 = param_2 + 1;
        param_4 = param_4 - 1;
      } while (param_4 != 0);
    }
  }
  return;
}



