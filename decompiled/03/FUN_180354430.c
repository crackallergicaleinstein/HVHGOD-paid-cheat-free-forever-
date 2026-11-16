// FUN_180354430 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180354430 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180354430(float *param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  short sVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  char *pcVar7;
  float fVar8;
  float local_res10;
  undefined1 auStack_a8 [31];
  char acStack_89 [81];
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_a8;
  FUN_18063ab10(param_1,0,0xfc);
  fVar8 = 0.015625;
  lVar6 = 0;
  acStack_89[0x41] = 0;
  acStack_89[1] = '\0';
  acStack_89[2] = '\0';
  acStack_89[3] = '\0';
  acStack_89[4] = '\0';
  acStack_89[5] = '\0';
  acStack_89[6] = '\0';
  acStack_89[7] = '\0';
  acStack_89[8] = '\0';
  acStack_89[9] = '\0';
  acStack_89[10] = '\0';
  acStack_89[0xb] = '\0';
  acStack_89[0xc] = '\0';
  acStack_89[0xd] = '\0';
  acStack_89[0xe] = '\0';
  acStack_89[0xf] = '\0';
  acStack_89[0x10] = '\0';
  acStack_89[0x11] = '\0';
  acStack_89[0x12] = '\0';
  acStack_89[0x13] = '\0';
  acStack_89[0x14] = '\0';
  acStack_89[0x15] = '\0';
  acStack_89[0x16] = '\0';
  acStack_89[0x17] = '\0';
  acStack_89[0x18] = '\0';
  acStack_89[0x19] = '\0';
  acStack_89[0x1a] = '\0';
  acStack_89[0x1b] = '\0';
  acStack_89[0x1c] = '\0';
  acStack_89[0x1d] = '\0';
  acStack_89[0x1e] = '\0';
  acStack_89[0x1f] = '\0';
  acStack_89[0x20] = '\0';
  acStack_89[0x21] = '\0';
  acStack_89[0x22] = '\0';
  acStack_89[0x23] = '\0';
  acStack_89[0x24] = '\0';
  acStack_89[0x25] = '\0';
  acStack_89[0x26] = '\0';
  acStack_89[0x27] = '\0';
  acStack_89[0x28] = '\0';
  acStack_89[0x29] = '\0';
  acStack_89[0x2a] = '\0';
  acStack_89[0x2b] = '\0';
  acStack_89[0x2c] = '\0';
  acStack_89[0x2d] = '\0';
  acStack_89[0x2e] = '\0';
  acStack_89[0x2f] = '\0';
  acStack_89[0x30] = '\0';
  acStack_89[0x31] = '\0';
  acStack_89[0x32] = '\0';
  acStack_89[0x33] = '\0';
  acStack_89[0x34] = '\0';
  acStack_89[0x35] = '\0';
  acStack_89[0x36] = '\0';
  acStack_89[0x37] = '\0';
  acStack_89[0x38] = '\0';
  acStack_89[0x39] = '\0';
  acStack_89[0x3a] = '\0';
  acStack_89[0x3b] = '\0';
  acStack_89[0x3c] = '\0';
  acStack_89[0x3d] = '\0';
  acStack_89[0x3e] = '\0';
  acStack_89[0x3f] = '\0';
  acStack_89[0x40] = '\0';
  if ((char)((ulonglong)param_2 >> 0x20) != '\0') {
    local_res10 = (float)param_2;
    fVar8 = 0.015625;
    sVar2 = thunk_FUN_180624430();
    if (((sVar2 < 1) && (0.0 < local_res10)) && (local_res10 < 1.0)) {
      auVar1 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(local_res10 * 64.0)),1);
      uVar4 = (uint)auVar1._0_4_;
      if ((uVar4 - 1 < 0x3f) && (acStack_89[(longlong)(int)uVar4 + 1] == '\0')) {
        acStack_89[(longlong)(int)uVar4 + 1] = '\x01';
        lVar6 = 1;
        *param_1 = (float)(int)uVar4 * fVar8;
      }
      if ((uVar4 - 2 < 0x3f) && (acStack_89[(int)uVar4] == '\0')) {
        acStack_89[(int)uVar4] = '\x01';
        param_1[lVar6] = (float)(int)(uVar4 - 1) * fVar8;
        lVar6 = lVar6 + 1;
      }
      if ((uVar4 < 0x3f) && (acStack_89[(longlong)(int)uVar4 + 2] == '\0')) {
        acStack_89[(longlong)(int)uVar4 + 2] = '\x01';
        param_1[lVar6] = (float)(int)(uVar4 + 1) * fVar8;
        lVar6 = lVar6 + 1;
      }
    }
  }
  iVar3 = 0x20;
  do {
    if (iVar3 < 0x40) {
      pcVar7 = acStack_89 + (longlong)iVar3 + 1;
      iVar5 = iVar3;
      do {
        if ((iVar5 - 1U < 0x3f) && (*pcVar7 == '\0')) {
          *pcVar7 = '\x01';
          param_1[lVar6] = (float)iVar5 * fVar8;
          lVar6 = lVar6 + 1;
        }
        iVar5 = iVar5 + iVar3 * 2;
        pcVar7 = pcVar7 + (longlong)iVar3 * 2;
      } while (iVar5 < 0x40);
    }
    iVar3 = iVar3 / 2;
  } while (iVar3 != 0);
}



