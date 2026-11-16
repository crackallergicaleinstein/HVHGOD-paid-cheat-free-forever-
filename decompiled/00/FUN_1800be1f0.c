// FUN_1800be1f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800be1f0 */

longlong FUN_1800be1f0(longlong param_1,char *param_2,undefined1 param_3)

{
  char *pcVar1;
  undefined8 uVar2;
  char *local_a8;
  ulonglong uStack_a0;
  undefined8 local_98;
  char *local_88;
  ulonglong uStack_80;
  undefined8 local_78;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [32];
  
  uVar2 = FUN_18015b360(local_48);
  local_68 = (undefined1  [16])0x0;
  local_58 = ZEXT816(0);
  FUN_18015ba30(local_68,"esp overlay",0xb);
  local_88 = (char *)0x0;
  uStack_80 = uStack_80 & 0xffffffffffffff00;
  local_78 = 0;
  local_a8 = (char *)0x0;
  uStack_a0 = uStack_80;
  local_98 = 0;
  FUN_18015a8b0(param_1,param_3,&local_a8,local_68,uVar2,0);
  FUN_1800bb6a0(param_1 + 0x68,param_2);
  FUN_1800bbb70(param_1 + 0x1c0,param_2);
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  FUN_18015ba30(local_68,"health",6);
  FUN_1800bbf80(param_1 + 0x2a8,param_2,local_68);
  FUN_18015c010(local_68);
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  FUN_18015ba30(local_68,"armor",5);
  FUN_1800bbf80(param_1 + 0x4d8,param_2,local_68);
  FUN_18015c010(local_68);
  FUN_1800bc940(param_1 + 0x708,param_2);
  FUN_1800bd030(param_1 + 0x938,param_2);
  FUN_1800bd520(param_1 + 0x9d8,param_2);
  FUN_1800bd7e0(param_1 + 0xa50,param_2);
  FUN_1800bdab0(param_1 + 0xad0,param_2);
  *(undefined1 *)(param_1 + 0xbd8) = 0;
  *(undefined4 *)(param_1 + 0xbdc) = 2;
  local_88 = param_2;
  if (0xf < *(ulonglong *)(param_2 + 0x18)) {
    local_88 = *(char **)param_2;
  }
  pcVar1 = param_2 + 0x10;
  local_a8 = "reverse bars";
  uStack_a0 = 0xc;
  uStack_80 = *(ulonglong *)pcVar1;
  FUN_1800f29f0((undefined1 *)(param_1 + 0xbd8),&local_88,&local_a8);
  if (0xf < *(ulonglong *)(param_2 + 0x18)) {
    param_2 = *(char **)param_2;
  }
  local_88 = "armor order";
  uStack_80 = 0xb;
  uStack_a0 = *(ulonglong *)pcVar1;
  local_a8 = param_2;
  FUN_1800f3030(param_1 + 0xbdc,&local_a8,&local_88);
  *(undefined1 *)(param_1 + 0x4d8) = 0;
  return param_1;
}



