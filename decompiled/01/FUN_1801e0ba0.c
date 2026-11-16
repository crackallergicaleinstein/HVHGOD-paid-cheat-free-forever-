// FUN_1801e0ba0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801e0ba0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_1801e0ba0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  bool bVar5;
  undefined **ppuVar6;
  _Lockit local_d8 [8];
  longlong local_d0;
  undefined1 local_c8;
  longlong local_c0;
  undefined1 local_b8;
  longlong local_b0;
  undefined2 local_a8;
  longlong local_a0;
  undefined2 local_98;
  longlong local_90;
  undefined1 local_88;
  longlong local_80;
  undefined1 local_78;
  char *local_68;
  undefined8 local_60;
  undefined1 local_58 [48];
  
  bVar5 = false;
  if ((param_1 != (longlong *)0x0) && (*param_1 == 0)) {
    if (DAT_180c7df28 == 0) {
      local_68 = "tier0.dll:g_pMemAlloc";
      local_60 = 0x15;
      DAT_180c7df28 = FUN_180451750(&local_68);
    }
    puVar4 = (undefined8 *)(**(code **)(**(longlong **)DAT_180c7df28 + 8))();
    if (puVar4 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)0x0;
    }
    else {
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      puVar4[3] = 0;
      *(undefined1 (*) [16])(puVar4 + 4) = (undefined1  [16])0x0;
      lVar1 = *(longlong *)(param_2 + 8);
      if (lVar1 == 0) {
        ppuVar6 = &PTR_180700558;
      }
      else {
        ppuVar6 = *(undefined ***)(lVar1 + 0x28);
        if (ppuVar6 == (undefined **)0x0) {
          ppuVar6 = (undefined **)(lVar1 + 0x30);
        }
      }
      std::_Lockit::_Lockit(local_d8,0);
      local_d0 = 0;
      local_c8 = 0;
      local_c0 = 0;
      local_b8 = 0;
      local_b0 = 0;
      local_a8 = 0;
      local_a0 = 0;
      local_98 = 0;
      local_90 = 0;
      local_88 = 0;
      local_80 = 0;
      local_78 = 0;
      if (ppuVar6 == (undefined **)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_1805fa900("bad locale name");
      }
      std::_Locinfo::_Locinfo_ctor((_Locinfo *)local_d8,(char *)ppuVar6);
      bVar5 = true;
      *(undefined4 *)(puVar4 + 1) = 0;
      *puVar4 = std::numpunct<char>::vftable;
      FUN_18061159c();
      FUN_1805fd500(local_58);
      puVar4[2] = 0;
      puVar4[4] = 0;
      puVar4[5] = 0;
      puVar2 = (undefined1 *)_calloc_base(1,1);
      if (puVar2 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_1805fa854();
      }
      *puVar2 = 0;
      puVar4[2] = puVar2;
      puVar3 = (undefined4 *)_calloc_base(6,1);
      if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_1805fa854();
      }
      *puVar3 = 0x736c6166;
      *(undefined2 *)(puVar3 + 1) = 0x65;
      puVar4[4] = puVar3;
      puVar3 = (undefined4 *)_calloc_base(5,1);
      if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_1805fa854();
      }
      *puVar3 = 0x65757274;
      *(undefined1 *)(puVar3 + 1) = 0;
      puVar4[5] = puVar3;
      *(undefined2 *)(puVar4 + 3) = 0x2c2e;
    }
    *param_1 = (longlong)puVar4;
    if (bVar5) {
      std::_Locinfo::_Locinfo_dtor((_Locinfo *)local_d8);
      if (local_80 != 0) {
        thunk_FUN_180621380();
      }
      local_80 = 0;
      if (local_90 != 0) {
        thunk_FUN_180621380();
      }
      local_90 = 0;
      if (local_a0 != 0) {
        thunk_FUN_180621380();
      }
      local_a0 = 0;
      if (local_b0 != 0) {
        thunk_FUN_180621380();
      }
      local_b0 = 0;
      if (local_c0 != 0) {
        thunk_FUN_180621380();
      }
      local_c0 = 0;
      if (local_d0 != 0) {
        thunk_FUN_180621380();
      }
      local_d0 = 0;
      std::_Lockit::~_Lockit(local_d8);
    }
  }
  return 4;
}



