// FUN_1803c4550 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803c4550 */

undefined8 * FUN_1803c4550(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  ULONGLONG UVar5;
  longlong lVar6;
  undefined *puVar7;
  ulonglong uVar8;
  undefined *local_38 [2];
  
  uVar8 = 0xffffffffffffffff;
  iVar4 = DAT_180c71d5c;
  if (DAT_180c71d5c == 0) {
    UVar5 = GetTickCount64();
    if (UVar5 < DAT_180c71d38) {
      iVar4 = 0;
    }
    else {
      local_38[0] = &DAT_1809b9da0;
      iVar4 = FUN_1805f68d0(&DAT_1809b9da0);
      if (iVar4 != 0) goto LAB_1803c48ba;
      if (DAT_1809b9dec == 0x7fffffff) {
        DAT_1809b9dec = 0x7ffffffe;
        goto LAB_1803c48af;
      }
      if ((DAT_180c71d5c == 0) && (DAT_180c71d38 <= UVar5)) {
        DAT_180c71d5c = FUN_1804174b0("C_BaseEntity",0x9d930423);
        if (DAT_180c71d5c == 0) {
          DAT_180c71d38 = UVar5 + 1000;
        }
        else {
          DAT_180c71d38 = 0xffffffffffffffff;
        }
      }
      iVar4 = DAT_180c71d5c;
      FUN_1805f68fc(&DAT_1809b9da0);
    }
  }
  lVar6 = FUN_18017ea70();
  *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
  bVar1 = false;
  if (iVar4 + param_3 != 0) {
    local_38[0] = (undefined *)0x0;
    cVar2 = FUN_1804514f0(local_38,iVar4 + param_3,8);
    if (cVar2 == '\0') {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
  }
  puVar7 = local_38[0];
  lVar6 = FUN_18017ea70();
  if (*(int *)(lVar6 + 4) != 0) {
    *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
  }
  if ((!bVar1) || (puVar7 == (undefined *)0x0)) {
LAB_1803c489c:
    *(undefined1 *)(param_2 + 1) = 0;
    return param_2;
  }
  iVar4 = DAT_180c71d28;
  if (DAT_180c71d28 == 0) {
    UVar5 = GetTickCount64();
    if (UVar5 < DAT_180c71d30) {
      iVar4 = 0;
    }
    else {
      local_38[0] = &DAT_1809b9e40;
      iVar4 = FUN_1805f68d0(&DAT_1809b9e40);
      if (iVar4 != 0) goto LAB_1803c48ba;
      if (DAT_1809b9e8c == 0x7fffffff) {
        DAT_1809b9e8c = 0x7ffffffe;
        goto LAB_1803c48af;
      }
      if ((DAT_180c71d28 == 0) && (DAT_180c71d30 <= UVar5)) {
        DAT_180c71d28 = FUN_1804174b0("CGameSceneNode",0xb89c7c3f);
        if (DAT_180c71d28 == 0) {
          DAT_180c71d30 = UVar5 + 1000;
        }
        else {
          DAT_180c71d30 = 0xffffffffffffffff;
        }
      }
      iVar4 = DAT_180c71d28;
      FUN_1805f68fc(&DAT_1809b9e40);
    }
  }
  lVar6 = FUN_18017ea70();
  *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
  puVar7 = puVar7 + iVar4;
  bVar1 = false;
  if (puVar7 != (undefined *)0x0) {
    local_38[0] = (undefined *)0x0;
    cVar2 = FUN_1804514f0(local_38,puVar7,8);
    if (cVar2 == '\0') {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
  }
  puVar7 = local_38[0];
  lVar6 = FUN_18017ea70();
  if (*(int *)(lVar6 + 4) != 0) {
    *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
  }
  if (!bVar1) goto LAB_1803c489c;
  if (puVar7 == (undefined *)0x0) {
    *param_2 = 0;
    *(undefined1 *)(param_2 + 1) = 1;
    return param_2;
  }
  iVar4 = DAT_180c71d48;
  if (DAT_180c71d48 == 0) {
    UVar5 = GetTickCount64();
    if (UVar5 < DAT_180c71d40) {
      iVar4 = 0;
    }
    else {
      local_38[0] = &DAT_1809b9df0;
      iVar4 = FUN_1805f68d0(&DAT_1809b9df0);
      if (iVar4 != 0) {
LAB_1803c48ba:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1809b9e3c == 0x7fffffff) {
        DAT_1809b9e3c = 0x7ffffffe;
LAB_1803c48af:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      if ((DAT_180c71d48 == 0) && (DAT_180c71d40 <= UVar5)) {
        DAT_180c71d48 = FUN_1804174b0("CGameSceneNode",0x6b325da);
        if (DAT_180c71d48 == 0) {
          uVar8 = UVar5 + 1000;
        }
        DAT_180c71d40 = uVar8;
      }
      iVar4 = DAT_180c71d48;
      FUN_1805f68fc(&DAT_1809b9df0);
    }
  }
  lVar6 = FUN_18017ea70();
  *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
  puVar7 = puVar7 + iVar4;
  if (puVar7 != (undefined *)0x0) {
    local_38[0] = (undefined *)0x0;
    cVar2 = FUN_1804514f0(local_38,puVar7,8);
    if (cVar2 != '\0') {
      *param_2 = local_38[0];
      uVar3 = 1;
      goto LAB_1803c487f;
    }
  }
  uVar3 = 0;
LAB_1803c487f:
  *(undefined1 *)(param_2 + 1) = uVar3;
  lVar6 = FUN_18017ea70();
  if (*(int *)(lVar6 + 4) == 0) {
    return param_2;
  }
  *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
  return param_2;
}



