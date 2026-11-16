// FUN_180504900 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180504900 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180504900(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  BOOL BVar3;
  int iVar4;
  HKL pHVar5;
  HMODULE hModule;
  FARPROC pFVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  char *local_48 [5];
  LARGE_INTEGER local_20;
  LARGE_INTEGER local_18;
  ulonglong local_10;
  
  lVar1 = DAT_180bb8ae8;
  local_10 = DAT_1808d5f00 ^ (ulonglong)auStack_78;
  BVar3 = QueryPerformanceFrequency((LARGE_INTEGER *)(local_48 + 5));
  if ((BVar3 != 0) && (BVar3 = QueryPerformanceCounter(&local_18), BVar3 != 0)) {
    local_50 = (undefined8 *)FUN_1804b8110(0x68);
    lVar7 = 0;
    if (local_50 == (undefined8 *)0x0) {
      puVar8 = (undefined8 *)0x0;
    }
    else {
      local_50[6] = 0;
      local_50[7] = 0;
      *local_50 = 0;
      local_50[1] = 0;
      local_50[2] = 0;
      local_50[3] = 0;
      local_50[4] = 0;
      local_50[5] = 0;
      local_50[6] = 0;
      local_50[7] = 0;
      local_50[8] = 0;
      local_50[9] = 0;
      local_50[10] = 0;
      local_50[0xb] = 0;
      local_50[0xc] = 0;
      puVar8 = local_50;
    }
    *(uint *)(lVar1 + 0x2c) = *(uint *)(lVar1 + 0x2c) | 6;
    *(char **)(lVar1 + 0xb8) = "imgui_impl_win32";
    *(undefined8 **)(lVar1 + 200) = puVar8;
    *puVar8 = param_1;
    puVar8[4] = local_20.s;
    *(_struct_19 *)(puVar8 + 3) = local_18.s;
    *(undefined4 *)(puVar8 + 5) = 0xb;
    lVar1 = *(longlong *)(lVar1 + 200);
    pHVar5 = GetKeyboardLayout(0);
    iVar4 = GetLocaleInfoA((uint)((ulonglong)pHVar5 >> 0x10) & 0xffff,0x20001004,
                           (LPSTR)(lVar1 + 0x2c),4);
    if (iVar4 == 0) {
      *(undefined4 *)(lVar1 + 0x2c) = 0;
    }
    uVar2 = *puVar8;
    lVar1 = **(longlong **)(DAT_180bb8ae8 + 0x2030);
    *(undefined8 *)(lVar1 + 0x38) = uVar2;
    *(undefined8 *)(lVar1 + 0x30) = uVar2;
    local_48[0] = "xinput1_4.dll";
    local_48[1] = "xinput1_3.dll";
    local_48[2] = "xinput9_1_0.dll";
    local_48[3] = "xinput1_2.dll";
    local_48[4] = "xinput1_1.dll";
    *(undefined1 *)((longlong)puVar8 + 0x41) = 1;
    do {
      hModule = LoadLibraryA(local_48[lVar7]);
      if (hModule != (HMODULE)0x0) {
        puVar8[9] = hModule;
        pFVar6 = GetProcAddress(hModule,"XInputGetCapabilities");
        puVar8[10] = pFVar6;
        pFVar6 = GetProcAddress(hModule,"XInputGetState");
        puVar8[0xb] = pFVar6;
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < 5);
  }
}



