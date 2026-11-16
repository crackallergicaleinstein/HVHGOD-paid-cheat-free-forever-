// FUN_18000d930 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18000d930 */

undefined8 FUN_18000d930(undefined8 *param_1,uint param_2,ULONG param_3)

{
  NTSTATUS NVar1;
  undefined4 extraout_var;
  
  if (*(uint *)*param_1 - param_2 < param_3 || *(uint *)*param_1 < param_2) {
    return 0;
  }
  NVar1 = BCryptHashData(*(BCRYPT_HASH_HANDLE *)param_1[1],
                         (PUCHAR)((ulonglong)param_2 + *(longlong *)param_1[2]),param_3,0);
  return CONCAT71((int7)(CONCAT44(extraout_var,NVar1) >> 8),-1 < NVar1);
}



