// FUN_1803e09a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803e09a0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1803e09a0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ULONGLONG UVar8;
  longlong lVar9;
  char *pcVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  ulonglong uVar13;
  byte bVar14;
  undefined1 auStack_708 [32];
  undefined **local_6e8;
  char *local_6e0;
  undefined4 local_6d8;
  undefined8 local_6d0;
  uint local_6c8;
  uint local_6c0;
  longlong local_6b8;
  longlong *local_6b0;
  undefined8 *local_6a8;
  undefined8 *local_6a0;
  undefined1 *local_698;
  longlong local_690;
  char *local_688;
  undefined8 local_680;
  undefined *local_678;
  longlong local_670;
  undefined8 local_668;
  undefined8 local_660;
  undefined8 local_658;
  undefined8 local_650;
  undefined4 local_648;
  undefined4 local_644;
  undefined4 local_640;
  undefined4 local_63c;
  char local_638 [1544];
  ulonglong local_30;
  
  lVar1 = DAT_180b0dfb0;
  local_30 = DAT_1808d5f00 ^ (ulonglong)auStack_708;
  if (param_2 == 0) {
  }
  if (DAT_180b0dfb0 == 0) {
  }
  uVar11 = 0;
  lVar5 = 0;
  if (*(longlong *)(DAT_180b0dfb0 + 0x40) != 0) {
    lVar5 = *(longlong *)(DAT_180b0dfb0 + 0x40) + 0x10;
  }
  if (lVar5 != param_2) {
  }
  local_660 = *(undefined8 *)(DAT_180b0dfb0 + 0x60);
  local_658 = *(undefined8 *)(DAT_180b0dfb0 + 0x68);
  local_650 = *(undefined8 *)(DAT_180b0dfb0 + 0x70);
  lVar5 = *(longlong *)(param_2 + 0x30);
  local_640 = 0;
  if ((lVar5 == 0) || (lVar5 == -0x10)) {
    local_648 = local_640;
  }
  else {
    local_648 = *(undefined4 *)(lVar5 + 0x18);
  }
  lVar5 = *(longlong *)(param_2 + 0x30);
  if ((lVar5 == 0) || (lVar5 == -0x10)) {
    local_644 = local_640;
  }
  else {
    local_644 = *(undefined4 *)(lVar5 + 0x1c);
  }
  lVar5 = *(longlong *)(param_2 + 0x30);
  if ((lVar5 != 0) && (lVar5 != -0x10)) {
    local_640 = *(undefined4 *)(lVar5 + 0x20);
  }
  local_63c = 0;
  lVar5 = *(longlong *)(DAT_180b0dfb0 + 8);
  local_668 = 0;
  local_6b0 = &local_670;
  local_6a8 = &local_668;
  local_6a0 = &local_660;
  local_6b8 = lVar5;
  local_670 = param_2;
  bVar2 = FUN_1803e0e10(&local_6b0);
  if (bVar2 != 0) {
    lVar9 = 0;
    bVar14 = 1;
    goto LAB_1803e0cd1;
  }
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  lVar6 = DAT_1809ba798;
  lVar7 = DAT_1808da460;
  if (DAT_1809ba798 == DAT_1808da460) {
    lVar9 = DAT_180c71f60;
    if (DAT_180c71f60 == 0) goto LAB_1803e0b25;
LAB_1803e0c54:
    lVar7 = DAT_180c71f90;
    if (DAT_180c71f90 == 0) goto LAB_1803e0cc8;
    lVar6 = FUN_18017ea70();
    *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
    cVar3 = FUN_1801ad780(lVar9,lVar7,lVar1);
    lVar7 = FUN_18017ea70();
    if (*(int *)(lVar7 + 4) != 0) {
      *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
    }
    if (cVar3 == '\0') goto LAB_1803e0cc8;
    uVar12 = 1;
    if (*(longlong *)(lVar1 + 8) == lVar5) {
      lVar7 = 0;
      if (*(longlong *)(lVar1 + 0x40) != 0) {
        lVar7 = *(longlong *)(lVar1 + 0x40) + 0x10;
      }
      if (lVar7 == local_670) {
        uVar11 = 1;
        cVar3 = FUN_1803e0e10(&local_6b0);
        if (cVar3 != '\0') {
          bVar14 = 1;
          goto LAB_1803e0cd1;
        }
      }
    }
  }
  else {
LAB_1803e0b25:
    UVar8 = GetTickCount64();
    if ((lVar6 == lVar7) && (UVar8 < DAT_180c71f48)) {
      lVar9 = 0;
    }
    else {
      local_678 = &DAT_1809ba740;
      iVar4 = FUN_1805f68d0(&DAT_1809ba740);
      if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1809ba78c == 0x7fffffff) {
        DAT_1809ba78c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      uVar13 = 1000;
      if (DAT_1809ba798 == lVar7) {
        if ((DAT_180c71f60 == 0) && (DAT_180c71f48 <= UVar8)) goto LAB_1803e0bad;
      }
      else {
        DAT_1809ba790 = 1000;
LAB_1803e0bad:
        lVar5 = -1;
        do {
          local_690 = lVar5 + 1;
          pcVar10 = "lient.dll:48895C2408488974241048897C24184C8974242055488D6C24E04881EC20010000488B4A40488D7A404885C9"
                    + lVar5;
          lVar5 = local_690;
        } while (*pcVar10 != '\0');
        local_698 = &DAT_180826e10;
        local_688 = "patterns::build_move_crc";
        local_680 = 0x18;
        DAT_180c71f60 = FUN_1800e5d20(&local_688,&local_698);
        DAT_1809ba798 = lVar7;
        DAT_180c71f48 = 0xffffffffffffffff;
        if (DAT_180c71f60 == 0) {
          DAT_180c71f48 = DAT_1809ba790 + UVar8;
          uVar13 = 60000;
          if (DAT_1809ba790 < 60000) {
            uVar13 = DAT_1809ba790 * 2;
          }
        }
        DAT_1809ba790 = uVar13;
      }
      lVar9 = DAT_180c71f60;
      FUN_1805f68fc(&DAT_1809ba740);
    }
    lVar5 = local_6b8;
    if (lVar9 != 0) goto LAB_1803e0c54;
LAB_1803e0cc8:
    uVar12 = 0;
  }
  uVar11 = uVar12;
  bVar14 = 0;
LAB_1803e0cd1:
  UVar8 = GetTickCount64();
  if (*(ulonglong *)(&DAT_180c71f50 + (ulonglong)bVar14 * 8) <= UVar8) {
    *(ULONGLONG *)(&DAT_180c71f50 + (ulonglong)bVar14 * 8) = UVar8 + 2000;
    if (bVar2 == 0) {
      pcVar10 = "missing";
      if (lVar9 != 0) {
        pcVar10 = "resolved";
      }
    }
    else {
      pcVar10 = "not_needed";
    }
    FUN_18063ab10(local_638,0,0x600);
    local_6c0 = (uint)bVar2;
    local_6d0 = local_668;
    local_6e8 = (undefined **)lVar5;
    local_6e0 = pcVar10;
    local_6d8 = uVar11;
    local_6c8 = (uint)bVar14;
    FUN_18015ad60(local_638,0x600,0xffffffffffffffff,
                  "command=%lld helper=%s called=%d bytes=%zu canonical_match=%d reused_native=%d temporary_owner=game server_ack=unverified"
                 );
    local_6e8 = &PTR_180700558;
    if (local_638[0] != '\0') {
      local_6e8 = (undefined **)&DAT_1806bcfc0;
    }
    pcVar10 = "COMMAND_CRC_FAILED";
    if (bVar14 != 0) {
      pcVar10 = "COMMAND_NATIVE_CRC_STATUS";
    }
    local_6e0 = local_638;
    FUN_1800f6900((bVar14 ^ 1) * 2,local_6e8,"Movement",pcVar10);
  }
}



