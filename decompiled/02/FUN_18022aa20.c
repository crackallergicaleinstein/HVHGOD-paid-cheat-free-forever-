// FUN_18022aa20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18022aa20 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18022aa20(longlong param_1,longlong param_2,uint param_3,undefined8 param_4)

{
  uint uVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  char cVar6;
  int iVar7;
  ULONGLONG UVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined1 auStack_6b8 [32];
  undefined **local_698;
  char *local_690;
  undefined *local_688;
  undefined4 local_680;
  undefined4 local_678;
  undefined1 local_670;
  char local_66f;
  undefined *local_668 [2];
  char local_658 [1544];
  ulonglong local_50;
  
  local_50 = DAT_1808d5f00 ^ (ulonglong)auStack_6b8;
  local_678 = param_3;
  if ((DAT_180cd3ae0 & 1) == 0) {
    DAT_180cd3ae0 = DAT_180cd3ae0 | 1;
    FUN_18022a170();
  }
  if (DAT_180cd3ae8 != 0) {
    lVar11 = 0;
    iVar7 = DAT_180c63ddc;
    if (DAT_180c63ddc == 0) {
      UVar8 = GetTickCount64();
      if (UVar8 < DAT_180c63de0) {
        iVar7 = 0;
      }
      else {
        local_668[0] = &DAT_1808ebae0;
        iVar7 = FUN_1805f68d0(&DAT_1808ebae0);
        if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(5);
        }
        if (DAT_1808ebb2c == 0x7fffffff) {
          DAT_1808ebb2c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(6);
        }
        if ((DAT_180c63ddc == 0) && (DAT_180c63de0 <= UVar8)) {
          DAT_180c63ddc = FUN_1804174b0("C_EconItemView",0x34b55816);
          if (DAT_180c63ddc == 0) {
            DAT_180c63de0 = UVar8 + 1000;
          }
          else {
            DAT_180c63de0 = 0xffffffffffffffff;
          }
        }
        iVar7 = DAT_180c63ddc;
        FUN_1805f68fc(&DAT_1808ebae0);
      }
    }
    lVar9 = FUN_18017ea70();
    *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
    bVar2 = false;
    if (iVar7 + param_2 != 0) {
      local_668[0] = (undefined *)0x0;
      cVar6 = FUN_1804514f0(local_668,iVar7 + param_2,8);
      if (cVar6 == '\0') {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
    }
    puVar5 = local_668[0];
    lVar9 = FUN_18017ea70();
    if (*(int *)(lVar9 + 4) != 0) {
      *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
    }
    lVar9 = DAT_180cd3ae8;
    if (bVar2) {
      plVar12 = (longlong *)
                (((((((ulonglong)(local_678 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                    (ulonglong)local_678._1_1_) * 0x100000001b3 ^ (ulonglong)local_678._2_1_) *
                   0x100000001b3 ^ (ulonglong)local_678._3_1_) * 0x100000001b3 & DAT_180bbee40) *
                 0x10 + DAT_180bbee28);
      lVar10 = plVar12[1];
      if (lVar10 == DAT_180bbee18) {
LAB_18022ac00:
        lVar10 = 0;
      }
      else {
        uVar1 = *(uint *)(lVar10 + 0x10);
        while (local_678 != uVar1) {
          if (lVar10 == *plVar12) goto LAB_18022ac00;
          lVar10 = *(longlong *)(lVar10 + 8);
          uVar1 = *(uint *)(lVar10 + 0x10);
        }
      }
      lVar13 = DAT_180bbee18;
      if (lVar10 != 0) {
        lVar13 = lVar10;
      }
      if (((lVar13 == DAT_180bbee18) || (*(longlong *)(lVar13 + 0x18) != param_1)) ||
         (*(undefined **)(lVar13 + 0x20) != puVar5)) {
        local_668[0] = (undefined *)CONCAT44(local_668[0]._4_4_,0xffffffff);
        cVar6 = FUN_1804513c0(DAT_180cd3ae8,1,2);
        if (cVar6 == '\0') {
        }
        lVar10 = FUN_18017ea70();
        *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
        FUN_1801ae0e0(&local_670,lVar9,param_1,local_668);
        lVar9 = FUN_18017ea70();
        if (*(int *)(lVar9 + 4) != 0) {
          *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
        }
        if (local_66f == '\0') {
        }
        if (((uint)local_668[0] != -1) && (lVar11 = FUN_1803d4150(), lVar11 != 0)) {
          if (((uint)local_668[0] & 0x7fff) < 0x4000) {
          }
          cVar6 = FUN_18022a5d0(lVar11,param_1,"C_KeychainModule");
          if (cVar6 == '\0') {
          }
        }
        uVar4 = DAT_180cd3af8;
        uVar3 = DAT_180cd3af0;
        cVar6 = FUN_1804513c0(DAT_180cd3af8,1,2);
        if (cVar6 == '\0') {
        }
        lVar9 = FUN_18017ea70();
        *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
        cVar6 = FUN_180230060(uVar4,param_1,uVar3);
        lVar9 = FUN_18017ea70();
        if (*(int *)(lVar9 + 4) != 0) {
          *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
        }
        if (cVar6 == '\0') {
        }
        if ((lVar11 != 0) && (cVar6 = FUN_1801a5f80(DAT_180cd3b00,lVar11), cVar6 == '\0')) {
        }
        FUN_18063ab10(local_658,0,0x600);
        local_680 = (uint)local_668[0];
        local_688 = puVar5;
        local_690 = (char *)CONCAT44(local_690._4_4_,local_678);
        local_698 = (undefined **)param_1;
        FUN_18015ad60(local_658,0x600,0xffffffffffffffff,
                      "model=%p handle=0x%x item=%llu old_source=0x%x reason=item_changed native_XYZ_reload=1"
                     );
        local_698 = &PTR_180700558;
        if (local_658[0] != '\0') {
          local_698 = (undefined **)&DAT_1806bcfc0;
        }
        local_690 = local_658;
        FUN_1800f6900(0,local_690,"SkinChanger","WORLD_CHARM_INVALIDATED");
      }
      cVar6 = FUN_18022f0e0(param_4,param_1,param_2,0);
      if (cVar6 != '\0') {
        if (0x7f < DAT_180bbee20) {
          plVar12 = (longlong *)
                    (((((((ulonglong)local_678 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                        (ulonglong)local_678._1_1_) * 0x100000001b3 ^ (ulonglong)local_678._2_1_) *
                       0x100000001b3 ^ (ulonglong)local_678._3_1_) * 0x100000001b3 & DAT_180bbee40)
                     * 0x10 + DAT_180bbee28);
          lVar11 = plVar12[1];
          if (lVar11 == DAT_180bbee18) {
LAB_18022ae64:
            FUN_18022f870(&DAT_180bbee10);
          }
          else {
            uVar1 = *(uint *)(lVar11 + 0x10);
            while (local_678 != uVar1) {
              if (lVar11 == *plVar12) goto LAB_18022ae64;
              lVar11 = *(longlong *)(lVar11 + 8);
              uVar1 = *(uint *)(lVar11 + 0x10);
            }
          }
        }
        plVar12 = (longlong *)FUN_1802303c0();
        lVar11 = *plVar12;
        *(longlong *)(lVar11 + 0x18) = param_1;
        *(undefined **)(lVar11 + 0x20) = puVar5;
      }
    }
  }
}



