// FUN_180187730 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180187730 */

void FUN_180187730(undefined8 *param_1)

{
  if ((BCRYPT_HASH_HANDLE)param_1[1] != (BCRYPT_HASH_HANDLE)0x0) {
    BCryptDestroyHash((BCRYPT_HASH_HANDLE)param_1[1]);
  }
  if ((BCRYPT_ALG_HANDLE)*param_1 == (BCRYPT_ALG_HANDLE)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000180187757. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BCryptCloseAlgorithmProvider((BCRYPT_ALG_HANDLE)*param_1,0);
  return;
}



