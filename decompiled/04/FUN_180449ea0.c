// FUN_180449ea0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180449ea0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_180449ea0(void)

{
  undefined1 uVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  ATOM AVar4;
  int iVar5;
  HMODULE pHVar6;
  HWND hWnd;
  undefined1 *puVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auStackY_208 [32];
  undefined1 *local_1a8;
  undefined8 *puStack_1a0;
  DWORD local_198 [4];
  undefined1 local_188 [16];
  undefined8 uStack_178;
  ulonglong uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  char local_148 [64];
  char *local_108;
  ulonglong uStack_100;
  undefined8 local_f8;
  int local_f0;
  undefined1 *local_e8;
  undefined8 *puStack_e0;
  longlong *local_d8;
  longlong *local_d0;
  longlong *local_c8;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a4;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined8 local_90;
  HWND local_88;
  undefined8 local_80;
  undefined8 local_78;
  WNDCLASSEXA local_68;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_1808d5f00 ^ (ulonglong)auStackY_208;
  local_198[0] = 0;
  local_68.cbSize = 0x50;
  local_68.style = 0;
  local_68.cbClsExtra = 0;
  local_68.cbWndExtra = 0;
  local_68.hInstance = (HINSTANCE)0x0;
  local_68.hIcon = (HICON)0x0;
  local_68.hCursor = (HCURSOR)0x0;
  local_68.hbrBackground = (HBRUSH)0x0;
  local_68.lpszMenuName = (LPCSTR)0x0;
  local_68.lpszClassName = (LPCSTR)0x0;
  local_68.hIconSm = (HICON)0x0;
  local_68.lpfnWndProc = DefWindowProcA_exref;
  pHVar6 = GetModuleHandleA((LPCSTR)0x0);
  local_68.lpszClassName = "hvhgods_internal_d3d11_probe";
  local_68.hInstance = pHVar6;
  AVar4 = RegisterClassExA(&local_68);
  if (AVar4 == 0) {
    local_198[0] = GetLastError();
    local_148[0] = -0x7b;
    local_148[1] = -0x3f;
    local_148[2] = -0x1f;
    local_148[3] = '\'';
    local_148[4] = -0x65;
    local_148[5] = -0x1d;
    local_148[6] = '5';
    local_148[7] = -0x25;
    local_148[8] = '\x06';
    local_148[9] = 'z';
    local_148[10] = -0x2b;
    local_148[0xb] = 'w';
    local_148[0xc] = -0x12;
    local_148[0xd] = -0x7f;
    local_148[0xe] = 'Q';
    local_148[0xf] = -0x60;
    local_148[0x10] = 'w';
    local_148[0x11] = 's';
    local_148[0x12] = '\x1b';
    local_148[0x13] = 'F';
    local_148[0x14] = -0x4f;
    local_148[0x15] = 'T';
    local_148[0x16] = -0x6a;
    local_148[0x17] = -0x6e;
    local_148[0x18] = '\x10';
    local_148[0x19] = 'q';
    local_148[0x1a] = -0x11;
    local_148[0x1b] = -0x41;
    local_148[0x1c] = 'T';
    local_148[0x1d] = -0x16;
    local_148[0x1e] = '\\';
    local_148[0x1f] = '\n';
    local_148[0x20] = '\x19';
    local_148[0x21] = '~';
    local_148[0x22] = 'k';
    local_148[0x23] = -0x6f;
    local_148[0x24] = '\x7f';
    local_148[0x25] = -0x61;
    local_148[0x26] = '\f';
    local_148[0x27] = -0x59;
    local_148[0x28] = '\n';
    local_148[0x29] = ',';
    local_148[0x2a] = '@';
    local_148[0x2b] = -0x56;
    local_148[0x2c] = -0x7e;
    local_148[0x2d] = 'm';
    local_148[0x2e] = '-';
    local_148[0x2f] = '+';
    local_148[0x30] = '\v';
    local_148[0x31] = '\x01';
    local_148[0x32] = -0x44;
    local_148[0x33] = '\x10';
    local_148[0x34] = -0x6b;
    local_148[0x35] = -0x13;
    local_148[0x36] = 'd';
    local_148[0x37] = -0x40;
    local_148[0x38] = -0x3c;
    local_148[0x39] = '&';
    local_148[0x3a] = '_';
    local_148[0x3b] = '9';
    local_148[0x3c] = '\x18';
    local_148[0x3d] = -0x67;
    local_148[0x3e] = -0x40;
    local_148[0x3f] = -2;
    local_188._8_8_ = 0x742064656c696166;
    local_188._0_8_ = 0x205d726f7272655b;
    uStack_178 = 0x747369676572206f;
    uStack_170 = 0x796d6d7564207265;
    local_168 = 0x7720313144334420;
    uStack_160 = 0x207c20776f646e69;
    local_158 = 0x7d7b;
    uStack_150 = 0;
    lVar10 = -1;
    do {
      puStack_1a0 = (undefined8 *)(lVar10 + 1);
      lVar3 = lVar10 + 1;
      lVar10 = (longlong)puStack_1a0;
    } while (local_188[lVar3] != '\0');
    local_1a8 = local_188;
    FUN_18044a7c0(&local_1a8,local_198);
  }
  else {
    hWnd = CreateWindowExA(0,local_68.lpszClassName,(LPCSTR)&PTR_180700558,0xcf0000,0,0,0x40,0x40,
                           (HWND)0x0,(HMENU)0x0,local_68.hInstance,(LPVOID)0x0);
    if (hWnd == (HWND)0x0) {
      local_198[0] = GetLastError();
      local_148[0] = -0x7b;
      local_148[1] = -0x3f;
      local_148[2] = -0x1f;
      local_148[3] = '\'';
      local_148[4] = -0x65;
      local_148[5] = -0x1d;
      local_148[6] = '5';
      local_148[7] = -0x25;
      local_148[8] = '\x06';
      local_148[9] = 'z';
      local_148[10] = -0x2b;
      local_148[0xb] = 'w';
      local_148[0xc] = -0x12;
      local_148[0xd] = -0x7f;
      local_148[0xe] = 'Q';
      local_148[0xf] = -0x60;
      local_148[0x10] = 'w';
      local_148[0x11] = 's';
      local_148[0x12] = '\x1b';
      local_148[0x13] = 'F';
      local_148[0x14] = -0x4f;
      local_148[0x15] = 'T';
      local_148[0x16] = -0x6a;
      local_148[0x17] = -0x6e;
      local_148[0x18] = '\x10';
      local_148[0x19] = 'q';
      local_148[0x1a] = -0x11;
      local_148[0x1b] = -0x41;
      local_148[0x1c] = 'T';
      local_148[0x1d] = -0x16;
      local_148[0x1e] = '\\';
      local_148[0x1f] = '\n';
      local_148[0x20] = '\x19';
      local_148[0x21] = '~';
      local_148[0x22] = 'k';
      local_148[0x23] = -0x6f;
      local_148[0x24] = '\x7f';
      local_148[0x25] = -0x61;
      local_148[0x26] = '\f';
      local_148[0x27] = -0x59;
      local_148[0x28] = '\n';
      local_148[0x29] = ',';
      local_148[0x2a] = '@';
      local_148[0x2b] = -0x56;
      local_148[0x2c] = -0x7e;
      local_148[0x2d] = 'm';
      local_148[0x2e] = '-';
      local_148[0x2f] = '+';
      local_148[0x30] = '\v';
      local_148[0x31] = '\x01';
      local_148[0x32] = -0x44;
      local_148[0x33] = '\x10';
      local_148[0x34] = -0x6b;
      local_148[0x35] = -0x13;
      local_148[0x36] = 'd';
      local_148[0x37] = -0x40;
      local_148[0x38] = -0x3c;
      local_148[0x39] = '&';
      local_148[0x3a] = '_';
      local_148[0x3b] = '9';
      local_148[0x3c] = '\x18';
      local_148[0x3d] = -0x67;
      local_148[0x3e] = -0x40;
      local_148[0x3f] = -2;
      local_188._8_8_ = 0x742064656c696166;
      local_188._0_8_ = 0x205d726f7272655b;
      uStack_178 = 0x657461657263206f;
      uStack_170 = 0x4420796d6d756420;
      local_168 = 0x6e69772031314433;
      uStack_160 = 0x7d7b207c20776f64;
      local_158 = 0;
      uStack_150 = 0;
      lVar10 = -1;
      do {
        puStack_1a0 = (undefined8 *)(lVar10 + 1);
        lVar3 = lVar10 + 1;
        lVar10 = (longlong)puStack_1a0;
      } while (local_188[lVar3] != '\0');
      local_1a8 = local_188;
      FUN_18044a7c0(&local_1a8,local_198);
      UnregisterClassA(local_68.lpszClassName,local_68.hInstance);
    }
    else {
      local_b0 = 0;
      local_a4 = 0;
      local_98 = 0;
      local_90 = 1;
      local_78 = 0;
      local_b8 = 0x40;
      local_b4 = 0x40;
      local_a8 = 0x1c;
      local_94 = 0x20;
      local_9c = 1;
      local_80 = 1;
      local_18 = 0xb000;
      local_14 = 0xa000;
      local_d8 = (longlong *)0x0;
      local_c8 = (longlong *)0x0;
      local_d0 = (longlong *)0x0;
      local_88 = hWnd;
      iVar5 = D3D11CreateDeviceAndSwapChain(0,1,0,0);
      if ((iVar5 < 0) || (local_d8 == (longlong *)0x0)) {
        local_188._8_8_ = 0xa05181ee77d57a06;
        local_188._0_8_ = 0xdb35e39b27e1c185;
        uStack_178 = 0x929654b1461b7377;
        uStack_170 = 0xa5cea54bfef7110;
        local_168 = 0xa70c9f7f916b7e19;
        uStack_160 = 0x2b2d6d82aa402c0a;
        local_158 = 0xc064ed9510bc010b;
        uStack_150 = 0xfec09918395f26c4;
        builtin_strncpy(local_148,"[error] failed to create dummy D3D11 swap chain | {}",0x35);
        local_148[0x35] = '\0';
        local_148[0x36] = '\0';
        local_148[0x37] = '\0';
        local_148[0x38] = '\0';
        local_148[0x39] = '\0';
        local_148[0x3a] = '\0';
        local_148[0x3b] = '\0';
        local_148[0x3c] = '\0';
        local_148[0x3d] = '\0';
        local_148[0x3e] = '\0';
        local_148[0x3f] = '\0';
        uStack_100 = 0xffffffffffffffff;
        do {
          uVar9 = uStack_100;
          uStack_100 = uVar9 + 1;
        } while (local_148[uVar9 + 1] != '\0');
        local_108 = local_148;
        local_f8 = 0x1000000000000000;
        local_1a8 = (undefined1 *)0x1;
        puStack_1a0 = &local_f8;
        uStack_178 = 0;
        uStack_170 = 0xf;
        local_188._1_15_ = SUB1615((undefined1  [16])0x0,1);
        auVar2[0xf] = 0;
        auVar2._0_15_ = local_188._1_15_;
        local_188 = auVar2 << 8;
        local_198[0] = 1;
        lVar10 = uVar9 + 9;
        if (0xfffffffffffffff7 < uStack_100) {
          lVar10 = -1;
        }
        local_f0 = iVar5;
        FUN_1800f5540(local_188,lVar10);
        local_e8 = local_1a8;
        puStack_e0 = puStack_1a0;
        FUN_1801da050(&local_1a8,local_188,&local_108,&local_e8);
        puVar8 = local_188;
        if ((uStack_170 < 0x10) ||
           (puVar8 = (undefined1 *)local_188._0_8_,
           (undefined1 *)local_188._0_8_ != (undefined1 *)0x0)) {
          puVar7 = (undefined1 *)FUN_1803b0a60();
          uVar1 = *puVar7;
          puVar7 = (undefined1 *)FUN_1803b0a60();
          *puVar7 = 1;
          FUN_1800a9e50(1,puVar8);
          puVar8 = (undefined1 *)FUN_1803b0a60();
          *puVar8 = uVar1;
        }
        FUN_18015c010(local_188);
      }
      else {
        DAT_180c709f0 = *(undefined8 *)(*local_d8 + 0x40);
        DAT_180c70980 = *(undefined8 *)(*local_d8 + 0x68);
      }
      if (local_d0 != (longlong *)0x0) {
        (**(code **)(*local_d0 + 0x10))();
      }
      if (local_c8 != (longlong *)0x0) {
        (**(code **)(*local_c8 + 0x10))();
      }
      if (local_d8 != (longlong *)0x0) {
        (**(code **)(*local_d8 + 0x10))(local_d8);
      }
      DestroyWindow(hWnd);
      UnregisterClassA(local_68.lpszClassName,local_68.hInstance);
    }
  }
}



