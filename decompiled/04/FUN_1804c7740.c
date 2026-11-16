// FUN_1804c7740 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804c7740 */

ulonglong FUN_1804c7740(uint param_1,byte param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  int iVar7;
  ulonglong in_RAX;
  undefined8 *puVar8;
  undefined4 *puVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 local_20 [8];
  
  lVar6 = DAT_180bb8ae8;
  iVar7 = *(int *)(DAT_180bb8ae8 + 0x2008);
  if (((char)param_2 < '\0') && (iVar7 < *(int *)(DAT_180bb8ae8 + 0x1ff8))) {
    return in_RAX & 0xffffffffffffff00;
  }
  uStack_24 = 0;
  uVar5 = *(ulonglong *)(DAT_180bb8ae8 + 0x2040);
  uVar3 = *(undefined4 *)
           (*(longlong *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x110) + -4 +
           (longlong)*(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) * 4);
  uVar4 = *(undefined4 *)(DAT_180bb8ae8 + 4);
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  puVar8 = (undefined8 *)FUN_1804c9f10(local_20,0x4000000);
  puVar9 = (undefined4 *)(lVar6 + 0x110);
  uStack_34 = (undefined4)*puVar8;
  uStack_30 = (undefined4)((ulonglong)*puVar8 >> 0x20);
  if ((*(float *)(lVar6 + 0x110) < -256000.0) || (*(float *)(lVar6 + 0x114) < -256000.0)) {
    puVar9 = &uStack_34;
  }
  uStack_2c = *puVar9;
  uStack_28 = puVar9[1];
  if ((*(byte *)(lVar6 + 0x28cc) & 8) != 0) {
    FUN_1804cf3e0("[popup] OpenPopupEx(0x%08X)\n",param_1);
  }
  piVar1 = (int *)(lVar6 + 0x1ff8);
  iVar12 = *piVar1;
  if (iVar12 < iVar7 + 1) {
    iVar7 = *(int *)(lVar6 + 0x1ffc);
    if (iVar12 != iVar7) goto LAB_1804c7909;
    iVar12 = iVar12 + 1;
    if (iVar7 == 0) {
      if (iVar12 < 8) {
        iVar12 = 8;
      }
    }
    else {
      iVar7 = iVar7 / 2 + iVar7;
      if (iVar12 < iVar7) {
        iVar12 = iVar7;
      }
    }
  }
  else {
    lVar11 = *(longlong *)(lVar6 + 0x2000);
    lVar10 = (longlong)iVar7 * 0x38;
    if ((*(uint *)(lVar10 + lVar11) == param_1) &&
       ((iVar12 = *(int *)(lVar6 + 4) + -1, *(int *)(lVar10 + 0x1c + lVar11) == iVar12 ||
        ((param_2 & 0x20) != 0)))) {
      *(undefined4 *)(lVar10 + 0x1c + lVar11) = uVar4;
      return (ulonglong)(uint3)((uint)iVar12 >> 8) << 8;
    }
    FUN_1804c7a50(iVar7,CONCAT71((int7)((ulonglong)lVar11 >> 8),1));
    iVar7 = *(int *)(lVar6 + 0x1ffc);
    if (*piVar1 != iVar7) goto LAB_1804c7909;
    iVar12 = *piVar1 + 1;
    if (iVar7 == 0) {
      iVar7 = 8;
    }
    else {
      iVar7 = iVar7 / 2 + iVar7;
    }
    if (iVar12 < iVar7) {
      iVar12 = iVar7;
    }
  }
  FUN_1804d1230(piVar1,iVar12);
LAB_1804c7909:
  lVar11 = (longlong)*piVar1 * 0x38;
  lVar6 = *(longlong *)(lVar6 + 0x2000);
  puVar2 = (ulonglong *)(lVar11 + lVar6);
  *puVar2 = (ulonglong)param_1;
  puVar2[1] = 0;
  puVar2[2] = uVar5;
  puVar2[3] = CONCAT44(uVar4,0xffffffff);
  puVar8 = (undefined8 *)(lVar11 + 0x20 + lVar6);
  *puVar8 = CONCAT44(uStack_34,uVar3);
  puVar8[1] = CONCAT44(uStack_2c,uStack_30);
  *(ulonglong *)(lVar11 + 0x30 + lVar6) = CONCAT44(uStack_24,uStack_28);
  *piVar1 = *piVar1 + 1;
  return CONCAT71((int7)((ulonglong)lVar6 >> 8),1);
}



