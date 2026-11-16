// FUN_180174ee0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180174ee0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 *
FUN_180174ee0(undefined8 *param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  char *local_108;
  undefined8 local_100;
  undefined1 local_f0 [16];
  ulonglong local_e0;
  undefined1 local_d8 [16];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [16];
  undefined1 local_98;
  undefined8 local_90;
  undefined1 local_88 [16];
  undefined8 local_78;
  undefined2 local_70;
  undefined8 *local_68;
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  
  local_f0 = (undefined1  [16])0x0;
  local_e0 = 0;
  FUN_1800f5370(local_58,param_3,param_3,param_4,local_58);
  FUN_1800f5370(local_38,param_3 + 0x20);
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_108 = "tier0.dll:g_pMemAlloc";
    local_100 = 0x15;
    DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_108);
  }
  puVar5 = (undefined8 *)
           (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x160);
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)0x0;
  }
  else {
    FUN_18063ab10(puVar5,0,0x160,param_4,puVar5);
    FUN_180179df0(puVar5,local_58);
    *puVar5 = std::
              _Task_async_state<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>
              ::vftable;
    puVar3 = puVar5 + 0x2a;
    *puVar3 = 0;
    puVar5[0x2b] = 0;
    local_68 = &local_c8;
    puVar4 = (undefined8 *)FUN_180163070();
    if (puVar4[1] != 0) {
      LOCK();
      piVar1 = (int *)(puVar4[1] + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    local_c8 = *puVar4;
    local_c0 = puVar4[1];
    local_b0 = 0;
    local_b8 = local_c8;
    FUN_1805fc8a4(local_a8);
    local_88 = (undefined1  [16])0x0;
    local_78 = 0;
    local_90 = 0;
    local_98 = 0;
    local_70 = 0;
    puVar4 = (undefined8 *)FUN_180179f90(local_d8,puVar5,&local_c8);
    if (puVar3 != puVar4) {
      FUN_1801787e0(puVar3,puVar4);
    }
    FUN_1800efed0(local_d8);
    *(undefined1 *)((longlong)puVar5 + 0x102) = 1;
  }
  local_f0[8] = 0;
  local_f0._0_8_ = puVar5;
  local_e0 = local_e0 & 0xffffffffffffff00;
  FUN_18015b930(local_38);
  FUN_18015b930(local_58);
  if (puVar5 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_1801647e0(4);
  }
  *param_1 = puVar5;
  *(undefined1 *)(param_1 + 1) = 1;
  LOCK();
  *(int *)(puVar5 + 1) = *(int *)(puVar5 + 1) + 1;
  UNLOCK();
  LOCK();
  piVar1 = (int *)(puVar5 + 1);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1) {
    puVar3 = (undefined8 *)puVar5[0x21];
    if (puVar3 == (undefined8 *)0x0) {
      (**(code **)*puVar5)(puVar5,1);
    }
    else {
      (**(code **)*puVar3)(puVar3,puVar5);
    }
  }
  return param_1;
}



