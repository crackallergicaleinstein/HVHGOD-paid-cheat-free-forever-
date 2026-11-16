// FUN_1802466d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802466d0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802466d0(undefined8 *param_1,undefined8 param_2)

{
  byte bVar1;
  longlong lVar2;
  char cVar3;
  ULONGLONG UVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined1 auStack_698 [32];
  undefined **local_678;
  char *local_670;
  uint local_668;
  uint local_660;
  uint local_658;
  uint local_650;
  undefined8 local_648;
  char local_638 [1536];
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_698;
  UVar4 = GetTickCount64();
  cVar3 = DAT_180cad6b8;
  if (DAT_180c646e8 <= UVar4) {
    DAT_180c646e8 = UVar4 + 500;
    lVar2 = *(longlong *)*param_1;
    bVar1 = *(byte *)(param_1[1] + 0x28);
    if (lVar2 == 0) {
      uVar6 = 0;
      uVar5 = 0xffffffffffffffff;
    }
    else {
      uVar6 = *(undefined8 *)(lVar2 + 0x60);
      uVar5 = *(undefined8 *)(lVar2 + 8);
    }
    bVar7 = DAT_180cad2e0 == 1;
    FUN_18063ab10(local_638,0,0x600);
    local_650 = (uint)DAT_180cc9372;
    local_658 = (uint)bVar1;
    local_660 = (uint)bVar7;
    local_668 = (uint)(cVar3 != '\0');
    local_678 = (undefined **)uVar5;
    local_670 = (char *)param_2;
    local_648 = uVar6;
    FUN_18015ad60(local_638,0x600,0xffffffffffffffff,
                  "command=%lld reason=%s enabled=%d rage_active=%d alive=%d weapon_context=%d buttons=0x%llx"
                 );
    local_678 = &PTR_180700558;
    if (local_638[0] != '\0') {
      local_678 = (undefined **)&DAT_1806bcfc0;
    }
    local_670 = local_638;
    FUN_1800f6900(0);
  }
}



