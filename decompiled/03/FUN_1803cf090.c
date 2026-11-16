// FUN_1803cf090 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803cf090 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_1803cf090(HWND param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  longlong lVar3;
  char cVar4;
  BOOL BVar5;
  undefined1 (*pauVar6) [16];
  HMODULE hModule;
  undefined1 auVar7 [16];
  undefined1 auVar8 [64];
  float fVar9;
  float fVar10;
  undefined1 auStack_98 [32];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  tagPOINT local_58;
  float local_50;
  float local_4c;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_1808d5f00 ^ (ulonglong)auStack_98;
  local_48 = 0;
  FUN_180387340(&local_48,param_1);
  local_58.x = 0;
  local_58.y = 0;
  BVar5 = GetCursorPos(&local_58);
  if ((BVar5 == 0) || (BVar5 = ScreenToClient(param_1,&local_58), BVar5 == 0)) {
    vunpcklps_avx(SUB6416(ZEXT464(0xff7fffff),0),SUB6416(ZEXT464(0xff7fffff),0));
  }
  else {
    pauVar6 = (undefined1 (*) [16])FUN_1803874e0(local_68,param_1);
    local_78 = *pauVar6;
    auVar8 = ZEXT1664(local_78);
    fVar9 = (float)local_58.x;
    fVar10 = (float)local_58.y;
    local_50 = fVar9;
    local_4c = fVar10;
    cVar4 = FUN_180387290(local_78);
    if ((cVar4 == '\0') || (cVar4 = FUN_180387210(&local_50), cVar4 == '\0')) {
      vunpcklps_avx(SUB6416(ZEXT464(0xff7fffff),0),SUB6416(ZEXT464(0xff7fffff),0));
    }
    else {
      auVar7 = auVar8._0_16_;
      auVar1 = vshufps_avx(auVar7,auVar7,0xaa);
      auVar2 = vshufps_avx(auVar7,auVar7,0xff);
      auVar7 = vshufps_avx(auVar7,auVar7,0x55);
      vunpcklps_avx(ZEXT416((uint)((fVar9 * auVar1._0_4_) / auVar8._0_4_)),
                    ZEXT416((uint)((auVar2._0_4_ * fVar10) / auVar7._0_4_)));
    }
  }
  lVar3 = local_48;
  if (local_48 != 0) {
    if ((DAT_180c70e50 & 1) == 0) {
      DAT_180c70e50 = DAT_180c70e50 | 1;
      hModule = GetModuleHandleW(L"user32.dll");
      DAT_180c70e58 = GetProcAddress(hModule,"SetThreadDpiAwarenessContext");
    }
    (*DAT_180c70e58)(lVar3);
  }
}



