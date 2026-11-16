// FUN_1800e5120 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800e5120 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800e5120(undefined8 *param_1)

{
  size_t _Size;
  bool bVar1;
  undefined8 *puVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 ******ppppppuVar6;
  undefined8 *_Buf2;
  undefined8 *puVar7;
  char *pcVar8;
  undefined4 uVar9;
  undefined8 *_Buf1;
  undefined1 auStack_6b8 [32];
  undefined **local_698;
  char *local_690;
  undefined4 local_688;
  undefined8 ******local_678;
  ulonglong local_670;
  undefined8 ******local_668 [2];
  ulonglong local_658;
  ulonglong local_650;
  char *local_648;
  longlong local_640;
  char local_638;
  undefined8 local_630;
  char local_628 [1536];
  ulonglong local_28;
  
  puVar2 = DAT_180bb8b20;
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_6b8;
  _Buf1 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    _Buf1 = (undefined8 *)*param_1;
  }
  _Size = param_1[2];
  for (puVar7 = DAT_180bb8b18; puVar7 != puVar2; puVar7 = puVar7 + 0x2d) {
    if (*(char *)((longlong)puVar7 + 0xe3) != '\0') {
      _Buf2 = puVar7;
      if (0xf < (ulonglong)puVar7[3]) {
        _Buf2 = (undefined8 *)*puVar7;
      }
      if ((_Size == puVar7[2]) && ((_Size == 0 || (iVar4 = memcmp(_Buf1,_Buf2,_Size), iVar4 == 0))))
      {
        FUN_18016b2c0();
      }
    }
  }
  FUN_18016b790(&DAT_180bb8af0,local_668,param_1);
  local_678 = local_668;
  if (0xf < local_650) {
    local_678 = local_668[0];
  }
  local_670 = local_658;
  lVar5 = FUN_1800b4580(&local_648,&local_678);
  cVar3 = *(char *)(lVar5 + 0x10);
  if (local_638 != '\0') {
    FUN_1800aab30(&local_648);
  }
  if (cVar3 != '\0') {
    cVar3 = FUN_18016b2c0();
    if (cVar3 != '\0') {
      FUN_1800e4880(1);
    }
    goto LAB_1800e53a1;
  }
  local_678 = local_668;
  if (0xf < local_650) {
    local_678 = local_668[0];
  }
  local_670 = local_658;
  FUN_1800b4310(&local_648,&local_678);
  FUN_18016cf30();
  FUN_18015c010(&local_648);
  ppppppuVar6 = local_668;
  if (0xf < local_650) {
    ppppppuVar6 = local_668[0];
  }
  if (local_658 < 0x4000001) {
    local_670 = local_658;
    local_678 = ppppppuVar6;
    FUN_1800ab8b0(&local_648,&local_678);
    if (((((char)local_630 == '\0') || ((ulonglong)(local_640 - (longlong)local_648) < 8)) ||
        (*local_648 != 'H')) ||
       (((local_648[1] != 'C' || (local_648[2] != 'G')) || (local_648[3] != '1')))) {
      if ((char)local_630 != '\0') {
        FUN_180113710(&local_648);
      }
      goto LAB_1800e5306;
    }
    uVar9 = *(undefined4 *)(local_648 + 4);
    bVar1 = true;
    FUN_180113710(&local_648);
  }
  else {
LAB_1800e5306:
    bVar1 = false;
    uVar9 = 0;
  }
  pcVar8 = "unsupported_payload";
  if (bVar1) {
    pcVar8 = "invalid_legacy_payload";
  }
  if (0xf < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  FUN_18063ab10(local_628,0,0x600);
  local_698 = (undefined **)param_1;
  local_690 = pcVar8;
  local_688 = uVar9;
  FUN_18015ad60(local_628,0x600,0xffffffffffffffff,
                "id=%s reason=%s legacy_version=%u previous_profile=retained");
  local_698 = &PTR_180700558;
  if (local_628[0] != '\0') {
    local_698 = (undefined **)&DAT_1806bcfc0;
  }
  local_690 = local_628;
  FUN_1800f6900(2);
LAB_1800e53a1:
  FUN_18015c010(local_668);
}



