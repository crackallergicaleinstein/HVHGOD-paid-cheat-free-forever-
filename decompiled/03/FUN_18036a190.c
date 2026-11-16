// FUN_18036a190 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18036a190 */

void FUN_18036a190(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined4 local_10;
  
  puVar1 = (undefined8 *)param_1[7];
  local_88 = *(undefined8 *)((longlong)puVar1 + 0x3c);
  uStack_80 = *(undefined8 *)((longlong)puVar1 + 0x44);
  uStack_78 = *(undefined8 *)((longlong)puVar1 + 0x4c);
  uStack_70 = *(undefined8 *)((longlong)puVar1 + 0x54);
  local_50 = *(undefined4 *)((longlong)puVar1 + 0x74);
  local_68 = *(undefined8 *)((longlong)puVar1 + 0x5c);
  uStack_60 = *(undefined8 *)((longlong)puVar1 + 100);
  local_58 = *(undefined8 *)((longlong)puVar1 + 0x6c);
  local_10 = *(undefined4 *)(puVar1 + 7);
  local_48 = *puVar1;
  uStack_40 = puVar1[1];
  uStack_38 = puVar1[2];
  uStack_30 = puVar1[3];
  local_18 = puVar1[6];
  local_c8 = *(undefined8 *)param_1[2];
  local_c0 = *(undefined4 *)((undefined8 *)param_1[2] + 1);
  local_28 = puVar1[4];
  uStack_20 = puVar1[5];
  local_b8 = *(undefined8 *)param_1[1];
  local_b0 = *(undefined4 *)((undefined8 *)param_1[1] + 1);
  puVar1 = (undefined8 *)*param_1;
  local_a8 = *puVar1;
  uStack_a0 = puVar1[1];
  local_98 = *(undefined4 *)(puVar1 + 2);
  FUN_180354ba0(&local_a8,&local_b8,&local_c8,&local_48,*(undefined4 *)param_1[4],
                *(undefined4 *)param_1[5],*(undefined4 *)param_1[6],&local_48,&local_88);
  return;
}



