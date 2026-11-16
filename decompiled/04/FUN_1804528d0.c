// FUN_1804528d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804528d0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_1804528d0(longlong *param_1)

{
  undefined1 uVar1;
  uint uVar2;
  undefined1 auVar3 [32];
  undefined1 auVar4 [16];
  char cVar5;
  longlong lVar6;
  ulonglong uVar7;
  _MEMORY_BASIC_INFORMATION *p_Var8;
  longlong lVar9;
  undefined1 (*pauVar10) [32];
  ulonglong uVar11;
  SIZE_T SVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  LPCSTR lpModuleName;
  _MEMORY_BASIC_INFORMATION *p_Var15;
  ulonglong uVar16;
  byte bVar17;
  char *pcVar18;
  _MEMORY_BASIC_INFORMATION *p_Var19;
  longlong lVar20;
  uint uVar21;
  _MEMORY_BASIC_INFORMATION *p_Var22;
  _MEMORY_BASIC_INFORMATION *p_Var23;
  undefined1 auStack_348 [32];
  undefined8 local_328;
  char *local_300 [2];
  _MEMORY_BASIC_INFORMATION *local_2f0;
  ulonglong uStack_2e8;
  char local_2e0;
  _MEMORY_BASIC_INFORMATION local_2d0;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  _MEMORY_BASIC_INFORMATION *local_280;
  undefined8 *puStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  char cStack_258;
  char cStack_257;
  char cStack_256;
  char cStack_255;
  char cStack_254;
  char cStack_253;
  char cStack_252;
  char cStack_251;
  char cStack_250;
  char cStack_24f;
  char cStack_24e;
  char cStack_24d;
  char cStack_24c;
  char cStack_24b;
  char cStack_24a;
  char cStack_249;
  char cStack_248;
  char cStack_247;
  char cStack_246;
  char cStack_245;
  char cStack_244;
  char cStack_243;
  char cStack_242;
  char cStack_241;
  char *local_240;
  undefined8 uStack_238;
  _MEMORY_BASIC_INFORMATION *local_220;
  _MEMORY_BASIC_INFORMATION *local_218;
  _MEMORY_BASIC_INFORMATION *local_210;
  longlong local_208;
  _MEMORY_BASIC_INFORMATION *local_200;
  ulonglong uStack_1f8;
  _MEMORY_BASIC_INFORMATION *local_1f0;
  longlong local_1e8;
  undefined1 local_1e0 [32];
  _MEMORY_BASIC_INFORMATION local_1c0;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  int local_170 [4];
  undefined1 local_160 [33];
  char acStack_13f [255];
  ulonglong local_40;
  
  local_40 = DAT_1808d5f00 ^ (ulonglong)auStack_348;
  local_170[0] = 0;
  uVar16 = param_1[1];
  p_Var19 = (_MEMORY_BASIC_INFORMATION *)*param_1;
  if (((uVar16 == 0) ||
      (lVar20 = (longlong)&p_Var19->BaseAddress + uVar16,
      lVar6 = thunk_FUN_1805f7e70(p_Var19,lVar20,0x3a), lVar6 == lVar20)) ||
     (uVar7 = lVar6 - (longlong)p_Var19, uVar7 == 0xffffffffffffffff)) {
    local_2d0.BaseAddress = (PVOID)0xdb35e39b27e1c185;
    local_2d0.AllocationBase = (PVOID)0xa05181ee77d57a06;
    local_2d0.AllocationProtect = 0x461b7377;
    local_2d0._20_4_ = 0x929654b1;
    local_2d0.RegionSize = 0xa5cea54bfef7110;
    local_2d0.State = 0x916b7e19;
    local_2d0.Protect = 0xa70c9f7f;
    local_2d0.Type = 0xaa402c0a;
    local_2d0._44_4_ = 0x2b2d6d82;
    uStack_2a0 = 0xc064ed9510bc010b;
    local_2f0 = (_MEMORY_BASIC_INFORMATION *)0xfec09918395f26c4;
    uStack_298 = 0xfec09918395f26c4;
    local_1c0.BaseAddress = (PVOID)0x205d726f7272655b;
    local_1c0.AllocationBase = (PVOID)0x206e726574746170;
    local_1c0.AllocationProtect = 0x7373696d;
    local_1c0._20_4_ = 0x20676e69;
    local_1c0.RegionSize = 0x7020656c75646f6d;
    local_1c0._40_8_ = 0x3a6e726574746170;
    local_1c0.State = 0x69666572;
    local_1c0.Protect = 0x207c2078;
    uStack_190 = 0x7d7b20;
    uStack_188 = 0;
    lVar20 = -1;
    do {
      puStack_278 = (undefined8 *)(lVar20 + 1);
      lVar6 = lVar20 + 0x21;
      lVar20 = (longlong)puStack_278;
    } while (local_1e0[lVar6] != '\0');
    local_280 = &local_1c0;
    FUN_18044bc10(&local_280,param_1);
  }
  puStack_278 = (undefined8 *)uVar7;
  if (uVar16 < uVar7) {
    puStack_278 = (undefined8 *)uVar16;
  }
  uVar7 = uVar7 + 1;
  local_280 = p_Var19;
  if (uVar16 < uVar7) {
                    /* WARNING: Subroutine does not return */
    FUN_18015ac40();
  }
  lVar6 = -1;
  lVar20 = -1;
  if (uVar16 - uVar7 != -1) {
    lVar20 = uVar16 - uVar7;
  }
  local_160._0_16_ = (undefined1  [16])0x0;
  local_160._16_8_ = 0;
  local_160._24_8_ = 0;
  local_210 = (_MEMORY_BASIC_INFORMATION *)(uVar7 + (longlong)p_Var19);
  local_208 = lVar20;
  FUN_18015ba30(local_160,p_Var19);
  lpModuleName = local_160;
  if (0xf < (ulonglong)local_160._24_8_) {
    lpModuleName = (LPCSTR)local_160._0_8_;
  }
  p_Var8 = (_MEMORY_BASIC_INFORMATION *)GetModuleHandleA(lpModuleName);
  local_2f0 = p_Var8;
  thunk_FUN_18015c010(local_160);
  if (p_Var8 == (_MEMORY_BASIC_INFORMATION *)0x0) {
    local_260._0_1_ = 0x85;
    local_260._1_1_ = 0xc1;
    local_260._2_1_ = 0xe1;
    local_260._3_1_ = 0x27;
    local_260._4_1_ = 0x9b;
    local_260._5_1_ = 0xe3;
    local_260._6_1_ = 0x35;
    local_260._7_1_ = 0xdb;
    cStack_258 = 6;
    cStack_257 = 0x7a;
    cStack_256 = 0xd5;
    cStack_255 = 0x77;
    cStack_254 = 0xee;
    cStack_253 = 0x81;
    cStack_252 = 0x51;
    cStack_251 = 0xa0;
    cStack_250 = 0x77;
    cStack_24f = 0x73;
    cStack_24e = 0x1b;
    cStack_24d = 0x46;
    cStack_24c = 0xb1;
    cStack_24b = 0x54;
    cStack_24a = 0x96;
    cStack_249 = 0x92;
    cStack_248 = 0x10;
    cStack_247 = 0x71;
    cStack_246 = 0xef;
    cStack_245 = 0xbf;
    cStack_244 = 0x54;
    cStack_243 = 0xea;
    cStack_242 = 0x5c;
    cStack_241 = 10;
    local_240 = (char *)0xa70c9f7f916b7e19;
    local_300[0] = (char *)0x2b2d6d82aa402c0a;
    uStack_238 = 0x2b2d6d82aa402c0a;
    local_2d0.BaseAddress = (PVOID)0x205d726f7272655b;
    local_2d0.AllocationBase = (PVOID)0x6e20656c75646f6d;
    local_2d0.AllocationProtect = 0x6620746f;
    local_2d0._20_4_ = 0x646e756f;
    local_2d0.RegionSize = 0x6c75646f6d207c20;
    local_2d0.State = 0x7b203a65;
    local_2d0.Protect = 0x7d;
    local_2d0.Type = 0;
    local_2d0._44_4_ = 0;
    do {
      local_208 = lVar6 + 1;
      lVar20 = lVar6 + 1;
      lVar6 = local_208;
    } while (*(char *)((longlong)&local_2d0.BaseAddress + lVar20) != '\0');
    local_210 = &local_2d0;
    FUN_18044bc10(&local_210,&local_280);
  }
  if (((*(short *)&p_Var8->BaseAddress == 0x5a4d) &&
      (lVar9 = (longlong)*(int *)((longlong)&p_Var8[1].AllocationBase + 4),
      *(int *)((longlong)&p_Var8->BaseAddress + lVar9) == 0x4550)) &&
     (uVar16 = (ulonglong)*(uint *)((longlong)&p_Var8[1].State + lVar9), uVar16 != 0)) {
    FUN_18063ab10(local_160 + 0x20,0,0x100);
    local_200 = (_MEMORY_BASIC_INFORMATION *)(local_160 + 0x20);
    uStack_1f8 = 0x80;
    local_1f0 = (_MEMORY_BASIC_INFORMATION *)(uVar7 + (longlong)p_Var19);
    local_1e8 = lVar20;
    pauVar10 = (undefined1 (*) [32])FUN_180451510(&local_2d0,&local_1f0,&local_200);
    local_1e0 = *pauVar10;
    local_2d0.State = *(DWORD *)((longlong)(pauVar10 + 1) + 0);
    local_2d0.Protect = *(DWORD *)((longlong)(pauVar10 + 1) + 4);
    uVar7 = SUB328(*pauVar10,0);
    if (uVar7 == 0) {
      local_260._0_1_ = 0x85;
      local_260._1_1_ = 0xc1;
      local_260._2_1_ = 0xe1;
      local_260._3_1_ = 0x27;
      local_260._4_1_ = 0x9b;
      local_260._5_1_ = 0xe3;
      local_260._6_1_ = 0x35;
      local_260._7_1_ = 0xdb;
      cStack_258 = 6;
      cStack_257 = 0x7a;
      cStack_256 = 0xd5;
      cStack_255 = 0x77;
      cStack_254 = 0xee;
      cStack_253 = 0x81;
      cStack_252 = 0x51;
      cStack_251 = 0xa0;
      cStack_250 = 0x77;
      cStack_24f = 0x73;
      cStack_24e = 0x1b;
      cStack_24d = 0x46;
      cStack_24c = 0xb1;
      cStack_24b = 0x54;
      cStack_24a = 0x96;
      cStack_249 = 0x92;
      cStack_248 = 0x10;
      cStack_247 = 0x71;
      cStack_246 = 0xef;
      cStack_245 = 0xbf;
      cStack_244 = 0x54;
      cStack_243 = 0xea;
      cStack_242 = 0x5c;
      cStack_241 = 10;
      local_240 = (char *)0xa70c9f7f916b7e19;
      local_300[0] = (char *)0x2b2d6d82aa402c0a;
      uStack_238 = 0x2b2d6d82aa402c0a;
      local_2d0.BaseAddress = (PVOID)0x205d726f7272655b;
      local_2d0.AllocationBase = (PVOID)0x742064656c696166;
      local_2d0.AllocationProtect = 0x6170206f;
      local_2d0._20_4_ = 0x20657372;
      local_2d0.RegionSize = 0x206e726574746170;
      local_2d0.State = 0x6170207c;
      local_2d0.Protect = 0x72657474;
      local_2d0.Type = 0x7b203a6e;
      local_2d0._44_4_ = 0x7d;
      do {
        puStack_278 = (undefined8 *)(lVar6 + 1);
        lVar20 = lVar6 + 1;
        lVar6 = (longlong)puStack_278;
      } while (*(char *)((longlong)&local_2d0.BaseAddress + lVar20) != '\0');
      local_280 = &local_2d0;
      FUN_18044bc10(&local_280,&local_210);
    }
    uVar11 = 0;
    if (uVar7 != 0) {
      do {
        if (acStack_13f[uVar11 * 2] == '\0') {
          if ((int)uVar11 != -1) {
            p_Var22 = (_MEMORY_BASIC_INFORMATION *)(longlong)(int)uVar11;
            local_2e0 = local_160[(longlong)p_Var22 * 2 + 0x20];
            local_260._0_1_ = local_2e0;
            local_260._1_1_ = local_2e0;
            local_260._2_1_ = local_2e0;
            local_260._3_1_ = local_2e0;
            local_260._4_1_ = local_2e0;
            local_260._5_1_ = local_2e0;
            local_260._6_1_ = local_2e0;
            local_260._7_1_ = local_2e0;
            cStack_258 = local_2e0;
            cStack_257 = local_2e0;
            cStack_256 = local_2e0;
            cStack_255 = local_2e0;
            cStack_254 = local_2e0;
            cStack_253 = local_2e0;
            cStack_252 = local_2e0;
            cStack_251 = local_2e0;
            cStack_250 = local_2e0;
            cStack_24f = local_2e0;
            cStack_24e = local_2e0;
            cStack_24d = local_2e0;
            cStack_24c = local_2e0;
            cStack_24b = local_2e0;
            cStack_24a = local_2e0;
            cStack_249 = local_2e0;
            cStack_248 = local_2e0;
            cStack_247 = local_2e0;
            cStack_246 = local_2e0;
            cStack_245 = local_2e0;
            cStack_244 = local_2e0;
            cStack_243 = local_2e0;
            cStack_242 = local_2e0;
            cStack_241 = local_2e0;
            p_Var19 = (_MEMORY_BASIC_INFORMATION *)((longlong)&p_Var8->BaseAddress + uVar16);
            local_218 = p_Var19;
            local_300[0] = (char *)0x0;
            local_220 = p_Var8;
            if (p_Var19 <= p_Var8) goto LAB_180453932;
            goto LAB_1804530c0;
          }
          break;
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < uVar7);
    }
    local_260._0_1_ = 0x85;
    local_260._1_1_ = 0xc1;
    local_260._2_1_ = 0xe1;
    local_260._3_1_ = 0x27;
    local_260._4_1_ = 0x9b;
    local_260._5_1_ = 0xe3;
    local_260._6_1_ = 0x35;
    local_260._7_1_ = 0xdb;
    cStack_258 = 6;
    cStack_257 = 0x7a;
    cStack_256 = 0xd5;
    cStack_255 = 0x77;
    cStack_254 = 0xee;
    cStack_253 = 0x81;
    cStack_252 = 0x51;
    cStack_251 = 0xa0;
    cStack_250 = 0x77;
    cStack_24f = 0x73;
    cStack_24e = 0x1b;
    cStack_24d = 0x46;
    cStack_24c = 0xb1;
    cStack_24b = 0x54;
    cStack_24a = 0x96;
    cStack_249 = 0x92;
    cStack_248 = 0x10;
    cStack_247 = 0x71;
    cStack_246 = 0xef;
    cStack_245 = 0xbf;
    cStack_244 = 0x54;
    cStack_243 = 0xea;
    cStack_242 = 0x5c;
    cStack_241 = 10;
    local_240 = (char *)0xa70c9f7f916b7e19;
    local_2f0 = (_MEMORY_BASIC_INFORMATION *)0x2b2d6d82aa402c0a;
    uStack_238 = 0x2b2d6d82aa402c0a;
    local_2d0.BaseAddress = (PVOID)0x205d726f7272655b;
    local_2d0.AllocationBase = (PVOID)0x7473726966206f6e;
    local_2d0.AllocationProtect = 0x74796220;
    local_2d0._20_4_ = 0x207c2065;
    local_2d0.RegionSize = 0x3a6e726574746170;
    local_2d0.State = 0x7d7b20;
    local_2d0.Protect = 0;
    local_2d0.Type = 0;
    local_2d0._44_4_ = 0;
    do {
      puStack_278 = (undefined8 *)(lVar6 + 1);
      lVar20 = lVar6 + 1;
      lVar6 = (longlong)puStack_278;
    } while (*(char *)((longlong)&local_2d0.BaseAddress + lVar20) != '\0');
  }
  else {
    local_260._0_1_ = 0x85;
    local_260._1_1_ = 0xc1;
    local_260._2_1_ = 0xe1;
    local_260._3_1_ = 0x27;
    local_260._4_1_ = 0x9b;
    local_260._5_1_ = 0xe3;
    local_260._6_1_ = 0x35;
    local_260._7_1_ = 0xdb;
    cStack_258 = 6;
    cStack_257 = 0x7a;
    cStack_256 = 0xd5;
    cStack_255 = 0x77;
    cStack_254 = 0xee;
    cStack_253 = 0x81;
    cStack_252 = 0x51;
    cStack_251 = 0xa0;
    cStack_250 = 0x77;
    cStack_24f = 0x73;
    cStack_24e = 0x1b;
    cStack_24d = 0x46;
    cStack_24c = 0xb1;
    cStack_24b = 0x54;
    cStack_24a = 0x96;
    cStack_249 = 0x92;
    cStack_248 = 0x10;
    cStack_247 = 0x71;
    cStack_246 = 0xef;
    cStack_245 = 0xbf;
    cStack_244 = 0x54;
    cStack_243 = 0xea;
    cStack_242 = 0x5c;
    cStack_241 = 10;
    local_240 = (char *)0xa70c9f7f916b7e19;
    local_300[0] = (char *)0x2b2d6d82aa402c0a;
    uStack_238 = 0x2b2d6d82aa402c0a;
    local_2d0.BaseAddress = (PVOID)0x205d726f7272655b;
    local_2d0.AllocationBase = (PVOID)0x2064696c61766e69;
    local_2d0.AllocationProtect = 0x75646f6d;
    local_2d0._20_4_ = 0x7320656c;
    local_2d0.RegionSize = 0x6170207c20657a69;
    local_2d0.State = 0x72657474;
    local_2d0.Protect = 0x7b203a6e;
    local_2d0.Type = 0x7d;
    local_2d0._44_4_ = 0;
    do {
      puStack_278 = (undefined8 *)(lVar6 + 1);
      lVar20 = lVar6 + 1;
      lVar6 = (longlong)puStack_278;
    } while (*(char *)((longlong)&local_2d0.BaseAddress + lVar20) != '\0');
  }
  local_2d0.BaseAddress = (PVOID)0x205d726f7272655b;
  uStack_238 = 0x2b2d6d82aa402c0a;
  local_240 = (char *)0xa70c9f7f916b7e19;
  cStack_241 = '\n';
  cStack_242 = '\\';
  cStack_243 = -0x16;
  cStack_244 = 'T';
  cStack_245 = -0x41;
  cStack_246 = -0x11;
  cStack_247 = 'q';
  cStack_248 = '\x10';
  cStack_249 = -0x6e;
  cStack_24a = -0x6a;
  cStack_24b = 'T';
  cStack_24c = -0x4f;
  cStack_24d = 'F';
  cStack_24e = '\x1b';
  cStack_24f = 's';
  cStack_250 = 'w';
  cStack_251 = -0x60;
  cStack_252 = 'Q';
  cStack_253 = -0x7f;
  cStack_254 = -0x12;
  cStack_255 = 'w';
  cStack_256 = -0x2b;
  cStack_257 = 'z';
  cStack_258 = '\x06';
  local_260._7_1_ = -0x25;
  local_260._6_1_ = '5';
  local_260._5_1_ = -0x1d;
  local_260._4_1_ = -0x65;
  local_260._3_1_ = '\'';
  local_260._2_1_ = -0x1f;
  local_260._1_1_ = -0x3f;
  local_260._0_1_ = -0x7b;
  local_280 = &local_2d0;
  goto LAB_180452ce0;
LAB_1804530c0:
  do {
    local_1c0.BaseAddress = (_MEMORY_BASIC_INFORMATION *)0x0;
    local_1c0.AllocationBase = (PVOID)0x0;
    local_1c0.AllocationProtect = 0;
    local_1c0._20_4_ = 0;
    local_1c0.RegionSize = 0;
    local_1c0.State = 0;
    local_1c0.Protect = 0;
    local_1c0.Type = 0;
    local_1c0._44_4_ = 0;
    SVar12 = VirtualQuery(p_Var8,&local_1c0,0x30);
    if ((SVar12 == 0) || (local_1c0.RegionSize == 0)) break;
    p_Var23 = p_Var8;
    if (p_Var8 < local_1c0.BaseAddress) {
      p_Var23 = local_1c0.BaseAddress;
    }
    p_Var15 = (_MEMORY_BASIC_INFORMATION *)((longlong)local_1c0.BaseAddress + local_1c0.RegionSize);
    if (p_Var19 < p_Var15) {
      p_Var15 = p_Var19;
    }
    local_200 = p_Var15;
    if (local_1c0.State == 0x1000) {
      if ((local_1c0.Protect & 0x101) != 0) goto switchD_180453172_caseD_3;
      switch(local_1c0.Protect & 0xff) {
      case 2:
      case 4:
      case 8:
      case 0x20:
      case 0x40:
      case 0x80:
        if (p_Var15 <= p_Var23) goto switchD_180453172_caseD_3;
        p_Var19 = (_MEMORY_BASIC_INFORMATION *)((longlong)p_Var15 - (longlong)p_Var23);
        local_160._0_16_ = (undefined1  [16])0x0;
        local_160._16_8_ = 0;
        if (p_Var19 != (_MEMORY_BASIC_INFORMATION *)0x0) {
          if ((_MEMORY_BASIC_INFORMATION *)0x7fffffffffffffff < p_Var19) {
                    /* WARNING: Subroutine does not return */
            FUN_1801136f0();
          }
          lVar20 = FUN_18015bca0(p_Var19);
          local_160._0_8_ = lVar20;
          local_160._16_8_ = (lVar20 - (longlong)p_Var23) + (longlong)p_Var15;
          FUN_18063ab10(lVar20,0,p_Var19);
          local_160._8_8_ = (char *)((longlong)&p_Var19->BaseAddress + lVar20);
          p_Var8 = local_220;
        }
        cVar5 = FUN_1804514f0(local_160._0_8_,p_Var23,p_Var19);
        if (cVar5 != '\0') {
LAB_180453250:
          p_Var8 = (_MEMORY_BASIC_INFORMATION *)((ulonglong)p_Var19 & 0xffffffffffffffe0);
          local_1f0 = p_Var8;
          uVar16 = 0;
          if (p_Var8 != (_MEMORY_BASIC_INFORMATION *)0x0) {
            do {
              auVar3[1] = local_260._1_1_;
              auVar3[0] = (char)local_260;
              auVar3[2] = local_260._2_1_;
              auVar3[3] = local_260._3_1_;
              auVar3[4] = local_260._4_1_;
              auVar3[5] = local_260._5_1_;
              auVar3[6] = local_260._6_1_;
              auVar3[7] = local_260._7_1_;
              auVar3[8] = cStack_258;
              auVar3[9] = cStack_257;
              auVar3[10] = cStack_256;
              auVar3[0xb] = cStack_255;
              auVar3[0xc] = cStack_254;
              auVar3[0xd] = cStack_253;
              auVar3[0xe] = cStack_252;
              auVar3[0xf] = cStack_251;
              auVar3[0x10] = cStack_250;
              auVar3[0x11] = cStack_24f;
              auVar3[0x12] = cStack_24e;
              auVar3[0x13] = cStack_24d;
              auVar3[0x14] = cStack_24c;
              auVar3[0x15] = cStack_24b;
              auVar3[0x16] = cStack_24a;
              auVar3[0x17] = cStack_249;
              auVar3[0x18] = cStack_248;
              auVar3[0x19] = cStack_247;
              auVar3[0x1a] = cStack_246;
              auVar3[0x1b] = cStack_245;
              auVar3[0x1c] = cStack_244;
              auVar3[0x1d] = cStack_243;
              auVar3[0x1e] = cStack_242;
              auVar3[0x1f] = cStack_241;
              auVar3 = vpcmpeqb_avx2(*(undefined1 (*) [32])(local_160._0_8_ + uVar16),auVar3);
              uVar21 = (uint)(SUB321(auVar3 >> 7,0) & 1) | (uint)(SUB321(auVar3 >> 0xf,0) & 1) << 1
                       | (uint)(SUB321(auVar3 >> 0x17,0) & 1) << 2 |
                       (uint)(SUB321(auVar3 >> 0x1f,0) & 1) << 3 |
                       (uint)(SUB321(auVar3 >> 0x27,0) & 1) << 4 |
                       (uint)(SUB321(auVar3 >> 0x2f,0) & 1) << 5 |
                       (uint)(SUB321(auVar3 >> 0x37,0) & 1) << 6 |
                       (uint)(SUB321(auVar3 >> 0x3f,0) & 1) << 7 |
                       (uint)(SUB321(auVar3 >> 0x47,0) & 1) << 8 |
                       (uint)(SUB321(auVar3 >> 0x4f,0) & 1) << 9 |
                       (uint)(SUB321(auVar3 >> 0x57,0) & 1) << 10 |
                       (uint)(SUB321(auVar3 >> 0x5f,0) & 1) << 0xb |
                       (uint)(SUB321(auVar3 >> 0x67,0) & 1) << 0xc |
                       (uint)(SUB321(auVar3 >> 0x6f,0) & 1) << 0xd |
                       (uint)(SUB321(auVar3 >> 0x77,0) & 1) << 0xe |
                       (uint)SUB321(auVar3 >> 0x7f,0) << 0xf |
                       (uint)(SUB321(auVar3 >> 0x87,0) & 1) << 0x10 |
                       (uint)(SUB321(auVar3 >> 0x8f,0) & 1) << 0x11 |
                       (uint)(SUB321(auVar3 >> 0x97,0) & 1) << 0x12 |
                       (uint)(SUB321(auVar3 >> 0x9f,0) & 1) << 0x13 |
                       (uint)(SUB321(auVar3 >> 0xa7,0) & 1) << 0x14 |
                       (uint)(SUB321(auVar3 >> 0xaf,0) & 1) << 0x15 |
                       (uint)(SUB321(auVar3 >> 0xb7,0) & 1) << 0x16 |
                       (uint)SUB321(auVar3 >> 0xbf,0) << 0x17 |
                       (uint)(SUB321(auVar3 >> 199,0) & 1) << 0x18 |
                       (uint)(SUB321(auVar3 >> 0xcf,0) & 1) << 0x19 |
                       (uint)(SUB321(auVar3 >> 0xd7,0) & 1) << 0x1a |
                       (uint)(SUB321(auVar3 >> 0xdf,0) & 1) << 0x1b |
                       (uint)(SUB321(auVar3 >> 0xe7,0) & 1) << 0x1c |
                       (uint)(SUB321(auVar3 >> 0xef,0) & 1) << 0x1d |
                       (uint)(SUB321(auVar3 >> 0xf7,0) & 1) << 0x1e |
                       (uint)(byte)(auVar3[0x1f] >> 7) << 0x1f;
              if (uVar21 != 0) {
                do {
                  local_170[0] = 0;
                  uVar2 = 0;
                  if (uVar21 != 0) {
                    for (; (uVar21 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
                    }
                  }
                  pcVar18 = (char *)((longlong)&p_Var23->BaseAddress + uVar16 + uVar2);
                  if ((char *)((longlong)&p_Var23->BaseAddress + (longlong)p_Var22) <= pcVar18) {
                    pcVar18 = pcVar18 + -(longlong)p_Var22;
                    p_Var15 = (_MEMORY_BASIC_INFORMATION *)(pcVar18 + -(longlong)p_Var23);
                    if ((p_Var15 <= p_Var19) &&
                       (uVar7 <= (ulonglong)((longlong)p_Var19 - (longlong)p_Var15))) {
                      uVar11 = 0;
                      while ((acStack_13f[uVar11 * 2] != '\0' ||
                             (*(char *)(local_160._0_8_ +
                                       (longlong)((longlong)&p_Var15->BaseAddress + uVar11)) ==
                              local_160[uVar11 * 2 + 0x20]))) {
                        uVar11 = uVar11 + 1;
                        if (uVar7 <= uVar11) goto LAB_1804536e6;
                      }
                    }
                  }
                  uVar21 = uVar21 - 1 & uVar21;
                } while (uVar21 != 0);
              }
              uVar16 = uVar16 + 0x20;
            } while (uVar16 < p_Var8);
          }
          if (p_Var8 < p_Var19) {
            p_Var15 = (_MEMORY_BASIC_INFORMATION *)((longlong)p_Var8 - (longlong)p_Var22);
            do {
              if ((((((char *)(local_160._0_8_ + (longlong)p_Var22))[(longlong)p_Var15] == local_2e0
                    ) && (p_Var22 <= p_Var8)) && (p_Var15 <= p_Var19)) &&
                 (uVar7 <= (ulonglong)((longlong)p_Var19 - (longlong)p_Var15))) {
                uVar16 = 0;
                while ((acStack_13f[uVar16 * 2] != '\0' ||
                       (((char *)(local_160._0_8_ + (longlong)p_Var22) + (longlong)p_Var15)
                        [uVar16 - (longlong)p_Var22] == local_160[uVar16 * 2 + 0x20]))) {
                  uVar16 = uVar16 + 1;
                  if (uVar7 <= uVar16) {
                    pcVar18 = (char *)((longlong)&p_Var23->BaseAddress + (longlong)p_Var15);
LAB_1804536e6:
                    FUN_180113710(local_160);
                    p_Var19 = local_218;
                    if (pcVar18 != (char *)0x0) {
                      cVar5 = local_1e0[8];
                      if (cVar5 == '\x01') {
                        lVar20 = local_1e0._16_8_ + 1;
LAB_18045378d:
                        pcVar18 = pcVar18 + lVar20;
                        if (local_218 < (_MEMORY_BASIC_INFORMATION *)(pcVar18 + 4)) {
                        }
                        if (pcVar18 == (char *)0x0) {
                        }
                        local_170[0] = 0;
                        cVar5 = FUN_1804514f0(local_170,pcVar18,4);
                        if (cVar5 == '\0') {
                        }
                        local_300[0] = pcVar18 + (longlong)local_170[0] + 4;
                      }
                      else {
                        if (cVar5 == '\x02') {
                          lVar20 = local_1e0._16_8_;
                          goto LAB_18045378d;
                        }
                        local_300[0] = pcVar18;
                        if (cVar5 != '\x03') goto LAB_1804537e6;
                        pcVar18 = pcVar18 + local_1e0._16_8_;
                        if (local_218 < (_MEMORY_BASIC_INFORMATION *)(pcVar18 + 8)) {
                        }
                        if (pcVar18 == (char *)0x0) {
                        }
                        local_300[0] = (char *)0x0;
                        cVar5 = FUN_1804514f0(local_300,pcVar18,8);
                        if (cVar5 == '\0') {
                        }
                      }
LAB_1804537e6:
                      p_Var8 = (_MEMORY_BASIC_INFORMATION *)(local_300[0] + local_1e0._24_8_);
                      if ((char)local_2d0.State == '\0') {
                      }
                      if (p_Var19 < &p_Var8->AllocationBase) {
                      }
                      if (p_Var8 < local_2f0) {
                      }
                      if (p_Var8 == (_MEMORY_BASIC_INFORMATION *)0x0) {
                      }
                      local_300[0] = (char *)0x0;
                      FUN_1804514f0(local_300,p_Var8,8);
                    }
                    goto LAB_1804533e0;
                  }
                }
              }
              p_Var8 = (_MEMORY_BASIC_INFORMATION *)((longlong)&p_Var8->BaseAddress + 1);
              p_Var15 = (_MEMORY_BASIC_INFORMATION *)((longlong)&p_Var15->BaseAddress + 1);
            } while (p_Var8 < p_Var19);
          }
          FUN_180113710(local_160);
          p_Var8 = local_220;
          p_Var19 = local_218;
          goto switchD_180453172_caseD_3;
        }
        local_300[0] = local_300[0] + 1;
        cVar5 = FUN_1804514f0(local_160._0_8_,p_Var23,p_Var19);
        if (cVar5 != '\0') goto LAB_180453250;
        if (p_Var15 <= p_Var8) {
          p_Var15 = (_MEMORY_BASIC_INFORMATION *)&p_Var8[0x55].AllocationProtect;
        }
        local_220 = p_Var15;
        FUN_180113710(local_160);
        p_Var19 = local_218;
        break;
      default:
        goto switchD_180453172_caseD_3;
      }
    }
    else {
switchD_180453172_caseD_3:
      if (p_Var8 < local_200) {
        p_Var15 = local_200;
      }
      else {
        p_Var15 = (_MEMORY_BASIC_INFORMATION *)&p_Var8[0x55].AllocationProtect;
      }
      local_220 = p_Var15;
    }
    p_Var8 = p_Var15;
  } while (p_Var15 < p_Var19);
LAB_1804533e0:
  if (local_300[0] != (char *)0x0) {
    local_2d0.BaseAddress = (PVOID)0xdb35e39b27e1c185;
    local_2d0.AllocationBase = (PVOID)0xa05181ee77d57a06;
    local_2d0.AllocationProtect = 0x461b7377;
    local_2d0._20_4_ = 0x929654b1;
    local_2d0.RegionSize = 0xa5cea54bfef7110;
    local_2d0.State = 0x916b7e19;
    local_2d0.Protect = 0xa70c9f7f;
    local_2d0.Type = 0xaa402c0a;
    local_2d0._44_4_ = 0x2b2d6d82;
    uStack_2a0 = 0xc064ed9510bc010b;
    uStack_298 = 0xfec09918395f26c4;
    local_290 = 0x835e2313e2c48f8d;
    uStack_288 = 0xf863c3261a551f0e;
    local_1c0.BaseAddress = (_MEMORY_BASIC_INFORMATION *)0x205d726f7272655b;
    local_1c0.AllocationBase = (PVOID)0x206e726574746170;
    local_1c0.AllocationProtect = 0x6e616373;
    local_1c0._20_4_ = 0x73626f20;
    local_1c0.RegionSize = 0x6863206465767265;
    local_1c0._40_8_ = 0x6d207c2073656761;
    local_1c0.State = 0x69676e61;
    local_1c0.Protect = 0x7020676e;
    uStack_190 = 0x7b203a656c75646f;
    uStack_188 = 0x7365626f7270207d;
    local_180 = 0x7d7b203a;
    uStack_178 = 0;
    uVar16 = 0xffffffffffffffff;
    do {
      uStack_2e8 = uVar16 + 1;
      lVar20 = uVar16 + 0x21;
      uVar16 = uStack_2e8;
    } while (local_1e0[lVar20] != '\0');
    local_2f0 = &local_1c0;
    cStack_250 = (char)local_280;
    cStack_24f = (char)((ulonglong)local_280 >> 8);
    cStack_24e = (char)((ulonglong)local_280 >> 0x10);
    cStack_24d = (char)((ulonglong)local_280 >> 0x18);
    cStack_24c = (char)((ulonglong)local_280 >> 0x20);
    cStack_24b = (char)((ulonglong)local_280 >> 0x28);
    cStack_24a = (char)((ulonglong)local_280 >> 0x30);
    cStack_249 = (char)((ulonglong)local_280 >> 0x38);
    cStack_248 = (char)puStack_278;
    cStack_247 = (char)((ulonglong)puStack_278 >> 8);
    cStack_246 = (char)((ulonglong)puStack_278 >> 0x10);
    cStack_245 = (char)((ulonglong)puStack_278 >> 0x18);
    cStack_244 = (char)((ulonglong)puStack_278 >> 0x20);
    cStack_243 = (char)((ulonglong)puStack_278 >> 0x28);
    cStack_242 = (char)((ulonglong)puStack_278 >> 0x30);
    cStack_241 = (char)((ulonglong)puStack_278 >> 0x38);
    local_260._0_1_ = '\0';
    local_260._1_1_ = '\0';
    local_260._2_1_ = '\0';
    local_260._3_1_ = '\0';
    local_260._4_1_ = '\0';
    local_260._5_1_ = '\0';
    local_260._6_1_ = '\0';
    local_260._7_1_ = -0x40;
    local_240 = local_300[0];
    cStack_258 = '\x10';
    cStack_257 = '\0';
    cStack_256 = '\0';
    cStack_255 = '\0';
    cStack_254 = '\0';
    cStack_253 = '\0';
    cStack_252 = '\0';
    cStack_251 = '@';
    local_280 = (_MEMORY_BASIC_INFORMATION *)0x2;
    puStack_278 = &local_260;
    local_160._16_8_ = 0;
    local_160._24_8_ = 0xf;
    local_160._1_15_ = SUB1615((undefined1  [16])0x0,1);
    auVar4[0xf] = 0;
    auVar4._0_15_ = local_160._1_15_;
    local_160._0_16_ = auVar4 << 8;
    local_170[0] = 1;
    uVar16 = 0;
    uVar7 = 0;
    do {
      bVar17 = (byte)(*(ulonglong *)(local_1e0 + uVar7 * 8 + -0x80) >> 0x3c);
      if (bVar17 == 0xc) {
        uVar16 = uVar16 + *(longlong *)
                           (local_1e0 +
                           ((*(ulonglong *)(local_1e0 + uVar7 * 8 + -0x80) & 0xfffffffffffffff) -
                           0x68));
      }
      else if (bVar17 == 0xb) {
        uVar16 = uVar16 + 0x20;
      }
      else {
        uVar16 = uVar16 + 8;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < 2);
    lVar20 = uStack_2e8 + uVar16;
    if (CARRY8(uStack_2e8,uVar16)) {
      lVar20 = -1;
    }
    FUN_1800f5540(local_160,lVar20);
    local_200 = local_2f0;
    uStack_1f8 = uStack_2e8;
    local_328 = 0;
    FUN_1801da050(&local_2f0,local_160,&local_200,&local_280);
    puVar14 = local_160;
    if ((ulonglong)local_160._24_8_ < 0x10) {
LAB_1804538e2:
      puVar13 = (undefined1 *)FUN_1803b0a60();
      uVar1 = *puVar13;
      puVar13 = (undefined1 *)FUN_1803b0a60();
      *puVar13 = 1;
      FUN_1800a9e50(1,puVar14);
      puVar14 = (undefined1 *)FUN_1803b0a60();
      *puVar14 = uVar1;
    }
    else {
      puVar14 = (undefined1 *)local_160._0_8_;
      if ((undefined1 *)local_160._0_8_ != (undefined1 *)0x0) goto LAB_1804538e2;
    }
    FUN_18015c010(local_160);
  }
LAB_180453932:
  local_280 = (_MEMORY_BASIC_INFORMATION *)0xdb35e39b27e1c185;
  puStack_278 = (undefined8 *)0xa05181ee77d57a06;
  local_270 = 0x929654b1461b7377;
  local_2f0 = (_MEMORY_BASIC_INFORMATION *)0xa5cea54bfef7110;
  uStack_268 = 0xa5cea54bfef7110;
  local_160._8_8_ = 0x206e726574746170;
  local_160._0_8_ = 0x205d726f7272655b;
  local_160._16_8_ = 0x6e756f6620746f6e;
  local_160._24_8_ = 0x7d7b207c2064;
  do {
    puStack_278 = (undefined8 *)(lVar6 + 1);
    lVar20 = lVar6 + 1;
    lVar6 = (longlong)puStack_278;
  } while (local_160[lVar20] != '\0');
  local_280 = (_MEMORY_BASIC_INFORMATION *)local_160;
LAB_180452ce0:
  FUN_18044bc10(&local_280,&local_210);
}



