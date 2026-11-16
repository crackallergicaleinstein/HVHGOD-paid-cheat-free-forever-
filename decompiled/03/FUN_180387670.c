// FUN_180387670 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180387670 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_180387670(float *param_1,HWND param_2,int param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  bool bVar2;
  longlong lVar3;
  char cVar4;
  BOOL BVar5;
  undefined1 (*pauVar6) [16];
  HMODULE hModule;
  float fVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [64];
  float fVar10;
  float fVar11;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  tagPOINT local_68;
  longlong local_60;
  float local_58;
  float local_54;
  ulonglong local_50;
  
  local_50 = DAT_1808d5f00 ^ (ulonglong)auStack_a8;
  if (((param_3 == 0x20a) || (param_3 == 0x20e)) || (param_3 == 0xa0)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
    if (0xd < param_3 - 0x200U) {
      *(undefined1 *)(param_1 + 2) = 0;
    }
  }
  local_60 = 0;
  FUN_180387340(&local_60);
  local_68.x = (LONG)(short)param_4;
  local_68.y = (LONG)(short)((ulonglong)param_4 >> 0x10);
  if ((!bVar2) || (BVar5 = ScreenToClient(param_2,&local_68), BVar5 != 0)) {
    pauVar6 = (undefined1 (*) [16])FUN_1803874e0(local_78,param_2);
    local_88 = *pauVar6;
    auVar9 = ZEXT1664(local_88);
    fVar10 = (float)local_68.x;
    fVar11 = (float)local_68.y;
    local_58 = fVar10;
    local_54 = fVar11;
    cVar4 = FUN_180387290(local_88);
    if ((cVar4 == '\0') || (cVar4 = FUN_180387210(&local_58), cVar4 == '\0')) {
      fVar7 = -3.4028235e+38;
      fVar10 = -3.4028235e+38;
    }
    else {
      auVar8 = auVar9._0_16_;
      auVar1 = vshufps_avx(auVar8,auVar8,0xaa);
      fVar7 = (fVar10 * auVar1._0_4_) / auVar9._0_4_;
      auVar1 = vshufps_avx(auVar8,auVar8,0xff);
      auVar8 = vshufps_avx(auVar8,auVar8,0x55);
      fVar10 = (fVar11 * auVar1._0_4_) / auVar8._0_4_;
    }
    *param_1 = fVar7;
    param_1[1] = fVar10;
    *(undefined1 *)(param_1 + 2) = 1;
  }
  else {
    *param_1 = -3.4028235e+38;
    param_1[1] = -3.4028235e+38;
    *(undefined1 *)(param_1 + 2) = 1;
  }
  lVar3 = local_60;
  if (local_60 != 0) {
    if ((DAT_180c70e50 & 1) == 0) {
      DAT_180c70e50 = DAT_180c70e50 | 1;
      hModule = GetModuleHandleW(L"user32.dll");
      DAT_180c70e58 = GetProcAddress(hModule,"SetThreadDpiAwarenessContext");
    }
    (*DAT_180c70e58)(lVar3);
  }
}



