// FUN_1800f43d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800f43d0 */

undefined8 * FUN_1800f43d0(char *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  char cVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 uStack_90;
  undefined8 *local_88;
  uint uStack_80;
  undefined4 uStack_7c;
  undefined1 local_68 [64];
  
  local_98 = param_2;
  if (*param_1 == '\0') {
    *param_1 = '\x01';
    uVar7 = FUN_18010f2c0();
    *(undefined8 *)(param_1 + 8) = uVar7;
  }
  if (*param_1 != '\x01') {
    local_a8 = (undefined8 *)FUN_180112a50(param_1);
    uVar7 = FUN_18010f360(&local_88);
    FUN_1800f6ca0(local_68,0x131,uVar7);
                    /* WARNING: Subroutine does not return */
    FUN_180606630(local_68,&DAT_1808d1050);
  }
  puVar1 = *(undefined8 **)(param_1 + 8);
  puVar8 = (undefined8 *)*puVar1;
  puVar10 = (undefined8 *)puVar8[1];
  uStack_80 = 0;
  if (*(char *)((longlong)puVar10 + 0x19) == '\0') {
    puVar5 = puVar10;
    do {
      puVar10 = puVar5;
      cVar6 = FUN_180114040(puVar10 + 4,param_2);
      if (-1 < cVar6) {
        puVar9 = puVar10;
        puVar8 = puVar10;
      }
      else {
        puVar9 = puVar10 + 2;
      }
      uStack_80 = (uint)(-1 < cVar6);
      puVar5 = (undefined8 *)*puVar9;
    } while (*(char *)((longlong)*puVar9 + 0x19) == '\0');
  }
  local_88 = puVar10;
  if (*(char *)((longlong)puVar8 + 0x19) == '\0') {
    cVar6 = FUN_180114040(param_2,puVar8 + 4);
    if (-1 < cVar6) goto LAB_1800f4525;
  }
  if (puVar1[1] == 0x333333333333333) {
                    /* WARNING: Subroutine does not return */
    FUN_1800a7740();
  }
  uVar7 = *puVar1;
  local_a0 = (undefined8 *)0x0;
  local_a8 = puVar1;
  FUN_180156fd0(&local_a8);
  puVar8 = local_a0;
  *(undefined1 (*) [16])(local_a0 + 4) = (undefined1  [16])0x0;
  local_a0[6] = 0;
  local_a0[7] = 0;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  local_a0[4] = *param_2;
  local_a0[5] = uVar2;
  local_a0[6] = uVar3;
  local_a0[7] = uVar4;
  *(undefined1 *)param_2 = 0;
  param_2[2] = 0;
  param_2[3] = 0xf;
  *(undefined1 *)(local_a0 + 8) = 0;
  FUN_180111d10(local_a0 + 9,0);
  *puVar8 = uVar7;
  puVar8[1] = uVar7;
  puVar8[2] = uVar7;
  *(undefined2 *)(puVar8 + 3) = 0;
  uStack_90 = CONCAT44(uStack_7c,uStack_80);
  local_98 = local_88;
  puVar8 = (undefined8 *)FUN_180140480(puVar1,&local_98,puVar8);
LAB_1800f4525:
  FUN_18015c010(param_2);
  return puVar8 + 8;
}



