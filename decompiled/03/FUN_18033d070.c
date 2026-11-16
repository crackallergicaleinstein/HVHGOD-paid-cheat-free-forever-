// FUN_18033d070 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18033d070 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18033d070(longlong param_1,undefined8 param_2,char param_3,undefined8 param_4,uint *param_5
                  )

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 uVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined4 uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  float *pfVar10;
  uint *puVar11;
  uint *puVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_108 [32];
  undefined1 *local_e8;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  float local_98 [6];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  ulonglong local_68;
  
  local_68 = DAT_1808d5f00 ^ (ulonglong)auStack_108;
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 1;
  puVar11 = (uint *)0x0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    puVar11 = (uint *)(*(longlong *)(param_1 + 0x40) + 0x10);
  }
  if (puVar11 != (uint *)0x0) {
    uVar2 = *(ulonglong *)(param_1 + 0x60);
    uVar8 = uVar2 & 0xfffffffffffff1e1;
    *(ulonglong *)(param_1 + 0x60) = uVar8;
    if (param_3 != '\0') {
      *(ulonglong *)(param_1 + 0x60) = uVar8 | 4;
    }
    if (DAT_180bbec88 == '\0') {
      puVar9 = (undefined8 *)FUN_18030a970(local_98);
      local_80 = *puVar9;
      uStack_78 = puVar9[1];
      local_70 = *(undefined4 *)(puVar9 + 2);
    }
    else {
      local_70 = DAT_1808e3e10;
      local_80 = _DAT_1808e3e00;
      uStack_78 = uRam00000001808e3e08;
    }
    lVar3 = *(longlong *)(puVar11 + 0xc);
    uVar7 = DAT_180b0dfc8._4_4_;
    if ((lVar3 != 0) && (lVar3 != -0x10)) {
      uVar7 = *(undefined4 *)(lVar3 + 0x1c);
    }
    local_d8 = ZEXT816(0);
    local_c8 = ZEXT816(0);
    auVar6 = vunpcklps_avx(ZEXT416(*param_5),ZEXT416(param_5[1]));
    local_e8 = local_d8;
    local_b8 = local_d8;
    local_a8 = local_c8;
    FUN_180309df0(auVar6._0_8_,param_4,uVar7,&local_80);
    FUN_18034c990(puVar11,param_2,local_d8);
    fVar13 = 0.0;
    pfVar10 = (float *)local_d8;
    fVar14 = 0.0;
    fVar15 = 0.0;
    do {
      fVar5 = ABS(*pfVar10) + ABS(pfVar10[1]);
      if (fVar13 < fVar5) {
        fVar13 = fVar5;
        fVar14 = *pfVar10;
        fVar15 = pfVar10[1];
      }
      pfVar10 = pfVar10 + 2;
    } while (pfVar10 != local_98);
    if (fVar14 <= 0.001) {
      if (fVar14 < -0.001) {
        *(ulonglong *)(param_1 + 0x60) = *(ulonglong *)(param_1 + 0x60) | 0x10;
      }
    }
    else {
      *(ulonglong *)(param_1 + 0x60) = *(ulonglong *)(param_1 + 0x60) | 8;
    }
    if (fVar15 <= 0.001) {
      if (fVar15 < -0.001) {
        *(ulonglong *)(param_1 + 0x60) = *(ulonglong *)(param_1 + 0x60) | 0x400;
      }
    }
    else {
      *(ulonglong *)(param_1 + 0x60) = *(ulonglong *)(param_1 + 0x60) | 0x200;
    }
    *(ulonglong *)(param_1 + 0x70) = *(ulonglong *)(param_1 + 0x70) & 0xfffffffffffff1e1;
    *(ulonglong *)(param_1 + 0x68) =
         *(ulonglong *)(param_1 + 0x68) |
         (ulonglong)(((uint)uVar2 ^ (uint)*(undefined8 *)(param_1 + 0x60)) & 0xe1e);
    puVar12 = (uint *)0x0;
    if (*(longlong *)(puVar11 + 10) != 0) {
      puVar12 = (uint *)(*(longlong *)(puVar11 + 10) + 0x10);
    }
    if (puVar12 != (uint *)0x0) {
      *puVar11 = *puVar11 | 2;
      uVar4 = *(undefined8 *)(param_1 + 0x60);
      *puVar12 = *puVar12 | 1;
      uVar1 = *puVar12;
      *(undefined8 *)(puVar12 + 2) = uVar4;
      uVar4 = *(undefined8 *)(param_1 + 0x68);
      *puVar12 = uVar1 | 2;
      *(undefined8 *)(puVar12 + 4) = uVar4;
      uVar4 = *(undefined8 *)(param_1 + 0x70);
      *puVar12 = uVar1 | 6;
      *(undefined8 *)(puVar12 + 6) = uVar4;
    }
  }
}



