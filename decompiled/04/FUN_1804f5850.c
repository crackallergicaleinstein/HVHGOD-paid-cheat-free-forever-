// FUN_1804f5850 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804f5850 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804f5850(undefined8 param_1,int param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  longlong *plVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined *puVar11;
  ulonglong uVar12;
  float fVar13;
  undefined1 auVar14 [64];
  undefined1 auVar15 [64];
  float fVar16;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined1 local_a0 [12];
  float fStack_94;
  undefined1 local_90 [12];
  float fStack_84;
  char local_80;
  char local_7f [7];
  float local_78;
  float fStack_74;
  float local_70;
  float fStack_6c;
  ulonglong local_68;
  
  lVar10 = DAT_180bb8ae8;
  local_68 = DAT_1808d5f00 ^ (ulonglong)auStack_e8;
  *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
  plVar3 = *(longlong **)(lVar10 + 0x14d0);
  if (*(char *)((longlong)plVar3 + 0xd1) == '\0') {
    lVar9 = lVar10;
    local_a8 = param_3;
    iVar7 = FUN_1804b0a90(param_1,0,
                          *(undefined4 *)(plVar3[0x22] + -4 + (longlong)(int)plVar3[0x21] * 4));
    if (*(int *)(*plVar3 + 0x1534) == iVar7) {
      FUN_1804cf810(iVar7,0xb,param_1);
      lVar9 = DAT_180bb8ae8;
    }
    local_78 = *(float *)(plVar3 + 0x23);
    fStack_6c = local_a8._4_4_ + *(float *)((longlong)plVar3 + 0x11c);
    auVar14 = ZEXT464(0xbf800000);
    fStack_74 = *(float *)((longlong)plVar3 + 0x11c);
    local_70 = local_78 + (float)local_a8;
    if (local_a8._4_4_ <
        *(float *)(lVar9 + 0xcc8) + *(float *)(lVar9 + 0xcc8) + *(float *)(lVar9 + 0x11e0)) {
      uVar12 = auVar14._0_8_;
    }
    else {
      uVar12 = (ulonglong)*(uint *)(lVar10 + 0xcc8);
    }
    fVar13 = local_a8._4_4_;
    fVar16 = (float)local_a8;
    FUN_1804c6420(&local_a8,uVar12);
    cVar6 = FUN_1804c6190(&local_78,iVar7,0,0);
    if (cVar6 != '\0') {
      local_c8 = 0x10;
      FUN_1804f4d40(&local_78,iVar7,&local_80,local_7f);
      if ((local_7f[0] == '\0') || (local_80 == '\0')) {
        lVar9 = (ulonglong)(local_80 != '\0') + 0x16;
      }
      else {
        lVar9 = 0x18;
      }
      auVar1 = *(undefined1 (*) [16])(DAT_180bb8ae8 + 0xc78 + (lVar9 + 0x15) * 0x10);
      auVar2 = *(undefined1 (*) [16])(DAT_180bb8ae8 + 0xdc8);
      auVar4 = vshufps_avx(auVar1,auVar1,0xff);
      auVar5 = vshufps_avx(auVar2,auVar2,0xff);
      local_a0 = auVar1._0_12_;
      fStack_94 = auVar4._0_4_ * *(float *)(DAT_180bb8ae8 + 0xc84);
      local_90 = auVar2._0_12_;
      fStack_84 = auVar5._0_4_ * *(float *)(DAT_180bb8ae8 + 0xc84);
      FUN_1804b4250(&local_78,iVar7,0,auVar14._0_8_);
      uVar8 = FUN_1804b1120(local_a0);
      local_c8 = *(undefined4 *)(lVar10 + 0xccc);
      FUN_1804b3f60(CONCAT44(fStack_74,local_78),CONCAT44(fStack_6c,local_70),uVar8,1);
      auVar1 = vmaxss_avx(ZEXT816(0),ZEXT416((uint)((fVar16 - *(float *)(lVar10 + 0x11e0)) * 0.5)));
      auVar15 = ZEXT464((uint)(auVar1._0_4_ + local_78));
      auVar1 = vmaxss_avx(ZEXT816(0),ZEXT416((uint)((fVar13 - *(float *)(lVar10 + 0x11e0)) * 0.5)));
      auVar14 = ZEXT464((uint)(auVar1._0_4_ + fStack_74));
      puVar11 = &DAT_1807be518;
      lVar10 = DAT_180bb8ae8;
      uVar8 = FUN_1804b1120(auVar1._0_8_);
      local_b0 = *(undefined4 *)(lVar10 + 0xdb8);
      local_b8 = *(undefined8 *)(lVar10 + 0xdb0);
      local_c0 = 0x3f800000;
      local_c8 = *(undefined4 *)(puVar11 + (longlong)param_2 * 8 + 4);
      auVar1 = vunpcklps_avx(auVar15._0_16_,auVar14._0_16_);
      FUN_1804eadd0(plVar3[0x59],auVar1._0_8_,uVar8,*(undefined4 *)(puVar11 + (longlong)param_2 * 8)
                   );
    }
  }
}



