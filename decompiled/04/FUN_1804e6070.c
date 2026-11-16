// FUN_1804e6070 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804e6070 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Removing unreachable block (ram,0x0001804e6211) */
/* WARNING: Removing unreachable block (ram,0x0001804e621d) */
/* WARNING: Removing unreachable block (ram,0x0001804e6239) */
/* WARNING: Removing unreachable block (ram,0x0001804e626f) */
/* WARNING: Removing unreachable block (ram,0x0001804e627a) */
/* WARNING: Removing unreachable block (ram,0x0001804e618e) */
/* WARNING: Removing unreachable block (ram,0x0001804e619a) */
/* WARNING: Removing unreachable block (ram,0x0001804e61b6) */
/* WARNING: Removing unreachable block (ram,0x0001804e61ec) */
/* WARNING: Removing unreachable block (ram,0x0001804e61f7) */
/* WARNING: Removing unreachable block (ram,0x0001804e6294) */
/* WARNING: Removing unreachable block (ram,0x0001804e62a0) */
/* WARNING: Removing unreachable block (ram,0x0001804e62bc) */
/* WARNING: Removing unreachable block (ram,0x0001804e62f3) */
/* WARNING: Removing unreachable block (ram,0x0001804e62fe) */

undefined8 *
FUN_1804e6070(longlong param_1,longlong param_2,float param_3,undefined4 param_4,undefined4 param_5)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  longlong *plVar5;
  uint uVar6;
  longlong lVar7;
  int *piVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined4 local_d8;
  float local_d4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  if ((DAT_180bb8ae8 != 0) && ((*(uint *)(DAT_180bb8ae8 + 0x28cc) & 0x100) != 0)) {
    FUN_1804cf3e0("[font] Created baked %.2fpx\n",(double)param_3);
  }
  lVar10 = *(longlong *)(param_1 + 0xa0);
  piVar8 = (int *)(lVar10 + 0xc0);
  local_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  local_68 = 0xffffffff;
  iVar2 = *piVar8;
  if (iVar2 == *(int *)(lVar10 + 0xc4)) {
    FUN_1804ec1b0(piVar8,*(int *)(lVar10 + 0xc4) + 0x20);
  }
  uVar6 = iVar2 >> 0x1f & 0x1f;
  uVar3 = iVar2 + uVar6;
  puVar9 = (undefined8 *)
           ((longlong)(int)((uVar3 & 0x1f) - uVar6) * 0x68 +
           *(longlong *)(*(longlong *)(lVar10 + 0xd0) + (longlong)((int)uVar3 >> 5) * 8));
  *puVar9 = 0;
  puVar9[1] = 0;
  puVar9[2] = 0;
  puVar9[3] = 0;
  puVar9[4] = 0;
  puVar9[5] = 0;
  puVar9[6] = 0;
  puVar9[7] = 0;
  puVar9[8] = local_68;
  puVar9[9] = uStack_60;
  puVar9[10] = uStack_58;
  puVar9[0xb] = uStack_50;
  puVar9[0xc] = local_48;
  *piVar8 = *piVar8 + 1;
  *(float *)((longlong)puVar9 + 0x14) = param_3;
  *(undefined4 *)(puVar9 + 3) = param_4;
  *(undefined4 *)((longlong)puVar9 + 0x54) = param_5;
  puVar9[0xb] = param_2;
  *(undefined4 *)(puVar9 + 10) = *(undefined4 *)(*(longlong *)(param_1 + 0xa0) + 0xa4);
  lVar10 = 0;
  plVar5 = *(longlong **)(param_2 + 0x28);
  plVar1 = plVar5 + *(int *)(param_2 + 0x20);
  if (plVar5 != plVar1) {
    do {
      lVar7 = *(longlong *)(*plVar5 + 0x88);
      if (lVar7 == 0) {
        lVar7 = *(longlong *)(param_1 + 0xa8);
      }
      lVar10 = lVar10 + *(longlong *)(lVar7 + 0x50);
      plVar5 = plVar5 + 1;
    } while (plVar5 != plVar1);
    if (lVar10 != 0) {
      lVar10 = FUN_1804b8110(lVar10);
      goto LAB_1804e638b;
    }
  }
  lVar10 = 0;
LAB_1804e638b:
  puVar9[0xc] = lVar10;
  plVar5 = *(longlong **)(param_2 + 0x28);
  plVar1 = plVar5 + *(int *)(param_2 + 0x20);
  for (; plVar5 != plVar1; plVar5 = plVar5 + 1) {
    lVar7 = *(longlong *)(*plVar5 + 0x88);
    if (lVar7 == 0) {
      lVar7 = *(longlong *)(param_1 + 0xa8);
    }
    if (*(code **)(lVar7 + 0x38) != (code *)0x0) {
      (**(code **)(lVar7 + 0x38))(param_1,*plVar5,puVar9,lVar10);
    }
    lVar10 = lVar10 + *(longlong *)(lVar7 + 0x50);
  }
  puVar4 = (uint *)FUN_1804e9670(puVar9,0x20);
  if (puVar4 != (uint *)0x0) {
    *puVar4 = *puVar4 & 0xfffffffd;
  }
  lVar10 = FUN_1804e9670(puVar9,9);
  if ((lVar10 == 0) && (puVar4 != (uint *)0x0)) {
    local_d0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    local_b0 = 0xffffffff;
    local_d8 = 0x240;
    local_d4 = (float)puVar4[1] * 4.0;
    FUN_1804e91d0(param_1,puVar9,0,&local_d8);
  }
  return puVar9;
}



