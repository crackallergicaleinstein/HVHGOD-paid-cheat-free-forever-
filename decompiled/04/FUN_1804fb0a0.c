// FUN_1804fb0a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804fb0a0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804fb0a0(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 *puVar3;
  longlong lVar4;
  ulonglong uVar6;
  ulonglong uVar5;
  undefined1 auStack_48 [32];
  char local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_1808d5f00 ^ (ulonglong)auStack_48;
  iVar2 = FUN_1804b1000(local_28,param_2,param_2 & 0xffffffff);
  local_28[iVar2] = '\0';
  uVar6 = 0xffffffffffffffff;
  do {
    uVar5 = uVar6 + 1;
    lVar4 = uVar6 + 1;
    uVar6 = uVar5;
  } while (local_28[lVar4] != '\0');
  piVar1 = *(int **)(param_1 + 8);
  if ((local_28[0] == '\n') && (*(char *)((longlong)piVar1 + 0x17) != '\0')) goto LAB_1804fb1ba;
  if (((char)piVar1[3] == '\0') || (piVar1[1] != piVar1[2])) {
LAB_1804fb17b:
    FUN_1804f9960(param_1,piVar1);
    iVar2 = FUN_1804f9170(param_1,*piVar1,local_28,uVar5 & 0xffffffff);
    if (iVar2 == 0) goto LAB_1804fb1ba;
    FUN_1804fa9e0(piVar1 + 8,*piVar1,0,iVar2);
    *piVar1 = *piVar1 + iVar2;
  }
  else {
    iVar2 = *piVar1;
    if (*(int *)(param_1 + 0x18) <= iVar2) goto LAB_1804fb17b;
    puVar3 = (undefined1 *)FUN_1804fa9e0(piVar1 + 8,iVar2,1);
    if (puVar3 != (undefined1 *)0x0) {
      *puVar3 = *(undefined1 *)((longlong)iVar2 + *(longlong *)(param_1 + 0x20));
    }
    lVar4 = (longlong)*piVar1 + *(longlong *)(param_1 + 0x30);
    FUN_18063aed0(lVar4,lVar4 + 1,(longlong)(*(int *)(param_1 + 0x18) - *piVar1));
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
    *(undefined2 *)(param_1 + 0x73) = 0x101;
    iVar2 = FUN_1804f9170(param_1,*piVar1,local_28,uVar5 & 0xffffffff);
    if (iVar2 == 0) goto LAB_1804fb1ba;
    *piVar1 = *piVar1 + iVar2;
  }
  *(undefined1 *)((longlong)piVar1 + 0x16) = 0;
LAB_1804fb1ba:
  *(undefined1 *)(param_1 + 0x70) = 1;
  *(undefined4 *)(param_1 + 0x6c) = 0xbe99999a;
}



