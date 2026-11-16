// FUN_1801f8800 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801f8800 */

void FUN_1801f8800(undefined8 param_1,undefined4 *param_2,int param_3,int *param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  ULONGLONG UVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  byte local_98 [4];
  undefined4 local_94;
  undefined1 local_90;
  undefined4 *local_88;
  undefined8 local_80;
  char *local_78;
  longlong local_70;
  char *local_68;
  undefined8 local_60;
  undefined *local_58;
  
  if (*(char *)(param_2 + 3) == '\0') {
    return;
  }
  if (param_3 < 0) {
    return;
  }
  if (*param_4 == param_3) {
    return;
  }
  local_88 = param_2;
  local_80 = param_1;
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  lVar6 = DAT_1808e78d0;
  lVar5 = DAT_1808da460;
  uVar9 = 0;
  if ((DAT_1808e78d0 == DAT_1808da460) && (lVar7 = DAT_180c63360, DAT_180c63360 != 0))
  goto LAB_1801f89af;
  UVar4 = GetTickCount64();
  if ((lVar6 == lVar5) && (UVar4 < DAT_180c63358)) {
    lVar7 = 0;
  }
  else {
    local_58 = &DAT_1808e7880;
    iVar3 = FUN_1805f68d0(&DAT_1808e7880);
    if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1808e78cc == 0x7fffffff) {
      DAT_1808e78cc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    uVar8 = 1000;
    if (DAT_1808e78d0 == lVar5) {
      if ((DAT_180c63360 == 0) && (DAT_180c63358 <= UVar4)) goto LAB_1801f890f;
    }
    else {
      DAT_1808e7870 = 1000;
LAB_1801f890f:
      lVar6 = -1;
      do {
        local_70 = lVar6 + 1;
        lVar7 = lVar6 + 1;
        lVar6 = local_70;
      } while ("client.dll:85D20F88????????555657"[lVar7] != '\0');
      local_78 = "client.dll:85D20F88????????555657";
      local_68 = "patterns::set_bodygroup";
      local_60 = 0x17;
      DAT_180c63360 = FUN_1800e5d20(&local_68,&local_78);
      DAT_1808e78d0 = lVar5;
      DAT_180c63358 = 0xffffffffffffffff;
      if (DAT_180c63360 == 0) {
        DAT_180c63358 = DAT_1808e7870 + UVar4;
        uVar8 = 60000;
        if (DAT_1808e7870 < 60000) {
          uVar8 = DAT_1808e7870 * 2;
        }
      }
      param_1 = local_80;
      DAT_1808e7870 = uVar8;
    }
    lVar7 = DAT_180c63360;
    FUN_1805f68fc(&DAT_1808e7880);
  }
  param_2 = local_88;
LAB_1801f89af:
  local_98[0] = 0x85;
  local_98[1] = 0xd2;
  local_98[2] = 0xf;
  local_98[3] = 0x88;
  cVar2 = FUN_1804513c0(lVar7,1,2);
  if (cVar2 != '\0') {
    lVar5 = FUN_18017ea70();
    *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + 1;
    if (lVar7 == 0) {
      local_90 = 0;
      bVar1 = false;
    }
    else {
      local_88 = (undefined4 *)((ulonglong)local_88 & 0xffffffff00000000);
      cVar2 = FUN_1804514f0(&local_88,lVar7,4);
      if (cVar2 == '\0') {
        bVar1 = false;
        local_90 = 0;
      }
      else {
        local_94 = local_88._0_4_;
        local_90 = 1;
        bVar1 = true;
      }
    }
    lVar5 = FUN_18017ea70();
    if (*(int *)(lVar5 + 4) != 0) {
      *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + -1;
    }
    if (bVar1) {
      lVar5 = 0;
      do {
        lVar6 = lVar5 + 1;
        if (local_98[lVar5 + 4] != local_98[lVar5]) {
          uVar9 = -(uint)(local_98[lVar5 + 4] < local_98[lVar5]) | 1;
          break;
        }
        lVar5 = lVar6;
      } while (lVar6 != 4);
      if ((uVar9 == 0) && (cVar2 = FUN_1801fabe0(lVar7,param_1,*param_2,param_3), cVar2 != '\0')) {
        *param_4 = param_3;
      }
    }
  }
  return;
}



