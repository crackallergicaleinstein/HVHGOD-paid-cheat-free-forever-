// FUN_18046b0d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18046b0d0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18046b0d0(undefined **param_1,int *param_2)

{
  undefined ***pppuVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  char cVar4;
  short sVar5;
  int iVar6;
  undefined ***pppuVar7;
  undefined ***pppuVar8;
  longlong lVar9;
  char *pcVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  float fVar14;
  undefined1 auStack_c8 [32];
  char *local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  undefined *local_90;
  undefined1 local_80;
  undefined **local_78;
  undefined **local_70;
  undefined **local_68;
  undefined ***local_60;
  undefined **local_58;
  undefined **local_50;
  undefined **local_48;
  ulonglong local_40;
  
  local_40 = DAT_1808d5f00 ^ (ulonglong)auStack_c8;
  FUN_1804c2800("##esp");
  iVar6 = *param_2;
  if (iVar6 < 0) {
    iVar6 = 0;
  }
  else if (2 < iVar6) {
    iVar6 = 2;
  }
  ppuVar13 = (undefined **)(param_2 + (longlong)iVar6 * 0x46b + 1);
  if (*(char *)(param_1 + 0xdc2) != '\0') {
    FUN_180488320("##esp_element");
    *(undefined1 *)(param_1 + 0xdc2) = 0;
  }
  uVar2 = *(uint *)((longlong)param_1 + 0x6e0c);
  lVar9 = (longlong)(int)uVar2;
  local_48 = ppuVar13;
  if (uVar2 < 0x1d) {
    ppuVar12 = (undefined **)(lVar9 * 0x9c + (longlong)ppuVar13);
    ppuVar11 = &PTR_s_Bounding_Box_18077eec0 + lVar9 * 4;
    if (uVar2 == 0x15) {
      pcVar10 = "Weapon Name";
    }
    else if (uVar2 == 0x16) {
      pcVar10 = "Weapon Icon";
    }
    else if (uVar2 == 0x18) {
      pcVar10 = "Bomb Icon";
    }
    else if (uVar2 == 0x19) {
      pcVar10 = "Defuser Icon";
    }
    else if (uVar2 == 0x1a) {
      pcVar10 = "Taser Icon";
    }
    else {
      pcVar10 = *ppuVar11;
    }
    cVar4 = FUN_180488630("##esp_element",pcVar10,0x438c0000);
    if (cVar4 != '\0') {
      FUN_180488c60();
      FUN_180488a80("Display",&DAT_180829dc0);
      local_a0 = 0;
      local_a8 = (char *)((ulonglong)local_a8 & 0xffffffffffffff00);
      FUN_1804898a0("Show Element",ppuVar12,&DAT_180829dc0,1);
      if (*(int *)((longlong)param_1 + 0x6e0c) == 1) {
        pppuVar1 = (undefined ***)(ppuVar12 + 4);
        fVar14 = *(float *)pppuVar1;
        sVar5 = thunk_FUN_180624430(fVar14);
        if (sVar5 < 1) {
          pppuVar8 = &local_50;
          if (0.75 <= fVar14) {
            pppuVar8 = pppuVar1;
          }
          local_78 = (undefined **)CONCAT44(local_78._4_4_,0x40000000);
          pppuVar7 = &local_78;
          if (fVar14 <= 2.0) {
            pppuVar7 = pppuVar8;
          }
          local_50._0_4_ = 0.75;
          local_50._0_4_ = *(float *)pppuVar7;
        }
        else {
          local_50._0_4_ = 1.0;
        }
        fVar14 = 12.0;
        local_80 = 0;
        local_90 = &DAT_18082a258;
        local_98 = 1;
        local_a0 = CONCAT44(local_a0._4_4_,0x3f800000);
        local_50._0_4_ = local_50._0_4_ * 12.0;
        local_a8 = "%.0f px";
        cVar4 = FUN_18048a250("Name Size",&local_50,0x41100000,0x41c00000);
        if (cVar4 != '\0') {
          *(float *)pppuVar1 = local_50._0_4_ / fVar14;
        }
        local_a0 = 0;
        local_a8 = (char *)((ulonglong)local_a8 & 0xffffffffffffff00);
        FUN_1804898a0("Show Avatar",ppuVar12 + 0x13,&DAT_18082a250,1);
      }
      if ((&DAT_18077eecc)[lVar9 * 0x20] == '\x05') {
        local_a0 = 0;
        local_a8 = (char *)((ulonglong)local_a8 & 0xffffffffffffff00);
        FUN_1804898a0("Flip Icon",(int *)((longlong)ppuVar12 + 0x84),&DAT_18082a298,1);
        if (*(int *)((longlong)param_1 + 0x6e0c) == 0x16) {
          local_a0 = 0;
          local_a8 = (char *)((ulonglong)local_a8 & 0xffffffffffffff00);
          FUN_1804898a0("Show Ammo Count",(undefined1 *)((longlong)ppuVar12 + 0x85),&DAT_180829fa4,1
                       );
        }
      }
      FUN_180488f10();
      local_78 = ppuVar11;
      local_70 = ppuVar12;
      local_68 = param_1;
      FUN_180488c60();
      FUN_18046b960(&local_78);
      FUN_180488f10();
      if (*(int *)((longlong)param_1 + 0x6e0c) == 3) {
        local_78 = ppuVar12;
        FUN_180488c60();
        FUN_18046bd00(&local_78);
        FUN_180488f10();
      }
      if (((&DAT_18077eecc)[lVar9 * 0x20] != '\0') && ((&DAT_18077eecc)[lVar9 * 0x20] != '\x01')) {
        local_60 = &local_48;
        local_78 = ppuVar12;
        local_70 = ppuVar13;
        local_68 = ppuVar11;
        local_58 = param_1;
        FUN_180488c60();
        FUN_18046bf80(&local_78);
        FUN_180488f10();
      }
      if (*(int *)((longlong)param_1 + 0x6e0c) == 0x16) {
        FUN_180488c60();
        FUN_180488a80("Grenade Pin",&DAT_180829f9c);
        local_a0 = CONCAT71(local_a0._1_7_,1);
        FUN_180489fc0("Pin Pulled Color",ppuVar12 + 0x11,1,&DAT_18082a268);
        local_a0 = 0;
        local_a8 = (char *)((ulonglong)local_a8 & 0xffffffffffffff00);
        FUN_1804898a0("Preview Pin Pull",(undefined1 *)((longlong)param_1 + 0x6e11),&DAT_180829f9c,1
                     );
        FUN_180488f10();
      }
      FUN_180488c60();
      cVar4 = FUN_18048b0e0("Reset Element Color",&DAT_180829a4c,1);
      if (cVar4 != '\0') {
        uVar2 = (&DAT_18077eed0)[lVar9 * 8];
        auVar3 = vinsertps_avx(ZEXT416((uint)((float)(uVar2 & 0xff) * 0.003921569)),
                               ZEXT416((uint)((float)(uVar2 >> 8 & 0xff) * 0.003921569)),0x10);
        auVar3 = vinsertps_avx(auVar3,ZEXT416((uint)((float)(uVar2 >> 0x10 & 0xff) * 0.003921569)),
                               0x20);
        auVar3 = vinsertps_avx(auVar3,ZEXT416((uint)((float)(uVar2 >> 0x18) * 0.003921569)),0x30);
        *(undefined1 (*) [16])((longlong)ppuVar12 + 0xc) = auVar3;
      }
      cVar4 = FUN_18048b0e0("Remove from Layout",&DAT_180829a48,1);
      if (cVar4 != '\0') {
        *(undefined1 *)ppuVar12 = 0;
        FUN_1804c7bf0();
      }
      FUN_180488f10();
      FUN_1804aeac0();
    }
  }
  iVar6 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
  if (iVar6 < 2) {
    FUN_1804c5a40("Calling PopID() too many times!");
  }
  else {
    *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar6 + -1;
  }
}



