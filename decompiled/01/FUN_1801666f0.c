// FUN_1801666f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801666f0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801666f0(undefined1 (*param_1) [16])

{
  longlong lVar1;
  HRESULT HVar2;
  longlong lVar3;
  undefined1 auStack_d8 [32];
  uint local_b8;
  uint local_b0;
  uint local_a8;
  uint local_a0;
  uint local_98;
  uint local_90;
  uint local_88;
  uint local_80;
  uint local_78;
  uint local_70;
  GUID local_60;
  char local_50 [40];
  ulonglong local_28;
  
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_d8;
  local_60.Data1 = 0;
  local_60.Data2 = 0;
  local_60.Data3 = 0;
  local_60.Data4[0] = '\0';
  local_60.Data4[1] = '\0';
  local_60.Data4[2] = '\0';
  local_60.Data4[3] = '\0';
  local_60.Data4[4] = '\0';
  local_60.Data4[5] = '\0';
  local_60.Data4[6] = '\0';
  local_60.Data4[7] = '\0';
  HVar2 = CoCreateGuid(&local_60);
  if (HVar2 < 0) {
    *param_1 = (undefined1  [16])0x0;
    *(undefined8 *)param_1[1] = 0;
    *(undefined8 *)(param_1[1] + 8) = 0xf;
    (*param_1)[0] = 0;
  }
  else {
    local_50[0x20] = 0;
    local_70 = (uint)local_60.Data4[7];
    local_78 = (uint)local_60.Data4[6];
    local_80 = (uint)local_60.Data4[5];
    local_88 = (uint)local_60.Data4[4];
    local_90 = (uint)local_60.Data4[3];
    local_98 = (uint)local_60.Data4[2];
    local_a0 = (uint)local_60.Data4[1];
    local_a8 = (uint)local_60.Data4[0];
    local_b0 = (uint)local_60.Data3;
    local_b8 = (uint)local_60.Data2;
    local_50[0] = '\0';
    local_50[1] = '\0';
    local_50[2] = '\0';
    local_50[3] = '\0';
    local_50[4] = '\0';
    local_50[5] = '\0';
    local_50[6] = '\0';
    local_50[7] = '\0';
    local_50[8] = '\0';
    local_50[9] = '\0';
    local_50[10] = '\0';
    local_50[0xb] = '\0';
    local_50[0xc] = '\0';
    local_50[0xd] = '\0';
    local_50[0xe] = '\0';
    local_50[0xf] = '\0';
    local_50[0x10] = '\0';
    local_50[0x11] = '\0';
    local_50[0x12] = '\0';
    local_50[0x13] = '\0';
    local_50[0x14] = '\0';
    local_50[0x15] = '\0';
    local_50[0x16] = '\0';
    local_50[0x17] = '\0';
    local_50[0x18] = '\0';
    local_50[0x19] = '\0';
    local_50[0x1a] = '\0';
    local_50[0x1b] = '\0';
    local_50[0x1c] = '\0';
    local_50[0x1d] = '\0';
    local_50[0x1e] = '\0';
    local_50[0x1f] = '\0';
    FUN_18015abc0(local_50,0x21,"%08lx%04x%04x%02x%02x%02x%02x%02x%02x%02x%02x",local_60.Data1);
    *param_1 = (undefined1  [16])0x0;
    *(undefined8 *)param_1[1] = 0;
    *(undefined8 *)(param_1[1] + 8) = 0;
    lVar3 = -1;
    do {
      lVar1 = lVar3 + 1;
      lVar3 = lVar3 + 1;
    } while (local_50[lVar1] != '\0');
    FUN_18015ba30(param_1,local_50);
  }
}



