// FUN_1800e5990 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800e5990 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800e5990(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  char cVar2;
  HMODULE pHVar3;
  ulonglong uVar4;
  LPCSTR lpModuleName;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 auStack_8b8 [32];
  undefined1 *local_898;
  undefined1 *local_890;
  ulonglong local_888;
  ulonglong local_880;
  ulonglong local_878;
  undefined1 local_870 [16];
  undefined1 local_860 [16];
  undefined1 local_850 [16];
  undefined1 local_840 [16];
  undefined1 local_828 [2048];
  ulonglong local_28;
  
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_8b8;
  local_878 = 0;
  local_870 = (undefined1  [16])0x0;
  local_860 = (undefined1  [16])0x0;
  FUN_18015ba30(local_870,*param_1,param_1[1]);
  local_850 = (undefined1  [16])0x0;
  local_840 = (undefined1  [16])0x0;
  FUN_18015ba30(local_850,*param_2,param_2[1]);
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  puVar6 = local_850;
  if (0xf < (ulonglong)local_840._8_8_) {
    puVar6 = (undefined1 *)local_850._0_8_;
  }
  puVar5 = local_870;
  if (0xf < (ulonglong)local_860._8_8_) {
    puVar5 = (undefined1 *)local_870._0_8_;
  }
  cVar2 = FUN_1801cb260(&DAT_1808da3c0,puVar5,puVar6,&local_878);
  if (cVar2 == '\0') goto LAB_1800e5b0b;
  lpModuleName = local_870;
  if (0xf < (ulonglong)local_860._8_8_) {
    lpModuleName = (LPCSTR)local_870._0_8_;
  }
  pHVar3 = GetModuleHandleA(lpModuleName);
  uVar1 = local_878;
  if ((pHVar3 == (HMODULE)0x0) || ((short)pHVar3->unused != 0x5a4d)) {
    uVar4 = 0;
LAB_1800e5a99:
    puVar6 = local_850;
    if (0xf < (ulonglong)local_840._8_8_) {
      puVar6 = (undefined1 *)local_850._0_8_;
    }
    puVar5 = local_870;
    if (0xf < (ulonglong)local_860._8_8_) {
      puVar5 = (undefined1 *)local_870._0_8_;
    }
    FUN_18063ab10(local_828,0,0x800);
    local_888 = uVar1;
    local_898 = puVar5;
    local_890 = puVar6;
    local_880 = uVar4;
    FUN_18015ad60(local_828,0x800,0xffffffffffffffff,
                  "HVHGODS rejected out-of-range offset %s/%s rva=0x%llX size=0x%zX");
  }
  else {
    if (*(int *)((longlong)&pHVar3->unused + (longlong)pHVar3[0xf].unused) == 0x4550) {
      uVar4 = (ulonglong)*(uint *)((longlong)&pHVar3[0x14].unused + (longlong)pHVar3[0xf].unused);
    }
    else {
      uVar4 = 0;
    }
    if ((uVar4 == 0) || (uVar4 <= local_878)) goto LAB_1800e5a99;
    uVar1 = (longlong)&pHVar3->unused + local_878;
    cVar2 = FUN_1804513c0(uVar1,1,0);
    if (cVar2 != '\0') goto LAB_1800e5b0b;
    puVar6 = local_850;
    if (0xf < (ulonglong)local_840._8_8_) {
      puVar6 = (undefined1 *)local_850._0_8_;
    }
    puVar5 = local_870;
    if (0xf < (ulonglong)local_860._8_8_) {
      puVar5 = (undefined1 *)local_870._0_8_;
    }
    FUN_18063ab10(local_828,0,0x800);
    local_898 = puVar5;
    local_890 = puVar6;
    local_888 = uVar1;
    FUN_18015ad60(local_828,0x800,0xffffffffffffffff,
                  "HVHGODS rejected inaccessible offset %s/%s address=0x%llX");
  }
  FUN_1800a9e50(3,local_828);
LAB_1800e5b0b:
  FUN_18015c010(local_850);
  FUN_18015c010(local_870);
}



