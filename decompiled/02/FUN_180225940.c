// FUN_180225940 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180225940 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180225940(longlong param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  ULONGLONG UVar7;
  longlong lVar8;
  longlong lVar9;
  char *_Str1;
  undefined8 uVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  undefined8 extraout_XMM0_Qa;
  undefined1 auStack_6c8 [32];
  undefined **local_6a8;
  char *local_6a0;
  undefined8 *local_698;
  undefined1 *local_690;
  undefined8 local_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 local_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined4 local_648;
  undefined4 local_644;
  undefined4 local_640;
  undefined1 local_63c [4];
  char local_638 [1544];
  ulonglong local_30;
  
  local_30 = DAT_1808d5f00 ^ (ulonglong)auStack_6c8;
  cVar4 = FUN_180224cb0();
  iVar5 = DAT_180c63e90;
  if (cVar4 != '\0') {
    if ((DAT_180c63e90 == 0) && (UVar7 = GetTickCount64(), DAT_180c63e88 <= UVar7)) {
      local_698 = (undefined8 *)&DAT_1808ebea0;
      iVar5 = FUN_1805f68d0(&DAT_1808ebea0);
      if (iVar5 != 0) goto LAB_180225de7;
      if (DAT_1808ebeec == 0x7fffffff) {
        DAT_1808ebeec = 0x7ffffffe;
        goto LAB_180225ddc;
      }
      if ((DAT_180c63e90 == 0) && (DAT_180c63e88 <= UVar7)) {
        DAT_180c63e90 = FUN_1804174b0("C_CSPlayerPawn",0x2279a8c6);
        if (DAT_180c63e90 == 0) {
          DAT_180c63e88 = UVar7 + 1000;
        }
        else {
          DAT_180c63e88 = 0xffffffffffffffff;
        }
      }
      iVar5 = DAT_180c63e90;
      FUN_1805f68fc(&DAT_1808ebea0);
    }
    iVar6 = DAT_180c63e78;
    if ((DAT_180c63e78 == 0) && (UVar7 = GetTickCount64(), DAT_180c63e80 <= UVar7)) {
      local_698 = (undefined8 *)&DAT_1808ebe50;
      iVar6 = FUN_1805f68d0(&DAT_1808ebe50);
      if (iVar6 != 0) {
LAB_180225de7:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1808ebe9c == 0x7fffffff) {
        DAT_1808ebe9c = 0x7ffffffe;
LAB_180225ddc:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      if ((DAT_180c63e78 == 0) && (DAT_180c63e80 <= UVar7)) {
        DAT_180c63e78 = FUN_1804174b0("C_BaseEntity",0x6d279c31);
        if (DAT_180c63e78 == 0) {
          DAT_180c63e80 = UVar7 + 1000;
        }
        else {
          DAT_180c63e80 = 0xffffffffffffffff;
        }
      }
      iVar6 = DAT_180c63e78;
      FUN_1805f68fc(&DAT_1808ebe50);
    }
    if ((iVar5 != 0) && (iVar6 != 0)) {
      lVar8 = FUN_18017ea70();
      *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
      bVar1 = false;
      if (param_1 + 0xab0 != 0) {
        local_698 = (undefined8 *)((ulonglong)local_698 & 0xffffffff00000000);
        cVar4 = FUN_1804514f0(&local_698,param_1 + 0xab0,4);
        if (cVar4 == '\0') {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
      }
      iVar2 = (int)local_698;
      lVar8 = FUN_18017ea70();
      iVar11 = *(int *)(lVar8 + 4);
      if (iVar11 != 0) {
        iVar11 = iVar11 + -1;
        *(int *)(lVar8 + 4) = iVar11;
      }
      iVar12 = -1;
      if (bVar1) {
        iVar12 = iVar2;
      }
      lVar8 = FUN_1803d4150(iVar11,iVar12);
      if ((lVar8 != 0) && (iVar11 = FUN_180224a80(lVar8), iVar11 != 0)) {
        lVar9 = FUN_18017ea70();
        *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
        bVar1 = false;
        if (iVar5 + lVar8 != 0) {
          local_698 = (undefined8 *)((ulonglong)local_698 & 0xffffffff00000000);
          cVar4 = FUN_1804514f0(&local_698,iVar5 + lVar8,4);
          if (cVar4 == '\0') {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
        }
        uVar3 = (int)local_698;
        lVar8 = FUN_18017ea70();
        iVar5 = *(int *)(lVar8 + 4);
        if (iVar5 != 0) {
          iVar5 = iVar5 + -1;
          *(int *)(lVar8 + 4) = iVar5;
        }
        uVar13 = 0xffffffff;
        if (bVar1) {
          uVar13 = uVar3;
        }
        lVar8 = FUN_1803d4150(iVar5,uVar13);
        if ((((lVar8 != 0) &&
             (_Str1 = (char *)FUN_1803d3fa0(extraout_XMM0_Qa,lVar8), _Str1 != (char *)0x0)) &&
            (iVar5 = strcmp(_Str1,"C_CS2HudModelArms"), iVar5 == 0)) &&
           (iVar5 = FUN_180224a80(lVar8), iVar5 == iVar11)) {
          lVar9 = FUN_18017ea70();
          *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
          bVar1 = false;
          if (iVar6 + lVar8 != 0) {
            local_698 = (undefined8 *)((ulonglong)local_698 & 0xffffffff00000000);
            cVar4 = FUN_1804514f0(&local_698,iVar6 + lVar8,4);
            if (cVar4 == '\0') {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
          }
          iVar5 = (int)local_698;
          lVar9 = FUN_18017ea70();
          if (*(int *)(lVar9 + 4) != 0) {
            *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
          }
          iVar6 = -1;
          if (bVar1) {
            iVar6 = iVar5;
          }
          if (iVar6 == iVar12) {
            DAT_180c630c8 = uVar13;
            uVar10 = FUN_1802196a0(lVar8,0xc3);
            local_688 = 0x8900000048;
            uStack_680 = 0x240000005c;
            uStack_678 = 0x5600000010;
            uStack_670 = 0x8100000048;
            local_668 = 0xc0000000ec;
            uStack_660 = 0;
            uStack_658 = 0xf00000000;
            uStack_650 = 0xf2000000b6;
            local_648 = 0x48;
            local_644 = 0x8b;
            local_640 = 0xd9;
            local_698 = &local_688;
            local_690 = local_63c;
            cVar4 = FUN_1802197b0(uVar10,&local_698);
            if ((cVar4 != '\0') && (cVar4 = FUN_1804513c0(uVar10,1,2), cVar4 != '\0')) {
              lVar9 = FUN_18017ea70();
              *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
              cVar4 = FUN_18022ff70(uVar10,lVar8,0);
              lVar9 = FUN_18017ea70();
              if (*(int *)(lVar9 + 4) != 0) {
                *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
              }
              if ((cVar4 != '\0') && (DAT_180c63e70 != lVar8)) {
                DAT_180c63e70 = lVar8;
                FUN_18063ab10(local_638,0,0x600);
                local_6a8 = (undefined **)lVar8;
                FUN_18015ad60(local_638,0x600,0xffffffffffffffff,
                              "arms=%p scope=owned_preview weapon_animation=preserved visual_ack=pending"
                             );
                local_6a8 = &PTR_180700558;
                if (local_638[0] != '\0') {
                  local_6a8 = (undefined **)&DAT_1806bcfc0;
                }
                local_6a0 = local_638;
                FUN_1800f6900(0);
              }
            }
          }
        }
      }
    }
  }
}



