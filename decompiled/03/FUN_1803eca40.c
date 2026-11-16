// FUN_1803eca40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803eca40 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1803eca40(undefined8 *param_1,int param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  short ****ppppsVar3;
  char cVar4;
  char cVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined **ppuVar9;
  longlong lVar10;
  undefined8 *puVar11;
  short ****ppppsVar12;
  short ****ppppsVar13;
  undefined1 auStack_6b8 [32];
  undefined **local_698;
  undefined8 *local_690;
  undefined1 local_688;
  short ****local_678;
  short ****local_670;
  undefined1 local_668;
  short ****local_660;
  short ****local_658 [2];
  undefined8 local_648;
  undefined8 local_640;
  undefined8 local_638;
  undefined4 local_630;
  undefined4 local_62c;
  undefined8 local_628;
  undefined4 local_620;
  undefined1 local_61c;
  undefined2 local_61b;
  undefined1 local_619;
  undefined8 local_618;
  undefined4 uStack_610;
  undefined4 uStack_60c;
  undefined8 uStack_608;
  undefined4 uStack_600;
  undefined4 uStack_5fc;
  undefined8 local_5f8;
  undefined4 uStack_5f0;
  undefined4 uStack_5ec;
  undefined8 local_5e8;
  undefined8 local_5e0;
  undefined4 local_5d8;
  undefined1 local_5d4;
  undefined1 local_5d3 [3];
  undefined1 local_5d0 [256];
  undefined8 local_4d0;
  ulonglong local_40;
  
  uVar2 = DAT_180bb83c0;
  local_40 = DAT_1808d5f00 ^ (ulonglong)auStack_6b8;
  local_660 = DAT_180bb83c8;
  if (DAT_180bb83c8 == (short ****)0x0) {
    uVar6 = 0;
    local_658[0] = (short ****)0x0;
  }
  else {
    uVar6 = 0;
    local_658[0] = DAT_180bb83c8;
    if ((*(short *)DAT_180bb83c8 == 0x5a4d) &&
       (*(int *)((longlong)*(int *)((longlong)DAT_180bb83c8 + 0x3c) + (longlong)DAT_180bb83c8) ==
        0x4550)) {
      uVar6 = (ulonglong)
              *(uint *)((longlong)*(int *)((longlong)DAT_180bb83c8 + 0x3c) + 0x50 +
                       (longlong)DAT_180bb83c8);
    }
  }
  local_658[0] = (short ****)(uVar6 + (longlong)local_658[0]);
  local_678 = (short ****)&local_660;
  local_670 = (short ****)local_658;
  uVar7 = FUN_1803ecfb0(&local_678,DAT_180bb83c0,0xd);
  cVar4 = FUN_1804513c0(uVar7,1,2);
  cVar5 = '\0';
  if (cVar4 != '\0') {
    lVar8 = FUN_18017ea70();
    *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
    FUN_1801ad7c0(&local_678,uVar7,uVar2);
    lVar8 = FUN_18017ea70();
    if (*(int *)(lVar8 + 4) != 0) {
      *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
    }
    cVar5 = (char)local_670;
  }
  ppppsVar13 = local_678;
  if (cVar5 == '\0') {
    ppppsVar13 = (short ****)0x0;
  }
  ppuVar9 = (undefined **)GetTickCount64();
  cVar5 = DAT_180c70e22;
  if (param_2 != 2) {
    LOCK();
    DAT_180c70e22 = '\0';
    UNLOCK();
    if (cVar5 != '\0') {
      local_62c = 0;
      local_61b = 0;
      local_619 = 0;
      FUN_18063ab10(local_5d3,0,0x10b);
      local_648 = 0;
      local_640 = 0;
      local_638 = 0;
      local_630 = 0;
      local_628 = 0;
      local_620 = 0;
      local_61c = 0;
      local_618 = 0;
      uStack_610 = 0xffffffff;
      uStack_60c = 0;
      uStack_608 = 0;
      uStack_600 = 0xffffffff;
      uStack_5fc = 0;
      local_5f8 = 0;
      uStack_5f0 = 0xffffffff;
      uStack_5ec = 0;
      local_5e8 = 0;
      local_5e0 = 0;
      local_5d8 = 0;
      local_5d4 = 0;
      FUN_18063ab10(local_5d0,0,0x100);
      FUN_1801a53f0(local_5d0);
      local_4d0 = 0;
      DAT_1808e4b30 = local_648;
      _DAT_1808e4b38 = local_640;
      DAT_1808e4b40 = (undefined4)local_638;
      DAT_1808e4b44 = local_638._4_4_;
      DAT_1808e4b48 = local_630;
      _DAT_1808e4b50 = local_628;
      _DAT_1808e4b58 = local_620;
      DAT_1808e4b5c = local_61c;
      uRam00000001808e4b68 = CONCAT44(uStack_60c,uStack_610);
      uRam00000001808e4b78 = CONCAT44(uStack_5fc,uStack_600);
      _DAT_1808e4b60 = local_618;
      uRam00000001808e4b70 = uStack_608;
      uRam00000001808e4b88 = CONCAT44(uStack_5ec,uStack_5f0);
      _DAT_1808e4b80 = local_5f8;
      _DAT_1808e4b90 = local_5e8;
      _DAT_1808e4b98 = local_5e0;
      _DAT_1808e4ba0 = local_5d8;
      DAT_1808e4ba4 = local_5d4;
      FUN_1801b4110(&DAT_1808e4ba8,local_5d0);
      DAT_1808e4ca8 = local_4d0;
      _eh_vector_destructor_iterator_(local_5d0,0x40,4,thunk_FUN_18015c010);
    }
  }
  puVar11 = &DAT_1808e4b30;
  if (param_2 == 2) {
    puVar11 = (undefined8 *)&DAT_1808e4cb0;
  }
  local_688 = local_668;
  local_690 = (undefined8 *)CONCAT44(local_690._4_4_,param_2);
  local_698 = ppuVar9;
  lVar8 = FUN_1803f75a0(puVar11,ppppsVar13,local_660,(longlong)local_658[0] - (longlong)local_660);
  if (((param_2 == 0) && (lVar8 != 0)) && (lVar8 != DAT_180c7c458)) {
    LOCK();
    DAT_180c7c4e8 = DAT_180c7c4e8 + 1;
    UNLOCK();
    DAT_180c7c458 = lVar8;
  }
  if ((lVar8 != *(longlong *)(&DAT_180c7c440 + (longlong)param_2 * 8)) &&
     ((lVar8 != 0 || (param_2 != 0)))) {
    FUN_18063ab10(&local_648,0,0x600);
    local_698 = (undefined **)lVar8;
    if (param_2 == 2) {
      FUN_18015ad60(&local_648,0x600,0xffffffffffffffff,
                    "panel=0x%llx root=CSGOPopups background_poll=1");
    }
    else {
      local_690 = (undefined8 *)CONCAT44(local_690._4_4_,(uint)(param_2 == 1));
      FUN_18015ad60(&local_648,0x600,0xffffffffffffffff,"panel=0x%llx main_menu_only=%d");
    }
    local_698 = &PTR_180700558;
    if ((char)local_648 != '\0') {
      local_698 = (undefined **)&DAT_1806bcfc0;
    }
    local_690 = &local_648;
    FUN_1800f6900(0);
    *(longlong *)(&DAT_180c7c440 + (longlong)param_2 * 8) = lVar8;
  }
  if ((ppppsVar13 != (short ****)0x0) && (lVar8 != 0)) {
    if (param_3 != (undefined8 *)0x0) {
      if (ppuVar9 < (undefined **)*param_3) {
      }
      *param_3 = (undefined *)((longlong)ppuVar9 + 500);
    }
    lVar10 = FUN_18017ea70();
    *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
    local_678 = (short ****)0x0;
    cVar5 = FUN_1804514f0(&local_678,lVar8,8);
    ppppsVar12 = local_678;
    lVar10 = FUN_18017ea70();
    if (*(int *)(lVar10 + 4) != 0) {
      *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
    }
    if ((cVar5 != '\0') && (ppppsVar12 != (short ****)0x0)) {
      if (0xf < (ulonglong)param_1[3]) {
        param_1 = (undefined8 *)*param_1;
      }
      lVar10 = FUN_18017ea70();
      *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
      local_678 = (short ****)0x0;
      cVar5 = FUN_1804514f0(&local_678,ppppsVar13,8);
      ppppsVar12 = local_678;
      lVar10 = FUN_18017ea70();
      if (*(int *)(lVar10 + 4) != 0) {
        *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
      }
      if ((cVar5 == '\0') || (ppppsVar12 == (short ****)0x0)) {
        ppppsVar12 = (short ****)0x0;
      }
      else {
        lVar10 = FUN_18017ea70();
        *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
        ppppsVar12 = ppppsVar12 + 0x4d;
        if (ppppsVar12 == (short ****)0x0) {
          bVar1 = false;
        }
        else {
          local_678 = (short ****)0x0;
          cVar5 = FUN_1804514f0(&local_678,ppppsVar12,8);
          if (cVar5 == '\0') {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
        }
        ppppsVar3 = local_678;
        lVar10 = FUN_18017ea70();
        if (*(int *)(lVar10 + 4) != 0) {
          *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
        }
        ppppsVar12 = (short ****)0x0;
        if (bVar1) {
          ppppsVar12 = ppppsVar3;
        }
      }
      if ((ppppsVar12 < local_660) || (local_658[0] <= ppppsVar12)) {
        ppppsVar12 = (short ****)0x0;
      }
      cVar5 = FUN_1804513c0(ppppsVar12,1,2);
      if (cVar5 != '\0') {
        lVar10 = FUN_18017ea70();
        *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
        FUN_1801af860(ppppsVar12,ppppsVar13,lVar8,param_1);
        lVar8 = FUN_18017ea70();
        if (*(int *)(lVar8 + 4) != 0) {
          *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
        }
      }
    }
  }
}



