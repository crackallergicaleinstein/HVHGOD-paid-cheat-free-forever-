// FUN_180217720 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180217720 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000180217cdb) */

void FUN_180217720(undefined8 param_1,longlong param_2,longlong param_3,undefined *param_4,
                  longlong param_5)

{
  char *pcVar1;
  undefined8 uVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  ULONGLONG UVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined *puVar14;
  bool bVar15;
  undefined1 auStack_718 [32];
  undefined **local_6f8;
  char *local_6f0;
  uint local_6e8;
  byte local_6d8;
  undefined *local_6d0;
  undefined *local_6c8;
  longlong local_6c0;
  char *local_6b8;
  longlong local_6b0;
  char *local_6a8;
  longlong local_6a0;
  undefined8 local_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 local_678;
  undefined1 local_670 [40];
  char local_648 [1544];
  ulonglong local_40;
  
  local_40 = DAT_1808d5f00 ^ (ulonglong)auStack_718;
  local_6d0 = param_4;
  local_6c0 = param_2;
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  lVar10 = DAT_1808ea288;
  lVar11 = DAT_1808da460;
  uVar13 = 1000;
  if ((DAT_1808ea288 == DAT_1808da460) && (DAT_180c63a08 != 0)) {
LAB_1802178da:
    lVar11 = local_6c0;
    puVar8 = (undefined8 *)FUN_180184240(local_670,local_6c0);
    local_698 = *puVar8;
    uStack_690 = puVar8[1];
    uStack_688 = puVar8[2];
    uStack_680 = puVar8[3];
    uVar2 = puVar8[4];
    local_678._1_1_ = (char)((ulonglong)uVar2 >> 8);
    bVar15 = local_678._1_1_ == '\0';
    local_678 = uVar2;
    if (bVar15) {
      FUN_1801fde70("knives",lVar11,&local_698);
    }
  }
  else {
    UVar7 = GetTickCount64();
    if ((lVar10 != lVar11) || (DAT_180c63a00 <= UVar7)) {
      local_6c8 = &DAT_1808ea230;
      iVar6 = FUN_1805f68d0(&DAT_1808ea230);
      if (iVar6 != 0) goto LAB_180217d80;
      if (DAT_1808ea27c == 0x7fffffff) {
        DAT_1808ea27c = 0x7ffffffe;
        goto LAB_180217d75;
      }
      if (DAT_1808ea288 == lVar11) {
        if ((DAT_180c63a08 == 0) && (DAT_180c63a00 <= UVar7)) goto LAB_180217836;
      }
      else {
        DAT_1808ea280 = 1000;
LAB_180217836:
        lVar10 = -1;
        do {
          local_6b0 = lVar10 + 1;
          pcVar1 = "lient.dll:48895C241048896C2418488974242057415641574883EC20440FB6F2488BF9" +
                   lVar10;
          lVar10 = local_6b0;
        } while (*pcVar1 != '\0');
        local_6b8 = "client.dll:48895C241048896C2418488974242057415641574883EC20440FB6F2488BF9";
        local_6a8 = "patterns::weapon_update_composite_material";
        local_6a0 = 0x2a;
        DAT_180c63a08 = FUN_1800e5d20(&local_6a8,&local_6b8);
        DAT_1808ea288 = lVar11;
        DAT_180c63a00 = 0xffffffffffffffff;
        if (DAT_180c63a08 == 0) {
          DAT_180c63a00 = DAT_1808ea280 + UVar7;
          if (DAT_1808ea280 < 60000) {
            DAT_1808ea280 = DAT_1808ea280 * 2;
          }
          else {
            DAT_1808ea280 = 60000;
          }
        }
        else {
          DAT_1808ea280 = 1000;
        }
      }
      lVar11 = DAT_180c63a08;
      FUN_1805f68fc(&DAT_1808ea230);
      if (lVar11 != 0) goto LAB_1802178da;
    }
    lVar11 = local_6c0;
  }
  if ((param_5 == 0) || (local_6c8 = (undefined *)0x2, *(char *)(param_5 + 0x90) == '\0')) {
    local_6c8 = (undefined *)0x1;
  }
  local_6d8 = 1;
  if (lVar11 == param_3) {
    local_6d8 = FUN_180217d90();
    if (local_6d8 == 0) {
      DAT_180c710b8 = DAT_180c71094;
      plVar9 = (longlong *)FUN_18017bf40(&local_6d0);
      DAT_180c710c0 = *plVar9 + 50000000;
    }
    else if (DAT_180c710b8 == DAT_180c71094) {
      DAT_180c710b8 = 0;
      DAT_180c710c0 = 0;
    }
  }
  iVar6 = DAT_180c639f0;
  if (DAT_180c639f0 == 0) {
    UVar7 = GetTickCount64();
    if (UVar7 < DAT_180c639f8) {
      iVar6 = 0;
    }
    else {
      local_6d0 = &DAT_1808ea1e0;
      iVar6 = FUN_1805f68d0(&DAT_1808ea1e0);
      if (iVar6 != 0) goto LAB_180217d80;
      if (DAT_1808ea22c == 0x7fffffff) {
        DAT_1808ea22c = 0x7ffffffe;
        goto LAB_180217d75;
      }
      if ((DAT_180c639f0 == 0) && (DAT_180c639f8 <= UVar7)) {
        DAT_180c639f0 = FUN_1804174b0("C_BaseEntity",0x9d930423);
        if (DAT_180c639f0 == 0) {
          DAT_180c639f8 = UVar7 + 1000;
        }
        else {
          DAT_180c639f8 = 0xffffffffffffffff;
        }
      }
      iVar6 = DAT_180c639f0;
      FUN_1805f68fc(&DAT_1808ea1e0);
    }
  }
  lVar10 = FUN_18017ea70();
  *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
  if (iVar6 + lVar11 == 0) {
    bVar15 = false;
    puVar14 = local_6c8;
  }
  else {
    local_6d0 = (undefined *)0x0;
    cVar3 = FUN_1804514f0(&local_6d0,iVar6 + lVar11,8);
    if (cVar3 == '\0') {
      bVar15 = false;
      puVar14 = local_6c8;
    }
    else {
      bVar15 = true;
      puVar14 = local_6d0;
    }
  }
  lVar11 = FUN_18017ea70();
  if (*(int *)(lVar11 + 4) != 0) {
    *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + -1;
  }
  if (!bVar15) {
    puVar14 = (undefined *)0x0;
  }
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  lVar10 = DAT_1808ea1d8;
  lVar11 = DAT_1808da460;
  if ((DAT_1808ea1d8 == DAT_1808da460) && (lVar12 = DAT_180c639e8, DAT_180c639e8 != 0))
  goto LAB_180217c4c;
  UVar7 = GetTickCount64();
  if ((lVar10 == lVar11) && (UVar7 < DAT_180c639e0)) {
    lVar12 = 0;
    goto LAB_180217c4c;
  }
  local_6d0 = &DAT_1808ea180;
  iVar6 = FUN_1805f68d0(&DAT_1808ea180);
  if (iVar6 != 0) {
LAB_180217d80:
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_1808ea1cc == 0x7fffffff) {
    DAT_1808ea1cc = 0x7ffffffe;
LAB_180217d75:
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  if (DAT_1808ea1d8 == lVar11) {
    if ((DAT_180c639e8 == 0) && (DAT_180c639e0 <= UVar7)) goto LAB_180217baf;
  }
  else {
    DAT_1808ea1d0 = 1000;
LAB_180217baf:
    lVar10 = -1;
    do {
      local_6a0 = lVar10 + 1;
      pcVar1 = "lient.dll:48895C24??48897424??574883EC??488D99????????488B71" + lVar10;
      lVar10 = local_6a0;
    } while (*pcVar1 != '\0');
    local_6a8 = "client.dll:48895C24??48897424??574883EC??488D99????????488B71";
    local_6b8 = "patterns::weapon_set_mesh_group_mask";
    local_6b0 = 0x24;
    DAT_180c639e8 = FUN_1800e5d20(&local_6b8,&local_6a8);
    DAT_1808ea1d8 = lVar11;
    DAT_180c639e0 = 0xffffffffffffffff;
    if (DAT_180c639e8 == 0) {
      DAT_180c639e0 = DAT_1808ea1d0 + UVar7;
      uVar13 = DAT_1808ea1d0 * 2;
      if (59999 < DAT_1808ea1d0) {
        uVar13 = 60000;
      }
    }
    DAT_1808ea1d0 = uVar13;
  }
  lVar12 = DAT_180c639e8;
  FUN_1805f68fc(&DAT_1808ea180);
LAB_180217c4c:
  bVar4 = 0;
  if (((puVar14 != (undefined *)0x0) && (lVar12 != 0)) &&
     (cVar3 = FUN_1804513c0(lVar12,1,2), cVar3 != '\0')) {
    lVar11 = FUN_18017ea70();
    *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + 1;
    bVar4 = FUN_1801ad780(lVar12,puVar14,local_6c8);
    lVar11 = FUN_18017ea70();
    if (*(int *)(lVar11 + 4) != 0) {
      *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + -1;
    }
  }
  bVar5 = FUN_18022de40(local_6c0);
  if (((bVar5 == 0) || (bVar4 == 0)) && (UVar7 = GetTickCount64(), DAT_180c639d0 <= UVar7)) {
    DAT_180c639d0 = UVar7 + 1000;
    LOCK();
    UNLOCK();
    FUN_18063ab10(local_648,0,0x600);
    local_6e8 = (uint)local_6d8;
    local_6f0 = (char *)CONCAT44(local_6f0._4_4_,(uint)bVar4);
    local_6f8 = (undefined **)CONCAT44(local_6f8._4_4_,(uint)bVar5);
    FUN_18015ad60(local_648,0x600,0xffffffffffffffff,
                  "feature=knives material_submitted=%d mesh=%d view_model=%d");
    local_6f8 = &PTR_180700558;
    if (local_648[0] != '\0') {
      local_6f8 = (undefined **)&DAT_1806bcfc0;
    }
    local_6f0 = local_648;
    FUN_1800f6900(2,local_6f8,"SkinChanger","SKIN_REFRESH_PENDING");
  }
}



