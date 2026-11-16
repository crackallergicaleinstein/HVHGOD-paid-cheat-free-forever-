// FUN_1802cb310 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802cb310 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_1802cb310(void)

{
  int iVar1;
  ULONGLONG UVar2;
  FARPROC pFVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined2 local_2c;
  undefined4 local_2a;
  ulonglong local_20;
  
  local_20 = DAT_1808d5f00 ^ (ulonglong)auStack_88;
  if (DAT_1808fd8e0 != '\0') {
  }
  if (DAT_1808fd858 != 0) {
  }
  UVar2 = GetTickCount64();
  if (UVar2 < DAT_1808fd8d8) {
  }
  DAT_1808fd8d8 = UVar2 + 1000;
  DAT_1808fd850 = LoadLibraryExW(L"xaudio2_9.dll",(HANDLE)0x0,0x800);
  if (DAT_1808fd850 == (HMODULE)0x0) {
  }
  pFVar3 = GetProcAddress(DAT_1808fd850,"XAudio2Create");
  if ((pFVar3 != (FARPROC)0x0) && (iVar1 = (*pFVar3)(&DAT_1808fd858,0,1), -1 < iVar1)) {
    local_50 = CONCAT44(local_50._4_4_,6);
    local_58 = 0;
    local_60 = 0;
    local_68 = 0;
    iVar1 = (**(code **)(*(longlong *)DAT_1808fd858 + 0x38))(DAT_1808fd858,&DAT_1808fd860,0,0);
    if (-1 < iVar1) {
      uVar5 = 0x3f800000;
      local_2a = 0x10;
      local_2c = 2;
      puVar4 = &DAT_1808fd868;
      local_38 = 0x10001;
      local_34 = 0x5622;
      local_30 = 0xac44;
      while( true ) {
        local_50 = 0;
        local_58 = 0;
        local_60 = 0;
        local_68 = uVar5;
        iVar1 = (**(code **)(*(longlong *)DAT_1808fd858 + 0x28))(DAT_1808fd858,puVar4,&local_38,0);
        if (iVar1 < 0) break;
        puVar4 = puVar4 + 1;
        if (puVar4 == (undefined8 *)&DAT_1808fd888) {
        }
      }
    }
  }
  FUN_1802cb260();
}



