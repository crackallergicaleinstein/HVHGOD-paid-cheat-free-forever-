// FUN_1801409d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801409d0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801409d0(longlong *param_1,char param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong *plStack_50;
  undefined1 local_48 [16];
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_1808d5f00 ^ (ulonglong)auStack_78;
  if ((param_2 != '\x01') && (param_2 != '\x02')) {
    if (((param_2 == '\x03') || (param_2 == '\b')) && (*param_1 == 0)) {
    }
    goto LAB_180140d17;
  }
  if (*param_1 == 0) {
  }
  local_48 = (undefined1  [16])0x0;
  local_38 = (longlong *)0x0;
  lVar2 = ((longlong *)*param_1)[1];
  if (param_2 == '\x02') {
    FUN_1801518c0(local_48,lVar2 - *(longlong *)*param_1 >> 4);
    plVar5 = (longlong *)((undefined8 *)*param_1)[1];
    plVar7 = *(longlong **)*param_1;
    if (plVar7 == plVar5) goto LAB_180140b5b;
    plVar4 = (longlong *)local_48._8_8_;
    do {
      if (plVar4 == local_38) {
        FUN_18014fc20(local_48,plVar4,plVar7);
        plVar4 = (longlong *)local_48._8_8_;
      }
      else {
        lVar2 = plVar7[1];
        *plVar4 = *plVar7;
        plVar4[1] = lVar2;
        *(undefined1 *)plVar7 = 0;
        plVar7[1] = 0;
        plVar4 = (longlong *)(local_48._8_8_ + 0x10);
        local_48._8_8_ = plVar4;
      }
      plVar7 = plVar7 + 2;
    } while (plVar7 != plVar5);
  }
  else {
    FUN_1801518c0(local_48,lVar2);
    plVar5 = (longlong *)**(longlong **)*param_1;
    if (*(char *)((longlong)plVar5 + 0x19) == '\0') {
      plVar4 = (longlong *)local_48._8_8_;
      do {
        if (plVar4 == local_38) {
          FUN_18014fc20(local_48);
          plVar4 = (longlong *)local_48._8_8_;
        }
        else {
          lVar2 = plVar5[9];
          *plVar4 = plVar5[8];
          plVar4[1] = lVar2;
          *(undefined1 *)(plVar5 + 8) = 0;
          plVar5[9] = 0;
          plVar4 = (longlong *)(local_48._8_8_ + 0x10);
          local_48._8_8_ = plVar4;
        }
        plVar7 = (longlong *)plVar5[2];
        if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
          cVar1 = *(char *)(*plVar7 + 0x19);
          plVar5 = plVar7;
          plVar7 = (longlong *)*plVar7;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*plVar7 + 0x19);
            plVar5 = plVar7;
            plVar7 = (longlong *)*plVar7;
          }
        }
        else {
          cVar1 = *(char *)(plVar5[1] + 0x19);
          plVar3 = (longlong *)plVar5[1];
          plVar7 = plVar5;
          while ((plVar5 = plVar3, cVar1 == '\0' && (plVar7 == (longlong *)plVar5[2]))) {
            cVar1 = *(char *)(plVar5[1] + 0x19);
            plVar3 = (longlong *)plVar5[1];
            plVar7 = plVar5;
          }
        }
      } while (*(char *)((longlong)plVar5 + 0x19) == '\0');
    }
    else {
LAB_180140b5b:
      plVar4 = (longlong *)local_48._8_8_;
    }
  }
  if ((longlong *)local_48._0_8_ != plVar4) {
    do {
      local_58 = plVar4[-2];
      plStack_50 = (longlong *)plVar4[-1];
      *(undefined1 *)(plVar4 + -2) = 0;
      plVar4[-1] = 0;
      FUN_1800aab30(local_48._8_8_ + -0x10);
      plVar5 = (longlong *)(local_48._8_8_ + -0x10);
      local_48._8_8_ = plVar5;
      if ((char)local_58 == '\x02') {
        plVar4 = (longlong *)plStack_50[1];
        plVar3 = plStack_50;
        for (plVar7 = (longlong *)*plStack_50; plStack_50 = plVar3, plVar7 != plVar4;
            plVar7 = plVar7 + 2) {
          if (plVar5 == local_38) {
            FUN_18014fc20(local_48,plVar5,plVar7);
            plVar5 = (longlong *)local_48._8_8_;
          }
          else {
            lVar2 = plVar7[1];
            *plVar5 = *plVar7;
            plVar5[1] = lVar2;
            *(undefined1 *)plVar7 = 0;
            plVar7[1] = 0;
            plVar5 = (longlong *)(local_48._8_8_ + 0x10);
            local_48._8_8_ = plVar5;
          }
          plVar3 = plStack_50;
        }
        lVar2 = plVar3[1];
        lVar8 = *plVar3;
        if (lVar8 != lVar2) {
          do {
            FUN_1800aab30(lVar8);
            lVar8 = lVar8 + 0x10;
          } while (lVar8 != lVar2);
          plVar3[1] = *plVar3;
        }
      }
      else if ((char)local_58 == '\x01') {
        plVar4 = *(longlong **)*plStack_50;
        cVar1 = *(char *)((longlong)plVar4 + 0x19);
        while (cVar1 == '\0') {
          if (plVar5 == local_38) {
            FUN_18014fc20(local_48);
            plVar5 = (longlong *)local_48._8_8_;
          }
          else {
            lVar2 = plVar4[9];
            *plVar5 = plVar4[8];
            plVar5[1] = lVar2;
            *(undefined1 *)(plVar4 + 8) = 0;
            plVar4[9] = 0;
            plVar5 = (longlong *)(local_48._8_8_ + 0x10);
            local_48._8_8_ = plVar5;
          }
          plVar7 = (longlong *)plVar4[2];
          if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
            cVar1 = *(char *)(*plVar7 + 0x19);
            plVar4 = plVar7;
            plVar7 = (longlong *)*plVar7;
            while (cVar1 == '\0') {
              cVar1 = *(char *)(*plVar7 + 0x19);
              plVar4 = plVar7;
              plVar7 = (longlong *)*plVar7;
            }
          }
          else {
            cVar1 = *(char *)(plVar4[1] + 0x19);
            plVar3 = (longlong *)plVar4[1];
            plVar7 = plVar4;
            while ((plVar4 = plVar3, cVar1 == '\0' && (plVar7 == (longlong *)plVar4[2]))) {
              cVar1 = *(char *)(plVar4[1] + 0x19);
              plVar3 = (longlong *)plVar4[1];
              plVar7 = plVar4;
            }
          }
          cVar1 = *(char *)((longlong)plVar4 + 0x19);
        }
        FUN_1801516e0(plStack_50);
      }
      FUN_1800aab30(&local_58);
      plVar4 = (longlong *)local_48._8_8_;
    } while (local_48._0_8_ != local_48._8_8_);
  }
  FUN_180156a70(local_48);
LAB_180140d17:
  if (param_2 == '\x01') {
    FUN_1801577b0(*param_1,*param_1);
    uVar6 = 0x10;
  }
  else if (param_2 == '\x02') {
    FUN_180156a70(*param_1);
    uVar6 = 0x18;
  }
  else if (param_2 == '\x03') {
    FUN_18015c010(*param_1);
    uVar6 = 0x20;
  }
  else {
    if (param_2 != '\b') {
    }
    FUN_180113710(*param_1);
    uVar6 = 0x28;
  }
  FUN_1804547d0(*param_1,uVar6);
}



