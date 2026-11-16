// FUN_1800eb640 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800eb640 */

undefined8 FUN_1800eb640(undefined8 param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  char cVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uStack_64;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined1 local_30;
  undefined7 uStack_2f;
  undefined1 local_28 [8];
  undefined1 local_20 [8];
  undefined1 local_18 [8];
  undefined1 local_10 [8];
  
  bVar3 = false;
  bVar2 = false;
  bVar1 = false;
  uVar7 = 0;
  if (*param_2 == '\x01') {
    local_48 = ZEXT816(0);
    FUN_1801409d0(local_48 + 8,0,param_3,param_4,0);
    local_48[0] = 4;
    local_48._8_8_ = CONCAT44(uStack_64,uVar7) & 0xffffffffffffff00;
    local_38 = 0;
    local_58._8_8_ = &local_30;
    local_58._0_8_ = local_48;
    FUN_1800f4e90(local_18,local_58,1,2,3);
    uVar6 = FUN_1800ea540(param_2,local_28);
    bVar3 = true;
    bVar2 = true;
    bVar1 = true;
    local_58 = ZEXT816(0);
    FUN_1801409d0(local_58 + 8,0);
    local_58[0] = 4;
    auVar4 = local_58;
    local_30 = 1;
    local_58._9_7_ = uStack_2f;
    local_58[8] = 1;
    local_58._0_8_ = auVar4._0_8_;
    cVar5 = FUN_1800f3780(uVar6,local_58);
    FUN_1801409d0(local_58 + 8,local_58[0]);
    if (cVar5 != '\0') {
      uVar6 = 1;
      goto LAB_1800eb737;
    }
  }
  uVar6 = 0;
LAB_1800eb737:
  if (bVar3) {
    FUN_1801409d0(local_20,local_28[0]);
  }
  if (bVar1) {
    FUN_1801409d0(local_10,local_18[0]);
  }
  if (bVar2) {
    _eh_vector_destructor_iterator_(local_48,0x18,1,FUN_1800aab30);
  }
  return uVar6;
}



