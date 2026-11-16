// FUN_18055be90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18055be90 */

void FUN_18055be90(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  lVar1 = *(longlong *)*param_1;
  FUN_180488c60();
  uVar3 = 0x3dcccccd;
  FUN_18048a250("Wetness Amount",lVar1 + 0x170,0,0x40a00000,&DAT_180829c18,0x3dcccccd,1,
                &DAT_18082a260);
  FUN_18048a250("Flow Speed",lVar1 + 0x174,0,0x40400000,"%.1fx",uVar3,1,&DAT_18082a274);
  FUN_180488f10();
  uVar2 = param_1[1];
  FUN_180488c60();
  FUN_18053bc10(uVar2);
  FUN_180488f10();
  return;
}



