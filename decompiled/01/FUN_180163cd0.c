// FUN_180163cd0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180163cd0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined1 FUN_180163cd0(longlong *param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  undefined1 (*pauVar4) [16];
  undefined1 uVar5;
  undefined1 (*local_78) [16];
  undefined1 (*pauStack_70) [16];
  undefined1 (*local_68) [16];
  undefined1 (*local_58) [16];
  undefined8 local_50;
  undefined1 local_48 [8];
  undefined1 local_40 [24];
  
  pcVar3 = *(code **)(*param_1 + 8);
  FUN_180163ae0(local_48,param_1 + 0x28);
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_58 = (undefined1 (*) [16])0x180827288;
    local_50 = 0x15;
    DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_58);
  }
  pauStack_70 = (undefined1 (*) [16])
                (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x48);
  local_68 = pauStack_70;
  if (pauStack_70 == (undefined1 (*) [16])0x0) {
    pauStack_70 = (undefined1 (*) [16])0x0;
  }
  else {
    *pauStack_70 = (undefined1  [16])0x0;
    *(undefined4 *)(*pauStack_70 + 8) = 1;
    *(undefined4 *)(*pauStack_70 + 0xc) = 1;
    *(undefined ***)*pauStack_70 =
         std::_Ref_count_obj2<Concurrency::details::_ExceptionHolder>::vftable;
    local_58 = pauStack_70 + 1;
    *(undefined4 *)*local_58 = 0;
    *(undefined8 *)(pauStack_70[1] + 8) = 0;
    *(undefined8 *)pauStack_70[2] = 0;
    FUN_1805fd294(pauStack_70[1] + 8,param_2);
    FUN_180163ae0(pauStack_70[2] + 8,local_48);
  }
  local_78 = pauStack_70 + 1;
  uVar5 = (*pcVar3)(param_1,1,1,0,&local_78);
  pauVar4 = pauStack_70;
  if (pauStack_70 != (undefined1 (*) [16])0x0) {
    LOCK();
    piVar1 = (int *)(*pauStack_70 + 8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)*pauStack_70)(pauStack_70);
      LOCK();
      piVar1 = (int *)(*pauVar4 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*(longlong *)*pauVar4 + 8))(pauVar4);
      }
    }
  }
  FUN_1800f0160(local_40);
  return uVar5;
}



