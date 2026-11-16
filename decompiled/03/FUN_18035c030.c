// FUN_18035c030 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18035c030 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_18035c030(longlong *param_1,undefined8 param_2,char param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined6 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 in_ZMM1 [64];
  undefined1 auVar16 [64];
  undefined1 auStack_1088 [32];
  ulonglong local_1068;
  undefined1 local_1060;
  undefined8 local_1058;
  ulonglong local_1050;
  undefined1 local_1048;
  undefined8 local_1038;
  ulonglong uStack_1030;
  undefined8 local_eb8;
  ulonglong local_28;
  
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_1088;
  auVar16 = ZEXT1664(in_ZMM1._0_16_);
  FUN_18063ab10(&local_1038,0,0x180);
  FUN_18035d180(&local_1038);
  iVar12 = 0;
  local_eb8 = 0;
  puVar8 = &local_1038;
  lVar10 = 3;
  puVar9 = (undefined8 *)*param_1;
  do {
    uVar4 = puVar8[1];
    uVar5 = puVar8[2];
    uVar6 = puVar8[3];
    *puVar9 = *puVar8;
    puVar9[1] = uVar4;
    puVar9[2] = uVar5;
    puVar9[3] = uVar6;
    uVar4 = puVar8[5];
    uVar5 = puVar8[6];
    uVar6 = puVar8[7];
    puVar9[4] = puVar8[4];
    puVar9[5] = uVar4;
    puVar9[6] = uVar5;
    puVar9[7] = uVar6;
    uVar4 = puVar8[9];
    uVar5 = puVar8[10];
    uVar6 = puVar8[0xb];
    puVar9[8] = puVar8[8];
    puVar9[9] = uVar4;
    puVar9[10] = uVar5;
    puVar9[0xb] = uVar6;
    *(undefined1 (*) [16])(puVar9 + 0xc) = *(undefined1 (*) [16])(puVar8 + 0xc);
    puVar1 = puVar9 + 0x10;
    *(undefined1 (*) [16])(puVar9 + 0xe) = *(undefined1 (*) [16])(puVar8 + 0xe);
    puVar8 = puVar8 + 0x10;
    lVar10 = lVar10 + -1;
    puVar9 = puVar1;
  } while (lVar10 != 0);
  *puVar1 = *puVar8;
  if ((param_3 == '\0') || (*(char *)param_1[1] != '\0')) {
    if (0 < *(int *)param_1[2]) {
      lVar10 = 0;
      do {
        if ((*(char *)(param_1[3] + 4 + lVar10) == '\0') &&
           (((param_3 == '\0' || (iVar12 <= *(int *)param_1[4])) ||
            (*(int *)param_1[5] + *(int *)param_1[4] <= iVar12)))) {
          local_1058 = (char *)CONCAT44(local_1058._4_4_,iVar12);
          uVar2 = *(uint *)(param_1[3] + lVar10);
          local_1050 = local_1050 & 0xffffffffffff0000;
          lVar3 = *param_1;
          lVar11 = *(longlong *)(lVar3 + 0x180);
          *(longlong *)(lVar3 + 0x180) = lVar11 + 1;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = local_1058;
          auVar13 = vinsertps_avx(auVar13,ZEXT416(uVar2),0x10);
          local_1058 = auVar13._0_8_;
          *(char **)(lVar3 + lVar11 * 0xc) = local_1058;
          *(undefined4 *)(lVar3 + 8 + lVar11 * 0xc) = (undefined4)local_1050;
        }
        iVar12 = iVar12 + 1;
        lVar10 = lVar10 + 8;
      } while (iVar12 < *(int *)param_1[2]);
    }
    if (0.0 <= auVar16._0_4_) {
      lVar10 = *param_1;
      lVar3 = *(longlong *)(lVar10 + 0x180);
      if (0x20 < lVar3 + 3U) {
      }
      local_1058 = (char *)CONCAT44(local_1058._4_4_,0xffffffff);
      uVar7 = local_1050._2_6_;
      local_1050 = CONCAT62(local_1050._2_6_,0x102);
      *(longlong *)(lVar10 + 0x180) = lVar3 + 1;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = local_1058;
      auVar13 = vinsertps_avx(auVar14,ZEXT816(0),0x10);
      *(longlong *)(lVar10 + lVar3 * 0xc) = auVar13._0_8_;
      *(undefined4 *)(lVar10 + 8 + lVar3 * 0xc) = (undefined4)local_1050;
      local_1058._4_4_ = auVar13._4_4_;
      local_1058 = (char *)CONCAT44(local_1058._4_4_,0xffffffff);
      local_1050 = CONCAT62(uVar7,2);
      lVar10 = *param_1;
      lVar3 = *(longlong *)(lVar10 + 0x180);
      *(longlong *)(lVar10 + 0x180) = lVar3 + 1;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = local_1058;
      auVar13 = vinsertps_avx(auVar15,auVar16._0_16_,0x10);
      local_1058 = auVar13._0_8_;
      *(char **)(lVar10 + lVar3 * 0xc) = local_1058;
      *(undefined4 *)(lVar10 + 8 + lVar3 * 0xc) = (undefined4)local_1050;
    }
    lVar3 = *param_1;
    lVar10 = *(longlong *)(lVar3 + 0x180) * 0xc;
    lVar11 = lVar10 / 6 + (lVar10 >> 0x3f);
    lVar11 = (lVar11 >> 1) - (lVar11 >> 0x3f);
    if (lVar11 < 0x21) {
      FUN_18035f4f0(lVar3,lVar10 + lVar3);
    }
    else {
      FUN_18035f2f0(&local_1038,lVar11 - lVar11 / 2);
      local_1060 = local_1048;
      local_1068 = uStack_1030;
      FUN_18035f600(lVar3,lVar10 + lVar3,lVar11,local_1038);
      if (0x155 < uStack_1030) {
        if (DAT_180c7df30 == (undefined8 *)0x0) {
          local_1058 = "tier0.dll:g_pMemAlloc";
          local_1050 = 0x15;
          DAT_180c7df30 = (undefined8 *)FUN_180451750(&local_1058);
        }
        (**(code **)(*(longlong *)*DAT_180c7df30 + 0x18))((longlong *)*DAT_180c7df30,local_1038);
      }
    }
  }
}



