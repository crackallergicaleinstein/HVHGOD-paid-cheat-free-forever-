// FUN_180183be0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180183be0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000180183eea) */

void FUN_180183be0(longlong param_1,ulonglong param_2,longlong param_3)

{
  bool bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  char cVar4;
  char cVar5;
  longlong lVar6;
  ULONGLONG UVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined1 auStack_6f8 [32];
  undefined **local_6d8;
  char *local_6d0;
  ulonglong local_6c8;
  ulonglong local_6c0;
  uint local_6b8;
  ulonglong local_6a8;
  longlong local_6a0;
  undefined8 local_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 local_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined4 local_650;
  undefined2 local_64c;
  undefined1 local_64a;
  char local_648 [1544];
  ulonglong local_40;
  
  local_40 = DAT_1808d5f00 ^ (ulonglong)auStack_6f8;
  if ((param_1 != 0) && (param_3 != 0)) {
    local_6a0 = param_1;
    lVar6 = FUN_18017ea70();
    *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
    local_670 = 0;
    uStack_668 = 0;
    uStack_660 = 0;
    uStack_658 = 0;
    local_650 = 0;
    local_64c = 0;
    local_64a = 0;
    cVar4 = FUN_1804514f0(&local_670,param_3,0x27);
    if (cVar4 != '\0') {
      local_698 = local_670;
      uStack_690 = uStack_668;
      uStack_688 = uStack_660;
      uStack_680 = uStack_658;
    }
    lVar6 = FUN_18017ea70();
    if (*(int *)(lVar6 + 4) != 0) {
      *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
    }
    if ((((cVar4 != '\0') && (uStack_690._7_1_ == 'H')) && ((char)uStack_688 == -0x73)) &&
       (((uStack_688._1_1_ == -0x67 && (uStack_680._5_1_ == 'H')) &&
        ((uStack_680._6_1_ == '9' && (uStack_680._7_1_ == -0x6d)))))) {
      lVar6 = FUN_18017ea70();
      *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
      if (param_3 + 0x12 == 0) {
        bVar1 = false;
      }
      else {
        local_6a8 = local_6a8 & 0xffffffff00000000;
        cVar4 = FUN_1804514f0(&local_6a8,param_3 + 0x12,4);
        if (cVar4 == '\0') {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
      }
      iVar8 = (int)local_6a8;
      lVar6 = FUN_18017ea70();
      if (*(int *)(lVar6 + 4) != 0) {
        *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
      }
      iVar9 = -1;
      if (bVar1) {
        iVar9 = iVar8;
      }
      lVar6 = FUN_18017ea70();
      *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
      bVar1 = false;
      if (param_3 + 0x20 != 0) {
        local_6a8 = local_6a8 & 0xffffffff00000000;
        cVar4 = FUN_1804514f0(&local_6a8,param_3 + 0x20,4);
        if (cVar4 == '\0') {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
      }
      uVar2 = local_6a8;
      lVar6 = FUN_18017ea70();
      if (*(int *)(lVar6 + 4) != 0) {
        *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
      }
      iVar8 = -1;
      if (bVar1) {
        iVar8 = (int)uVar2;
      }
      if (((-1 < iVar9) && (-1 < iVar8)) &&
         ((iVar9 < 0x801 && ((iVar8 < 0x801 && (iVar8 + iVar9 < 0x1001)))))) {
        lVar11 = (longlong)iVar9 + iVar8 + param_1;
        lVar6 = FUN_18017ea70();
        *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
        if (lVar11 == 0) {
          bVar1 = false;
        }
        else {
          local_6a8 = 0;
          cVar4 = FUN_1804514f0(&local_6a8,lVar11,8);
          if (cVar4 == '\0') {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
        }
        uVar2 = local_6a8;
        lVar6 = FUN_18017ea70();
        if (*(int *)(lVar6 + 4) != 0) {
          *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
        }
        if ((bVar1) && (uVar2 != param_2)) {
          cVar4 = FUN_1804513c0(param_3,1,2);
          if (cVar4 == '\0') {
            cVar4 = '\0';
          }
          else {
            lVar6 = FUN_18017ea70();
            *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
            cVar4 = FUN_1801ad780(param_3,param_1,param_2);
            lVar6 = FUN_18017ea70();
            if (*(int *)(lVar6 + 4) != 0) {
              *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
            }
          }
          lVar6 = FUN_18017ea70();
          *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
          if (lVar11 == 0) {
            bVar1 = false;
          }
          else {
            local_6a8 = 0;
            cVar5 = FUN_1804514f0(&local_6a8,lVar11,8);
            if (cVar5 == '\0') {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
          }
          uVar3 = local_6a8;
          lVar6 = FUN_18017ea70();
          if (*(int *)(lVar6 + 4) != 0) {
            *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
          }
          if (((cVar4 == '\0') || (!bVar1)) || (uVar3 != param_2)) {
            uVar10 = 0;
          }
          else {
            uVar10 = 1;
          }
          UVar7 = GetTickCount64();
          if (DAT_180bb87f8 <= UVar7) {
            DAT_180bb87f8 = UVar7 + 1000;
            LOCK();
            UNLOCK();
            uVar12 = 0;
            if (bVar1) {
              uVar12 = uVar3;
            }
            FUN_18063ab10(local_648,0,0x600);
            local_6d0 = (char *)uVar2;
            local_6d8 = (undefined **)local_6a0;
            local_6c8 = param_2;
            local_6c0 = uVar12;
            local_6b8 = uVar10;
            FUN_18015ad60(local_648,0x600,0xffffffffffffffff,
                          "node=%p previous=%llu requested=%llu readback=%llu verified=%d");
            local_6d8 = &PTR_180700558;
            if (local_648[0] != '\0') {
              local_6d8 = (undefined **)&DAT_1806bcfc0;
            }
            local_6d0 = local_648;
            FUN_1800f6900((uVar10 ^ 1) * 2,local_6d8,"SkinChanger","VIEWMODEL_MESH_RECONCILED");
          }
        }
      }
    }
  }
}



