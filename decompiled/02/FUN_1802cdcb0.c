// FUN_1802cdcb0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802cdcb0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802cdcb0(void)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined1 local_20 [16];
  undefined8 local_10;
  
  local_38 = &DAT_1808fd888;
  iVar5 = FUN_1805f68d0(&DAT_1808fd888);
  if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_1808fd8d4 == 0x7fffffff) {
    DAT_1808fd8d4 = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  FUN_1802cb260();
  DAT_1808fd8d8 = 0;
  FUN_1805f68fc(&DAT_1808fd888);
  local_30 = FUN_180113860(&DAT_180cc9a88);
  uVar2 = DAT_180cc9a88;
  local_38 = DAT_180cc9a80;
  DAT_180cc9a80 = (undefined *)0x0;
  LOCK();
  DAT_180cc9a88 = 0;
  UNLOCK();
  if (((byte)uVar2 & 3) == 2) {
    FUN_1805fa36c(&DAT_180cc9a88);
  }
  FUN_1800efed0(&local_38);
  local_20 = (undefined1  [16])0x0;
  local_10 = 0;
  iVar5 = FUN_1805f68d0(&DAT_180cc9b08);
  lVar1 = DAT_180cc99e0;
  if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_180cc9b54 == 0x7fffffff) {
    DAT_180cc9b54 = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  if (DAT_180cc99c0 != DAT_180cc99c8) {
    DAT_180cc99c8 = DAT_180cc99c0;
  }
  lVar6 = DAT_180cc99d8;
  if (DAT_180cc99d8 != DAT_180cc99e0) {
    do {
      FUN_1801bc3d0(lVar6);
      lVar6 = lVar6 + 400;
    } while (lVar6 != lVar1);
    DAT_180cc99e0 = DAT_180cc99d8;
  }
  lVar1 = DAT_180cc9a70;
  if (DAT_180cc99f0 != DAT_180cc99f8) {
    DAT_180cc99f8 = DAT_180cc99f0;
  }
  if (DAT_180cc9a08 != DAT_180cc9a10) {
    DAT_180cc9a10 = DAT_180cc9a08;
  }
  if (DAT_180cc9a20 != DAT_180cc9a28) {
    DAT_180cc9a28 = DAT_180cc9a20;
  }
  if (DAT_180cc9a38 != DAT_180cc9a40) {
    DAT_180cc9a40 = DAT_180cc9a38;
  }
  if (DAT_180cc9a50 != DAT_180cc9a58) {
    DAT_180cc9a58 = DAT_180cc9a50;
  }
  lVar6 = DAT_180cc9a68;
  if (DAT_180cc9a68 != DAT_180cc9a70) {
    do {
      FUN_1801b36e0(lVar6 + 0x10);
      lVar6 = lVar6 + 0xb8;
    } while (lVar6 != lVar1);
    DAT_180cc9a70 = DAT_180cc9a68;
  }
  uVar4 = DAT_180cc9b00;
  uVar2 = DAT_180cc9af8;
  puVar3 = DAT_180cc9af0;
  if (DAT_180cc9a90 != DAT_180cc9a98) {
    DAT_180cc9a98 = DAT_180cc9a90;
  }
  if (DAT_180cc9aa8 != DAT_180cc9ab0) {
    DAT_180cc9ab0 = DAT_180cc9aa8;
  }
  if (DAT_180cc9ac0 != DAT_180cc9ac8) {
    DAT_180cc9ac8 = DAT_180cc9ac0;
  }
  if (DAT_180cc9ad8 != DAT_180cc9ae0) {
    DAT_180cc9ae0 = DAT_180cc9ad8;
  }
  DAT_180cc9af0 = (undefined *)0x0;
  DAT_180cc9af8 = 0;
  DAT_180cc9b00 = 0;
  _DAT_180cc9b60 = ZEXT816(0);
  DAT_180cc9b6c._4_4_ = 0;
  DAT_180cc9b74 = 0;
  _DAT_180cc9b78 = 0;
  DAT_180cc9b90 = 0;
  DAT_180cc9b5c = 0;
  DAT_180cc9ba0 = 0;
  DAT_180cc9ba8 = 0;
  _DAT_180cc9bac = 0;
  DAT_180cc9bae = 0;
  _DAT_180cc9b58 = 0;
  DAT_180cc9b5a = 0;
  DAT_180bb8aa8 = 0;
  DAT_180bb8aac = 0;
  DAT_180bb8ab0 = 0;
  DAT_180bb8ab4 = 0;
  _DAT_180cc9b80 = _DAT_180cc9b60;
  uVar7 = FUN_1805f68fc(&DAT_180cc9b08);
  local_10 = 0;
  local_20 = ZEXT816(0);
  local_38 = puVar3;
  local_30 = uVar2;
  local_28 = uVar4;
  FUN_1802e2500(uVar7,&local_38);
  FUN_1802e6f60(&DAT_180bbf090);
  return;
}



