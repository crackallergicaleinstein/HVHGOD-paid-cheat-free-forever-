// FUN_180504de0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180504de0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_180504de0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  char cVar4;
  short sVar5;
  short sVar6;
  BOOL BVar7;
  HWND pHVar8;
  HMODULE hModule;
  ulonglong uVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [64];
  undefined1 auVar13 [64];
  float fVar14;
  undefined1 auStack_78 [32];
  tagPOINT local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_78;
  plVar1 = *(longlong **)(param_1 + 0xa0);
  pHVar8 = GetForegroundWindow();
  if (pHVar8 != (HWND)*plVar1) {
  }
  if (*(char *)(param_1 + 0xbb) == '\0') goto LAB_180504fc5;
  fVar10 = *(float *)(param_1 + 0xe8);
  fVar14 = *(float *)(param_1 + 0xec);
  local_58.x = (LONG)fVar10;
  local_58.y = (LONG)fVar14;
  cVar4 = FUN_180387290(plVar1 + 6);
  if ((cVar4 == '\0') || (cVar4 = FUN_180387210(&local_58), cVar4 == '\0')) {
    auVar13 = ZEXT464(0xff7fffff);
    auVar11 = auVar13._0_16_;
  }
  else {
    auVar13 = ZEXT464((uint)((fVar10 * *(float *)(plVar1 + 6)) / *(float *)(plVar1 + 7)));
    auVar11 = ZEXT416((uint)((fVar14 * *(float *)((longlong)plVar1 + 0x34)) /
                            *(float *)((longlong)plVar1 + 0x3c)));
  }
  auVar12 = ZEXT1664(auVar11);
  local_50 = 0;
  FUN_180387340(&local_50,*plVar1);
  sVar5 = thunk_FUN_180624430(auVar13._0_8_);
  fVar10 = -1.7014117e+38;
  if ((((0 < sVar5) || (sVar6 = thunk_FUN_180624430(auVar12._0_8_), 0 < sVar6)) ||
      (auVar13._0_4_ <= fVar10)) || (auVar12._0_4_ <= fVar10)) {
    local_58.x = 0;
    if (sVar5 < 1) goto LAB_180504ef4;
LAB_180504f1f:
    local_58.y = 0;
    if (sVar5 < 1) goto LAB_180504f2b;
  }
  else {
    local_58.x = FUN_18060eb80(auVar13._0_8_);
LAB_180504ef4:
    sVar6 = thunk_FUN_180624430(auVar12._0_8_);
    if (((0 < sVar6) || (auVar13._0_4_ <= fVar10)) || (auVar12._0_4_ <= fVar10)) goto LAB_180504f1f;
    local_58.y = FUN_18060eb80(auVar12._0_8_);
LAB_180504f2b:
    sVar5 = thunk_FUN_180624430(auVar12._0_8_);
    if (((sVar5 < 1) && (fVar10 < auVar13._0_4_)) &&
       ((fVar10 < auVar12._0_4_ && (BVar7 = ClientToScreen((HWND)*plVar1,&local_58), BVar7 != 0))))
    {
      SetCursorPos(local_58.x,local_58.y);
    }
  }
  lVar2 = local_50;
  if (local_50 != 0) {
    if ((DAT_180c70e50 & 1) == 0) {
      DAT_180c70e50 = DAT_180c70e50 | 1;
      hModule = GetModuleHandleW(L"user32.dll");
      DAT_180c70e58 = GetProcAddress(hModule,"SetThreadDpiAwarenessContext");
    }
    (*DAT_180c70e58)(lVar2);
  }
  if (*(char *)(param_1 + 0xbb) != '\0') {
  }
LAB_180504fc5:
  uVar9 = FUN_1803cf090(*plVar1);
  local_50._4_4_ = (undefined4)(uVar9 >> 0x20);
  uVar3 = local_50._4_4_;
  local_50 = uVar9;
  FUN_1804b0330(param_1,uVar9 & 0xffffffff,uVar3);
}



