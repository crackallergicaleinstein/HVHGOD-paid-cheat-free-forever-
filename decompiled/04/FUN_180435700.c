// FUN_180435700 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180435700 */

int FUN_180435700(undefined8 param_1,float param_2)

{
  undefined1 auVar1 [16];
  int *piVar2;
  int *piVar3;
  int local_res8 [8];
  
  if (param_2 <= 0.0) {
    return 4;
  }
  local_res8[4] = 0x80;
  auVar1 = vroundss_avx(ZEXT816(0),ZEXT416((uint)((param_2 * 6.2831855) / 1.5)),2);
  local_res8[0] = (int)auVar1._0_4_;
  local_res8[1] = (int)((ulonglong)param_1 >> 0x20);
  local_res8[2] = 0x18;
  piVar3 = local_res8 + 2;
  if (0x17 < local_res8[0]) {
    piVar3 = local_res8;
  }
  piVar2 = local_res8 + 4;
  if (local_res8[0] < 0x81) {
    piVar2 = piVar3;
  }
  return *piVar2;
}



