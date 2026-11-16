// FUN_18013fea0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18013fea0 */

undefined1 (*) [16]
FUN_18013fea0(longlong param_1,undefined1 (*param_2) [16],int param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 *puVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 local_80 [16];
  undefined8 local_70;
  ulonglong local_68;
  undefined1 (*local_60) [16];
  undefined1 local_58 [32];
  
  *param_2 = (undefined1  [16])0x0;
  *(undefined8 *)param_2[1] = 0;
  *(undefined8 *)(param_2[1] + 8) = 0;
  local_60 = param_2;
  FUN_18015ba30(param_2,"syntax error ",0xd,param_4,0);
  if (param_4[2] != 0) {
    local_70 = 0;
    local_68 = 0xf;
    local_80._1_15_ = SUB1615((undefined1  [16])0x0,1);
    auVar2[0xf] = 0;
    auVar2._0_15_ = local_80._1_15_;
    local_80 = auVar2 << 8;
    FUN_1800f5540(local_80,param_4[2] + 0xf);
    FUN_18015b2a0(local_80,"while parsing ",0xe);
    puVar6 = param_4 + 2;
    if (0xf < (ulonglong)param_4[3]) {
      param_4 = (undefined8 *)*param_4;
    }
    FUN_18015b2a0(local_80,param_4,*puVar6);
    FUN_18015af80(local_80,0x20);
    puVar9 = local_80;
    if (0xf < local_68) {
      puVar9 = (undefined1 *)local_80._0_8_;
    }
    FUN_18015b2a0(param_2,puVar9,local_70);
    FUN_18015c010(local_80);
  }
  FUN_18015b2a0(param_2,&DAT_1806dd488,2);
  if (*(int *)(param_1 + 0x40) == 0xe) {
    puVar6 = (undefined8 *)FUN_18013fdc0(param_1 + 0x48,local_58);
    lVar11 = *(longlong *)(param_1 + 0xb8);
    local_70 = 0;
    local_68 = 0xf;
    local_80._1_15_ = SUB1615((undefined1  [16])0x0,1);
    auVar3[0xf] = 0;
    auVar3._0_15_ = local_80._1_15_;
    local_80 = auVar3 << 8;
    lVar8 = -1;
    do {
      lVar8 = lVar8 + 1;
    } while (*(char *)(lVar11 + lVar8) != '\0');
    FUN_1800f5540(local_80,puVar6[2] + 0xf + lVar8);
    lVar8 = -1;
    do {
      lVar8 = lVar8 + 1;
    } while (*(char *)(lVar11 + lVar8) != '\0');
    FUN_18015b2a0(local_80,lVar11);
    FUN_18015b2a0(local_80,"; last read: \'",0xe);
    puVar1 = puVar6 + 2;
    if (0xf < (ulonglong)puVar6[3]) {
      puVar6 = (undefined8 *)*puVar6;
    }
    FUN_18015b2a0(local_80,puVar6,*puVar1);
    FUN_18015af80(local_80,0x27);
    puVar9 = local_80;
    if (0xf < local_68) {
      puVar9 = (undefined1 *)local_80._0_8_;
    }
    FUN_18015b2a0(param_2,puVar9,local_70);
    FUN_18015c010(local_80);
    puVar9 = local_58;
  }
  else {
    lVar8 = FUN_180151980();
    local_70 = 0;
    local_68 = 0xf;
    local_80._1_15_ = SUB1615((undefined1  [16])0x0,1);
    auVar4[0xf] = 0;
    auVar4._0_15_ = local_80._1_15_;
    local_80 = auVar4 << 8;
    lVar11 = -1;
    do {
      lVar7 = lVar11;
      lVar11 = lVar7 + 1;
    } while (*(char *)(lVar8 + lVar11) != '\0');
    FUN_1800f5540(local_80,lVar7 + 0xc);
    FUN_18015b2a0(local_80,"unexpected ",0xb);
    lVar11 = -1;
    do {
      lVar11 = lVar11 + 1;
    } while (*(char *)(lVar8 + lVar11) != '\0');
    FUN_18015b2a0(local_80,lVar8);
    puVar9 = local_80;
    if (0xf < local_68) {
      puVar9 = (undefined1 *)local_80._0_8_;
    }
    FUN_18015b2a0(param_2,puVar9,local_70);
    puVar9 = local_80;
  }
  lVar11 = -1;
  FUN_18015c010(puVar9);
  if (param_3 != 0) {
    lVar7 = FUN_180151980(param_3);
    local_70 = 0;
    local_68 = 0xf;
    local_80._1_15_ = SUB1615((undefined1  [16])0x0,1);
    auVar5[0xf] = 0;
    auVar5._0_15_ = local_80._1_15_;
    local_80 = auVar5 << 8;
    lVar8 = -1;
    do {
      lVar10 = lVar8;
      lVar8 = lVar10 + 1;
    } while (*(char *)(lVar7 + lVar8) != '\0');
    FUN_1800f5540(local_80,lVar10 + 0xc);
    FUN_18015b2a0(local_80,"; expected ",0xb);
    do {
      lVar11 = lVar11 + 1;
    } while (*(char *)(lVar7 + lVar11) != '\0');
    FUN_18015b2a0(local_80,lVar7,lVar11);
    puVar9 = local_80;
    if (0xf < local_68) {
      puVar9 = (undefined1 *)local_80._0_8_;
    }
    FUN_18015b2a0(param_2,puVar9,local_70);
    FUN_18015c010(local_80);
  }
  return param_2;
}



