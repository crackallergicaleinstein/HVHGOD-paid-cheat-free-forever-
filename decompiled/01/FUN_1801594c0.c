// FUN_1801594c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801594c0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801594c0(undefined1 (*param_1) [32],undefined1 (*param_2) [32],ulonglong param_3)

{
  int iVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  ushort uVar4;
  undefined1 auVar5 [32];
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  short *psVar10;
  undefined1 (*pauVar11) [32];
  undefined1 (*pauVar12) [32];
  
  uVar7 = 0;
  pauVar11 = param_1;
  pauVar12 = param_2;
  uVar6 = uVar7;
  if ((DAT_180c7dd1c != 0) && (0xf < param_3)) {
    uVar9 = 0x10;
    do {
      auVar5 = vpcmpeqw_avx2(*pauVar11,*pauVar12);
      uVar8 = (uint)(SUB321(auVar5 >> 7,0) & 1) | (uint)(SUB321(auVar5 >> 0xf,0) & 1) << 1 |
              (uint)(SUB321(auVar5 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar5 >> 0x1f,0) & 1) << 3
              | (uint)(SUB321(auVar5 >> 0x27,0) & 1) << 4 |
              (uint)(SUB321(auVar5 >> 0x2f,0) & 1) << 5 | (uint)(SUB321(auVar5 >> 0x37,0) & 1) << 6
              | (uint)(SUB321(auVar5 >> 0x3f,0) & 1) << 7 |
              (uint)(SUB321(auVar5 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar5 >> 0x4f,0) & 1) << 9
              | (uint)(SUB321(auVar5 >> 0x57,0) & 1) << 10 |
              (uint)(SUB321(auVar5 >> 0x5f,0) & 1) << 0xb |
              (uint)(SUB321(auVar5 >> 0x67,0) & 1) << 0xc |
              (uint)(SUB321(auVar5 >> 0x6f,0) & 1) << 0xd |
              (uint)(SUB321(auVar5 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar5 >> 0x7f,0) << 0xf |
              (uint)(SUB321(auVar5 >> 0x87,0) & 1) << 0x10 |
              (uint)(SUB321(auVar5 >> 0x8f,0) & 1) << 0x11 |
              (uint)(SUB321(auVar5 >> 0x97,0) & 1) << 0x12 |
              (uint)(SUB321(auVar5 >> 0x9f,0) & 1) << 0x13 |
              (uint)(SUB321(auVar5 >> 0xa7,0) & 1) << 0x14 |
              (uint)(SUB321(auVar5 >> 0xaf,0) & 1) << 0x15 |
              (uint)(SUB321(auVar5 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar5 >> 0xbf,0) << 0x17
              | (uint)(SUB321(auVar5 >> 199,0) & 1) << 0x18 |
              (uint)(SUB321(auVar5 >> 0xcf,0) & 1) << 0x19 |
              (uint)(SUB321(auVar5 >> 0xd7,0) & 1) << 0x1a |
              (uint)(SUB321(auVar5 >> 0xdf,0) & 1) << 0x1b |
              (uint)(SUB321(auVar5 >> 0xe7,0) & 1) << 0x1c |
              (uint)(SUB321(auVar5 >> 0xef,0) & 1) << 0x1d |
              (uint)(SUB321(auVar5 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar5[0x1f] >> 7) << 0x1f
      ;
      if (uVar8 != 0xffffffff) {
        uVar8 = ~uVar8;
        iVar1 = 0;
        if (uVar8 == 0) {
        }
        for (; (uVar8 >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
        }
      }
      uVar7 = uVar7 + 0x10;
      uVar9 = uVar9 + 0x10;
      pauVar11 = pauVar11 + 1;
      pauVar12 = pauVar12 + 1;
      uVar6 = uVar7;
    } while (uVar9 <= param_3);
  }
  while (uVar6 + 8 <= param_3) {
    auVar3 = vpcmpeqw_avx(*(undefined1 (*) [16])*pauVar11,*(undefined1 (*) [16])*pauVar12);
    uVar4 = (ushort)(SUB161(auVar3 >> 7,0) & 1) | (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
            (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
            (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
            (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
            (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
            (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
            (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
            (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
            (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
            (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
            (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
            (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
            (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
            (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe | (ushort)(byte)(auVar3[0xf] >> 7) << 0xf;
    if (uVar4 != 0xffff) {
      uVar8 = ~(uint)uVar4;
      iVar1 = 0;
      if (uVar8 == 0) {
      }
      for (; (uVar8 >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
      }
    }
    uVar7 = uVar7 + 8;
    pauVar11 = (undefined1 (*) [32])(*pauVar11 + 0x10);
    pauVar12 = (undefined1 (*) [32])(*pauVar12 + 0x10);
    uVar6 = uVar6 + 8;
  }
  if (uVar7 + 4 <= param_3) {
    if (*(ulonglong *)*pauVar11 != *(ulonglong *)*pauVar12) {
      uVar7 = *(ulonglong *)*pauVar12 ^ *(ulonglong *)*pauVar11;
      lVar2 = 0;
      if (uVar7 == 0) {
      }
      for (; (uVar7 >> lVar2 & 1) == 0; lVar2 = lVar2 + 1) {
      }
    }
    uVar7 = uVar7 + 4;
  }
  if (uVar7 < param_3) {
    psVar10 = (short *)(*param_1 + uVar7 * 2);
    do {
      if (*psVar10 != *(short *)(((longlong)param_2 - (longlong)param_1) + (longlong)psVar10)) {
      }
      uVar7 = uVar7 + 1;
      psVar10 = psVar10 + 1;
    } while (uVar7 < param_3);
  }
}



