// FUN_1804cf810 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804cf810 */

void FUN_1804cf810(uint param_1,int param_2,ulonglong param_3,longlong param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  char *pcVar11;
  int iVar12;
  longlong local_res20;
  undefined8 local_28 [2];
  
  lVar5 = DAT_180bb8ae8;
  uVar10 = (ulonglong)param_1;
  if (*(char *)(DAT_180bb8ae8 + 0x294c) == '\0') {
    return;
  }
  cVar1 = *(char *)(DAT_180bb8ae8 + 0x294e);
  lVar2 = *(longlong *)(DAT_180bb8ae8 + 0x14d0);
  if (cVar1 == -1) {
    *(undefined1 *)(DAT_180bb8ae8 + 0x294e) = 0;
    iVar6 = *(int *)(lVar5 + 0x2954);
    iVar12 = *(int *)(lVar2 + 0x108) + 1;
    local_28[0] = 0xff000000000000;
    if (iVar6 < iVar12) {
      if (iVar6 == 0) {
        iVar6 = 8;
      }
      else {
        iVar6 = iVar6 / 2 + iVar6;
      }
      iVar4 = iVar12;
      if (iVar12 < iVar6) {
        iVar4 = iVar6;
      }
      local_res20 = param_4;
      FUN_1804d13f0(lVar5 + 0x2950,iVar4);
    }
    lVar7 = (longlong)*(int *)(lVar5 + 0x2950);
    if ((*(int *)(lVar5 + 0x2950) < iVar12) && (lVar7 < iVar12)) {
      lVar9 = iVar12 - lVar7;
      lVar7 = lVar7 * 0xc;
      do {
        lVar3 = *(longlong *)(lVar5 + 0x2958);
        *(undefined8 *)(lVar7 + lVar3) = local_28[0];
        *(undefined4 *)(lVar7 + 8 + lVar3) = 0xffffffff;
        lVar9 = lVar9 + -1;
        lVar7 = lVar7 + 0xc;
      } while (lVar9 != 0);
    }
    *(int *)(lVar5 + 0x2950) = iVar12;
    iVar12 = 0;
    iVar6 = *(int *)(lVar2 + 0x108);
    if (iVar6 + 1 < 1) {
      return;
    }
    lVar9 = 0;
    lVar7 = 0;
    do {
      if (iVar12 < iVar6) {
        uVar8 = *(uint *)(lVar7 + *(longlong *)(lVar2 + 0x110));
      }
      else {
        uVar8 = param_1;
      }
      iVar12 = iVar12 + 1;
      lVar7 = lVar7 + 4;
      *(uint *)(lVar9 + *(longlong *)(lVar5 + 0x2958)) = uVar8;
      lVar9 = lVar9 + 0xc;
      iVar6 = *(int *)(lVar2 + 0x108);
    } while (iVar12 < iVar6 + 1);
    return;
  }
  if ((int)cVar1 != *(int *)(lVar2 + 0x108)) {
    return;
  }
  lVar2 = *(longlong *)(DAT_180bb8ae8 + 0x2958) + (longlong)cVar1 * 0xc;
  if (*(int *)(*(longlong *)(DAT_180bb8ae8 + 0x2958) + 8 + (longlong)cVar1 * 0xc) != -1)
  goto LAB_1804cfa3a;
  local_28[0] = 0;
  local_res20 = 0;
  if (param_2 == 4) {
    uVar10 = param_3 & 0xffffffff;
    pcVar11 = "%d";
LAB_1804cfa05:
    FUN_1804b0920(local_28,&local_res20,pcVar11,uVar10);
  }
  else if (param_2 == 0xb) {
    uVar10 = 0xffffffffffffffff;
    do {
      uVar10 = uVar10 + 1;
    } while (*(char *)(param_3 + uVar10) != '\0');
    FUN_1804b0920(local_28,&local_res20,&DAT_18085b2e4,uVar10 & 0xffffffff,param_3);
  }
  else if (param_2 == 0xc) {
    FUN_1804b0920(local_28,&local_res20,"(void*)0x%p",param_3);
  }
  else if (param_2 == 0xd) {
    pcVar11 = "0x%08X [override]";
    goto LAB_1804cfa05;
  }
  iVar12 = *(int *)(lVar5 + 0x2960);
  iVar6 = iVar12 + -1;
  if (iVar12 == 0) {
    iVar6 = 0;
  }
  *(int *)(lVar2 + 8) = iVar6;
  FUN_1804b1860((int *)(lVar5 + 0x2960),local_28[0],local_res20 + 1);
LAB_1804cfa3a:
  *(undefined1 *)(lVar2 + 5) = 1;
  if (*(char *)(lVar2 + 6) == -1) {
    *(char *)(lVar2 + 6) = (char)param_2;
  }
  return;
}



