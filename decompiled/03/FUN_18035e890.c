// FUN_18035e890 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18035e890 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18035e890(undefined8 *param_1,int param_2)

{
  int *piVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_1e8 [32];
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined1 local_1b8 [384];
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_1e8;
  pcVar2 = (char *)*param_1;
  lVar5 = (longlong)param_2;
  if ((((*pcVar2 == '\0') || (param_2 != 0x3f)) && (*(char *)(lVar5 + param_1[1]) == '\0')) &&
     (*(char *)param_1[3] == '\0')) {
    if (*(int *)(param_1[4] + 0x1a4) < 0x3f) {
      FUN_18063ab10(local_1b8,0,0x180);
      FUN_18035d180(local_1b8);
      local_38 = 0;
      local_1c8 = *(undefined8 *)param_1[5];
      uStack_1c0 = ((undefined8 *)param_1[5])[1];
      cVar3 = FUN_180353ed0(&local_1c8,(float)param_2 * 0.015625,local_1b8,*pcVar2);
      if (cVar3 == '\0') {
        *(undefined1 *)(param_1[4] + 0x16) = 1;
        *(undefined1 *)param_1[3] = 1;
      }
      else {
        piVar1 = (int *)(param_1[4] + 0x1a4);
        *piVar1 = *piVar1 + 1;
        iVar4 = FUN_18035bca0(param_1[6],local_1b8);
        *(undefined1 *)(lVar5 + param_1[1]) = 1;
        *(int *)(param_1[2] + lVar5 * 4) = iVar4;
        if (iVar4 == 2) {
          *(undefined1 *)(param_1[4] + 0x16) = 1;
          *(undefined1 *)param_1[3] = 1;
        }
      }
    }
    else {
      *(undefined1 *)(param_1[4] + 0x17) = 1;
      *(undefined1 *)param_1[3] = 1;
    }
  }
}



