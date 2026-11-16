// FUN_18034eee0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18034eee0 */

void FUN_18034eee0(longlong param_1,undefined8 *param_2,undefined8 *param_3,ulonglong *param_4)

{
  undefined1 uVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  ulonglong uVar6;
  byte bVar7;
  longlong lVar8;
  ulonglong uVar9;
  char *local_c8;
  char *pcStack_c0;
  char local_b8 [16];
  undefined8 uStack_a8;
  ulonglong auStack_a0 [5];
  undefined1 local_78 [16];
  undefined8 uStack_68;
  ulonglong uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 *local_38;
  char *pcStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  if ((param_1 < DAT_1808e3e30) || (0x7f < param_1 - DAT_1808e3e30)) {
    if (DAT_1808e3e3c != 0) {
      local_78._8_8_ = 0xa05181ee77d57a06;
      local_78._0_8_ = 0xdb35e39b27e1c185;
      uStack_68 = 0x929654b1461b7377;
      uStack_60 = 0xa5cea54bfef7110;
      local_58 = 0xa70c9f7f916b7e19;
      uStack_50 = 0x2b2d6d82aa402c0a;
      local_48 = 0xc064ed9510bc010b;
      uStack_40 = 0xfec09918395f26c4;
      builtin_strncpy(local_b8,"[edgebug-adv] ({",0x10);
      uStack_a8 = 0x2073656e696c207d;
      auStack_a0[0] = 0x7373657270707573;
      auStack_a0[1] = 0x6874207962206465;
      auStack_a0[2] = 0x6c20657461722065;
      auStack_a0[3] = 0xa2974696d69;
      auStack_a0[4] = 0;
      lVar8 = -1;
      do {
        pcStack_c0 = (char *)(lVar8 + 1);
        lVar3 = lVar8 + -0x17;
        lVar8 = (longlong)pcStack_c0;
      } while (*(char *)((longlong)auStack_a0 + lVar3) != '\0');
      local_c8 = local_b8;
      FUN_18034fcc0(&local_c8,&DAT_1808e3e3c);
    }
    DAT_1808e3e38 = 0;
    DAT_1808e3e3c = 0;
    DAT_1808e3e30 = param_1;
  }
  else if (0x17 < DAT_1808e3e38) {
    DAT_1808e3e3c = DAT_1808e3e3c + 1;
    return;
  }
  DAT_1808e3e38 = DAT_1808e3e38 + 1;
  uStack_a8 = *param_3;
  local_b8[0] = '\0';
  local_b8[1] = '\0';
  local_b8[2] = '\0';
  local_b8[3] = '\0';
  local_b8[4] = '\0';
  local_b8[5] = '\0';
  local_b8[6] = '\0';
  local_b8[7] = '0';
  auStack_a0[0] = *param_4;
  local_b8[8] = '\b';
  local_b8[9] = '\0';
  local_b8[10] = '\0';
  local_b8[0xb] = '\0';
  local_b8[0xc] = '\0';
  local_b8[0xd] = '\0';
  local_b8[0xe] = '\0';
  local_b8[0xf] = -0x80;
  local_c8 = (char *)0x2;
  pcStack_c0 = local_b8;
  uStack_68 = 0;
  uStack_60 = 0xf;
  local_78._1_15_ = SUB1615((undefined1  [16])0x0,1);
  auVar2[0xf] = 0;
  auVar2._0_15_ = local_78._1_15_;
  local_78 = auVar2 << 8;
  uVar6 = 0;
  uVar9 = 0;
  do {
    bVar7 = (byte)(auStack_a0[uVar9 - 3] >> 0x3c);
    if (bVar7 == 0xc) {
      uVar6 = uVar6 + *(longlong *)
                       ((longlong)auStack_a0 + (auStack_a0[uVar9 - 3] & 0xfffffffffffffff));
    }
    else if (bVar7 == 0xb) {
      uVar6 = uVar6 + 0x20;
    }
    else {
      uVar6 = uVar6 + 8;
    }
    uVar9 = uVar9 + 1;
  } while (uVar9 < 2);
  lVar8 = param_2[1] + uVar6;
  if (CARRY8(param_2[1],uVar6)) {
    lVar8 = -1;
  }
  FUN_1800f5540(local_78,lVar8);
  local_38 = (undefined8 *)local_c8;
  pcStack_30 = pcStack_c0;
  local_28 = *param_2;
  uStack_20 = param_2[1];
  FUN_1801da050(&local_c8,local_78,&local_28,&local_38,0);
  puVar5 = local_78;
  if ((uStack_60 < 0x10) ||
     (puVar5 = (undefined1 *)local_78._0_8_, (undefined1 *)local_78._0_8_ != (undefined1 *)0x0)) {
    puVar4 = (undefined1 *)FUN_1803b0a60();
    uVar1 = *puVar4;
    puVar4 = (undefined1 *)FUN_1803b0a60();
    *puVar4 = 1;
    FUN_1800a9e50(1,puVar5);
    puVar5 = (undefined1 *)FUN_1803b0a60();
    *puVar5 = uVar1;
  }
  FUN_18015c010(local_78);
  return;
}



