// FUN_1804f54a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804f54a0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804f54a0(char *param_1,undefined8 *param_2)

{
  char *pcVar1;
  float fVar2;
  undefined1 auVar3 [16];
  longlong *plVar4;
  undefined1 auVar5 [16];
  longlong lVar6;
  char cVar7;
  int iVar8;
  undefined4 uVar9;
  char *pcVar10;
  longlong lVar11;
  float fVar12;
  undefined1 auVar13 [64];
  undefined1 auVar14 [64];
  float fVar15;
  undefined1 auStack_108 [32];
  float *local_e8;
  char *local_e0;
  float *local_d8;
  char *local_d0;
  undefined8 local_c8;
  undefined4 local_b8;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  undefined1 local_98 [8];
  undefined8 uStack_90;
  char local_88;
  char local_87 [7];
  float local_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  ulonglong local_70;
  
  lVar6 = DAT_180bb8ae8;
  local_70 = DAT_1808d5f00 ^ (ulonglong)auStack_108;
  *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
  plVar4 = *(longlong **)(lVar6 + 0x14d0);
  if (*(char *)((longlong)plVar4 + 0xd1) == '\0') {
    lVar11 = lVar6;
    iVar8 = FUN_1804b0a90(param_1,0,
                          *(undefined4 *)(plVar4[0x22] + -4 + (longlong)(int)plVar4[0x21] * 4));
    if (*(int *)(*plVar4 + 0x1534) == iVar8) {
      FUN_1804cf810(iVar8,0xb,param_1);
      lVar11 = DAT_180bb8ae8;
    }
    pcVar10 = param_1;
    if (param_1 != (char *)0xffffffffffffffff) {
      while (*pcVar10 != '\0') {
        pcVar1 = pcVar10 + 1;
        if (((*pcVar10 == '#') && (*pcVar1 == '#')) ||
           (pcVar10 = pcVar1, pcVar1 == (char *)0xffffffffffffffff)) break;
      }
    }
    auVar14 = ZEXT464(0xbf800000);
    if (param_1 == pcVar10) {
      local_a0 = 0.0;
      local_9c = *(float *)(lVar11 + 0x11e0);
    }
    else {
      local_b8 = 0;
      local_c8 = 0;
      local_e8 = (float *)CONCAT44(local_e8._4_4_,0xbf800000);
      local_e0 = param_1;
      local_d8 = (float *)pcVar10;
      local_d0 = pcVar10;
      FUN_1804ea040(&local_a8,*(undefined8 *)(lVar11 + 0x11d0),*(float *)(lVar11 + 0x11e0),
                    0x7f7fffff);
      local_a0 = (float)(int)((uint)((float)(int)local_a8 < local_a8) + (int)local_a8);
      local_9c = local_a4;
    }
    fVar2 = *(float *)(lVar6 + 0xcc8);
    auVar13 = ZEXT464((uint)fVar2);
    fVar15 = *(float *)(plVar4 + 0x23);
    fVar12 = *(float *)((longlong)plVar4 + 0x11c);
    if (fVar2 < *(float *)(plVar4 + 0x2a)) {
      fVar12 = fVar12 + (*(float *)(plVar4 + 0x2a) - fVar2);
    }
    FUN_1804c67b0(&local_a8,*param_2,
                  *(float *)(lVar6 + 0xcc4) + *(float *)(lVar6 + 0xcc4) + local_a0,
                  fVar2 + fVar2 + local_9c);
    local_78 = fVar15 + local_a8;
    fStack_74 = fVar12 + local_a4;
    local_80 = fVar15;
    fStack_7c = fVar12;
    FUN_1804c6420(&local_a8,auVar13._0_8_);
    cVar7 = FUN_1804c6190(&local_80,iVar8,0,0);
    if (cVar7 != '\0') {
      local_e8._0_4_ = 0x8000;
      FUN_1804f4d40(&local_80,iVar8,&local_88,local_87);
      if ((local_87[0] == '\0') || (local_88 == '\0')) {
        lVar11 = (ulonglong)(local_88 != '\0') + 0x16;
      }
      else {
        lVar11 = 0x18;
      }
      auVar3 = *(undefined1 (*) [16])(DAT_180bb8ae8 + 0xc78 + (lVar11 + 0x15) * 0x10);
      auVar5 = vshufps_avx(auVar3,auVar3,0xff);
      _local_98 = auVar3._0_12_;
      uStack_90._4_4_ = auVar5._0_4_ * *(float *)(DAT_180bb8ae8 + 0xc84);
      FUN_1804b4250(&local_80,iVar8,0,auVar14._0_8_);
      uVar9 = FUN_1804b1120(local_98);
      local_e8 = (float *)CONCAT44(local_e8._4_4_,*(undefined4 *)(lVar6 + 0xccc));
      FUN_1804b3f60(CONCAT44(fStack_7c,local_80),CONCAT44(fStack_74,local_78),uVar9,1);
      lVar11 = DAT_180bb8ae8;
      if (*(char *)(lVar6 + 0x2840) != '\0') {
        *(undefined **)(DAT_180bb8ae8 + 0x2868) = &DAT_1807d30f8;
        *(undefined **)(lVar11 + 0x2870) = &DAT_1807d32dc;
      }
      local_a8 = local_78 - *(float *)(lVar6 + 0xcc4);
      local_d8 = &local_80;
      local_e0 = (char *)(lVar6 + 0xd70);
      local_a4 = fStack_74 - *(float *)(lVar6 + 0xcc8);
      local_e8 = &local_a0;
      local_98._4_4_ = *(float *)(lVar6 + 0xcc8) + fStack_7c;
      local_98._0_4_ = *(float *)(lVar6 + 0xcc4) + local_80;
      FUN_1804b3950(local_98,&local_a8,param_1,pcVar10);
    }
  }
}



