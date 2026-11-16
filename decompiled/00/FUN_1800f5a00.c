// FUN_1800f5a00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800f5a00 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800f5a00(longlong param_1,fpos_t *param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  fpos_t fVar3;
  char cVar4;
  int iVar5;
  undefined1 auStack_58 [32];
  fpos_t local_38;
  ulonglong local_30;
  
  local_30 = DAT_1808d5f00 ^ (ulonglong)auStack_58;
  if (((**(longlong **)(param_1 + 0x38) == param_1 + 0x70) && (param_4 == 1)) &&
     (*(longlong *)(param_1 + 0x68) == 0)) {
    param_3 = param_3 + -1;
  }
  if ((((*(longlong *)(param_1 + 0x80) == 0) || (cVar4 = FUN_180113ba0(), cVar4 == '\0')) ||
      (((param_3 != 0 || (param_4 != 1)) &&
       (iVar5 = FUN_180610744(*(undefined8 *)(param_1 + 0x80),param_3,param_4), iVar5 != 0)))) ||
     (iVar5 = fgetpos(*(FILE **)(param_1 + 0x80),&local_38), iVar5 != 0)) {
    *param_2 = -1;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  if (**(longlong **)(param_1 + 0x18) == param_1 + 0x70) {
    lVar1 = *(longlong *)(param_1 + 0x88);
    uVar2 = *(undefined8 *)(param_1 + 0x90);
    **(longlong **)(param_1 + 0x18) = lVar1;
    **(longlong **)(param_1 + 0x38) = lVar1;
    **(int **)(param_1 + 0x50) = (int)uVar2 - (int)lVar1;
  }
  fVar3 = *(fpos_t *)(param_1 + 0x74);
  *param_2 = local_38;
  param_2[2] = fVar3;
  param_2[1] = 0;
}



