// FUN_1800f4710 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800f4710 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800f4710(undefined8 param_1,undefined1 (*param_2) [16],int param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 (*pauVar6) [16];
  undefined1 auStack_358 [32];
  int local_338;
  undefined4 local_330;
  undefined4 local_328;
  char *local_318;
  undefined8 local_310;
  undefined1 local_308 [16];
  undefined1 (*local_2f8) [16];
  undefined1 (*local_2f0) [16];
  undefined1 (*local_2e8) [16];
  undefined1 (*local_2d8) [16];
  undefined1 (*local_2d0) [16];
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 *local_288;
  undefined1 local_280;
  undefined1 local_27f;
  undefined1 local_27e [512];
  undefined1 local_7e;
  undefined1 local_78 [32];
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_358;
  *param_2 = (undefined1  [16])0x0;
  *(undefined8 *)param_2[1] = 0;
  *(undefined8 *)(param_2[1] + 8) = 0xf;
  (*param_2)[0] = 0;
  local_328 = 1;
  local_2f8 = param_2;
  FUN_18063ab10(&local_2d8,0,0x288);
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_318 = "tier0.dll:g_pMemAlloc";
    local_310 = 0x15;
    DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_318);
  }
  pauVar6 = (undefined1 (*) [16])
            (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x20);
  if (pauVar6 == (undefined1 (*) [16])0x0) {
    pauVar6 = (undefined1 (*) [16])0x0;
  }
  else {
    *pauVar6 = (undefined1  [16])0x0;
    *(undefined4 *)(*pauVar6 + 8) = 1;
    *(undefined4 *)(*pauVar6 + 0xc) = 1;
    *(undefined ***)*pauVar6 =
         std::
         _Ref_count_obj2<nlohmann::json_abi_v3_12_0::detail::output_string_adapter<char,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
         ::vftable;
    *(undefined1 (**) [16])(pauVar6[1] + 8) = param_2;
    *(undefined ***)pauVar6[1] =
         nlohmann::json_abi_v3_12_0::detail::
         output_string_adapter<char,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
         ::vftable;
  }
  local_328 = 3;
  local_2f0 = pauVar6 + 1;
  if (pauVar6 != (undefined1 (*) [16])0x0) {
    LOCK();
    *(int *)(*pauVar6 + 8) = *(int *)(*pauVar6 + 8) + 1;
    UNLOCK();
  }
  local_318 = local_308;
  local_308 = (undefined1  [16])0x0;
  local_2c8 = 0;
  uStack_2c0 = 0;
  uStack_2b8 = 0;
  uStack_2b0 = 0;
  local_2a8 = 0;
  uStack_2a0 = 0;
  uStack_298 = 0;
  uStack_290 = 0;
  local_2e8 = pauVar6;
  local_2d8 = local_2f0;
  local_2d0 = pauVar6;
  local_288 = (undefined8 *)FUN_18061159c();
  if ((undefined1 *)local_288[1] == (undefined1 *)0x0) {
    local_280 = 0;
  }
  else {
    local_280 = *(undefined1 *)local_288[1];
  }
  if ((undefined1 *)*local_288 == (undefined1 *)0x0) {
    local_27f = 0;
  }
  else {
    local_27f = *(undefined1 *)*local_288;
  }
  FUN_18063ab10(local_27e,0,0x200);
  local_7e = 0x20;
  FUN_18015ae30(local_78,0x200,0x20);
  local_58 = param_6;
  uVar5 = local_308._8_8_;
  if ((longlong *)local_308._8_8_ != (longlong *)0x0) {
    LOCK();
    plVar1 = (longlong *)(local_308._8_8_ + 8);
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (*(code *)**(undefined8 **)local_308._8_8_)(local_308._8_8_);
      LOCK();
      piVar2 = (int *)(uVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*(longlong *)uVar5 + 8))(uVar5);
      }
    }
  }
  if (pauVar6 != (undefined1 (*) [16])0x0) {
    LOCK();
    piVar2 = (int *)(*pauVar6 + 8);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (*(code *)**(undefined8 **)*pauVar6)(pauVar6);
      LOCK();
      piVar2 = (int *)(*pauVar6 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*(longlong *)*pauVar6 + 8))(pauVar6);
      }
    }
  }
  local_330 = 0;
  if (param_3 < 0) {
    local_338 = 0;
  }
  else {
    local_338 = param_3;
  }
  FUN_180111fa0(&local_2d8,param_1,param_3 >= 0,0);
  FUN_18015c010(local_78);
  pauVar6 = local_2d0;
  if (local_2d0 != (undefined1 (*) [16])0x0) {
    LOCK();
    piVar2 = (int *)(*local_2d0 + 8);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (*(code *)**(undefined8 **)*local_2d0)(local_2d0);
      LOCK();
      piVar2 = (int *)(*pauVar6 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*(longlong *)*pauVar6 + 8))(pauVar6);
      }
    }
  }
}



