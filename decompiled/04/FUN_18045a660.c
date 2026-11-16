// FUN_18045a660 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18045a660 */

void FUN_18045a660(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulonglong in_stack_ffffffffffffffa8;
  undefined *puVar5;
  
  lVar1 = *param_1;
  FUN_180488c60();
  uVar4 = 0;
  cVar2 = FUN_1804898a0("Bloom",lVar1 + 0x124,0,1,in_stack_ffffffffffffffa8 & 0xffffffffffffff00,0);
  if (((cVar2 != '\0') && (*(char *)(lVar1 + 0x124) != '\0')) && (*(float *)(lVar1 + 0x128) < 0.0))
  {
    *(undefined4 *)(lVar1 + 0x128) = 0x3f000000;
  }
  uVar3 = 0x3c23d70a;
  puVar5 = &DAT_1807c6e40;
  FUN_18048a250("Amount",lVar1 + 0x128,0,0x3f800000,&DAT_1807c6e40,CONCAT44(uVar4,0x3c23d70a),
                *(undefined1 *)(lVar1 + 0x124),0);
  FUN_180488f10();
  lVar1 = *param_1;
  FUN_180488c60();
  uVar4 = 0;
  FUN_1804898a0("Exposure",lVar1 + 0x15c,0,1,(ulonglong)puVar5 & 0xffffffffffffff00,0);
  puVar5 = &DAT_1807c6e40;
  FUN_18048a250("Level",lVar1 + 0x160,0x3e4ccccd,0x40400000,&DAT_1807c6e40,CONCAT44(uVar4,uVar3),
                *(undefined1 *)(lVar1 + 0x15c),0);
  FUN_180488f10();
  lVar1 = *param_1;
  FUN_180488c60();
  uVar3 = 0;
  FUN_1804898a0("Depth of Field",lVar1 + 300,0,1,(ulonglong)puVar5 & 0xffffffffffffff00,0);
  uVar4 = 0x41200000;
  FUN_18048a250(&DAT_180829c70,lVar1 + 0x130,0,0x457a0000,&DAT_180829c34,CONCAT44(uVar3,0x41200000),
                *(undefined1 *)(lVar1 + 300),0);
  FUN_18048a250(&DAT_180829c6c,lVar1 + 0x134,0,0x45fa0000,&DAT_180829c34,uVar4,
                *(undefined1 *)(lVar1 + 300),0);
  FUN_180488f10();
  return;
}



