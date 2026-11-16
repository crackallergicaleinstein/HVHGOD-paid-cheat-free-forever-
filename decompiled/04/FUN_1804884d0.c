// FUN_1804884d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804884d0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804884d0(undefined8 param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_48 [32];
  undefined4 local_28 [4];
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_48;
  plVar6 = *(longlong **)(DAT_180bb8ae8 + 0x14d0);
  lVar7 = DAT_180bb8ae8;
  uVar2 = FUN_1804b0a90(param_1,0,
                        *(undefined4 *)(plVar6[0x22] + -4 + (longlong)(int)plVar6[0x21] * 4));
  if (*(uint *)(*plVar6 + 0x1534) == uVar2) {
    FUN_1804cf810(uVar2,0xb,param_1);
    lVar7 = DAT_180bb8ae8;
  }
  uVar2 = ~uVar2;
  local_28[0] = 0;
  uVar1 = *(undefined8 *)(*(longlong *)(lVar7 + 0x14d0) + 0x1c0);
  puVar4 = local_28;
  uVar5 = uVar2;
  do {
    uVar5 = crc32(uVar5,*puVar4);
    puVar3 = puVar4 + 2;
    puVar4 = puVar4 + 1;
  } while (puVar3 <= local_28 + 1);
  if (puVar4 < local_28 + 1) {
    do {
      uVar5 = crc32(uVar5,*(undefined1 *)puVar4);
      puVar4 = (undefined4 *)((longlong)puVar4 + 1);
    } while (puVar4 < local_28 + 1);
  }
  FUN_1804b1700(uVar1,~uVar5,*param_2);
  puVar4 = local_28 + 2;
  local_28[2] = 1;
  do {
    uVar2 = crc32(uVar2,*puVar4);
    puVar3 = puVar4 + 2;
    puVar4 = puVar4 + 1;
  } while (puVar3 <= local_28 + 3);
  if (puVar4 < local_28 + 3) {
    do {
      uVar2 = crc32(uVar2,*(undefined1 *)puVar4);
      puVar4 = (undefined4 *)((longlong)puVar4 + 1);
    } while (puVar4 < local_28 + 3);
  }
  FUN_1804b1700(uVar1,~uVar2,param_2[1]);
}



