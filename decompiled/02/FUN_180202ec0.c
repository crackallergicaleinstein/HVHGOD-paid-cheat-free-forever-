// FUN_180202ec0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180202ec0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000180203166) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180202ec0(undefined8 param_1,undefined8 param_2,int param_3,int param_4,undefined8 param_5,
                  undefined8 param_6)

{
  char *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  ULONGLONG UVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  ulonglong uVar12;
  bool bVar13;
  undefined8 extraout_XMM0_Qa;
  undefined1 auStack_6f8 [32];
  undefined **local_6d8;
  char *local_6d0;
  undefined4 local_6c8;
  undefined *local_6b8 [2];
  undefined1 *local_6a8;
  longlong local_6a0;
  char *local_698;
  undefined8 local_690;
  undefined8 local_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 local_668;
  undefined1 local_660 [40];
  char local_638 [1536];
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_6f8;
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  lVar9 = DAT_1808e8c48;
  lVar3 = DAT_1808da460;
  if ((DAT_1808e8c48 != DAT_1808da460) || (DAT_180c63670 == 0)) {
    UVar8 = GetTickCount64();
    if ((lVar9 == lVar3) && (UVar8 < DAT_180c63668)) goto LAB_1802030b7;
    local_6b8[0] = &DAT_1808e8bf0;
    iVar7 = FUN_1805f68d0(&DAT_1808e8bf0);
    if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1808e8c3c == 0x7fffffff) {
      DAT_1808e8c3c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    uVar12 = 1000;
    if (DAT_1808e8c48 == lVar3) {
      if ((DAT_180c63670 == 0) && (DAT_180c63668 <= UVar8)) goto LAB_180202fc8;
    }
    else {
      DAT_1808e8c40 = 1000;
LAB_180202fc8:
      lVar9 = -1;
      do {
        local_6a0 = lVar9 + 1;
        pcVar1 = "lient.dll:48895C241048896C2418488974242057415641574883EC20440FB6F2488BF9" + lVar9;
        lVar9 = local_6a0;
      } while (*pcVar1 != '\0');
      local_6a8 = &DAT_180824970;
      local_698 = "patterns::weapon_update_composite_material";
      local_690 = 0x2a;
      DAT_180c63670 = FUN_1800e5d20(&local_698,&local_6a8);
      DAT_1808e8c48 = lVar3;
      DAT_180c63668 = 0xffffffffffffffff;
      if (DAT_180c63670 == 0) {
        DAT_180c63668 = DAT_1808e8c40 + UVar8;
        uVar12 = 60000;
        if (DAT_1808e8c40 < 60000) {
          uVar12 = DAT_1808e8c40 * 2;
        }
      }
      DAT_1808e8c40 = uVar12;
    }
    lVar3 = DAT_180c63670;
    FUN_1805f68fc(&DAT_1808e8bf0);
    if (lVar3 == 0) goto LAB_1802030b7;
  }
  puVar10 = (undefined8 *)FUN_180184240(local_660,param_2);
  local_688 = *puVar10;
  uStack_680 = puVar10[1];
  uStack_678 = puVar10[2];
  uStack_670 = puVar10[3];
  uVar2 = puVar10[4];
  local_668._1_1_ = (char)((ulonglong)uVar2 >> 8);
  bVar13 = local_668._1_1_ == '\0';
  local_668 = uVar2;
  if (bVar13) {
    FUN_1801fde70(&DAT_1807ccd3c,param_2,&local_688);
  }
LAB_1802030b7:
  bVar4 = FUN_180203260();
  bVar5 = FUN_18022de40(param_2);
  if ((bVar5 == 0) || (bVar4 == 0)) {
    UVar8 = GetTickCount64();
    if (DAT_180c63658 <= UVar8) {
      DAT_180c63658 = UVar8 + 1000;
      LOCK();
      UNLOCK();
      FUN_18063ab10(local_638,0,0x600);
      local_6c8 = 1;
      local_6d0 = (char *)CONCAT44(local_6d0._4_4_,(uint)bVar4);
      local_6d8 = (undefined **)CONCAT44(local_6d8._4_4_,(uint)bVar5);
      FUN_18015ad60(local_638,0x600,0xffffffffffffffff,
                    "feature=guns material_submitted=%d mesh=%d view_model=%d");
      local_6d8 = &PTR_180700558;
      if (local_638[0] != '\0') {
        local_6d8 = (undefined **)&DAT_1806bcfc0;
      }
      local_6d0 = local_638;
      FUN_1800f6900(2);
    }
  }
  else if (param_3 == param_4) {
    cVar6 = FUN_180203560(extraout_XMM0_Qa,param_5,param_6);
    if (cVar6 == '\0') {
      DAT_180cca9f0 = param_4;
      plVar11 = (longlong *)FUN_18017bf40(local_6b8);
      _DAT_180cca9f8 = *plVar11 + 50000000;
    }
    else if (DAT_180cca9f0 == param_4) {
      DAT_180cca9f0 = 0;
      _DAT_180cca9f8 = 0;
    }
  }
}



