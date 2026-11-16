// FUN_180229cb0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180229cb0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180229cb0(void)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined1 auStack_6e8 [32];
  undefined **local_6c8;
  char *local_6c0;
  undefined **local_6b8;
  undefined4 *local_6b0;
  undefined *local_6a8;
  code *pcStack_6a0;
  char *pcStack_698;
  undefined8 uStack_690;
  undefined4 local_688;
  undefined4 local_684 [3];
  undefined8 local_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 local_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 local_638;
  undefined8 uStack_630;
  undefined4 local_628;
  undefined4 local_624;
  undefined4 local_620;
  undefined1 local_61c [4];
  char local_618 [1536];
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_6e8;
  local_678 = 0xb60000000f;
  uStack_670 = 0xffffffff00000005;
  uStack_668 = 0xffffffffffffffff;
  uStack_660 = 0x48ffffffff;
  local_6b8 = (undefined **)&local_678;
  local_628 = 0x1c;
  local_658 = 0x540000008d;
  uStack_650 = 0x3000000024;
  uStack_648 = 0x8b00000048;
  uStack_640 = 0x88000000cf;
  local_6b0 = (undefined4 *)local_61c;
  local_624 = 1;
  local_638 = 0x1d00000047;
  uStack_630 = 0x47000000c6;
  local_620 = 0xe8;
  lVar2 = FUN_180219910(&local_6b8);
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_180219870(lVar2 + 0x16,1,5);
  }
  local_6b8 = &local_6a8;
  local_688 = 5;
  local_6b0 = local_684;
  local_6a8 = (undefined *)0x5700000040;
  pcStack_6a0 = (code *)0x8300000048;
  pcStack_698 = (char *)0x70000000ec;
  uStack_690 = 0x8b00000048;
  cVar1 = FUN_1802197b0(uVar3,&local_6b8);
  if (cVar1 != '\0') {
    local_6a8 = &DAT_180bbed80;
    pcStack_6a0 = FUN_1802295c0;
    pcStack_698 = "owned_sticker_pointer";
    local_6b8 = &local_6a8;
    local_6b0 = &local_688;
    uStack_690 = uVar3;
    cVar1 = FUN_18044e620(&local_6b8);
    if (cVar1 != '\0') {
      bVar4 = 1;
      goto LAB_180229df5;
    }
  }
  bVar4 = 0;
LAB_180229df5:
  FUN_18063ab10(local_618,0,0x600);
  local_6c8 = (undefined **)CONCAT44(local_6c8._4_4_,(uint)bVar4);
  FUN_18015ad60(local_618,0x600,0xffffffffffffffff,
                "available=%d input=real_window_client scope=owned_selected_slot global_mouse_writes=0"
               );
  local_6c8 = &PTR_180700558;
  if (local_618[0] != '\0') {
    local_6c8 = (undefined **)&DAT_1806bcfc0;
  }
  local_6c0 = local_618;
  FUN_1800f6900((bVar4 ^ 1) + 1,local_6c8,"SkinPreview","STICKER_POINTER_BINDING");
}



