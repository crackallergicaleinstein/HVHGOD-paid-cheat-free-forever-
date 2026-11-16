// FUN_1801591f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801591f0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_1801591f0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  bool bVar6;
  undefined **ppuVar7;
  undefined8 *puVar8;
  _Lockit local_a8 [8];
  longlong local_a0;
  undefined1 local_98;
  longlong local_90;
  undefined1 local_88;
  longlong local_80;
  undefined2 local_78;
  longlong local_70;
  undefined2 local_68;
  longlong local_60;
  undefined1 local_58;
  longlong local_50;
  undefined1 local_48;
  char *local_38;
  undefined8 local_30;
  
  bVar6 = false;
  if ((param_1 != (longlong *)0x0) && (*param_1 == 0)) {
    if (DAT_180c7df28 == 0) {
      local_38 = "tier0.dll:g_pMemAlloc";
      local_30 = 0x15;
      DAT_180c7df28 = FUN_180451750(&local_38);
    }
    puVar8 = (undefined8 *)(**(code **)(**(longlong **)DAT_180c7df28 + 8))();
    if (puVar8 == (undefined8 *)0x0) {
      puVar8 = (undefined8 *)0x0;
    }
    else {
      lVar1 = *(longlong *)(param_2 + 8);
      if (lVar1 == 0) {
        ppuVar7 = &PTR_180700558;
      }
      else {
        ppuVar7 = *(undefined ***)(lVar1 + 0x28);
        if (ppuVar7 == (undefined **)0x0) {
          ppuVar7 = (undefined **)(lVar1 + 0x30);
        }
      }
      std::_Lockit::_Lockit(local_a8,0);
      local_a0 = 0;
      local_98 = 0;
      local_90 = 0;
      local_88 = 0;
      local_80 = 0;
      local_78 = 0;
      local_70 = 0;
      local_68 = 0;
      local_60 = 0;
      local_58 = 0;
      local_50 = 0;
      local_48 = 0;
      if (ppuVar7 == (undefined **)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_1805fa900("bad locale name");
      }
      std::_Locinfo::_Locinfo_ctor((_Locinfo *)local_a8,(char *)ppuVar7);
      bVar6 = true;
      *(undefined4 *)(puVar8 + 1) = 0;
      *puVar8 = std::ctype<char>::vftable;
      puVar5 = (undefined8 *)FUN_1805fc304(&local_38);
      uVar2 = puVar5[1];
      uVar3 = puVar5[2];
      uVar4 = puVar5[3];
      puVar8[2] = *puVar5;
      puVar8[3] = uVar2;
      puVar8[4] = uVar3;
      puVar8[5] = uVar4;
    }
    *param_1 = (longlong)puVar8;
    if (bVar6) {
      std::_Locinfo::_Locinfo_dtor((_Locinfo *)local_a8);
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
      if (local_90 != 0) {
        thunk_FUN_180621380();
      }
      local_90 = 0;
      if (local_a0 != 0) {
        thunk_FUN_180621380();
      }
      local_a0 = 0;
      std::_Lockit::~_Lockit(local_a8);
    }
  }
  return 2;
}



