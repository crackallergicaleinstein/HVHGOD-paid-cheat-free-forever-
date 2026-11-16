// FUN_1801fde70 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801fde70 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801fde70(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  ULONGLONG UVar1;
  ulonglong uVar2;
  bool bVar3;
  undefined1 auStack_688 [32];
  undefined **local_668;
  char *local_660;
  uint local_658;
  undefined4 local_650;
  undefined8 local_648;
  undefined4 local_640;
  undefined8 local_638;
  char local_628 [1536];
  ulonglong local_28;
  
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_688;
  UVar1 = GetTickCount64();
  if (DAT_180c63928 <= UVar1) {
    uVar2 = DAT_180c63928;
    do {
      LOCK();
      bVar3 = uVar2 == DAT_180c63928;
      if (bVar3) {
        DAT_180c63928 = UVar1 + 1000;
      }
      else {
        uVar2 = DAT_180c63928;
      }
      UNLOCK();
      if (bVar3) {
        FUN_18063ab10(local_628,0,0x600);
        local_638 = *(undefined8 *)(param_3 + 6);
        local_640 = param_3[4];
        local_648 = *(undefined8 *)(param_3 + 2);
        local_650 = *param_3;
        local_658 = (uint)*(byte *)(param_3 + 8);
        local_668 = (undefined **)param_1;
        local_660 = (char *)param_2;
        FUN_18015ad60(local_628,0x600,0xffffffffffffffff,
                      "feature=%s weapon=0x%p readable=%d primary_count=%d primary_data=0x%p secondary_count=%d secondary_data=0x%p"
                     );
        local_668 = &PTR_180700558;
        if (local_628[0] != '\0') {
          local_668 = (undefined **)&DAT_1806bcfc0;
        }
        local_660 = local_628;
        FUN_1800f6900(2);
      }
    } while (uVar2 <= UVar1);
  }
}



