// FUN_1801d6430 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801d6430 */

longlong FUN_1801d6430(longlong param_1,longlong param_2,ushort param_3,uint param_4)

{
  PSRWLOCK SRWLock;
  ushort uVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong lVar4;
  char *pcVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  longlong lVar9;
  bool bVar10;
  byte bStackX_19;
  undefined4 uVar11;
  undefined1 auVar12 [16];
  longlong lVar13;
  char local_228 [24];
  undefined1 local_210 [216];
  char local_138 [256];
  
  uVar11 = 0;
  SRWLock = (PSRWLOCK)(param_1 + 0xd0);
  auVar12[8] = 1;
  auVar12._0_8_ = SRWLock;
  auVar12._9_7_ = 0;
  lVar13 = param_2;
  AcquireSRWLockShared(SRWLock);
  if (((param_4 & 0xfffffffc) == 0) && (param_4 != 1)) {
    lVar9 = 1;
    uVar8 = 3;
    plVar7 = (longlong *)(param_1 + 0x98);
    bStackX_19 = (byte)(param_3 >> 8);
    do {
      if ((param_4 == 0) || (param_4 == uVar8)) {
        uVar2 = (((ulonglong)param_3 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                (ulonglong)bStackX_19) * 0x100000001b3 & plVar7[5];
        lVar4 = *(longlong *)(plVar7[2] + 8 + uVar2 * 0x10);
        lVar6 = *plVar7;
        if (lVar4 == lVar6) {
LAB_1801d6521:
          lVar4 = 0;
        }
        else {
          uVar1 = *(ushort *)(lVar4 + 0x10);
          while (param_3 != uVar1) {
            if (lVar4 == *(longlong *)(plVar7[2] + uVar2 * 0x10)) goto LAB_1801d6521;
            lVar4 = *(longlong *)(lVar4 + 8);
            uVar1 = *(ushort *)(lVar4 + 0x10);
          }
        }
        if (lVar4 == 0) {
          lVar4 = lVar6;
        }
        if (lVar4 != lVar6) {
          FUN_18019f170(param_2,lVar4 + 0x18,plVar7,uVar8,uVar11,auVar12,lVar13);
          *(undefined1 *)(param_2 + 0xf0) = 1;
          goto LAB_1801d664d;
        }
      }
      uVar8 = uVar8 - 1;
      plVar7 = plVar7 + -8;
      lVar9 = lVar9 + -1;
    } while (-1 < lVar9);
    plVar3 = (longlong *)
             (((((ulonglong)param_3 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^
               (ulonglong)bStackX_19) * 0x100000001b3 & *(ulonglong *)(param_1 + 0x40)) * 0x10 +
             *(longlong *)(param_1 + 0x28));
    lVar9 = plVar3[1];
    lVar4 = *(longlong *)(param_1 + 0x18);
    lVar6 = 0;
    if (lVar9 != lVar4) {
      uVar1 = *(ushort *)(lVar9 + 0x10);
      while (param_3 != uVar1) {
        if (lVar9 == *plVar3) goto LAB_1801d6592;
        lVar9 = *(longlong *)(lVar9 + 8);
        uVar1 = *(ushort *)(lVar9 + 0x10);
      }
      lVar6 = lVar9;
    }
LAB_1801d6592:
    if (lVar6 == 0) {
      lVar6 = lVar4;
    }
    bVar10 = lVar6 == lVar4;
    if (bVar10) {
      local_138[0xf8] = '\0';
      pcVar5 = local_138 + 8;
    }
    else {
      FUN_18019f170(local_228,lVar6 + 0x18,plVar7,uVar8,uVar11,auVar12,lVar13);
      local_138[0] = '\x01';
      pcVar5 = local_228;
    }
    *(undefined1 *)(param_2 + 0xf0) = 0;
    if (pcVar5[0xf0] != '\0') {
      FUN_1801a4ee0(param_2);
      *(undefined1 *)(param_2 + 0xf0) = 1;
    }
    if ((bVar10) && (local_138[0xf8] != '\0')) {
      FUN_18015c010(local_138 + 0x20);
    }
    if ((!bVar10) && (local_138[0] != '\0')) {
      FUN_18015c010(local_210);
    }
  }
  else {
    *(undefined1 *)(param_2 + 0xf0) = 0;
  }
LAB_1801d664d:
  ReleaseSRWLockShared(SRWLock);
  return param_2;
}



