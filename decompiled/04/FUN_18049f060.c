// FUN_18049f060 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18049f060 */

void FUN_18049f060(longlong *param_1)

{
  longlong lVar1;
  ulonglong in_stack_ffffffffffffffc8;
  undefined *puVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  
  lVar1 = *param_1;
  FUN_180488c60();
  uVar4 = 0;
  FUN_1804898a0("Thirdperson",lVar1 + 0xd19,0,1,in_stack_ffffffffffffffc8 & 0xffffffffffffff00,0);
  puVar2 = &DAT_180829c34;
  FUN_18048a250("Distance",lVar1 + 0xd1c,0x41f00000,0x43960000,&DAT_180829c34,
                CONCAT44(uVar4,0x3f800000),*(undefined1 *)(lVar1 + 0xd19),0);
  uVar3 = (ulonglong)puVar2 & 0xffffffffffffff00;
  FUN_1804898a0("Collision",lVar1 + 0xd20,0,*(undefined1 *)(lVar1 + 0xd19),uVar3,0);
  FUN_180488f10();
  lVar1 = *param_1;
  FUN_180488c60();
  FUN_1804898a0("While Dead",lVar1 + 0xd21,0,1,uVar3 & 0xffffffffffffff00,0);
  FUN_180488f10();
  return;
}



