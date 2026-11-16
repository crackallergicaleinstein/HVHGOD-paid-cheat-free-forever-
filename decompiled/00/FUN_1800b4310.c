// FUN_1800b4310 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800b4310 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800b4310(undefined1 (*param_1) [16],undefined8 *param_2)

{
  bool bVar1;
  char *pcVar2;
  longlong lVar3;
  undefined1 auStack_78 [48];
  undefined1 (*local_48) [16];
  undefined8 uStack_40;
  char *local_38;
  longlong local_30;
  char local_20;
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_78;
  if ((ulonglong)param_2[1] < 0x4000001) {
    local_48 = (undefined1 (*) [16])*param_2;
    uStack_40 = param_2[1];
    FUN_1800ab8b0(&local_38,&local_48);
    if ((((local_20 == '\0') || ((ulonglong)(local_30 - (longlong)local_38) < 8)) ||
        (*local_38 != 'H')) ||
       (((local_38[1] != 'C' || (local_38[2] != 'G')) || (local_38[3] != '1')))) {
      bVar1 = false;
      if (local_20 == '\0') goto LAB_1800b439f;
    }
    else {
      bVar1 = true;
    }
    FUN_180113710(&local_38);
  }
  else {
    bVar1 = false;
    local_48 = param_1;
  }
LAB_1800b439f:
  pcVar2 = "Cannot load config: unsupported or invalid Internal settings.";
  if (bVar1) {
    pcVar2 = "Old-format config is damaged or unsupported. Current config kept.";
  }
  *param_1 = (undefined1  [16])0x0;
  *(undefined8 *)param_1[1] = 0;
  *(undefined8 *)(param_1[1] + 8) = 0;
  lVar3 = -1;
  do {
    lVar3 = lVar3 + 1;
  } while (pcVar2[lVar3] != '\0');
  FUN_18015ba30(param_1);
}



