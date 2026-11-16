// FUN_1803887f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803887f0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1803887f0(void)

{
  bool bVar1;
  longlong lVar2;
  char cVar3;
  undefined1 uVar4;
  longlong lVar5;
  short *psVar6;
  short *psVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  char *pcVar11;
  short *psVar12;
  int iVar13;
  undefined1 auStack_698 [32];
  undefined **local_678;
  undefined4 *local_670;
  short *local_668;
  short *local_660;
  short *local_658;
  longlong local_650;
  char local_648;
  undefined4 local_638;
  undefined4 local_634;
  undefined1 local_630 [200];
  undefined8 local_568;
  undefined8 local_560;
  ulonglong local_30;
  
  lVar2 = DAT_180c631f8;
  local_30 = DAT_1808d5f00 ^ (ulonglong)auStack_698;
  lVar5 = FUN_18017ea70();
  *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + 1;
  if (lVar2 == 0) {
    bVar1 = false;
    psVar12 = local_660;
  }
  else {
    local_668 = (short *)0x0;
    cVar3 = FUN_1804514f0(&local_668,lVar2,8);
    if (cVar3 == '\0') {
      bVar1 = false;
      psVar12 = local_660;
    }
    else {
      bVar1 = true;
      psVar12 = local_668;
    }
  }
  lVar5 = FUN_18017ea70();
  if (*(int *)(lVar5 + 4) != 0) {
    *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + -1;
  }
  if ((bVar1) && (psVar12 != (short *)0x0)) {
    lVar5 = FUN_18017ea70();
    *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + 1;
    if (psVar12 + 0x13c == (short *)0x0) {
      bVar1 = false;
      psVar12 = local_660;
    }
    else {
      local_668 = (short *)0x0;
      cVar3 = FUN_1804514f0(&local_668,psVar12 + 0x13c,8);
      if (cVar3 == '\0') {
        bVar1 = false;
        psVar12 = local_660;
      }
      else {
        bVar1 = true;
        psVar12 = local_668;
      }
    }
    lVar5 = FUN_18017ea70();
    if (*(int *)(lVar5 + 4) != 0) {
      *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + -1;
    }
    if (!bVar1) {
      psVar12 = (short *)0x0;
    }
  }
  else {
    psVar12 = (short *)0x0;
  }
  psVar6 = (short *)FUN_180388bf0();
  local_668 = psVar6;
  psVar7 = (short *)FUN_180388db0();
  if ((((lVar2 != 0) && (psVar6 != (short *)0x0)) && (psVar7 != (short *)0x0)) &&
     (DAT_180c63200 <= psVar12)) {
    if (DAT_180c63200 == (short *)0x0) {
      uVar8 = 0;
    }
    else {
      uVar8 = 0;
      if ((*DAT_180c63200 == 0x5a4d) &&
         (*(int *)((longlong)*(int *)(DAT_180c63200 + 0x1e) + (longlong)DAT_180c63200) == 0x4550)) {
        uVar8 = (ulonglong)
                *(uint *)((longlong)*(int *)(DAT_180c63200 + 0x1e) + 0x50 + (longlong)DAT_180c63200)
        ;
      }
    }
    if (psVar12 < (short *)(uVar8 + (longlong)DAT_180c63200)) {
      bVar1 = true;
      iVar13 = 0;
      lVar5 = 0;
      local_658 = psVar7;
      do {
        local_638 = 0;
        local_634 = 0xc00000c8;
        FUN_18063ab10(local_630,0,200);
        local_568 = 0;
        local_560 = 0;
        pcVar11 = "materials/hvhgod/character_matte_v3.vtex";
        if (iVar13 != 0) {
          pcVar11 = "materials/hvhgod/character_metal_v3.vtex";
        }
        cVar3 = FUN_1804513c0(local_668,1,2);
        if (cVar3 == '\0') {
LAB_180388b25:
          bVar1 = false;
        }
        else {
          lVar9 = FUN_18017ea70();
          *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
          cVar3 = FUN_1801ad780(local_668,&local_638,pcVar11);
          lVar9 = FUN_18017ea70();
          psVar6 = local_658;
          if (*(int *)(lVar9 + 4) != 0) {
            *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
          }
          if (cVar3 == '\0') goto LAB_180388b25;
          local_560 = 0x78657476;
          if ((&DAT_180c70e8c)[lVar5] == '\0') {
            cVar3 = FUN_1804513c0(local_658,1,2);
            if (cVar3 == '\0') {
              uVar4 = 0;
            }
            else {
              lVar9 = FUN_18017ea70();
              *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
              uVar4 = FUN_1802e72b0(psVar6,lVar2,&local_638);
              lVar9 = FUN_18017ea70();
              if (*(int *)(lVar9 + 4) != 0) {
                *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
              }
            }
            (&DAT_180c70e8c)[lVar5] = uVar4;
          }
          cVar3 = FUN_1804513c0(psVar12,1,2);
          if (cVar3 == '\0') {
            local_648 = '\0';
          }
          else {
            lVar9 = FUN_18017ea70();
            *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
            FUN_180391630(&local_650,psVar12,lVar2,&local_638);
            lVar9 = FUN_18017ea70();
            if (*(int *)(lVar9 + 4) != 0) {
              *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
            }
          }
          lVar9 = local_650;
          if (local_648 == '\0') {
            lVar9 = 0;
          }
          if ((!bVar1) || (lVar9 == 0)) goto LAB_180388b25;
          lVar10 = FUN_18017ea70();
          *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
          local_660 = (short *)0x0;
          cVar3 = FUN_1804514f0(&local_660,lVar9,8);
          if (cVar3 != '\0') {
            psVar7 = local_660;
          }
          lVar9 = FUN_18017ea70();
          if (*(int *)(lVar9 + 4) != 0) {
            *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
          }
          if ((cVar3 == '\0') || (psVar7 == (short *)0x0)) goto LAB_180388b25;
          bVar1 = true;
        }
        iVar13 = iVar13 + 1;
        lVar5 = lVar5 + 1;
      } while (lVar5 < 2);
      if ((bVar1) && (DAT_180c70e88 == '\0')) {
        DAT_180c70e88 = '\x01';
        FUN_18063ab10(&local_638,0,0x600);
        FUN_18015ad60(&local_638,0x600,0xffffffffffffffff,
                      "native_bindings=2 format=RGBA8888 dimensions=16x16 rim_alpha=0");
        local_678 = &PTR_180700558;
        if ((char)local_638 != '\0') {
          local_678 = (undefined **)&DAT_1806bcfc0;
        }
        local_670 = &local_638;
        FUN_1800f6900(1,local_670,"Materials","CHARACTER_SURFACE_TEXTURES_READY");
      }
    }
  }
}



