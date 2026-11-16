// FUN_1805dc810 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805dc810 */

ulonglong FUN_1805dc810(longlong *param_1,int *param_2,longlong param_3,uint *param_4,
                       ulonglong param_5,int *param_6,int *param_7,longlong param_8)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int *piVar10;
  int *piVar11;
  longlong lVar12;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  int local_res8 [2];
  int local_res10;
  longlong local_res18;
  uint *local_res20;
  int *local_70;
  undefined1 local_60 [16];
  undefined8 local_50;
  
  lVar7 = param_8;
  local_res10 = 0;
  iVar3 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  if (param_8 == 0) {
    local_70 = param_6;
    piVar5 = param_7;
  }
  else {
    local_70 = (int *)FUN_1800efe90(param_8);
    piVar5 = (int *)FUN_1805dd580(lVar7);
  }
  iVar4 = (int)param_1[0xeb3];
  uVar6 = 1;
  if (iVar4 == 0) {
    uVar6 = 5;
  }
  piVar15 = param_2;
  if (uVar6 <= param_5) {
    do {
      uVar6 = param_5;
      lVar12 = 0;
      if ((iVar4 == 0) && (3 < param_5)) {
        if ((*param_4 == 0xfd2fb525) || (*param_4 + 0x2d04ada < 2)) {
          lVar7 = FUN_1805dcde0(local_60,param_4,param_5);
          uVar2 = *(ulonglong *)(lVar7 + 8);
          local_50 = *(undefined8 *)(lVar7 + 0x10);
          if (0xffffffffffffff88 < uVar2) {
            return uVar2;
          }
          if (param_1[0xebb] != 0) {
            return 0xffffffffffffffc0;
          }
          if (uVar2 < 4) {
            iVar3 = 0;
          }
          else {
            uVar1 = *param_4;
            if (uVar1 == 0xfd2fb525) {
              iVar3 = 5;
            }
            else if (uVar1 == 0xfd2fb526) {
              iVar3 = 6;
            }
            else {
              iVar3 = 7;
              if (uVar1 != 0xfd2fb527) {
                iVar3 = 0;
              }
            }
          }
          piVar11 = local_res8;
          if (piVar15 != (int *)0x0) {
            piVar11 = piVar15;
          }
          piVar13 = local_res8;
          if (local_70 != (int *)0x0) {
            piVar13 = local_70;
          }
          if (iVar3 == 5) {
            lVar7 = FUN_1805ec270();
            param_3 = local_res18;
            if (lVar7 == 0) {
              return 0xffffffffffffffc0;
            }
            uVar8 = FUN_1805ed8f0(lVar7,piVar11,local_res18,param_4,uVar2,piVar13,piVar5);
            FUN_1805edce0(lVar7);
          }
          else if (iVar3 == 6) {
            lVar7 = FUN_1805efe80();
            param_3 = local_res18;
            if (lVar7 == 0) {
              return 0xffffffffffffffc0;
            }
            uVar8 = FUN_1805f0e40(lVar7,piVar11,local_res18,param_4,uVar2,piVar13,piVar5);
            FUN_1805edce0(lVar7);
          }
          else {
            if (iVar3 != 7) {
              return 0xfffffffffffffff6;
            }
            lVar7 = FUN_1805f31f0();
            param_3 = local_res18;
            if (lVar7 == 0) {
              return 0xffffffffffffffc0;
            }
            uVar8 = FUN_1805f4270(lVar7,piVar11,local_res18,param_4,uVar2,piVar13,piVar5);
            FUN_1805f46a0(lVar7);
          }
          if (0xffffffffffffff88 < uVar8) {
            return uVar8;
          }
          uVar9 = FUN_1805dcf10(param_4);
          if ((uVar9 == 0xfffffffffffffffe) || ((uVar9 != 0xffffffffffffffff && (uVar9 != uVar8))))
          {
            return 0xffffffffffffffec;
          }
          local_res20 = (uint *)((longlong)param_4 + uVar2);
          piVar15 = (int *)((longlong)piVar15 + uVar8);
          param_3 = param_3 - uVar8;
          param_5 = uVar6 - uVar2;
          goto LAB_1805dcd2f;
        }
        if ((param_5 < 4) || ((*param_4 & 0xfffffff0) != 0x184d2a50)) goto LAB_1805dcb20;
        if (param_5 < 8) {
          return 0xffffffffffffffb8;
        }
        uVar1 = param_4[1];
        if (uVar1 + 8 < uVar1) {
          return 0xfffffffffffffff2;
        }
        uVar6 = (ulonglong)uVar1 + 8;
        if (param_5 < uVar6) {
          return 0xffffffffffffffb8;
        }
        local_res20 = (uint *)((longlong)param_4 + uVar6);
        param_5 = param_5 - uVar6;
      }
      else {
LAB_1805dcb20:
        if (lVar7 == 0) {
          param_1[0xe98] = 0;
          param_1[0xe99] = 0;
          param_1[0xe9a] = 0;
          param_1[0xe9b] = 0;
          lVar7 = 1;
          *(undefined4 *)(param_1 + 0x507) = 0xc00000c;
          if (iVar4 == 0) {
            lVar7 = 5;
          }
          param_1[0xe9c] = lVar7;
          param_1[0xea5] = 3;
          param_1[0xea3] = 0;
          param_1[0xea4] = 0;
          param_1[0xea6] = 0;
          *(undefined4 *)(param_1 + 0xebf) = 0;
          *(undefined4 *)(param_1 + 0xebc) = 1;
          *(undefined8 *)((longlong)param_1 + 0x683c) = 0x400000001;
          *(undefined4 *)((longlong)param_1 + 0x6844) = 8;
          param_1[1] = (longlong)(param_1 + 0x306);
          param_1[2] = (longlong)(param_1 + 0x205);
          *param_1 = (longlong)(param_1 + 4);
          param_1[3] = (longlong)(param_1 + 0x507);
          if ((local_70 != (int *)0x0) && (piVar5 != (int *)0x0)) {
            piVar10 = local_70;
            piVar11 = local_70;
            piVar13 = piVar5;
            piVar14 = local_70;
            if (((int *)0x7 < piVar5) && (*local_70 == -0x13cf5bc9)) {
              *(int *)(param_1 + 0xebf) = local_70[1];
              uVar6 = FUN_1805dd2c0(param_1 + 4,local_70,piVar5);
              if (0xffffffffffffff88 < uVar6) {
                return 0xffffffffffffffe2;
              }
              lVar12 = param_1[0xe98];
              piVar11 = (int *)(uVar6 + (longlong)local_70);
              *(undefined4 *)((longlong)param_1 + 0x7534) = 1;
              *(undefined4 *)(param_1 + 0xea6) = 1;
              piVar10 = (int *)((longlong)piVar11 + (param_1[0xe99] - lVar12));
              piVar13 = local_70;
              piVar14 = piVar5;
            }
            param_1[0xe9b] = lVar12;
            param_1[0xe9a] = (longlong)piVar10;
            param_1[0xe99] = (longlong)piVar11;
            param_1[0xe98] = (longlong)piVar13 + (longlong)piVar14;
          }
          iVar3 = local_res10;
        }
        else {
          uVar6 = FUN_1805dc410(param_1,lVar7);
          if (0xffffffffffffff88 < uVar6) {
            return uVar6;
          }
        }
        FUN_1805e46a0(param_1,piVar15,param_3);
        uVar6 = FUN_1805dc540(param_1,piVar15,param_3,&local_res20,&param_5);
        iVar4 = FUN_1805dd560(uVar6);
        if ((iVar4 == 10) && (iVar3 == 1)) {
          return 0xffffffffffffffb8;
        }
        if (0xffffffffffffff88 < uVar6) {
          return uVar6;
        }
        if (uVar6 != 0) {
          piVar15 = (int *)((longlong)piVar15 + uVar6);
        }
        param_3 = param_3 - uVar6;
        local_res10 = 1;
LAB_1805dcd2f:
        lVar7 = param_8;
        iVar3 = local_res10;
        local_res18 = param_3;
      }
      iVar4 = (int)param_1[0xeb3];
      uVar6 = 1;
      if (iVar4 == 0) {
        uVar6 = 5;
      }
      param_4 = local_res20;
    } while (uVar6 <= param_5);
  }
  uVar6 = (longlong)piVar15 - (longlong)param_2;
  if (param_5 != 0) {
    uVar6 = 0xffffffffffffffb8;
  }
  return uVar6;
}



