// FUN_1804e9a30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804e9a30 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1804e9a30(void)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint local_res8 [2];
  
  if ((_DAT_180c62d78 & 0x3000000) == 0) {
    uVar6 = 4;
    uVar5 = 2;
    do {
      iVar1 = (uVar5 - 2 & 0xf) * 2;
      uVar3 = uVar5 - 2 >> 4;
      (&DAT_180c62d70)[uVar3] = ~(3 << iVar1) & (&DAT_180c62d70)[uVar3] | 2 << iVar1;
      uVar3 = uVar6 - 2 & 0x1e;
      (&DAT_180c62d70)[uVar5 - 1 >> 4] =
           ~(3 << uVar3) & (&DAT_180c62d70)[uVar5 - 1 >> 4] | 2 << uVar3;
      (&DAT_180c62d70)[uVar5 >> 4] =
           ~(3 << (uVar6 & 0x1e)) & (&DAT_180c62d70)[uVar5 >> 4] | 2 << (uVar6 & 0x1e);
      uVar3 = uVar6 + 2 & 0x1e;
      uVar4 = uVar6 + 4 & 0x1e;
      (&DAT_180c62d70)[uVar5 + 1 >> 4] =
           ~(3 << uVar3) & (&DAT_180c62d70)[uVar5 + 1 >> 4] | 2 << uVar3;
      (&DAT_180c62d70)[uVar5 + 2 >> 4] =
           ~(3 << uVar4) & (&DAT_180c62d70)[uVar5 + 2 >> 4] | 2 << uVar4;
      uVar3 = uVar6 + 6 & 0x1e;
      uVar4 = uVar6 + 8 & 0x1e;
      (&DAT_180c62d70)[uVar5 + 3 >> 4] =
           ~(3 << uVar3) & (&DAT_180c62d70)[uVar5 + 3 >> 4] | 2 << uVar3;
      (&DAT_180c62d70)[uVar5 + 4 >> 4] =
           ~(3 << uVar4) & (&DAT_180c62d70)[uVar5 + 4 >> 4] | 2 << uVar4;
      uVar3 = uVar6 + 10 & 0x1e;
      uVar4 = uVar5 * 2 + 0xc & 0x1e;
      (&DAT_180c62d70)[uVar5 + 5 >> 4] =
           ~(3 << uVar3) & (&DAT_180c62d70)[uVar5 + 5 >> 4] | 2 << uVar3;
      (&DAT_180c62d70)[uVar5 + 6 >> 4] =
           ~(3 << uVar4) & (&DAT_180c62d70)[uVar5 + 6 >> 4] | 2 << uVar4;
      uVar3 = uVar5 * 2 + 0xe & 0x1e;
      (&DAT_180c62d70)[uVar5 + 7 >> 4] =
           ~(3 << uVar3) & (&DAT_180c62d70)[uVar5 + 7 >> 4] | 2 << uVar3;
      iVar1 = (uVar5 - 8 & 0xf) * 2;
      (&DAT_180c62d70)[uVar5 + 8 >> 4] =
           ~(3 << iVar1) & (&DAT_180c62d70)[uVar5 + 8 >> 4] | 2 << iVar1;
      iVar1 = (uVar5 - 7 & 0xf) * 2;
      (&DAT_180c62d70)[uVar5 + 9 >> 4] =
           ~(3 << iVar1) & (&DAT_180c62d70)[uVar5 + 9 >> 4] | 2 << iVar1;
      iVar1 = (uVar5 - 6 & 0xf) * 2;
      (&DAT_180c62d70)[uVar5 + 10 >> 4] =
           ~(3 << iVar1) & (&DAT_180c62d70)[uVar5 + 10 >> 4] | 2 << iVar1;
      iVar1 = (uVar5 - 5 & 0xf) * 2;
      (&DAT_180c62d70)[uVar5 + 0xb >> 4] =
           ~(3 << iVar1) & (&DAT_180c62d70)[uVar5 + 0xb >> 4] | 2 << iVar1;
      iVar1 = (uVar5 - 4 & 0xf) * 2;
      uVar6 = uVar6 + 0x20;
      (&DAT_180c62d70)[uVar5 + 0xc >> 4] =
           ~(3 << iVar1) & (&DAT_180c62d70)[uVar5 + 0xc >> 4] | 2 << iVar1;
      iVar1 = (uVar5 - 3 & 0xf) * 2;
      uVar3 = uVar5 + 0xe;
      (&DAT_180c62d70)[uVar5 + 0xd >> 4] =
           ~(3 << iVar1) & (&DAT_180c62d70)[uVar5 + 0xd >> 4] | 2 << iVar1;
      uVar5 = uVar5 + 0x10;
    } while (uVar3 < 0x80);
    pcVar2 = " \t";
    do {
      iVar1 = FUN_1804b0e50(local_res8,pcVar2,&DAT_18085b77a);
      pcVar2 = pcVar2 + iVar1;
      (&DAT_180c62d70)[local_res8[0] >> 4] =
           (&DAT_180c62d70)[local_res8[0] >> 4] & ~(3 << (local_res8[0] & 0xf) * 2);
    } while (*pcVar2 != '\0');
    pcVar2 = ".,;!?\"";
    do {
      iVar1 = FUN_1804b0e50(local_res8,pcVar2,&DAT_18085b776);
      pcVar2 = pcVar2 + iVar1;
      iVar1 = (local_res8[0] & 0xf) * 2;
      (&DAT_180c62d70)[local_res8[0] >> 4] =
           ~(3 << iVar1) & (&DAT_180c62d70)[local_res8[0] >> 4] | 1 << iVar1;
    } while (*pcVar2 != '\0');
    DAT_180bda4d8 = DAT_180bda4d8 & 0xeaaaaa94 | 0x2aaaaa94;
  }
  return;
}



