// FUN_1801cdef0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801cdef0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801cdef0(undefined1 (*param_1) [16],undefined8 ***param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 ***pppuVar3;
  longlong lVar4;
  undefined8 ****ppppuVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 auStack_f8 [64];
  undefined8 ****local_b8;
  undefined8 **local_b0;
  char *local_98;
  undefined8 local_90;
  undefined1 local_78 [32];
  undefined8 ****local_58 [2];
  ulonglong local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_f8;
  local_b8 = (undefined8 ****)param_2;
  if ((undefined8 **)0xf < param_2[3]) {
    local_b8 = (undefined8 ****)*param_2;
  }
  local_98 = "Unnamed config";
  local_90 = 0xe;
  local_b0 = param_2[2];
  pppuVar3 = (undefined8 ***)FUN_180165e50(local_78,&local_b8,&local_98);
  local_b8 = (undefined8 ****)pppuVar3;
  if ((undefined8 **)0xf < pppuVar3[3]) {
    local_b8 = (undefined8 ****)*pppuVar3;
  }
  local_b0 = pppuVar3[2];
  FUN_180165be0(local_58,&local_b8);
  FUN_18015c010(local_78);
  lVar9 = -1;
  lVar4 = -1;
  do {
    lVar4 = lVar4 + 1;
  } while (*(char *)(param_3 + lVar4) != '\0');
  uVar8 = 0x20 - lVar4;
  if (uVar8 < local_48) {
    local_48 = uVar8;
    ppppuVar5 = local_58;
    if (7 < local_40) {
      ppppuVar5 = local_58[0];
    }
    *(undefined2 *)((longlong)ppppuVar5 + uVar8 * 2) = 0;
  }
  if (local_48 != 0) {
    ppppuVar5 = local_58;
    if (7 < local_40) {
      ppppuVar5 = local_58[0];
    }
    if (0xd7ff < *(ushort *)((longlong)ppppuVar5 + local_48 * 2 + -2)) {
      ppppuVar5 = local_58;
      if (7 < local_40) {
        ppppuVar5 = local_58[0];
      }
      if (*(ushort *)((longlong)ppppuVar5 + local_48 * 2 + -2) < 0xdc00) {
        local_48 = local_48 - 1;
        ppppuVar5 = local_58;
        if (7 < local_40) {
          ppppuVar5 = local_58[0];
        }
        *(undefined2 *)((longlong)ppppuVar5 + local_48 * 2) = 0;
      }
    }
  }
  local_b8 = local_58;
  if (7 < local_40) {
    local_b8 = local_58[0];
  }
  local_b0 = (undefined8 **)local_48;
  uVar6 = FUN_180165d20(&local_98,&local_b8);
  do {
    lVar9 = lVar9 + 1;
  } while (*(char *)(param_3 + lVar9) != '\0');
  puVar7 = (undefined8 *)FUN_18015b2a0(uVar6,param_3,lVar9);
  *param_1 = (undefined1  [16])0x0;
  *(undefined8 *)param_1[1] = 0;
  *(undefined8 *)(param_1[1] + 8) = 0;
  uVar6 = puVar7[1];
  uVar1 = puVar7[2];
  uVar2 = puVar7[3];
  *(undefined8 *)*param_1 = *puVar7;
  *(undefined8 *)(*param_1 + 8) = uVar6;
  *(undefined8 *)param_1[1] = uVar1;
  *(undefined8 *)(param_1[1] + 8) = uVar2;
  *(undefined1 *)puVar7 = 0;
  puVar7[2] = 0;
  puVar7[3] = 0xf;
  FUN_18015c010(&local_98);
  FUN_18015b930(local_58);
}



