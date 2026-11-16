// FUN_18049f340 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18049f340 */

void FUN_18049f340(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  char local_res8 [8];
  
  FUN_180489c50("Colorize Effects",*param_1 + 0xd64,*param_1 + 0xd60,&DAT_180858a0c,1);
  lVar2 = *param_1;
  if (DAT_180bbecdb == '\0') {
    FUN_1804c2800("Bomb Indicator");
    local_res8[0] = '\0';
    FUN_1804898a0("Bomb Indicator",lVar2 + 0xd74,&DAT_180829f9c,1,1,local_res8);
    if (local_res8[0] != '\0') {
      FUN_180488320("##settings");
    }
    cVar3 = FUN_180488630("##settings","Bomb Indicator",0);
    if (cVar3 != '\0') {
      FUN_180488c60();
      FUN_1804898a0("Show Timer",lVar2 + 0xd75,0,1,0,0);
      FUN_180488f10();
      FUN_1804aeac0();
    }
    iVar1 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
    if (iVar1 < 2) {
      FUN_1804c5a40("Calling PopID() too many times!");
    }
    else {
      *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar1 + -1;
    }
  }
  else {
    FUN_1804898a0("Bomb Indicator",lVar2 + 0xd74,&DAT_180829f9c,1,1,0);
    FUN_180493f00("Bomb Indicator");
    FUN_180488c60();
    FUN_1804898a0("Show Timer",lVar2 + 0xd75,0,1,0,0);
    FUN_180488f10();
    if (DAT_180c62d18 != DAT_180c62d20) {
      FUN_18015c010(DAT_180c62d20 + -0x20);
      DAT_180c62d20 = DAT_180c62d20 + -0x20;
    }
    DAT_1808e4e38 = 0xffffffff;
  }
  FUN_180489c50("Defuse Indicator",*param_1 + 0xd7c,*param_1 + 0xd78,&DAT_180829f98,1);
  FUN_180489c50("Defuser",*param_1 + 0xd90,*param_1 + 0xd8c,&DAT_180829f98,1);
  return;
}



