// FUN_180219160 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180219160 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180219160(longlong param_1,undefined8 *param_2,char param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ULONGLONG UVar5;
  undefined8 *puVar6;
  longlong lVar7;
  void *pvVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined1 auStack_898 [32];
  undefined **local_878;
  char *local_870;
  uint local_868;
  ulonglong *local_858;
  undefined8 local_850;
  undefined8 uStack_848;
  undefined8 uStack_840;
  undefined8 uStack_838;
  undefined8 local_830;
  undefined8 uStack_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
  undefined8 local_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined8 local_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined8 local_7d0;
  undefined8 uStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined1 local_7b0;
  undefined1 uStack_7af;
  undefined8 local_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined8 uStack_790;
  undefined8 local_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 local_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 local_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 local_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined1 local_708;
  undefined8 local_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 local_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 local_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 local_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 local_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined2 local_658;
  char local_648 [161];
  char local_5a7;
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_898;
  iVar2 = DAT_180c64034;
  if (DAT_180c64034 == 0) {
    UVar5 = GetTickCount64();
    if (UVar5 < DAT_180c64038) {
    }
    local_858 = (ulonglong *)&DAT_1808ec8e0;
    iVar2 = FUN_1805f68d0(&DAT_1808ec8e0);
    if (iVar2 != 0) goto LAB_18021967e;
    if (DAT_1808ec92c == 0x7fffffff) {
      DAT_1808ec92c = 0x7ffffffe;
      goto LAB_180219693;
    }
    if ((DAT_180c64034 == 0) && (DAT_180c64038 <= UVar5)) {
      DAT_180c64034 = FUN_1804174b0("C_EconItemView",0xafd12ee8);
      if (DAT_180c64034 == 0) {
        DAT_180c64038 = UVar5 + 1000;
      }
      else {
        DAT_180c64038 = 0xffffffffffffffff;
      }
    }
    iVar2 = DAT_180c64034;
    FUN_1805f68fc(&DAT_1808ec8e0);
    if (iVar2 == 0) {
    }
  }
  iVar3 = DAT_180c64030;
  if (DAT_180c64030 == 0) {
    UVar5 = GetTickCount64();
    if (UVar5 < DAT_180c64028) {
      iVar3 = 0;
    }
    else {
      local_858 = (ulonglong *)&DAT_1808ec890;
      iVar3 = FUN_1805f68d0(&DAT_1808ec890);
      if (iVar3 != 0) {
LAB_18021967e:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1808ec8dc == 0x7fffffff) {
        DAT_1808ec8dc = 0x7ffffffe;
LAB_180219693:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      if ((DAT_180c64030 == 0) && (DAT_180c64028 <= UVar5)) {
        DAT_180c64030 = FUN_1804174b0("C_EconItemView",0xa74a6ed8);
        if (DAT_180c64030 == 0) {
          DAT_180c64028 = UVar5 + 1000;
        }
        else {
          DAT_180c64028 = 0xffffffffffffffff;
        }
      }
      iVar3 = DAT_180c64030;
      FUN_1805f68fc(&DAT_1808ec890);
    }
  }
  if ((param_3 == '\0') || (iVar3 != 0)) {
    FUN_18063ab10(&local_7a8,0,0xa1);
    local_858 = param_2 + 2;
    uVar10 = *local_858;
    if (0xa0 < uVar10) {
      uVar10 = 0xa0;
    }
    if (0xf < (ulonglong)param_2[3]) {
      param_2 = (undefined8 *)*param_2;
    }
    if (uVar10 != 0) {
      FUN_18063aed0(&local_7a8,param_2);
    }
    lVar9 = iVar2 + param_1;
    FUN_180204770(local_648,lVar9);
    if (param_3 == '\0') {
      local_850 = local_7a8;
      uStack_848 = uStack_7a0;
      uStack_840 = uStack_798;
      uStack_838 = uStack_790;
      local_830 = local_788;
      uStack_828 = uStack_780;
      uStack_820 = uStack_778;
      uStack_818 = uStack_770;
      local_810 = local_768;
      uStack_808 = uStack_760;
      uStack_800 = uStack_758;
      uStack_7f8 = uStack_750;
      local_7f0 = local_748;
      uStack_7e8 = uStack_740;
      uStack_7e0 = uStack_738;
      uStack_7d8 = uStack_730;
      local_7d0 = local_728;
      uStack_7c8 = uStack_720;
      uStack_7c0 = uStack_718;
      uStack_7b8 = uStack_710;
      local_7b0 = local_708;
      uStack_7af = 1;
      puVar6 = &local_850;
    }
    else {
      puVar6 = (undefined8 *)FUN_180204770(&local_850,iVar3 + param_1);
    }
    local_6f8 = *puVar6;
    uStack_6f0 = puVar6[1];
    uStack_6e8 = puVar6[2];
    uStack_6e0 = puVar6[3];
    local_6d8 = puVar6[4];
    uStack_6d0 = puVar6[5];
    uStack_6c8 = puVar6[6];
    uStack_6c0 = puVar6[7];
    local_6b8 = puVar6[8];
    uStack_6b0 = puVar6[9];
    uStack_6a8 = puVar6[10];
    uStack_6a0 = puVar6[0xb];
    local_698 = puVar6[0xc];
    uStack_690 = puVar6[0xd];
    uStack_688 = puVar6[0xe];
    uStack_680 = puVar6[0xf];
    local_678 = puVar6[0x10];
    uStack_670 = puVar6[0x11];
    uStack_668 = puVar6[0x12];
    uStack_660 = puVar6[0x13];
    if ((local_5a7 != '\0') &&
       (local_658._1_1_ = (char)((ushort)*(undefined2 *)(puVar6 + 0x14) >> 8),
       local_658._1_1_ != '\0')) {
      local_658 = *(undefined2 *)(puVar6 + 0x14);
      iVar2 = memcmp(local_648,&local_7a8,0xa1);
      if (iVar2 != 0) {
        cVar1 = FUN_1804513c0(lVar9,0xa1,1);
        if (cVar1 == '\0') {
        }
        lVar7 = FUN_18017ea70();
        *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
        cVar1 = FUN_180204e80(lVar9,&local_7a8);
        lVar7 = FUN_18017ea70();
        if (*(int *)(lVar7 + 4) != 0) {
          *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
        }
        if (cVar1 == '\0') {
        }
      }
      if ((param_3 != '\0') && (iVar4 = memcmp(&local_6f8,&local_7a8,0xa1), iVar4 != 0)) {
        cVar1 = FUN_1804513c0(iVar3 + param_1,0xa1,1);
        if (cVar1 == '\0') {
        }
        lVar7 = FUN_18017ea70();
        *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
        cVar1 = FUN_180204e80(iVar3 + param_1,&local_7a8);
        lVar7 = FUN_18017ea70();
        if (*(int *)(lVar7 + 4) != 0) {
          *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
        }
        if (cVar1 == '\0') {
        }
      }
      if ((iVar2 != 0) ||
         ((param_3 != '\0' && (iVar2 = memcmp(&local_6f8,&local_7a8,0xa1), iVar2 != 0)))) {
        FUN_18063ab10(local_648,0,0x600);
        local_870 = (char *)*local_858;
        local_868 = (uint)(local_870 == (char *)0x0);
        local_878 = (undefined **)param_1;
        FUN_18015ad60(local_648,0x600,0xffffffffffffffff,"view=%p chars=%zu removed=%d");
        local_878 = &PTR_180700558;
        if (local_648[0] != '\0') {
          local_878 = (undefined **)&DAT_1806bcfc0;
        }
        local_870 = local_648;
        FUN_1800f6900(0);
      }
      pvVar8 = (void *)FUN_180204770(local_648,lVar9);
      if ((((*(char *)((longlong)pvVar8 + 0xa1) != '\0') &&
           (iVar2 = memcmp(pvVar8,&local_7a8,0xa1), iVar2 == 0)) && (param_3 != '\0')) &&
         (pvVar8 = (void *)FUN_180204770(&local_850,iVar3 + param_1),
         *(char *)((longlong)pvVar8 + 0xa1) != '\0')) {
        memcmp(pvVar8,&local_7a8,0xa1);
      }
    }
  }
}



