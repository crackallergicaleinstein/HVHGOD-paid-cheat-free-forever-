// FUN_18049ee90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18049ee90 */

void FUN_18049ee90(longlong *param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  ulonglong in_stack_ffffffffffffffb8;
  undefined *puVar3;
  undefined4 uVar4;
  
  lVar1 = *param_1;
  FUN_180488c60();
  uVar4 = 0;
  FUN_1804898a0("Override Viewmodel",lVar1 + 0xd06,0,1,
                in_stack_ffffffffffffffb8 & 0xffffffffffffff00,0);
  uVar2 = 0x3f800000;
  FUN_18048a250("Offset X",lVar1 + 0xd08,0xc1200000,0x41200000,&DAT_180829c34,
                CONCAT44(uVar4,0x3f800000),*(undefined1 *)(lVar1 + 0xd06),0);
  FUN_18048a250("Offset Y",lVar1 + 0xd0c,0xc1200000,0x41200000,&DAT_180829c34,uVar2,
                *(undefined1 *)(lVar1 + 0xd06),0);
  FUN_18048a250("Offset Z",lVar1 + 0xd10,0xc1200000,0x41200000,&DAT_180829c34,uVar2,
                *(undefined1 *)(lVar1 + 0xd06),0);
  puVar3 = &DAT_180829cdc;
  FUN_18048a250("Field of View",lVar1 + 0xd14,0x42580000,0x42b40000,&DAT_180829cdc,uVar2,
                *(undefined1 *)(lVar1 + 0xd06),0);
  FUN_180488f10();
  lVar1 = *param_1;
  FUN_180488c60();
  FUN_1804898a0("Show In Scope",lVar1 + 0xd18,0,1,(ulonglong)puVar3 & 0xffffffffffffff00,0);
  FUN_180488f10();
  return;
}



