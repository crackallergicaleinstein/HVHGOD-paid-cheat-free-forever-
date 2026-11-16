// FUN_180517700 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180517700 */

void FUN_180517700(void)

{
  undefined1 uVar1;
  char cVar2;
  undefined8 uVar3;
  char *local_18;
  undefined8 local_10;
  
  FUN_1805178a0(0xc2b40000,"Force Left",&DAT_180cad880,&DAT_180cad950,0xc2b40000);
  FUN_1805178a0(0x42b40000,"Force Right",&DAT_180cad8e8,&DAT_180cad954,0x42b40000);
  FUN_180488c60();
  FUN_180516ec0("Direction Indicator",&DAT_180cada90);
  cVar2 = FUN_18048b0e0("Indicator Appearance",&DAT_18082a268,1);
  if (cVar2 != '\0') {
    FUN_180516c40("##direction_appearance",0x43af0000);
  }
  cVar2 = FUN_180488630("##direction_appearance","Indicator Appearance",0x43af0000);
  if (cVar2 != '\0') {
    FUN_180488c60();
    FUN_180516db0("Indicator Color",&DAT_180cadaf8,&DAT_18082a298,1);
    FUN_180488f10();
    FUN_180488c60();
    FUN_180516ec0(&DAT_1806bd384,&DAT_180cadb00);
    uVar1 = DAT_180cadb00;
    local_18 = "Glow Strength";
    local_10 = 0xd;
    uVar3 = FUN_180515fb0(&local_18);
    cVar2 = FUN_18048a250("Glow Strength",&DAT_180cadb68,0x3dcccccd,0x3f800000,&DAT_1807c6e40,
                          0x3c23d70a,uVar1,uVar3);
    if (cVar2 != '\0') {
      FUN_18050cd00();
    }
    FUN_180488f10();
    FUN_1804aeac0();
  }
  FUN_180488f10();
  return;
}



