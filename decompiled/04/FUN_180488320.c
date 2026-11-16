// FUN_180488320 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180488320 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180488320(undefined8 param_1)

{
  undefined8 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  float fVar9;
  undefined1 auStack_58 [32];
  undefined4 local_38 [4];
  ulonglong local_28;
  
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_58;
  plVar7 = *(longlong **)(DAT_180bb8ae8 + 0x14d0);
  lVar8 = DAT_180bb8ae8;
  uVar2 = FUN_1804b0a90(param_1,0,
                        *(undefined4 *)(plVar7[0x22] + -4 + (longlong)(int)plVar7[0x21] * 4));
  if (*(uint *)(*plVar7 + 0x1534) == uVar2) {
    FUN_1804cf810(uVar2,0xb,param_1);
    lVar8 = DAT_180bb8ae8;
  }
  fVar9 = *(float *)(lVar8 + 0x114);
  uVar1 = *(undefined8 *)(*(longlong *)(lVar8 + 0x14d0) + 0x1c0);
  uVar6 = ~uVar2;
  puVar4 = local_38;
  local_38[0] = 0;
  uVar5 = uVar6;
  do {
    uVar5 = crc32(uVar5,*puVar4);
    puVar3 = puVar4 + 2;
    puVar4 = puVar4 + 1;
  } while (puVar3 <= local_38 + 1);
  if (puVar4 < local_38 + 1) {
    do {
      uVar5 = crc32(uVar5,*(undefined1 *)puVar4);
      puVar4 = (undefined4 *)((longlong)puVar4 + 1);
    } while (puVar4 < local_38 + 1);
  }
  FUN_1804b1700(uVar1,~uVar5,DAT_180b0a41c * 14.0 + *(float *)(lVar8 + 0x110));
  local_38[2] = 1;
  puVar4 = local_38 + 2;
  do {
    uVar6 = crc32(uVar6,*puVar4);
    puVar3 = puVar4 + 2;
    puVar4 = puVar4 + 1;
  } while (puVar3 <= local_38 + 3);
  if (puVar4 < local_38 + 3) {
    do {
      uVar6 = crc32(uVar6,*(undefined1 *)puVar4);
      puVar4 = (undefined4 *)((longlong)puVar4 + 1);
    } while (puVar4 < local_38 + 3);
  }
  FUN_1804b1700(uVar1,~uVar6,DAT_180b0a41c * -76.0 + fVar9);
  FUN_1804c7740(uVar2,0);
}



