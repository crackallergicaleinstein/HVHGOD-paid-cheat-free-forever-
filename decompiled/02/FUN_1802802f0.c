// FUN_1802802f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802802f0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802802f0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  float fVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  char *pcVar6;
  ULONGLONG UVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  undefined8 uVar14;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined1 auVar15 [64];
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auStack_768 [32];
  undefined **local_748;
  char *local_740;
  int local_738;
  int local_730;
  int local_728;
  float local_720;
  float local_71c;
  float local_718;
  char local_714;
  longlong local_708 [2];
  undefined2 local_6f4;
  undefined1 local_6f0 [16];
  longlong local_6e0;
  float local_6d0;
  float local_6cc;
  float local_6c8;
  float local_6c4;
  undefined1 local_6b8 [32];
  char local_698 [1536];
  ulonglong local_98;
  
  local_98 = DAT_1808d5f00 ^ (ulonglong)auStack_768;
  cVar4 = FUN_180282640(&DAT_180cb6200);
  if ((cVar4 != '\0') && (uVar14 = FUN_18027fc00(&local_720), local_714 != '\0')) {
    iVar9 = 0;
    local_728 = 0;
    iVar12 = 0;
    iVar11 = 0;
    plVar5 = (longlong *)FUN_1803d44c0(uVar14,local_6b8,2);
    lVar10 = *plVar5;
    lVar1 = plVar5[1];
    iVar8 = 0;
    if (lVar10 != lVar1) {
      auVar15 = ZEXT864(0);
      fVar16 = 0.0254;
      uVar14 = extraout_XMM0_Qa;
      fVar17 = local_718;
      fVar18 = local_71c;
      fVar19 = local_720;
      do {
        iVar9 = iVar9 + 1;
        FUN_1802808a0(uVar14,local_708,lVar10);
        lVar3 = local_708[0];
        if ((local_708[0] != 0) && (local_6e0 != 0)) {
          local_728 = iVar8 + 1;
          fVar2 = (fVar19 - local_6d0) * (fVar19 - local_6d0) +
                  (fVar18 - local_6cc) * (fVar18 - local_6cc) +
                  (fVar17 - local_6c8) * (fVar17 - local_6c8);
          fVar13 = auVar15._0_4_;
          if (fVar2 != fVar13) {
            if (fVar2 < 0.0) {
              fVar13 = (float)FUN_18061e150(fVar2);
            }
            else {
              fVar13 = SQRT(fVar2);
            }
          }
          fVar13 = fVar13 * fVar16;
          local_6c4 = fVar13;
          pcVar6 = (char *)FUN_1802826b0(&DAT_180cb6200,local_6f4);
          if (((pcVar6 != (char *)0x0) && (*pcVar6 != '\0')) &&
             (fVar13 <= *(float *)(pcVar6 + 0x1cc))) {
            iVar12 = iVar12 + 1;
            cVar4 = FUN_180284240(lVar3,*(undefined4 *)(pcVar6 + 0x1d0));
            if (cVar4 != '\0') {
              FUN_1802805e0(extraout_XMM0_Qa_00,param_2,local_708,pcVar6 + 0x68);
              iVar11 = iVar11 + 1;
            }
          }
        }
        uVar14 = FUN_18015c010(local_6f0);
        lVar10 = lVar10 + 0x18;
        iVar8 = local_728;
      } while (lVar10 != lVar1);
    }
    FUN_1801abba0(local_6b8);
    UVar7 = GetTickCount64();
    if (DAT_180c65270 <= UVar7) {
      DAT_180c65270 = UVar7 + 5000;
      FUN_18063ab10(local_698,0,0x600);
      local_740 = (char *)CONCAT44(local_740._4_4_,iVar8);
      local_748 = (undefined **)CONCAT44(local_748._4_4_,iVar9);
      local_738 = iVar12;
      local_730 = iVar11;
      FUN_18015ad60(local_698,0x600,0xffffffffffffffff,
                    "candidates=%u valid=%u enabled_in_range=%u labels=%u camera=matrix");
      local_748 = &PTR_180700558;
      if (local_698[0] != '\0') {
        local_748 = (undefined **)&DAT_1806bcfc0;
      }
      local_740 = local_698;
      FUN_1800f6900(0);
    }
  }
}



