// FUN_180387a00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180387a00 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180387a00(HWND param_1,ulonglong param_2,WPARAM param_3,ulonglong param_4)

{
  undefined1 auVar1 [16];
  int iVar2;
  char cVar3;
  uint uVar4;
  HWND pHVar5;
  HCURSOR hCursor;
  undefined4 *puVar6;
  longlong lVar7;
  longlong lVar8;
  char *pcVar9;
  undefined7 uVar10;
  uint Msg;
  uint uVar11;
  short sVar12;
  ulonglong uVar13;
  bool bVar14;
  undefined8 uVar15;
  undefined1 auStack_698 [32];
  undefined **local_678;
  char *local_670;
  byte local_668 [8];
  undefined4 local_660;
  undefined4 uStack_65c;
  char local_658;
  char local_648 [1544];
  ulonglong local_40;
  
  local_40 = DAT_1808d5f00 ^ (ulonglong)auStack_698;
  Msg = (uint)param_2;
  uVar13 = param_2 & 0xffffffff;
  LOCK();
  DAT_180c64050 = DAT_180c64050 + 1;
  UNLOCK();
  if ((DAT_180c70b40 == '\0') || (param_1 != DAT_180c6e520)) {
    if (DAT_180c6fc00 == 0) goto switchD_180387fd5_caseD_100;
LAB_180388012:
    (*(code *)DAT_180c6fc00)(param_1,param_2,param_3,param_4);
  }
  else {
    uVar10 = (undefined7)((ulonglong)DAT_180c6e520 >> 8);
    if (Msg == 6) {
      sVar12 = (short)param_3;
      uVar15 = FUN_180386a70(CONCAT71(uVar10,sVar12 != 0));
      if (sVar12 == 0) {
        FUN_1803d1c70(uVar15,0);
      }
      uVar15 = FUN_180439770();
      uVar15 = FUN_18043a370(uVar15,6,param_3,param_4);
      if (DAT_180c6fc00 != 0) {
        uVar15 = (*(code *)DAT_180c6fc00)(param_1,6,param_3,param_4);
      }
      if (sVar12 != 0) {
        FUN_1803d1c70(uVar15,1);
      }
      goto LAB_18038801e;
    }
    if (Msg - 7 < 2) {
      FUN_180386a70(CONCAT71(uVar10,Msg == 7));
    }
    if (((((Msg == 0x20) && ((short)param_4 == 1)) && (param_1 == DAT_180c6e520)) &&
        ((pHVar5 = GetForegroundWindow(), pHVar5 == param_1 && (DAT_180ccaa20 != 0)))) &&
       (FUN_1803d1c70(), DAT_180ccaa36 != '\0')) {
      hCursor = LoadCursorW((HINSTANCE)0x0,(LPCWSTR)0x7f00);
      SetCursor(hCursor);
      goto LAB_18038801e;
    }
    if ((DAT_180c653f0 == '\0') || (DAT_180ccaa20 == 0)) {
      if ((Msg == 0x100) && (((param_4 >> 0x1e & 1) == 0 && (param_3 == 0x1b)))) {
        DAT_180c70e78 = GetTickCount64();
        if (DAT_180c70a60 == 0) {
          uVar4 = 0xff;
        }
        else {
          lVar8 = DAT_180c70a60 + 0x54;
          if (lVar8 != 0) {
            local_668[0] = 0;
            lVar7 = FUN_18017ea70();
            *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
            cVar3 = FUN_1804514c0(local_668,lVar8,1);
            if (cVar3 != '\0') {
              lVar8 = FUN_18017ea70();
              if (*(int *)(lVar8 + 4) != 0) {
                *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
              }
              uVar4 = (uint)local_668[0];
              goto LAB_180387c97;
            }
            lVar8 = FUN_18017ea70();
            if (*(int *)(lVar8 + 4) != 0) {
              *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
            }
          }
          uVar4 = 0xff;
        }
LAB_180387c97:
        uVar11 = (uint)DAT_180ccaa20;
        FUN_18063ab10(local_648,0,0x600);
        local_670 = (char *)CONCAT44(local_670._4_4_,uVar4);
        local_678 = (undefined **)CONCAT44(local_678._4_4_,uVar11);
        FUN_18015ad60(local_648,0x600,0xffffffffffffffff,
                      "menu_open=%d menu_keys=device_preferences relative_mouse=%d");
        local_678 = &PTR_180700558;
        if (local_648[0] != '\0') {
          local_678 = (undefined **)&DAT_1806bcfc0;
        }
        local_670 = local_648;
        FUN_1800f6900(0);
      }
      cVar3 = FUN_18054c7c0();
      FUN_18054c430(param_1,param_2 & 0xffffffff,param_3,param_4);
      if ((DAT_180ccaa20 == 0) ||
         ((((cVar3 == '\0' && (cVar3 = FUN_18054c7c0(), cVar3 == '\0')) &&
           (lVar8 = FUN_18043aae0(), *(longlong *)(lVar8 + 0x58) == 0)) &&
          (((lVar8 = FUN_180439770(), *(longlong *)(lVar8 + 0x420) == 0 &&
            (lVar8 = FUN_180439770(), *(longlong *)(lVar8 + 0x428) == 0)) &&
           (lVar8 = FUN_180439770(), *(longlong *)(lVar8 + 0x430) == 0)))))) {
        bVar14 = false;
      }
      else {
        bVar14 = true;
      }
      if ((((Msg - 0x100 & 0xfffffffb) == 0) && ((param_4 & 0x40000000) == 0)) &&
         (((!bVar14 &&
           (((iVar2 = (int)param_3, iVar2 - 8U < 0xf7 && (iVar2 != 0x1b)) && (2 < iVar2 - 0x10U))))
          && ((1 < iVar2 - 0x5bU && (5 < iVar2 - 0xa0U)))))) {
        if (DAT_180bb904a == '\0') {
          pcVar9 = (char *)thunk_FUN_1805f8070(&DAT_1807006a8,"config",param_3 & 0xffffffff);
          bVar14 = pcVar9 != "config";
        }
        else {
          uVar11 = iVar2 >> 0x1f & 0x3f;
          uVar4 = iVar2 + uVar11;
          bVar14 = ((ulonglong)(&DAT_180bbe890)[(int)uVar4 >> 6] >>
                    ((ulonglong)((uVar4 & 0x3f) - uVar11) & 0x3f) & 1) != 0;
        }
        if (bVar14) {
          DAT_180ccaa20 = DAT_180ccaa20 == 0;
          LOCK();
          UNLOCK();
          goto LAB_18038801e;
        }
      }
      uVar15 = FUN_180439770();
      FUN_18043a370(uVar15,param_2 & 0xffffffff,param_3,param_4);
      puVar6 = (undefined4 *)FUN_180439770();
      FUN_180387670(&local_660,param_1,uVar13,param_4);
      if (local_658 != '\0') {
        *puVar6 = local_660;
        puVar6[1] = uStack_65c;
      }
      if (DAT_180ccaa20 == 0) goto switchD_180387fd5_caseD_103;
      if (Msg == 0x20a) {
        FUN_180387670(&local_660,param_1,uVar13,param_4);
        if (local_658 == '\0') {
          auVar1 = vunpcklps_avx(SUB6416(ZEXT464(0xff7fffff),0),SUB6416(ZEXT464(0xff7fffff),0));
          uVar15 = auVar1._0_8_;
        }
        else {
          uVar15 = CONCAT44(uStack_65c,local_660);
        }
        FUN_180387850(uVar15);
      }
      if ((DAT_180c63119 != '\0') && (DAT_1808e6c00 != '\0')) {
        if (Msg == 0xff) goto LAB_180387bac;
        FUN_180387670(&local_660,param_1,uVar13);
        if (local_658 != '\0') {
          uVar15 = FUN_180387850(CONCAT44(uStack_65c,local_660));
          cVar3 = FUN_180386b00(uVar13,uVar15);
          if (cVar3 != '\0') {
            if (DAT_180c6fc00 != 0) {
              param_2 = param_2 & 0xffffffff;
              if (Msg == 0x203) {
                param_2 = 0x201;
              }
              goto LAB_180388012;
            }
            goto switchD_180387fd5_caseD_100;
          }
        }
        if (Msg - 0x100 < 2) {
          if (param_3 - 0x10 < 3) goto switchD_180387fd5_caseD_103;
          if (Msg == 0x100) goto switchD_180387fd5_caseD_100;
        }
        if (Msg - 0x101 < 2) goto switchD_180387fd5_caseD_100;
      }
      if (0x109 < Msg) {
        switch(Msg) {
        case 0x200:
        case 0x201:
        case 0x202:
        case 0x203:
        case 0x204:
        case 0x205:
        case 0x206:
        case 0x207:
        case 0x208:
        case 0x209:
        case 0x20a:
        case 0x20b:
        case 0x20c:
        case 0x20d:
        case 0x20e:
          goto switchD_180387fd5_caseD_100;
        default:
          goto switchD_180387fd5_caseD_103;
        }
      }
      if (Msg != 0x109) {
        switch(Msg) {
        case 0xff:
          DefWindowProcW(param_1,Msg,param_3,param_4);
          goto LAB_18038801e;
        case 0x100:
        case 0x101:
        case 0x102:
        case 0x104:
        case 0x105:
          break;
        default:
          goto switchD_180387fd5_caseD_103;
        }
      }
    }
    else {
      uVar15 = FUN_180439770();
      FUN_18043a370(uVar15,param_2 & 0xffffffff,param_3,param_4);
      puVar6 = (undefined4 *)FUN_180439770();
      FUN_180387670(&local_660,param_1,param_2 & 0xffffffff,param_4);
      if (local_658 != '\0') {
        *puVar6 = local_660;
        puVar6[1] = uStack_65c;
      }
      if (Msg == 0xff) {
LAB_180387bac:
        DefWindowProcW(param_1,0xff,param_3,param_4);
        goto LAB_18038801e;
      }
      if ((Msg - 0x200 < 0xf) || (Msg - 0x100 < 3)) goto switchD_180387fd5_caseD_100;
switchD_180387fd5_caseD_103:
      param_2 = uVar13;
      if (DAT_180c6fc00 != 0) goto LAB_180388012;
    }
switchD_180387fd5_caseD_100:
  }
LAB_18038801e:
  LOCK();
  DAT_180c64050 = DAT_180c64050 + -1;
  UNLOCK();
}



