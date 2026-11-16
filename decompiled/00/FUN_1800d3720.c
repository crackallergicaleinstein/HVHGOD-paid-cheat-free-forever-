// FUN_1800d3720 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800d3720 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined1 (*) [16]
FUN_1800d3720(longlong param_1,undefined1 (*param_2) [16],undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  longlong *plVar8;
  undefined1 *puVar9;
  uint uVar10;
  undefined8 local_80;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 (*local_48) [16];
  undefined1 local_40 [40];
  
  local_78 = (undefined1  [16])0x0;
  puVar1 = (undefined8 *)(param_1 + 0x18);
  local_48 = param_2;
  plVar8 = (longlong *)FUN_180113860(puVar1,param_2,param_3,param_4,0);
  lVar6 = *(longlong *)(param_1 + 0x10);
  local_78._8_8_ = plVar8;
  local_78._0_8_ = lVar6;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  LOCK();
  uVar5 = *puVar1;
  *puVar1 = plVar8;
  UNLOCK();
  if (((byte)uVar5 & 3) == 2) {
    FUN_1805fa36c(puVar1);
  }
  if (lVar6 == 0) {
    local_58 = 0;
    uStack_50 = 0xf;
    local_68._1_15_ = SUB1615((undefined1  [16])0x0,1);
    auVar7[0xf] = 0;
    auVar7._0_15_ = local_68._1_15_;
    local_68 = auVar7 << 8;
    puVar9 = local_68;
    uVar10 = 2;
  }
  else {
    puVar9 = (undefined1 *)FUN_18015b360(local_40,lVar6);
    uVar10 = 1;
  }
  *param_2 = (undefined1  [16])0x0;
  (*param_2)[0] = 0;
  *(undefined8 *)(*param_2 + 8) = 0;
  FUN_1801409d0(*param_2 + 8,(*param_2)[0],param_3,param_4,uVar10);
  (*param_2)[0] = 3;
  FUN_180111c50(&local_80,puVar9);
  *(undefined8 *)(*param_2 + 8) = local_80;
  if ((uVar10 & 2) != 0) {
    uVar10 = uVar10 & 0xfffffffd;
    FUN_18015c010(local_68);
  }
  if ((uVar10 & 1) != 0) {
    FUN_18015c010(local_40);
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar8 + 1;
    lVar6 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar3 = (int *)((longlong)plVar8 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8);
      }
    }
  }
  return param_2;
}



