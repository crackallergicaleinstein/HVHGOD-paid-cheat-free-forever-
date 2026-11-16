// FUN_1803b1cd0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803b1cd0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1803b1cd0(void)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  ULONGLONG UVar4;
  longlong *plVar5;
  char *******pppppppcVar6;
  longlong lVar7;
  longlong lVar8;
  char *******pppppppcVar9;
  uint uVar10;
  undefined1 *puVar11;
  undefined1 auStack_6d8 [32];
  undefined **local_6b8;
  char *local_6b0;
  char local_698;
  char local_697;
  undefined8 *local_688;
  undefined8 local_680;
  longlong local_678;
  char *******local_668 [2];
  longlong local_658;
  ulonglong local_650;
  undefined1 local_648 [16];
  undefined1 local_638 [16];
  char local_628 [1544];
  ulonglong local_20;
  
  local_20 = DAT_1808d5f00 ^ (ulonglong)auStack_6d8;
  if (DAT_180bbec8a == '\0') {
  }
  if (DAT_180bbec8b != '\0') {
  }
  UVar4 = GetTickCount64();
  if (UVar4 < DAT_180c62780) {
  }
  UVar4 = GetTickCount64();
  DAT_180c62780 = UVar4 + 2000;
  plVar5 = (longlong *)FUN_1801edc30(&local_688);
  lVar1 = *plVar5;
  lVar2 = plVar5[1];
  lVar8 = plVar5[2];
  if (lVar1 == 0) {
  }
  if (lVar2 == 0) {
  }
  if (lVar8 == 0) {
  }
  local_688 = &DAT_1808e49e8;
  if (7 < DAT_1808e4a00) {
    local_688 = DAT_1808e49e8;
  }
  local_680 = DAT_1808e49f8;
  local_678 = lVar8;
  FUN_1801a4fb0(local_668,lVar1,&local_688);
  pppppppcVar9 = (char *******)local_668;
  if (0xf < local_650) {
    pppppppcVar9 = local_668[0];
  }
  pppppppcVar9 = (char *******)((longlong)pppppppcVar9 + local_658);
  pppppppcVar6 = (char *******)local_668;
  if (0xf < local_650) {
    pppppppcVar6 = local_668[0];
  }
  if (pppppppcVar6 != pppppppcVar9) {
    do {
      if (*(char *)pppppppcVar6 == '\\') {
        *(char *)pppppppcVar6 = '/';
      }
      pppppppcVar6 = (char *******)((longlong)pppppppcVar6 + 1);
    } while (pppppppcVar6 != pppppppcVar9);
  }
  pppppppcVar9 = (char *******)local_668;
  if (0xf < local_650) {
    pppppppcVar9 = local_668[0];
  }
  local_648 = (undefined1  [16])0x0;
  local_638 = (undefined1  [16])0x0;
  FUN_18015ba30(local_648,pppppppcVar9,local_658);
  puVar11 = local_648;
  if (0xf < (ulonglong)local_638._8_8_) {
    puVar11 = (undefined1 *)local_648._0_8_;
  }
  uVar10 = 1;
  cVar3 = FUN_1804513c0(lVar8,1,2);
  if (cVar3 != '\0') {
    lVar7 = FUN_18017ea70();
    *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
    cVar3 = FUN_1801f3b50(lVar8,lVar1,puVar11);
    lVar8 = FUN_18017ea70();
    if (*(int *)(lVar8 + 4) != 0) {
      *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
    }
    if (cVar3 != '\0') {
      cVar3 = FUN_1804513c0(lVar2,1,2);
      if (cVar3 == '\0') {
        local_697 = '\0';
      }
      else {
        lVar8 = FUN_18017ea70();
        *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
        FUN_1801f3b90(&local_698,lVar2,lVar1,"particles/embedded/halo.vpcf_c");
        lVar8 = FUN_18017ea70();
        if (*(int *)(lVar8 + 4) != 0) {
          *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
        }
      }
      if (local_697 == '\0') {
        local_698 = '\0';
      }
      if (local_698 != '\0') {
        DAT_180bbec8b = 1;
        goto LAB_1803b1f04;
      }
    }
  }
  DAT_180bbec8b = 0;
  uVar10 = 0;
LAB_1803b1f04:
  FUN_18063ab10(local_628,0,0x600);
  local_6b8 = (undefined **)CONCAT44(local_6b8._4_4_,uVar10);
  FUN_18015ad60(local_628,0x600,0xffffffffffffffff,
                "accepted=%d precedence=tail request_hooks=0 native_io=1");
  local_6b8 = &PTR_180700558;
  if (local_628[0] != '\0') {
    local_6b8 = (undefined **)&DAT_1806bcfc0;
  }
  local_6b0 = local_628;
  FUN_1800f6900((uVar10 ^ 1) + 1);
  FUN_18015c010(local_648);
  FUN_18015c010(local_668);
}



