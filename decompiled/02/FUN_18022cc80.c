// FUN_18022cc80 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18022cc80 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18022cc80(longlong param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  ULONGLONG UVar5;
  longlong lVar6;
  undefined8 *puVar7;
  char *pcVar8;
  longlong lVar9;
  int iVar10;
  undefined4 uVar11;
  longlong lVar12;
  undefined4 uVar13;
  ulonglong uVar14;
  uint uVar15;
  undefined8 extraout_XMM0_Qa;
  undefined1 auStack_748 [32];
  undefined **local_728;
  char *local_720;
  longlong local_718;
  undefined4 local_710;
  undefined4 local_708;
  uint local_700;
  undefined8 *local_6f8 [2];
  undefined1 *local_6e8;
  longlong local_6e0;
  char *local_6d8;
  undefined8 local_6d0;
  undefined8 local_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 local_6a8;
  undefined *local_6a0;
  undefined1 local_698 [40];
  undefined8 local_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 local_650;
  char local_648 [1544];
  ulonglong local_40;
  
  local_40 = DAT_1808d5f00 ^ (ulonglong)auStack_748;
  puVar4 = (undefined8 *)FUN_180184240(local_698,param_1);
  local_6c8 = *puVar4;
  uStack_6c0 = puVar4[1];
  uStack_6b8 = puVar4[2];
  uStack_6b0 = puVar4[3];
  local_6a8 = puVar4[4];
  puVar4 = (undefined8 *)FUN_180184240(local_698,param_2);
  local_670 = *puVar4;
  uStack_668 = puVar4[1];
  uStack_660 = puVar4[2];
  uStack_658 = puVar4[3];
  local_650 = puVar4[4];
  if (param_1 == 0) {
LAB_18022ce66:
    iVar3 = 0;
    if (param_1 != 0) goto LAB_18022ce72;
    uVar11 = 0;
    pcVar8 = (char *)0x0;
    iVar3 = 0;
  }
  else {
    iVar3 = DAT_180c63d4c;
    if (DAT_180c63d4c == 0) {
      UVar5 = GetTickCount64();
      if (UVar5 < DAT_180c63d50) {
        iVar3 = 0;
      }
      else {
        local_6f8[0] = (undefined8 *)&DAT_1808eb720;
        iVar3 = FUN_1805f68d0(&DAT_1808eb720);
        if (iVar3 != 0) goto LAB_18022d3cf;
        if (DAT_1808eb76c == 0x7fffffff) {
          DAT_1808eb76c = 0x7ffffffe;
          goto LAB_18022d3c4;
        }
        if ((DAT_180c63d4c == 0) && (DAT_180c63d50 <= UVar5)) {
          DAT_180c63d4c = FUN_1804174b0("CEntityInstance",0xa8a45978);
          if (DAT_180c63d4c == 0) {
            DAT_180c63d50 = UVar5 + 1000;
          }
          else {
            DAT_180c63d50 = 0xffffffffffffffff;
          }
        }
        iVar3 = DAT_180c63d4c;
        FUN_1805f68fc(&DAT_1808eb720);
      }
    }
    lVar6 = FUN_18017ea70();
    *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
    bVar1 = false;
    if (iVar3 + param_1 != 0) {
      local_6f8[0] = (undefined8 *)0x0;
      cVar2 = FUN_1804514f0(local_6f8,iVar3 + param_1,8);
      if (cVar2 == '\0') {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
    }
    puVar4 = local_6f8[0];
    lVar6 = FUN_18017ea70();
    if (*(int *)(lVar6 + 4) != 0) {
      *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
    }
    puVar7 = (undefined8 *)0x0;
    if (bVar1) {
      puVar7 = puVar4;
    }
    if (puVar7 == (undefined8 *)0x0) goto LAB_18022ce66;
    lVar6 = FUN_18017ea70();
    *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
    bVar1 = false;
    if (puVar7 + 2 != (undefined8 *)0x0) {
      local_6f8[0] = (undefined8 *)((ulonglong)local_6f8[0] & 0xffffffff00000000);
      cVar2 = FUN_1804514f0(local_6f8,puVar7 + 2,4);
      if (cVar2 == '\0') {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
    }
    iVar10 = (int)local_6f8[0];
    lVar6 = FUN_18017ea70();
    if (*(int *)(lVar6 + 4) != 0) {
      *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
    }
    iVar3 = 0;
    if (bVar1) {
      iVar3 = iVar10;
    }
LAB_18022ce72:
    iVar10 = DAT_180c63d48;
    if (DAT_180c63d48 == 0) {
      UVar5 = GetTickCount64();
      if (UVar5 < DAT_180c63d40) {
        iVar10 = 0;
      }
      else {
        local_6f8[0] = (undefined8 *)&DAT_1808eb6d0;
        iVar10 = FUN_1805f68d0(&DAT_1808eb6d0);
        if (iVar10 != 0) goto LAB_18022d3cf;
        if (DAT_1808eb71c == 0x7fffffff) {
          DAT_1808eb71c = 0x7ffffffe;
          goto LAB_18022d3c4;
        }
        if ((DAT_180c63d48 == 0) && (DAT_180c63d40 <= UVar5)) {
          DAT_180c63d48 = FUN_1804174b0("C_BaseEntity",0x6d279c31);
          if (DAT_180c63d48 == 0) {
            DAT_180c63d40 = UVar5 + 1000;
          }
          else {
            DAT_180c63d40 = 0xffffffffffffffff;
          }
        }
        iVar10 = DAT_180c63d48;
        FUN_1805f68fc(&DAT_1808eb6d0);
      }
    }
    lVar6 = FUN_18017ea70();
    *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
    if (iVar10 + param_1 == 0) {
      bVar1 = false;
    }
    else {
      local_6f8[0] = (undefined8 *)((ulonglong)local_6f8[0] & 0xffffffff00000000);
      cVar2 = FUN_1804514f0(local_6f8,iVar10 + param_1,4);
      if (cVar2 == '\0') {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
    }
    uVar13 = (int)local_6f8[0];
    lVar6 = FUN_18017ea70();
    iVar10 = *(int *)(lVar6 + 4);
    if (iVar10 != 0) {
      iVar10 = iVar10 + -1;
      *(int *)(lVar6 + 4) = iVar10;
    }
    uVar11 = 0;
    if (bVar1) {
      uVar11 = uVar13;
    }
    pcVar8 = (char *)FUN_1803d3fa0(iVar10,param_1);
  }
  if (local_6a8._1_1_ == '\0') {
  }
  if (local_650._1_1_ == '\0') {
  }
  if ((int)local_670 != 0) {
  }
  if (iVar3 == 0) {
  }
  lVar6 = FUN_1803d4150();
  if (lVar6 != param_1) {
  }
  if (param_2 == 0) {
  }
  lVar6 = FUN_1803d4150(extraout_XMM0_Qa,uVar11);
  if (lVar6 != param_2) {
  }
  if (pcVar8 == (char *)0x0) {
  }
  iVar10 = strcmp(pcVar8,"C_CS2HudModelWeapon");
  if (iVar10 != 0) {
  }
  local_6f8[0] = &local_670;
  cVar2 = FUN_18022aee0(param_1,param_2);
  if (cVar2 == '\0') {
  }
  cVar2 = FUN_18022d3e0(local_6f8,&local_6c8);
  if (cVar2 != '\0') {
  }
  if (0x40 < (int)uStack_660) {
  }
  if ((DAT_180cd3b38 & 1) == 0) {
    DAT_180cd3b38 = DAT_180cd3b38 | 1;
    DAT_180cd3b40 = FUN_18022d530();
  }
  UVar5 = GetTickCount64();
  if (((DAT_180c63d28 == param_1) && (DAT_180c63d18 == iVar3)) && (UVar5 < DAT_180c63d20)) {
  }
  DAT_180c63d20 = UVar5 + 0xfa;
  DAT_180c63d18 = iVar3;
  DAT_180c63d28 = param_1;
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  lVar9 = DAT_1808eb6c0;
  lVar6 = DAT_1808da460;
  if ((DAT_1808eb6c0 != DAT_1808da460) || (lVar12 = DAT_180c63d38, DAT_180c63d38 == 0)) {
    UVar5 = GetTickCount64();
    if ((lVar9 == lVar6) && (UVar5 < DAT_180c63d30)) {
      lVar12 = 0;
    }
    else {
      local_6a0 = &DAT_1808eb670;
      iVar10 = FUN_1805f68d0(&DAT_1808eb670);
      if (iVar10 != 0) {
LAB_18022d3cf:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1808eb6bc == 0x7fffffff) {
        DAT_1808eb6bc = 0x7ffffffe;
LAB_18022d3c4:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      uVar14 = 1000;
      if (DAT_1808eb6c0 == lVar6) {
        if ((DAT_180c63d38 == 0) && (DAT_180c63d30 <= UVar5)) goto LAB_18022d179;
      }
      else {
        DAT_1808eb660 = 1000;
LAB_18022d179:
        lVar9 = -1;
        do {
          local_6e0 = lVar9 + 1;
          pcVar8 = "lient.dll:48895C241048896C2418488974242057415641574883EC20440FB6F2488BF9" +
                   lVar9;
          lVar9 = local_6e0;
        } while (*pcVar8 != '\0');
        local_6e8 = &DAT_180824970;
        local_6d8 = "patterns::weapon_update_composite_material";
        local_6d0 = 0x2a;
        DAT_180c63d38 = FUN_1800e5d20(&local_6d8,&local_6e8);
        DAT_1808eb6c0 = lVar6;
        DAT_180c63d30 = 0xffffffffffffffff;
        if (DAT_180c63d38 == 0) {
          DAT_180c63d30 = DAT_1808eb660 + UVar5;
          uVar14 = 60000;
          if (DAT_1808eb660 < 60000) {
            uVar14 = DAT_1808eb660 * 2;
          }
        }
        DAT_1808eb660 = uVar14;
      }
      lVar12 = DAT_180c63d38;
      FUN_1805f68fc(&DAT_1808eb670);
    }
  }
  if ((int)uStack_660 == 0) {
    if ((lVar12 != 0) && (cVar2 = FUN_1804513c0(lVar12,1,2), cVar2 != '\0')) {
      lVar6 = FUN_18017ea70();
      *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
      cVar2 = FUN_18022ff70(lVar12,param_1 + 0x610,1);
      lVar6 = FUN_18017ea70();
      if (*(int *)(lVar6 + 4) != 0) {
        *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
      }
      if (cVar2 != '\0') goto LAB_18022d340;
    }
LAB_18022d24a:
    uVar11 = 0;
  }
  else {
    if ((DAT_180cd3b40 == 0) ||
       (cVar2 = FUN_18022f0e0(DAT_180cd3b40,param_2 + 0x610,param_1 + 0x610,1), cVar2 == '\0'))
    goto LAB_18022d24a;
LAB_18022d340:
    uVar13 = 1;
    puVar4 = (undefined8 *)FUN_180184240(local_698,param_1);
    local_6c8 = *puVar4;
    uStack_6c0 = puVar4[1];
    uStack_6b8 = puVar4[2];
    uStack_6b0 = puVar4[3];
    local_6a8 = puVar4[4];
    cVar2 = FUN_18022d3e0(local_6f8,&local_6c8);
    uVar11 = 1;
    if (cVar2 != '\0') {
      uVar15 = 1;
      DAT_180c63d20 = 0;
      goto LAB_18022d250;
    }
  }
  uVar13 = uVar11;
  uVar15 = 0;
LAB_18022d250:
  FUN_18063ab10(local_648,0,0x600);
  local_710 = (int)uStack_660;
  local_720 = (char *)CONCAT44(local_720._4_4_,iVar3);
  local_728 = (undefined **)param_1;
  local_718 = param_2;
  local_708 = uVar13;
  local_700 = uVar15;
  FUN_18015ad60(local_648,0x600,0xffffffffffffffff,
                "model=%p handle=0x%x owner=%p materials=%d submitted=%d handles_match=%d rendered=unverified"
               );
  local_728 = &PTR_180700558;
  if (local_648[0] != '\0') {
    local_728 = (undefined **)&DAT_1806bcfc0;
  }
  local_720 = local_648;
  FUN_1800f6900((uVar15 ^ 1) * 2,local_728,"SkinChanger","HELD_FINISH_OWNER_SYNC");
}



