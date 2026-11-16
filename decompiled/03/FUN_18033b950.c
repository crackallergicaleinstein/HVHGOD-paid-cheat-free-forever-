// FUN_18033b950 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18033b950 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18033b950(undefined8 *param_1,char *param_2,float param_3)

{
  byte bVar1;
  longlong lVar2;
  undefined8 uVar3;
  float *pfVar4;
  undefined8 *puVar5;
  int iVar6;
  ULONGLONG UVar7;
  int iVar8;
  undefined4 uVar9;
  longlong lVar10;
  undefined4 uVar11;
  float fVar12;
  undefined1 auVar13 [64];
  undefined1 auVar14 [64];
  undefined1 auVar15 [64];
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auStack_848 [32];
  undefined **local_828;
  char *local_820;
  char *local_818;
  double local_810;
  undefined4 local_808;
  double local_800;
  double local_7f8;
  undefined8 local_7f0;
  double local_7e8;
  undefined4 local_7e0;
  double local_7d8;
  undefined4 local_7d0;
  double local_7c8;
  undefined4 local_7c0;
  double local_7b8;
  uint local_7b0;
  undefined4 local_7a8;
  double local_7a0;
  undefined4 local_798;
  undefined *local_790;
  longlong local_788;
  longlong local_780;
  longlong local_778;
  double local_770;
  double local_768;
  double local_760;
  double local_758;
  double local_750;
  double local_748;
  uint local_740;
  undefined8 local_738;
  uint local_730;
  byte local_728;
  byte local_727;
  undefined *local_720;
  float local_718;
  undefined4 local_714;
  undefined4 local_710;
  undefined *local_708;
  longlong local_700;
  longlong local_6f8;
  longlong local_6f0;
  char local_6e8 [1536];
  ulonglong local_e8;
  
  local_e8 = DAT_1808d5f00 ^ (ulonglong)auStack_848;
  local_718 = param_3;
  iVar6 = strcmp(param_2,"press_written");
  DAT_180c6f528 = DAT_180c6f528 + (ulonglong)(iVar6 == 0);
  iVar6 = strncmp(param_2,"air-miss",8);
  DAT_180c6f520 = DAT_180c6f520 + (ulonglong)(iVar6 == 0);
  iVar6 = strcmp(param_2,"ground-blocked");
  if ((iVar6 == 0) || (iVar6 = strcmp(param_2,"air-blocked"), iVar6 == 0)) {
    lVar10 = 1;
  }
  else {
    lVar10 = 0;
  }
  DAT_180c6f518 = DAT_180c6f518 + lVar10;
  UVar7 = GetTickCount64();
  iVar6 = DAT_180c6f54c;
  if (UVar7 < DAT_180c6f4f8) {
    DAT_180c6f4f0 = DAT_180c6f4f0 + 1;
  }
  DAT_180c6f4f8 = UVar7 + 100;
  if ((DAT_180c6f54c == 0) && (UVar7 = GetTickCount64(), DAT_180c6f570 <= UVar7)) {
    local_708 = &DAT_180900190;
    iVar6 = FUN_1805f68d0(&DAT_180900190);
    if (iVar6 != 0) goto LAB_18033c2a5;
    if (DAT_1809001dc == 0x7fffffff) {
      DAT_1809001dc = 0x7ffffffe;
      goto LAB_18033c29a;
    }
    if ((DAT_180c6f54c == 0) && (DAT_180c6f570 <= UVar7)) {
      DAT_180c6f54c = FUN_1804174b0("CCSPlayer_MovementServices",0x552bd122);
      if (DAT_180c6f54c == 0) {
        DAT_180c6f570 = UVar7 + 1000;
      }
      else {
        DAT_180c6f570 = 0xffffffffffffffff;
      }
    }
    iVar6 = DAT_180c6f54c;
    FUN_1805f68fc(&DAT_180900190);
  }
  iVar8 = DAT_180c6f508;
  if ((*(longlong *)*param_1 == 0) || (iVar6 == 0)) {
    lVar10 = 0;
  }
  else {
    lVar10 = (longlong)iVar6 + *(longlong *)*param_1;
  }
  lVar2 = param_1[0xc];
  bVar1 = *(byte *)(lVar2 + 0x44);
  uVar3 = *(undefined8 *)(lVar2 + 0x20);
  local_728 = *(byte *)(lVar2 + 0x28);
  pfVar4 = (float *)param_1[0xb];
  fVar12 = pfVar4[2];
  fVar16 = pfVar4[1];
  fVar17 = *pfVar4;
  fVar18 = *(float *)param_1[10];
  fVar19 = *(float *)param_1[9];
  fVar20 = *(float *)param_1[8];
  local_700 = DAT_180c6f518;
  local_6f8 = DAT_180c6f520;
  local_6f0 = DAT_180c6f528;
  local_708 = DAT_180c6f4f0;
  local_714 = *(undefined4 *)(*(longlong *)param_1[7] + 0x10);
  local_710 = _DAT_180b8e18c;
  local_727 = DAT_180b8e111;
  fVar21 = DAT_180b8e17c;
  if ((DAT_180c6f508 == 0) && (UVar7 = GetTickCount64(), DAT_180c6f500 <= UVar7)) {
    local_720 = &DAT_180900000;
    iVar6 = FUN_1805f68d0(&DAT_180900000);
    if (iVar6 != 0) goto LAB_18033c2a5;
    if (DAT_18090004c == 0x7fffffff) {
      DAT_18090004c = 0x7ffffffe;
      goto LAB_18033c29a;
    }
    if ((DAT_180c6f508 == 0) && (DAT_180c6f500 <= UVar7)) {
      DAT_180c6f508 = FUN_1804174b0("CCSPlayerModernJump",0x85d28572);
      if (DAT_180c6f508 == 0) {
        DAT_180c6f500 = UVar7 + 1000;
      }
      else {
        DAT_180c6f500 = 0xffffffffffffffff;
      }
    }
    iVar8 = DAT_180c6f508;
    FUN_1805f68fc(&DAT_180900000);
  }
  iVar6 = DAT_180c6f53c;
  auVar15 = ZEXT464(0xbf800000);
  if ((lVar10 == 0) || (iVar8 == 0)) {
    auVar13 = ZEXT1664(auVar15._0_16_);
  }
  else {
    auVar13 = ZEXT464(*(uint *)(iVar8 + lVar10));
  }
  if ((DAT_180c6f53c == 0) && (UVar7 = GetTickCount64(), DAT_180c6f510 <= UVar7)) {
    local_720 = &DAT_1808fffb0;
    iVar6 = FUN_1805f68d0(&DAT_1808fffb0);
    if (iVar6 != 0) goto LAB_18033c2a5;
    if (DAT_1808ffffc == 0x7fffffff) {
      DAT_1808ffffc = 0x7ffffffe;
      goto LAB_18033c29a;
    }
    if ((DAT_180c6f53c == 0) && (DAT_180c6f510 <= UVar7)) {
      DAT_180c6f53c = FUN_1804174b0("CCSPlayerModernJump",0x76b8735d);
      if (DAT_180c6f53c == 0) {
        DAT_180c6f510 = UVar7 + 1000;
      }
      else {
        DAT_180c6f510 = 0xffffffffffffffff;
      }
    }
    iVar6 = DAT_180c6f53c;
    FUN_1805f68fc(&DAT_1808fffb0);
  }
  iVar8 = DAT_180c6f548;
  if ((lVar10 == 0) || (iVar6 == 0)) {
    uVar11 = 0xffffffff;
  }
  else {
    uVar11 = *(undefined4 *)(iVar6 + lVar10);
  }
  if ((DAT_180c6f548 == 0) && (UVar7 = GetTickCount64(), DAT_180c6f540 <= UVar7)) {
    local_720 = &DAT_1809000f0;
    iVar6 = FUN_1805f68d0(&DAT_1809000f0);
    if (iVar6 != 0) goto LAB_18033c2a5;
    if (DAT_18090013c == 0x7fffffff) {
      DAT_18090013c = 0x7ffffffe;
      goto LAB_18033c29a;
    }
    if ((DAT_180c6f548 == 0) && (DAT_180c6f540 <= UVar7)) {
      DAT_180c6f548 = FUN_1804174b0("CCSPlayerModernJump",0xefa846d4);
      if (DAT_180c6f548 == 0) {
        DAT_180c6f540 = UVar7 + 1000;
      }
      else {
        DAT_180c6f540 = 0xffffffffffffffff;
      }
    }
    iVar8 = DAT_180c6f548;
    FUN_1805f68fc(&DAT_1809000f0);
  }
  iVar6 = DAT_180c6f538;
  if ((lVar10 == 0) || (iVar8 == 0)) {
    auVar14 = ZEXT1664(auVar15._0_16_);
  }
  else {
    auVar14 = ZEXT464(*(uint *)(iVar8 + lVar10));
  }
  if ((DAT_180c6f538 == 0) && (UVar7 = GetTickCount64(), DAT_180c6f530 <= UVar7)) {
    local_720 = &DAT_180900050;
    iVar6 = FUN_1805f68d0(&DAT_180900050);
    if (iVar6 != 0) goto LAB_18033c2a5;
    if (DAT_18090009c == 0x7fffffff) {
      DAT_18090009c = 0x7ffffffe;
      goto LAB_18033c29a;
    }
    if ((DAT_180c6f538 == 0) && (DAT_180c6f530 <= UVar7)) {
      DAT_180c6f538 = FUN_1804174b0("CCSPlayerModernJump",0xbf93929f);
      if (DAT_180c6f538 == 0) {
        DAT_180c6f530 = UVar7 + 1000;
      }
      else {
        DAT_180c6f530 = 0xffffffffffffffff;
      }
    }
    iVar6 = DAT_180c6f538;
    FUN_1805f68fc(&DAT_180900050);
  }
  if ((lVar10 == 0) || (iVar6 == 0)) {
    uVar9 = 0xffffffff;
  }
  else {
    uVar9 = *(undefined4 *)(iVar6 + lVar10);
  }
  iVar6 = DAT_180c6f568;
  if (DAT_180c6f568 == 0) {
    UVar7 = GetTickCount64();
    if (UVar7 < DAT_180c6f560) {
      iVar6 = 0;
    }
    else {
      local_720 = &DAT_1809000a0;
      iVar6 = FUN_1805f68d0(&DAT_1809000a0);
      if (iVar6 != 0) {
LAB_18033c2a5:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1809000ec == 0x7fffffff) {
        DAT_1809000ec = 0x7ffffffe;
LAB_18033c29a:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      if ((DAT_180c6f568 == 0) && (DAT_180c6f560 <= UVar7)) {
        DAT_180c6f568 = FUN_1804174b0("CCSPlayer_MovementServices",0x5a88108b);
        if (DAT_180c6f568 == 0) {
          DAT_180c6f560 = UVar7 + 1000;
        }
        else {
          DAT_180c6f560 = 0xffffffffffffffff;
        }
      }
      iVar6 = DAT_180c6f568;
      FUN_1805f68fc(&DAT_1809000a0);
    }
  }
  if ((*(longlong *)*param_1 != 0) && (iVar6 != 0)) {
    auVar15 = ZEXT464(*(uint *)((longlong)iVar6 + *(longlong *)*param_1));
  }
  FUN_18063ab10(local_6e8,0,0x600);
  puVar5 = (undefined8 *)param_1[3];
  local_748 = (double)fVar12;
  local_750 = (double)fVar16;
  local_758 = (double)fVar17;
  local_760 = (double)fVar18;
  local_768 = (double)fVar19;
  local_770 = (double)fVar20;
  local_7a0 = (double)fVar21;
  local_7b8 = (double)auVar13._0_4_;
  local_7c8 = (double)auVar14._0_4_;
  local_7d8 = (double)auVar15._0_4_;
  local_7e8 = (double)*(float *)(puVar5 + 1);
  local_7f8 = (double)*(float *)param_1[5];
  local_800 = (double)*(float *)param_1[4];
  local_810 = (double)local_718;
  local_730 = (uint)bVar1;
  local_740 = (uint)local_728;
  local_778 = local_700;
  local_780 = local_6f8;
  local_788 = local_6f0;
  local_790 = local_708;
  local_798 = local_714;
  local_7a8 = local_710;
  local_7b0 = (uint)local_727;
  local_7e0 = *(undefined4 *)param_1[6];
  local_7f0 = *puVar5;
  local_808 = *(undefined4 *)(puVar5 + 5);
  local_820 = (char *)CONCAT44(local_820._4_4_,*(undefined4 *)param_1[2]);
  local_828 = *(undefined ***)param_1[1];
  local_818 = param_2;
  local_7d0 = uVar9;
  local_7c0 = uVar11;
  local_738 = uVar3;
  FUN_18015ad60(local_6e8,0x600,0xffffffffffffffff,
                "command=%lld tick=%d outcome=%s fraction=%.4f source=%d earliest=%.4f penalty=%.6f last_press=(%lld,%.4f) jump=(%d,%.4f) actual=(%d,%.4f) usable=(%d,%.4f) predicted_valid=%d predicted_flags=%u predicted_vz=%.3f subticks=%d suppressed=%llu presses=%llu misses=%llu blocked=%llu estimated_reach=%.5f estimated_touch=%.5f flat_reach=%.5f normal=(%.4f,%.4f,%.4f) legacy=%d clock_tick=%lld previous_held=%d"
               );
  local_828 = &PTR_180700558;
  if (local_6e8[0] != '\0') {
    local_828 = (undefined **)&DAT_1806bcfc0;
  }
  local_820 = local_6e8;
  FUN_1800f6900(0);
  DAT_180c6f528 = 0;
  DAT_180c6f520 = 0;
  DAT_180c6f518 = 0;
  DAT_180c6f4f0 = (undefined *)0x0;
}



