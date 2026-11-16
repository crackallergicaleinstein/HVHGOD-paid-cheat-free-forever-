// FUN_1801846a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801846a0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000180184ef5) */
/* WARNING: Type propagation algorithm not settling */

void FUN_1801846a0(longlong param_1,longlong param_2,ushort param_3)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ULONGLONG UVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong lVar11;
  uint uVar12;
  undefined *puVar13;
  int iVar14;
  char *******pppppppcVar15;
  undefined8 *puVar16;
  undefined8 *******pppppppuVar17;
  uint uVar18;
  char cVar19;
  char *******pppppppcVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  bool bVar23;
  bool bVar24;
  undefined1 auStack_748 [32];
  undefined **local_728;
  char *******local_720;
  undefined8 *******local_718;
  uint local_710;
  int local_708 [2];
  undefined *local_700;
  char local_6f8;
  longlong *local_6e0;
  int *local_6d8;
  int *local_6d0;
  int *local_6c8;
  undefined1 local_6c0 [32];
  int local_6a0 [2];
  longlong local_698;
  int local_690;
  int local_68c;
  char *******local_688 [2];
  ulonglong local_678;
  ulonglong local_670;
  undefined8 *******local_668 [2];
  ulonglong local_658;
  ulonglong local_650;
  char local_648 [1544];
  ulonglong local_40;
  
  local_40 = DAT_1808d5f00 ^ (ulonglong)auStack_748;
  uVar18 = 0;
  bVar24 = false;
  local_700 = (undefined *)((ulonglong)local_700 & 0xffffffff00000000);
  iVar4 = DAT_180bb87f0;
  local_698 = param_1;
  if (DAT_180bb87f0 == 0) {
    UVar7 = GetTickCount64();
    if (UVar7 < DAT_180bb87e8) {
      iVar4 = 0;
    }
    else {
      local_700 = &DAT_1808d9840;
      iVar4 = FUN_1805f68d0(&DAT_1808d9840);
      if (iVar4 != 0) goto LAB_180185000;
      if (DAT_1808d988c == 0x7fffffff) {
        DAT_1808d988c = 0x7ffffffe;
        goto LAB_180184ff5;
      }
      if ((DAT_180bb87f0 == 0) && (DAT_180bb87e8 <= UVar7)) {
        DAT_180bb87f0 = FUN_1804174b0("C_BaseEntity",0xc02ce796);
        if (DAT_180bb87f0 == 0) {
          DAT_180bb87e8 = UVar7 + 1000;
        }
        else {
          DAT_180bb87e8 = 0xffffffffffffffff;
        }
      }
      iVar4 = DAT_180bb87f0;
      FUN_1805f68fc(&DAT_1808d9840);
    }
  }
  iVar5 = DAT_180bb87e0;
  if (DAT_180bb87e0 == 0) {
    UVar7 = GetTickCount64();
    if (UVar7 < DAT_180bb87d8) {
      iVar5 = 0;
    }
    else {
      local_700 = &DAT_1808d97f0;
      iVar5 = FUN_1805f68d0(&DAT_1808d97f0);
      if (iVar5 != 0) goto LAB_180185000;
      if (DAT_1808d983c == 0x7fffffff) {
        DAT_1808d983c = 0x7ffffffe;
        goto LAB_180184ff5;
      }
      if ((DAT_180bb87e0 == 0) && (DAT_180bb87d8 <= UVar7)) {
        DAT_180bb87e0 = FUN_1804174b0("C_BaseEntity",0x9d930423);
        if (DAT_180bb87e0 == 0) {
          DAT_180bb87d8 = UVar7 + 1000;
        }
        else {
          DAT_180bb87d8 = 0xffffffffffffffff;
        }
      }
      iVar5 = DAT_180bb87e0;
      FUN_1805f68fc(&DAT_1808d97f0);
    }
  }
  iVar14 = DAT_180bb87d0;
  local_690 = iVar5;
  if (DAT_180bb87d0 == 0) {
    UVar7 = GetTickCount64();
    if (UVar7 < DAT_180bb87c8) {
      iVar14 = 0;
    }
    else {
      local_700 = &DAT_1808d97a0;
      iVar5 = FUN_1805f68d0(&DAT_1808d97a0);
      if (iVar5 != 0) goto LAB_180185000;
      if (DAT_1808d97ec == 0x7fffffff) {
        DAT_1808d97ec = 0x7ffffffe;
        goto LAB_180184ff5;
      }
      if ((DAT_180bb87d0 == 0) && (DAT_180bb87c8 <= UVar7)) {
        DAT_180bb87d0 = FUN_1804174b0("CSkeletonInstance",0x52ac8c4f);
        if (DAT_180bb87d0 == 0) {
          DAT_180bb87c8 = UVar7 + 1000;
        }
        else {
          DAT_180bb87c8 = 0xffffffffffffffff;
        }
      }
      iVar14 = DAT_180bb87d0;
      FUN_1805f68fc(&DAT_1808d97a0);
    }
  }
  iVar5 = DAT_180bb87c0;
  local_68c = iVar14;
  if (DAT_180bb87c0 == 0) {
    UVar7 = GetTickCount64();
    if (UVar7 < DAT_180bb87b8) {
      iVar5 = 0;
    }
    else {
      local_700 = &DAT_1808d9750;
      iVar5 = FUN_1805f68d0(&DAT_1808d9750);
      if (iVar5 != 0) {
LAB_180185000:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1808d979c == 0x7fffffff) {
        DAT_1808d979c = 0x7ffffffe;
LAB_180184ff5:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      if ((DAT_180bb87c0 == 0) && (DAT_180bb87b8 <= UVar7)) {
        DAT_180bb87c0 = FUN_1804174b0("CModelState",0xd7a1d881);
        if (DAT_180bb87c0 == 0) {
          DAT_180bb87b8 = UVar7 + 1000;
        }
        else {
          DAT_180bb87b8 = 0xffffffffffffffff;
        }
      }
      iVar5 = DAT_180bb87c0;
      FUN_1805f68fc(&DAT_1808d9750);
    }
  }
  if (local_698 == 0) {
  }
  if (param_2 == 0) {
  }
  if (param_3 == 0) {
  }
  if (iVar4 == 0) {
  }
  if (local_690 == 0) {
  }
  if (local_68c == 0) {
  }
  if (iVar5 == 0) {
  }
  local_6a0[0] = iVar5;
  lVar8 = FUN_180185010();
  if (lVar8 == 0) {
  }
  cVar2 = FUN_1804513c0(lVar8,1,2);
  cVar3 = '\0';
  if (cVar2 != '\0') {
    lVar9 = FUN_18017ea70();
    *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
    FUN_1801ad7c0(&local_700,lVar8,param_2);
    lVar8 = FUN_18017ea70();
    if (*(int *)(lVar8 + 4) != 0) {
      *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
    }
    cVar3 = local_6f8;
  }
  puVar13 = local_700;
  if (cVar3 == '\0') {
    puVar13 = (undefined *)0x0;
  }
  if (puVar13 == (undefined *)0x0) {
  }
  FUN_180184460(local_688);
  if (local_678 == 0) goto LAB_180184fb0;
  local_6e0 = &local_698;
  local_6d8 = &local_690;
  local_6d0 = &local_68c;
  local_6c8 = local_6a0;
  iVar5 = FUN_180183fc0(param_3);
  lVar8 = local_698;
  local_700 = (undefined *)CONCAT44(local_700._4_4_,iVar5);
  lVar9 = FUN_18017ea70();
  *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
  lVar8 = lVar8 + iVar4;
  if (lVar8 == 0) {
    bVar23 = false;
    iVar14 = local_6a0[0];
  }
  else {
    local_708[0] = 0;
    cVar3 = FUN_1804514f0(local_708,lVar8,4);
    if (cVar3 == '\0') {
      bVar23 = false;
      iVar14 = local_6a0[0];
    }
    else {
      bVar23 = true;
      iVar14 = local_708[0];
    }
  }
  lVar8 = FUN_18017ea70();
  uVar22 = local_678;
  if (*(int *)(lVar8 + 4) != 0) {
    *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
  }
  iVar6 = 0;
  if (bVar23) {
    iVar6 = iVar14;
  }
  if (iVar6 == iVar5) {
    pppppppcVar15 = (char *******)local_688;
    if (0xf < local_670) {
      pppppppcVar15 = local_688[0];
    }
    puVar10 = (undefined8 *)FUN_1801851d0(&local_6e0,local_6c0);
    bVar24 = true;
    puVar16 = puVar10;
    if (0xf < (ulonglong)puVar10[3]) {
      puVar16 = (undefined8 *)*puVar10;
    }
    uVar21 = puVar10[2];
    if (1 < uVar21) {
      bVar1 = *(byte *)((uVar21 - 2) + (longlong)puVar16);
      bVar23 = bVar1 < 0x5f;
      if ((bVar1 == 0x5f) &&
         (bVar1 = *(byte *)((uVar21 - 1) + (longlong)puVar16), bVar23 = bVar1 < 99, bVar1 == 99)) {
        uVar12 = 0;
      }
      else {
        uVar12 = -(uint)bVar23 | 1;
      }
      if (uVar12 == 0) {
        uVar21 = uVar21 - 2;
      }
    }
    if (1 < uVar22) {
      bVar1 = *(byte *)((longlong)pppppppcVar15 + (uVar22 - 2));
      bVar23 = bVar1 < 0x5f;
      if ((bVar1 == 0x5f) &&
         (bVar1 = *(byte *)((longlong)pppppppcVar15 + (uVar22 - 1)), bVar23 = bVar1 < 99,
         bVar1 == 99)) {
        uVar12 = 0;
      }
      else {
        uVar12 = -(uint)bVar23 | 1;
      }
      if (uVar12 == 0) {
        uVar22 = uVar22 - 2;
      }
    }
    if ((uVar21 == 0) || (uVar21 != uVar22)) goto LAB_180184bf5;
    if (uVar21 != 0) {
      pppppppcVar20 = pppppppcVar15;
      do {
        cVar3 = *(char *)((longlong)pppppppcVar20 + ((longlong)puVar16 - (longlong)pppppppcVar15));
        cVar2 = *(char *)pppppppcVar20;
        cVar19 = cVar3 + ' ';
        if (0x19 < (byte)(cVar3 + 0xbfU)) {
          cVar19 = cVar3;
        }
        cVar3 = cVar2 + ' ';
        if (0x19 < (byte)(cVar2 + 0xbfU)) {
          cVar3 = cVar2;
        }
        if (cVar19 != cVar3) goto LAB_180184bf5;
        pppppppcVar20 = (char *******)((longlong)pppppppcVar20 + 1);
      } while ((ulonglong)((longlong)pppppppcVar20 - (longlong)pppppppcVar15) < uVar21);
    }
    bVar23 = true;
  }
  else {
LAB_180184bf5:
    bVar23 = false;
  }
  if (bVar24) {
    FUN_18015c010(local_6c0);
  }
  if ((bVar23) || (lVar8 = FUN_1801852e0(), lVar8 == 0)) goto LAB_180184fb0;
  lVar9 = local_698 + iVar4;
  cVar3 = FUN_1804513c0(lVar9,4,1);
  if (cVar3 == '\0') goto LAB_180184fb0;
  lVar11 = FUN_18017ea70();
  *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + 1;
  cVar3 = FUN_1801ad800(lVar9,&local_700);
  lVar9 = FUN_18017ea70();
  if (*(int *)(lVar9 + 4) != 0) {
    *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
  }
  if (cVar3 == '\0') goto LAB_180184fb0;
  cVar3 = FUN_1801a5f80(lVar8,local_698);
  uVar22 = local_678;
  if (cVar3 == '\0') goto LAB_180184fb0;
  pppppppcVar15 = (char *******)local_688;
  if (0xf < local_670) {
    pppppppcVar15 = local_688[0];
  }
  puVar10 = (undefined8 *)FUN_1801851d0(&local_6e0,&local_700);
  puVar16 = puVar10;
  if (0xf < (ulonglong)puVar10[3]) {
    puVar16 = (undefined8 *)*puVar10;
  }
  uVar21 = puVar10[2];
  if (1 < uVar21) {
    bVar1 = *(byte *)((uVar21 - 2) + (longlong)puVar16);
    bVar24 = bVar1 < 0x5f;
    if ((bVar1 == 0x5f) &&
       (bVar1 = *(byte *)((uVar21 - 1) + (longlong)puVar16), bVar24 = bVar1 < 99, bVar1 == 99)) {
      uVar12 = 0;
    }
    else {
      uVar12 = -(uint)bVar24 | 1;
    }
    if (uVar12 == 0) {
      uVar21 = uVar21 - 2;
    }
  }
  if (1 < uVar22) {
    bVar1 = *(byte *)((longlong)pppppppcVar15 + (uVar22 - 2));
    bVar24 = bVar1 < 0x5f;
    if ((bVar1 == 0x5f) &&
       (bVar1 = *(byte *)((longlong)pppppppcVar15 + (uVar22 - 1)), bVar24 = bVar1 < 99, bVar1 == 99)
       ) {
      uVar12 = 0;
    }
    else {
      uVar12 = -(uint)bVar24 | 1;
    }
    if (uVar12 == 0) {
      uVar22 = uVar22 - 2;
    }
  }
  if ((uVar21 != 0) && (uVar21 == uVar22)) {
    if (uVar21 != 0) {
      pppppppcVar20 = pppppppcVar15;
      do {
        cVar3 = *(char *)((longlong)pppppppcVar20 + ((longlong)puVar16 - (longlong)pppppppcVar15));
        cVar2 = *(char *)pppppppcVar20;
        cVar19 = cVar3 + ' ';
        if (0x19 < (byte)(cVar3 + 0xbfU)) {
          cVar19 = cVar3;
        }
        cVar3 = cVar2 + ' ';
        if (0x19 < (byte)(cVar2 + 0xbfU)) {
          cVar3 = cVar2;
        }
        if (cVar19 != cVar3) goto LAB_180184d71;
        pppppppcVar20 = (char *******)((longlong)pppppppcVar20 + 1);
      } while ((ulonglong)((longlong)pppppppcVar20 - (longlong)pppppppcVar15) < uVar21);
    }
    FUN_18015c010(&local_700);
    goto LAB_180184fb0;
  }
LAB_180184d71:
  FUN_18015c010(&local_700);
  lVar9 = FUN_1801854a0();
  lVar8 = local_698;
  if (lVar9 == 0) {
LAB_180184ec4:
    FUN_1801851d0(&local_6e0,local_668);
LAB_180184ed2:
    uVar18 = 0;
  }
  else {
    pppppppcVar15 = (char *******)local_688;
    if (0xf < local_670) {
      pppppppcVar15 = local_688[0];
    }
    cVar3 = FUN_1804513c0(lVar9,1,2);
    if (cVar3 == '\0') goto LAB_180184ec4;
    lVar11 = FUN_18017ea70();
    *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + 1;
    cVar3 = FUN_1801ad780(lVar9,lVar8,pppppppcVar15);
    lVar8 = FUN_18017ea70();
    if (*(int *)(lVar8 + 4) != 0) {
      *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
    }
    if (cVar3 == '\0') goto LAB_180184ec4;
    FUN_1801851d0(&local_6e0,local_668);
    pppppppcVar15 = (char *******)local_688;
    if (0xf < local_670) {
      pppppppcVar15 = local_688[0];
    }
    pppppppuVar17 = local_668;
    if (0xf < local_650) {
      pppppppuVar17 = local_668[0];
    }
    if (1 < local_658) {
      bVar1 = *(byte *)((local_658 - 2) + (longlong)pppppppuVar17);
      bVar24 = bVar1 < 0x5f;
      if ((bVar1 == 0x5f) &&
         (bVar1 = *(byte *)((local_658 - 1) + (longlong)pppppppuVar17), bVar24 = bVar1 < 99,
         bVar1 == 99)) {
        uVar12 = 0;
      }
      else {
        uVar12 = -(uint)bVar24 | 1;
      }
      if (uVar12 == 0) {
        local_658 = local_658 - 2;
      }
    }
    if (1 < local_678) {
      bVar1 = *(byte *)((longlong)pppppppcVar15 + (local_678 - 2));
      bVar24 = bVar1 < 0x5f;
      if ((bVar1 != 0x5f) ||
         (bVar1 = *(byte *)((longlong)pppppppcVar15 + (local_678 - 1)), bVar24 = bVar1 < 99,
         bVar1 != 99)) {
        uVar18 = -(uint)bVar24 | 1;
      }
      if (uVar18 == 0) {
        local_678 = local_678 - 2;
      }
    }
    if ((local_658 == 0) || (local_658 != local_678)) goto LAB_180184ed2;
    if (local_658 != 0) {
      pppppppcVar20 = pppppppcVar15;
      do {
        cVar3 = *(char *)((longlong)pppppppcVar20 +
                         ((longlong)pppppppuVar17 - (longlong)pppppppcVar15));
        cVar2 = *(char *)pppppppcVar20;
        cVar19 = cVar3 + ' ';
        if (0x19 < (byte)(cVar3 + 0xbfU)) {
          cVar19 = cVar3;
        }
        cVar3 = cVar2 + ' ';
        if (0x19 < (byte)(cVar2 + 0xbfU)) {
          cVar3 = cVar2;
        }
        if (cVar19 != cVar3) goto LAB_180184ed2;
        pppppppcVar20 = (char *******)((longlong)pppppppcVar20 + 1);
      } while ((ulonglong)((longlong)pppppppcVar20 - (longlong)pppppppcVar15) < local_658);
    }
    uVar18 = 1;
  }
  UVar7 = GetTickCount64();
  if (DAT_180bb8780 <= UVar7) {
    DAT_180bb8780 = UVar7 + 1000;
    LOCK();
    UNLOCK();
    pppppppuVar17 = local_668;
    if (0xf < local_650) {
      pppppppuVar17 = local_668[0];
    }
    pppppppcVar15 = (char *******)local_688;
    if (0xf < local_670) {
      pppppppcVar15 = local_688[0];
    }
    FUN_18063ab10(local_648,0,0x600);
    local_728 = (undefined **)CONCAT44(local_728._4_4_,(uint)param_3);
    local_720 = pppppppcVar15;
    local_718 = pppppppuVar17;
    local_710 = uVar18;
    FUN_18015ad60(local_648,0x600,0xffffffffffffffff,
                  "definition=%u desired=%s observed=%s verified=%d owner_mutations=0");
    local_728 = &PTR_180700558;
    if (local_648[0] != '\0') {
      local_728 = (undefined **)&DAT_1806bcfc0;
    }
    local_720 = (char *******)local_648;
    FUN_1800f6900((uVar18 ^ 1) * 2);
  }
  FUN_18015c010(local_668);
LAB_180184fb0:
  FUN_18015c010(local_688);
}



