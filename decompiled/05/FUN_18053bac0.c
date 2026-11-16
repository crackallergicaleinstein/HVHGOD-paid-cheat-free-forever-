// FUN_18053bac0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18053bac0 */

void FUN_18053bac0(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  
  uVar2 = param_1[1];
  iVar1 = *(int *)*param_1;
  FUN_1805302b0((&PTR_s_Confirmed_damage_you_deal__Inclu_18086b6f8)[iVar1]);
  FUN_180488c60();
  if (iVar1 == 0) {
    puVar5 = &DAT_18082a244;
    puVar4 = (undefined8 *)&DAT_180b0b32c;
    pcVar3 = "Hit Highlight";
  }
  else if (iVar1 == 1) {
    puVar5 = &DAT_180829fa0;
    puVar4 = &DAT_180b0b330;
    pcVar3 = "Damage Taken Highlight";
  }
  else {
    if (iVar1 == 2) {
      FUN_1805367d0("Miss Highlight",&DAT_180b0b3bc,&DAT_180829a40,1,1);
      FUN_18048a250("On-Screen Duration",&DAT_180b0c0f0,0x3f000000,0x41200000,"%.1f s",0x3dcccccd,1,
                    &DAT_18082a278);
      goto LAB_18053bbc9;
    }
    if (iVar1 != 3) goto LAB_18053bbc9;
    puVar5 = &DAT_18085d598;
    puVar4 = (undefined8 *)&DAT_180b0b3b8;
    pcVar3 = "Purchase & Detail Highlight";
  }
  FUN_1805367d0(pcVar3,puVar4,puVar5,1,1);
LAB_18053bbc9:
  FUN_180488f10();
  pcVar3 = 
  "Filters and highlights apply to every enabled output. Set Default Duration in On Screen.";
  if (iVar1 == 2) {
    pcVar3 = "Misses use this duration. Other events use Default Duration in On Screen.";
  }
  FUN_1805302b0(pcVar3);
  FUN_180488c60();
  FUN_18053b0f0(uVar2);
  FUN_180488f10();
  return;
}



