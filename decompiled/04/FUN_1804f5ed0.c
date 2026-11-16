// FUN_1804f5ed0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804f5ed0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804f5ed0(int param_1)

{
  float fVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  longlong lVar9;
  undefined4 uVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined1 auVar13 [16];
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong local_90;
  uint local_88;
  longlong local_78;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  ulonglong local_60;
  
  lVar9 = DAT_180bb8ae8;
  local_60 = DAT_1808d5f00 ^ (ulonglong)auStack_b8;
  uVar12 = (ulonglong)param_1;
  lVar3 = *(longlong *)(DAT_180bb8ae8 + 0x14d0);
  uVar10 = FUN_1804f5e70(lVar3);
  auVar2 = *(undefined1 (*) [16])(lVar3 + 0x228);
  local_88 = 0;
  fVar1 = *(float *)(lVar3 + 0xc0 + (uVar12 ^ 1) * 4);
  auVar13._0_4_ = (float)(int)(*(float *)(lVar3 + 100) * 0.5 + 0.5);
  auVar13._4_12_ = SUB1612(ZEXT816(0),4);
  if ((*(uint *)(lVar3 + 0x14) >> 10 & 1) == 0) {
    auVar7 = vpcmpeqd_avx(ZEXT416(*(uint *)(lVar3 + 0x14) & 1),SUB6416(ZEXT464(0),0));
    auVar7 = vblendvps_avx(auVar13,ZEXT816(0),auVar7);
    local_6c = auVar7._0_4_;
  }
  else {
    local_6c = (float)(int)(*(float *)(DAT_180bb8ae8 + 0xcd0) * 0.5 + 0.5);
  }
  if (param_1 == 0) {
    local_64 = (*(float *)(lVar3 + 0x2c) + *(float *)(lVar3 + 0x34)) - auVar13._0_4_;
    local_70 = auVar2._0_4_ + auVar13._0_4_;
    auVar7 = vshufps_avx(auVar2,auVar2,0xaa);
    auVar2 = vmaxss_avx(ZEXT416((uint)(*(float *)(lVar3 + 0x2c) + auVar13._0_4_)),
                        ZEXT416((uint)(local_64 - fVar1)));
    local_6c = auVar2._0_4_;
    local_68 = auVar7._0_4_ - auVar13._0_4_;
  }
  else {
    local_68 = (*(float *)(lVar3 + 0x28) + *(float *)(lVar3 + 0x30)) - auVar13._0_4_;
    auVar7 = vshufps_avx(auVar2,auVar2,0x55);
    auVar8 = vshufps_avx(auVar2,auVar2,0xff);
    auVar2 = vmaxss_avx(ZEXT416((uint)*(float *)(lVar3 + 0x28)),ZEXT416((uint)(local_68 - fVar1)));
    local_70 = auVar2._0_4_;
    local_64 = auVar8._0_4_ - auVar13._0_4_;
    local_6c = auVar7._0_4_ + local_6c;
  }
  fVar1 = *(float *)(lVar9 + 0xc98);
  bVar4 = fVar1 + *(float *)(lVar3 + 0x28) < local_70;
  bVar5 = (*(float *)(lVar3 + 0x28) + *(float *)(lVar3 + 0x30)) - fVar1 <= local_68;
  bVar6 = fVar1 + *(float *)(lVar3 + 0x2c) < local_6c;
  if ((bVar6) || (bVar4)) {
    uVar11 = 0;
    if (!bVar6) goto LAB_1804f607a;
  }
  else {
    uVar11 = 0x10;
LAB_1804f607a:
    if (bVar5) {
      local_88 = 0x20;
    }
  }
  local_88 = local_88 | uVar11;
  if ((*(float *)(lVar3 + 0x2c) + *(float *)(lVar3 + 0x34)) - fVar1 <= local_64) {
    if (!bVar4) {
      local_88 = local_88 | 0x40;
    }
    uVar11 = 0x180;
    if (bVar5) goto LAB_1804f60a8;
  }
  uVar11 = 0x100;
LAB_1804f60a8:
  local_78 = (longlong)*(float *)(lVar3 + 0x98 + uVar12 * 4);
  fVar1 = *(float *)(lVar3 + 0x58 + uVar12 * 4);
  local_88 = local_88 | uVar11;
  local_90 = (longlong)(fVar1 + fVar1 + *(float *)(lVar3 + 0x40 + uVar12 * 4));
  local_98 = (longlong)
             (*(float *)(lVar3 + 0x230 + uVar12 * 4) - *(float *)(lVar3 + 0x228 + uVar12 * 4));
  FUN_1804f6160(&local_70,uVar10,param_1,&local_78);
  *(float *)(lVar3 + 0x98 + uVar12 * 4) = (float)local_78;
}



