// FUN_18043a0a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18043a0a0 */

undefined1 (*) [16] FUN_18043a0a0(undefined1 (*param_1) [16],longlong *param_2)

{
  ulonglong uVar1;
  undefined1 (*pauVar2) [16];
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined1 (*local_88) [16];
  ulonglong uStack_80;
  undefined1 local_70 [32];
  undefined1 local_50 [40];
  
  uVar1 = param_2[1];
  pauVar2 = (undefined1 (*) [16])*param_2;
  if (uVar1 < 2) {
    uStack_80 = 0xffffffffffffffff;
LAB_18043a106:
    if (uStack_80 != 0xffffffffffffffff) {
      if (uVar1 < uStack_80) {
        uStack_80 = uVar1;
      }
      local_88 = pauVar2;
      puVar8 = (undefined8 *)FUN_180439e30(local_50,&local_88);
      puVar7 = local_50;
      goto LAB_18043a152;
    }
  }
  else {
    local_88 = param_1;
    puVar7 = (undefined1 *)thunk_FUN_1805f9970(pauVar2,*pauVar2 + uVar1,&DAT_1807c6cdc,2);
    if (puVar7 != *pauVar2 + uVar1) {
      uStack_80 = (longlong)puVar7 - (longlong)pauVar2;
      goto LAB_18043a106;
    }
  }
  local_88 = (undefined1 (*) [16])*param_2;
  uStack_80 = param_2[1];
  puVar8 = (undefined8 *)FUN_180439e30(local_70,&local_88);
  puVar7 = local_70;
LAB_18043a152:
  *param_1 = (undefined1  [16])0x0;
  *(undefined8 *)param_1[1] = 0;
  *(undefined8 *)(param_1[1] + 8) = 0;
  uVar4 = puVar8[1];
  uVar5 = puVar8[2];
  uVar6 = puVar8[3];
  *(undefined8 *)*param_1 = *puVar8;
  *(undefined8 *)(*param_1 + 8) = uVar4;
  *(undefined8 *)param_1[1] = uVar5;
  *(undefined8 *)(param_1[1] + 8) = uVar6;
  *(undefined1 *)puVar8 = 0;
  puVar8[2] = 0;
  puVar8[3] = 0xf;
  lVar3 = param_2[1];
  *(longlong *)param_1[2] = *param_2;
  *(longlong *)(param_1[2] + 8) = lVar3;
  FUN_18015c010(puVar7);
  return param_1;
}



