// FUN_180542ad0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180542ad0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180542ad0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 (*pauVar1) [16];
  undefined1 *puVar2;
  undefined1 *puVar3;
  longlong *plVar4;
  undefined1 *puVar5;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined *local_70;
  undefined8 local_68;
  undefined1 local_50 [32];
  undefined1 local_30 [16];
  ulonglong uStack_20;
  ulonglong uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_1808d5f00 ^ (ulonglong)auStack_98;
  plVar4 = (longlong *)(param_1 + 0x18);
  local_78 = *(longlong *)(param_1 + 0x28);
  if (local_78 == 0x7fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_18015bb70();
  }
  if (0xf < *(ulonglong *)(param_1 + 0x30)) {
    plVar4 = (longlong *)*plVar4;
  }
  local_68 = 1;
  local_70 = &DAT_1806bcfc0;
  FUN_18015a9c0(local_50,param_2,param_3,plVar4);
  plVar4 = (longlong *)(param_1 + 0x38);
  if (0xf < *(ulonglong *)(param_1 + 0x50)) {
    plVar4 = (longlong *)*plVar4;
  }
  pauVar1 = (undefined1 (*) [16])FUN_18015b2a0(local_50,plVar4,*(undefined8 *)(param_1 + 0x48));
  local_30 = *pauVar1;
  uStack_20 = *(ulonglong *)pauVar1[1];
  uStack_18 = *(ulonglong *)(pauVar1[1] + 8);
  (*pauVar1)[0] = 0;
  *(undefined8 *)pauVar1[1] = 0;
  *(undefined8 *)(pauVar1[1] + 8) = 0xf;
  FUN_18015c010(local_50);
  puVar5 = local_30;
  if (0xf < uStack_18) {
    puVar5 = (undefined1 *)local_30._0_8_;
  }
  if (3 < uStack_20) {
    puVar3 = puVar5 + uStack_20;
    puVar2 = (undefined1 *)thunk_FUN_1805f9970(puVar5,puVar3,&DAT_1806bc7c4,4);
    if ((puVar2 != puVar3) && ((longlong)puVar2 - (longlong)puVar5 != -1)) goto LAB_180542e00;
  }
  puVar5 = local_30;
  if (0xf < uStack_18) {
    puVar5 = (undefined1 *)local_30._0_8_;
  }
  puVar3 = (undefined1 *)local_30._0_8_;
  if (6 < uStack_20) {
    puVar3 = puVar5 + uStack_20;
    puVar2 = (undefined1 *)thunk_FUN_1805f9970(puVar5,puVar3,"jumpbug",7);
    if ((puVar2 != puVar3) && ((longlong)puVar2 - (longlong)puVar5 != -1)) goto LAB_180542e00;
    puVar3 = (undefined1 *)local_30._0_8_;
  }
  puVar5 = local_30;
  if (0xf < uStack_18) {
    puVar5 = puVar3;
  }
  if (7 < uStack_20) {
    puVar3 = puVar5 + uStack_20;
    puVar2 = (undefined1 *)thunk_FUN_1805f9970(puVar5,puVar3,"edgejump",8);
    if ((puVar2 != puVar3) && ((longlong)puVar2 - (longlong)puVar5 != -1)) goto LAB_180542e00;
    puVar3 = (undefined1 *)local_30._0_8_;
  }
  puVar5 = local_30;
  if (0xf < uStack_18) {
    puVar5 = puVar3;
  }
  if (0x11 < uStack_20) {
    puVar3 = puVar5 + uStack_20;
    puVar2 = (undefined1 *)thunk_FUN_1805f9970(puVar5,puVar3,"landing prediction",0x12);
    if ((puVar2 != puVar3) && ((longlong)puVar2 - (longlong)puVar5 != -1)) goto LAB_180542e00;
    puVar3 = (undefined1 *)local_30._0_8_;
  }
  puVar5 = local_30;
  if (0xf < uStack_18) {
    puVar5 = puVar3;
  }
  if (8 < uStack_20) {
    puVar3 = puVar5 + uStack_20;
    puVar2 = (undefined1 *)thunk_FUN_1805f9970(puVar5,puVar3,"airstrafe",9);
    if ((puVar2 != puVar3) && ((longlong)puVar2 - (longlong)puVar5 != -1)) goto LAB_180542e00;
    puVar3 = (undefined1 *)local_30._0_8_;
  }
  puVar5 = local_30;
  if (0xf < uStack_18) {
    puVar5 = puVar3;
  }
  if (7 < uStack_20) {
    puVar3 = puVar5 + uStack_20;
    puVar2 = (undefined1 *)thunk_FUN_1805f9970(puVar5,puVar3,"slowwalk",8);
    if ((puVar2 != puVar3) && ((longlong)puVar2 - (longlong)puVar5 != -1)) goto LAB_180542e00;
    puVar3 = (undefined1 *)local_30._0_8_;
  }
  puVar5 = local_30;
  if (0xf < uStack_18) {
    puVar5 = puVar3;
  }
  if (9 < uStack_20) {
    puVar3 = puVar5 + uStack_20;
    puVar2 = (undefined1 *)thunk_FUN_1805f9970(puVar5,puVar3,"quick stop",10);
    if ((puVar2 != puVar3) && ((longlong)puVar2 - (longlong)puVar5 != -1)) goto LAB_180542e00;
    puVar3 = (undefined1 *)local_30._0_8_;
  }
  puVar5 = local_30;
  if (0xf < uStack_18) {
    puVar5 = puVar3;
  }
  if (9 < uStack_20) {
    thunk_FUN_1805f9970(puVar5,puVar5 + uStack_20,"fastladder",10);
  }
LAB_180542e00:
  FUN_18015c010(local_30);
}



