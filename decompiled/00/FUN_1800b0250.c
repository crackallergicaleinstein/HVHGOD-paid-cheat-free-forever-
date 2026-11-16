// FUN_1800b0250 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800b0250 */

char * FUN_1800b0250(char *param_1,float *param_2)

{
  float *pfVar1;
  longlong lVar2;
  double dVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  double dVar9;
  double dVar10;
  undefined1 local_e8 [16];
  undefined4 local_d8;
  undefined1 local_c8 [16];
  undefined8 local_b8;
  undefined8 local_b0;
  char *local_a8;
  undefined1 local_a0 [56];
  undefined1 local_68 [64];
  
  local_d8 = 0;
  local_c8 = (undefined1  [16])0x0;
  local_a8 = param_1;
  FUN_1800f4e90(0,local_c8,0,2);
  local_d8 = 3;
  pfVar1 = param_2 + 4;
  if (param_2 != pfVar1) {
    dVar9 = 255.0;
    local_b0 = 0x406fe00000000000;
    dVar10 = 0.0;
    local_b8 = 0;
    do {
      dVar3 = (double)*param_2 * dVar9;
      local_e8._0_8_ = dVar3;
      puVar7 = &local_b8;
      if (dVar10 <= dVar3) {
        puVar7 = (undefined8 *)local_e8;
      }
      puVar5 = &local_b0;
      if (dVar3 <= dVar9) {
        puVar5 = puVar7;
      }
      iVar4 = FUN_18060eb10(*puVar5);
      local_e8 = ZEXT816(0);
      FUN_1801409d0(local_e8 + 8,0);
      local_e8[0] = 5;
      local_e8._8_8_ = (longlong)iVar4;
      if (*param_1 == '\0') {
        *param_1 = '\x02';
        FUN_180111d10(local_c8,2);
        *(undefined8 *)(param_1 + 8) = local_c8._0_8_;
      }
      else if (*param_1 != '\x02') {
        uVar6 = FUN_180112a50(param_1);
        local_c8._0_8_ = uVar6;
        uVar6 = FUN_1800f6bd0(local_68,"cannot use push_back() with ",local_c8);
        FUN_1800f6ca0(local_a0,0x134,uVar6);
                    /* WARNING: Subroutine does not return */
        FUN_180606630(local_a0,&DAT_1808d1050);
      }
      lVar2 = *(longlong *)(param_1 + 8);
      puVar7 = *(undefined8 **)(lVar2 + 8);
      if (puVar7 == *(undefined8 **)(lVar2 + 0x10)) {
        FUN_18014fc20(lVar2,puVar7,local_e8);
        uVar8 = (ulonglong)local_e8[0];
      }
      else {
        *puVar7 = local_e8._0_8_;
        puVar7[1] = local_e8._8_8_;
        uVar8 = (ulonglong)puVar7 & 0xffffffffffffff00;
        local_e8._0_8_ = local_e8._1_8_ << 8;
        local_e8._8_8_ = 0;
        *(longlong *)(lVar2 + 8) = *(longlong *)(lVar2 + 8) + 0x10;
      }
      FUN_1801409d0(local_e8 + 8,uVar8);
      param_2 = param_2 + 1;
    } while (param_2 != pfVar1);
  }
  return param_1;
}



