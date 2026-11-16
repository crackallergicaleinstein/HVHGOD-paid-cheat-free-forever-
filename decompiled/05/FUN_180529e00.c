// FUN_180529e00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180529e00 */

undefined1 (*) [16] FUN_180529e00(undefined1 (*param_1) [16],undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 (*pauVar4) [16];
  undefined8 *puVar5;
  longlong *plVar6;
  undefined1 local_70 [16];
  undefined1 auStack_60 [16];
  undefined1 local_50 [16];
  undefined1 auStack_40 [16];
  undefined1 local_30 [40];
  
  uVar3 = FUN_18015bea0(local_30,*param_2);
  pauVar4 = (undefined1 (*) [16])FUN_180141490(uVar3,0,"imported-agent-cutout-v3|",0x19);
  local_50 = *pauVar4;
  auStack_40 = pauVar4[1];
  *(undefined8 *)(pauVar4[1] + 8) = 0xf;
  (*pauVar4)[0] = 0;
  *(undefined8 *)pauVar4[1] = 0;
  pauVar4 = (undefined1 (*) [16])FUN_18015b2a0(local_50,&DAT_1807c6e48,1);
  local_70 = *pauVar4;
  auStack_60 = pauVar4[1];
  (*pauVar4)[0] = 0;
  *(undefined8 *)pauVar4[1] = 0;
  *(undefined8 *)(pauVar4[1] + 8) = 0xf;
  plVar6 = (longlong *)(param_2 + 10);
  if (0xf < *(ulonglong *)(param_2 + 0x10)) {
    plVar6 = (longlong *)*plVar6;
  }
  puVar5 = (undefined8 *)FUN_18015b2a0(local_70,plVar6,*(undefined8 *)(param_2 + 0xe));
  *param_1 = (undefined1  [16])0x0;
  *(undefined8 *)param_1[1] = 0;
  *(undefined8 *)(param_1[1] + 8) = 0;
  uVar3 = puVar5[1];
  uVar1 = puVar5[2];
  uVar2 = puVar5[3];
  *(undefined8 *)*param_1 = *puVar5;
  *(undefined8 *)(*param_1 + 8) = uVar3;
  *(undefined8 *)param_1[1] = uVar1;
  *(undefined8 *)(param_1[1] + 8) = uVar2;
  *(undefined1 *)puVar5 = 0;
  puVar5[2] = 0;
  puVar5[3] = 0xf;
  FUN_18015c010(local_70);
  FUN_18015c010(local_50);
  FUN_18015c010(local_30);
  return param_1;
}



