// FUN_1801cb260 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801cb260 */

undefined8 FUN_1801cb260(longlong param_1,longlong param_2,longlong param_3,undefined8 *param_4)

{
  PSRWLOCK SRWLock;
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined1 (*pauVar4) [16];
  byte *pbVar5;
  undefined1 *puVar6;
  longlong lVar7;
  byte *pbVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  byte *pbVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined1 local_f8 [16];
  undefined1 auStack_e8 [16];
  undefined1 local_d8 [16];
  undefined8 local_c8;
  ulonglong local_c0;
  undefined8 *local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [40];
  
  uVar9 = 0;
  *param_4 = 0;
  if (((*(char *)(param_1 + 0x99) == '\0') || (param_2 == 0)) || (param_3 == 0)) {
    return 0;
  }
  SRWLock = (PSRWLOCK)(param_1 + 0x50);
  local_78[8] = 1;
  local_78._0_8_ = SRWLock;
  local_78._9_7_ = 0;
  local_b0 = param_4;
  AcquireSRWLockShared(SRWLock);
  local_a8 = param_1 + 0x60;
  if (0xf < *(ulonglong *)(param_1 + 0x78)) {
    local_a8 = *(longlong *)(param_1 + 0x60);
  }
  local_a0 = *(undefined8 *)(param_1 + 0x70);
  cVar2 = FUN_18003b110(*(undefined8 *)(param_1 + 0x80),&local_a8);
  if ((cVar2 != '\0') && (lVar1 = *(longlong *)(param_1 + 0x58), lVar1 != 0)) {
    local_d8 = (undefined1  [16])0x0;
    local_c8 = 0;
    local_c0 = 0;
    lVar7 = -1;
    lVar10 = -1;
    do {
      lVar10 = lVar10 + 1;
    } while (*(char *)(param_3 + lVar10) != '\0');
    FUN_18015ba30(local_d8,param_3);
    local_98 = (undefined1  [16])0x0;
    local_88 = (undefined1  [16])0x0;
    do {
      lVar7 = lVar7 + 1;
    } while (*(char *)(param_2 + lVar7) != '\0');
    FUN_18015ba30(local_98,param_2,lVar7);
    if (local_88._0_8_ == 0x7fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bb70();
    }
    uVar14 = 1;
    puVar13 = &DAT_1807c47a0;
    lVar7 = local_88._0_8_;
    FUN_18015a9c0(local_68);
    puVar6 = local_d8;
    if (0xf < local_c0) {
      puVar6 = (undefined1 *)local_d8._0_8_;
    }
    pauVar4 = (undefined1 (*) [16])FUN_18015b2a0(local_68,puVar6,local_c8);
    local_f8 = *pauVar4;
    auStack_e8 = pauVar4[1];
    (*pauVar4)[0] = 0;
    *(undefined8 *)pauVar4[1] = 0;
    *(undefined8 *)(pauVar4[1] + 8) = 0xf;
    FUN_18015c010(local_68);
    pbVar5 = local_f8;
    if (0xf < (ulonglong)auStack_e8._8_8_) {
      pbVar5 = (byte *)local_f8._0_8_;
    }
    pbVar12 = pbVar5 + auStack_e8._0_8_;
    pbVar8 = local_f8;
    if (0xf < (ulonglong)auStack_e8._8_8_) {
      pbVar8 = (byte *)local_f8._0_8_;
    }
    if (pbVar8 != pbVar12) {
      lVar10 = (longlong)pbVar5 - (longlong)pbVar8;
      do {
        iVar3 = tolower((uint)*pbVar8);
        pbVar8[lVar10] = (byte)iVar3;
        pbVar8 = pbVar8 + 1;
      } while (pbVar8 != pbVar12);
    }
    pbVar5 = local_f8;
    if (0xf < (ulonglong)auStack_e8._8_8_) {
      pbVar5 = (byte *)local_f8._0_8_;
    }
    uVar11 = 0xcbf29ce484222325;
    if (auStack_e8._0_8_ != 0) {
      do {
        uVar11 = (uVar11 ^ pbVar5[uVar9]) * 0x100000001b3;
        uVar9 = uVar9 + 1;
      } while (uVar9 < (ulonglong)auStack_e8._0_8_);
    }
    lVar7 = FUN_180177b00(lVar1,&local_a8,local_f8,uVar11,lVar7,puVar13,uVar14);
    lVar7 = *(longlong *)(lVar7 + 8);
    if (lVar7 == 0) {
      lVar7 = *(longlong *)(lVar1 + 8);
    }
    FUN_18015c010(local_f8);
    FUN_18015c010(local_98);
    FUN_18015c010(local_d8);
    if ((lVar7 != *(longlong *)(*(longlong *)(param_1 + 0x58) + 8)) &&
       (*(char *)(lVar7 + 0x98) != '\0')) {
      *local_b0 = *(undefined8 *)(lVar7 + 0x90);
      uVar14 = 1;
      goto LAB_1801cb506;
    }
  }
  uVar14 = 0;
LAB_1801cb506:
  ReleaseSRWLockShared(SRWLock);
  return uVar14;
}



