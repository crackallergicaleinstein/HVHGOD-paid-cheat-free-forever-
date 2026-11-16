// FUN_18017c020 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18017c020 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18017c020(undefined8 param_1,short param_2,ulonglong param_3)

{
  int iVar1;
  byte bVar2;
  ushort uVar3;
  undefined1 auVar4 [32];
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 (*pauVar8) [32];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [32];
  
  uVar6 = 0;
  pauVar8 = (undefined1 (*) [32])&DAT_180700940;
  if ((DAT_180c7dd1c != 0) && (0xf < param_3)) {
    auVar11._2_2_ = param_2;
    auVar11._0_2_ = param_2;
    auVar11._4_2_ = param_2;
    auVar11._6_2_ = param_2;
    auVar11._8_2_ = param_2;
    auVar11._10_2_ = param_2;
    auVar11._12_2_ = param_2;
    auVar11._14_2_ = param_2;
    auVar11._16_2_ = param_2;
    auVar11._18_2_ = param_2;
    auVar11._20_2_ = param_2;
    auVar11._22_2_ = param_2;
    auVar11._24_2_ = param_2;
    auVar11._26_2_ = param_2;
    auVar11._28_2_ = param_2;
    auVar11._30_2_ = param_2;
    uVar7 = 0x10;
    do {
      auVar4 = vpcmpeqw_avx2(auVar11,*pauVar8);
      uVar5 = (uint)(SUB321(auVar4 >> 7,0) & 1) | (uint)(SUB321(auVar4 >> 0xf,0) & 1) << 1 |
              (uint)(SUB321(auVar4 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar4 >> 0x1f,0) & 1) << 3
              | (uint)(SUB321(auVar4 >> 0x27,0) & 1) << 4 |
              (uint)(SUB321(auVar4 >> 0x2f,0) & 1) << 5 | (uint)(SUB321(auVar4 >> 0x37,0) & 1) << 6
              | (uint)(SUB321(auVar4 >> 0x3f,0) & 1) << 7 |
              (uint)(SUB321(auVar4 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar4 >> 0x4f,0) & 1) << 9
              | (uint)(SUB321(auVar4 >> 0x57,0) & 1) << 10 |
              (uint)(SUB321(auVar4 >> 0x5f,0) & 1) << 0xb |
              (uint)(SUB321(auVar4 >> 0x67,0) & 1) << 0xc |
              (uint)(SUB321(auVar4 >> 0x6f,0) & 1) << 0xd |
              (uint)(SUB321(auVar4 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar4 >> 0x7f,0) << 0xf |
              (uint)(SUB321(auVar4 >> 0x87,0) & 1) << 0x10 |
              (uint)(SUB321(auVar4 >> 0x8f,0) & 1) << 0x11 |
              (uint)(SUB321(auVar4 >> 0x97,0) & 1) << 0x12 |
              (uint)(SUB321(auVar4 >> 0x9f,0) & 1) << 0x13 |
              (uint)(SUB321(auVar4 >> 0xa7,0) & 1) << 0x14 |
              (uint)(SUB321(auVar4 >> 0xaf,0) & 1) << 0x15 |
              (uint)(SUB321(auVar4 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar4 >> 0xbf,0) << 0x17
              | (uint)(SUB321(auVar4 >> 199,0) & 1) << 0x18 |
              (uint)(SUB321(auVar4 >> 0xcf,0) & 1) << 0x19 |
              (uint)(SUB321(auVar4 >> 0xd7,0) & 1) << 0x1a |
              (uint)(SUB321(auVar4 >> 0xdf,0) & 1) << 0x1b |
              (uint)(SUB321(auVar4 >> 0xe7,0) & 1) << 0x1c |
              (uint)(SUB321(auVar4 >> 0xef,0) & 1) << 0x1d |
              (uint)(SUB321(auVar4 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar4[0x1f] >> 7) << 0x1f
      ;
      if (uVar5 != 0) {
        iVar1 = 0;
        if (uVar5 != 0) {
          for (; (uVar5 >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
          }
        }
      }
      uVar6 = uVar6 + 0x10;
      uVar7 = uVar7 + 0x10;
      pauVar8 = pauVar8 + 1;
    } while (uVar7 <= param_3);
  }
  if (uVar6 + 4 <= param_3) {
    auVar10._2_2_ = param_2;
    auVar10._0_2_ = param_2;
    auVar10._4_2_ = param_2;
    auVar10._6_2_ = param_2;
    auVar10._8_2_ = param_2;
    auVar10._10_2_ = param_2;
    auVar10._12_2_ = param_2;
    auVar10._14_2_ = param_2;
    uVar7 = uVar6;
    while (uVar7 = uVar7 + 8, uVar7 <= param_3) {
      auVar9 = vpcmpeqw_avx(auVar10,*(undefined1 (*) [16])*pauVar8);
      uVar3 = (ushort)(SUB161(auVar9 >> 7,0) & 1) | (ushort)(SUB161(auVar9 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar9 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar9 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar9 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar9 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar9 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar9 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar9 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar9 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar9 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar9 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar9 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar9 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar9 >> 0x77,0) & 1) << 0xe |
              (ushort)(byte)(auVar9[0xf] >> 7) << 0xf;
      if (uVar3 != 0) {
        iVar1 = 0;
        if (uVar3 != 0) {
          for (; (uVar3 >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
          }
        }
      }
      uVar6 = uVar6 + 8;
      pauVar8 = (undefined1 (*) [32])((longlong)*pauVar8 + 0x10);
    }
    if (uVar6 + 4 <= param_3) {
      auVar9._8_8_ = 0;
      auVar9._0_8_ = *(ulonglong *)*pauVar8;
      auVar10 = vpcmpeqw_avx(auVar9,auVar10);
      bVar2 = SUB161(auVar10 >> 7,0) & 1 | (SUB161(auVar10 >> 0xf,0) & 1) << 1 |
              (SUB161(auVar10 >> 0x17,0) & 1) << 2 | (SUB161(auVar10 >> 0x1f,0) & 1) << 3 |
              (SUB161(auVar10 >> 0x27,0) & 1) << 4 | (SUB161(auVar10 >> 0x2f,0) & 1) << 5 |
              (SUB161(auVar10 >> 0x37,0) & 1) << 6 | SUB161(auVar10 >> 0x3f,0) << 7;
      uVar6 = uVar6 + 4;
      if (bVar2 != 0) {
        iVar1 = 0;
        if (bVar2 != 0) {
          for (; (bVar2 >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
          }
        }
      }
    }
  }
  while( true ) {
    if (param_3 <= uVar6) {
    }
    if ((&DAT_180700940)[uVar6] == param_2) break;
    uVar6 = uVar6 + 1;
  }
}



