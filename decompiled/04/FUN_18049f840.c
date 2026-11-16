// FUN_18049f840 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18049f840 */

void FUN_18049f840(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  char local_res8 [8];
  
  lVar2 = param_1[1];
  lVar3 = *param_1;
  FUN_180488c60();
  FUN_1804898a0("Spectators",lVar3 + 0xeb5,&DAT_18082a250,1,0,0);
  FUN_1804898a0("Keybinds",lVar3 + 0xeb6,&DAT_180830b44,1,0,0);
  if (DAT_180bbecdb == '\0') {
    FUN_1804c2800("Watermark");
    local_res8[0] = '\0';
    FUN_1804898a0("Watermark",lVar3 + 0xeb7,&DAT_180830b4c,1,1,local_res8);
    if (local_res8[0] != '\0') {
      FUN_180488320("##settings");
    }
    cVar4 = FUN_180488630("##settings","Watermark",0);
    if (cVar4 != '\0') {
      FUN_1804a12f0(lVar2);
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
    FUN_1804898a0("Watermark",lVar3 + 0xeb7,&DAT_180830b4c,1,1,0);
    FUN_180493f00("Watermark");
    FUN_1804a12f0(lVar2);
    if (DAT_180c62d18 != DAT_180c62d20) {
      FUN_18015c010(DAT_180c62d20 + -0x20);
      DAT_180c62d20 = DAT_180c62d20 + -0x20;
    }
    DAT_1808e4e38 = 0xffffffff;
  }
  FUN_1804898a0("Bomb Timer",lVar3 + 0xeb8,&DAT_180829f9c,1,0,0);
  FUN_180488f10();
  return;
}



