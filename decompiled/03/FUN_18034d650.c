// FUN_18034d650 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18034d650 */

void FUN_18034d650(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31)

{
  undefined1 uVar1;
  ulonglong uVar2;
  undefined1 auVar3 [16];
  longlong lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  byte bVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong in_stack_fffffffffffffd88;
  undefined1 *local_268;
  ulonglong *puStack_260;
  undefined1 local_258 [16];
  undefined8 local_248;
  ulonglong uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined1 *local_218;
  ulonglong *puStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  ulonglong local_1f8 [30];
  longlong alStack_108 [22];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  uVar7 = in_stack_fffffffffffffd88 & 0xffffffff00000000;
  if ((param_1 < DAT_1808e3e30) || (0x7f < param_1 - DAT_1808e3e30)) {
    if (DAT_1808e3e3c != 0) {
      local_58 = 0xdb35e39b27e1c185;
      uStack_50 = 0xa05181ee77d57a06;
      local_48 = 0x929654b1461b7377;
      uStack_40 = 0xa5cea54bfef7110;
      local_38 = 0xa70c9f7f916b7e19;
      uStack_30 = 0x2b2d6d82aa402c0a;
      local_28 = 0xc064ed9510bc010b;
      uVar7 = 0xfec09918395f26c4;
      uStack_20 = 0xfec09918395f26c4;
      local_258._8_8_ = 0x7b28205d7664612d;
      local_258._0_8_ = 0x677562656764655b;
      local_248 = 0x2073656e696c207d;
      uStack_240 = 0x7373657270707573;
      local_238 = 0x6874207962206465;
      uStack_230 = 0x6c20657461722065;
      local_228 = 0xa2974696d69;
      uStack_220 = 0;
      lVar9 = -1;
      do {
        puStack_260 = (ulonglong *)(lVar9 + 1);
        lVar4 = lVar9 + 1;
        lVar9 = (longlong)puStack_260;
      } while (local_258[lVar4] != '\0');
      local_268 = local_258;
      FUN_18034fcc0(&local_268,&DAT_1808e3e3c);
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
  FUN_180351eb0(local_1f8,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11,
                param_12,param_13,param_14,param_15,param_16,param_17,param_18,param_19,param_20,
                param_21,param_22,param_23,param_24,param_25,param_26,param_27,param_28,param_29,
                param_30,param_31,uVar7);
  local_268 = (undefined1 *)0x1d;
  local_248 = 0;
  uStack_240 = 0xf;
  local_258._1_15_ = SUB1615((undefined1  [16])0x0,1);
  auVar3[0xf] = 0;
  auVar3._0_15_ = local_258._1_15_;
  local_258 = auVar3 << 8;
  uVar7 = 0;
  uVar10 = 0;
  do {
    uVar2 = local_1f8[uVar10];
    bVar8 = (byte)(uVar2 >> 0x3c);
    if (bVar8 == 0xc) {
      uVar7 = uVar7 + *(longlong *)((longlong)alStack_108 + (uVar2 & 0xfffffffffffffff));
    }
    else if (bVar8 == 0xb) {
      uVar7 = uVar7 + 0x20;
    }
    else {
      uVar7 = uVar7 + 8;
    }
    uVar10 = uVar10 + 1;
  } while (uVar10 < 0x1d);
  lVar9 = param_2[1] + uVar7;
  if (CARRY8(param_2[1],uVar7)) {
    lVar9 = -1;
  }
  puStack_260 = local_1f8;
  FUN_1800f5540(local_258,lVar9);
  local_218 = local_268;
  puStack_210 = puStack_260;
  local_208 = *param_2;
  uStack_200 = param_2[1];
  FUN_1801da050(&local_268,local_258,&local_208,&local_218,0);
  puVar6 = local_258;
  if ((uStack_240 < 0x10) ||
     (puVar6 = (undefined1 *)local_258._0_8_, (undefined1 *)local_258._0_8_ != (undefined1 *)0x0)) {
    puVar5 = (undefined1 *)FUN_1803b0a60();
    uVar1 = *puVar5;
    puVar5 = (undefined1 *)FUN_1803b0a60();
    *puVar5 = 1;
    FUN_1800a9e50(1,puVar6);
    puVar6 = (undefined1 *)FUN_1803b0a60();
    *puVar6 = uVar1;
  }
  FUN_18015c010(local_258);
  return;
}



