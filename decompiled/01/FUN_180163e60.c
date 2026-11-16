// FUN_180163e60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180163e60 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_180163e60(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  char *pcVar4;
  longlong *plVar5;
  undefined8 local_68;
  char *local_58;
  undefined8 local_50;
  undefined8 *local_48;
  
  plVar3 = (longlong *)param_2[1];
  plVar5 = (longlong *)0x0;
  if (plVar3 == (longlong *)0x0) {
    local_68 = 0;
  }
  else {
    local_68 = *param_2;
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
    plVar5 = plVar3;
  }
  local_48 = param_2;
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_58 = "tier0.dll:g_pMemAlloc";
    local_50 = 0x15;
    DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_58);
  }
  pcVar4 = (char *)(**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0xd0);
  local_58 = pcVar4;
  if (pcVar4 == (char *)0x0) {
    pcVar4 = (char *)0x0;
  }
  else {
    FUN_18063ab10(pcVar4,0,0xd0);
    *(undefined ***)pcVar4 = Concurrency::details::_RefCounter::vftable;
    pcVar4[8] = '\x01';
    pcVar4[9] = '\0';
    pcVar4[10] = '\0';
    pcVar4[0xb] = '\0';
    pcVar4[0x10] = '\x03';
    pcVar4[0x11] = '\0';
    pcVar4[0x12] = '\0';
    pcVar4[0x13] = '\0';
    pcVar4[0x18] = '\0';
    pcVar4[0x19] = '\0';
    pcVar4[0x1a] = '\0';
    pcVar4[0x1b] = '\0';
    pcVar4[0x1c] = '\0';
    pcVar4[0x1d] = '\0';
    pcVar4[0x1e] = '\0';
    pcVar4[0x1f] = '\0';
    pcVar4[0x20] = '\0';
    pcVar4[0x21] = '\0';
    pcVar4[0x22] = '\0';
    pcVar4[0x23] = '\0';
    pcVar4[0x24] = '\0';
    pcVar4[0x25] = '\0';
    pcVar4[0x26] = '\0';
    pcVar4[0x27] = '\0';
    pcVar4[0x28] = '\0';
    pcVar4[0x29] = '\0';
    pcVar4[0x2a] = '\0';
    pcVar4[0x2b] = '\0';
    pcVar4[0x2c] = '\0';
    pcVar4[0x2d] = '\0';
    pcVar4[0x2e] = '\0';
    pcVar4[0x2f] = '\0';
    pcVar4[0x30] = '\0';
    pcVar4[0x31] = '\0';
    pcVar4[0x32] = '\0';
    pcVar4[0x33] = '\0';
    pcVar4[0x34] = '\0';
    pcVar4[0x35] = '\0';
    pcVar4[0x36] = '\0';
    pcVar4[0x37] = '\0';
    pcVar4[0x38] = '\0';
    pcVar4[0x39] = '\0';
    pcVar4[0x3a] = '\0';
    pcVar4[0x3b] = '\0';
    pcVar4[0x3c] = '\0';
    pcVar4[0x3d] = '\0';
    pcVar4[0x3e] = '\0';
    pcVar4[0x3f] = '\0';
    pcVar4[0x40] = '\0';
    pcVar4[0x41] = '\0';
    pcVar4[0x42] = '\0';
    pcVar4[0x43] = '\0';
    pcVar4[0x44] = '\0';
    pcVar4[0x45] = '\0';
    pcVar4[0x46] = '\0';
    pcVar4[0x47] = '\0';
    *(undefined1 (*) [16])(pcVar4 + 0x48) = (undefined1  [16])0x0;
    pcVar4[0x58] = '\0';
    pcVar4[0x59] = '\0';
    pcVar4[0x5a] = '\0';
    pcVar4[0x5b] = '\0';
    pcVar4[0x5c] = '\0';
    pcVar4[0x5d] = '\0';
    pcVar4[0x5e] = '\0';
    pcVar4[0x5f] = '\0';
    pcVar4[0x78] = '\0';
    pcVar4[0x79] = '\0';
    pcVar4[0x7a] = '\0';
    pcVar4[0x7b] = '\0';
    pcVar4[0x7c] = '\0';
    pcVar4[0x7d] = '\0';
    pcVar4[0x7e] = '\0';
    pcVar4[0x7f] = '\0';
    pcVar4[0x80] = '\0';
    pcVar4[0x81] = '\0';
    pcVar4[0x82] = '\0';
    pcVar4[0x83] = '\0';
    pcVar4[0x84] = '\0';
    pcVar4[0x85] = '\0';
    pcVar4[0x86] = '\0';
    pcVar4[0x87] = '\0';
    pcVar4[0x88] = '\0';
    pcVar4[0x89] = '\0';
    pcVar4[0x8a] = '\0';
    pcVar4[0x8b] = '\0';
    pcVar4[0x8c] = '\0';
    pcVar4[0x8d] = '\0';
    pcVar4[0x8e] = '\0';
    pcVar4[0x8f] = '\0';
    pcVar4[0x90] = '\0';
    pcVar4[0x91] = '\0';
    pcVar4[0x92] = '\0';
    pcVar4[0x93] = '\0';
    pcVar4[0x94] = '\0';
    pcVar4[0x95] = '\0';
    pcVar4[0x96] = '\0';
    pcVar4[0x97] = '\0';
    *(undefined1 (*) [16])(pcVar4 + 0x98) = (undefined1  [16])0x0;
    pcVar4[0x68] = '\0';
    pcVar4[0x69] = '\0';
    pcVar4[0x6a] = '\0';
    pcVar4[0x6b] = '\0';
    pcVar4[0x6c] = '\0';
    pcVar4[0x6d] = '\0';
    pcVar4[0x6e] = '\0';
    pcVar4[0x6f] = '\0';
    pcVar4[0x70] = '\0';
    pcVar4[0x71] = '\0';
    pcVar4[0x72] = '\0';
    pcVar4[0x73] = '\0';
    pcVar4[0x74] = '\0';
    pcVar4[0x75] = '\0';
    pcVar4[0x76] = '\0';
    pcVar4[0x77] = '\0';
    pcVar4[0xa8] = -1;
    pcVar4[0xa9] = -1;
    pcVar4[0xaa] = -1;
    pcVar4[0xab] = -1;
    pcVar4[0x60] = '\x02';
    pcVar4[0x61] = '\0';
    pcVar4[0x62] = '\0';
    pcVar4[99] = '\0';
    pcVar4[0xac] = '\0';
    pcVar4[0xad] = '\0';
    pcVar4[0xae] = '\0';
    pcVar4[0xaf] = '\0';
    pcVar4[0xb0] = '\0';
    pcVar4[0xb8] = '\0';
    pcVar4[0xb9] = '\0';
    pcVar4[0xba] = '\0';
    pcVar4[0xbb] = '\0';
    pcVar4[0xbc] = '\0';
    pcVar4[0xbd] = '\0';
    pcVar4[0xbe] = '\0';
    pcVar4[0xbf] = '\0';
    *(undefined ***)pcVar4 =
         Concurrency::details::
         _CancellationTokenCallback<`public:_void___cdecl_Concurrency::details::_Task_impl_base::_RegisterCancellation(std::weak_ptr<Concurrency::details::_Task_impl_base>)___ptr64'::`2'::<lambda_1>_>
         ::vftable;
    pcVar4[0xc0] = '\0';
    pcVar4[0xc1] = '\0';
    pcVar4[0xc2] = '\0';
    pcVar4[0xc3] = '\0';
    pcVar4[0xc4] = '\0';
    pcVar4[0xc5] = '\0';
    pcVar4[0xc6] = '\0';
    pcVar4[199] = '\0';
    pcVar4[200] = '\0';
    pcVar4[0xc9] = '\0';
    pcVar4[0xca] = '\0';
    pcVar4[0xcb] = '\0';
    pcVar4[0xcc] = '\0';
    pcVar4[0xcd] = '\0';
    pcVar4[0xce] = '\0';
    pcVar4[0xcf] = '\0';
    if (plVar5 != (longlong *)0x0) {
      *(undefined8 *)(pcVar4 + 0xc0) = local_68;
      *(longlong **)(pcVar4 + 200) = plVar5;
      LOCK();
      *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
      UNLOCK();
    }
  }
  *(char **)(param_1 + 0x80) = pcVar4;
  FUN_1801631a0(*(undefined8 *)(param_1 + 0x78),pcVar4);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5);
    }
  }
  plVar3 = (longlong *)param_2[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  return;
}



