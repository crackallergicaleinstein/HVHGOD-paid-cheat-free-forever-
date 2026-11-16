// FUN_1801407f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801407f0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_1801407f0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  undefined **ppuVar3;
  undefined8 *puVar4;
  char *local_98;
  undefined8 local_90;
  _Lockit local_88 [8];
  longlong local_80;
  undefined1 local_78;
  longlong local_70;
  undefined1 local_68;
  longlong local_60;
  undefined2 local_58;
  longlong local_50;
  undefined2 local_48;
  longlong local_40;
  undefined1 local_38;
  longlong local_30;
  undefined1 local_28;
  
  bVar2 = false;
  if ((param_1 != (longlong *)0x0) && (*param_1 == 0)) {
    if (DAT_180c7df28 == 0) {
      local_98 = "tier0.dll:g_pMemAlloc";
      local_90 = 0x15;
      DAT_180c7df28 = FUN_180451750(&local_98);
    }
    puVar4 = (undefined8 *)(**(code **)(**(longlong **)DAT_180c7df28 + 8))();
    if (puVar4 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)0x0;
    }
    else {
      lVar1 = *(longlong *)(param_2 + 8);
      if (lVar1 == 0) {
        ppuVar3 = &PTR_180700558;
      }
      else {
        ppuVar3 = *(undefined ***)(lVar1 + 0x28);
        if (ppuVar3 == (undefined **)0x0) {
          ppuVar3 = (undefined **)(lVar1 + 0x30);
        }
      }
      std::_Lockit::_Lockit(local_88,0);
      local_80 = 0;
      local_78 = 0;
      local_70 = 0;
      local_68 = 0;
      local_60 = 0;
      local_58 = 0;
      local_50 = 0;
      local_48 = 0;
      local_40 = 0;
      local_38 = 0;
      local_30 = 0;
      local_28 = 0;
      if (ppuVar3 == (undefined **)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_1805fa900("bad locale name");
      }
      std::_Locinfo::_Locinfo_ctor((_Locinfo *)local_88,(char *)ppuVar3);
      bVar2 = true;
      *(undefined4 *)(puVar4 + 1) = 0;
      *puVar4 = std::codecvt<char,char,_Mbstatet>::vftable;
    }
    *param_1 = (longlong)puVar4;
    if (bVar2) {
      std::_Locinfo::_Locinfo_dtor((_Locinfo *)local_88);
      if (local_30 != 0) {
        thunk_FUN_180621380();
      }
      local_30 = 0;
      if (local_40 != 0) {
        thunk_FUN_180621380();
      }
      local_40 = 0;
      if (local_50 != 0) {
        thunk_FUN_180621380();
      }
      local_50 = 0;
      if (local_60 != 0) {
        thunk_FUN_180621380();
      }
      local_60 = 0;
      if (local_70 != 0) {
        thunk_FUN_180621380();
      }
      local_70 = 0;
      if (local_80 != 0) {
        thunk_FUN_180621380();
      }
      local_80 = 0;
      std::_Lockit::~_Lockit(local_88);
    }
  }
  return 2;
}



