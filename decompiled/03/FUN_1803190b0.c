// FUN_1803190b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803190b0 */

void FUN_1803190b0(longlong *param_1,byte param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  byte bVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined4 *puVar10;
  char *local_128;
  ulonglong uStack_120;
  ulonglong local_118 [11];
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  char local_a8 [80];
  undefined8 local_58;
  ulonglong *puStack_50;
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong *puStack_20;
  
  lVar9 = *param_1;
  uVar6 = (ulonglong)*(byte *)(lVar9 + 2);
  if (param_2 != *(byte *)(lVar9 + 2)) {
    puVar10 = (undefined4 *)param_1[2];
    puVar1 = (undefined8 *)param_1[1];
    uVar4 = FUN_18030e660(param_2);
    uVar5 = FUN_18030e660(uVar6 & 0xff);
    local_118[0] = 0xdb35e39b27e1c185;
    local_118[1] = 0xa05181ee77d57a06;
    local_118[2] = 0x929654b1461b7377;
    local_118[3] = 0xa5cea54bfef7110;
    local_118[4] = 0xa70c9f7f916b7e19;
    local_118[5] = 0x2b2d6d82aa402c0a;
    local_118[6] = 0xc064ed9510bc010b;
    local_118[7] = 0xfec09918395f26c4;
    local_118[8] = 0x835e2313e2c48f8d;
    local_118[9] = 0xf863c3261a551f0e;
    builtin_strncpy(local_a8,
                    "[pixelsurf] state {} -> {} cmd={} because={} attempt_ticks={} ride={} eta={}\n"
                    ,0x4e);
    local_a8[0x4e] = '\0';
    local_a8[0x4f] = '\0';
    uVar6 = 0xffffffffffffffff;
    do {
      uStack_120 = uVar6 + 1;
      lVar3 = uVar6 + 1;
      uVar6 = uStack_120;
    } while (local_a8[lVar3] != '\0');
    local_128 = local_a8;
    if (DAT_180bbeabc != '\0') {
      local_118[7] = uVar5;
      local_118[0] = 0xb000000000000000;
      local_118[8] = uVar4;
      local_118[1] = 0xb000000000000008;
      local_118[9] = *puVar1;
      local_118[2] = 0x3000000000000010;
      local_118[10] = param_3;
      local_118[3] = 0xb000000000000018;
      local_c0 = *(undefined4 *)(lVar9 + 4);
      local_118[4] = 0x1000000000000020;
      local_bc = *(undefined4 *)(lVar9 + 8);
      local_118[5] = 0x1000000000000024;
      local_b8 = *puVar10;
      local_118[6] = 0x1000000000000028;
      local_58 = 7;
      puStack_50 = local_118;
      local_38 = 0;
      uStack_30 = 0xf;
      local_48._1_15_ = SUB1615((undefined1  [16])0x0,1);
      auVar2[0xf] = 0;
      auVar2._0_15_ = local_48._1_15_;
      local_48 = auVar2 << 8;
      uVar6 = 0;
      uVar8 = 0;
      do {
        bVar7 = (byte)(local_118[uVar8] >> 0x3c);
        if (bVar7 == 0xc) {
          uVar6 = uVar6 + *(longlong *)
                           ((longlong)local_118 + (local_118[uVar8] & 0xfffffffffffffff) + 0x40);
        }
        else if (bVar7 == 0xb) {
          uVar6 = uVar6 + 0x20;
        }
        else {
          uVar6 = uVar6 + 8;
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < 7);
      lVar9 = uStack_120 + uVar6;
      if (CARRY8(uStack_120,uVar6)) {
        lVar9 = -1;
      }
      FUN_1800f5540(local_48,lVar9);
      local_28 = local_58;
      puStack_20 = puStack_50;
      FUN_1801da050(&local_58,local_48,&local_128,&local_28,0);
      FUN_18030e280(local_48);
      FUN_18015c010(local_48);
    }
    *(byte *)(*param_1 + 2) = param_2;
    *(undefined8 *)(*param_1 + 0x38) = *(undefined8 *)param_1[1];
  }
  return;
}



