// FUN_18028cb60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18028cb60 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18028cb60(undefined *param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  ULONGLONG UVar6;
  longlong lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *******_Buf1;
  undefined *puVar10;
  undefined *puVar11;
  undefined1 auStack_b8 [32];
  undefined *local_98;
  int local_90;
  int local_8c;
  int local_88;
  undefined *local_80;
  undefined *local_78;
  undefined *local_70;
  undefined *local_68;
  undefined *local_60;
  undefined8 *******local_58 [2];
  longlong local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_b8;
  if ((param_1 != (undefined *)0x0) &&
     ((param_2 == -0x258b5465 || (iVar3 = FUN_18027d2c0(param_2), iVar3 != -1)))) {
    local_90 = 0;
    iVar3 = 0;
    puVar11 = local_60;
    do {
      if (param_1 == (undefined *)0x0) {
      }
      uVar5 = FUN_1803d3fa0();
      FUN_180454030(local_58,uVar5,0x60);
      iVar4 = DAT_180c66210;
      if (DAT_180c66210 == 0) {
        UVar6 = GetTickCount64();
        if (UVar6 < DAT_180c66218) {
          iVar4 = 0;
        }
        else {
          local_98 = &DAT_1808f38d0;
          iVar4 = FUN_1805f68d0(&DAT_1808f38d0);
          if (iVar4 != 0) goto LAB_18028d4bd;
          if (DAT_1808f391c == 0x7fffffff) {
            DAT_1808f391c = 0x7ffffffe;
            goto LAB_18028d4b2;
          }
          if ((DAT_180c66210 == 0) && (DAT_180c66218 <= UVar6)) {
            DAT_180c66210 = FUN_1804174b0("CEntityInstance",0xa8a45978);
            DAT_180c66218 = 0xffffffffffffffff;
            if (DAT_180c66210 == 0) {
              DAT_180c66218 = UVar6 + 1000;
            }
          }
          iVar4 = DAT_180c66210;
          FUN_1805f68fc(&DAT_1808f38d0);
        }
      }
      lVar7 = FUN_18017ea70();
      *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
      if (param_1 + iVar4 == (undefined *)0x0) {
        bVar1 = false;
      }
      else {
        local_98 = (undefined *)0x0;
        cVar2 = FUN_1804514f0(&local_98,param_1 + iVar4,8);
        if (cVar2 == '\0') {
          bVar1 = false;
        }
        else {
          local_80 = local_98;
          bVar1 = true;
        }
      }
      puVar8 = local_80;
      lVar7 = FUN_18017ea70();
      if (*(int *)(lVar7 + 4) != 0) {
        *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
      }
      if ((!bVar1) || (puVar8 == (undefined *)0x0)) goto LAB_18028d497;
      lVar7 = FUN_18017ea70();
      *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
      local_98 = (undefined *)0x0;
      cVar2 = FUN_1804514f0(&local_98,puVar8,8);
      puVar10 = local_60;
      if (cVar2 != '\0') {
        puVar10 = local_98;
      }
      local_60 = puVar10;
      lVar7 = FUN_18017ea70();
      if (*(int *)(lVar7 + 4) != 0) {
        *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
      }
      if ((cVar2 == '\0') || (puVar10 != param_1)) goto LAB_18028d497;
      iVar4 = DAT_180c66208;
      if (DAT_180c66208 == 0) {
        UVar6 = GetTickCount64();
        if (UVar6 < DAT_180c66200) {
          iVar4 = 0;
        }
        else {
          local_98 = &DAT_1808f3880;
          iVar4 = FUN_1805f68d0(&DAT_1808f3880);
          if (iVar4 != 0) goto LAB_18028d4bd;
          if (DAT_1808f38cc == 0x7fffffff) {
            DAT_1808f38cc = 0x7ffffffe;
            goto LAB_18028d4b2;
          }
          if ((DAT_180c66208 == 0) && (DAT_180c66200 <= UVar6)) {
            DAT_180c66208 = FUN_1804174b0("CEntityIdentity",0xbecfac7);
            DAT_180c66200 = 0xffffffffffffffff;
            if (DAT_180c66208 == 0) {
              DAT_180c66200 = UVar6 + 1000;
            }
          }
          iVar4 = DAT_180c66208;
          FUN_1805f68fc(&DAT_1808f3880);
        }
      }
      lVar7 = FUN_18017ea70();
      *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
      if (puVar8 + iVar4 == (undefined *)0x0) {
        bVar1 = false;
      }
      else {
        local_98 = (undefined *)((ulonglong)local_98 & 0xffffffff00000000);
        cVar2 = FUN_1804514f0(&local_98,puVar8 + iVar4,4);
        if (cVar2 == '\0') {
          bVar1 = false;
        }
        else {
          local_8c = (int)local_98;
          bVar1 = true;
        }
      }
      iVar4 = local_8c;
      lVar7 = FUN_18017ea70();
      if (*(int *)(lVar7 + 4) != 0) {
        *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
      }
      if ((!bVar1) || (iVar4 != 0)) goto LAB_18028d497;
      _Buf1 = local_58;
      if (0xf < local_40) {
        _Buf1 = local_58[0];
      }
      if ((local_48 == 0xe) && (iVar4 = memcmp(_Buf1,"C_CSPlayerPawn",0xe), iVar4 == 0))
      goto LAB_18028d497;
      iVar4 = DAT_180c6620c;
      if (DAT_180c6620c == 0) {
        UVar6 = GetTickCount64();
        if (UVar6 < DAT_180c661e8) {
          iVar4 = 0;
        }
        else {
          local_98 = &DAT_1808f3830;
          iVar4 = FUN_1805f68d0(&DAT_1808f3830);
          if (iVar4 != 0) goto LAB_18028d4bd;
          if (DAT_1808f387c == 0x7fffffff) {
            DAT_1808f387c = 0x7ffffffe;
            goto LAB_18028d4b2;
          }
          if ((DAT_180c6620c == 0) && (DAT_180c661e8 <= UVar6)) {
            DAT_180c6620c = FUN_1804174b0("C_BaseEntity",0x6d279c31);
            DAT_180c661e8 = 0xffffffffffffffff;
            if (DAT_180c6620c == 0) {
              DAT_180c661e8 = UVar6 + 1000;
            }
          }
          iVar4 = DAT_180c6620c;
          FUN_1805f68fc(&DAT_1808f3830);
        }
      }
      lVar7 = FUN_18017ea70();
      *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
      bVar1 = false;
      if (param_1 + iVar4 != (undefined *)0x0) {
        local_98 = (undefined *)((ulonglong)local_98 & 0xffffffff00000000);
        cVar2 = FUN_1804514f0(&local_98,param_1 + iVar4,4);
        if (cVar2 == '\0') {
          bVar1 = false;
        }
        else {
          bVar1 = true;
          iVar3 = (int)local_98;
        }
      }
      lVar7 = FUN_18017ea70();
      iVar4 = *(int *)(lVar7 + 4);
      if (iVar4 != 0) {
        iVar4 = iVar4 + -1;
        *(int *)(lVar7 + 4) = iVar4;
      }
      if ((!bVar1) || (0xfffffffd < iVar3 - 1U)) {
LAB_18028d0ed:
        iVar4 = DAT_180c661d8;
        if (DAT_180c661d8 == 0) {
          UVar6 = GetTickCount64();
          if (UVar6 < DAT_180c661e0) {
            iVar4 = 0;
          }
          else {
            local_98 = &DAT_1808f37e0;
            iVar4 = FUN_1805f68d0(&DAT_1808f37e0);
            if (iVar4 != 0) goto LAB_18028d4bd;
            if (DAT_1808f382c == 0x7fffffff) {
              DAT_1808f382c = 0x7ffffffe;
              goto LAB_18028d4b2;
            }
            if ((DAT_180c661d8 == 0) && (DAT_180c661e0 <= UVar6)) {
              DAT_180c661d8 = FUN_1804174b0("C_BaseEntity",0x9d930423);
              DAT_180c661e0 = 0xffffffffffffffff;
              if (DAT_180c661d8 == 0) {
                DAT_180c661e0 = UVar6 + 1000;
              }
            }
            iVar4 = DAT_180c661d8;
            FUN_1805f68fc(&DAT_1808f37e0);
          }
        }
        lVar7 = FUN_18017ea70();
        *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
        if (param_1 + iVar4 == (undefined *)0x0) {
          bVar1 = false;
        }
        else {
          local_98 = (undefined *)0x0;
          cVar2 = FUN_1804514f0(&local_98,param_1 + iVar4,8);
          if (cVar2 == '\0') {
            bVar1 = false;
          }
          else {
            local_70 = local_98;
            bVar1 = true;
          }
        }
        puVar8 = local_70;
        lVar7 = FUN_18017ea70();
        if (*(int *)(lVar7 + 4) != 0) {
          *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
        }
        puVar10 = (undefined *)0x0;
        if (bVar1) {
          puVar10 = puVar8;
        }
        iVar4 = DAT_180c661d0;
        if (DAT_180c661d0 == 0) {
          UVar6 = GetTickCount64();
          if (UVar6 < DAT_180c661c8) {
            iVar4 = 0;
          }
          else {
            local_98 = &DAT_1808f3740;
            iVar4 = FUN_1805f68d0(&DAT_1808f3740);
            if (iVar4 != 0) goto LAB_18028d4bd;
            if (DAT_1808f378c == 0x7fffffff) {
              DAT_1808f378c = 0x7ffffffe;
              goto LAB_18028d4b2;
            }
            if ((DAT_180c661d0 == 0) && (DAT_180c661c8 <= UVar6)) {
              DAT_180c661d0 = FUN_1804174b0("CGameSceneNode",0xb89c7c3f);
              DAT_180c661c8 = 0xffffffffffffffff;
              if (DAT_180c661d0 == 0) {
                DAT_180c661c8 = UVar6 + 1000;
              }
            }
            iVar4 = DAT_180c661d0;
            FUN_1805f68fc(&DAT_1808f3740);
          }
        }
        lVar7 = FUN_18017ea70();
        *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
        if (puVar10 + iVar4 == (undefined *)0x0) {
          bVar1 = false;
        }
        else {
          local_98 = (undefined *)0x0;
          cVar2 = FUN_1804514f0(&local_98,puVar10 + iVar4,8);
          if (cVar2 == '\0') {
            bVar1 = false;
          }
          else {
            local_68 = local_98;
            bVar1 = true;
          }
        }
        puVar8 = local_68;
        lVar7 = FUN_18017ea70();
        if (*(int *)(lVar7 + 4) != 0) {
          *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
        }
        if ((!bVar1) || (puVar8 == (undefined *)0x0)) {
LAB_18028d497:
          FUN_18015c010(local_58);
        }
        iVar4 = DAT_180c661d4;
        if (DAT_180c661d4 == 0) {
          UVar6 = GetTickCount64();
          if (UVar6 < DAT_180c661c0) {
            iVar4 = 0;
          }
          else {
            local_98 = &DAT_1808f36f0;
            iVar4 = FUN_1805f68d0(&DAT_1808f36f0);
            if (iVar4 != 0) {
LAB_18028d4bd:
                    /* WARNING: Subroutine does not return */
              FUN_1805f6d44(5);
            }
            if (DAT_1808f373c == 0x7fffffff) {
              DAT_1808f373c = 0x7ffffffe;
LAB_18028d4b2:
                    /* WARNING: Subroutine does not return */
              FUN_1805f6d44(6);
            }
            if ((DAT_180c661d4 == 0) && (DAT_180c661c0 <= UVar6)) {
              DAT_180c661d4 = FUN_1804174b0("CGameSceneNode",0x6b325da);
              DAT_180c661c0 = 0xffffffffffffffff;
              if (DAT_180c661d4 == 0) {
                DAT_180c661c0 = UVar6 + 1000;
              }
            }
            iVar4 = DAT_180c661d4;
            FUN_1805f68fc(&DAT_1808f36f0);
          }
        }
        lVar7 = FUN_18017ea70();
        *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
        puVar8 = puVar8 + iVar4;
        bVar1 = false;
        if (puVar8 != (undefined *)0x0) {
          local_98 = (undefined *)0x0;
          cVar2 = FUN_1804514f0(&local_98,puVar8,8);
          if (cVar2 == '\0') {
            bVar1 = false;
          }
          else {
            bVar1 = true;
            puVar11 = local_98;
          }
        }
        lVar7 = FUN_18017ea70();
        if (*(int *)(lVar7 + 4) != 0) {
          *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
        }
        if (((!bVar1) || (puVar11 == (undefined *)0x0)) || (puVar11 == param_1)) goto LAB_18028d497;
        param_1 = puVar11;
      }
      else {
        puVar8 = (undefined *)FUN_1803d4150(iVar4,iVar3);
        iVar4 = DAT_180c661f8;
        if (DAT_180c661f8 == 0) {
          UVar6 = GetTickCount64();
          if (UVar6 < DAT_180c661f0) {
            iVar4 = 0;
          }
          else {
            local_98 = &DAT_1808f3790;
            iVar4 = FUN_1805f68d0(&DAT_1808f3790);
            if (iVar4 != 0) goto LAB_18028d4bd;
            if (DAT_1808f37dc == 0x7fffffff) {
              DAT_1808f37dc = 0x7ffffffe;
              goto LAB_18028d4b2;
            }
            if ((DAT_180c661f8 == 0) && (DAT_180c661f0 <= UVar6)) {
              DAT_180c661f8 = FUN_1804174b0("CEntityInstance",0xa8a45978);
              DAT_180c661f0 = 0xffffffffffffffff;
              if (DAT_180c661f8 == 0) {
                DAT_180c661f0 = UVar6 + 1000;
              }
            }
            iVar4 = DAT_180c661f8;
            FUN_1805f68fc(&DAT_1808f3790);
          }
        }
        lVar7 = FUN_18017ea70();
        *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
        if (puVar8 + iVar4 == (undefined *)0x0) {
          bVar1 = false;
        }
        else {
          local_98 = (undefined *)0x0;
          cVar2 = FUN_1804514f0(&local_98,puVar8 + iVar4,8);
          if (cVar2 == '\0') {
            bVar1 = false;
          }
          else {
            local_78 = local_98;
            bVar1 = true;
          }
        }
        puVar10 = local_78;
        lVar7 = FUN_18017ea70();
        if (*(int *)(lVar7 + 4) != 0) {
          *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
        }
        puVar9 = (undefined *)0x0;
        if (bVar1) {
          puVar9 = puVar10;
        }
        if ((puVar8 == (undefined *)0x0) || (puVar8 == param_1)) goto LAB_18028d0ed;
        lVar7 = FUN_18017ea70();
        *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
        if (puVar9 + 0x10 == (undefined *)0x0) {
          bVar1 = false;
        }
        else {
          local_98 = (undefined *)((ulonglong)local_98 & 0xffffffff00000000);
          cVar2 = FUN_1804514f0(&local_98,puVar9 + 0x10,4);
          if (cVar2 == '\0') {
            bVar1 = false;
          }
          else {
            local_88 = (int)local_98;
            bVar1 = true;
          }
        }
        iVar4 = local_88;
        lVar7 = FUN_18017ea70();
        if (*(int *)(lVar7 + 4) != 0) {
          *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
        }
        if ((!bVar1) || (iVar4 != iVar3)) goto LAB_18028d0ed;
        param_1 = puVar8;
      }
      FUN_18015c010(local_58);
      local_90 = local_90 + 1;
    } while (local_90 < 5);
  }
}



