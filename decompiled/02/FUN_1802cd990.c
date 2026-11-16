// FUN_1802cd990 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802cd990 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802cd990(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char *pcVar4;
  char *pcVar5;
  undefined8 uVar6;
  DWORD DVar7;
  int iVar8;
  DWORD DVar9;
  longlong lVar10;
  char *pcVar11;
  char *pcVar12;
  undefined1 auStack_698 [32];
  undefined **local_678;
  char *local_670;
  longlong local_668;
  longlong local_660;
  undefined1 local_658 [16];
  undefined8 local_648;
  undefined1 local_640 [16];
  undefined8 local_630;
  char local_628 [1536];
  ulonglong local_28;
  
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_698;
  local_658 = (undefined1  [16])0x0;
  local_648 = 0;
  iVar8 = FUN_1805f68d0(&DAT_180cc9b08);
  uVar6 = DAT_180cc9ae8;
  pcVar12 = DAT_180cc9ae0;
  pcVar5 = DAT_180cc9ad8;
  if (iVar8 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_180cc9b54 == 0x7fffffff) {
    DAT_180cc9b54 = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  DAT_180cc9ad8 = (char *)0x0;
  local_658._8_8_ = DAT_180cc9ae0;
  local_658._0_8_ = pcVar5;
  DAT_180cc9ae0 = (char *)0x0;
  local_648 = DAT_180cc9ae8;
  DAT_180cc9ae8 = 0;
  FUN_1805f68fc(&DAT_180cc9b08);
  DVar9 = GetCurrentThreadId();
  DVar7 = DAT_180cc9ba8;
  if ((DAT_180cc9ba8 != 0) && (DAT_180cc9ba8 != DVar9)) {
    FUN_18063ab10(local_628,0,0x600);
    lVar10 = (DAT_180cc9af8 - DAT_180cc9af0) / 6 + (DAT_180cc9af8 - DAT_180cc9af0 >> 0x3f);
    local_660 = (lVar10 >> 2) - (lVar10 >> 0x3f);
    local_668 = ((longlong)pcVar12 - (longlong)pcVar5) / 0x48;
    local_670 = (char *)CONCAT44(local_670._4_4_,DVar9);
    local_678 = (undefined **)CONCAT44(local_678._4_4_,DVar7);
    FUN_18015ad60(local_628,0x600,0xffffffffffffffff,"previous=%u current=%u queued=%zu active=%zu")
    ;
    local_678 = &PTR_180700558;
    if (local_628[0] != '\0') {
      local_678 = (undefined **)&DAT_1806bcfc0;
    }
    local_670 = local_628;
    FUN_1800f6900(2);
  }
  pcVar11 = pcVar5;
  DAT_180cc9ba8 = DVar9;
  if (((DAT_180b0c290 != '\0') && (DAT_180b0c370 != '\0')) && (DAT_180b0c3fe != '\0')) {
    local_640 = ZEXT816(0x1808fd888);
    iVar8 = FUN_1805f68d8(&DAT_1808fd888);
    local_640[8] = iVar8 == 0;
    if (iVar8 == 0) {
      FUN_1802cb310();
      FUN_1805f68fc(&DAT_1808fd888);
    }
  }
  do {
    if (pcVar11 == pcVar12) {
LAB_1802cdbbd:
      pcVar4 = pcVar11;
      if (pcVar11 != pcVar12) {
        while (pcVar4 = pcVar4 + 0x48, pcVar4 != pcVar12) {
          if (*pcVar4 == '\x03') {
            if (((DAT_180b0c290 != '\0') && (DAT_180b0c370 != '\0')) && (DAT_180b0c3fe != '\0')) {
              FUN_1802cb510();
            }
          }
          else {
            uVar1 = *(undefined8 *)(pcVar4 + 8);
            uVar2 = *(undefined8 *)(pcVar4 + 0x10);
            uVar3 = *(undefined8 *)(pcVar4 + 0x18);
            *(undefined8 *)pcVar11 = *(undefined8 *)pcVar4;
            *(undefined8 *)(pcVar11 + 8) = uVar1;
            *(undefined8 *)(pcVar11 + 0x10) = uVar2;
            *(undefined8 *)(pcVar11 + 0x18) = uVar3;
            uVar1 = *(undefined8 *)(pcVar4 + 0x28);
            uVar2 = *(undefined8 *)(pcVar4 + 0x30);
            uVar3 = *(undefined8 *)(pcVar4 + 0x38);
            *(undefined8 *)(pcVar11 + 0x20) = *(undefined8 *)(pcVar4 + 0x20);
            *(undefined8 *)(pcVar11 + 0x28) = uVar1;
            *(undefined8 *)(pcVar11 + 0x30) = uVar2;
            *(undefined8 *)(pcVar11 + 0x38) = uVar3;
            *(undefined8 *)(pcVar11 + 0x40) = *(undefined8 *)(pcVar4 + 0x40);
            pcVar11 = pcVar11 + 0x48;
          }
        }
        if (pcVar11 != pcVar12) {
          pcVar12 = pcVar11;
        }
      }
      local_648 = 0;
      local_658 = ZEXT816(0);
      local_640._8_8_ = pcVar12;
      local_640._0_8_ = pcVar5;
      local_630 = uVar6;
      FUN_1802e0b80(&DAT_180cc99c0,local_640);
    }
    if (*pcVar11 == '\x03') {
      if (((DAT_180b0c290 != '\0') && (DAT_180b0c370 != '\0')) && (DAT_180b0c3fe != '\0')) {
        FUN_1802cb510(*(undefined4 *)(pcVar11 + 0x1c));
      }
      goto LAB_1802cdbbd;
    }
    pcVar11 = pcVar11 + 0x48;
  } while( true );
}



