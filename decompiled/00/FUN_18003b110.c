// FUN_18003b110 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18003b110 */

bool FUN_18003b110(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  ULONGLONG UVar7;
  ulonglong uVar8;
  byte bVar9;
  uint uVar10;
  ulonglong uVar11;
  bool bVar12;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined1 auVar13 [16];
  uint uVar17;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  undefined1 auVar18 [16];
  
  AcquireSRWLockShared((PSRWLOCK)&DAT_180bacc60);
  bVar12 = false;
  if ((param_1 == 0) || (param_1 != DAT_180bacc78)) goto LAB_18003b28d;
  if (DAT_1808d4018 < 0x10) {
    uVar11 = param_2[1];
    puVar5 = &DAT_1808d4000;
  }
  else {
    uVar11 = param_2[1];
    puVar5 = DAT_1808d4000;
  }
  if (uVar11 == DAT_1808d4010) {
    if (DAT_1808d4010 != 0) {
      lVar4 = *param_2;
      if (DAT_1808d4010 < 4) {
        uVar8 = 0;
        uVar10 = 0;
LAB_18003b2a3:
        do {
          uVar10 = (uint)(byte)((byte)uVar10 |
                               *(byte *)((longlong)puVar5 + uVar8) ^ *(byte *)(lVar4 + uVar8));
          uVar8 = uVar8 + 1;
LAB_18003b2b2:
          bVar9 = (byte)uVar10;
        } while (DAT_1808d4010 != uVar8);
      }
      else {
        if (DAT_1808d4010 < 0x20) {
          bVar9 = 0;
          uVar11 = 0;
LAB_18003b236:
          uVar8 = DAT_1808d4010 & 0xfffffffffffffffc;
          auVar13 = ZEXT116(bVar9);
          do {
            auVar13 = auVar13 | ZEXT416(*(uint *)((longlong)puVar5 + uVar11) ^
                                        *(uint *)(lVar4 + uVar11));
            uVar11 = uVar11 + 4;
          } while (uVar8 != uVar11);
          auVar18._0_4_ = auVar13._0_4_ >> 0x10;
          auVar18._4_4_ = 0;
          auVar18._8_4_ = auVar13._8_4_ >> 0x10;
          auVar18._12_4_ = auVar13._12_4_ >> 0x10;
          uVar10 = (uint)(ushort)(SUB162(auVar18 | auVar13,0) >> 8) | SUB164(auVar18 | auVar13,0);
          goto LAB_18003b2b2;
        }
        uVar8 = DAT_1808d4010 & 0xffffffffffffffe0;
        uVar10 = 0;
        uVar14 = 0;
        uVar15 = 0;
        uVar16 = 0;
        uVar11 = 0;
        uVar17 = 0;
        uVar19 = 0;
        uVar20 = 0;
        uVar21 = 0;
        do {
          puVar1 = (uint *)(lVar4 + uVar11);
          puVar3 = (uint *)(lVar4 + 0x10 + uVar11);
          puVar2 = (uint *)((longlong)puVar5 + uVar11);
          uVar17 = uVar17 | *puVar2 ^ *puVar1;
          uVar19 = uVar19 | puVar2[1] ^ puVar1[1];
          uVar20 = uVar20 | puVar2[2] ^ puVar1[2];
          uVar21 = uVar21 | puVar2[3] ^ puVar1[3];
          puVar1 = (uint *)((longlong)puVar5 + uVar11 + 0x10);
          uVar10 = uVar10 | *puVar1 ^ *puVar3;
          uVar14 = uVar14 | puVar1[1] ^ puVar3[1];
          uVar15 = uVar15 | puVar1[2] ^ puVar3[2];
          uVar16 = uVar16 | puVar1[3] ^ puVar3[3];
          uVar11 = uVar11 + 0x20;
        } while (uVar8 != uVar11);
        uVar10 = uVar16 | uVar21 | uVar14 | uVar19 | uVar15 | uVar20 | uVar10 | uVar17;
        uVar10 = uVar10 >> 0x10 | uVar10;
        uVar10 = uVar10 >> 8 & 0xff | uVar10;
        bVar9 = (byte)uVar10;
        if (DAT_1808d4010 != uVar8) {
          uVar11 = uVar8;
          if ((DAT_1808d4010 & 0x1c) != 0) goto LAB_18003b236;
          goto LAB_18003b2a3;
        }
      }
      if (bVar9 != 0) goto LAB_18003b28b;
    }
    lVar6 = _Xtime_get_ticks();
    lVar4 = DAT_180baccb8;
    if ((DAT_180baccb0 & 1) != 0) {
      UVar7 = GetTickCount64();
      bVar12 = false;
      if ((UVar7 - lVar4 < 10000) &&
         (lVar6 / 10000000 - lVar6 / -0x6769800000000000 < DAT_180bacc80)) {
        UVar7 = GetTickCount64();
        bVar12 = UVar7 < DAT_180bacc68;
      }
      goto LAB_18003b28d;
    }
  }
LAB_18003b28b:
  bVar12 = false;
LAB_18003b28d:
  ReleaseSRWLockShared((PSRWLOCK)&DAT_180bacc60);
  return bVar12;
}



