// FUN_18045a890 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18045a890 */

void FUN_18045a890(longlong *param_1)

{
  char *pcVar1;
  longlong lVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined1 auVar5 [64];
  undefined8 in_stack_ffffffffffffff98;
  undefined8 uVar6;
  ulonglong uVar7;
  char *pcVar8;
  undefined *puVar9;
  undefined4 uVar10;
  
  lVar2 = *param_1;
  FUN_180488c60();
  uVar6 = CONCAT71((int7)((ulonglong)in_stack_ffffffffffffff98 >> 8),1);
  FUN_180489c50(&DAT_180829c64,lVar2 + 0xc5c,lVar2 + 0xc58,0,uVar6);
  uVar6 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
  FUN_180489c50(&DAT_180829c5c,lVar2 + 0xca8,lVar2 + 0xc79,0,uVar6);
  uVar7 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
  FUN_180489c50("Stars",lVar2 + 0xcbc,lVar2 + 0xcb8,0,uVar7);
  FUN_180488f10();
  lVar2 = *param_1;
  FUN_180488c60();
  uVar10 = 0;
  FUN_1804898a0(&DAT_180829c4c,lVar2 + 0xc48,0,1,uVar7 & 0xffffffffffffff00,0);
  uVar4 = 0x3dcccccd;
  uVar6 = CONCAT44(uVar10,0x3dcccccd);
  FUN_18048a250("Strength",lVar2 + 0xc4c,0,0x41200000,&DAT_180829c18,uVar6,
                *(undefined1 *)(lVar2 + 0xc48),0);
  auVar5 = ZEXT464(0x3f800000);
  uVar6 = CONCAT44((int)((ulonglong)uVar6 >> 0x20),0x3f800000);
  FUN_18048a250("Direction",lVar2 + 0xc50,0,0x43b40000,&DAT_180829cdc,uVar6,
                *(undefined1 *)(lVar2 + 0xc48),0);
  uVar6 = CONCAT44((int)((ulonglong)uVar6 >> 0x20),uVar4);
  FUN_18048a250("Gusts",lVar2 + 0xc54,0,0x40a00000,&DAT_180829c18,uVar6,
                *(undefined1 *)(lVar2 + 0xc48),0);
  uVar10 = (undefined4)((ulonglong)uVar6 >> 0x20);
  FUN_180488f10();
  lVar2 = *param_1;
  FUN_180488c60();
  pcVar1 = (char *)(lVar2 + 0xc80);
  FUN_180489c50("Lightning",lVar2 + 0xc84,pcVar1,0,1);
  pcVar8 = "%.1fs";
  FUN_18048a250("Interval",lVar2 + 0xc94,auVar5._0_8_,0x41f00000,"%.1fs",CONCAT44(uVar10,0x3f000000)
                ,*pcVar1,0);
  uVar7 = (ulonglong)pcVar8 & 0xffffffffffffff00;
  FUN_1804898a0("Strike on Kill",lVar2 + 0xc9c,0,*pcVar1,uVar7,0);
  uVar7 = uVar7 & 0xffffffffffffff00;
  FUN_1804898a0("Sky Flash",lVar2 + 0xccc,0,*pcVar1,uVar7,0);
  uVar10 = 0;
  FUN_1804898a0("Thunder",lVar2 + 0xc9d,0,*pcVar1,uVar7 & 0xffffffffffffff00,0);
  if ((*pcVar1 == '\0') || (*(char *)(lVar2 + 0xc9d) == '\0')) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  puVar9 = &DAT_1807c6e40;
  FUN_18048a250("Volume",lVar2 + 0xcd0,0,auVar5._0_8_,&DAT_1807c6e40,CONCAT44(uVar10,0x3c23d70a),
                uVar3,0);
  FUN_180488f10();
  lVar2 = *param_1;
  FUN_180488c60();
  uVar10 = 0;
  FUN_1804898a0("Wet Surfaces",lVar2 + 0xc9e,0,1,(ulonglong)puVar9 & 0xffffffffffffff00,0);
  FUN_18048a250("Wetness",lVar2 + 0xca0,0,0x40800000,&DAT_180829c18,CONCAT44(uVar10,uVar4),
                *(undefined1 *)(lVar2 + 0xc9e),0);
  FUN_180488f10();
  return;
}



