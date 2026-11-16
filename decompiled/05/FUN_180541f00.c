// FUN_180541f00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180541f00 */

void FUN_180541f00(undefined8 *param_1)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  char cVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong local_98;
  longlong lStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [16];
  undefined1 local_68;
  uint7 uStack_67;
  undefined8 uStack_60;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  longlong local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_98 = *(longlong *)param_1[1];
  local_88 = 0;
  uStack_80 = 0;
  lStack_90 = ((longlong *)param_1[1])[1] - local_98 >> 3;
  auStack_78 = ZEXT816(0);
  local_68 = 0;
  uStack_60 = 0;
  local_28 = (ulonglong)uStack_67 << 8;
  local_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  auVar4 = vunpcklps_avx(ZEXT816(0),ZEXT816(0));
  uStack_20 = 0;
  local_18 = auVar4._0_8_;
  cVar5 = FUN_18048d220("Skybox",*param_1,&local_98,1,&DAT_180830b38,&local_48);
  if (cVar5 == '\0') goto LAB_180542084;
  iVar8 = *(int *)param_1[2];
  if (*(int *)param_1[3] <= iVar8) {
    lVar2 = param_1[5];
    iVar7 = (int)(*(longlong *)(lVar2 + 0x10) - *(longlong *)(lVar2 + 8) >> 6);
    if (iVar8 < iVar7) {
LAB_180542020:
      local_98 = 0;
      lStack_90 = 0;
    }
    else {
      lVar3 = *(longlong *)(lVar2 + 0x68);
      uVar9 = (ulonglong)(iVar8 - iVar7);
      if ((ulonglong)(*(longlong *)(lVar2 + 0x70) - lVar3 >> 6) <= uVar9) goto LAB_180542020;
      lVar10 = uVar9 * 0x40;
      lVar2 = lVar10 + lVar3;
      local_98 = lVar2 + 0x20;
      if (0xf < *(ulonglong *)(lVar10 + 0x38 + lVar3)) {
        local_98 = *(longlong *)(lVar2 + 0x20);
      }
      lStack_90 = *(longlong *)(lVar2 + 0x30);
    }
    FUN_1800d3530(param_1[4] + 0x70,&local_98);
  }
  iVar8 = *(int *)*param_1;
  if (iVar8 == *(int *)param_1[3]) {
    iVar8 = -1;
  }
  *(int *)(param_1[4] + 0x68) = iVar8;
  *(undefined1 *)param_1[6] = 1;
  *(bool *)param_1[7] = *(int *)*param_1 == *(int *)param_1[3];
LAB_180542084:
  if (*(int *)*param_1 == *(int *)param_1[3]) {
    bVar1 = *(byte *)param_1[7];
    bVar6 = FUN_18048b0e0("Custom Skybox",&DAT_180829a3c,1);
    *(byte *)param_1[7] = bVar6 | bVar1;
  }
  return;
}



