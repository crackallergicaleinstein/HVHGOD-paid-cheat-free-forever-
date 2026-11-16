// FUN_180507e00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180507e00 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180507e00(longlong param_1)

{
  ushort *puVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined1 (*pauVar7) [16];
  ushort *puVar8;
  undefined8 *puVar9;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  int local_b0;
  undefined4 local_a8;
  ulonglong local_98;
  int local_90;
  int local_8c;
  int local_88;
  undefined4 local_84;
  int local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_d8;
  if (DAT_180bb8ae8 == 0) {
    puVar9 = (undefined8 *)0x0;
  }
  else {
    puVar9 = *(undefined8 **)(DAT_180bb8ae8 + 0xd0);
  }
  iVar4 = *(int *)(param_1 + 4);
  if (iVar4 == 2) {
    uVar5 = *(ulonglong *)(param_1 + 0x30);
    pauVar7 = (undefined1 (*) [16])FUN_1804b8110(0x10);
    if (pauVar7 == (undefined1 (*) [16])0x0) {
      pauVar7 = (undefined1 (*) [16])0x0;
    }
    else {
      *pauVar7 = (undefined1  [16])0x0;
    }
    local_80 = *(int *)(param_1 + 0x24);
    local_7c = *(undefined4 *)(param_1 + 0x28);
    local_90 = local_80 * 4;
    local_6c = 1;
    local_5c = 0;
    local_78 = 1;
    local_74 = 1;
    local_70 = 0x1c;
    local_64 = 0;
    local_60 = 8;
    local_8c = 0;
    local_98 = uVar5;
    (**(code **)(*(longlong *)*puVar9 + 0x28))((longlong *)*puVar9,&local_80,&local_98,pauVar7);
    local_44 = local_78;
    local_40 = 0;
    local_50 = 0x1c;
    local_4c = 4;
    (**(code **)(*(longlong *)*puVar9 + 0x38))
              ((longlong *)*puVar9,*(undefined8 *)*pauVar7,&local_50,*pauVar7 + 8);
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(*pauVar7 + 8);
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined1 (**) [16])(param_1 + 8) = pauVar7;
  }
  else if (iVar4 == 3) {
    puVar8 = *(ushort **)(param_1 + 0x50);
    puVar6 = *(undefined8 **)(param_1 + 8);
    puVar1 = puVar8 + (longlong)*(int *)(param_1 + 0x48) * 4;
    for (; puVar8 != puVar1; puVar8 = puVar8 + 4) {
      uVar2 = *puVar8;
      uVar3 = puVar8[1];
      local_8c = (uint)puVar8[2] + (uint)uVar2;
      local_b0 = *(int *)(param_1 + 0x2c) * *(int *)(param_1 + 0x24);
      local_88 = (uint)puVar8[3] + (uint)uVar3;
      local_98 = (ulonglong)CONCAT24(uVar3,(uint)uVar2);
      local_90 = 0;
      local_84 = 1;
      local_a8 = 0;
      local_b8 = (longlong)
                 (int)(((uint)uVar3 * *(int *)(param_1 + 0x24) + (uint)uVar2) *
                      *(int *)(param_1 + 0x2c)) + *(longlong *)(param_1 + 0x30);
      (**(code **)(*(longlong *)puVar9[1] + 0x180))((longlong *)puVar9[1],*puVar6,0,&local_98);
    }
    *(undefined4 *)(param_1 + 4) = 0;
  }
  else if ((iVar4 == 4) && (0 < *(int *)(param_1 + 0x58))) {
    FUN_180507d10();
  }
}



