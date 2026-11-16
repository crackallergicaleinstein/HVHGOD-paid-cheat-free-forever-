// FUN_180544af0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180544af0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180544af0(HWND param_1,longlong *param_2,undefined8 param_3)

{
  float fVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  char cVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  float *pfVar10;
  longlong **pplVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  bool bVar15;
  undefined1 auStack_c28 [48];
  longlong local_bf8;
  undefined *local_bf0;
  undefined **local_be8;
  code *local_be0;
  undefined ***local_bb0;
  undefined **local_ba8;
  code *local_ba0;
  undefined ***local_b70;
  undefined **local_b68;
  code *local_b60;
  undefined ***local_b30;
  undefined **local_b28;
  code *local_b20;
  undefined ***local_af0;
  undefined **local_ae8;
  code *local_ae0;
  undefined ***local_ab0;
  undefined **local_aa8;
  code *local_aa0;
  undefined ***local_a70;
  undefined **local_a68;
  code *local_a60;
  undefined ***local_a30;
  undefined **local_a28;
  code *local_a20;
  undefined ***local_9f0;
  undefined **local_9e8;
  code *local_9e0;
  undefined ***local_9b0;
  undefined **local_9a8;
  code *local_9a0;
  undefined ***local_970;
  undefined **local_968;
  code *local_960;
  undefined ***local_930;
  undefined **local_928;
  code *local_920;
  undefined ***local_8f0;
  undefined **local_8e8;
  code *local_8e0;
  undefined ***local_8b0;
  undefined **local_8a8;
  code *local_8a0;
  undefined ***local_870;
  undefined **local_868;
  code *local_860;
  undefined ***local_830;
  undefined **local_828;
  code *local_820;
  undefined ***local_7f0;
  undefined **local_7e8;
  code *local_7e0;
  undefined ***local_7b0;
  undefined **local_7a8;
  code *local_7a0;
  undefined ***local_770;
  undefined **local_768;
  code *local_760;
  undefined ***local_730;
  undefined **local_728;
  code *local_720;
  undefined ***local_6f0;
  undefined **local_6e8;
  code *local_6e0;
  undefined ***local_6b0;
  undefined **local_6a8;
  code *local_6a0;
  undefined ***local_670;
  undefined **local_668;
  code *local_660;
  undefined ***local_630;
  undefined **local_628 [7];
  undefined ***local_5f0;
  undefined **local_5e8 [7];
  undefined ***local_5b0;
  undefined **local_5a8 [7];
  undefined ***local_570;
  undefined **local_568 [7];
  undefined ***local_530;
  undefined **local_528 [7];
  undefined ***local_4f0;
  undefined **local_4e8 [7];
  undefined ***local_4b0;
  undefined **local_4a8 [7];
  undefined ***local_470;
  undefined **local_468 [7];
  undefined ***local_430;
  undefined **local_428 [7];
  undefined ***local_3f0;
  undefined **local_3e8 [7];
  undefined ***local_3b0;
  undefined **local_3a8 [7];
  undefined ***local_370;
  undefined **local_368 [7];
  undefined ***local_330;
  undefined **local_328 [7];
  undefined ***local_2f0;
  undefined **local_2e8 [7];
  undefined ***local_2b0;
  undefined **local_2a8 [7];
  undefined ***local_270;
  undefined **local_268 [7];
  undefined ***local_230;
  undefined **local_228 [7];
  undefined ***local_1f0;
  undefined **local_1e8 [7];
  undefined ***local_1b0;
  undefined **local_1a8 [7];
  undefined ***local_170;
  undefined **local_168 [7];
  undefined ***local_130;
  undefined **local_128 [7];
  undefined ***local_f0;
  undefined **local_e8 [7];
  undefined ***local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  longlong *local_98;
  longlong *local_90 [2];
  tagRECT local_80;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  undefined4 local_50;
  undefined8 local_4c;
  ulonglong local_40;
  
  local_40 = DAT_1808d5f00 ^ (ulonglong)auStack_c28;
  local_bf0 = &DAT_1808e6940;
  iVar6 = FUN_1805f68d0(&DAT_1808e6940);
  if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_1808e698c == 0x7fffffff) {
    DAT_1808e698c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  if (DAT_180c62ff0 == 0) {
    local_a8 = (char *)FUN_1804b8110(0x2b20);
    local_90[0] = &local_bf8;
    local_98 = (longlong *)local_a8;
    if ((longlong *)local_a8 == (longlong *)0x0) {
      lVar7 = 0;
    }
    else {
      lVar7 = FUN_1804b4bd0(local_a8,0);
    }
    DAT_180bb8ae8 = lVar7;
    FUN_1804b5e40();
    DAT_180bb8ae8 = lVar7;
    DAT_180c62ff0 = lVar7;
    *(undefined8 *)(lVar7 + 0x48) = 0;
    *(undefined8 *)(lVar7 + 0x50) = 0;
    FUN_18047d3f0();
    DAT_180c62ca8 = FUN_18046f150(&DAT_180bbb240,0x4159999a,0);
    DAT_180c62cb0 = FUN_18046f150(&DAT_180bbb270,0x41740000,0);
    DAT_180c62cb8 = FUN_18046f150(&DAT_180bbb260,0x41866666,0);
    DAT_180c62cc0 = FUN_18046f150(&DAT_180bbb250,0x41300000,&DAT_18082ac40);
    *(undefined8 *)(DAT_180bb8ae8 + 0x68) = DAT_180c62ca8;
    cVar5 = FUN_180504900(param_1);
    lVar7 = DAT_180bb8ae8;
    if (cVar5 == '\0') {
      FUN_1805464a0();
    }
    else {
      puVar8 = (undefined8 *)FUN_1804b8110(0x80);
      if (puVar8 == (undefined8 *)0x0) {
        puVar8 = (undefined8 *)0x0;
      }
      else {
        *puVar8 = 0;
        puVar8[1] = 0;
        puVar8[2] = 0;
        puVar8[3] = 0;
        puVar8[4] = 0;
        puVar8[5] = 0;
        puVar8[6] = 0;
        puVar8[7] = 0;
        puVar8[8] = 0;
        puVar8[9] = 0;
        puVar8[10] = 0;
        puVar8[0xb] = 0;
        puVar8[0xc] = 0;
        puVar8[0xd] = 0;
        puVar8[0xe] = 0;
        puVar8[0xf] = 0;
        *(undefined4 *)(puVar8 + 0xe) = 5000;
        *(undefined4 *)((longlong)puVar8 + 0x74) = 10000;
      }
      *(undefined8 **)(lVar7 + 0xd0) = puVar8;
      *(char **)(lVar7 + 0xc0) = "imgui_impl_dx11";
      *(uint *)(lVar7 + 0x2c) = *(uint *)(lVar7 + 0x2c) | 0x18;
      lVar7 = DAT_180bb8ae8;
      *(undefined4 *)(DAT_180bb8ae8 + 0xc3c) = 0x4000;
      *(undefined4 *)(lVar7 + 0xc38) = 0x4000;
      *(code **)(lVar7 + 0xc48) = FUN_180159a00;
      *(code **)(lVar7 + 0xc50) = FUN_1805070c0;
      *(code **)(lVar7 + 0xc58) = FUN_180507110;
      local_98 = (longlong *)0x0;
      local_90[0] = (longlong *)0x0;
      local_a8 = (char *)0x0;
      iVar6 = (**(code **)*param_2)(param_2,&DAT_18085c028,&local_98);
      if (((iVar6 == 0) &&
          (iVar6 = (**(code **)(*local_98 + 0x30))(local_98,&DAT_18085c018,local_90), iVar6 == 0))
         && (iVar6 = (**(code **)(*local_90[0] + 0x30))(local_90[0],&DAT_18085c2d8,&local_a8),
            iVar6 == 0)) {
        *puVar8 = param_2;
        puVar8[1] = param_3;
        puVar8[2] = local_a8;
      }
      if (local_98 != (longlong *)0x0) {
        (**(code **)(*local_98 + 0x10))();
      }
      if (local_90[0] != (longlong *)0x0) {
        (**(code **)(*local_90[0] + 0x10))();
      }
      (**(code **)(*(longlong *)*puVar8 + 8))();
      (**(code **)(*(longlong *)puVar8[1] + 8))();
      FUN_180508e00(param_2,param_3);
      if (DAT_180c7df28 == (undefined8 *)0x0) {
        local_a8 = "tier0.dll:g_pMemAlloc";
        local_a0 = 0x15;
        DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_a8);
      }
      lVar7 = (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x71e8);
      local_a8 = (char *)lVar7;
      if (lVar7 == 0) {
        lVar7 = 0;
      }
      else {
        FUN_18063ab10(lVar7,0,0x71e8);
        FUN_18063ab10(lVar7,0,0x71e8);
        lVar7 = FUN_18055ed20(lVar7);
      }
      bVar15 = DAT_180c62f50 != 0;
      DAT_180c62f50 = lVar7;
      if (bVar15) {
        FUN_18056d8e0();
      }
      local_80.left = 0;
      local_80.top = 0;
      local_80.right = 0;
      local_80.bottom = 0;
      GetClientRect(param_1,&local_80);
      if (DAT_180c70e60 < 2) {
        uVar9 = 0;
      }
      else {
        uVar9 = DAT_180c70e60 << 0x20 | DAT_180c70e60 >> 0x20;
      }
      if (((int)uVar9 == 0) || (iVar6 = (int)(uVar9 >> 0x20), iVar6 == 0)) {
        uVar9 = (ulonglong)(uint)local_80.right;
        iVar6 = local_80.bottom;
      }
      else {
        local_80.right = (int)uVar9;
        local_80.bottom = iVar6;
      }
      local_a8 = (char *)CONCAT44(((float)(int)uVar9 - 32.0) / 633.0,0x3fc00000);
      local_a0 = CONCAT44(local_a0._4_4_,((float)iVar6 - 32.0) / 485.0);
      pfVar10 = (float *)FUN_1805f9e60(&local_a8,(longlong)&local_a0 + 4,0);
      fVar1 = *pfVar10;
      local_98 = (longlong *)CONCAT44(local_98._4_4_,fVar1);
      pplVar11 = &local_98;
      if (fVar1 < 0.75) {
        pplVar11 = (longlong **)&DAT_18086c058;
      }
      if (3.0 < fVar1) {
        pplVar11 = (longlong **)&DAT_18086c040;
      }
      auVar3 = vroundss_avx(ZEXT816(0),
                            ZEXT416((uint)(((float)local_80.right - *(float *)pplVar11 * 633.0) *
                                          0.5)),1);
      auVar4 = vroundss_avx(ZEXT816(0),
                            ZEXT416((uint)(((float)local_80.bottom - *(float *)pplVar11 * 485.0) *
                                          0.5)),1);
      local_a8 = (char *)CONCAT44(auVar4._0_4_,auVar3._0_4_);
      FUN_18047da90(DAT_180c62f50,&local_a8);
      if ((DAT_180bbb280 != 0) && (DAT_180bbb288 == 0x40000)) {
        local_5c = 1;
        local_4c = 0;
        local_6c = 0x100;
        local_70 = 0x100;
        local_64 = 1;
        local_68 = 1;
        local_60 = 0x1c;
        local_54 = 1;
        local_50 = 8;
        local_a8 = (char *)DAT_180bbb280;
        local_a0 = 0x400;
        local_90[0] = (longlong *)0x0;
        iVar6 = (**(code **)(*param_2 + 0x28))(param_2,&local_70,&local_a8,local_90);
        if (-1 < iVar6) {
          (**(code **)(*param_2 + 0x38))(param_2,local_90[0],0,&DAT_180c62f40);
          (**(code **)(*local_90[0] + 0x10))();
        }
      }
      local_628[0] = std::
                     _Func_impl_no_alloc<`bool___cdecl_rendering::forge::initialize(HWND__*___ptr64,ID3D11Device*___ptr64,ID3D11DeviceContext*___ptr64)'::`2'::<lambda_1>,bool>
                     ::vftable;
      local_5f0 = local_628;
      FUN_18036b240(local_628,&DAT_180cd6cc0);
      if (local_5f0 != (undefined ***)0x0) {
        (*(code *)(*local_5f0)[4])(local_5f0,local_5f0 != local_628);
      }
      local_5e8[0] = std::
                     _Func_impl_no_alloc<`bool___cdecl_rendering::forge::initialize(HWND__*___ptr64,ID3D11Device*___ptr64,ID3D11DeviceContext*___ptr64)'::`2'::<lambda_2>,void>
                     ::vftable;
      local_5b0 = local_5e8;
      FUN_18036b240(local_5e8,&DAT_180cd6d00);
      if (local_5b0 != (undefined ***)0x0) {
        (*(code *)(*local_5b0)[4])(local_5b0,local_5b0 != local_5e8);
      }
      local_5a8[0] = std::
                     _Func_impl_no_alloc<`bool___cdecl_rendering::forge::initialize(HWND__*___ptr64,ID3D11Device*___ptr64,ID3D11DeviceContext*___ptr64)'::`2'::<lambda_3>,unsigned___int64>
                     ::vftable;
      local_570 = local_5a8;
      FUN_18036b240(local_5a8,&DAT_180cd6c00);
      if (local_570 != (undefined ***)0x0) {
        (*(code *)(*local_570)[4])(local_570,local_570 != local_5a8);
      }
      local_568[0] = std::
                     _Func_impl_no_alloc<`bool___cdecl_rendering::forge::initialize(HWND__*___ptr64,ID3D11Device*___ptr64,ID3D11DeviceContext*___ptr64)'::`2'::<lambda_4>,unsigned___int64>
                     ::vftable;
      local_530 = local_568;
      FUN_18036b240(local_568,&DAT_180cd6c40);
      if (local_530 != (undefined ***)0x0) {
        (*(code *)(*local_530)[4])(local_530,local_530 != local_568);
      }
      local_528[0] = std::
                     _Func_impl_no_alloc<`bool___cdecl_rendering::forge::initialize(HWND__*___ptr64,ID3D11Device*___ptr64,ID3D11DeviceContext*___ptr64)'::`2'::<lambda_5>,void,int>
                     ::vftable;
      local_4f0 = local_528;
      FUN_18036b240(local_528,&DAT_180cd6d80);
      if (local_4f0 != (undefined ***)0x0) {
        (*(code *)(*local_4f0)[4])(local_4f0,local_4f0 != local_528);
      }
      local_4e8[0] = std::
                     _Func_impl_no_alloc<`bool___cdecl_rendering::forge::initialize(HWND__*___ptr64,ID3D11Device*___ptr64,ID3D11DeviceContext*___ptr64)'::`2'::<lambda_6>,void,float>
                     ::vftable;
      local_4b0 = local_4e8;
      FUN_18036b240(local_4e8,&DAT_180cd6dc0);
      if (local_4b0 != (undefined ***)0x0) {
        (*(code *)(*local_4b0)[4])(local_4b0,local_4b0 != local_4e8);
      }
      local_4a8[0] = std::
                     _Func_impl_no_alloc<`bool___cdecl_rendering::forge::initialize(HWND__*___ptr64,ID3D11Device*___ptr64,ID3D11DeviceContext*___ptr64)'::`2'::<lambda_7>,void,ImVec2_const&___ptr64,ImVec2_const&___ptr64>
                     ::vftable;
      local_470 = local_4a8;
      FUN_18036b240(local_4a8,&DAT_180cd65c0);
      if (local_470 != (undefined ***)0x0) {
        (*(code *)(*local_470)[4])(local_470,local_470 != local_4a8);
      }
      local_468[0] = std::
                     _Func_impl_no_alloc<`bool___cdecl_rendering::forge::initialize(HWND__*___ptr64,ID3D11Device*___ptr64,ID3D11DeviceContext*___ptr64)'::`2'::<lambda_8>,ImVec2>
                     ::vftable;
      local_430 = local_468;
      FUN_18036b240(local_468,&DAT_180cd6e40);
      if (local_430 != (undefined ***)0x0) {
        (*(code *)(*local_430)[4])(local_430,local_430 != local_468);
      }
      local_428[0] = std::
                     _Func_impl_no_alloc<`bool___cdecl_rendering::forge::initialize(HWND__*___ptr64,ID3D11Device*___ptr64,ID3D11DeviceContext*___ptr64)'::`2'::<lambda_9>,bool,float*___ptr64,float*___ptr64,float*___ptr64,float*___ptr64>
                     ::vftable;
      local_3f0 = local_428;
      FUN_18036b240(local_428,&DAT_180cd6e80);
      if (local_3f0 != (undefined ***)0x0) {
        (*(code *)(*local_3f0)[4])(local_3f0,local_3f0 != local_428);
      }
      local_3e8[0] = std::
                     _Func_impl_no_alloc<`bool___cdecl_rendering::forge::initialize(HWND__*___ptr64,ID3D11Device*___ptr64,ID3D11DeviceContext*___ptr64)'::`2'::<lambda_10>,bool,int,float*___ptr64,float*___ptr64,float*___ptr64,float*___ptr64>
                     ::vftable;
      local_3b0 = local_3e8;
      FUN_18036b240(local_3e8,&DAT_180cd6ec0);
      if (local_3b0 != (undefined ***)0x0) {
        (*(code *)(*local_3b0)[4])(local_3b0,local_3b0 != local_3e8);
      }
      local_3a8[0] = std::
                     _Func_impl_no_alloc<`bool___cdecl_rendering::forge::initialize(HWND__*___ptr64,ID3D11Device*___ptr64,ID3D11DeviceContext*___ptr64)'::`2'::<lambda_11>,unsigned___int64,char_const*___ptr64,float*___ptr64,float*___ptr64>
                     ::vftable;
      local_370 = local_3a8;
      FUN_18036b240(local_3a8,&DAT_180cd6e00);
      if (local_370 != (undefined ***)0x0) {
        (*(code *)(*local_370)[4])(local_370,local_370 != local_3a8);
      }
      local_368[0] = std::
                     _Func_impl_no_alloc<`bool___cdecl_rendering::forge::initialize(HWND__*___ptr64,ID3D11Device*___ptr64,ID3D11DeviceContext*___ptr64)'::`2'::<lambda_12>,char_const*___ptr64>
                     ::vftable;
      local_330 = local_368;
      FUN_18036b240(local_368,&DAT_180cd6bc0);
      if (local_330 != (undefined ***)0x0) {
        (*(code *)(*local_330)[4])(local_330,local_330 != local_368);
      }
      local_328[0] = std::
                     _Func_impl_no_alloc<`bool___cdecl_rendering::forge::initialize(HWND__*___ptr64,ID3D11Device*___ptr64,ID3D11DeviceContext*___ptr64)'::`2'::<lambda_13>,int>
                     ::vftable;
      local_2f0 = local_328;
      FUN_18036b240(local_328,&DAT_180cd6c80);
      if (local_2f0 != (undefined ***)0x0) {
        (*(code *)(*local_2f0)[4])(local_2f0,local_2f0 != local_328);
      }
      local_2e8[0] = std::
                     _Func_impl_no_alloc<`bool___cdecl_rendering::forge::initialize(HWND__*___ptr64,ID3D11Device*___ptr64,ID3D11DeviceContext*___ptr64)'::`2'::<lambda_14>,void,int>
                     ::vftable;
      local_2b0 = local_2e8;
      FUN_18036b240(local_2e8,&DAT_180cd6d40);
      if (local_2b0 != (undefined ***)0x0) {
        (*(code *)(*local_2b0)[4])(local_2b0,local_2b0 != local_2e8);
      }
      local_2a8[0] = std::
                     _Func_impl_no_alloc<`bool___cdecl_rendering::forge::initialize(HWND__*___ptr64,ID3D11Device*___ptr64,ID3D11DeviceContext*___ptr64)'::`2'::<lambda_15>,bool>
                     ::vftable;
      local_270 = local_2a8;
      FUN_18036b240(local_2a8,&DAT_180cd6a80);
      if (local_270 != (undefined ***)0x0) {
        (*(code *)(*local_270)[4])(local_270,local_270 != local_2a8);
      }
      local_268[0] = std::
                     _Func_impl_no_alloc<`bool___cdecl_rendering::forge::initialize(HWND__*___ptr64,ID3D11Device*___ptr64,ID3D11DeviceContext*___ptr64)'::`2'::<lambda_16>,bool>
                     ::vftable;
      local_230 = local_268;
      FUN_18036b240(local_268,&DAT_180cd6640);
      if (local_230 != (undefined ***)0x0) {
        (*(code *)(*local_230)[4])(local_230,local_230 != local_268);
      }
      local_aa8 = std::_Func_impl_no_alloc<bool_(__cdecl*)(int),bool,int>::vftable;
      local_aa0 = FUN_180525be0;
      local_a70 = &local_aa8;
      FUN_18036b240(&local_aa8,&DAT_180cd6780);
      if (local_a70 != (undefined ***)0x0) {
        (*(code *)(*local_a70)[4])(local_a70,local_a70 != &local_aa8);
      }
      local_a68 = std::_Func_impl_no_alloc<bool_(__cdecl*)(int),bool,int>::vftable;
      local_a60 = FUN_180178530;
      local_a30 = &local_a68;
      FUN_18036b240(&local_a68,&DAT_180cd67c0);
      if (local_a30 != (undefined ***)0x0) {
        (*(code *)(*local_a30)[4])(local_a30,local_a30 != &local_a68);
      }
      local_228[0] = std::
                     _Func_impl_no_alloc<`bool___cdecl_rendering::forge::initialize(HWND__*___ptr64,ID3D11Device*___ptr64,ID3D11DeviceContext*___ptr64)'::`2'::<lambda_17>,unsigned___int64,int>
                     ::vftable;
      local_1f0 = local_228;
      FUN_18036b240(local_228,&DAT_180cd6800);
      if (local_1f0 != (undefined ***)0x0) {
        (*(code *)(*local_1f0)[4])(local_1f0,local_1f0 != local_228);
      }
      local_a28 = std::_Func_impl_no_alloc<bool_(__cdecl*)(int,int),bool,int,int>::vftable;
      local_a20 = FUN_180525f60;
      local_9f0 = &local_a28;
      FUN_18036b240(&local_a28,&DAT_180cd6840);
      if (local_9f0 != (undefined ***)0x0) {
        (*(code *)(*local_9f0)[4])(local_9f0,local_9f0 != &local_a28);
      }
      local_9e8 = std::
                  _Func_impl_no_alloc<unsigned___int64_(__cdecl*)(int,float*___ptr64,float*___ptr64),unsigned___int64,int,float*___ptr64,float*___ptr64>
                  ::vftable;
      local_9e0 = FUN_18052a120;
      local_9b0 = &local_9e8;
      FUN_18036b240(&local_9e8,&DAT_180cd6880);
      if (local_9b0 != (undefined ***)0x0) {
        (*(code *)(*local_9b0)[4])(local_9b0,local_9b0 != &local_9e8);
      }
      local_9a8 = std::
                  _Func_impl_no_alloc<char_const*___ptr64_(__cdecl*)(int),char_const*___ptr64,int>::
                  vftable;
      local_9a0 = FUN_180529f40;
      local_970 = &local_9a8;
      FUN_18036b240(&local_9a8,&DAT_180cd66c0);
      if (local_970 != (undefined ***)0x0) {
        (*(code *)(*local_970)[4])(local_970,local_970 != &local_9a8);
      }
      local_ae8 = std::_Func_impl_no_alloc<bool_(__cdecl*)(void),bool>::vftable;
      local_ae0 = FUN_1801ee010;
      local_ab0 = &local_ae8;
      FUN_18036b240(&local_ae8,&DAT_180cd6680);
      if (local_ab0 != (undefined ***)0x0) {
        (*(code *)(*local_ab0)[4])(local_ab0,local_ab0 != &local_ae8);
      }
      local_928 = std::
                  _Func_impl_no_alloc<unsigned___int64_(__cdecl*)(int,int,ImVec2_const&___ptr64,ImVec2_const&___ptr64),unsigned___int64,int,int,ImVec2_const&___ptr64,ImVec2_const&___ptr64>
                  ::vftable;
      local_920 = FUN_18052d100;
      local_8f0 = &local_928;
      FUN_18036b240(&local_928,&DAT_180cd68c0);
      if (local_8f0 != (undefined ***)0x0) {
        (*(code *)(*local_8f0)[4])(local_8f0,local_8f0 != &local_928);
      }
      local_8e8 = std::_Func_impl_no_alloc<void_(__cdecl*)(int,int,int,int),void,int,int,int,int>::
                  vftable;
      local_8e0 = FUN_18052acc0;
      local_8b0 = &local_8e8;
      FUN_18036b240(&local_8e8,&DAT_180cd6900);
      if (local_8b0 != (undefined ***)0x0) {
        (*(code *)(*local_8b0)[4])(local_8b0,local_8b0 != &local_8e8);
      }
      local_8a8 = std::_Func_impl_no_alloc<bool_(__cdecl*)(int,int),bool,int,int>::vftable;
      local_8a0 = FUN_18052b110;
      local_870 = &local_8a8;
      FUN_18036b240(&local_8a8,&DAT_180cd6980);
      if (local_870 != (undefined ***)0x0) {
        (*(code *)(*local_870)[4])(local_870,local_870 != &local_8a8);
      }
      local_1e8[0] = std::
                     _Func_impl_no_alloc<`bool___cdecl_rendering::forge::initialize(HWND__*___ptr64,ID3D11Device*___ptr64,ID3D11DeviceContext*___ptr64)'::`2'::<lambda_18>,bool>
                     ::vftable;
      local_1b0 = local_1e8;
      FUN_18036b240(local_1e8,&DAT_180cd6f40);
      if (local_1b0 != (undefined ***)0x0) {
        (*(code *)(*local_1b0)[4])(local_1b0,local_1b0 != local_1e8);
      }
      local_1a8[0] = std::
                     _Func_impl_no_alloc<`bool___cdecl_rendering::forge::initialize(HWND__*___ptr64,ID3D11Device*___ptr64,ID3D11DeviceContext*___ptr64)'::`2'::<lambda_19>,bool>
                     ::vftable;
      local_170 = local_1a8;
      FUN_18036b240(local_1a8,&DAT_180cd6440);
      if (local_170 != (undefined ***)0x0) {
        (*(code *)(*local_170)[4])(local_170,local_170 != local_1a8);
      }
      local_868 = std::_Func_impl_no_alloc<void_(__cdecl*)(int,int),void,int,int>::vftable;
      local_860 = FUN_18052b190;
      local_830 = &local_868;
      FUN_18036b240(&local_868,&DAT_180cd69c0);
      if (local_830 != (undefined ***)0x0) {
        (*(code *)(*local_830)[4])(local_830,local_830 != &local_868);
      }
      local_828 = std::
                  _Func_impl_no_alloc<unsigned___int64_(__cdecl*)(bool,int,float*___ptr64,float*___ptr64),unsigned___int64,bool,int,float*___ptr64,float*___ptr64>
                  ::vftable;
      local_820 = FUN_18052b2d0;
      local_7f0 = &local_828;
      FUN_18036b240(&local_828,&DAT_180cd6940);
      if (local_7f0 != (undefined ***)0x0) {
        (*(code *)(*local_7f0)[4])(local_7f0,local_7f0 != &local_828);
      }
      local_7e8 = std::_Func_impl_no_alloc<void_(__cdecl*)(int,int),void,int,int>::vftable;
      local_7e0 = FUN_18052c830;
      local_7b0 = &local_7e8;
      FUN_18036b240(&local_7e8,&DAT_180cd6a00);
      if (local_7b0 != (undefined ***)0x0) {
        (*(code *)(*local_7b0)[4])(local_7b0,local_7b0 != &local_7e8);
      }
      local_7a8 = std::_Func_impl_no_alloc<bool_(__cdecl*)(void),bool>::vftable;
      local_7a0 = FUN_18052c6c0;
      local_770 = &local_7a8;
      FUN_18036b240(&local_7a8,&DAT_180cd6a40);
      if (local_770 != (undefined ***)0x0) {
        (*(code *)(*local_770)[4])(local_770,local_770 != &local_7a8);
      }
      local_768 = std::_Func_impl_no_alloc<bool_(__cdecl*)(void),bool>::vftable;
      local_760 = FUN_18052eab0;
      local_730 = &local_768;
      FUN_18036b240(&local_768,&DAT_180cd6700);
      if (local_730 != (undefined ***)0x0) {
        (*(code *)(*local_730)[4])(local_730,local_730 != &local_768);
      }
      local_168[0] = std::
                     _Func_impl_no_alloc<`bool___cdecl_rendering::forge::initialize(HWND__*___ptr64,ID3D11Device*___ptr64,ID3D11DeviceContext*___ptr64)'::`2'::<lambda_20>,int>
                     ::vftable;
      local_130 = local_168;
      FUN_18036b240(local_168,&DAT_180cd6740);
      if (local_130 != (undefined ***)0x0) {
        (*(code *)(*local_130)[4])(local_130,local_130 != local_168);
      }
      local_728 = std::
                  _Func_impl_no_alloc<void_(__cdecl*)(char_const*___ptr64,ImVec2_const&___ptr64,ImVec2_const&___ptr64),void,char_const*___ptr64,ImVec2_const&___ptr64,ImVec2_const&___ptr64>
                  ::vftable;
      local_720 = FUN_18050ce60;
      local_6f0 = &local_728;
      FUN_18036b240(&local_728,&DAT_180cd6f00);
      if (local_6f0 != (undefined ***)0x0) {
        (*(code *)(*local_6f0)[4])(local_6f0,local_6f0 != &local_728);
      }
      local_6e8 = std::
                  _Func_impl_no_alloc<unsigned___int64_(__cdecl*)(ImVec2_const&___ptr64,ImVec2_const&___ptr64),unsigned___int64,ImVec2_const&___ptr64,ImVec2_const&___ptr64>
                  ::vftable;
      local_6e0 = FUN_18052ea80;
      local_6b0 = &local_6e8;
      FUN_18036b240(&local_6e8,&DAT_180cd6ac0);
      if (local_6b0 != (undefined ***)0x0) {
        (*(code *)(*local_6b0)[4])(local_6b0,local_6b0 != &local_6e8);
      }
      local_6a8 = std::
                  _Func_impl_no_alloc<unsigned___int64_(__cdecl*)(ImVec2_const&___ptr64,ImVec2_const&___ptr64),unsigned___int64,ImVec2_const&___ptr64,ImVec2_const&___ptr64>
                  ::vftable;
      local_6a0 = FUN_18052f9c0;
      local_670 = &local_6a8;
      FUN_18036b240(&local_6a8,&DAT_180cd6b00);
      if (local_670 != (undefined ***)0x0) {
        (*(code *)(*local_670)[4])(local_670,local_670 != &local_6a8);
      }
      local_668 = std::
                  _Func_impl_no_alloc<void_(__cdecl*)(void*___ptr64,ImVec2_const&___ptr64,ImVec2_const&___ptr64),void,void*___ptr64,ImVec2_const&___ptr64,ImVec2_const&___ptr64>
                  ::vftable;
      local_660 = FUN_18050e540;
      local_630 = &local_668;
      FUN_18036b240(&local_668,&DAT_180cd6580);
      if (local_630 != (undefined ***)0x0) {
        (*(code *)(*local_630)[4])(local_630,local_630 != &local_668);
      }
      local_be8 = std::
                  _Func_impl_no_alloc<void_(__cdecl*)(nl::Menu&___ptr64,ImVec2_const&___ptr64),void,nl::Menu&___ptr64,ImVec2_const&___ptr64>
                  ::vftable;
      local_be0 = FUN_18051f8c0;
      local_bb0 = &local_be8;
      FUN_18036b240(&local_be8,&DAT_180cd6480);
      if (local_bb0 != (undefined ***)0x0) {
        (*(code *)(*local_bb0)[4])(local_bb0,local_bb0 != &local_be8);
      }
      local_ba8 = std::
                  _Func_impl_no_alloc<void_(__cdecl*)(nl::Menu&___ptr64,ImVec2_const&___ptr64),void,nl::Menu&___ptr64,ImVec2_const&___ptr64>
                  ::vftable;
      local_ba0 = FUN_180544310;
      local_b70 = &local_ba8;
      FUN_18036b240(&local_ba8,&DAT_180cd64c0);
      if (local_b70 != (undefined ***)0x0) {
        (*(code *)(*local_b70)[4])(local_b70,local_b70 != &local_ba8);
      }
      local_b68 = std::
                  _Func_impl_no_alloc<void_(__cdecl*)(nl::Menu&___ptr64,ImVec2_const&___ptr64),void,nl::Menu&___ptr64,ImVec2_const&___ptr64>
                  ::vftable;
      local_b60 = FUN_180533150;
      local_b30 = &local_b68;
      FUN_18036b240(&local_b68,&DAT_180cd6500);
      if (local_b30 != (undefined ***)0x0) {
        (*(code *)(*local_b30)[4])(local_b30,local_b30 != &local_b68);
      }
      local_b28 = std::_Func_impl_no_alloc<void_(__cdecl*)(int,int),void,int,int>::vftable;
      local_b20 = FUN_18052b8d0;
      local_af0 = &local_b28;
      FUN_18036b240(&local_b28,&DAT_180cd6540);
      if (local_af0 != (undefined ***)0x0) {
        (*(code *)(*local_af0)[4])(local_af0,local_af0 != &local_b28);
      }
      local_968 = std::_Func_impl_no_alloc<void_(__cdecl*)(int),void,int>::vftable;
      local_960 = FUN_18052be80;
      local_930 = &local_968;
      FUN_18036b240(&local_968,&DAT_180cd6600);
      if (local_930 != (undefined ***)0x0) {
        (*(code *)(*local_930)[4])(local_930,local_930 != &local_968);
      }
      local_128[0] = std::
                     _Func_impl_no_alloc<`bool___cdecl_rendering::forge::initialize(HWND__*___ptr64,ID3D11Device*___ptr64,ID3D11DeviceContext*___ptr64)'::`2'::<lambda_21>,char_const*___ptr64>
                     ::vftable;
      local_f0 = local_128;
      FUN_18036b240(local_128,&DAT_180cd6b40);
      if (local_f0 != (undefined ***)0x0) {
        (*(code *)(*local_f0)[4])(local_f0,local_f0 != local_128);
      }
      local_e8[0] = std::
                    _Func_impl_no_alloc<`bool___cdecl_rendering::forge::initialize(HWND__*___ptr64,ID3D11Device*___ptr64,ID3D11DeviceContext*___ptr64)'::`2'::<lambda_22>,char_const*___ptr64>
                    ::vftable;
      local_b0 = local_e8;
      FUN_18036b240(local_e8,&DAT_180cd6b80);
      if (local_b0 != (undefined ***)0x0) {
        (*(code *)(*local_b0)[4])(local_b0,local_b0 != local_e8);
      }
      plVar12 = (longlong *)FUN_18043aae0();
      plVar14 = (longlong *)*plVar12;
      lVar7 = plVar12[1] - (longlong)plVar14 >> 3;
      plVar12 = plVar14 + lVar7;
      for (; plVar14 != plVar12; plVar14 = plVar14 + 1) {
        plVar2 = (longlong *)*plVar14;
        if (plVar2 != (longlong *)0x0) {
          local_a8 = (char *)plVar2;
          plVar13 = (longlong *)FUN_18056cec0(lVar7,local_90,&local_a8);
          lVar7 = *plVar13;
          *(longlong **)(lVar7 + 0x18) = plVar2;
        }
      }
    }
  }
  FUN_1805f68fc(&DAT_1808e6940);
}



