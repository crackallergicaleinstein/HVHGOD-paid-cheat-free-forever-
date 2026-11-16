// FUN_180365f40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180365f40 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180365f40(int param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  ULONGLONG UVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auStack_6f8 [32];
  undefined **local_6d8;
  char *local_6d0;
  undefined4 local_6c8;
  undefined4 local_6c0;
  undefined4 local_6b8;
  undefined4 local_6b0;
  undefined4 local_6a8;
  undefined4 local_6a0;
  undefined4 local_698;
  undefined4 local_690;
  undefined4 local_688;
  undefined4 local_680;
  undefined4 local_678;
  undefined4 local_670;
  undefined4 local_668;
  double local_660;
  double local_658;
  double local_650;
  byte local_648 [16];
  char local_638 [1536];
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_6f8;
  (&DAT_180c6f9a8)[param_1] = (&DAT_180c6f9a8)[param_1] + 1;
  UVar2 = GetTickCount64();
  if (DAT_180c6f9a0 <= UVar2) {
    DAT_180c6f9a0 = UVar2 + 2000;
    uVar6 = 1;
    if ((DAT_180cc8360 == '\0') || (uVar5 = 1, DAT_180cc83c9 == '\0')) {
      uVar5 = 0;
    }
    if ((DAT_180cc8360 == '\0') || (DAT_180cc83c9 == '\0')) {
      uVar6 = 0;
    }
    FUN_18063ab10(local_638,0,0x600);
    local_650 = (double)*(float *)(param_3 + 0x10);
    local_658 = (double)*(float *)(param_3 + 0xc);
    local_660 = (double)*(float *)(param_3 + 8);
    local_668 = DAT_180c6f9d4;
    local_670 = DAT_180c6f9d0;
    local_678 = DAT_180c6f9cc;
    local_680 = DAT_180c6f9c8;
    local_688 = DAT_180c6f9c4;
    local_690 = DAT_180c6f9c0;
    local_698 = DAT_180c6f9bc;
    local_6a0 = DAT_180c6f9b8;
    local_6a8 = DAT_180c6f9b4;
    local_6b0 = DAT_180c6f9b0;
    local_6b8 = DAT_180c6f9ac;
    local_6c0 = DAT_180c6f9a8;
    local_6d8 = *(undefined ***)(param_2 + 8);
    local_6d0 = (char *)CONCAT44(local_6d0._4_4_,uVar6);
    local_6c8 = uVar5;
    FUN_18015ad60(local_638,0x600,0xffffffffffffffff,
                  "command=%lld ramp_boost=%d slide_walk=%d menu=%u owner=%u ground=%u rising=%u context=%u capacity=%u budget=%u no_slope=%u no_boost=%u native_unavailable=%u rejected=%u accepted=%u velocity=(%.3f,%.3f,%.3f) source=command_start server_ack=unverified"
                 );
    local_6d8 = &PTR_180700558;
    if (local_638[0] != '\0') {
      local_6d8 = (undefined **)&DAT_1806bcfc0;
    }
    local_6d0 = local_638;
    FUN_1800f6900(0);
    local_648[0] = 0;
    local_648[1] = 0;
    local_648[2] = 0;
    local_648[3] = 0;
    local_648[4] = 0;
    local_648[5] = 0;
    local_648[6] = 0;
    local_648[7] = 0;
    lVar3 = 0;
    do {
      lVar4 = lVar3 + 1;
      if (local_648[lVar3] != local_648[lVar3 + 4]) {
        uVar1 = -(uint)(local_648[lVar3] < local_648[lVar3 + 4]) | 1;
        goto LAB_18036616e;
      }
      lVar3 = lVar4;
    } while (lVar4 != 4);
    uVar1 = 0;
LAB_18036616e:
    if (uVar1 == 0) {
      _DAT_180c6f9c8 = (undefined1  [16])0x0;
    }
    else {
      _DAT_180c6f9c8 = ZEXT816(0);
    }
    _DAT_180c6f9c0 = 0;
    _DAT_180c6f9b8 = 0;
    _DAT_180c6f9b0 = 0;
    _DAT_180c6f9a8 = 0;
  }
}



