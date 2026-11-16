// FUN_18059d050 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18059d050 */

int FUN_18059d050(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  code *pcVar4;
  longlong lVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  int local_res8 [2];
  
  lVar9 = *param_1;
  if ((*(byte *)(lVar9 + 8) & 2) != 0) {
    iVar6 = (**(code **)(*(longlong *)(lVar9 + 0x2d0) + 0xe0))(lVar9,param_2,local_res8);
    if (iVar6 == 0) {
      *(int *)(param_1 + 8) = local_res8[0];
      FUN_180577980(*param_1);
      puVar3 = (undefined8 *)(*(undefined8 **)(*param_1 + 0x3e0))[0x21a];
      lVar9 = FUN_180573a00(**(undefined8 **)(*param_1 + 0x3e0),"pshinter");
      if ((((lVar9 != 0) && (puVar3 != (undefined8 *)0x0)) &&
          (pcVar4 = (code *)*puVar3, pcVar4 != (code *)0x0)) &&
         (lVar9 = (*pcVar4)(lVar9), lVar9 != 0)) {
        lVar5 = *(longlong *)(*param_1 + 0x3e0);
        iVar6 = *(int *)(lVar5 + 0x620);
        puVar3 = *(undefined8 **)param_1[7];
        (**(code **)(lVar9 + 8))
                  (*puVar3,*(undefined4 *)((longlong)param_1 + 0x1c),(int)param_1[4],0,0);
        uVar2 = *(uint *)(lVar5 + 0x8a8);
        while (uVar2 != 0) {
          uVar7 = *(undefined4 *)((longlong)param_1 + 0x1c);
          uVar2 = uVar2 - 1;
          iVar1 = *(int *)(*(longlong *)(lVar5 + 0x8b0 + (ulonglong)uVar2 * 8) + 0x40);
          if (iVar6 == iVar1) {
            uVar8 = (undefined4)param_1[4];
          }
          else {
            uVar7 = FUN_1805753e0(uVar7,iVar6,iVar1);
            uVar8 = FUN_1805753e0((int)param_1[4],iVar6,iVar1);
          }
          (**(code **)(lVar9 + 8))(puVar3[(ulonglong)uVar2 + 1],uVar7,uVar8,0,0);
        }
      }
      return 0;
    }
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
  }
  iVar6 = FUN_1805772f0(*param_1,param_2);
  if (iVar6 == 0) {
    puVar3 = (undefined8 *)(*(undefined8 **)(*param_1 + 0x3e0))[0x21a];
    local_res8[0] = iVar6;
    lVar9 = FUN_180573a00(**(undefined8 **)(*param_1 + 0x3e0),"pshinter");
    if (((lVar9 != 0) && (puVar3 != (undefined8 *)0x0)) &&
       ((pcVar4 = (code *)*puVar3, pcVar4 != (code *)0x0 && (lVar9 = (*pcVar4)(lVar9), lVar9 != 0)))
       ) {
      lVar5 = *(longlong *)(*param_1 + 0x3e0);
      iVar1 = *(int *)(lVar5 + 0x620);
      puVar3 = *(undefined8 **)param_1[7];
      (**(code **)(lVar9 + 8))
                (*puVar3,*(undefined4 *)((longlong)param_1 + 0x1c),(int)param_1[4],0,0);
      uVar2 = *(uint *)(lVar5 + 0x8a8);
      while (uVar2 != 0) {
        uVar7 = *(undefined4 *)((longlong)param_1 + 0x1c);
        uVar2 = uVar2 - 1;
        iVar6 = *(int *)(*(longlong *)(lVar5 + 0x8b0 + (ulonglong)uVar2 * 8) + 0x40);
        if (iVar1 == iVar6) {
          uVar8 = (undefined4)param_1[4];
        }
        else {
          uVar7 = FUN_1805753e0(uVar7,iVar1,iVar6);
          uVar8 = FUN_1805753e0((int)param_1[4],iVar1,iVar6);
        }
        (**(code **)(lVar9 + 8))(puVar3[(ulonglong)uVar2 + 1],uVar7,uVar8,0,0);
        iVar6 = local_res8[0];
      }
    }
  }
  return iVar6;
}



