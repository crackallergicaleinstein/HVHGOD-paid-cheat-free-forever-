// FUN_1800e4880 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800e4880 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800e4880(char param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  size_t _Size;
  ulonglong uVar4;
  size_t _Size_00;
  bool bVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 *******pppppppuVar9;
  undefined8 uVar10;
  int *piVar11;
  ulonglong uVar12;
  undefined1 (*pauVar13) [16];
  int *piVar14;
  undefined1 *_Buf2;
  undefined8 *puVar15;
  char *pcVar16;
  ulonglong uVar17;
  longlong lVar18;
  undefined **ppuVar19;
  undefined8 extraout_XMM0_Qa;
  undefined1 auStack_918 [32];
  undefined1 (*local_8f8) [16];
  char *local_8f0;
  undefined *local_8e8;
  undefined *local_8e0;
  int local_8d8 [8];
  undefined8 *******local_8b8;
  size_t local_8b0;
  undefined1 local_8a8 [32];
  undefined8 *******local_888 [2];
  size_t local_878;
  ulonglong local_870;
  undefined1 local_868 [16];
  undefined1 local_858 [16];
  undefined1 local_848 [16];
  char local_838;
  char local_828 [2048];
  ulonglong local_28;
  
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_918;
  if (DAT_180bb8ec0 == 0) {
    if (param_1 == '\0') {
    }
    FUN_18063ab10(local_828,0,0x600);
    FUN_18015ad60(local_828,0x600,0xffffffffffffffff,"id=none reason=no_active_config");
    local_8f8 = (undefined1 (*) [16])&PTR_180700558;
    if (local_828[0] != '\0') {
      local_8f8 = (undefined1 (*) [16])&DAT_1806bcfc0;
    }
    local_8f0 = local_828;
    FUN_1800f6900(2);
  }
  FUN_18016b790(&DAT_180bb8af0,local_888,&DAT_180bb8eb0);
  _Size_00 = local_878;
  uVar4 = DAT_180bb8ec8;
  _Size = DAT_180bb8ec0;
  if (param_1 == '\0') {
    _Buf2 = &DAT_1808da580;
    if (0xf < DAT_1808da598) {
      _Buf2 = _DAT_1808da580;
    }
    pauVar13 = (undefined1 (*) [16])&DAT_180bb8eb0;
    if (0xf < DAT_180bb8ec8) {
      pauVar13 = DAT_180bb8eb0;
    }
    if ((DAT_180bb8ec0 == DAT_1808da590) &&
       ((DAT_180bb8ec0 == 0 || (iVar7 = memcmp(pauVar13,_Buf2,DAT_180bb8ec0), iVar7 == 0)))) {
      puVar15 = &DAT_1808da5a0;
      if (0xf < DAT_1808da5b8) {
        puVar15 = DAT_1808da5a0;
      }
      pppppppuVar9 = local_888;
      if (0xf < local_870) {
        pppppppuVar9 = local_888[0];
      }
      if ((_Size_00 == DAT_1808da5b0) &&
         ((_Size_00 == 0 || (iVar7 = memcmp(pppppppuVar9,puVar15,_Size_00), iVar7 == 0))))
      goto LAB_1800e50d9;
    }
    puVar15 = &DAT_1808da5c0;
    if (0xf < DAT_1808da5d8) {
      puVar15 = DAT_1808da5c0;
    }
    pauVar13 = (undefined1 (*) [16])&DAT_180bb8eb0;
    if (0xf < uVar4) {
      pauVar13 = DAT_180bb8eb0;
    }
    if ((_Size == DAT_1808da5d0) &&
       ((_Size == 0 || (iVar7 = memcmp(pauVar13,puVar15,_Size), iVar7 == 0)))) {
      puVar15 = &DAT_1808da5e0;
      if (0xf < DAT_1808da5f8) {
        puVar15 = DAT_1808da5e0;
      }
      pppppppuVar9 = local_888;
      if (0xf < local_870) {
        pppppppuVar9 = local_888[0];
      }
      if ((_Size_00 == DAT_1808da5f0) &&
         ((_Size_00 == 0 || (iVar7 = memcmp(pppppppuVar9,puVar15,_Size_00), iVar7 == 0))))
      goto LAB_1800e50d9;
    }
  }
  pauVar13 = (undefined1 (*) [16])&DAT_180bb8eb0;
  if (0xf < uVar4) {
    pauVar13 = DAT_180bb8eb0;
  }
  FUN_180113930(&DAT_1808da5c0,pauVar13,_Size);
  pppppppuVar9 = local_888;
  if (0xf < local_870) {
    pppppppuVar9 = local_888[0];
  }
  FUN_180113930(&DAT_1808da5e0,pppppppuVar9,local_878);
  local_8f8 = (undefined1 (*) [16])&DAT_180bb8eb0;
  if (0xf < DAT_180bb8ec8) {
    local_8f8 = DAT_180bb8eb0;
  }
  FUN_18063ab10(local_828,0,0x600);
  local_8f0 = "false";
  if (param_1 != '\0') {
    local_8f0 = "true";
  }
  FUN_18015ad60(local_828,0x600,0xffffffffffffffff,"id=%s force=%s");
  ppuVar19 = &PTR_180700558;
  local_8f8 = (undefined1 (*) [16])&PTR_180700558;
  if (local_828[0] != '\0') {
    local_8f8 = (undefined1 (*) [16])&DAT_1806bcfc0;
  }
  local_8f0 = local_828;
  FUN_1800f6900(0);
  local_8b8 = local_888;
  if (0xf < local_870) {
    local_8b8 = local_888[0];
  }
  local_8b0 = local_878;
  FUN_1800b4580(local_848,&local_8b8);
  if ((local_838 == '\0') || (cVar6 = FUN_1800b4c80(local_848), cVar6 == '\0')) {
    pauVar13 = (undefined1 (*) [16])&DAT_180bb8eb0;
    if (0xf < DAT_180bb8ec8) {
      pauVar13 = DAT_180bb8eb0;
    }
    FUN_18063ab10(local_828,0,0x600);
    local_8f0 = (char *)local_878;
    local_8f8 = pauVar13;
    FUN_18015ad60(local_828,0x600,0xffffffffffffffff,"id=%s reason=incompatible_payload bytes=%zu");
    if (local_828[0] != '\0') {
      ppuVar19 = (undefined **)&DAT_1806bcfc0;
    }
    local_8f0 = local_828;
    local_8f8 = (undefined1 (*) [16])ppuVar19;
    FUN_1800f6900(3);
    pauVar13 = (undefined1 (*) [16])&DAT_180bb8eb0;
    if (0xf < DAT_180bb8ec8) {
      pauVar13 = DAT_180bb8eb0;
    }
    FUN_18063ab10(local_828,0,0x800);
    local_8f8 = pauVar13;
    FUN_18015ad60(local_828,0x800,0xffffffffffffffff,
                  "HVHGODS config \'%s\' does not contain a compatible runtime payload");
    FUN_1800a9e50(2,local_828);
    uVar4 = DAT_180bb8ec0;
    local_868 = (undefined1  [16])0x0;
    local_858 = (undefined1  [16])0x0;
    pauVar13 = (undefined1 (*) [16])&DAT_180bb8eb0;
    if (0xf < DAT_180bb8ec8) {
      pauVar13 = DAT_180bb8eb0;
    }
    if (0x7fffffffffffffff < DAT_180bb8ec0) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bb70();
    }
    if (DAT_180bb8ec0 < 0x10) {
      local_858._8_8_ = 0xf;
      local_858._0_8_ = DAT_180bb8ec0;
      local_868 = *pauVar13;
    }
    else {
      uVar12 = DAT_180bb8ec0 | 0xf;
      uVar17 = 0x7fffffffffffffff;
      if ((uVar12 < 0x8000000000000000) && (uVar17 = uVar12, uVar12 < 0x16)) {
        uVar17 = 0x16;
      }
      uVar10 = FUN_18015bca0(uVar17 + 1);
      local_868._0_8_ = uVar10;
      local_858._8_8_ = uVar17;
      local_858._0_8_ = uVar4;
      FUN_18063aed0(uVar10,pauVar13,uVar4 + 1);
    }
    local_8b8 = local_888;
    if (0xf < local_870) {
      local_8b8 = local_888[0];
    }
    local_8b0 = local_878;
    uVar10 = FUN_1800b4310(local_8a8,&local_8b8);
    FUN_18016cf30(extraout_XMM0_Qa,local_868,0,uVar10);
    FUN_18015c010(local_8a8);
    FUN_18015c010(local_868);
  }
  else {
    FUN_1800e1d10();
    FUN_1800acf30(&DAT_180bb8eb0);
    pauVar13 = (undefined1 (*) [16])&DAT_180bb8eb0;
    if (0xf < DAT_180bb8ec8) {
      pauVar13 = DAT_180bb8eb0;
    }
    FUN_180113930(&DAT_1808da580,pauVar13,DAT_180bb8ec0);
    pppppppuVar9 = local_888;
    if (0xf < local_870) {
      pppppppuVar9 = local_888[0];
    }
    FUN_180113930(&DAT_1808da5a0,pppppppuVar9,local_878);
    pppppppuVar9 = local_888;
    if (0xf < local_870) {
      pppppppuVar9 = local_888[0];
    }
    if (local_878 < 0x4000001) {
      local_8b0 = local_878;
      local_8b8 = pppppppuVar9;
      FUN_1800ab8b0(local_868,&local_8b8);
      if (local_858[8] == '\0') {
LAB_1800e4c63:
        bVar3 = false;
        bVar5 = false;
        if (local_858[8] == '\0') goto LAB_1800e4c72;
      }
      else {
        if (((((ulonglong)(local_868._8_8_ - local_868._0_8_) < 8) ||
             (*(char *)local_868._0_8_ != 'H')) || (*(char *)(local_868._0_8_ + 1) != 'C')) ||
           ((*(char *)(local_868._0_8_ + 2) != 'G' || (*(char *)(local_868._0_8_ + 3) != '1'))))
        goto LAB_1800e4c63;
        local_8d8[0] = *(int *)(local_868._0_8_ + 4);
        bVar5 = true;
      }
      bVar3 = bVar5;
      FUN_180113710(local_868);
    }
    else {
      bVar3 = false;
    }
LAB_1800e4c72:
    pcVar16 = "Config loaded.";
    if (bVar3) {
      pcVar16 = "Config loaded and converted.";
    }
    local_868 = (undefined1  [16])0x0;
    local_858 = (undefined1  [16])0x0;
    lVar18 = -1;
    do {
      lVar18 = lVar18 + 1;
    } while (pcVar16[lVar18] != '\0');
    FUN_18015ba30(local_868);
    pauVar13 = (undefined1 (*) [16])&DAT_180bb8eb0;
    if (0xf < DAT_180bb8ec8) {
      pauVar13 = DAT_180bb8eb0;
    }
    FUN_180113930(&DAT_180bb8ed0,pauVar13,DAT_180bb8ec0);
    FUN_18016df60(&DAT_180bb8af0,local_868,1);
    FUN_18015c010(local_868);
    if (bVar3) {
      uVar10 = FUN_1800e78e0(local_848,"migration");
      uVar10 = FUN_1800efcb0(uVar10);
      uVar8 = FUN_1800e9850(uVar10);
      pauVar13 = (undefined1 (*) [16])&DAT_180bb8eb0;
      if (0xf < DAT_180bb8ec8) {
        pauVar13 = DAT_180bb8eb0;
      }
      FUN_18063ab10(local_828,0,0x600);
      local_8e0 = (undefined *)CONCAT44(local_8e0._4_4_,uVar8);
      local_8e8 = (undefined *)CONCAT44(local_8e8._4_4_,0xc);
      local_8f0 = (char *)CONCAT44(local_8f0._4_4_,local_8d8[0]);
      local_8f8 = pauVar13;
      FUN_18015ad60(local_828,0x600,0xffffffffffffffff,
                    "id=%s source=HCG1 source_version=%u target_version=%d repaired_flags=%u original=retained scope=resolved removed_controls=current_defaults"
                   );
      local_8f8 = (undefined1 (*) [16])&PTR_180700558;
      if (local_828[0] != '\0') {
        local_8f8 = (undefined1 (*) [16])&DAT_1806bcfc0;
      }
      local_8f0 = local_828;
      FUN_1800f6900(1);
    }
    pauVar13 = (undefined1 (*) [16])&DAT_180bb8eb0;
    if (0xf < DAT_180bb8ec8) {
      pauVar13 = DAT_180bb8eb0;
    }
    FUN_18063ab10(local_828,0,0x800);
    local_8f0 = (char *)local_878;
    local_8f8 = pauVar13;
    FUN_18015ad60(local_828,0x800,0xffffffffffffffff,"HVHGODS cloud config applied; id=%s bytes=%zu"
                 );
    FUN_1800a9e50(1,local_828);
    local_8d8[2] = DAT_180c8fdb8;
    local_8d8[4] = 2;
    local_8d8[0] = 0;
    piVar14 = local_8d8;
    if (-1 < DAT_180c8fdb8) {
      piVar14 = local_8d8 + 2;
    }
    piVar11 = local_8d8 + 4;
    if (DAT_180c8fdb8 < 3) {
      piVar11 = piVar14;
    }
    puVar1 = (&PTR_s_All_Weapons_1806ffe30)[*piVar11];
    local_8d8[2] = DAT_180c7e25c;
    local_8d8[0] = 2;
    local_8d8[4] = 0;
    piVar14 = local_8d8 + 4;
    if (-1 < DAT_180c7e25c) {
      piVar14 = local_8d8 + 2;
    }
    piVar11 = local_8d8;
    if (DAT_180c7e25c < 3) {
      piVar11 = piVar14;
    }
    puVar2 = (&PTR_s_All_Weapons_1806ffe30)[*piVar11];
    pauVar13 = (undefined1 (*) [16])&DAT_180bb8eb0;
    if (0xf < DAT_180bb8ec8) {
      pauVar13 = DAT_180bb8eb0;
    }
    FUN_18063ab10(local_828,0,0x600);
    local_8f0 = (char *)local_878;
    local_8f8 = pauVar13;
    local_8e8 = puVar2;
    local_8e0 = puVar1;
    FUN_18015ad60(local_828,0x600,0xffffffffffffffff,"id=%s bytes=%zu rage_scope=%s legit_scope=%s")
    ;
    if (local_828[0] != '\0') {
      ppuVar19 = (undefined **)&DAT_1806bcfc0;
    }
    local_8f0 = local_828;
    local_8f8 = (undefined1 (*) [16])ppuVar19;
    FUN_1800f6900(1);
  }
  if (local_838 != '\0') {
    FUN_1800aab30(local_848);
  }
LAB_1800e50d9:
  FUN_18015c010(local_888);
}



