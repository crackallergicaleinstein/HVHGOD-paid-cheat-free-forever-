// FUN_180451750 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180451750 */

FARPROC FUN_180451750(longlong *param_1)

{
  ulonglong uVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  HMODULE pHVar5;
  FARPROC pFVar6;
  LPCSTR pCVar7;
  longlong lVar8;
  undefined **ppuVar9;
  longlong lVar10;
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined8 local_a8;
  ulonglong uStack_a0;
  longlong lStack_98;
  ulonglong uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78 [16];
  undefined1 auStack_68 [16];
  undefined8 local_58;
  undefined8 uStack_50;
  longlong local_48;
  ulonglong uStack_40;
  longlong lStack_38;
  ulonglong uStack_30;
  undefined8 local_28;
  
  uVar1 = param_1[1];
  lVar10 = *param_1;
  lVar8 = -1;
  if (((uVar1 == 0) ||
      (lVar3 = thunk_FUN_1805f7e70(lVar10,lVar10 + uVar1,0x3a), lVar3 == lVar10 + uVar1)) ||
     (uStack_a0 = lVar3 - lVar10, uStack_a0 == 0xffffffffffffffff)) {
    uStack_a0 = 0;
    local_a8 = 0;
    cVar2 = '\0';
    uStack_90 = uVar1;
  }
  else {
    uVar4 = uStack_a0 + 1;
    if (uVar1 < uStack_a0) {
      uStack_a0 = uVar1;
    }
    local_a8 = lVar10;
    if (uVar1 < uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_18015ac40();
    }
    cVar2 = '\x01';
    uStack_90 = 0xffffffffffffffff;
    if (uVar1 - uVar4 != 0xffffffffffffffff) {
      uStack_90 = uVar1 - uVar4;
    }
    lVar10 = lVar10 + uVar4;
  }
  uVar1 = uStack_90;
  local_88 = CONCAT71(local_88._1_7_,cVar2);
  local_48 = local_a8;
  uStack_40 = uStack_a0;
  uStack_30 = uStack_90;
  local_28 = local_88;
  lStack_98 = lVar10;
  lStack_38 = lVar10;
  if (cVar2 != '\0') {
    local_78 = (undefined1  [16])0x0;
    auStack_68 = (undefined1  [16])0x0;
    FUN_18015ba30(local_78,local_a8,uStack_a0);
    pCVar7 = local_78;
    if (0xf < (ulonglong)auStack_68._8_8_) {
      pCVar7 = (LPCSTR)local_78._0_8_;
    }
    pHVar5 = GetModuleHandleA(pCVar7);
    thunk_FUN_18015c010(local_78);
    if (pHVar5 == (HMODULE)0x0) {
      local_78._8_8_ = 0xa05181ee77d57a06;
      local_78._0_8_ = 0xdb35e39b27e1c185;
      auStack_68._8_8_ = 0xa5cea54bfef7110;
      auStack_68._0_8_ = 0x929654b1461b7377;
      local_58 = 0xa70c9f7f916b7e19;
      uStack_50 = 0x2b2d6d82aa402c0a;
      local_a8 = 0x205d726f7272655b;
      uStack_a0 = 0x6e20656c75646f6d;
      lStack_98 = 0x646e756f6620746f;
      uStack_90 = 0x6c75646f6d207c20;
      local_88 = 0x7d7b203a65;
      uStack_80 = 0;
      do {
        local_c8._8_8_ = lVar8 + 1;
        lVar10 = lVar8 + 0x11;
        lVar8 = local_c8._8_8_;
      } while (local_b8[lVar10] != '\0');
      local_c8._0_8_ = &local_a8;
      FUN_18044bc10(local_c8,&local_48);
      return (FARPROC)0x0;
    }
    if (uVar1 != 0) {
      local_c8 = (undefined1  [16])0x0;
      local_b8 = (undefined1  [16])0x0;
      FUN_18015ba30(local_c8,lVar10,uVar1);
      pCVar7 = local_c8;
      if (0xf < (ulonglong)local_b8._8_8_) {
        pCVar7 = (LPCSTR)local_c8._0_8_;
      }
      pFVar6 = GetProcAddress(pHVar5,pCVar7);
      thunk_FUN_18015c010(local_c8);
      if (pFVar6 != (FARPROC)0x0) {
        return pFVar6;
      }
    }
    local_78._8_8_ = 0xa05181ee77d57a06;
    local_78._0_8_ = 0xdb35e39b27e1c185;
    auStack_68._8_8_ = 0xa5cea54bfef7110;
    auStack_68._0_8_ = 0x929654b1461b7377;
    local_58 = 0xa70c9f7f916b7e19;
    uStack_50 = 0x2b2d6d82aa402c0a;
    local_a8 = 0x205d726f7272655b;
    uStack_a0 = 0x6e2074726f707865;
    lStack_98 = 0x646e756f6620746f;
    uStack_90 = 0x7d7b3a7d7b207c20;
    local_88 = 0;
    uStack_80 = 0;
    do {
      local_c8._8_8_ = lVar8 + 1;
      lVar10 = lVar8 + 0x11;
      lVar8 = local_c8._8_8_;
    } while (local_b8[lVar10] != '\0');
    local_c8._0_8_ = &local_a8;
    FUN_1804545d0(local_c8,&local_48,&lStack_38);
    return (FARPROC)0x0;
  }
  ppuVar9 = &PTR_s_client_dll_180827f30;
  do {
    local_78 = (undefined1  [16])0x0;
    auStack_68 = (undefined1  [16])0x0;
    FUN_18015ba30(local_78,*ppuVar9,ppuVar9[1]);
    pCVar7 = local_78;
    if (0xf < (ulonglong)auStack_68._8_8_) {
      pCVar7 = (LPCSTR)local_78._0_8_;
    }
    pHVar5 = GetModuleHandleA(pCVar7);
    thunk_FUN_18015c010(local_78);
    if (pHVar5 != (HMODULE)0x0) {
      local_c8 = (undefined1  [16])0x0;
      local_b8 = (undefined1  [16])0x0;
      FUN_18015ba30(local_c8,*param_1,param_1[1]);
      pCVar7 = local_c8;
      if (0xf < (ulonglong)local_b8._8_8_) {
        pCVar7 = (LPCSTR)local_c8._0_8_;
      }
      pFVar6 = GetProcAddress(pHVar5,pCVar7);
      thunk_FUN_18015c010(local_c8);
      if (pFVar6 != (FARPROC)0x0) {
        return pFVar6;
      }
    }
    ppuVar9 = ppuVar9 + 2;
    if (ppuVar9 == &PTR_s_client_dll_180828070) {
      local_a8 = 0xdb35e39b27e1c185;
      uStack_a0 = 0xa05181ee77d57a06;
      lStack_98 = 0x929654b1461b7377;
      uStack_90 = 0xa5cea54bfef7110;
      auStack_68._8_8_ = 0x7d7b207c20;
      auStack_68._0_8_ = 0x646e756f6620746f;
      local_78._8_8_ = 0x6e2074726f707865;
      local_78._0_8_ = 0x205d726f7272655b;
      do {
        local_c8._8_8_ = lVar8 + 1;
        lVar10 = lVar8 + 1;
        lVar8 = local_c8._8_8_;
      } while (local_78[lVar10] != '\0');
      local_c8._0_8_ = local_78;
      FUN_18044bc10(local_c8,param_1);
      return (FARPROC)0x0;
    }
  } while( true );
}



