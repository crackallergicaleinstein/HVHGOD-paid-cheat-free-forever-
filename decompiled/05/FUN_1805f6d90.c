// FUN_1805f6d90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805f6d90 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1805f6d90(longlong param_1,ulonglong param_2,byte *param_3,longlong param_4)

{
  byte *pbVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [32];
  int iVar5;
  undefined1 auVar6 [32];
  undefined1 extraout_var [56];
  undefined1 auVar7 [64];
  undefined1 auStack_298 [56];
  undefined1 local_260 [32];
  char local_240 [256];
  char local_140 [256];
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_298;
  if ((DAT_1808d5f64 & 4) == 0) {
    FUN_18063ab10(local_140,0,0x100);
    pbVar1 = param_3 + param_4;
    for (; param_3 != pbVar1; param_3 = param_3 + 1) {
      local_140[*param_3] = '\x01';
    }
    do {
      if (param_2 == 0) {
      }
      pbVar1 = (byte *)(param_1 + -1 + param_2);
      param_2 = param_2 - 1;
    } while (local_140[*pbVar1] == '\0');
  }
  else {
    iVar5 = FUN_1805f7740(param_2,param_4,
                          CONCAT31((uint3)(DAT_1808d5f64 >> 0xd),(char)(DAT_1808d5f64 >> 5)) &
                          0xffffff01);
    if (iVar5 == 2) {
      auVar7._0_8_ = FUN_1805f75e0(param_3,param_4);
      auVar7._8_56_ = extraout_var;
      local_260 = auVar7._0_32_;
      do {
        if (param_2 < 8) {
          if ((param_2 & 7) == 0) {
          }
          FUN_18063aed0(&local_40,param_1,(uint)param_2 & 7);
          auVar3._8_8_ = 0;
          auVar3._0_8_ = local_40;
          auVar6 = vpmovzxbd_avx2(auVar3);
          auVar4 = vpandn_avx2(auVar6,_DAT_18068c060);
          auVar6 = vpsrld_avx2(auVar6,5);
          auVar6 = vpermd_avx2(auVar6,local_260);
          auVar4 = vpsllvd_avx2(auVar6,auVar4);
          vmovmskps_avx(auVar4);
        }
        auVar2._8_8_ = 0;
        auVar2._0_8_ = *(ulonglong *)(param_1 + -8 + param_2);
        auVar4 = vpmovzxbd_avx2(auVar2);
        param_2 = param_2 - 8;
        auVar6 = vpsrld_avx2(auVar4,5);
        auVar6 = vpermd_avx2(auVar6,local_260);
        auVar4 = vpandn_avx2(auVar4,_DAT_18068c060);
        auVar4 = vpsllvd_avx2(auVar6,auVar4);
        iVar5 = vmovmskps_avx(auVar4);
      } while (iVar5 == 0);
    }
    else if (iVar5 == 1) {
      FUN_18063ab10(local_240,0,0x100);
      pbVar1 = param_3 + param_4;
      for (; param_3 != pbVar1; param_3 = param_3 + 1) {
        local_240[*param_3] = '\x01';
      }
      do {
        if (param_2 == 0) {
        }
        pbVar1 = (byte *)(param_1 + -1 + param_2);
        param_2 = param_2 - 1;
      } while (local_240[*pbVar1] == '\0');
    }
    else {
      FUN_1805f71d0(param_1,param_2,param_3,param_4);
    }
  }
                    /* WARNING: Read-only address (ram,0x00018068c060) is written */
}



