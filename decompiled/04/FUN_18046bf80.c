// FUN_18046bf80 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18046bf80 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18046bf80(longlong *param_1)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  char cVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [64];
  undefined1 auStack_108 [32];
  undefined *local_e8;
  undefined8 *local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [16];
  undefined1 local_b8;
  uint7 uStack_b7;
  undefined8 uStack_b0;
  undefined ***local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  uint local_48 [4];
  undefined **local_38;
  char *local_30;
  ulonglong local_28;
  
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_108;
  FUN_180488a80("Placement",&DAT_18082a298);
  local_30 = (char *)0x4;
  local_d8 = 0;
  auVar4._12_4_ = 0;
  auVar4._0_12_ = ZEXT812(0);
  uStack_d0 = 0;
  auStack_c8 = ZEXT816(0);
  local_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  auVar4 = vunpcklps_avx(auVar4 << 0x20,auVar4 << 0x20);
  local_38 = &PTR_DAT_18077f368;
  local_e0 = &local_88;
  local_b8 = 0;
  uStack_b0 = 0;
  local_68 = (ulonglong)uStack_b7 << 8;
  local_48[0] = (uint)*(byte *)(*param_1 + 1);
  local_e8 = &DAT_18082a298;
  uStack_60 = 0;
  local_58 = auVar4._0_8_;
  auVar5 = ZEXT1264(ZEXT812(0)) << 0x20;
  cVar3 = FUN_18048d220("Position",local_48,&local_38,1);
  auVar4 = auVar5._0_16_;
  if (cVar3 != '\0') {
    cVar3 = (char)local_48[0];
    if (cVar3 != *(char *)(*param_1 + 1)) {
      lVar1 = param_1[1];
      auVar2 = ZEXT416(0);
      if (*(char *)(lVar1 + 1) == cVar3) {
        auVar2 = vmaxss_avx(auVar4,ZEXT416(*(uint *)(lVar1 + 4)));
      }
      if (*(char *)(lVar1 + 0x9d) == cVar3) {
        auVar2 = vmaxss_avx(auVar2,ZEXT416(*(uint *)(lVar1 + 0xa0)));
      }
      if (*(char *)(lVar1 + 0x139) == cVar3) {
        auVar2 = vmaxss_avx(auVar2,ZEXT416(*(uint *)(lVar1 + 0x13c)));
      }
      if (*(char *)(lVar1 + 0x1d5) == cVar3) {
        auVar2 = vmaxss_avx(auVar2,ZEXT416(*(uint *)(lVar1 + 0x1d8)));
      }
      if (*(char *)(lVar1 + 0x271) == cVar3) {
        auVar2 = vmaxss_avx(auVar2,ZEXT416(*(uint *)(lVar1 + 0x274)));
      }
      if (*(char *)(lVar1 + 0x30d) == cVar3) {
        auVar2 = vmaxss_avx(auVar2,ZEXT416(*(uint *)(lVar1 + 0x310)));
      }
      if (*(char *)(lVar1 + 0x3a9) == cVar3) {
        auVar2 = vmaxss_avx(auVar2,ZEXT416(*(uint *)(lVar1 + 0x3ac)));
      }
      if (*(char *)(lVar1 + 0x445) == cVar3) {
        auVar2 = vmaxss_avx(auVar2,ZEXT416(*(uint *)(lVar1 + 0x448)));
      }
      if (*(char *)(lVar1 + 0x4e1) == cVar3) {
        auVar2 = vmaxss_avx(auVar2,ZEXT416(*(uint *)(lVar1 + 0x4e4)));
      }
      if (*(char *)(lVar1 + 0x57d) == cVar3) {
        auVar2 = vmaxss_avx(auVar2,ZEXT416(*(uint *)(lVar1 + 0x580)));
      }
      if (*(char *)(lVar1 + 0x619) == cVar3) {
        auVar2 = vmaxss_avx(auVar2,ZEXT416(*(uint *)(lVar1 + 0x61c)));
      }
      if (*(char *)(lVar1 + 0x6b5) == cVar3) {
        auVar2 = vmaxss_avx(auVar2,ZEXT416(*(uint *)(lVar1 + 0x6b8)));
      }
      if (*(char *)(lVar1 + 0x751) == cVar3) {
        auVar2 = vmaxss_avx(auVar2,ZEXT416(*(uint *)(lVar1 + 0x754)));
      }
      if (*(char *)(lVar1 + 0x7ed) == cVar3) {
        auVar2 = vmaxss_avx(auVar2,ZEXT416(*(uint *)(lVar1 + 0x7f0)));
      }
      if (*(char *)(lVar1 + 0x889) == cVar3) {
        auVar2 = vmaxss_avx(auVar2,ZEXT416(*(uint *)(lVar1 + 0x88c)));
      }
      if (*(char *)(lVar1 + 0x925) == cVar3) {
        auVar2 = vmaxss_avx(auVar2,ZEXT416(*(uint *)(lVar1 + 0x928)));
      }
      if (*(char *)(lVar1 + 0x9c1) == cVar3) {
        auVar2 = vmaxss_avx(auVar2,ZEXT416(*(uint *)(lVar1 + 0x9c4)));
      }
      if (*(char *)(lVar1 + 0xa5d) == cVar3) {
        auVar2 = vmaxss_avx(auVar2,ZEXT416(*(uint *)(lVar1 + 0xa60)));
      }
      if (*(char *)(lVar1 + 0xaf9) == cVar3) {
        auVar2 = vmaxss_avx(auVar2,ZEXT416(*(uint *)(lVar1 + 0xafc)));
      }
      if (*(char *)(lVar1 + 0xb95) == cVar3) {
        auVar2 = vmaxss_avx(auVar2,ZEXT416(*(uint *)(lVar1 + 0xb98)));
      }
      if (*(char *)(lVar1 + 0xc31) == cVar3) {
        auVar2 = vmaxss_avx(auVar2,ZEXT416(*(uint *)(lVar1 + 0xc34)));
      }
      if (*(char *)(lVar1 + 0xccd) == cVar3) {
        auVar2 = vmaxss_avx(auVar2,ZEXT416(*(uint *)(lVar1 + 0xcd0)));
      }
      if (*(char *)(lVar1 + 0xd69) == cVar3) {
        auVar2 = vmaxss_avx(auVar2,ZEXT416(*(uint *)(lVar1 + 0xd6c)));
      }
      if (*(char *)(lVar1 + 0xe05) == cVar3) {
        auVar2 = vmaxss_avx(auVar2,ZEXT416(*(uint *)(lVar1 + 0xe08)));
      }
      if (*(char *)(lVar1 + 0xea1) == cVar3) {
        auVar2 = vmaxss_avx(auVar2,ZEXT416(*(uint *)(lVar1 + 0xea4)));
      }
      if (*(char *)(lVar1 + 0xf3d) == cVar3) {
        auVar2 = vmaxss_avx(auVar2,ZEXT416(*(uint *)(lVar1 + 0xf40)));
      }
      if (*(char *)(lVar1 + 0xfd9) == cVar3) {
        auVar2 = vmaxss_avx(auVar2,ZEXT416(*(uint *)(lVar1 + 0xfdc)));
      }
      if (*(char *)(lVar1 + 0x1075) == cVar3) {
        auVar2 = vmaxss_avx(auVar2,ZEXT416(*(uint *)(lVar1 + 0x1078)));
      }
      if (*(char *)(lVar1 + 0x1111) == cVar3) {
        auVar2 = vmaxss_avx(auVar2,ZEXT416(*(uint *)(lVar1 + 0x1114)));
      }
      *(char *)(*param_1 + 1) = cVar3;
      *(float *)(*param_1 + 4) = auVar2._0_4_ + 1.0;
    }
  }
  if ((*(char *)(param_1[2] + 0xc) != '\0') && ((*(char *)(param_1[2] + 0xc) - 1U & 0xfd) != 0)) {
    cVar3 = *(char *)(*param_1 + 1);
    if ((cVar3 == '\x01') || (cVar3 == '\x03')) {
      local_d8 = 0;
      local_38 = (undefined **)0x18082ab10;
      uStack_d0 = 0;
      local_30 = "Outer Row";
      local_98 = &local_38;
      local_e0 = &local_88;
      auStack_c8 = ZEXT816(0);
      local_88 = 0;
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_70 = 0;
      auVar4 = vunpcklps_avx(auVar4,auVar4);
      local_b8 = 1;
      uStack_b0 = 0;
      local_68 = CONCAT71(uStack_b7,1);
      local_e8 = &DAT_18082a240;
      uStack_60 = 0;
      local_58 = auVar4._0_8_;
      local_90 = 2;
      FUN_18048d220(&DAT_18082aaf8,*param_1 + 8,&local_98,1);
    }
  }
  cVar3 = FUN_18048b0e0("Move Up",&DAT_18082a290,1);
  if (cVar3 != '\0') {
    FUN_18046b5c0(param_1[3],*(undefined4 *)(param_1[4] + 0x6e0c),0xffffffff);
  }
  cVar3 = FUN_18048b0e0("Move Down",&DAT_18082a26c,1);
  if (cVar3 != '\0') {
    FUN_18046b5c0(param_1[3],*(undefined4 *)(param_1[4] + 0x6e0c),1);
  }
}



