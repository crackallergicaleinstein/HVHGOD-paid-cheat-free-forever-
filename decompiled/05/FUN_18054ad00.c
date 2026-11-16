// FUN_18054ad00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18054ad00 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18054ad00(void)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  ulonglong uVar10;
  undefined1 auVar11 [64];
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_198 [32];
  float local_178;
  undefined *local_170;
  undefined *local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_148;
  float local_138;
  undefined4 local_134;
  float local_130 [3];
  undefined4 local_124;
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  ulonglong local_98;
  
  local_98 = DAT_1808d5f00 ^ (ulonglong)auStack_198;
  fVar15 = 0.0;
  if (DAT_180bda4dc == 1) {
    DAT_1808e68b0 = 1;
    DAT_1808e68b4 = 0x3f800000;
    if (DAT_1808e68b8 == DAT_1808e68c0) {
      local_118 = (undefined1  [16])0x0;
      local_108 = (undefined1  [16])0x0;
      FUN_18015ba30(local_118,"Quick Peek",10);
      local_f8 = 0;
      uStack_f0 = 0;
      local_e8 = 0;
      uStack_e0 = 0;
      FUN_18015ba30(&local_f8,&DAT_1806be288,4);
      local_d8 = (undefined1  [16])0x0;
      local_c8 = (undefined1  [16])0x0;
      FUN_18015ba30(local_d8,"Min Damage Override",0x13);
      local_b8 = (undefined1  [16])0x0;
      local_a8 = (undefined1  [16])0x0;
      FUN_18015ba30(local_b8,&DAT_18086b2e0,2);
      FUN_18056d360(&DAT_1808e68b8,local_118,2);
      _eh_vector_destructor_iterator_(local_118,0x40,2,FUN_180156fb0);
    }
  }
  else if (DAT_180bda4dc == 2) {
    if (DAT_1808e68d0 == DAT_1808e68d8) {
      DAT_1808e68b1 = 1;
      local_118 = (undefined1  [16])0x0;
      local_108 = (undefined1  [16])0x0;
      FUN_18015ba30(local_118,"Spectator 01",0xc);
      local_f8 = 0;
      uStack_f0 = 0;
      local_e8 = 0;
      uStack_e0 = 0;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_d8._8_8_;
      local_d8 = auVar1 << 0x40;
      FUN_18015ba30(&uStack_f0,"Spectator 02",0xc);
      local_d8._8_8_ = 0;
      FUN_18056d1f0(&DAT_1808e68d0,local_118,2);
      _eh_vector_destructor_iterator_(local_118,0x28,2,thunk_FUN_18015c010);
    }
  }
  else if (DAT_180bda4dc == 3) {
    if (DAT_1808e6908 == '\0') {
      _DAT_1808e68e8 = 0x4220000041c4cccd;
      _DAT_1808e68f0 = 0x4120000040a66666;
      _DAT_1808e68f8 = 0;
      _DAT_1808e68fc = 0x2a;
      _DAT_1808e6900 = 100;
      _DAT_1808e6904 = 0x101;
      DAT_1808e6906 = 0;
      DAT_1808e6907 = local_108[0xf];
      DAT_1808e6908 = '\x01';
    }
  }
  else if ((DAT_180bda4dc == 4) && (DAT_1808e6938 == '\0')) {
    local_118._0_12_ = ZEXT812(0x43960000436b0000);
    local_108 = (undefined1  [16])0x0;
    local_f8 = 0;
    iVar4 = 0;
    fVar7 = 40.0;
    fVar6 = 0.13;
    fVar12 = 85.0;
    fVar13 = 140.0;
    fVar14 = 0.37;
    do {
      fVar9 = (float)iVar4;
      fVar5 = (float)FUN_180638e00(fVar9 * fVar6);
      fVar5 = fVar5 * fVar12 + fVar13;
      fVar9 = (float)FUN_180638e00(fVar9 * fVar14);
      local_138 = fVar5 + fVar9 * fVar7;
      FUN_1802aa650(local_108,&local_138);
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x50);
    FUN_18056c240(&DAT_1808e6910,local_118);
    FUN_180159650(local_108);
  }
  lVar2 = FUN_1804b81b0(**(undefined8 **)(DAT_180bb8ae8 + 0x2030),1,"##Foreground");
  fVar7 = *(float *)(DAT_180bb8ae8 + 0x30);
  fVar6 = (float)FUN_180547640();
  auVar11 = ZEXT464((uint)(fVar6 * 13.0));
  local_148 = 0;
  local_158 = 0;
  local_160 = 0;
  local_168 = (undefined *)0x0;
  local_170 = &DAT_18086b370;
  local_178 = fVar15;
  FUN_1804ea040(&local_138,DAT_180c62ca8,fVar6 * 13.0,0x7f7fffff);
  fVar6 = 12.0;
  auVar1 = vmaxss_avx(ZEXT416((uint)((fVar7 - local_138) * 0.5 - 12.0)),
                      SUB6416(ZEXT464(0x41000000),0));
  local_130[0] = auVar1._0_4_;
  local_130[1] = 14.0;
  uVar8 = 0x41c00000;
  local_130[2] = local_130[0] + local_138 + 24.0;
  local_124 = 0x42400000;
  local_170 = (undefined *)((ulonglong)local_170 & 0xffffffff00000000);
  local_178 = 8.0;
  FUN_1804df870(lVar2,local_130,local_130 + 2,0xf0121212);
  uVar10 = auVar11._0_8_;
  local_138 = fVar6 + local_130[0];
  lVar3 = DAT_180c62ca8;
  if (DAT_180c62ca8 == 0) {
    lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x38) + 0x20);
  }
  if (auVar11._0_4_ == fVar15) {
    uVar10 = (ulonglong)*(uint *)(*(longlong *)(lVar2 + 0x38) + 0x28);
  }
  local_118 = *(undefined1 (*) [16])(lVar2 + 0x60);
  local_150 = 0;
  local_158 = CONCAT44(local_158._4_4_,fVar15);
  local_160 = 0;
  local_168 = &DAT_18086b370;
  local_170 = local_118;
  local_178 = -NAN;
  local_134 = uVar8;
  FUN_1804ea5f0(lVar3,lVar2,uVar10,&local_138);
}



