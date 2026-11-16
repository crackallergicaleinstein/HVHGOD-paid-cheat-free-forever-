// FUN_180369970 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180369970 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

ulonglong FUN_180369970(undefined8 *param_1,undefined4 param_2,undefined1 param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  char cVar21;
  uint *puVar22;
  uint *puVar23;
  undefined8 in_RDX;
  undefined4 local_res10 [2];
  undefined1 local_res18 [16];
  ulonglong local_108;
  undefined4 uStack_fc;
  char *local_88;
  undefined8 local_80;
  longlong local_78 [7];
  longlong *local_40;
  
  *(undefined4 *)*param_1 = param_2;
  puVar2 = (undefined8 *)param_1[1];
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0xffffffffffffffff;
  puVar2[3] = 0xffffffff7fc00000;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0x7fc0000000000000;
  puVar2[7] = 0x7fc00000;
  puVar2[8] = 0;
  puVar2[9] = 0xffffffff00000000;
  puVar2[10] = 0x7fc00000ffffffff;
  puVar2[0xb] = 0xffffffff;
  auVar20._8_4_ = 0;
  auVar20._0_8_ = local_108;
  auVar20._12_4_ = uStack_fc;
  auVar19._12_4_ = 0;
  auVar19._0_12_ = auVar20._4_12_;
  auVar19 = vinsertps_avx(auVar19 << 0x20,ZEXT816(0),0x10);
  auVar19 = vinsertps_avx(auVar19,ZEXT816(0),0x30);
  *(undefined1 (*) [16])(puVar2 + 0xc) = auVar19;
  auVar19 = vunpcklps_avx(SUB6416(ZEXT464(0x7fc00000),0),SUB6416(ZEXT464(0x7fc00000),0));
  puVar2[0xe] = auVar19._0_8_;
  *(undefined4 *)param_1[2] = 0;
  *(int *)param_1[3] = *(int *)param_1[3] + 1;
  local_res10[0] = param_2;
  local_res18[0] = param_3;
  puVar22 = (uint *)FUN_180369480(param_1[4],in_RDX,param_3,0);
  if ((char)puVar22 != '\0') {
    puVar22 = *(uint **)param_1[5];
    *puVar22 = *puVar22 | 4;
    puVar23 = (uint *)0x0;
    if (*(longlong *)(puVar22 + 0xc) != 0) {
      puVar23 = (uint *)(*(longlong *)(puVar22 + 0xc) + 0x10);
    }
    uVar1 = *(uint *)param_1[6];
    *puVar23 = *puVar23 | 2;
    puVar23[3] = uVar1;
    lVar3 = param_1[4];
    lVar4 = param_1[0x15];
    lVar5 = param_1[0x14];
    lVar6 = param_1[0x13];
    lVar7 = param_1[0x12];
    lVar8 = param_1[0x11];
    lVar9 = param_1[0x10];
    lVar10 = param_1[0xf];
    lVar11 = param_1[0xe];
    lVar12 = param_1[0xd];
    lVar13 = param_1[0xc];
    lVar14 = param_1[0xb];
    lVar15 = param_1[10];
    lVar16 = param_1[9];
    lVar17 = param_1[2];
    lVar18 = param_1[1];
    local_40 = (longlong *)0x0;
    if (DAT_180c7df28 == (undefined8 *)0x0) {
      local_88 = "tier0.dll:g_pMemAlloc";
      local_80 = 0x15;
      DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_88);
    }
    local_40 = (longlong *)
               (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x98);
    *local_40 = (longlong)
                std::
                _Func_impl_no_alloc<`public:___cdecl_`public:_void___cdecl_features::movement::slope_movement::on_create_move(systems::input::usercmd*___ptr64)___ptr64'::`2'::<lambda_13>::operator()(float,bool)const___ptr64'::`5'::<lambda_1>,bool,int>
                ::vftable;
    local_40[1] = lVar18;
    local_40[2] = lVar17;
    local_40[3] = (longlong)local_res10;
    local_40[4] = (longlong)local_res18;
    local_40[5] = lVar16;
    local_40[6] = lVar15;
    local_40[7] = lVar14;
    local_40[8] = lVar13;
    local_40[9] = lVar12;
    local_40[10] = lVar11;
    local_40[0xb] = lVar10;
    local_40[0xc] = lVar9;
    local_40[0xd] = lVar8;
    local_40[0xe] = lVar7;
    local_40[0xf] = lVar6;
    local_40[0x10] = lVar5;
    local_40[0x11] = lVar4;
    local_40[0x12] = lVar3;
    cVar21 = FUN_180413b80(lVar8,*(undefined8 *)param_1[7],param_1[8],2,local_78);
    if (local_40 != (longlong *)0x0) {
      (**(code **)(*local_40 + 0x20))(local_40,local_40 != local_78);
    }
    puVar22 = *(uint **)param_1[5];
    *puVar22 = *puVar22 | 4;
    puVar23 = (uint *)0x0;
    if (*(longlong *)(puVar22 + 0xc) != 0) {
      puVar23 = (uint *)(*(longlong *)(puVar22 + 0xc) + 0x10);
    }
    puVar22 = (uint *)param_1[0x16];
    uVar1 = *puVar22;
    *puVar23 = *puVar23 | 2;
    puVar23[3] = uVar1;
    if ((cVar21 != '\0') && (puVar22 = (uint *)param_1[2], 0 < (int)*puVar22)) {
      return CONCAT71((int7)((ulonglong)puVar22 >> 8),1);
    }
  }
  return (ulonglong)puVar22 & 0xffffffffffffff00;
}



