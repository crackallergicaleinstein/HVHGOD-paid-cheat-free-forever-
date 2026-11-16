// FUN_18035c380 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18035c380 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18035c380(longlong *param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  undefined8 uVar8;
  undefined1 auVar9 [16];
  char cVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  uint *puVar13;
  uint *puVar14;
  undefined8 in_RDX;
  longlong lVar15;
  uint uVar16;
  undefined1 local_res18 [8];
  undefined1 auStack_2f8 [32];
  longlong *local_2d8;
  uint local_2c8;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined8 uStack_2a8;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 local_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  ulonglong local_258;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  longlong local_238;
  longlong *local_230;
  char *local_228;
  undefined8 local_220;
  longlong local_218 [7];
  longlong *local_1e0;
  undefined8 local_1d8 [50];
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_2f8;
  local_2b8 = 0;
  uStack_28c = 0;
  uStack_27c = 0;
  uStack_250 = 0;
  uStack_2b4 = 0;
  uStack_2b0 = 0;
  uStack_2ac = 0;
  uStack_2a8 = 0xffffffffffffffff;
  uStack_2a0 = 0x7fc00000;
  uStack_29c = 0xffffffff;
  local_298 = 0;
  uStack_294 = 0;
  uStack_290 = 0;
  uStack_288 = 0;
  uStack_284 = 0x7fc00000;
  uStack_280 = 0x7fc00000;
  local_278 = 0;
  uStack_274 = 0;
  uStack_270 = 0;
  uStack_26c = 0xffffffff;
  uStack_268 = 0xffffffff;
  uStack_264 = 0x7fc00000;
  uStack_260 = 0xffffffff;
  uStack_25c = 0;
  puVar11 = (undefined8 *)*param_1;
  *puVar11 = 0;
  puVar11[1] = 0;
  puVar11[2] = 0xffffffffffffffff;
  puVar11[3] = 0xffffffff7fc00000;
  puVar11[4] = 0;
  puVar11[5] = 0;
  puVar11[6] = 0x7fc0000000000000;
  puVar11[7] = 0x7fc00000;
  puVar11[8] = 0;
  puVar11[9] = 0xffffffff00000000;
  puVar11[10] = 0x7fc00000ffffffff;
  puVar11[0xb] = 0xffffffff;
  auVar9._8_4_ = 0;
  auVar9._0_8_ = local_258;
  auVar9._12_4_ = uStack_24c;
  auVar7._12_4_ = 0;
  auVar7._0_12_ = auVar9._4_12_;
  auVar7 = vinsertps_avx(auVar7 << 0x20,ZEXT816(0),0x10);
  auVar7 = vinsertps_avx(auVar7,ZEXT816(0),0x30);
  *(undefined1 (*) [16])(puVar11 + 0xc) = auVar7;
  auVar7 = vunpcklps_avx(SUB6416(ZEXT464(0x7fc00000),0),SUB6416(ZEXT464(0x7fc00000),0));
  puVar11[0xe] = auVar7._0_8_;
  *(undefined1 *)(param_1[1] + 0xb4) = 0;
  local_res18[0] = param_3;
  local_230 = param_1;
  cVar10 = FUN_18035c030(param_1[2],in_RDX,param_3);
  if (cVar10 != '\0') {
    puVar11 = (undefined8 *)param_1[3];
    lVar15 = 3;
    puVar12 = local_1d8;
    do {
      uVar8 = puVar11[1];
      *puVar12 = *puVar11;
      puVar12[1] = uVar8;
      uVar8 = puVar11[3];
      puVar12[2] = puVar11[2];
      puVar12[3] = uVar8;
      uVar8 = puVar11[5];
      puVar12[4] = puVar11[4];
      puVar12[5] = uVar8;
      uVar8 = puVar11[7];
      puVar12[6] = puVar11[6];
      puVar12[7] = uVar8;
      uVar8 = puVar11[9];
      puVar12[8] = puVar11[8];
      puVar12[9] = uVar8;
      uVar8 = puVar11[0xb];
      puVar12[10] = puVar11[10];
      puVar12[0xb] = uVar8;
      uVar8 = puVar11[0xd];
      puVar12[0xc] = puVar11[0xc];
      puVar12[0xd] = uVar8;
      puVar1 = puVar12 + 0x10;
      uVar8 = puVar11[0xf];
      puVar12[0xe] = puVar11[0xe];
      puVar12[0xf] = uVar8;
      puVar11 = puVar11 + 0x10;
      lVar15 = lVar15 + -1;
      puVar12 = puVar1;
    } while (lVar15 != 0);
    *puVar1 = *puVar11;
    cVar10 = FUN_18035c030(param_1[2],param_2,local_res18[0]);
    if ((cVar10 != '\0') && (cVar10 = FUN_1803586d0(param_1[4],param_1[3]), cVar10 != '\0')) {
      puVar14 = *(uint **)param_1[5];
      lVar15 = *(longlong *)(puVar14 + 0xc);
      puVar13 = (uint *)&DAT_0000000c;
      if (lVar15 != 0) {
        puVar13 = (uint *)(lVar15 + 0x1c);
      }
      uVar16 = *puVar13;
      *puVar14 = *puVar14 | 4;
      puVar14 = (uint *)0x0;
      if (lVar15 != 0) {
        puVar14 = (uint *)(lVar15 + 0x10);
      }
      uVar2 = *(uint *)param_1[6];
      *puVar14 = *puVar14 | 2;
      puVar14[3] = uVar2;
      lVar15 = param_1[5];
      lVar3 = param_1[10];
      lVar4 = param_1[4];
      lVar5 = param_1[1];
      lVar6 = *param_1;
      local_238 = param_1[9];
      local_1e0 = (longlong *)0x0;
      local_2c8 = uVar16;
      if (DAT_180c7df28 == (undefined8 *)0x0) {
        local_228 = "tier0.dll:g_pMemAlloc";
        local_220 = 0x15;
        DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_228);
      }
      local_1e0 = (longlong *)
                  (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x48);
      *local_1e0 = (longlong)
                   std::
                   _Func_impl_no_alloc<`public:___cdecl_`public:___cdecl_`public:_void___cdecl_features::movement::jumpbug::on_create_move(systems::input::usercmd*___ptr64)___ptr64'::`2'::<lambda_21>::operator()(features::movement::jumpbug_contact::Batch_const&___ptr64)const___ptr64'::`31'::<lambda_7>::operator()(float,bool)const___ptr64'::`7'::<lambda_1>,bool,int>
                   ::vftable;
      local_1e0[1] = local_238;
      local_1e0[2] = lVar6;
      local_1e0[3] = lVar5;
      local_1e0[4] = lVar4;
      local_1e0[5] = (longlong)local_1d8;
      local_1e0[6] = (longlong)local_res18;
      local_1e0[7] = lVar3;
      local_1e0[8] = lVar15;
      local_2d8 = local_218;
      FUN_180413b80(local_res18,*(undefined8 *)param_1[7],param_1[8],2);
      if (local_1e0 != (longlong *)0x0) {
        (**(code **)(*local_1e0 + 0x20))(local_1e0,local_1e0 != local_218);
      }
      puVar14 = *(uint **)param_1[5];
      *puVar14 = *puVar14 | 4;
      puVar13 = (uint *)0x0;
      if (*(longlong *)(puVar14 + 0xc) != 0) {
        puVar13 = (uint *)(*(longlong *)(puVar14 + 0xc) + 0x10);
      }
      *puVar13 = *puVar13 | 2;
      puVar13[3] = uVar16;
    }
  }
}



