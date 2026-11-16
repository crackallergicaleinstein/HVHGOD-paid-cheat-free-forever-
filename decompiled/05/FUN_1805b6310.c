// FUN_1805b6310 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805b6310 */

void FUN_1805b6310(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  bool bVar15;
  undefined4 local_res8 [2];
  undefined8 local_res20;
  ulonglong in_stack_ffffffffffffffa8;
  ulonglong uVar16;
  undefined4 uVar17;
  
  lVar2 = *(longlong *)(param_1 + 0xf0);
  uVar1 = *(undefined4 *)(param_1 + 0xa8);
  iVar9 = *(int *)(param_1 + 0xa4);
  local_res8[0] = 0;
  local_res20 = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  lVar3 = *(longlong *)(lVar2 + 0x328);
  bVar15 = *(longlong *)(param_1 + 0xf8) != lVar3;
  if (bVar15) {
    *(longlong *)(param_1 + 0xf8) = lVar3;
  }
  if ((*(char *)(param_1 + 0xc) == '\0') && (*(int *)(*(longlong *)(lVar2 + 800) + 0x1110) != 0)) {
    lVar4 = *(longlong *)(param_1 + 0x288);
    in_stack_ffffffffffffffa8 = 0;
    iVar7 = (**(code **)(*(longlong *)(*(longlong *)(lVar2 + 8) + 0x2e0) + 0x88))
                      (*(longlong *)(lVar2 + 8),local_res8,0,&local_res20,0);
    *(int *)(param_1 + 8) = iVar7;
    if (iVar7 != 0) {
      return;
    }
    cVar5 = (**(code **)(lVar4 + 0x18))
                      (lVar3 + 0x230,*(undefined4 *)(lVar3 + 0x220),local_res8[0],local_res20);
    if (cVar5 != '\0') {
      (**(code **)(lVar4 + 8))(*(undefined8 *)(lVar2 + 800),lVar3,local_res8[0],local_res20);
    }
    bVar15 = cVar5 != '\0' || bVar15;
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(lVar3 + 0x238);
    *(undefined1 *)(param_1 + 0x61) = 0;
    *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(lVar3 + 0x220);
    *(undefined4 *)(param_1 + 0x94) = local_res8[0];
    *(undefined8 *)(param_1 + 0x98) = local_res20;
  }
  iVar8 = (uint)*(ushort *)(*(longlong *)(*(longlong *)(lVar2 + 8) + 0x80) + 0x1a) << 0x10;
  iVar7 = *(int *)(param_1 + 0x5c);
  if (*(int *)(param_1 + 0x5c) != iVar8) {
    *(int *)(param_1 + 0x5c) = iVar8;
    bVar15 = true;
    iVar7 = iVar8;
  }
  *(byte *)(param_1 + 0x100) = (byte)*(uint *)(param_1 + 0x10) & 1;
  if ((*param_2 != *(longlong *)(param_1 + 0x14)) || (param_2[1] != *(longlong *)(param_1 + 0x1c)))
  {
    lVar3 = param_2[1];
    bVar15 = true;
    *(longlong *)(param_1 + 0x14) = *param_2;
    *(longlong *)(param_1 + 0x1c) = lVar3;
    *(undefined8 *)(param_1 + 0x24) = 0;
    uVar17 = *(undefined4 *)((longlong)param_2 + 4);
    lVar3 = param_2[1];
    uVar10 = *(undefined4 *)((longlong)param_2 + 0xc);
    *(int *)(param_1 + 0x2c) = (int)*param_2;
    *(undefined4 *)(param_1 + 0x30) = uVar17;
    *(int *)(param_1 + 0x34) = (int)lVar3;
    *(undefined4 *)(param_1 + 0x38) = uVar10;
    *(longlong *)(param_1 + 0x3c) = param_2[2];
    *(undefined4 *)(param_1 + 0x50) = 0x10000;
    *(undefined8 *)(param_1 + 0x44) = 0x10000;
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  uVar11 = *(uint *)(param_1 + 0x10) & 2;
  if (*(byte *)(param_1 + 0x102) == uVar11) {
    if (!bVar15) {
      return;
    }
  }
  else {
    *(bool *)(param_1 + 0x102) = uVar11 != 0;
  }
  iVar8 = *(int *)(param_1 + 0xa0);
  uVar13 = 0x4b0000;
  if (iVar8 == 0) {
    iVar8 = 1000;
  }
  if (iVar7 < 0x40000) {
    iVar7 = 0x40000;
  }
  uVar14 = 0x3e80000 / (longlong)iVar8 & 0xffffffff;
  iVar12 = *(int *)(*(longlong *)(lVar2 + 0x328) + 0x18c) << 0x10;
  *(int *)(param_1 + 0x124) = iVar12;
  if (iVar12 < 1) {
    iVar12 = FUN_180573310(0x4b0000,uVar14);
    *(int *)(param_1 + 0x124) = iVar12;
  }
  uVar17 = (undefined4)(in_stack_ffffffffffffffa8 >> 0x20);
  if (iVar9 < 1) {
    uVar16 = in_stack_ffffffffffffffa8 & 0xffffffff00000000;
    FUN_1805b5830(uVar14,iVar7,iVar12,param_1 + 300,uVar16,*(undefined1 *)(param_1 + 0x102),
                  param_1 + 0x104);
    uVar17 = (undefined4)(uVar16 >> 0x20);
  }
  else {
    iVar12 = FUN_180573310(iVar8 << 0x10);
    if (iVar9 <= iVar12) {
      iVar9 = FUN_180573310(iVar8 << 0x10,iVar7);
    }
    *(int *)(param_1 + 300) = 0;
    if ((iVar9 != 0) && (0x28e < (int)(0x3e80000 / (longlong)iVar8))) {
      *(int *)(param_1 + 300) = iVar9 / 2;
    }
  }
  iVar9 = *(int *)(*(longlong *)(lVar2 + 0x328) + 0x188);
  if ((iVar9 * 0x10000 < 1) || (*(int *)(param_1 + 0x124) <= iVar9 * 0x20000)) {
    uVar13 = 0x6e0000;
  }
  uVar10 = FUN_180573310(uVar13,uVar14);
  *(undefined4 *)(param_1 + 0x128) = uVar10;
  FUN_1805b5830(uVar14,iVar7,uVar10,param_1 + 0x130,CONCAT44(uVar17,uVar1),
                *(undefined1 *)(param_1 + 0x102),param_1 + 0x104);
  if ((*(int *)(param_1 + 300) == 0) && (*(int *)(param_1 + 0x130) == 0)) {
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  *(undefined1 *)(param_1 + 0x101) = uVar6;
  *(undefined1 *)(param_1 + 0x134) = 0;
  FUN_1805b5190(param_1 + 0x138,param_1);
  return;
}



