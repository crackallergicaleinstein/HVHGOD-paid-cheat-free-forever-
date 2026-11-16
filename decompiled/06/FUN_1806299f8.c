// FUN_1806299f8 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806299f8 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1806299f8(void)

{
  int iVar1;
  short *psVar2;
  short *psVar3;
  undefined1 auStack_248 [32];
  longlong local_228 [2];
  short local_218 [256];
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_248;
  DAT_1808d7770 = 0xffffffff;
  DAT_180bb2590 = 0;
  DAT_1808d7760 = 0xffffffff;
  local_228[0] = 0;
  iVar1 = thunk_FUN_180619b64(local_228,local_218,0x100,&DAT_1806b1910);
  if (iVar1 == 0) {
    psVar2 = local_218;
    psVar3 = (short *)0x0;
LAB_180629af9:
    if (*psVar2 != 0) {
      FUN_1806295f0(psVar2);
      goto LAB_180629a71;
    }
  }
  else {
    if (iVar1 == 0x22) {
      psVar2 = (short *)_malloc_base(local_228[0] * 2);
      if (psVar2 == (short *)0x0) {
        psVar2 = (short *)0x0;
      }
      else {
        local_228[1] = 0;
        iVar1 = thunk_FUN_180619b64(local_228 + 1,psVar2,local_228[0],&DAT_1806b1910);
        if (iVar1 == 0) {
          FUN_180621380(0);
          psVar3 = psVar2;
          if (psVar2 == local_218) {
            psVar3 = (short *)0x0;
          }
          goto LAB_180629af9;
        }
      }
      FUN_180621380(psVar2);
    }
    psVar3 = (short *)0x0;
  }
  FUN_180629870();
LAB_180629a71:
  FUN_180621380(psVar3);
}



