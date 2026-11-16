// FUN_1801a5100 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801a5100 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801a5100(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  undefined1 (*pauVar6) [16];
  undefined1 auStack_2e8 [32];
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined1 local_2b8 [32];
  undefined8 local_298;
  undefined1 local_290 [592];
  undefined1 (*local_40) [16];
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_2e8;
  FUN_1800f5370(local_2b8);
  local_298 = 0xffffffffffffffff;
  iVar5 = FUN_18017d830(local_2b8,param_3,&local_298,local_290);
  local_2c8._1_7_ = (uint7)(uint3)((uint)(undefined4)local_2c8 >> 8);
  if (iVar5 == 0) {
    local_2c8 = (char *)CONCAT71(local_2c8._1_7_,1);
  }
  else {
    local_2c8 = (char *)((ulonglong)local_2c8._1_7_ << 8);
    if (iVar5 != 0x12) {
      local_2c8 = (char *)CONCAT44(iVar5,(undefined4)local_2c8);
    }
  }
  local_40 = (undefined1 (*) [16])local_2c8;
  if ((char)local_2c8 != '\0') {
    if (DAT_180c7df28 == (undefined8 *)0x0) {
      local_2c8 = "tier0.dll:g_pMemAlloc";
      local_2c0 = 0x15;
      DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_2c8);
    }
    pauVar6 = (undefined1 (*) [16])
              (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x78);
    local_2c8 = (char *)pauVar6;
    if (pauVar6 == (undefined1 (*) [16])0x0) {
      pauVar6 = (undefined1 (*) [16])0x0;
    }
    else {
      *pauVar6 = (undefined1  [16])0x0;
      *(undefined4 *)(*pauVar6 + 8) = 1;
      *(undefined4 *)(*pauVar6 + 0xc) = 1;
      *(undefined ***)*pauVar6 =
           std::_Ref_count_obj2<std::filesystem::_Recursive_dir_enum_impl>::vftable;
      FUN_18017db20(pauVar6 + 1,local_2b8);
      *(undefined8 *)(pauVar6[5] + 8) = 0;
      *(undefined8 *)pauVar6[6] = 0;
      *(undefined8 *)(pauVar6[6] + 8) = 0;
      *(undefined4 *)pauVar6[7] = param_3;
      pauVar6[7][4] = 1;
    }
    *param_1 = pauVar6 + 1;
    plVar3 = (longlong *)param_1[1];
    param_1[1] = pauVar6;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar3 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3);
        }
      }
    }
  }
  FUN_1805fb444(local_298);
  FUN_18015b930(local_2b8);
}



