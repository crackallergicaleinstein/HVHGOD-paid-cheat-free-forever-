// FUN_1800ce230 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800ce230 */

undefined8 FUN_1800ce230(longlong param_1,undefined8 param_2,int param_3)

{
  bool bVar1;
  undefined1 auVar2 [16];
  undefined1 *puVar3;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 local_40 [40];
  
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x18));
  bVar1 = param_3 - 2U < 2;
  if (bVar1) {
    puVar3 = (undefined1 *)FUN_18015b360(local_40,((longlong)(param_3 + -2) + 1) * 0x20 + param_1);
  }
  else {
    local_50 = 0;
    uStack_48 = 0xf;
    local_60._1_15_ = SUB1615((undefined1  [16])0x0,1);
    auVar2[0xf] = 0;
    auVar2._0_15_ = local_60._1_15_;
    local_60 = auVar2 << 8;
    puVar3 = local_60;
  }
  FUN_18015b360(param_2,puVar3);
  if (bVar1) {
    FUN_18015c010(local_40);
  }
  else {
    FUN_18015c010(local_60);
  }
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x18));
  return param_2;
}



