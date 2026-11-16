// FUN_180363880 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180363880 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180363880(undefined8 *param_1,int param_2)

{
  longlong lVar1;
  ULONGLONG UVar2;
  undefined4 uVar3;
  undefined1 auStack_6f8 [32];
  undefined **local_6d8;
  char *local_6d0;
  undefined8 local_6c8;
  undefined8 local_6c0;
  undefined8 local_6b8;
  undefined8 local_6b0;
  undefined8 local_6a8;
  undefined8 local_6a0;
  undefined8 local_698;
  undefined8 local_690;
  undefined8 local_688;
  undefined8 local_680;
  undefined8 local_678;
  undefined8 local_670;
  undefined8 local_668;
  undefined8 local_660;
  undefined8 local_658;
  uint local_650;
  undefined4 local_648;
  double local_640;
  undefined8 local_638;
  undefined8 local_630;
  char local_628 [1536];
  ulonglong local_28;
  
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_6f8;
  if (DAT_180cc8360 != '\0') {
    (&DAT_180c6f890)[param_2] = (&DAT_180c6f890)[param_2] + 1;
    UVar2 = GetTickCount64();
    if (DAT_180c6f880 <= UVar2) {
      DAT_180c6f880 = UVar2 + 2000;
      lVar1 = param_1[1];
      if ((DAT_180b8fffc != '\0') || (uVar3 = 0, DAT_180b90028 != '\0')) {
        uVar3 = 1;
      }
      FUN_18063ab10(local_628,0,0x600);
      local_650 = (uint)DAT_1808fedf1;
      local_640 = (double)*(float *)(lVar1 + 0x10);
      local_658 = DAT_180c6f908;
      local_660 = DAT_180c6f900;
      local_668 = DAT_180c6f8f8;
      local_670 = DAT_180c6f8f0;
      local_678 = DAT_180c6f8e8;
      local_680 = DAT_180c6f8e0;
      local_688 = DAT_180c6f8d8;
      local_690 = DAT_180c6f8d0;
      local_698 = DAT_180c6f8c8;
      local_6a0 = DAT_180c6f8c0;
      local_6a8 = DAT_180c6f8b8;
      local_6b0 = DAT_180c6f8b0;
      local_6b8 = DAT_180c6f8a8;
      local_6c0 = DAT_180c6f8a0;
      local_6c8 = DAT_180c6f898;
      local_6d0 = (char *)DAT_180c6f890;
      local_6d8 = *(undefined ***)(*(longlong *)*param_1 + 8);
      local_648 = uVar3;
      FUN_18015ad60(local_628,0x600,0xffffffffffffffff,
                    "command=%lld state=%llu ground=%llu stance=%llu ascending=%llu owner=%llu held=%llu cooldown=%llu capacity=%llu context=%llu budget=%llu no_contact=%llu timing=%llu prediction_unavailable=%llu rejected=%llu accepted=%llu pending=%llu bhop_owner=%d jumpbug_owner=%d network_vz=%.3f server_ack=0"
                   );
      local_6d8 = &PTR_180700558;
      if (local_628[0] != '\0') {
        local_6d8 = (undefined **)&DAT_1806bcfc0;
      }
      local_6d0 = local_628;
      FUN_1800f6900(0);
      local_630 = 0;
      local_638 = 0;
      memcmp(&local_630,&local_638,8);
      DAT_180c6f908 = 0;
      DAT_180c6f900 = 0;
      DAT_180c6f8f8 = 0;
      DAT_180c6f8f0 = 0;
      DAT_180c6f8e8 = 0;
      DAT_180c6f8e0 = 0;
      DAT_180c6f8d8 = 0;
      DAT_180c6f8d0 = 0;
      DAT_180c6f8c8 = 0;
      DAT_180c6f8c0 = 0;
      DAT_180c6f8b8 = 0;
      DAT_180c6f8b0 = 0;
      DAT_180c6f8a8 = 0;
      DAT_180c6f8a0 = 0;
      DAT_180c6f898 = 0;
      DAT_180c6f890 = 0;
    }
  }
}



