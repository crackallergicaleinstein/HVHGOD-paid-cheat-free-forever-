// FUN_1801f8320 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801f8320 */

undefined8 * FUN_1801f8320(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  ULONGLONG UVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  undefined8 *local_68 [2];
  undefined1 local_58 [32];
  
  uVar13 = 0xffffffffffffffff;
  iVar6 = DAT_180c6338c;
  local_68[0] = param_1;
  if (DAT_180c6338c == 0) {
    UVar8 = GetTickCount64();
    if (UVar8 < DAT_180c63390) {
      iVar6 = 0;
    }
    else {
      local_68[0] = (undefined8 *)&DAT_1808e79d0;
      iVar6 = FUN_1805f68d0(&DAT_1808e79d0);
      if (iVar6 != 0) goto LAB_1801f87ed;
      if (DAT_1808e7a1c == 0x7fffffff) {
        DAT_1808e7a1c = 0x7ffffffe;
        goto LAB_1801f87e2;
      }
      if ((DAT_180c6338c == 0) && (DAT_180c63390 <= UVar8)) {
        DAT_180c6338c = FUN_1804174b0("C_BaseEntity",0x9d930423);
        if (DAT_180c6338c == 0) {
          DAT_180c63390 = UVar8 + 1000;
        }
        else {
          DAT_180c63390 = 0xffffffffffffffff;
        }
      }
      iVar6 = DAT_180c6338c;
      FUN_1805f68fc(&DAT_1808e79d0);
    }
  }
  lVar9 = FUN_18017ea70();
  *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
  bVar4 = false;
  if (iVar6 + param_2 != 0) {
    local_68[0] = (undefined8 *)0x0;
    cVar5 = FUN_1804514f0(local_68,iVar6 + param_2,8);
    if (cVar5 == '\0') {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
  }
  puVar11 = local_68[0];
  lVar9 = FUN_18017ea70();
  if (*(int *)(lVar9 + 4) != 0) {
    *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
  }
  if ((!bVar4) || (puVar11 == (undefined8 *)0x0)) {
    *param_1 = 0;
    *(undefined1 (*) [16])(param_1 + 1) = (undefined1  [16])0x0;
    param_1[3] = 0;
    param_1[4] = 0xf;
    *(undefined1 *)(param_1 + 1) = 0;
  }
  else {
    iVar6 = DAT_180c63388;
    if (DAT_180c63388 == 0) {
      UVar8 = GetTickCount64();
      if (UVar8 < DAT_180c63380) {
        iVar6 = 0;
      }
      else {
        local_68[0] = (undefined8 *)&DAT_1808e7980;
        iVar6 = FUN_1805f68d0(&DAT_1808e7980);
        if (iVar6 != 0) goto LAB_1801f87ed;
        if (DAT_1808e79cc == 0x7fffffff) {
          DAT_1808e79cc = 0x7ffffffe;
          goto LAB_1801f87e2;
        }
        if ((DAT_180c63388 == 0) && (DAT_180c63380 <= UVar8)) {
          DAT_180c63388 = FUN_1804174b0("CSkeletonInstance",0x52ac8c4f);
          if (DAT_180c63388 == 0) {
            DAT_180c63380 = UVar8 + 1000;
          }
          else {
            DAT_180c63380 = 0xffffffffffffffff;
          }
        }
        iVar6 = DAT_180c63388;
        FUN_1805f68fc(&DAT_1808e7980);
      }
    }
    iVar7 = DAT_180c63374;
    if (DAT_180c63374 == 0) {
      UVar8 = GetTickCount64();
      if (UVar8 < DAT_180c63378) {
        iVar7 = 0;
      }
      else {
        local_68[0] = (undefined8 *)&DAT_1808e7930;
        iVar7 = FUN_1805f68d0(&DAT_1808e7930);
        if (iVar7 != 0) goto LAB_1801f87ed;
        if (DAT_1808e797c == 0x7fffffff) {
          DAT_1808e797c = 0x7ffffffe;
          goto LAB_1801f87e2;
        }
        if ((DAT_180c63374 == 0) && (DAT_180c63378 <= UVar8)) {
          DAT_180c63374 = FUN_1804174b0("CModelState",0xe100c814);
          if (DAT_180c63374 == 0) {
            DAT_180c63378 = UVar8 + 1000;
          }
          else {
            DAT_180c63378 = 0xffffffffffffffff;
          }
        }
        iVar7 = DAT_180c63374;
        FUN_1805f68fc(&DAT_1808e7930);
      }
    }
    lVar9 = FUN_18017ea70();
    *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
    lVar9 = (longlong)puVar11 + (longlong)iVar7 + (longlong)iVar6;
    bVar4 = false;
    if (lVar9 != 0) {
      local_68[0] = (undefined8 *)0x0;
      cVar5 = FUN_1804514f0(local_68,lVar9,8);
      if (cVar5 == '\0') {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
    }
    puVar10 = local_68[0];
    lVar9 = FUN_18017ea70();
    if (*(int *)(lVar9 + 4) != 0) {
      *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
    }
    puVar12 = (undefined8 *)0x0;
    if (bVar4) {
      puVar12 = puVar10;
    }
    iVar7 = DAT_180c63370;
    if (DAT_180c63370 == 0) {
      UVar8 = GetTickCount64();
      if (UVar8 < DAT_180c63368) {
        iVar7 = 0;
      }
      else {
        local_68[0] = (undefined8 *)&DAT_1808e78e0;
        iVar7 = FUN_1805f68d0(&DAT_1808e78e0);
        if (iVar7 != 0) {
LAB_1801f87ed:
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(5);
        }
        if (DAT_1808e792c == 0x7fffffff) {
          DAT_1808e792c = 0x7ffffffe;
LAB_1801f87e2:
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(6);
        }
        if ((DAT_180c63370 == 0) && (DAT_180c63368 <= UVar8)) {
          DAT_180c63370 = FUN_1804174b0("CModelState",0xd7a1d881);
          if (DAT_180c63370 == 0) {
            uVar13 = UVar8 + 1000;
          }
          DAT_180c63368 = uVar13;
        }
        iVar7 = DAT_180c63370;
        FUN_1805f68fc(&DAT_1808e78e0);
      }
    }
    lVar9 = FUN_18017ea70();
    *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
    lVar9 = (longlong)puVar11 + (longlong)iVar7 + (longlong)iVar6;
    bVar4 = false;
    if (lVar9 != 0) {
      local_68[0] = (undefined8 *)0x0;
      cVar5 = FUN_1804514f0(local_68,lVar9,8);
      if (cVar5 == '\0') {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
    }
    puVar11 = local_68[0];
    lVar9 = FUN_18017ea70();
    if (*(int *)(lVar9 + 4) != 0) {
      *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
    }
    puVar10 = (undefined8 *)0x0;
    if (bVar4) {
      puVar10 = puVar11;
    }
    if (puVar12 == (undefined8 *)0x0) {
      puVar11 = (undefined8 *)0x0;
    }
    else {
      lVar9 = FUN_18017ea70();
      *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
      local_68[0] = (undefined8 *)0x0;
      cVar5 = FUN_1804514f0(local_68,puVar12,8);
      puVar12 = local_68[0];
      lVar9 = FUN_18017ea70();
      if (*(int *)(lVar9 + 4) != 0) {
        *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
      }
      puVar11 = (undefined8 *)0x0;
      if (cVar5 != '\0') {
        puVar11 = puVar12;
      }
    }
    puVar10 = (undefined8 *)FUN_180184460(local_58,puVar10);
    *param_1 = puVar11;
    *(undefined1 (*) [16])(param_1 + 1) = (undefined1  [16])0x0;
    param_1[3] = 0;
    param_1[4] = 0;
    uVar1 = puVar10[1];
    uVar2 = puVar10[2];
    uVar3 = puVar10[3];
    param_1[1] = *puVar10;
    param_1[2] = uVar1;
    param_1[3] = uVar2;
    param_1[4] = uVar3;
    *(undefined1 *)puVar10 = 0;
    puVar10[2] = 0;
    puVar10[3] = 0xf;
    FUN_18015c010(local_58);
  }
  return param_1;
}



