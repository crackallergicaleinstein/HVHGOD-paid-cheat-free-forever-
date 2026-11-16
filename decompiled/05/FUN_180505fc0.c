// FUN_180505fc0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180505fc0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180505fc0(HWND param_1,uint param_2,WPARAM param_3,LPARAM param_4,longlong param_5)

{
  int *piVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [13];
  WPARAM WVar5;
  ushort uVar6;
  short sVar7;
  SHORT SVar8;
  BOOL BVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  HWND pHVar13;
  HKL pHVar14;
  int *piVar15;
  ulonglong uVar16;
  undefined4 *puVar17;
  int iVar18;
  longlong lVar19;
  longlong lVar20;
  undefined8 uVar21;
  byte bVar22;
  undefined4 uVar23;
  uint uVar24;
  char cVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined4 uVar28;
  undefined1 auVar29 [16];
  undefined8 uVar30;
  undefined1 auVar31 [64];
  undefined1 auVar32 [64];
  undefined1 auStackY_f8 [32];
  tagTRACKMOUSEEVENT local_c0;
  tagTRACKMOUSEEVENT local_a0;
  undefined4 local_88;
  WPARAM local_80;
  ulonglong local_78;
  
  local_78 = DAT_1808d5f00 ^ (ulonglong)auStackY_f8;
  lVar2 = *(longlong *)(param_5 + 0xa0);
  if (lVar2 == 0) {
  }
  local_80 = param_3;
  FUN_180504c90(&local_a0,param_5);
  if (param_2 == 0x200) goto LAB_180506a6a;
  if (param_2 == 0xa0) {
LAB_18050664e:
    if (param_2 != 0x101) {
      if (param_2 == 8) {
LAB_1805066ec:
        lVar19 = *(longlong *)(param_5 + 0xe0);
        piVar1 = (int *)(lVar19 + 0x1448);
        iVar12 = *piVar1;
        if (-1 < iVar12 + -1) {
          lVar20 = (longlong)(iVar12 + -1);
          piVar15 = (int *)(lVar20 * 0x1c + *(longlong *)(lVar19 + 0x1450));
          do {
            if (*piVar15 == 6) {
              if (piVar15 != (int *)0x0) {
                cVar25 = (char)piVar15[3];
                goto LAB_180506730;
              }
              break;
            }
            piVar15 = piVar15 + -7;
            lVar20 = lVar20 + -1;
          } while (-1 < lVar20);
        }
        cVar25 = *(char *)(lVar19 + 0xbdc) == '\0';
LAB_180506730:
        if (((bool)cVar25 != (param_2 == 7)) &&
           ((*(char *)(param_5 + 0x8d) == '\0' || (param_2 == 7)))) {
          iVar11 = *(int *)(lVar19 + 0x146c);
          *(int *)(lVar19 + 0x146c) = iVar11 + 1;
          auVar4[4] = param_2 == 7;
          auVar4._0_4_ = iVar11;
          auVar4._5_8_ = 0;
          local_c0._0_13_ = auVar4 << 0x40;
          iVar11 = *(int *)(lVar19 + 0x144c);
          local_c0.dwHoverTime = 0;
          local_c0._20_4_ = 0;
          local_c0.hwndTrack._5_3_ = 0;
          local_c0._4_9_ = local_c0._4_9_;
          local_c0.cbSize = 6;
          if (iVar12 == iVar11) {
            if (iVar11 == 0) {
              iVar11 = 8;
            }
            else {
              iVar11 = iVar11 / 2 + iVar11;
            }
            iVar18 = iVar12 + 1;
            if (iVar12 + 1 < iVar11) {
              iVar18 = iVar11;
            }
            FUN_1804d1310(piVar1,iVar18);
          }
          lVar20 = (longlong)*piVar1 * 0x1c;
          lVar19 = *(longlong *)(lVar19 + 0x1450);
          *(undefined8 *)(lVar20 + lVar19) = local_c0._0_8_;
          ((undefined8 *)(lVar20 + lVar19))[1] = local_c0.hwndTrack;
          *(undefined8 *)(lVar20 + 0x10 + lVar19) = local_c0._16_8_;
          *(undefined4 *)(lVar20 + 0x18 + lVar19) = 0;
          *piVar1 = *piVar1 + 1;
        }
        *(undefined4 *)(lVar2 + 0x60) = 0;
      }
      if (param_2 == 0x20) {
        if ((short)param_4 != 1) {
        }
        cVar25 = FUN_180504ae0(param_5,*(undefined4 *)(lVar2 + 0x28));
        if (cVar25 == '\0') {
        }
      }
      if (param_2 == 0x51) {
        lVar2 = *(longlong *)(param_5 + 0xa0);
        pHVar14 = GetKeyboardLayout(0);
        iVar12 = GetLocaleInfoA((uint)((ulonglong)pHVar14 >> 0x10) & 0xffff,0x20001004,
                                (LPSTR)(lVar2 + 0x2c),4);
        if (iVar12 == 0) {
          *(undefined4 *)(lVar2 + 0x2c) = 0;
        }
      }
      if (param_2 == 0xa0) {
LAB_180506a6a:
        uVar16 = GetMessageExtraInfo();
        if ((uVar16 & 0xffffff80) == 0xff515700) {
          local_88 = 2;
        }
        else {
          local_88 = (uint)((uVar16 & 0xffffff80) == 0xff515780);
        }
        *(HWND *)(lVar2 + 8) = param_1;
        iVar12 = (param_2 != 0x200) + 1;
        if (*(int *)(lVar2 + 0x10) != iVar12) {
          local_a0.cbSize = 0x18;
          local_a0.dwFlags = 0x80000000;
          uVar23 = 2;
          if (param_2 != 0x200) {
            uVar23 = 0x12;
          }
          local_c0.dwFlags = uVar23;
          local_a0.dwHoverTime = 0;
          local_c0.cbSize = 0x18;
          local_c0.hwndTrack = param_1;
          local_c0._16_8_ = local_c0._16_8_ & 0xffffffff00000000;
          local_a0.hwndTrack = param_1;
          if (*(int *)(lVar2 + 0x10) != 0) {
            TrackMouseEvent(&local_a0);
          }
          TrackMouseEvent(&local_c0);
          *(int *)(lVar2 + 0x10) = iVar12;
        }
        puVar17 = (undefined4 *)FUN_180387670(&local_a0,param_1,param_2,param_4);
        if (*(char *)(puVar17 + 2) == '\0') {
          uVar23 = 0xff7fffff;
          uVar28 = uVar23;
        }
        else {
          uVar23 = *puVar17;
          uVar28 = puVar17[1];
        }
        *(uint *)(*(longlong *)(param_5 + 0xe0) + 0x1468) = local_88;
        FUN_1804b0330(param_5,uVar23,uVar28);
      }
      if (param_2 != 0x100) {
      }
      goto LAB_18050667b;
    }
LAB_18050612e:
    bVar22 = 0;
  }
  else {
    FUN_180387670(&local_a0,param_1,param_2,param_4);
    if ((char)local_a0.hwndTrack != '\0') {
      FUN_1804b0330(param_5,local_a0.cbSize,local_a0.dwFlags);
    }
    if (0x200 < param_2) {
      sVar7 = (short)(local_80 >> 0x10);
      switch(param_2) {
      case 0x201:
      case 0x203:
      case 0x204:
      case 0x206:
      case 0x207:
      case 0x209:
      case 0x20b:
      case 0x20d:
        goto switchD_180506387_caseD_201;
      case 0x202:
      case 0x205:
      case 0x208:
      case 0x20c:
        uVar16 = GetMessageExtraInfo();
        if ((uVar16 & 0xffffff80) == 0xff515700) {
          local_88 = 2;
        }
        else {
          local_88 = (uint)((uVar16 & 0xffffff80) == 0xff515780);
        }
        uVar24 = (uint)(param_2 == 0x205);
        if (param_2 == 0x208) {
          uVar24 = 2;
        }
        else if (param_2 == 0x20c) {
          uVar24 = ((short)(local_80 >> 0x10) != 1) + 3;
        }
        uVar10 = *(uint *)(lVar2 + 0x14) & ~(1 << uVar24);
        *(uint *)(lVar2 + 0x14) = uVar10;
        if ((uVar10 == 0) && (pHVar13 = GetCapture(), pHVar13 == param_1)) {
          ReleaseCapture();
        }
        *(uint *)(*(longlong *)(param_5 + 0xe0) + 0x1468) = local_88;
        FUN_1804b04c0(param_5,uVar24,0);
      case 0x20a:
        auVar29._0_4_ = (float)(int)sVar7 / 120.0;
        auVar29._4_12_ = SUB1612(ZEXT816(0),4);
        FUN_1804b06e0(param_5,0,auVar29._0_8_);
      case 0x20e:
        auVar26._0_4_ = -(float)(int)sVar7;
        auVar26._4_4_ = 0x80000000;
        auVar26._8_4_ = 0x80000000;
        auVar26._12_4_ = 0x80000000;
        auVar27._0_4_ = auVar26._0_4_ / 120.0;
        auVar27._4_12_ = auVar26._4_12_;
        FUN_1804b06e0(param_5,auVar27._0_8_,0);
      default:
      case 0x219:
        if ((int)local_80 == 7) {
          *(undefined1 *)(lVar2 + 0x41) = 1;
        }
      case 0x286:
        BVar9 = IsWindowUnicode(param_1);
        if (BVar9 != 0) {
        }
        BVar9 = IsDBCSLeadByte((BYTE)(local_80 >> 8));
        if (BVar9 != 0) {
          local_80 = (ulonglong)(ushort)((short)local_80 << 8) | local_80 >> 8 & 0xff;
        }
        local_88 = (uint)local_88._2_2_ << 0x10;
        MultiByteToWideChar(*(UINT *)(lVar2 + 0x2c),1,(LPCSTR)&local_80,2,(LPWSTR)&local_88,1);
        FUN_1804afe90(param_5,(WCHAR)local_88);
      case 0x2a2:
      case 0x2a3:
        if (*(int *)(lVar2 + 0x10) != (param_2 != 0x2a3) + 1) {
        }
        if (*(HWND *)(lVar2 + 8) == param_1) {
          *(undefined8 *)(lVar2 + 8) = 0;
        }
        *(undefined4 *)(lVar2 + 0x10) = 0;
        FUN_1804b0330(param_5,0x180000000,0xff7fffff);
      }
    }
    if (param_2 < 8) {
      if (param_2 != 7) {
        if (param_2 != 2) {
        }
        if (*(HWND *)(lVar2 + 8) != param_1) {
        }
        if (*(int *)(lVar2 + 0x10) == 0) {
        }
        local_a0.cbSize = 0x18;
        local_a0.dwHoverTime = 0;
        local_a0.dwFlags = 0x80000000;
        local_a0.hwndTrack = param_1;
        TrackMouseEvent(&local_a0);
        *(undefined8 *)(lVar2 + 8) = 0;
        *(undefined4 *)(lVar2 + 0x10) = 0;
        FUN_1804b0330(param_5,0xff7fffff,0xff7fffff);
      }
      goto LAB_1805066ec;
    }
    if (param_2 < 0x102) goto LAB_18050664e;
    if (param_2 == 0x102) {
      BVar9 = IsWindowUnicode(param_1);
      if (BVar9 != 0) {
        if (local_80 - 1 < 0xffff) {
          FUN_1804afe90(param_5);
        }
      }
      local_88 = (uint)local_88._2_2_ << 0x10;
      MultiByteToWideChar(*(UINT *)(lVar2 + 0x2c),1,(LPCSTR)&local_80,2,(LPWSTR)&local_88,1);
      lVar2 = *(longlong *)(param_5 + 0xe0);
      if ((WCHAR)local_88 == L'\0') {
      }
      if (*(char *)(param_5 + 0xbb5) == '\0') {
      }
      piVar1 = (int *)(lVar2 + 0x1448);
      local_c0.hwndTrack._0_4_ = *(int *)(lVar2 + 0x146c);
      *(int *)(lVar2 + 0x146c) = *(int *)(lVar2 + 0x146c) + 1;
      iVar12 = *(int *)(lVar2 + 0x144c);
      local_c0.dwHoverTime = 0;
      local_c0._20_4_ = 0;
      local_c0.cbSize = 5;
      local_c0.dwFlags = 2;
      local_c0.hwndTrack._4_4_ = local_88 & 0xffff;
      if (*piVar1 == iVar12) {
        iVar11 = *piVar1 + 1;
        if (iVar12 == 0) {
          iVar12 = 8;
        }
        else {
          iVar12 = iVar12 / 2 + iVar12;
        }
        if (iVar11 < iVar12) {
          iVar11 = iVar12;
        }
        FUN_1804d1310(piVar1,iVar11);
      }
      lVar19 = (longlong)*piVar1 * 0x1c;
      lVar2 = *(longlong *)(lVar2 + 0x1450);
      *(undefined8 *)(lVar19 + lVar2) = local_c0._0_8_;
      ((undefined8 *)(lVar19 + lVar2))[1] = local_c0.hwndTrack;
      *(undefined8 *)(lVar19 + 0x10 + lVar2) = local_c0._16_8_;
      *(undefined4 *)(lVar19 + 0x18 + lVar2) = 0;
      *piVar1 = *piVar1 + 1;
    }
    if ((param_2 != 0x104) && (param_2 != 0x105)) {
      if (param_2 == 0x10f) {
        DefWindowProcW(param_1,0x10f,local_80,param_4);
      }
    }
    if (param_2 != 0x104) goto LAB_18050612e;
LAB_18050667b:
    bVar22 = 1;
  }
  if (0xff < local_80) {
  }
  uVar6 = GetKeyState(0x11);
  auVar31 = ZEXT464(0x3f800000);
  auVar3._12_4_ = 0;
  auVar3._0_12_ = ZEXT812(0);
  auVar32 = ZEXT1264(ZEXT812(0)) << 0x20;
  if (*(char *)(param_5 + 0xbb5) != '\0') {
    auVar26 = vpcmpeqd_avx(ZEXT216(uVar6 >> 0xf),SUB6416(ZEXT464(0),0));
    auVar26 = vblendvps_avx(auVar31._0_16_,auVar3 << 0x20,auVar26);
    FUN_1804b0130(param_5,0x1000,uVar6 >> 0xf,auVar26._0_8_);
  }
  uVar6 = GetKeyState(0x10);
  if (*(char *)(param_5 + 0xbb5) != '\0') {
    auVar26 = vpcmpeqd_avx(ZEXT216(uVar6 >> 0xf),SUB6416(ZEXT464(0),0));
    auVar26 = vblendvps_avx(auVar31._0_16_,auVar32._0_16_,auVar26);
    FUN_1804b0130(param_5,0x2000,uVar6 >> 0xf,auVar26._0_8_);
  }
  uVar6 = GetKeyState(0x12);
  if (*(char *)(param_5 + 0xbb5) != '\0') {
    auVar26 = vpcmpeqd_avx(ZEXT216(uVar6 >> 0xf),SUB6416(ZEXT464(0),0));
    auVar26 = vblendvps_avx(auVar31._0_16_,auVar32._0_16_,auVar26);
    FUN_1804b0130(param_5,0x4000,uVar6 >> 0xf,auVar26._0_8_);
  }
  uVar6 = GetKeyState(0x5b);
  if (((uVar6 & 0x8000) == 0) && (uVar6 = GetKeyState(0x5c), (uVar6 & 0x8000) == 0)) {
    uVar24 = 0;
  }
  else {
    uVar24 = 1;
  }
  if (*(char *)(param_5 + 0xbb5) != '\0') {
    auVar27 = vpcmpeqd_avx(ZEXT416(uVar24),SUB6416(ZEXT464(0),0));
    auVar26 = vblendvps_avx(auVar31._0_16_,auVar32._0_16_,auVar27);
    FUN_1804b0130(param_5,0x8000,auVar27._0_8_,auVar26._0_8_);
  }
  WVar5 = local_80;
  iVar12 = FUN_1805059a0(local_80,param_4);
  if (iVar12 == 0x262) {
    if (bVar22 == 0) {
      if (*(char *)(param_5 + 0xbb5) == '\0') goto LAB_18050687c;
      FUN_1804b0130(param_5,0x262,1,auVar31._0_8_);
    }
  }
  else if (iVar12 == 0) goto LAB_18050687c;
  if (*(char *)(param_5 + 0xbb5) != '\0') {
    auVar26 = vpcmpeqd_avx(ZEXT116(bVar22),SUB6416(ZEXT464(0),0));
    auVar26 = vblendvps_avx(auVar31._0_16_,auVar32._0_16_,auVar26);
    FUN_1804b0130(param_5,iVar12,bVar22,auVar26._0_8_);
  }
LAB_18050687c:
  iVar12 = (int)WVar5;
  if (iVar12 == 0x10) {
    SVar8 = GetKeyState(0xa0);
    if (((byte)-(char)(SVar8 >> 0xf) == bVar22) && (*(char *)(param_5 + 0xbb5) != '\0')) {
      auVar26 = vpcmpeqd_avx(ZEXT116(bVar22),SUB6416(ZEXT464(0),0));
      auVar26 = vblendvps_avx(auVar31._0_16_,auVar32._0_16_,auVar26);
      FUN_1804b0130(param_5,0x210,bVar22,auVar26._0_8_);
    }
    SVar8 = GetKeyState(0xa1);
    if ((byte)-(char)(SVar8 >> 0xf) != bVar22) {
    }
    if (*(char *)(param_5 + 0xbb5) == '\0') {
    }
    auVar26 = vpcmpeqd_avx(ZEXT116(bVar22),SUB6416(ZEXT464(0),0));
    auVar26 = vblendvps_avx(auVar31._0_16_,auVar32._0_16_,auVar26);
    uVar30 = auVar26._0_8_;
    uVar21 = 0x214;
  }
  else if (iVar12 == 0x11) {
    SVar8 = GetKeyState(0xa2);
    if (((byte)-(char)(SVar8 >> 0xf) == bVar22) && (*(char *)(param_5 + 0xbb5) != '\0')) {
      auVar26 = vpcmpeqd_avx(ZEXT116(bVar22),SUB6416(ZEXT464(0),0));
      auVar26 = vblendvps_avx(auVar31._0_16_,auVar32._0_16_,auVar26);
      FUN_1804b0130(param_5,0x20f,bVar22,auVar26._0_8_);
    }
    SVar8 = GetKeyState(0xa3);
    if ((byte)-(char)(SVar8 >> 0xf) != bVar22) {
    }
    if (*(char *)(param_5 + 0xbb5) == '\0') {
    }
    auVar26 = vpcmpeqd_avx(ZEXT116(bVar22),SUB6416(ZEXT464(0),0));
    auVar26 = vblendvps_avx(auVar31._0_16_,auVar32._0_16_,auVar26);
    uVar30 = auVar26._0_8_;
    uVar21 = 0x213;
  }
  else {
    if (iVar12 != 0x12) {
    }
    SVar8 = GetKeyState(0xa4);
    if (((byte)-(char)(SVar8 >> 0xf) == bVar22) && (*(char *)(param_5 + 0xbb5) != '\0')) {
      auVar26 = vpcmpeqd_avx(ZEXT116(bVar22),SUB6416(ZEXT464(0),0));
      auVar26 = vblendvps_avx(auVar31._0_16_,auVar32._0_16_,auVar26);
      FUN_1804b0130(param_5,0x211,bVar22,auVar26._0_8_);
    }
    SVar8 = GetKeyState(0xa5);
    if ((byte)-(char)(SVar8 >> 0xf) != bVar22) {
    }
    if (*(char *)(param_5 + 0xbb5) == '\0') {
    }
    auVar26 = vpcmpeqd_avx(ZEXT116(bVar22),SUB6416(ZEXT464(0),0));
    auVar26 = vblendvps_avx(auVar31._0_16_,auVar32._0_16_,auVar26);
    uVar30 = auVar26._0_8_;
    uVar21 = 0x215;
  }
  FUN_1804b0130(param_5,uVar21,bVar22,uVar30);
switchD_180506387_caseD_201:
  uVar16 = GetMessageExtraInfo();
  if ((uVar16 & 0xffffff80) == 0xff515700) {
    local_88 = 2;
  }
  else {
    local_88 = (uint)((uVar16 & 0xffffff80) == 0xff515780);
  }
  if ((param_2 == 0x204) || (iVar12 = 0, param_2 == 0x206)) {
    iVar12 = 1;
  }
  if ((param_2 - 0x207 & 0xfffffffd) == 0) {
    iVar12 = 2;
  }
  if ((param_2 - 0x20b & 0xfffffffd) == 0) {
    iVar12 = ((short)(local_80 >> 0x10) != 1) + 3;
  }
  pHVar13 = GetCapture();
  if (*(int *)(lVar2 + 0x14) != 0) {
    if (pHVar13 == param_1) goto LAB_18050646f;
    *(undefined4 *)(lVar2 + 0x14) = 0;
  }
  if (pHVar13 == (HWND)0x0) {
    SetCapture(param_1);
  }
LAB_18050646f:
  *(uint *)(lVar2 + 0x14) = *(uint *)(lVar2 + 0x14) | 1 << iVar12;
  *(uint *)(*(longlong *)(param_5 + 0xe0) + 0x1468) = local_88;
  FUN_1804b04c0(param_5,iVar12,1);
}



