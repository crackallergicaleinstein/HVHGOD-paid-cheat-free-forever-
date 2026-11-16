// FUN_1800abfc0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800abfc0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800abfc0(undefined8 param_1)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined4 *puVar9;
  longlong lVar10;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined1 local_100 [8];
  undefined8 uStack_f8;
  undefined1 local_f0 [16];
  undefined8 local_e0;
  undefined1 local_d8 [16];
  undefined8 local_c8;
  undefined1 local_c0 [16];
  undefined8 local_b0;
  undefined1 local_a8 [16];
  undefined8 local_98;
  undefined8 local_90;
  undefined1 *local_88;
  undefined1 local_78 [16];
  undefined1 local_68 [32];
  undefined8 uStack_48;
  undefined8 local_40;
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_128;
  local_108 = 0;
  local_90 = param_1;
  puVar6 = (undefined8 *)FUN_1800aa200();
  local_38 = (undefined1  [16])0x0;
  FUN_1800f4e90(local_100,local_38,0,1);
  local_108 = 2;
  puVar2 = (undefined4 *)puVar6[1];
  for (puVar9 = (undefined4 *)*puVar6; puVar9 != puVar2; puVar9 = puVar9 + 0x1c) {
    FUN_18015abc0(local_38,0xc,&DAT_1806bbf8c,*puVar9);
    local_88 = local_78;
    puVar7 = (undefined1 *)FUN_1800aab50(local_78,puVar9);
    local_f0 = (undefined1  [16])0x0;
    local_e0 = 0;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = local_d8._8_8_;
    local_d8 = auVar4 << 0x40;
    lVar10 = -1;
    do {
      lVar5 = lVar10 + 1;
      lVar10 = lVar10 + 1;
    } while (local_38[lVar5] != '\0');
    FUN_18015ba30(local_f0,local_38);
    puVar8 = (undefined1 *)FUN_1800f43d0(local_100,local_f0);
    uVar1 = *puVar8;
    *puVar8 = *puVar7;
    *puVar7 = uVar1;
    uVar3 = *(undefined8 *)(puVar8 + 8);
    puVar6 = (undefined8 *)(puVar7 + 8);
    *(undefined8 *)(puVar8 + 8) = *puVar6;
    *puVar6 = uVar3;
    FUN_1801409d0(puVar6,*puVar7);
  }
  FUN_1800e60e0(local_f0,"version");
  local_d8 = ZEXT816(0);
  FUN_1801409d0(local_d8 + 8,0);
  local_d8[0] = 5;
  local_d8._8_8_ = 0xc;
  local_c8 = 0;
  local_38._0_8_ = local_f0;
  local_38._8_8_ = local_c0;
  FUN_1800f4e90(local_c0,local_38,1,2);
  local_b0 = 0;
  FUN_1800e60e0(local_68,"fields");
  uStack_48 = uStack_f8;
  local_100[0] = 0;
  uStack_f8 = 0;
  local_40 = 0;
  local_38._0_8_ = local_68;
  local_38._8_8_ = local_38;
  FUN_1800f4e90(local_a8,local_38,1,2);
  local_98 = 0;
  local_38._8_8_ = &local_90;
  local_38._0_8_ = local_c0;
  FUN_1800f4e90(param_1,local_38,1,2);
  local_108 = 3;
  _eh_vector_destructor_iterator_(local_c0,0x18,2,FUN_1800aab30);
  _eh_vector_destructor_iterator_(local_68,0x18,2,FUN_1800aab30);
  _eh_vector_destructor_iterator_(local_f0,0x18,2,FUN_1800aab30);
  FUN_1801409d0(&uStack_f8,local_100[0]);
}



