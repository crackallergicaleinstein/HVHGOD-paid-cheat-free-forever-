// FUN_18053a600 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18053a600 */

void FUN_18053a600(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined **ppuVar6;
  ulonglong uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined **local_res10;
  undefined8 in_stack_ffffffffffffff48;
  undefined8 uVar12;
  undefined8 in_stack_ffffffffffffff50;
  undefined4 uVar14;
  undefined8 uVar13;
  char *pcVar15;
  undefined **local_98;
  undefined1 *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 local_68 [16];
  
  iVar5 = DAT_180b0bd20;
  local_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  local_68 = (undefined1  [16])0x0;
  uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffff50 >> 0x20);
  uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffff48 >> 0x20);
  if (DAT_180c62878 == 0) {
    uVar13 = CONCAT44(uVar14,0x425c0000);
    uVar12 = CONCAT44(uVar10,0x436e0000);
    uVar10 = 0x436e0000;
    FUN_180485630(&local_88,param_1,0,param_4,uVar12,uVar13,"Grenade Type",1);
    uVar14 = (undefined4)((ulonglong)uVar12 >> 0x20);
    uVar11 = (undefined4)((ulonglong)uVar13 >> 0x20);
    FUN_180555f10(&local_88);
    if (DAT_180bbecdb != '\0') {
      if (DAT_180c62d18 != DAT_180c62d20) {
        FUN_18015c010(DAT_180c62d20 + -0x20);
        DAT_180c62d20 = DAT_180c62d20 + -0x20;
      }
      DAT_1808e4e38 = 0xffffffff;
    }
    iVar5 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
    if (iVar5 < 2) {
      FUN_1804c5a40("Calling PopID() too many times!");
    }
    else {
      *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar5 + -1;
    }
    switch(DAT_180c62f6c) {
    default:
      ppuVar6 = (undefined **)&DAT_180cc7cb0;
      break;
    case 1:
      ppuVar6 = (undefined **)&DAT_180cc7d18;
      break;
    case 2:
      ppuVar6 = (undefined **)&DAT_180cc7d80;
      break;
    case 3:
      ppuVar6 = (undefined **)&DAT_180cc7de8;
      break;
    case 4:
      ppuVar6 = (undefined **)&DAT_180cc7e50;
      break;
    case 5:
      ppuVar6 = (undefined **)&DAT_180cc7eb8;
    }
    local_88 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    local_68 = (undefined1  [16])0x0;
    iVar5 = (DAT_180c62f6c != 5) + 2;
    pcVar15 = "Projectile ESP";
    uVar12 = CONCAT44(uVar14,uVar10);
    FUN_180485630(&local_88,param_1,0);
    cVar2 = DAT_180cc7c48;
    local_res10 = (undefined **)&DAT_180cc7c48;
    uVar10 = 0x43960000;
    FUN_180552fb0(&local_88,"Enable Projectile ESP",&DAT_180cc7c48,&local_res10,uVar12,
                  CONCAT44(uVar11,0x43960000),pcVar15,iVar5);
    if (DAT_180cc7c48 != cVar2) {
      DAT_180cc7c58 = DAT_180cc7c48;
    }
    cVar2 = *(char *)ppuVar6;
    local_res10 = ppuVar6;
    FUN_180552fb0(&local_88,"Show Selected Type",ppuVar6,&local_res10,uVar12,uVar10,pcVar15,iVar5);
    if (*(char *)ppuVar6 != cVar2) {
      *(char *)(ppuVar6 + 2) = *(char *)ppuVar6;
    }
    if (DAT_180c62f6c < 5) {
      FUN_180487560(&local_88,"Max Distance",&DAT_180cc7f24 + (longlong)DAT_180c62f6c * 0x10,
                    0x3f800000,0x43480000,"%.0f m",0x3f800000);
    }
    if (DAT_180bbecdb != '\0') {
      if (DAT_180c62d18 != DAT_180c62d20) {
        FUN_18015c010(DAT_180c62d20 + -0x20);
        DAT_180c62d20 = DAT_180c62d20 + -0x20;
      }
      DAT_1808e4e38 = 0xffffffff;
    }
    iVar5 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
    if (iVar5 < 2) {
      FUN_1804c5a40("Calling PopID() too many times!");
    }
    else {
      *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar5 + -1;
    }
    local_88 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    local_68 = (undefined1  [16])0x0;
    FUN_180485630(&local_88,param_1,1);
    if (DAT_180c62f6c < 5) {
      FUN_180556300();
    }
    else {
      FUN_180556860(&local_88);
    }
  }
  else if (DAT_180c62878 == 1) {
    uVar11 = 0x436e0000;
    FUN_180485630(&local_88,param_1,0,param_4,CONCAT44(uVar10,0x436e0000),
                  CONCAT44(uVar14,0x425c0000),"Warning Type",1);
    uVar14 = 1;
    uVar10 = 1;
    FUN_180556e00(&local_88,"##warning_target",&DAT_180c6272c,&PTR_s_HE_Grenade_1807bfd48,
                  &PTR_s_hegrenade_1807bfe00,&PTR_DAT_1807bfd90);
    if (DAT_180bbecdb != '\0') {
      if (DAT_180c62d18 != DAT_180c62d20) {
        FUN_18015c010(DAT_180c62d20 + -0x20);
        DAT_180c62d20 = DAT_180c62d20 + -0x20;
      }
      DAT_1808e4e38 = 0xffffffff;
    }
    iVar5 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
    if (iVar5 < 2) {
      FUN_1804c5a40("Calling PopID() too many times!");
    }
    else {
      *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar5 + -1;
    }
    lVar4 = (longlong)DAT_180c6272c * 0x1c8;
    ppuVar6 = (undefined **)(&DAT_180cc76f0 + lVar4);
    local_88 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    local_68 = (undefined1  [16])0x0;
    iVar5 = 2 - (uint)(DAT_180c6272c != 0);
    pcVar15 = "Danger Warning";
    uVar12 = CONCAT44(uVar10,uVar11);
    FUN_180485630(&local_88,param_1,0);
    cVar2 = *(char *)ppuVar6;
    uVar10 = 0x43960000;
    local_res10 = ppuVar6;
    FUN_180552fb0(&local_88,"Enable Warning",ppuVar6,&local_res10,uVar12,CONCAT44(uVar14,0x43960000)
                  ,pcVar15,iVar5);
    if (*(char *)ppuVar6 != cVar2) {
      (&DAT_180cc7700)[lVar4] = *(char *)ppuVar6;
    }
    if (DAT_180c6272c == 0) {
      ppuVar6 = (undefined **)(&DAT_180cc7840 + lVar4);
      cVar2 = *(char *)ppuVar6;
      local_res10 = ppuVar6;
      FUN_180552fb0(&local_88,"Predicted HP Loss",ppuVar6,&local_res10,uVar12,uVar10,pcVar15,iVar5);
      if (*(char *)ppuVar6 != cVar2) {
        (&DAT_180cc7850)[lVar4] = *(char *)ppuVar6;
      }
    }
    if (DAT_180bbecdb != '\0') {
      if (DAT_180c62d18 != DAT_180c62d20) {
        FUN_18015c010(DAT_180c62d20 + -0x20);
        DAT_180c62d20 = DAT_180c62d20 + -0x20;
      }
      DAT_1808e4e38 = 0xffffffff;
    }
    iVar5 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
    if (iVar5 < 2) {
      FUN_1804c5a40("Calling PopID() too many times!");
    }
    else {
      *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar5 + -1;
    }
    local_88 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    local_68 = (undefined1  [16])0x0;
    FUN_180485630(&local_88,param_1,1);
    FUN_1805571d0(&local_88);
    FUN_180557680(&local_88);
    FUN_180557b70(&local_88);
  }
  else {
    uVar13 = CONCAT44(uVar14,0x425c0000);
    uVar12 = CONCAT44(uVar10,0x436e0000);
    uVar10 = 0x436e0000;
    FUN_180485630(&local_88,param_1,0,param_4,uVar12,uVar13,"Trajectory Target",
                  (DAT_180b0bd20 != 0) + '\x01');
    iVar3 = DAT_180b0bd20;
    uVar14 = (undefined4)((ulonglong)uVar12 >> 0x20);
    uVar11 = (undefined4)((ulonglong)uVar13 >> 0x20);
    local_98 = &PTR_s_All_Grenades_18086b7d0;
    local_90 = (undefined1 *)0x2;
    FUN_180487250(&local_88,"Apply To",&DAT_180b0bd20,&local_98);
    if (iVar3 != DAT_180b0bd20) {
      DAT_180c62f48 = 0;
      DAT_180c62fe0 = 0;
      DAT_1808e4f84 = 0xffffffff;
      DAT_180bbecdf = 0;
      DAT_180bbecde = 0;
      lVar4 = FUN_180439770();
      *(undefined8 *)(lVar4 + 0x420) = 0;
      iVar3 = *(int *)(DAT_180bb8ae8 + 0x1ff8);
      uVar9 = (ulonglong)iVar3;
      if (0 < iVar3) {
        plVar8 = (longlong *)(uVar9 * 0x38 + *(longlong *)(DAT_180bb8ae8 + 0x2000) + -0x30);
        uVar7 = uVar9;
        do {
          if ((*plVar8 == 0) || ((*(uint *)(*plVar8 + 0x14) & 0x8000000) != 0)) break;
          uVar7 = (ulonglong)((int)uVar7 - 1);
          uVar9 = uVar9 - 1;
          plVar8 = plVar8 + -7;
        } while (0 < (longlong)uVar9);
        if ((int)uVar7 < iVar3) {
          FUN_1804c7a50(uVar7 & 0xffffffff,CONCAT71((int7)(uVar9 >> 8),1));
        }
      }
    }
    if (iVar5 != 0) {
      FUN_1805580e0(&local_88);
    }
    if (DAT_180bbecdb != '\0') {
      if (DAT_180c62d18 != DAT_180c62d20) {
        FUN_18015c010(DAT_180c62d20 + -0x20);
        DAT_180c62d20 = DAT_180c62d20 + -0x20;
      }
      DAT_1808e4e38 = 0xffffffff;
    }
    iVar5 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
    if (iVar5 < 2) {
      FUN_1804c5a40("Calling PopID() too many times!");
    }
    else {
      *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar5 + -1;
    }
    if (DAT_180b0bd20 == 0) {
      ppuVar6 = (undefined **)&DAT_180b0bbd0;
    }
    else {
      ppuVar6 = (undefined **)(&DAT_180b0b540 + (longlong)DAT_180c5a50c * 0x150);
    }
    local_88 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    local_68 = (undefined1  [16])0x0;
    iVar5 = (DAT_180b0bd20 != 0) + 2;
    pcVar15 = "Trajectory";
    uVar12 = CONCAT44(uVar14,uVar10);
    FUN_180485630(&local_88,param_1,0);
    cVar2 = DAT_180b0bd28;
    local_res10 = (undefined **)&DAT_180b0bd28;
    uVar10 = 0x43960000;
    uVar13 = CONCAT44(uVar11,0x43960000);
    FUN_180552fb0(&local_88,"Enable Trajectories",&DAT_180b0bd28,&local_res10,uVar12,uVar13,pcVar15,
                  iVar5);
    uVar14 = (undefined4)((ulonglong)uVar13 >> 0x20);
    if (DAT_180b0bd28 != cVar2) {
      DAT_180b0bd38 = DAT_180b0bd28;
    }
    if (DAT_180b0bd20 != 0) {
      cVar2 = *(char *)ppuVar6;
      uVar13 = CONCAT44(uVar14,uVar10);
      local_res10 = ppuVar6;
      FUN_180552fb0(&local_88,"Show Selected Type",ppuVar6,&local_res10,uVar12,uVar13,pcVar15,iVar5)
      ;
      uVar14 = (undefined4)((ulonglong)uVar13 >> 0x20);
      if (*(char *)ppuVar6 != cVar2) {
        *(char *)(ppuVar6 + 2) = *(char *)ppuVar6;
      }
    }
    ppuVar1 = ppuVar6 + 0xd;
    cVar2 = *(char *)ppuVar1;
    local_res10 = ppuVar1;
    FUN_180552fb0(&local_88,"Straight Throw",ppuVar1,&local_res10,uVar12,CONCAT44(uVar14,uVar10),
                  pcVar15,iVar5);
    if (*(char *)ppuVar1 != cVar2) {
      *(char *)(ppuVar6 + 0xf) = *(char *)ppuVar1;
    }
    if (DAT_180bbecdb != '\0') {
      if (DAT_180c62d18 != DAT_180c62d20) {
        FUN_18015c010(DAT_180c62d20 + -0x20);
        DAT_180c62d20 = DAT_180c62d20 + -0x20;
      }
      DAT_1808e4e38 = 0xffffffff;
    }
    iVar5 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
    if (iVar5 < 2) {
      FUN_1804c5a40("Calling PopID() too many times!");
    }
    else {
      *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar5 + -1;
    }
    local_88 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    local_68 = (undefined1  [16])0x0;
    FUN_180485630(&local_88,param_1,1);
    local_90 = &DAT_180b0b540;
    local_98 = ppuVar6;
    FUN_1805584c0(&local_88);
    FUN_1805589f0(&local_88);
  }
  if (DAT_180bbecdb != '\0') {
    if (DAT_180c62d18 != DAT_180c62d20) {
      FUN_18015c010(DAT_180c62d20 + -0x20);
      DAT_180c62d20 = DAT_180c62d20 + -0x20;
    }
    DAT_1808e4e38 = 0xffffffff;
  }
  iVar5 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
  if (iVar5 < 2) {
    FUN_1804c5a40("Calling PopID() too many times!");
  }
  else {
    *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar5 + -1;
  }
  return;
}



