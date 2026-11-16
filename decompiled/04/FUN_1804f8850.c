// FUN_1804f8850 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804f8850 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804f8850(void)

{
  undefined8 *puVar1;
  char cVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined1 auStack_48 [32];
  char local_28 [16];
  ulonglong local_18;
  
  lVar4 = DAT_180bb8ae8;
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_48;
  *(int *)(DAT_180bb8ae8 + 0x2618) = *(int *)(DAT_180bb8ae8 + 0x2618) + -1;
  puVar1 = (undefined8 *)
           ((longlong)*(int *)(lVar4 + 0x14a0) * 0x88 + -0x14 + *(longlong *)(lVar4 + 0x14a8));
  uVar5 = puVar1[1];
  *(undefined8 *)(lVar4 + 0x2640) = *puVar1;
  *(undefined8 *)(lVar4 + 0x2648) = uVar5;
  FUN_1804b08d0(local_28,0x10,"##Combo_%02d",*(undefined4 *)(lVar4 + 0x2618));
  pcVar6 = *(char **)(*(longlong *)(lVar4 + 0x14d0) + 8);
  lVar4 = -(longlong)pcVar6;
  do {
    cVar2 = *pcVar6;
    cVar3 = pcVar6[(longlong)(local_28 + lVar4)];
    if (cVar2 != cVar3) break;
    pcVar6 = pcVar6 + 1;
  } while (cVar3 != '\0');
  if (cVar2 == cVar3) {
    FUN_1804c7e80();
  }
  FUN_1804c5a40("Calling EndCombo() in wrong window!");
}



