// FUN_18023ed80 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18023ed80 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18023ed80(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  ULONGLONG UVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined4 uVar13;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  char *local_58;
  undefined8 local_50;
  char *local_48;
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_1808d5f00 ^ (ulonglong)auStack_88;
  local_68 = (undefined *)CONCAT44(*(undefined4 *)param_1[3],*(undefined4 *)(param_1[2] + 0x10));
  puVar6 = (undefined8 *)
           FUN_180276b70(*(undefined4 *)param_1[3],&local_58,*(undefined8 *)(param_1[1] + 8),
                         local_68);
  puVar1 = (undefined8 *)*param_1;
  uVar2 = puVar6[1];
  *puVar1 = *puVar6;
  puVar1[1] = uVar2;
  uVar2 = *(undefined8 *)(param_1[1] + 8);
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  lVar8 = DAT_1808ecc60;
  lVar9 = DAT_1808da460;
  uVar11 = 0xffffffffffffffff;
  if ((DAT_1808ecc60 != DAT_1808da460) || (lVar10 = DAT_180c64118, DAT_180c64118 == 0)) {
    UVar7 = GetTickCount64();
    if ((lVar8 == lVar9) && (UVar7 < DAT_180c64100)) {
      lVar10 = 0;
    }
    else {
      local_68 = &DAT_1808ecc70;
      iVar5 = FUN_1805f68d0(&DAT_1808ecc70);
      if (iVar5 != 0) goto LAB_18023f116;
      if (DAT_1808eccbc == 0x7fffffff) {
        DAT_1808eccbc = 0x7ffffffe;
        goto LAB_18023f10b;
      }
      uVar12 = 1000;
      if (DAT_1808ecc60 == lVar9) {
        if ((DAT_180c64118 == 0) && (DAT_180c64100 <= UVar7)) goto LAB_18023eecc;
      }
      else {
        DAT_1808ecc68 = 1000;
LAB_18023eecc:
        lVar8 = -1;
        do {
          local_40 = lVar8 + 1;
          lVar10 = lVar8 + 1;
          lVar8 = local_40;
        } while ("client.dll:>E8????????418B9668030000"[lVar10] != '\0');
        local_48 = "client.dll:>E8????????418B9668030000";
        local_58 = "patterns::get_interp_amount";
        local_50 = 0x1b;
        DAT_180c64118 = FUN_1800e5d20(&local_58,&local_48);
        DAT_1808ecc60 = lVar9;
        DAT_180c64100 = 0xffffffffffffffff;
        if (DAT_180c64118 == 0) {
          DAT_180c64100 = DAT_1808ecc68 + UVar7;
          uVar12 = 60000;
          if (DAT_1808ecc68 < 60000) {
            uVar12 = DAT_1808ecc68 * 2;
          }
        }
        DAT_1808ecc68 = uVar12;
      }
      lVar10 = DAT_180c64118;
      FUN_1805f68fc(&DAT_1808ecc70);
    }
  }
  cVar4 = FUN_1804513c0(lVar10,1,2);
  if (cVar4 == '\0') {
    local_68._0_5_ = (uint5)(uint)local_68;
  }
  else {
    lVar9 = FUN_18017ea70();
    *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
    FUN_180241550(&local_68,lVar10,uVar2);
    lVar9 = FUN_18017ea70();
    if (*(int *)(lVar9 + 4) != 0) {
      *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
    }
  }
  puVar1 = (undefined8 *)param_1[4];
  *puVar1 = local_68;
  puVar3 = (undefined4 *)param_1[5];
  uVar13 = FUN_180277ea0(puVar1,1);
  *puVar3 = uVar13;
  puVar3 = (undefined4 *)param_1[6];
  uVar13 = FUN_180277c60();
  *puVar3 = uVar13;
  iVar5 = DAT_180c640f0;
  if (DAT_180c640f0 == 0) {
    UVar7 = GetTickCount64();
    if (UVar7 < DAT_180c640f8) {
    }
    local_68 = &DAT_1808ecc10;
    iVar5 = FUN_1805f68d0(&DAT_1808ecc10);
    if (iVar5 != 0) {
LAB_18023f116:
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1808ecc5c == 0x7fffffff) {
      DAT_1808ecc5c = 0x7ffffffe;
LAB_18023f10b:
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if ((DAT_180c640f0 == 0) && (DAT_180c640f8 <= UVar7)) {
      DAT_180c640f0 = FUN_1804174b0("C_CSWeaponBase",0xd779e87b);
      if (DAT_180c640f0 == 0) {
        uVar11 = UVar7 + 1000;
      }
      DAT_180c640f8 = uVar11;
    }
    iVar5 = DAT_180c640f0;
    FUN_1805f68fc(&DAT_1808ecc10);
    if (iVar5 == 0) {
    }
  }
  lVar9 = *(longlong *)param_1[8];
  lVar8 = FUN_18017ea70();
  *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
  if (lVar9 + iVar5 != 0) {
    local_68 = (undefined *)((ulonglong)local_68 & 0xffffffff00000000);
    cVar4 = FUN_1804514f0(&local_68,lVar9 + iVar5,4);
    if (cVar4 != '\0') {
      local_68._0_5_ = CONCAT14(1,(uint)local_68);
      goto LAB_18023f0b9;
    }
  }
  local_68._0_5_ = (uint5)(uint)local_68;
LAB_18023f0b9:
  lVar9 = FUN_18017ea70();
  if (*(int *)(lVar9 + 4) != 0) {
    *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
  }
  *(undefined **)param_1[7] = local_68;
}



