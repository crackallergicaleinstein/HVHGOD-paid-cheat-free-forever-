// FUN_1801f8ab0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801f8ab0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801f8ab0(longlong param_1,char param_2,byte param_3)

{
  bool bVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ULONGLONG UVar8;
  longlong lVar9;
  undefined1 uVar10;
  char *pcVar11;
  undefined *puVar12;
  undefined1 auStack_698 [32];
  undefined **local_678;
  char *local_670;
  undefined **local_668;
  undefined *local_658;
  int local_650;
  int local_64c;
  char local_648 [1536];
  ulonglong local_48;
  
  iVar4 = DAT_180c63350;
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_698;
  if ((DAT_180c63350 == 0) && (UVar8 = GetTickCount64(), DAT_180c63348 <= UVar8)) {
    local_658 = &DAT_1808e7820;
    iVar4 = FUN_1805f68d0(&DAT_1808e7820);
    if (iVar4 != 0) goto LAB_1801f8ebd;
    if (DAT_1808e786c == 0x7fffffff) {
      DAT_1808e786c = 0x7ffffffe;
      goto LAB_1801f8eb2;
    }
    if ((DAT_180c63350 == 0) && (DAT_180c63348 <= UVar8)) {
      DAT_180c63350 = FUN_1804174b0("CModelState",0x953717e1);
      if (DAT_180c63350 == 0) {
        DAT_180c63348 = UVar8 + 1000;
      }
      else {
        DAT_180c63348 = 0xffffffffffffffff;
      }
    }
    iVar4 = DAT_180c63350;
    FUN_1805f68fc(&DAT_1808e7820);
  }
  iVar5 = DAT_180c6333c;
  if ((DAT_180c6333c == 0) && (UVar8 = GetTickCount64(), DAT_180c63340 <= UVar8)) {
    local_658 = &DAT_1808e77d0;
    iVar5 = FUN_1805f68d0(&DAT_1808e77d0);
    if (iVar5 != 0) goto LAB_1801f8ebd;
    if (DAT_1808e781c == 0x7fffffff) {
      DAT_1808e781c = 0x7ffffffe;
      goto LAB_1801f8eb2;
    }
    if ((DAT_180c6333c == 0) && (DAT_180c63340 <= UVar8)) {
      DAT_180c6333c = FUN_1804174b0("C_BaseEntity",0x9d930423);
      if (DAT_180c6333c == 0) {
        DAT_180c63340 = UVar8 + 1000;
      }
      else {
        DAT_180c63340 = 0xffffffffffffffff;
      }
    }
    iVar5 = DAT_180c6333c;
    FUN_1805f68fc(&DAT_1808e77d0);
  }
  iVar6 = DAT_180c63338;
  if ((DAT_180c63338 == 0) && (UVar8 = GetTickCount64(), DAT_180c63330 <= UVar8)) {
    local_658 = &DAT_1808e7780;
    iVar6 = FUN_1805f68d0(&DAT_1808e7780);
    if (iVar6 != 0) {
LAB_1801f8ebd:
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1808e77cc == 0x7fffffff) {
      DAT_1808e77cc = 0x7ffffffe;
LAB_1801f8eb2:
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if ((DAT_180c63338 == 0) && (DAT_180c63330 <= UVar8)) {
      DAT_180c63338 = FUN_1804174b0("CSkeletonInstance",0x52ac8c4f);
      if (DAT_180c63338 == 0) {
        DAT_180c63330 = UVar8 + 1000;
      }
      else {
        DAT_180c63330 = 0xffffffffffffffff;
      }
    }
    iVar6 = DAT_180c63338;
    FUN_1805f68fc(&DAT_1808e7780);
  }
  if ((((param_1 != 0) && (iVar4 != 0)) && (iVar5 != 0)) &&
     ((iVar6 != 0 && (iVar7 = FUN_1801f8210(param_1), iVar7 != -1)))) {
    lVar9 = FUN_18017ea70();
    *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
    if (iVar5 + param_1 == 0) {
      bVar1 = false;
    }
    else {
      local_658 = (undefined *)0x0;
      cVar3 = FUN_1804514f0(&local_658,iVar5 + param_1,8);
      if (cVar3 == '\0') {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
    }
    puVar2 = local_658;
    lVar9 = FUN_18017ea70();
    if (*(int *)(lVar9 + 4) != 0) {
      *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
    }
    if ((bVar1) && (puVar2 != (undefined *)0x0)) {
      puVar12 = &DAT_180bbebe0;
      if (param_3 != 0) {
        puVar12 = &DAT_180bbec00;
      }
      if ((param_2 == '\0') || (DAT_180cc81a0 != 1)) {
        uVar10 = 0;
      }
      else {
        uVar10 = 1;
      }
      local_668 = &local_658;
      local_678 = (undefined **)CONCAT71(local_678._1_7_,uVar10);
      local_658 = puVar2;
      local_650 = iVar6;
      local_64c = iVar4;
      cVar3 = FUN_1801faf10(puVar12,param_1,iVar7,puVar2 + (longlong)iVar4 + (longlong)iVar6);
      if (cVar3 != '\0') {
        if ((param_2 == '\0') || (pcVar11 = "static", DAT_180cc81a0 != 1)) {
          pcVar11 = "native";
        }
        FUN_18063ab10(local_648,0,0x600);
        local_670 = (char *)CONCAT44(local_670._4_4_,(uint)param_3);
        local_678 = (undefined **)param_1;
        local_668 = (undefined **)pcVar11;
        FUN_18015ad60(local_648,0x600,0xffffffffffffffff,
                      "entity=0x%llx arms=%d mode=%s native_cloth_refresh=accepted respawn_required=0 visual_readback=unverified"
                     );
        local_678 = &PTR_180700558;
        if (local_648[0] != '\0') {
          local_678 = (undefined **)&DAT_1806bcfc0;
        }
        local_670 = local_648;
        FUN_1800f6900(1);
      }
    }
  }
}



