// FUN_1800275a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800275a0 */

void FUN_1800275a0(undefined8 *param_1)

{
  if ((BCRYPT_HASH_HANDLE)param_1[1] != (BCRYPT_HASH_HANDLE)0x0) {
    BCryptDestroyHash((BCRYPT_HASH_HANDLE)param_1[1]);
  }
  if ((BCRYPT_ALG_HANDLE)*param_1 == (BCRYPT_ALG_HANDLE)0x0) {
    return;
  }
  BCryptCloseAlgorithmProvider((BCRYPT_ALG_HANDLE)*param_1,0);
  return;
}



