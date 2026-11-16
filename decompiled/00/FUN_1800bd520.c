// FUN_1800bd520 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800bd520 */

longlong FUN_1800bd520(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  char *pcVar2;
  undefined8 *****local_d8;
  ulonglong uStack_d0;
  undefined8 local_c8;
  undefined8 *****local_b8 [2];
  undefined8 local_a8;
  ulonglong local_a0;
  undefined8 *****local_98;
  ulonglong uStack_90;
  undefined8 local_88;
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58 [32];
  
  if (0x7fffffffffffffff - param_2[2] < 5) {
                    /* WARNING: Subroutine does not return */
    FUN_18015bb70();
  }
  puVar1 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar1 = (undefined8 *)*param_2;
  }
  pcVar2 = " name";
  FUN_18015a9c0(local_58,param_2,param_3,puVar1,param_2[2]," name",5);
  local_78 = (undefined1  [16])0x0;
  local_68 = 0;
  local_60 = 0;
  FUN_18015ba30(local_78,&DAT_1806bd758,4);
  local_d8 = (undefined8 *****)0x0;
  uStack_d0 = uStack_d0 & 0xffffffffffffff00;
  local_c8 = 0;
  local_98 = (undefined8 *****)0x0;
  uStack_90 = uStack_d0;
  local_88 = 0;
  FUN_18015a8b0(param_1,1,&local_98,local_78,local_58,(ulonglong)pcVar2 & 0xffffffffffffff00);
  *(undefined4 *)(param_1 + 0x68) = 0xe1ffffff;
  *(undefined4 *)(param_1 + 0x6c) = 1;
  *(undefined4 *)(param_1 + 0x70) = 0x3f000000;
  if (0x7fffffffffffffff - param_2[2] < 5) {
                    /* WARNING: Subroutine does not return */
    FUN_18015bb70();
  }
  FUN_18015a9c0(local_b8);
  local_d8 = local_b8;
  if (0xf < local_a0) {
    local_d8 = local_b8[0];
  }
  local_98 = (undefined8 *****)0x1806bd630;
  uStack_90 = 8;
  uStack_d0 = local_a8;
  FUN_1800f3030(param_1 + 0x6c,&local_d8,&local_98);
  FUN_18015c010(local_b8);
  if (0x7fffffffffffffff - param_2[2] < 5) {
                    /* WARNING: Subroutine does not return */
    FUN_18015bb70();
  }
  FUN_18015a9c0(local_b8);
  local_98 = local_b8;
  if (0xf < local_a0) {
    local_98 = local_b8[0];
  }
  local_d8 = (undefined8 *****)0x1806bd6bc;
  uStack_d0 = 6;
  uStack_90 = local_a8;
  FUN_1800f2e80(param_1 + 0x70,&local_98,&local_d8);
  FUN_18015c010(local_b8);
  if (0x7fffffffffffffff - param_2[2] < 5) {
                    /* WARNING: Subroutine does not return */
    FUN_18015bb70();
  }
  FUN_18015a9c0(local_b8);
  local_98 = local_b8;
  if (0xf < local_a0) {
    local_98 = local_b8[0];
  }
  local_d8 = (undefined8 *****)0x1806bc8b4;
  uStack_d0 = 5;
  uStack_90 = local_a8;
  FUN_1800aa4b0(param_1 + 0x68,&local_98,&local_d8);
  FUN_18015c010(local_b8);
  return param_1;
}



