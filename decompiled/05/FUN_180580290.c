// FUN_180580290 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180580290 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000180580374) */

void FUN_180580290(longlong param_1)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  undefined1 auStack_68 [32];
  int local_48;
  uint local_44;
  int local_40 [2];
  char local_38 [24];
  ulonglong local_20;
  
  local_20 = DAT_1808d5f00 ^ (ulonglong)auStack_68;
  pcVar3 = local_38;
  iVar4 = 0;
  builtin_strncpy(local_38 + 0x10,"8 9",4);
  bVar1 = false;
  local_48 = 0;
  builtin_strncpy(local_38,"0 1 2 3 4 5 6 7 ",0x10);
  do {
    pcVar3 = (char *)FUN_1805871d0(pcVar3,param_1,local_40,&local_44);
    iVar2 = local_40[0];
    if ((local_44 < 2) &&
       (FUN_1805737a0(**(undefined8 **)(param_1 + 0x30),local_40[0],0x803,&local_48), iVar2 != 0)) {
      if (bVar1) {
        if (local_48 != iVar4) {
          *(undefined1 *)(param_1 + 0x28) = 0;
        }
      }
      else {
        bVar1 = true;
        iVar4 = local_48;
      }
    }
  } while (*pcVar3 != '\0');
  *(undefined1 *)(param_1 + 0x28) = 1;
}



