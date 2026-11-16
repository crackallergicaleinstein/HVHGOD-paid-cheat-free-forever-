// FUN_1802e0770 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802e0770 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_1802e0770(undefined8 param_1,undefined8 *param_2)

{
  HMODULE pHVar1;
  float *pfVar2;
  float *pfVar3;
  undefined8 ****ppppuVar4;
  undefined1 in_ZMM2 [64];
  float fVar5;
  undefined1 auVar6 [64];
  undefined1 auStack_88 [32];
  float local_68 [4];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 ****local_48 [2];
  longlong local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_88;
  auVar6 = ZEXT1664(in_ZMM2._0_16_);
  local_58 = *param_2;
  uStack_50 = param_2[1];
  FUN_1802c6f70(local_48,&local_58);
  if (local_38 != 0) {
    if ((DAT_180cd3e80 & 1) == 0) {
      DAT_180cd3e80 = DAT_180cd3e80 | 1;
      pHVar1 = GetModuleHandleW(L"winmm.dll");
      if (pHVar1 == (HMODULE)0x0) {
        pHVar1 = LoadLibraryW(L"winmm.dll");
      }
      DAT_180cd3e88 = pHVar1;
    }
    if (DAT_180cd3e88 != (HMODULE)0x0) {
      if ((DAT_180cd3e80 & 2) == 0) {
        DAT_180cd3e80 = DAT_180cd3e80 | 2;
        DAT_180cd3e90 = GetProcAddress(DAT_180cd3e88,"PlaySoundW");
      }
      fVar5 = auVar6._0_4_;
      if (DAT_180cd3e90 != (FARPROC)0x0) {
        if ((DAT_180cd3e80 & 4) == 0) {
          DAT_180cd3e80 = DAT_180cd3e80 | 4;
          DAT_180cd3e98 = GetProcAddress(DAT_180cd3e88,"waveOutSetVolume");
          fVar5 = auVar6._0_4_;
        }
        if (DAT_180cd3e98 != (FARPROC)0x0) {
          local_68[2] = 1.0;
          local_68[0] = 0.0;
          local_68[1] = fVar5 / 100.0;
          pfVar3 = local_68;
          if (0.0 <= local_68[1]) {
            pfVar3 = local_68 + 1;
          }
          pfVar2 = local_68 + 2;
          if (local_68[1] <= 1.0) {
            pfVar2 = pfVar3;
          }
          (*DAT_180cd3e98)(0xffffffff,
                           (int)(*pfVar2 * 65535.0) << 0x10 | (int)(*pfVar2 * 65535.0) & 0xffffU);
        }
        ppppuVar4 = local_48;
        if (7 < local_30) {
          ppppuVar4 = local_48[0];
        }
        (*DAT_180cd3e90)(ppppuVar4,0,0x20003);
      }
    }
  }
  FUN_18015b930(local_48);
}



