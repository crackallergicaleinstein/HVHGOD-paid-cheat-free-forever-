// FUN_180001790 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180001790 */

void FUN_180001790(undefined8 *param_1,longlong *param_2,char param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  char *pcVar6;
  
  pcVar6 = "0123456789abcdef";
  if (param_3 != '\0') {
    pcVar6 = "0123456789ABCDEF";
  }
  uVar3 = param_2[1] * 2;
  *param_1 = 0;
  param_1[1] = 0;
  if ((longlong)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_18015bb70();
  }
  uVar4 = 0xf;
  puVar5 = param_1;
  if (0xf < uVar3) {
    uVar1 = uVar3 | 0xf;
    uVar4 = 0x16;
    if (0x16 < uVar1) {
      uVar4 = uVar1;
    }
    if (uVar1 < 0xfff) {
      puVar5 = (undefined8 *)FUN_180454770(uVar4 + 1);
    }
    else {
      lVar2 = FUN_180454770(uVar4 + 0x28);
      puVar5 = (undefined8 *)(lVar2 + 0x27U & 0xffffffffffffffe0);
      puVar5[-1] = lVar2;
    }
    *param_1 = puVar5;
  }
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  FUN_18063ab10(puVar5,0,uVar3);
  *(undefined1 *)((longlong)puVar5 + uVar3) = 0;
  if (param_2[1] != 0) {
    uVar3 = 0;
    do {
      puVar5 = param_1;
      if (0xf < (ulonglong)param_1[3]) {
        puVar5 = (undefined8 *)*param_1;
      }
      *(char *)((longlong)puVar5 + uVar3 * 2) = pcVar6[*(byte *)(*param_2 + uVar3) >> 4];
      puVar5 = param_1;
      if (0xf < (ulonglong)param_1[3]) {
        puVar5 = (undefined8 *)*param_1;
      }
      *(char *)((longlong)puVar5 + uVar3 * 2 + 1) = pcVar6[*(byte *)(*param_2 + uVar3) & 0xf];
      uVar3 = uVar3 + 1;
    } while (uVar3 < (ulonglong)param_2[1]);
  }
  return;
}



