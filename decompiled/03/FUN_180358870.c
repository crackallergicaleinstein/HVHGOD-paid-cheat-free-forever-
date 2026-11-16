// FUN_180358870 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180358870 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Type propagation algorithm not settling */

void FUN_180358870(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  byte bVar10;
  char cVar11;
  char cVar12;
  undefined1 uVar13;
  short sVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  int *piVar20;
  ULONGLONG UVar21;
  uint *puVar22;
  undefined4 uVar23;
  char *pcVar24;
  int *piVar25;
  uint *puVar26;
  longlong *plVar27;
  char *pcVar28;
  float *pfVar29;
  byte bVar30;
  uint uVar31;
  longlong lVar32;
  undefined4 uVar33;
  int iVar34;
  ulonglong uVar35;
  uint uVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  bool bVar39;
  float fVar40;
  undefined1 extraout_var [56];
  undefined1 extraout_var_00 [56];
  undefined1 extraout_var_01 [56];
  undefined1 extraout_var_02 [56];
  undefined1 extraout_var_03 [56];
  float fVar41;
  undefined1 auVar42 [64];
  undefined1 auVar43 [64];
  float fVar44;
  double dVar45;
  undefined1 auVar46 [64];
  undefined1 auVar47 [64];
  double dVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [64];
  undefined1 auVar51 [64];
  double dVar52;
  undefined1 auVar53 [64];
  undefined1 auVar54 [16];
  undefined1 auVar55 [64];
  undefined1 auVar56 [64];
  undefined1 auVar57 [16];
  undefined1 auVar58 [64];
  undefined1 auStack_4648 [32];
  undefined **local_4628;
  char *local_4620;
  double local_4618;
  double local_4610;
  double local_4608;
  undefined8 local_4600;
  undefined8 local_45f8;
  undefined8 local_45f0;
  uint local_45e8;
  undefined4 local_45e0;
  undefined4 local_45d8;
  undefined4 local_45d0;
  undefined4 local_45c8;
  uint local_45c0;
  int local_45b8;
  double local_45b0;
  undefined4 local_45a8;
  uint local_45a0;
  uint local_4598;
  undefined8 local_4590;
  uint local_4588;
  double local_4580;
  double local_4578;
  double local_4570;
  uint local_4568;
  uint local_4560;
  char local_4558;
  undefined1 local_4550;
  float local_4548;
  undefined4 local_4540;
  undefined4 local_4538;
  int local_4530;
  uint local_4528;
  undefined4 local_4520;
  undefined4 local_4518;
  undefined4 local_4510;
  undefined4 local_4508;
  undefined4 local_4500;
  undefined4 local_44f8;
  undefined4 local_44f0;
  longlong *local_44e8;
  ulonglong local_44e0;
  undefined1 local_44d8;
  undefined4 local_44d0;
  undefined4 local_44c8;
  float local_44c0;
  float local_44b8;
  undefined4 local_44b0;
  undefined4 local_44a8;
  undefined1 local_44a0;
  undefined1 local_4498;
  undefined4 local_4490;
  char local_4488;
  undefined4 local_4480;
  byte local_4478;
  char local_4470;
  char local_4468;
  byte local_4467;
  byte local_4466;
  undefined1 local_4465;
  undefined1 local_4464;
  undefined1 local_4463;
  char local_4462;
  uint local_4460;
  undefined4 local_445c;
  uint local_4458;
  undefined8 local_4450;
  longlong local_4448;
  ulonglong local_4438;
  undefined4 local_4430;
  float local_4428;
  float local_4424;
  uint local_4420;
  int local_441c [5];
  char *local_4408;
  longlong local_4400;
  int *local_43f8;
  uint *local_43f0;
  undefined8 *****local_43e8;
  uint *local_43e0;
  undefined8 *local_43d8;
  undefined4 *local_43d0;
  longlong local_43c8;
  undefined8 *local_43c0;
  float *local_43b8;
  longlong local_43b0;
  longlong local_43a8;
  undefined8 *local_43a0;
  undefined8 *local_4398;
  char *local_4390;
  undefined1 local_4388 [16];
  undefined *local_4378 [7];
  undefined **local_4340;
  undefined8 ***local_4338;
  undefined8 uStack_4330;
  undefined8 uStack_4328;
  undefined8 uStack_4320;
  undefined8 local_4318;
  undefined8 uStack_4310;
  undefined8 uStack_4308;
  undefined8 uStack_4300;
  undefined8 local_42f8;
  undefined8 uStack_42f0;
  undefined8 uStack_42e8;
  undefined8 uStack_42e0;
  undefined8 local_42d8;
  undefined8 uStack_42d0;
  undefined8 uStack_42c8;
  undefined8 uStack_42c0;
  undefined8 local_42b8;
  undefined8 uStack_42b0;
  undefined8 uStack_42a8;
  undefined8 uStack_42a0;
  undefined8 local_4298;
  undefined8 uStack_4290;
  undefined8 local_4288;
  undefined1 local_4278 [16];
  char local_4268;
  char local_4267;
  char local_4266;
  char local_4265;
  char local_4264;
  char local_4263;
  undefined1 local_4262;
  uint local_4260 [2];
  undefined8 local_4258;
  longlong local_4250;
  uint local_4248;
  uint uStack_4244;
  undefined1 local_4240 [4];
  int local_423c;
  uint local_4238;
  char local_4234;
  int local_4230;
  uint local_422c;
  float local_4228;
  float local_4224;
  float local_4220;
  float local_4218 [4];
  undefined8 local_4208;
  undefined4 local_4200;
  undefined4 local_41f8;
  int local_41f4;
  int local_41f0;
  int local_41ec;
  undefined8 local_41e8;
  undefined4 local_41e0;
  undefined4 local_41dc;
  undefined4 local_41d8;
  undefined4 local_41d4;
  undefined4 local_41d0;
  undefined4 local_41cc;
  undefined4 local_41c8;
  undefined4 local_41c4;
  undefined8 local_41c0;
  undefined4 local_41b8;
  uint local_41a8;
  float local_41a4;
  float local_41a0;
  float local_419c;
  undefined8 local_4198;
  undefined4 local_4190;
  undefined4 local_418c;
  float local_4188;
  float local_4184;
  float local_4180;
  undefined4 local_417c;
  float local_4178;
  undefined4 local_4174;
  undefined4 local_4170;
  uint local_416c;
  float local_4168;
  float local_4164;
  float local_4160;
  undefined8 local_415c;
  undefined4 local_4154;
  undefined4 local_4150;
  float local_414c;
  float local_4148;
  float local_4144;
  undefined4 local_4140;
  float local_413c;
  undefined4 local_4138;
  undefined4 local_4134;
  uint local_4128;
  float local_4124;
  float local_4120;
  float local_411c;
  undefined8 local_4118;
  undefined4 local_4110;
  undefined4 local_410c;
  float local_4108;
  float local_4104;
  float local_4100;
  undefined4 local_40fc;
  float local_40f8;
  undefined4 local_40f4;
  undefined4 local_40f0;
  uint local_40ec;
  float local_40e8;
  float local_40e4;
  float local_40e0;
  undefined8 local_40dc;
  undefined4 local_40d4;
  undefined4 local_40d0;
  float local_40cc;
  float local_40c8;
  float local_40c4;
  undefined4 local_40c0;
  float local_40bc;
  undefined4 local_40b8;
  undefined4 local_40b4;
  undefined8 ****local_40a8;
  undefined8 ****local_40a0;
  undefined8 ****local_4098;
  undefined8 ****local_4090;
  uint *local_4088;
  float *local_4080;
  uint *local_4078;
  undefined1 *local_4070;
  undefined8 *local_4068;
  int *local_4060;
  char *local_4058;
  char *local_4050;
  char *local_4048;
  float *local_4040;
  undefined8 ***local_4038;
  undefined8 uStack_4030;
  undefined8 uStack_4028;
  undefined8 uStack_4020;
  undefined8 local_4018;
  undefined8 uStack_4010;
  undefined8 uStack_4008;
  undefined8 uStack_4000;
  undefined8 local_3ff8;
  undefined8 uStack_3ff0;
  undefined8 uStack_3fe8;
  undefined8 uStack_3fe0;
  undefined4 local_3fd8;
  float fStack_3fd4;
  float fStack_3fd0;
  float fStack_3fcc;
  undefined8 uStack_3fc8;
  undefined8 uStack_3fc0;
  undefined8 local_3fb8;
  undefined8 uStack_3fb0;
  undefined8 uStack_3fa8;
  undefined8 uStack_3fa0;
  undefined8 local_3f98;
  undefined8 uStack_3f90;
  undefined1 local_3f88 [16];
  undefined8 ****local_3f78;
  char *local_3f70;
  longlong local_3f68;
  undefined8 *local_3f60;
  longlong local_3f58;
  longlong local_3f50;
  float *local_3f48;
  float *local_3f40;
  int *local_3f38;
  char *local_3f30;
  char *local_3f28;
  undefined8 ***local_3f18;
  longlong local_3f10;
  longlong local_3f08;
  longlong local_3f00;
  longlong local_3ef8;
  longlong local_3ef0;
  undefined8 ****local_3ee8;
  char *local_3ee0;
  char *local_3ed8;
  char *local_3ed0;
  longlong local_3ec8;
  undefined4 *local_3ec0;
  undefined4 *local_3eb8;
  longlong local_3eb0;
  longlong local_3ea8;
  uint *local_3ea0;
  longlong local_3e98;
  longlong local_3e90;
  longlong local_3e88;
  longlong local_3e80;
  undefined8 ****local_3e78;
  undefined4 *local_3e70;
  undefined4 *local_3e68;
  undefined4 *local_3e60;
  undefined8 *local_3e58;
  float *local_3e50;
  float *local_3e48;
  undefined4 *local_3e40;
  longlong local_3e38;
  undefined4 *local_3e30;
  undefined4 *local_3e28;
  int *local_3e20;
  undefined1 local_3e18;
  char cStack_3e17;
  undefined6 uStack_3e16;
  undefined8 uStack_3e10;
  undefined8 uStack_3e08;
  undefined8 uStack_3e00;
  undefined8 local_3df8;
  undefined8 uStack_3df0;
  undefined8 uStack_3de8;
  undefined8 uStack_3de0;
  undefined8 local_3dd8;
  undefined8 uStack_3dd0;
  undefined8 uStack_3dc8;
  undefined8 uStack_3dc0;
  undefined8 local_3db8;
  float fStack_3db0;
  float fStack_3dac;
  undefined8 uStack_3da8;
  undefined8 uStack_3da0;
  undefined8 local_3d98;
  undefined8 uStack_3d90;
  undefined4 uStack_3d88;
  int iStack_3d84;
  uint uStack_3d80;
  undefined4 uStack_3d7c;
  undefined8 local_3d78;
  undefined8 uStack_3d70;
  undefined4 local_3d68;
  uint uStack_3d64;
  char local_3d58 [4];
  int iStack_3d54;
  int iStack_3d50;
  int iStack_3d4c;
  undefined1 uStack_3d42;
  undefined1 uStack_3d41;
  undefined1 auStack_3d40 [392];
  float local_3bb8;
  int local_3bb4;
  char local_3bb0;
  float local_3ba8 [132];
  undefined8 ***local_3998;
  undefined8 uStack_3990;
  undefined8 uStack_3988;
  undefined8 uStack_3980;
  undefined8 local_3978;
  undefined8 uStack_3970;
  undefined8 uStack_3968;
  undefined8 uStack_3960;
  undefined8 local_3958;
  undefined8 uStack_3950;
  undefined8 uStack_3948;
  undefined8 uStack_3940;
  undefined8 local_3938;
  undefined8 uStack_3930;
  undefined8 uStack_3928;
  undefined8 uStack_3920;
  undefined8 local_3918;
  undefined8 uStack_3910;
  undefined8 uStack_3908;
  undefined8 uStack_3900;
  undefined8 local_38f8;
  undefined8 uStack_38f0;
  undefined1 local_38e8 [16];
  undefined8 ***local_38d8;
  undefined8 uStack_38d0;
  undefined8 uStack_38c8;
  undefined8 uStack_38c0;
  undefined8 local_38b8;
  undefined8 uStack_38b0;
  undefined8 uStack_38a8;
  undefined8 uStack_38a0;
  undefined8 local_3898;
  undefined8 uStack_3890;
  undefined8 uStack_3888;
  undefined8 uStack_3880;
  undefined4 local_3878;
  float fStack_3874;
  float fStack_3870;
  float fStack_386c;
  undefined8 uStack_3868;
  undefined8 uStack_3860;
  undefined8 local_3858;
  undefined8 uStack_3850;
  undefined8 uStack_3848;
  undefined8 uStack_3840;
  undefined8 local_3838;
  undefined8 uStack_3830;
  undefined4 local_3828;
  uint uStack_3824;
  undefined8 ***local_3818 [48];
  undefined8 local_3698;
  undefined4 local_3668;
  undefined8 local_3598 [22];
  undefined1 local_34e4;
  undefined1 local_342c;
  undefined1 local_3374;
  undefined1 local_32bc;
  undefined1 local_3204;
  undefined1 local_314c;
  undefined1 local_3094;
  undefined1 local_2fdc;
  undefined1 local_2f24;
  undefined1 local_2e6c;
  undefined1 local_2db4;
  undefined1 local_2cfc;
  undefined1 local_2c44;
  undefined1 local_2b8c;
  undefined1 local_2ad4;
  undefined1 local_2a1c;
  undefined1 local_2964;
  undefined1 local_28ac;
  undefined1 local_27f4;
  undefined1 local_273c;
  undefined1 local_2684;
  undefined1 local_25cc;
  undefined1 local_2514;
  undefined1 local_245c;
  undefined1 local_23a4;
  undefined1 local_22ec;
  undefined1 local_2234;
  undefined1 local_217c;
  undefined1 local_20c4;
  undefined1 local_200c;
  undefined1 local_1f54;
  undefined1 local_1e9c;
  undefined1 local_1de4;
  undefined1 local_1d2c;
  undefined1 local_1c74;
  undefined1 local_1bbc;
  undefined1 local_1b04;
  undefined1 local_1a4c;
  undefined1 local_1994;
  undefined1 local_18dc;
  undefined1 local_1824;
  undefined1 local_176c;
  undefined1 local_16b4;
  undefined1 local_15fc;
  undefined1 local_1544;
  undefined1 local_148c;
  undefined1 local_13d4;
  undefined1 local_131c;
  undefined1 local_1264;
  undefined1 local_11ac;
  undefined1 local_10f4;
  undefined1 local_103c;
  undefined1 local_f84;
  undefined1 local_ecc;
  undefined1 local_e14;
  undefined1 local_d5c;
  undefined1 local_ca4;
  undefined1 local_bec;
  undefined1 local_b34;
  undefined1 local_a7c;
  undefined1 local_9c4;
  undefined1 local_90c;
  undefined1 local_854;
  undefined1 local_79c;
  undefined1 local_6e4;
  char local_6d8 [1536];
  ulonglong local_d8;
  
  local_d8 = DAT_1808d5f00 ^ (ulonglong)auStack_4648;
  local_422c = DAT_180b8e4f4;
  local_4388 = *(undefined1 (*) [16])(*param_1 + 0x50);
  auVar50 = ZEXT1664(local_4388);
  local_41e8 = *(undefined8 *)(*param_1 + 0x60);
  local_3f88[4] = 0;
  uStack_3d64 = uStack_3d64 & 0xffffff00;
  local_4268 = '\0';
  local_4267 = '\0';
  local_4266 = '\0';
  local_4208 = param_1;
  if ((DAT_180cd4140 & 1) == 0) {
    DAT_180cd4140 = DAT_180cd4140 | 1;
    local_4278._0_4_ = 0x7a7ef71d;
    local_4278._8_8_ = 0;
    local_4258 = (longlong *)local_4278;
    local_4438 = 1;
    local_4250 = 1;
    FUN_18044c9c0(DAT_180c64058,&local_4258);
    DAT_180cd4148 = local_4278._8_8_;
  }
  else {
    local_4438 = 1;
  }
  auVar55 = ZEXT464(0x7fc00000);
  local_4458 = 0x7fc00000;
  if (DAT_180cd4148 == 0) {
    auVar42 = ZEXT1664(auVar55._0_16_);
  }
  else {
    auVar42 = ZEXT464(*(uint *)(DAT_180cd4148 + 0x58));
  }
  if ((((local_41e8._4_1_ == '\0') || (*(char *)(param_1[1] + 0x48) == '\0')) ||
      (sVar14 = thunk_FUN_180624430(auVar42._0_8_), 0 < sVar14)) ||
     (auVar51 = ZEXT864(0), auVar42._0_4_ <= 0.0)) goto LAB_18035b3f8;
  lVar15 = param_1[2];
  fVar41 = *(float *)(lVar15 + 0x30);
  sVar14 = thunk_FUN_180624430(fVar41);
  if ((0 < sVar14) || (fVar41 < auVar51._0_4_)) goto LAB_18035b3f8;
  fVar41 = *(float *)(lVar15 + 0x34);
  sVar14 = thunk_FUN_180624430(fVar41);
  if ((0 < sVar14) || (fVar41 < auVar51._0_4_)) goto LAB_18035b3f8;
  local_4228 = *(float *)(lVar15 + 0x14);
  local_4224 = *(float *)(lVar15 + 0x30) * *(float *)(lVar15 + 0x34);
  fVar41 = 0.015625;
  local_4220 = 0.015625;
  local_4218[0] = auVar42._0_4_ - local_4224 * 0.015625;
  local_4264 = DAT_180cc83c8;
  local_4263 = DAT_180cc83ca;
  local_4262 = DAT_180cc83cb;
  uVar37 = (ulonglong)DAT_180c6f738;
  if (DAT_180c6f738 == 0) {
    UVar21 = GetTickCount64();
    if (UVar21 < DAT_180c6f730) {
      uVar37 = 0;
    }
    else {
      local_4450 = &DAT_180900b50;
      iVar34 = FUN_1805f68d0(&DAT_180900b50);
      if (iVar34 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_180900b9c == 0x7fffffff) {
        DAT_180900b9c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      uVar37 = (ulonglong)DAT_180c6f738;
      if ((DAT_180c6f738 == 0) && (DAT_180c6f730 <= UVar21)) {
        DAT_180c6f738 = FUN_1804174b0("C_BaseEntity",0x84cdad2);
        uVar37 = (ulonglong)DAT_180c6f738;
        if (DAT_180c6f738 == 0) {
          DAT_180c6f730 = UVar21 + 1000;
        }
        else {
          DAT_180c6f730 = 0xffffffffffffffff;
        }
      }
      FUN_1805f68fc(&DAT_180900b50);
    }
  }
  if ((*(longlong *)(param_1[4] + 8) == 0) || ((int)uVar37 == 0)) {
    local_4450._0_5_ = (uint5)(uint)local_4450;
  }
  else {
    lVar32 = uVar37 + *(longlong *)(param_1[4] + 8);
    lVar15 = FUN_18017ea70();
    *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + 1;
    if (lVar32 == 0) {
LAB_180358c25:
      local_4450._0_5_ = (uint5)(uint)local_4450;
    }
    else {
      local_445c = 0;
      cVar11 = FUN_1804514f0(&local_445c,lVar32,4);
      if (cVar11 == '\0') goto LAB_180358c25;
      local_4450._0_5_ = CONCAT14(1,local_445c);
    }
    lVar15 = FUN_18017ea70();
    if (*(int *)(lVar15 + 4) != 0) {
      *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + -1;
    }
  }
  local_4230 = -1;
  if ((char)((ulonglong)local_4450 >> 0x20) != '\0') {
    local_4230 = (int)local_4450;
  }
  local_41dc = 0;
  local_41e0 = 0;
  local_41c8 = 0;
  local_41cc = 0;
  local_41d0 = 0;
  local_41c4 = 0;
  local_41d4 = 0;
  auVar42 = ZEXT464(0xbf800000);
  local_4420 = 0xbf800000;
  local_41d8 = 0xbf800000;
  local_38e8[4] = 0;
  local_3f50 = param_1[2];
  local_3f58 = param_1[6];
  local_3f68 = param_1[5];
  local_3f78 = &local_4038;
  local_3f70 = &local_4268;
  local_3f60 = (undefined8 *)&local_4264;
  local_3f48 = local_4218;
  local_3f40 = &local_4228;
  local_3f38 = &local_4230;
  local_3f30 = &local_4267;
  local_3f28 = &local_4266;
  local_3ee8 = &local_4038;
  local_3ee0 = &local_4268;
  local_3ed8 = &local_4267;
  local_3ed0 = &local_4266;
  local_3ec8 = param_1[7];
  local_3ec0 = &local_41dc;
  local_3eb8 = &local_41d8;
  local_3eb0 = param_1[8];
  local_3ea8 = param_1[4];
  local_3ea0 = &local_422c;
  local_3e98 = param_1[3];
  local_3e88 = param_1[9];
  local_3e80 = param_1[10];
  local_3e78 = &local_3998;
  local_3e70 = &local_41e0;
  local_3e68 = &local_41c8;
  local_3e60 = &local_41cc;
  local_3e58 = (undefined8 *)&local_4264;
  local_3e50 = local_4218;
  local_3e48 = &local_4228;
  local_3e40 = &local_41d0;
  local_3e30 = &local_41c4;
  local_3e28 = &local_41d4;
  local_3e20 = &local_4230;
  local_4468 = '\0';
  local_4278 = vshufps_avx(auVar50._0_16_,auVar50._0_16_,0xaa);
  local_4424 = -1.0;
  local_4428 = -1.0;
  local_445c = 0;
  local_4464 = 0;
  local_4465 = 0;
  lVar15 = *param_1;
  cVar11 = *(char *)(lVar15 + 0xe0);
  bVar39 = cVar11 == '\0';
  lVar32 = 0xac;
  if (bVar39) {
    lVar32 = 0xec;
  }
  lVar16 = 0xb0;
  if (bVar39) {
    lVar16 = 0xf0;
  }
  local_41c0 = (longlong *)CONCAT44(*(uint *)(lVar16 + lVar15),*(uint *)(lVar32 + lVar15));
  lVar17 = 0xb4;
  if (bVar39) {
    lVar17 = 0xf4;
  }
  local_41b8 = *(undefined4 *)(lVar17 + lVar15);
  local_3e90 = local_3f58;
  local_3e38 = local_3f50;
  if (((*(char *)(local_3f68 + 0xc) == '\0') && (DAT_180cc8360 != '\0')) && (DAT_180cc83c9 != '\0'))
  {
    lVar17 = 0xe0;
    if (cVar11 == '\0') {
      lVar17 = 0x120;
    }
    if (*(char *)(lVar17 + lVar15) == '\0') goto LAB_180358ff3;
    auVar49 = vunpcklps_avx(ZEXT416(*(uint *)(lVar32 + lVar15)),ZEXT416(*(uint *)(lVar16 + lVar15)))
    ;
    local_4258 = auVar49._0_8_;
    local_4250 = CONCAT44(local_4250._4_4_,local_41b8);
    local_41c0 = local_4258;
    cVar12 = FUN_180354ae0(&local_4258);
    iVar34 = auVar50._0_4_;
    if (cVar12 == '\0') goto LAB_180358ff3;
    local_4240[0] = 1;
  }
  else {
LAB_180358ff3:
    iVar34 = auVar50._0_4_;
    local_4240[0] = 0;
  }
  lVar32 = 0xe0;
  local_4260[0]._0_1_ = '\0';
  local_4467 = 0;
  local_4450 = (undefined *)CONCAT44(local_4450._4_4_,iVar34);
  if ((iVar34 == 0) || (iVar34 == 3)) {
    local_4466 = 1;
  }
  else {
    local_4466 = 0;
  }
  if (local_4466 == 0) {
    if (iVar34 != 1) {
      cVar11 = FUN_18035b730(&local_3ee8,param_2);
      auVar54 = auVar55._0_16_;
      auVar49 = auVar51._0_16_;
      if (((cVar11 == '\0') || (local_4268 == '\0')) ||
         ((local_4267 == '\0' || (local_4266 == '\0')))) {
LAB_18035aa2a:
        local_4468 = '\0';
      }
      else {
        cVar11 = FUN_18035b4c0(&local_3f78);
        auVar54 = auVar55._0_16_;
        auVar49 = auVar51._0_16_;
        if (cVar11 == '\0') goto LAB_18035aa2a;
        local_4468 = '\x01';
      }
      local_4460 = 1;
      uVar36 = (uint)(local_3f88[4] != '\0');
      goto LAB_18035aa54;
    }
    FUN_18063ab10(local_3818,0,0x180);
    FUN_18035d180(local_3818);
    uVar1 = local_41e8;
    local_3698 = 0;
    local_41f8 = 2;
    local_41f4 = auVar51._0_4_;
    uVar37 = (ulonglong)local_41e8 >> 8;
    local_41e8._5_3_ = SUB83(uVar1,5);
    local_41e8._0_5_ = CONCAT14(1,(uint)(uint3)uVar37 << 8);
    local_4258 = (longlong *)param_1[0xb];
    local_4250 = (longlong)*(int *)param_1[0xc];
    local_41f0 = local_41f4;
    local_41ec = local_41f4;
    cVar11 = FUN_180353b20(&local_4258,&local_41f8,local_3818);
    if ((cVar11 == '\0') || (cVar11 = FUN_1803586d0(param_1[7],param_2), cVar11 == '\0'))
    goto LAB_18035b3f8;
    local_4238 = 0;
    local_4234 = '\0';
    puVar26 = *(uint **)param_1[0x10];
    lVar15 = *(longlong *)(puVar26 + 0xc);
    puVar22 = (uint *)&DAT_0000000c;
    if (lVar15 != 0) {
      puVar22 = (uint *)(lVar15 + 0x1c);
    }
    uVar36 = *puVar22;
    *puVar26 = *puVar26 | 4;
    puVar26 = (uint *)0x0;
    if (lVar15 != 0) {
      puVar26 = (uint *)(lVar15 + 0x10);
    }
    *puVar26 = *puVar26 | 2;
    puVar26[3] = local_422c;
    puVar2 = (undefined *)param_1[7];
    puVar3 = (undefined *)param_1[10];
    puVar4 = (undefined *)param_1[9];
    puVar5 = (undefined *)param_1[6];
    local_4340 = (undefined **)0x0;
    local_4248 = uVar36;
    if (DAT_180c7df28 == (undefined8 *)0x0) {
      local_4258 = (longlong *)0x180827288;
      local_4250 = 0x15;
      DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_4258);
    }
    local_4340 = (undefined **)
                 (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x70);
    *local_4340 = (undefined *)
                  std::
                  _Func_impl_no_alloc<`public:___cdecl_`public:_void___cdecl_features::movement::jumpbug::on_create_move(systems::input::usercmd*___ptr64)___ptr64'::`2'::<lambda_21>::operator()(features::movement::jumpbug_contact::Batch_const&___ptr64)const___ptr64'::`47'::<lambda_9>,bool,int>
                  ::vftable;
    local_4340[1] = puVar5;
    local_4340[2] = puVar4;
    local_4340[3] = puVar3;
    local_4340[4] = (undefined *)&local_4038;
    local_4340[5] = &local_4268;
    local_4340[6] = &local_4267;
    local_4340[7] = &local_4266;
    local_4340[8] = &local_3e18;
    local_4340[9] = (undefined *)&local_4238;
    local_4340[10] = &local_4264;
    local_4340[0xb] = (undefined *)local_4218;
    local_4340[0xc] = puVar2;
    local_4340[0xd] = (undefined *)local_3818;
    local_4628 = local_4378;
    cVar11 = FUN_180413b80(local_3818,*(undefined8 *)param_1[8],param_1[4],2);
    auVar54 = auVar55._0_16_;
    auVar49 = auVar51._0_16_;
    if (local_4340 != (undefined **)0x0) {
      (**(code **)(*local_4340 + 0x20))(local_4340,local_4340 != local_4378);
      auVar54 = auVar55._0_16_;
      auVar49 = auVar51._0_16_;
    }
    puVar26 = *(uint **)param_1[0x10];
    *puVar26 = *puVar26 | 4;
    puVar22 = (uint *)0x0;
    if (*(longlong *)(puVar26 + 0xc) != 0) {
      puVar22 = (uint *)(*(longlong *)(puVar26 + 0xc) + 0x10);
    }
    *puVar22 = *puVar22 | 2;
    puVar22[3] = uVar36;
    local_4448 = CONCAT44(local_4448._4_4_,local_4238);
    local_4460 = local_4238;
    if ((char)uStack_3d64 != '\0') {
      local_4038 = (undefined8 ***)CONCAT62(uStack_3e16,CONCAT11(cStack_3e17,local_3e18));
      uStack_4030 = uStack_3e10;
      uStack_4028 = uStack_3e08;
      uStack_4020 = uStack_3e00;
      local_4018 = local_3df8;
      uStack_4010 = uStack_3df0;
      uStack_4008 = uStack_3de8;
      uStack_4000 = uStack_3de0;
      local_3ff8 = local_3dd8;
      uStack_3ff0 = uStack_3dd0;
      uStack_3fe8 = uStack_3dc8;
      uStack_3fe0 = uStack_3dc0;
      local_3fd8 = (undefined4)local_3db8;
      fStack_3fd4 = (float)((ulonglong)local_3db8 >> 0x20);
      fStack_3fd0 = fStack_3db0;
      fStack_3fcc = fStack_3dac;
      uStack_3fc8 = uStack_3da8;
      uStack_3fc0 = uStack_3da0;
      uStack_3fa8 = CONCAT44(iStack_3d84,uStack_3d88);
      uStack_3fa0 = CONCAT44(uStack_3d7c,uStack_3d80);
      local_3fb8 = local_3d98;
      uStack_3fb0 = uStack_3d90;
      local_3f98 = local_3d78;
      uStack_3f90 = uStack_3d70;
      local_3f88._0_8_ = CONCAT44(uStack_3d64,local_3d68);
      local_4268 = cStack_3e17;
      if ((char)((int *)param_1[9])[1] == '\0') {
        iVar34 = -1;
      }
      else {
        iVar34 = *(int *)param_1[9];
      }
      if ((iStack_3d84 == iVar34) || (fStack_3dac <= auVar49._0_4_)) {
        local_4267 = '\0';
      }
      else {
        local_4267 = '\x01';
      }
      if ((char)((uint *)param_1[10])[1] == '\0') {
        uVar36 = 0xffffffff;
      }
      else {
        uVar36 = *(uint *)param_1[10];
      }
      local_4266 = uStack_3d80 == uVar36;
    }
    if (((cVar11 == '\0') || (local_4238 != 2)) || (local_4234 != '\0')) {
LAB_18035a9d0:
      local_4468 = '\0';
      uVar36 = (uint)local_4448;
    }
    else {
      auVar50 = ZEXT1664(auVar49);
      auVar55 = ZEXT1664(auVar54);
      cVar11 = FUN_18035b4c0(&local_3f78);
      auVar54 = auVar55._0_16_;
      auVar49 = auVar50._0_16_;
      if (cVar11 == '\0') goto LAB_18035a9d0;
      local_4468 = '\x01';
      uVar36 = (uint)local_4448;
    }
LAB_18035aa5a:
    cVar11 = local_4468;
    auVar50 = ZEXT1664(auVar49);
    auVar55 = ZEXT1664(auVar54);
    UVar21 = GetTickCount64();
    if ((cVar11 == '\0') && (UVar21 < DAT_180c6f748)) goto LAB_18035b3f8;
LAB_18035aa74:
    auVar42 = ZEXT1664(local_4278);
  }
  else {
    uStack_4244 = uStack_4244 & 0xffffff00;
    if (*(char *)(lVar15 + 0xe0) == '\0') {
      if (cVar11 == '\0') {
        lVar32 = 0x120;
      }
      if (*(char *)(lVar32 + lVar15) != '\0') {
        lVar32 = 0xd4;
        if (cVar11 == '\0') {
          lVar32 = 0x114;
        }
        local_4258 = *(longlong **)(lVar32 + lVar15);
        local_4200 = *(undefined4 *)(lVar32 + 8 + lVar15);
        local_4250 = CONCAT44(local_4250._4_4_,local_4200);
        local_4208 = local_4258;
        FUN_180354340(&local_4248,&local_4258);
        if ((char)uStack_4244 == '\0') {
          if ((1.0 < (float)local_4208) && ((float)local_4208 <= 2.0)) {
            fVar44 = local_4208._4_4_;
            sVar14 = thunk_FUN_180624430(local_4208._4_4_);
            if ((sVar14 < 1) && (auVar51._0_4_ < fVar44)) {
              local_4248 = 0x3f780000;
              uStack_4244 = CONCAT31(uStack_4244._1_3_,1);
              goto LAB_18035914c;
            }
          }
          uStack_4244 = uStack_4244 & 0xffffff00;
        }
      }
LAB_18035914c:
      local_4628 = (undefined **)CONCAT44(uStack_4244,local_4248);
    }
    else {
      local_4258 = *(longlong **)(lVar15 + 0xd4);
      local_4250 = CONCAT44(local_4250._4_4_,*(undefined4 *)(lVar15 + 0xdc));
      puVar18 = (undefined8 *)FUN_180354340(&local_4248,&local_4258);
      local_4628 = (undefined **)*puVar18;
    }
    local_4238 = 0;
    local_34e4 = 0;
    local_342c = 0;
    local_3374 = 0;
    local_32bc = 0;
    local_3204 = 0;
    local_314c = 0;
    local_3094 = 0;
    local_2fdc = 0;
    local_2f24 = 0;
    local_2e6c = 0;
    local_2db4 = 0;
    local_2cfc = 0;
    local_2c44 = 0;
    local_2b8c = 0;
    local_2ad4 = 0;
    local_2a1c = 0;
    local_2964 = 0;
    local_28ac = 0;
    local_27f4 = 0;
    local_273c = 0;
    local_2684 = 0;
    local_25cc = 0;
    local_2514 = 0;
    local_245c = 0;
    local_23a4 = 0;
    local_22ec = 0;
    local_2234 = 0;
    local_217c = 0;
    local_20c4 = 0;
    local_200c = 0;
    local_1f54 = 0;
    local_1e9c = 0;
    local_1de4 = 0;
    local_1d2c = 0;
    local_1c74 = 0;
    local_1bbc = 0;
    local_1b04 = 0;
    local_1a4c = 0;
    local_1994 = 0;
    local_18dc = 0;
    local_1824 = 0;
    local_176c = 0;
    local_16b4 = 0;
    local_15fc = 0;
    local_1544 = 0;
    local_148c = 0;
    local_13d4 = 0;
    local_131c = 0;
    local_1264 = 0;
    local_11ac = 0;
    local_10f4 = 0;
    local_103c = 0;
    local_f84 = 0;
    local_ecc = 0;
    local_e14 = 0;
    local_d5c = 0;
    local_ca4 = 0;
    local_bec = 0;
    local_b34 = 0;
    local_a7c = 0;
    local_9c4 = 0;
    local_90c = 0;
    local_854 = 0;
    local_79c = 0;
    local_6e4 = 0;
    FUN_18063ab10(&local_3668,0,0xc3);
    FUN_18063ab10(local_3ba8,0,0x208);
    FUN_18035df10(local_3ba8);
    local_40a8 = &local_3ee8;
    local_40a0 = &local_3f78;
    local_4098 = (undefined8 ****)&local_4264;
    local_4090 = &local_4038;
    local_4088 = &local_4238;
    local_4080 = &local_4228;
    local_4078 = local_4260;
    local_4070 = local_4240;
    local_4068 = local_3598;
    local_4060 = &local_3668;
    local_4058 = &local_4268;
    local_4050 = &local_4267;
    local_4048 = &local_4266;
    local_4040 = local_3ba8;
    local_4258 = (longlong *)param_1[0xb];
    local_4250 = (longlong)*(int *)param_1[0xc];
    local_4618 = (double)CONCAT71(local_4618._1_7_,*(undefined1 *)(param_1[5] + 0xc));
    local_4620 = (char *)local_4260;
    puVar18 = (undefined8 *)FUN_18035e2d0(local_3818,&local_4228,&local_4258,&local_40a8);
    auVar54 = auVar55._0_16_;
    auVar49 = auVar51._0_16_;
    auVar57 = auVar42._0_16_;
    lVar15 = 3;
    pcVar28 = local_3d58;
    do {
      pcVar24 = pcVar28;
      puVar19 = puVar18;
      uVar1 = puVar19[1];
      *(undefined8 *)pcVar24 = *puVar19;
      *(undefined8 *)(pcVar24 + 8) = uVar1;
      uVar1 = puVar19[3];
      *(undefined8 *)(pcVar24 + 0x10) = puVar19[2];
      *(undefined8 *)(pcVar24 + 0x18) = uVar1;
      uVar1 = puVar19[5];
      *(undefined8 *)(pcVar24 + 0x20) = puVar19[4];
      *(undefined8 *)(pcVar24 + 0x28) = uVar1;
      uVar1 = puVar19[7];
      *(undefined8 *)(pcVar24 + 0x30) = puVar19[6];
      *(undefined8 *)(pcVar24 + 0x38) = uVar1;
      uVar1 = puVar19[9];
      *(undefined8 *)(pcVar24 + 0x40) = puVar19[8];
      *(undefined8 *)(pcVar24 + 0x48) = uVar1;
      uVar1 = puVar19[0xb];
      *(undefined8 *)(pcVar24 + 0x50) = puVar19[10];
      *(undefined8 *)(pcVar24 + 0x58) = uVar1;
      uVar1 = puVar19[0xd];
      *(undefined8 *)(pcVar24 + 0x60) = puVar19[0xc];
      *(undefined8 *)(pcVar24 + 0x68) = uVar1;
      uVar1 = puVar19[0xf];
      *(undefined8 *)(pcVar24 + 0x70) = puVar19[0xe];
      *(undefined8 *)(pcVar24 + 0x78) = uVar1;
      lVar15 = lVar15 + -1;
      puVar18 = puVar19 + 0x10;
      pcVar28 = pcVar24 + 0x80;
    } while (lVar15 != 0);
    uVar1 = puVar19[0x11];
    *(undefined8 *)(pcVar24 + 0x80) = puVar19[0x10];
    *(undefined8 *)(pcVar24 + 0x88) = uVar1;
    uVar1 = puVar19[0x13];
    *(undefined8 *)(pcVar24 + 0x90) = puVar19[0x12];
    *(undefined8 *)(pcVar24 + 0x98) = uVar1;
    uVar1 = puVar19[0x15];
    *(undefined8 *)(pcVar24 + 0xa0) = puVar19[0x14];
    *(undefined8 *)(pcVar24 + 0xa8) = uVar1;
    if ((local_3bb0 == '\0') || ((local_4263 == '\0' && (local_4264 == '\0')))) {
      fVar41 = 64.0;
    }
    else {
      iVar34 = (int)((iStack_3d50 >> 0x1f & 3U) + iStack_3d50) >> 2;
      local_441c[0] = (int)(iStack_3d4c + (iStack_3d4c >> 0x1f & 3U)) >> 2;
      bVar39 = 1 < local_441c[0] - iVar34;
      local_441c[0] = local_441c[0] - (uint)bVar39;
      uVar36 = (uint)bVar39 + iVar34;
      local_441c[2] = uVar36;
      auVar50 = ZEXT464(0x42800000);
      local_441c[1] = (int)(local_3bb8 * 64.0);
      piVar25 = local_441c + 2;
      if ((int)uVar36 <= local_441c[1]) {
        piVar25 = local_441c + 1;
      }
      piVar20 = local_441c;
      if (local_441c[1] <= local_441c[0]) {
        piVar20 = piVar25;
      }
      iStack_3d54 = *piVar20;
      uVar37 = (ulonglong)iStack_3d54;
      if ((int)uVar36 <= local_441c[0]) {
        uVar35 = (ulonglong)(int)uVar36;
        uVar38 = uVar37;
        if (3 < (int)((local_441c[0] - uVar36) + 1)) {
          lVar15 = uVar37 * 8;
          uVar31 = uVar36 + 2;
          do {
            lVar32 = uVar35 * 8;
            if ((local_4263 == '\0') ||
               (local_3ba8[uVar35 * 2] == *(float *)((longlong)local_3ba8 + lVar15))) {
              if ((local_4264 != '\0') &&
                 (*(float *)((longlong)local_3ba8 + lVar15 + 4) + 0.01 < local_3ba8[uVar35 * 2 + 1])
                 ) goto LAB_1803596c5;
            }
            else if (*(float *)((longlong)local_3ba8 + lVar15) < local_3ba8[uVar35 * 2]) {
LAB_1803596c5:
              uVar38 = (ulonglong)uVar36;
              lVar15 = lVar32;
              uVar37 = uVar35;
            }
            if ((local_4263 == '\0') ||
               (local_3ba8[uVar35 * 2 + 2] == *(float *)((longlong)local_3ba8 + lVar15))) {
              if ((local_4264 != '\0') &&
                 (*(float *)((longlong)local_3ba8 + lVar15 + 4) + 0.01 < local_3ba8[uVar35 * 2 + 3])
                 ) goto LAB_18035971b;
            }
            else if (*(float *)((longlong)local_3ba8 + lVar15) < local_3ba8[uVar35 * 2 + 2]) {
LAB_18035971b:
              uVar38 = (ulonglong)(uVar31 - 1);
              uVar37 = uVar35 + 1;
              lVar15 = lVar32 + 8;
            }
            if ((local_4263 == '\0') ||
               (local_3ba8[uVar35 * 2 + 4] == *(float *)((longlong)local_3ba8 + lVar15))) {
              if ((local_4264 != '\0') &&
                 (*(float *)((longlong)local_3ba8 + lVar15 + 4) + 0.01 < local_3ba8[uVar35 * 2 + 5])
                 ) goto LAB_180359774;
            }
            else if (*(float *)((longlong)local_3ba8 + lVar15) < local_3ba8[uVar35 * 2 + 4]) {
LAB_180359774:
              uVar37 = uVar35 + 2;
              lVar15 = lVar32 + 0x10;
              uVar38 = (ulonglong)uVar31;
            }
            if ((local_4263 == '\0') ||
               (local_3ba8[uVar35 * 2 + 6] == *(float *)((longlong)local_3ba8 + lVar15))) {
              if ((local_4264 != '\0') &&
                 (*(float *)((longlong)local_3ba8 + lVar15 + 4) + 0.01 < local_3ba8[uVar35 * 2 + 7])
                 ) goto LAB_1803597cc;
            }
            else if (*(float *)((longlong)local_3ba8 + lVar15) < local_3ba8[uVar35 * 2 + 6]) {
LAB_1803597cc:
              uVar38 = (ulonglong)(uVar31 + 1);
              uVar37 = uVar35 + 3;
              lVar15 = lVar32 + 0x18;
            }
            iStack_3d54 = (int)uVar38;
            uVar35 = uVar35 + 4;
            uVar36 = uVar36 + 4;
            uVar31 = uVar31 + 4;
          } while ((int)uVar36 <= local_441c[0] + -3);
          if (local_441c[0] < (int)uVar36) goto LAB_180359862;
        }
        lVar15 = uVar35 * 8;
        lVar32 = uVar37 * 8;
        do {
          if ((local_4263 == '\0') ||
             (*(float *)((longlong)local_3ba8 + lVar15) == *(float *)((longlong)local_3ba8 + lVar32)
             )) {
            if ((local_4264 != '\0') &&
               (*(float *)((longlong)local_3ba8 + lVar32 + 4) + 0.01 <
                *(float *)((longlong)local_3ba8 + lVar15 + 4))) goto LAB_180359850;
          }
          else if (*(float *)((longlong)local_3ba8 + lVar32) <
                   *(float *)((longlong)local_3ba8 + lVar15)) {
LAB_180359850:
            uVar38 = (ulonglong)uVar36;
            lVar32 = lVar15;
          }
          iStack_3d54 = (int)uVar38;
          lVar15 = lVar15 + 8;
          uVar36 = uVar36 + 1;
        } while ((int)uVar36 <= local_441c[0]);
      }
LAB_180359862:
      local_3bb8 = (float)iStack_3d54 * fVar41;
      iStack_3d54 = iStack_3d54 * 4;
      local_4258 = (longlong *)param_1[0xb];
      local_4250 = (longlong)*(int *)param_1[0xc];
      local_3bb0 = FUN_180353ed0(&local_4258,local_3bb8,auStack_3d40,
                                 *(undefined1 *)(param_1[5] + 0xc));
      fVar41 = auVar50._0_4_;
      auVar54 = auVar55._0_16_;
      auVar49 = auVar51._0_16_;
      auVar57 = auVar42._0_16_;
    }
    uVar31 = local_3bb4 + local_4238;
    local_4464 = uStack_3d42;
    local_4465 = uStack_3d41;
    local_4460 = uVar31;
    if (local_3bb0 != '\0') {
      local_4424 = (float)iStack_3d50 * 0.00390625;
      local_4428 = (float)iStack_3d4c * 0.00390625;
      if (local_3d58[0] == '\0') {
        local_445c = auVar49._0_4_;
      }
      else {
        fVar44 = local_4428 * local_4220;
        fVar40 = (float)iStack_3d54 * 0.00390625 * local_4220;
        fVar6 = local_4224 * 0.5;
        fVar9 = fVar40 * fVar6 * fVar40 - fVar40 * local_4228;
        fVar40 = local_4424 * local_4220;
        auVar7 = vminss_avx(ZEXT416((uint)((fVar44 * fVar6 * fVar44 - fVar44 * local_4228) - fVar9))
                            ,ZEXT416((uint)(fVar9 - (fVar40 * fVar6 * fVar40 - fVar40 * local_4228))
                                    ));
        local_445c = auVar7._0_4_;
      }
      fVar41 = fVar41 * local_3bb8;
      lVar15 = 0;
      if ((9.223372e+18 <= fVar41) && (fVar41 = fVar41 - 9.223372e+18, fVar41 < 9.223372e+18)) {
        lVar15 = -0x8000000000000000;
      }
      lVar32 = (longlong)fVar41;
      local_4038 = (undefined8 ***)local_3598[lVar32 * 0x17];
      uStack_4030 = local_3598[lVar32 * 0x17 + 1];
      uStack_4028 = local_3598[lVar32 * 0x17 + 2];
      uStack_4020 = local_3598[lVar32 * 0x17 + 3];
      local_4018 = local_3598[lVar32 * 0x17 + 4];
      uStack_4010 = local_3598[lVar32 * 0x17 + 5];
      uStack_4008 = local_3598[lVar32 * 0x17 + 6];
      uStack_4000 = local_3598[lVar32 * 0x17 + 7];
      local_3ff8 = local_3598[lVar32 * 0x17 + 8];
      uStack_3ff0 = local_3598[lVar32 * 0x17 + 9];
      uStack_3fe8 = local_3598[lVar32 * 0x17 + 10];
      uStack_3fe0 = local_3598[lVar32 * 0x17 + 0xb];
      uStack_3fc8 = local_3598[lVar32 * 0x17 + 0xe];
      uStack_3fc0 = local_3598[lVar32 * 0x17 + 0xf];
      local_3fd8 = (undefined4)local_3598[lVar32 * 0x17 + 0xc];
      fStack_3fd4 = (float)((ulonglong)local_3598[lVar32 * 0x17 + 0xc] >> 0x20);
      fStack_3fd0 = (float)local_3598[lVar32 * 0x17 + 0xd];
      fStack_3fcc = (float)((ulonglong)local_3598[lVar32 * 0x17 + 0xd] >> 0x20);
      local_3fb8 = local_3598[lVar32 * 0x17 + 0x10];
      uStack_3fb0 = local_3598[lVar32 * 0x17 + 0x11];
      uStack_3fa8 = local_3598[lVar32 * 0x17 + 0x12];
      uStack_3fa0 = local_3598[lVar32 * 0x17 + 0x13];
      local_3f98 = local_3598[lVar32 * 0x17 + 0x14];
      uStack_3f90 = local_3598[lVar32 * 0x17 + 0x15];
      uVar1 = local_3598[lVar32 * 0x17 + 0x16];
      lVar15 = (lVar32 + lVar15) * 3;
      local_4268 = *(char *)((longlong)&local_3668 + lVar15);
      local_4267 = *(char *)((longlong)&local_3668 + lVar15 + 1);
      local_4266 = *(char *)((longlong)&local_3668 + lVar15 + 2);
      local_3f88[4] = (byte)((ulonglong)uVar1 >> 0x20);
      bVar39 = local_3f88[4] == '\0';
      local_3f88._0_8_ = uVar1;
      if (bVar39) {
LAB_180359b6f:
        local_4468 = '\0';
      }
      else {
        auVar50 = ZEXT1664(auVar49);
        auVar55 = ZEXT1664(auVar54);
        auVar42 = ZEXT1664(auVar57);
        cVar11 = FUN_1803586d0(param_1[7],auStack_3d40);
        auVar54 = auVar55._0_16_;
        auVar49 = auVar50._0_16_;
        auVar57 = auVar42._0_16_;
        if (cVar11 == '\0') goto LAB_180359b6f;
        cVar11 = FUN_18035b4c0(&local_3f78);
        auVar54 = auVar55._0_16_;
        auVar49 = auVar50._0_16_;
        auVar57 = auVar42._0_16_;
        if (cVar11 == '\0') goto LAB_180359b6f;
        local_4468 = '\x01';
        local_3998 = local_4038;
        uStack_3990 = uStack_4030;
        uStack_3988 = uStack_4028;
        uStack_3980 = uStack_4020;
        local_3978 = local_4018;
        uStack_3970 = uStack_4010;
        uStack_3968 = uStack_4008;
        uStack_3960 = uStack_4000;
        local_3958 = local_3ff8;
        uStack_3950 = uStack_3ff0;
        uStack_3948 = uStack_3fe8;
        uStack_3940 = uStack_3fe0;
        local_3938 = CONCAT44(fStack_3fd4,local_3fd8);
        uStack_3930 = CONCAT44(fStack_3fcc,fStack_3fd0);
        uStack_3928 = uStack_3fc8;
        uStack_3920 = uStack_3fc0;
        local_3918 = local_3fb8;
        uStack_3910 = uStack_3fb0;
        uStack_3908 = uStack_3fa8;
        uStack_3900 = uStack_3fa0;
        local_38f8 = local_3f98;
        uStack_38f0 = uStack_3f90;
        local_38e8._0_8_ = local_3f88._0_8_;
      }
      local_4278 = ZEXT416((uint)local_3bb8);
    }
    uVar36 = (uint)(local_3f88[4] != '\0');
    local_4448 = CONCAT44(local_4448._4_4_,uVar36);
    if ((local_4468 == '\0') || ((char)local_4260[0] == '\0')) {
LAB_18035aa54:
      goto LAB_18035aa5a;
    }
    local_4338 = local_4038;
    uStack_4330 = uStack_4030;
    uStack_4328 = uStack_4028;
    uStack_4320 = uStack_4020;
    local_4318 = local_4018;
    uStack_4310 = uStack_4010;
    uStack_4308 = uStack_4008;
    uStack_4300 = uStack_4000;
    local_42f8 = local_3ff8;
    uStack_42f0 = uStack_3ff0;
    uStack_42e8 = uStack_3fe8;
    uStack_42e0 = uStack_3fe0;
    local_42d8 = CONCAT44(fStack_3fd4,local_3fd8);
    uStack_42d0 = CONCAT44(fStack_3fcc,fStack_3fd0);
    uStack_42c8 = uStack_3fc8;
    uStack_42c0 = uStack_3fc0;
    local_42b8 = local_3fb8;
    uStack_42b0 = uStack_3fb0;
    uStack_42a8 = uStack_3fa8;
    uStack_42a0 = uStack_3fa0;
    local_4298 = local_3f98;
    uStack_4290 = uStack_3f90;
    local_4288 = local_3f88._0_8_;
    local_4258 = (longlong *)CONCAT44(fStack_3fd0,fStack_3fd4);
    local_4250 = CONCAT44(local_4250._4_4_,fStack_3fcc);
    auVar50 = ZEXT1664(auVar49);
    auVar55 = ZEXT1664(auVar54);
    auVar42 = ZEXT1664(auVar57);
    FUN_18063ab10(local_3818,0,0x180);
    FUN_18035d180(local_3818);
    local_3698 = 0;
    local_3f18 = local_3818;
    local_3f10 = param_1[0xd];
    local_3f08 = param_1[0xc];
    local_3f00 = param_1[0xb];
    local_3ef8 = param_1[0xe];
    local_3ef0 = param_1[0xf];
    cVar11 = FUN_18035c030(&local_3f18,auVar42._0_8_,0);
    uVar33 = local_41f8;
    if (cVar11 == '\0') goto LAB_18035b3f8;
    if ((DAT_180cc8360 == '\0') || (DAT_180cc83c9 == '\0')) {
      uVar13 = 0;
    }
    else {
      uVar13 = 1;
    }
    local_41f8._3_1_ = SUB41(uVar33,3);
    local_41f8._0_3_ = CONCAT12(local_4262,CONCAT11(uVar13,uVar13));
    local_41f4 = local_4230;
    local_41f0 = (uint)CONCAT11((char)((uint)local_41f0 >> 0x18),local_4263) << 0x10;
    local_41ec = *(int *)(param_1[6] + 0x4c);
    local_41e8 = CONCAT44(local_41e8._4_4_,*(undefined4 *)(param_1[6] + 0x48));
    local_41a8 = 0;
    local_417c = 0;
    local_416c = 0;
    local_4140 = 0;
    local_41a4 = auVar50._0_4_;
    local_4198 = 0xffffffffffffffff;
    local_4190 = auVar55._0_4_;
    local_418c = 0xffffffff;
    local_415c = 0xffffffffffffffff;
    local_4150 = 0xffffffff;
    uStack_3824 = uStack_3824 & 0xffffff00;
    local_423c = 0;
    local_4248 = 0;
    local_4208 = (longlong *)CONCAT44(local_4208._4_4_,auVar42._0_4_);
    local_4265 = '\0';
    local_4128 = 0;
    local_40fc = 0;
    local_40ec = 0;
    local_40c0 = 0;
    local_4118 = 0xffffffffffffffff;
    local_410c = 0xffffffff;
    local_40dc = 0xffffffffffffffff;
    local_40d0 = 0xffffffff;
    local_40a8 = (undefined8 ****)&local_41a8;
    local_40a0 = &local_38d8;
    local_4098 = &local_3f18;
    local_4090 = local_3818;
    local_4088 = (uint *)param_1[7];
    local_4080 = (float *)param_1[0x10];
    local_4078 = &local_422c;
    local_4070 = (undefined1 *)param_1[8];
    local_4068 = (undefined8 *)param_1[4];
    local_4060 = &local_423c;
    local_4058 = (char *)param_1[0xe];
    local_4050 = (char *)param_1[3];
    local_4408 = local_3d58;
    local_4400 = param_1[0xd];
    local_43f8 = &local_423c;
    local_43f0 = &local_4248;
    local_43e8 = &local_40a8;
    local_43e0 = &local_4128;
    local_43d8 = (undefined8 *)&local_41a8;
    local_43d0 = &local_41f8;
    local_43c8 = param_1[2];
    local_43c0 = &local_41c0;
    local_43b8 = &local_4228;
    local_43b0 = param_1[9];
    local_43a8 = param_1[10];
    local_43a0 = &local_4258;
    local_4398 = &local_4208;
    local_4390 = &local_4265;
    local_41a0 = local_41a4;
    local_419c = local_41a4;
    local_4188 = local_41a4;
    local_4184 = local_41a4;
    local_4180 = local_41a4;
    local_4178 = local_41a4;
    local_4174 = local_4190;
    local_4170 = local_4190;
    local_4168 = local_41a4;
    local_4164 = local_41a4;
    local_4160 = local_41a4;
    local_4154 = local_4190;
    local_414c = local_41a4;
    local_4148 = local_41a4;
    local_4144 = local_41a4;
    local_413c = local_41a4;
    local_4138 = local_4190;
    local_4134 = local_4190;
    local_4124 = local_41a4;
    local_4120 = local_41a4;
    local_411c = local_41a4;
    local_4110 = local_4190;
    local_4108 = local_41a4;
    local_4104 = local_41a4;
    local_4100 = local_41a4;
    local_40f8 = local_41a4;
    local_40f4 = local_4190;
    local_40f0 = local_4190;
    local_40e8 = local_41a4;
    local_40e4 = local_41a4;
    local_40e0 = local_41a4;
    local_40d4 = local_4190;
    local_40cc = local_41a4;
    local_40c8 = local_41a4;
    local_40c4 = local_41a4;
    local_40bc = local_41a4;
    local_40b8 = local_4190;
    local_40b4 = local_4190;
    cVar11 = FUN_18035c760(&local_4408);
    if ((cVar11 == '\0') || (cVar11 = FUN_1803586d0(param_1[7],local_3818), cVar11 == '\0')) {
      local_4467 = 0;
      local_4460 = uVar31 + local_423c;
      bVar30 = *(byte *)param_1[0xd];
      uVar36 = *(uint *)param_1[0xf];
LAB_18035a1bc:
      local_4438 = local_4438 & 0xffffffff00000000;
    }
    else {
      local_4467 = 1;
      local_4460 = uVar31 + local_423c;
      bVar30 = *(byte *)param_1[0xd];
      uVar36 = *(uint *)param_1[0xf];
      if (local_4265 == '\0') goto LAB_18035a1bc;
      local_4467 = 1;
    }
    if ((char)uStack_3824 == '\0') {
      auVar51 = ZEXT1664(auVar55._0_16_);
      auVar42 = ZEXT1664(auVar55._0_16_);
    }
    else {
      auVar51 = ZEXT464((uint)fStack_386c);
      fVar41 = fStack_3870 * fStack_3870 + fStack_3874 * fStack_3874;
      if (fVar41 == auVar50._0_4_) {
        auVar42 = ZEXT1664(auVar50._0_16_);
      }
      else if (fVar41 < 0.0) {
        auVar42._0_8_ = FUN_18061e150(fVar41);
        auVar42._8_56_ = extraout_var;
        auVar42 = ZEXT1664(auVar42._0_16_);
      }
      else {
        auVar42 = ZEXT464((uint)SQRT(fVar41));
      }
    }
    fVar41 = (float)uStack_42d0 * (float)uStack_42d0 + local_42d8._4_4_ * local_42d8._4_4_;
    if (fVar41 == auVar50._0_4_) {
      auVar46 = ZEXT1664(auVar50._0_16_);
    }
    else if (fVar41 < 0.0) {
      auVar46._0_8_ = FUN_18061e150(fVar41);
      auVar46._8_56_ = extraout_var_00;
      auVar46 = ZEXT1664(auVar46._0_16_);
    }
    else {
      auVar46 = ZEXT464((uint)SQRT(fVar41));
    }
    FUN_18063ab10(local_6d8,0,0x600);
    local_4570 = (double)local_411c;
    local_4578 = (double)local_4120;
    local_4580 = (double)local_4124;
    local_45b0 = (double)(float)local_4208;
    local_4608 = (double)auVar51._0_4_;
    local_4610 = (double)auVar42._0_4_;
    local_4618 = (double)auVar46._0_4_;
    local_4560 = local_40ec >> 8 & 0xff;
    local_4568 = local_4128 >> 8 & 0xff;
    local_4588 = local_40ec & 0xff;
    local_4590 = (char *)(CONCAT44(local_4590._4_4_,local_4128) & 0xffffffff000000ff);
    local_4598 = (uint)bVar30;
    local_45a8 = (undefined4)local_4438;
    local_45b8 = local_423c;
    local_45c0 = local_4248;
    local_45c8 = local_415c._4_4_;
    local_45d0 = local_4198._4_4_;
    local_45d8 = (undefined4)local_415c;
    local_45e0 = (undefined4)local_4198;
    local_45e8 = local_416c >> 8 & 0xff;
    local_45f0 = (double)(CONCAT44(local_45f0._4_4_,local_41a8 >> 8) & 0xffffffff000000ff);
    local_45f8 = (double)(CONCAT44(local_45f8._4_4_,local_416c) & 0xffffffff000000ff);
    local_4600 = (double)(CONCAT44(local_4600._4_4_,local_41a8) & 0xffffffff000000ff);
    local_4620 = (char *)CONCAT44(local_4620._4_4_,(uint)local_4467);
    local_4628 = *(undefined ***)(*(longlong *)param_1[8] + 8);
    local_45a0 = uVar36;
    FUN_18015ad60(local_6d8,0x600,0xffffffffffffffff,
                  "command=%lld selected=%d jump_speed=%.3f slide_speed=%.3f slide_vz=%.3f proof=(%d,%d) grounded=(%d,%d) jump=(%d,%d) land=(%d,%d) candidates=%d native_steps=%d stand=%.5f steering_compacted=%d steering_steps=%d compact_available=%d compact_proof=(%d,%d) compact_velocity=(%.3f,%.3f,%.3f) compact_ground=(%d,%d) velocity_written=0 server_ack=unverified"
                 );
    local_4628 = &PTR_180700558;
    if (local_6d8[0] != '\0') {
      local_4628 = (undefined **)&DAT_1806bcfc0;
    }
    local_4620 = local_6d8;
    FUN_1800f6900(0);
    if (local_4467 == 0) {
      local_4038 = local_4338;
      uStack_4030 = uStack_4330;
      uStack_4028 = uStack_4328;
      uStack_4020 = uStack_4320;
      local_4018 = local_4318;
      uStack_4010 = uStack_4310;
      uStack_4008 = uStack_4308;
      uStack_4000 = uStack_4300;
      local_3ff8 = local_42f8;
      uStack_3ff0 = uStack_42f0;
      uStack_3fe8 = uStack_42e8;
      uStack_3fe0 = uStack_42e0;
      local_3fd8 = (undefined4)local_42d8;
      fStack_3fd4 = (float)((ulonglong)local_42d8 >> 0x20);
      fStack_3fd0 = (float)uStack_42d0;
      fStack_3fcc = (float)((ulonglong)uStack_42d0 >> 0x20);
      uStack_3fc8 = uStack_42c8;
      uStack_3fc0 = uStack_42c0;
      local_3fb8 = local_42b8;
      uStack_3fb0 = uStack_42b0;
      uStack_3fa8 = uStack_42a8;
      uStack_3fa0 = uStack_42a0;
      local_3f98 = local_4298;
      uStack_3f90 = uStack_4290;
      local_3f88._0_8_ = local_4288;
      auVar50 = ZEXT1664(auVar50._0_16_);
      auVar55 = ZEXT1664(auVar55._0_16_);
      cVar11 = FUN_1803586d0(param_1[7],auStack_3d40);
      auVar54 = auVar55._0_16_;
      auVar49 = auVar50._0_16_;
      if (cVar11 == '\0') {
LAB_18035a5bf:
        local_4468 = '\0';
        uVar36 = (uint)local_4448;
        goto LAB_18035aa54;
      }
      cVar11 = FUN_18035b4c0(&local_3f78);
      auVar54 = auVar55._0_16_;
      auVar49 = auVar50._0_16_;
      if (cVar11 == '\0') goto LAB_18035a5bf;
      local_4468 = '\x01';
      UVar21 = GetTickCount64();
      uVar36 = (uint)local_4448;
      goto LAB_18035aa74;
    }
    local_4038 = local_38d8;
    uStack_4030 = uStack_38d0;
    uStack_4028 = uStack_38c8;
    uStack_4020 = uStack_38c0;
    local_4018 = local_38b8;
    uStack_4010 = uStack_38b0;
    uStack_4008 = uStack_38a8;
    uStack_4000 = uStack_38a0;
    local_3ff8 = local_3898;
    uStack_3ff0 = uStack_3890;
    uStack_3fe8 = uStack_3888;
    uStack_3fe0 = uStack_3880;
    local_3fd8 = local_3878;
    fStack_3fd4 = fStack_3874;
    fStack_3fd0 = fStack_3870;
    fStack_3fcc = fStack_386c;
    uStack_3fc8 = uStack_3868;
    uStack_3fc0 = uStack_3860;
    local_3fb8 = local_3858;
    uStack_3fb0 = uStack_3850;
    uStack_3fa8 = uStack_3848;
    uStack_3fa0 = uStack_3840;
    local_3f98 = local_3838;
    uStack_3f90 = uStack_3830;
    local_3f88._0_8_ = CONCAT44(uStack_3824,local_3828);
    local_4268 = '\x01';
    local_4267 = '\0';
    local_4266 = '\x01';
    uVar36 = 2;
    local_4278 = ZEXT416((uint)(float)local_4208);
    auVar42 = ZEXT1664(local_4278);
    auVar50 = ZEXT1664(auVar50._0_16_);
    auVar55 = ZEXT1664(auVar55._0_16_);
    UVar21 = GetTickCount64();
  }
  puVar26 = (uint *)&DAT_0000000c;
  DAT_180c6f748 = UVar21 + 500;
  local_4462 = *(char *)(param_1[5] + 0xc);
  bVar30 = local_3f88[4];
  if (local_3f88[4] == 0) {
LAB_18035ab0a:
    auVar51 = ZEXT1664(auVar55._0_16_);
  }
  else {
    auVar51 = ZEXT464((uint)local_3f98._4_4_);
    if (local_3f98._4_4_ <= auVar50._0_4_) goto LAB_18035ab0a;
    fVar41 = *(float *)(param_1[6] + 8);
    fVar44 = *(float *)(param_1[6] + 0xc);
    fVar41 = fVar44 * fVar44 + fVar41 * fVar41;
    if (fVar41 == auVar50._0_4_) {
      auVar49 = vminss_avx(ZEXT416((uint)local_3f98._4_4_),auVar50._0_16_);
      auVar51 = ZEXT1664(auVar49);
    }
    else if (fVar41 < 0.0) {
      auVar53._0_8_ = FUN_18061e150(fVar41);
      auVar53._8_56_ = extraout_var_01;
      auVar49 = vminss_avx(auVar51._0_16_,auVar53._0_16_);
      auVar51 = ZEXT1664(auVar49);
    }
    else {
      auVar49 = vminss_avx(ZEXT416((uint)local_3f98._4_4_),ZEXT416((uint)SQRT(fVar41)));
      auVar51 = ZEXT1664(auVar49);
    }
  }
  auVar46 = ZEXT464((uint)fStack_3fcc);
  fVar41 = fStack_3fd4;
  fVar44 = fStack_3fd0;
  if (bVar30 == 0) {
LAB_18035ab90:
    local_4265 = '\0';
  }
  else {
    local_4258 = (longlong *)CONCAT44(fStack_3fd0,fStack_3fd4);
    local_4250 = CONCAT44(local_4250._4_4_,fStack_3fcc);
    local_4438 = *(ulonglong *)(param_1[2] + 0xc);
    local_4430 = *(undefined4 *)(param_1[2] + 0x14);
    cVar11 = FUN_180354800(&local_4438,&local_4258,0x7f800000);
    local_4265 = '\x01';
    if (cVar11 == '\0') goto LAB_18035ab90;
  }
  bVar10 = local_38e8[4];
  if (local_38e8[4] == 0) {
    auVar53 = ZEXT1664(auVar55._0_16_);
    auVar56 = ZEXT1664(auVar55._0_16_);
  }
  else {
    fVar40 = (float)uStack_3930 * (float)uStack_3930 + local_3938._4_4_ * local_3938._4_4_;
    if (fVar40 == auVar50._0_4_) {
      auVar53 = ZEXT1664(auVar50._0_16_);
      auVar56 = ZEXT464(local_38f8._4_4_);
    }
    else if (fVar40 < 0.0) {
      auVar56._0_8_ = FUN_18061e150(fVar40);
      auVar56._8_56_ = extraout_var_02;
      auVar53 = ZEXT1664(auVar56._0_16_);
      auVar56 = ZEXT464(local_38f8._4_4_);
    }
    else {
      auVar53 = ZEXT464((uint)SQRT(fVar40));
      auVar56 = ZEXT464(local_38f8._4_4_);
    }
  }
  local_4248 = *(uint *)(*(longlong *)param_1[0x11] + 8);
  if ((int)local_4248 < 1) {
LAB_18035ac92:
    local_4463 = 0;
  }
  else {
    lVar15 = *(longlong *)(*(longlong *)(*(longlong *)param_1[0x10] + 0x18) + 8);
    plVar27 = (longlong *)&DAT_00000008;
    if (lVar15 != 0) {
      plVar27 = (longlong *)(lVar15 + 0x18);
    }
    if (*plVar27 != 2) goto LAB_18035ac92;
    pcVar28 = &DAT_00000010;
    if (lVar15 != 0) {
      pcVar28 = (char *)(lVar15 + 0x20);
    }
    if (*pcVar28 != '\0') goto LAB_18035ac92;
    pfVar29 = (float *)&DAT_00000014;
    if (lVar15 != 0) {
      pfVar29 = (float *)(lVar15 + 0x24);
    }
    local_4463 = 1;
    if (*pfVar29 != auVar50._0_4_) goto LAB_18035ac92;
  }
  local_4448 = *(longlong *)param_1[8];
  local_4438 = (ulonglong)
               ((*(uint *)(local_4448 + 0x70) | *(uint *)(local_4448 + 0x68) |
                *(uint *)(local_4448 + 0x60)) & 2);
  lVar15 = param_1[0x12];
  local_4208 = (longlong *)
               (ulonglong)
               ((*(uint *)(lVar15 + 0x18) | *(uint *)(lVar15 + 0x10) | *(uint *)(lVar15 + 8)) & 2);
  auVar49 = vpcmpeqd_avx(ZEXT116(bVar10),SUB6416(ZEXT464(0),0));
  auVar49 = vblendvps_avx(ZEXT416(uStack_3930._4_4_),auVar55._0_16_,auVar49);
  auVar58 = ZEXT1664(auVar49);
  local_4238 = 0xffffffff;
  if (bVar30 == 0) {
    auVar47 = ZEXT464(local_4458);
    auVar43 = ZEXT464(local_4458);
  }
  else {
    auVar55 = ZEXT464(uStack_3fa0._4_4_);
    fVar41 = fVar44 * fVar44 + fVar41 * fVar41;
    local_4238 = local_3f88._0_4_;
    if (fVar41 == auVar50._0_4_) {
      auVar43 = ZEXT1664(auVar50._0_16_);
      auVar47 = ZEXT464(local_4458);
    }
    else if (fVar41 < 0.0) {
      auVar43._0_8_ = FUN_18061e150(fVar41);
      auVar43._8_56_ = extraout_var_03;
      auVar43 = ZEXT1664(auVar43._0_16_);
      auVar47 = ZEXT464(local_4458);
    }
    else {
      auVar43 = ZEXT464((uint)SQRT(fVar41));
      auVar47 = ZEXT464(local_4458);
    }
  }
  local_4538 = auVar55._0_4_;
  local_4540 = auVar43._0_4_;
  local_44f0 = auVar58._0_4_;
  local_44d0 = auVar56._0_4_;
  local_44c8 = auVar53._0_4_;
  local_4480 = auVar51._0_4_;
  auVar57 = auVar46._0_16_;
  auVar54 = auVar50._0_16_;
  auVar49 = auVar42._0_16_;
  fVar40 = auVar47._0_4_;
  fVar41 = *(float *)(param_1[6] + 8);
  fVar44 = *(float *)(param_1[6] + 0xc);
  fVar41 = fVar44 * fVar44 + fVar41 * fVar41;
  local_4548 = auVar50._0_4_;
  if (fVar41 != local_4548) {
    if (fVar41 < 0.0) {
      local_4548 = (float)FUN_18061e150(fVar41);
      local_4538 = auVar55._0_4_;
      local_4540 = auVar43._0_4_;
      local_44f0 = auVar58._0_4_;
      local_44d0 = auVar56._0_4_;
      local_44c8 = auVar53._0_4_;
      local_4480 = auVar51._0_4_;
      auVar57 = auVar46._0_16_;
      auVar54 = auVar50._0_16_;
      auVar49 = auVar42._0_16_;
      fVar40 = auVar47._0_4_;
    }
    else {
      local_4548 = SQRT(fVar41);
    }
  }
  bVar10 = local_4467;
  cVar11 = local_4468;
  local_45e8 = 0xffffffff;
  if ((char)uStack_3d64 == '\0') {
    uStack_3d80 = 0xffffffff;
    iStack_3d84 = -1;
  }
  else {
    fVar40 = fStack_3dac;
  }
  if (local_4467 == 0) {
    local_4590 = "across-contact";
    if (local_4466 != 0) {
      local_4590 = "engine-search";
    }
  }
  else {
    local_4590 = "slope-comparison";
  }
  lVar15 = *(longlong *)(*(longlong *)param_1[0x10] + 0x30);
  if (lVar15 != 0) {
    puVar26 = (uint *)(lVar15 + 0x1c);
  }
  local_4598 = *puVar26;
  auVar7 = vpcmpeqd_avx(ZEXT116(local_4466),SUB6416(ZEXT464(0),0));
  auVar8 = vshufps_avx(local_4388,local_4388,0xff);
  auVar49 = vblendvps_avx(auVar49,auVar8,auVar7);
  if (local_4462 == '\0') {
    if (local_4467 == 0) {
      auVar54 = vshufps_avx(local_4388,local_4388,0x55);
      local_45b8 = auVar54._0_4_;
    }
    else {
      auVar7 = vcmpss_avx(auVar54,local_4278,2);
      auVar54 = vblendvps_avx(ZEXT416(local_4420),auVar54,auVar7);
      local_45b8 = auVar54._0_4_;
    }
  }
  else {
    local_45b8 = 0x3f7c0000;
  }
  local_45c0 = *(uint *)(*(longlong *)param_1[0x10] + 0x44);
  local_45d0 = 0xffffffff;
  if (bVar30 != 0) {
    local_45d0 = (undefined4)uStack_3fa0;
  }
  if (*(char *)((undefined4 *)param_1[10] + 1) == '\0') {
    local_45d8 = 0xffffffff;
  }
  else {
    local_45d8 = *(undefined4 *)param_1[10];
  }
  local_45e0 = 0xffffffff;
  if (bVar30 != 0) {
    local_45e0 = uStack_3fa8._4_4_;
  }
  if ((char)((uint *)param_1[9])[1] != '\0') {
    local_45e8 = *(uint *)param_1[9];
  }
  auVar54 = vpcmpeqd_avx(ZEXT116(bVar30),SUB6416(ZEXT464(0),0));
  auVar50 = ZEXT464(local_4458);
  auVar54 = vblendvps_avx(auVar57,ZEXT416(local_4458),auVar54);
  local_4618 = (double)(longlong)(int)local_4248;
  local_4470 = local_4462;
  local_4478 = local_4467;
  local_4488 = local_4265;
  local_4490 = local_41c4;
  local_4498 = local_4465;
  local_44a0 = local_4464;
  local_44a8 = local_41d8;
  local_44b0 = local_445c;
  local_44b8 = local_4428;
  local_44c0 = local_4424;
  local_44d8 = local_4463;
  local_44e0 = local_4438;
  local_44e8 = local_4208;
  local_44f8 = local_41d4;
  local_4500 = local_41d0;
  local_4508 = local_41cc;
  local_4510 = local_41c8;
  local_4518 = local_41e0;
  local_4520 = local_41dc;
  local_4528 = local_4238;
  local_4530 = local_4230;
  local_4550 = local_4262;
  local_4558 = local_4263;
  local_4560 = CONCAT31(local_4560._1_3_,local_4264);
  local_4570 = (double)CONCAT44(local_4570._4_4_,iStack_3d84);
  local_4578 = (double)CONCAT44(local_4578._4_4_,fVar40);
  local_4580 = (double)CONCAT44(local_4580._4_4_,uVar36);
  local_4588 = local_4460;
  local_45a0 = local_422c;
  local_45a8 = auVar49._0_4_;
  local_45b0 = (double)CONCAT44(local_45b0._4_4_,local_4278._0_4_);
  local_45c8 = CONCAT31(local_45c8._1_3_,local_4468);
  local_45f0 = (double)CONCAT44(local_45f0._4_4_,auVar54._0_4_);
  local_45f8 = (double)CONCAT44(local_45f8._4_4_,*(undefined4 *)(param_1[6] + 0x10));
  local_4600 = (double)CONCAT71(local_4600._1_7_,local_4266);
  local_4608 = (double)CONCAT71(local_4608._1_7_,local_4267);
  local_4610 = (double)CONCAT71(local_4610._1_7_,local_4268);
  local_4620 = (char *)CONCAT44(local_4620._4_4_,(uint)local_4450);
  local_4628 = *(undefined ***)(local_4448 + 8);
  fVar41 = (float)local_4278._0_4_;
  local_4568 = uStack_3d80;
  FUN_18035eaa0();
  auVar49 = auVar50._0_16_;
  if (cVar11 != '\0') {
    if (((local_4264 != '\0') && (bVar10 == 0)) && (local_3f88[4] != '\0')) {
      FUN_18063ab10(local_6d8,0,0x600);
      dVar52 = (double)uStack_3f90._4_4_;
      dVar45 = (double)*(float *)(param_1[6] + 0x4c);
      dVar48 = (double)(float)uStack_3fb0;
      fVar44 = fStack_3fcc;
      fVar40 = (float)FUN_1803546b0(local_3fd8,fStack_3fcc,local_4224);
      local_4608 = (double)fVar40;
      local_4610 = (double)fVar44;
      local_4618 = (double)(float)uStack_3f90;
      local_4620 = (char *)(double)fVar41;
      local_4628 = *(undefined ***)(*(longlong *)param_1[8] + 8);
      local_4600 = dVar48;
      local_45f8 = dVar45;
      local_45f0 = dVar52;
      FUN_18015ad60(local_6d8,0x600,0xffffffffffffffff,
                    "command=%lld when=%.5f takeoff=%.3f end_vz=%.3f apex=%.3f duck_amount=%.3f landing_clock=(%.5f,%.5f) velocity_written=0 server_ack=unverified"
                   );
      local_4628 = &PTR_180700558;
      if (local_6d8[0] != '\0') {
        local_4628 = (undefined **)&DAT_1806bcfc0;
      }
      local_4620 = local_6d8;
      FUN_1800f6900(0);
      auVar49 = auVar50._0_16_;
    }
    uVar33 = 0xffffffff;
    *(float *)(*param_1 + 0x128) = fVar41;
    *(undefined8 *)(*param_1 + 0x138) = *(undefined8 *)(*(longlong *)param_1[8] + 8);
    uVar23 = 0xffffffff;
    if (local_3f88[4] != 0) {
      uVar23 = uStack_3fa8._4_4_;
    }
    *(undefined4 *)(*param_1 + 0x140) = uVar23;
    if (*(char *)((undefined4 *)param_1[9] + 1) != '\0') {
      uVar33 = *(undefined4 *)param_1[9];
    }
    *(undefined4 *)(*param_1 + 0x144) = uVar33;
    auVar54 = vpcmpeqd_avx(ZEXT116(local_3f88[4]),SUB6416(ZEXT464(0),0));
    auVar54 = vblendvps_avx(ZEXT416((uint)fStack_3fcc),auVar49,auVar54);
    *(int *)(*param_1 + 0x148) = auVar54._0_4_;
    if (local_3f88[4] == 0) {
      fStack_3fcc = auVar49._0_4_;
      local_4258 = (longlong *)CONCAT44(fStack_3fcc,fStack_3fcc);
    }
    else {
      local_4258 = (longlong *)CONCAT44(fStack_3fd0,fStack_3fd4);
    }
    lVar15 = *param_1;
    *(longlong **)(lVar15 + 0x14c) = local_4258;
    *(float *)(lVar15 + 0x154) = fStack_3fcc;
  }
LAB_18035b3f8:
  FUN_180358460(param_1[3]);
}



