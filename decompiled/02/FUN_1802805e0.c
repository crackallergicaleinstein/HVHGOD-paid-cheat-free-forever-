// FUN_1802805e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802805e0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802805e0(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  undefined1 auVar1 [16];
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  undefined8 unaff_XMM6_Qa;
  undefined8 uVar8;
  undefined8 unaff_XMM6_Qb;
  undefined1 auVar9 [64];
  undefined8 uVar10;
  undefined1 auVar11 [64];
  undefined8 local_a8;
  longlong local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 local_38;
  undefined8 uStack_30;
  
  if (DAT_180b8e2b0 != '\0') {
    iVar2 = FUN_1805f68d0(&DAT_180b8e260);
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_180b8e2ac == 0x7fffffff) {
      DAT_180b8e2ac = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    local_88 = _DAT_180b8e220;
    uStack_80 = uRam0000000180b8e228;
    uStack_78 = uRam0000000180b8e230;
    uStack_70 = uRam0000000180b8e238;
    local_68 = _DAT_180b8e240;
    uStack_60 = uRam0000000180b8e248;
    uStack_58 = uRam0000000180b8e250;
    uStack_50 = uRam0000000180b8e258;
    uVar6 = FUN_1805f68fc(&DAT_180b8e260);
    FUN_180419d90(uVar6,&local_a8,param_3 + 0x38,&local_88);
    auVar11 = ZEXT464((uint)(float)local_a8);
    if ((float)local_a8 != 57005.0) {
      local_38 = unaff_XMM6_Qa;
      uStack_30 = unaff_XMM6_Qb;
      auVar9 = ZEXT464((uint)local_a8._4_4_);
      if (local_a8._4_4_ != 57005.0) {
        uVar6 = 0;
        if (*(char *)(param_4 + 0x160) == '\0') {
          puVar3 = (undefined8 *)0x0;
        }
        else {
          fVar5 = (float)FUN_18027fb30(*(undefined4 *)(param_3 + 0x44));
          fVar5 = ABS(fVar5 * 0.35 * 40.0);
          auVar1 = vroundps_avx(ZEXT416((uint)fVar5),0);
          vcmpss_avx(ZEXT416((uint)(fVar5 - auVar1._0_4_)),ZEXT416(0x3f000000),0);
          puVar3 = (undefined8 *)FUN_1803db960(auVar1._0_8_,*(undefined4 *)(param_3 + 0x10));
        }
        uVar10 = auVar11._0_8_;
        uVar8 = auVar9._0_8_;
        puVar4 = &local_a8;
        local_a8 = DAT_180b90858;
        if (DAT_180b90858 == 0) {
          puVar4 = &DAT_180bbade0;
        }
        if (DAT_180bbadd0 == DAT_180bbadd8) {
          FUN_1801b6250(&DAT_180bbadc8);
          uVar10 = auVar11._0_8_;
          uVar8 = auVar9._0_8_;
        }
        else {
          *DAT_180bbadd0 = *puVar4;
          DAT_180bbadd0 = DAT_180bbadd0 + 1;
        }
        fVar5 = 0.0;
        fVar7 = 0.0;
        if (puVar3 == (undefined8 *)0x0) {
          local_a0 = 0;
          local_a8 = 0;
        }
        else {
          local_a8 = puVar3[1];
          fVar5 = (float)*(int *)((longlong)puVar3 + 0x24);
          fVar7 = (float)*(int *)(puVar3 + 4);
          uVar6 = *puVar3;
          local_a0 = puVar3[2] - local_a8;
        }
        local_98 = param_3 + 0x18;
        if (0xf < *(ulonglong *)(param_3 + 0x30)) {
          local_98 = *(longlong *)(param_3 + 0x18);
        }
        local_90 = *(undefined8 *)(param_3 + 0x28);
        FUN_180282240(param_2,uVar10,uVar8,param_4,&local_98,uVar6,fVar7,fVar5,
                      *(undefined4 *)(param_3 + 0x44),&local_a8,0x3f800000);
        if (1 < (ulonglong)((longlong)DAT_180bbadd0 - DAT_180bbadc8 >> 3)) {
          DAT_180bbadd0 = DAT_180bbadd0 + -1;
        }
      }
    }
  }
  return;
}



