// FUN_1805f6fd0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805f6fd0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1805f6fd0(longlong param_1,ulonglong param_2,byte *param_3,longlong param_4)

{
  byte *pbVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [32];
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined1 extraout_var [56];
  undefined1 auVar10 [64];
  undefined1 auVar11 [32];
  undefined1 auStack_198 [56];
  undefined1 local_160 [32];
  char local_140 [256];
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_198;
  iVar5 = FUN_1805f7740(param_2,param_4,
                        CONCAT31((uint3)(DAT_1808d5f64 >> 0xd),(char)(DAT_1808d5f64 >> 5)) &
                        0xffffff01);
  if (iVar5 == 2) {
    auVar10._0_8_ = FUN_1805f75e0(param_3,param_4);
    auVar10._8_56_ = extraout_var;
    uVar6 = 0;
    local_160 = auVar10._0_32_;
    uVar9 = param_2 & 0xfffffffffffffff8;
    if (uVar9 != 0) {
      do {
        auVar2._8_8_ = 0;
        auVar2._0_8_ = *(ulonglong *)(uVar6 + param_1);
        auVar4 = vpmovzxbd_avx2(auVar2);
        auVar11 = vpsrld_avx2(auVar4,5);
        auVar11 = vpermd_avx2(auVar11,local_160);
        auVar4 = vpandn_avx2(auVar4,_DAT_18068c060);
        auVar4 = vpsllvd_avx2(auVar11,auVar4);
        uVar7 = vmovmskps_avx(auVar4);
        if (uVar7 != 0) {
          for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
          }
        }
        uVar6 = uVar6 + 8;
      } while (uVar6 != uVar9);
    }
    uVar7 = (uint)param_2 & 7;
    if ((param_2 & 7) != 0) {
      FUN_18063aed0(&local_40,uVar9 + param_1,uVar7);
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_40;
      auVar11 = vpmovzxbd_avx2(auVar3);
      auVar4 = vpandn_avx2(auVar11,_DAT_18068c060);
      auVar11 = vpsrld_avx2(auVar11,5);
      auVar11 = vpermd_avx2(auVar11,local_160);
      auVar4 = vpsllvd_avx2(auVar11,auVar4);
      uVar8 = vmovmskps_avx(auVar4);
      uVar8 = uVar8 & (1 << (sbyte)uVar7) - 1U;
      if (uVar8 != 0) {
        for (; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
        }
      }
    }
  }
  else if (iVar5 == 1) {
    FUN_18063ab10(local_140,0,0x100);
    pbVar1 = param_3 + param_4;
    for (; param_3 != pbVar1; param_3 = param_3 + 1) {
      local_140[*param_3] = '\x01';
    }
    uVar6 = 0;
    if (param_2 != 0) {
      do {
        if (local_140[*(byte *)(param_1 + uVar6)] != '\0') {
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 != param_2);
    }
  }
  else {
    FUN_1805f73f0(param_1,param_2,param_3,param_4);
  }
                    /* WARNING: Read-only address (ram,0x00018068c060) is written */
}



