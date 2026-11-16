// FUN_180419860 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180419860 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_180419860(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  ULONGLONG UVar6;
  longlong lVar7;
  code *pcVar8;
  ulonglong uVar9;
  undefined8 local_118;
  undefined4 local_110;
  undefined *local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined *local_f0;
  undefined1 *local_e8;
  longlong local_e0;
  char *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  local_c8 = *param_5;
  uStack_c0 = param_5[1];
  uStack_b8 = param_5[2];
  uStack_b0 = param_5[3];
  local_a8 = param_5[4];
  uStack_a0 = param_5[5];
  uStack_98 = param_5[6];
  uStack_90 = param_5[7];
  local_f8 = param_5[8];
  local_f0 = (undefined *)*param_4;
  uVar2 = *(undefined4 *)(param_4 + 1);
  local_118 = *param_3;
  uVar3 = *(undefined4 *)(param_3 + 1);
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  lVar7 = DAT_1809c0d00;
  lVar4 = DAT_1808da460;
  if ((DAT_1809c0d00 == DAT_1808da460) && (pcVar8 = (code *)DAT_180c7d7d0, DAT_180c7d7d0 != 0))
  goto LAB_180419a3a;
  UVar6 = GetTickCount64();
  if ((lVar7 == lVar4) && (UVar6 < DAT_180c7d7b8)) {
    return;
  }
  local_108 = &DAT_1809c0d10;
  iVar5 = FUN_1805f68d0(&DAT_1809c0d10);
  if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_1809c0d5c == 0x7fffffff) {
    DAT_1809c0d5c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  uVar9 = 1000;
  if (DAT_1809c0d00 == lVar4) {
    if ((DAT_180c7d7d0 == 0) && (DAT_180c7d7b8 <= UVar6)) goto LAB_180419992;
  }
  else {
    DAT_1809c0d08 = 1000;
LAB_180419992:
    lVar7 = -1;
    do {
      local_e0 = lVar7 + 1;
      pcVar1 = "lient.dll:48895C24??48896C24??48897424??57415641574883EC40F20F10024D8D7108" + lVar7;
      lVar7 = local_e0;
    } while (*pcVar1 != '\0');
    local_e8 = &DAT_180824ce0;
    local_d8 = "patterns::trace_bullet_data_init";
    local_d0 = 0x20;
    DAT_180c7d7d0 = FUN_1800e5d20(&local_d8,&local_e8);
    DAT_1809c0d00 = lVar4;
    DAT_180c7d7b8 = 0xffffffffffffffff;
    if (DAT_180c7d7d0 == 0) {
      DAT_180c7d7b8 = DAT_1809c0d08 + UVar6;
      uVar9 = 60000;
      if (DAT_1809c0d08 < 60000) {
        uVar9 = DAT_1809c0d08 * 2;
      }
    }
    DAT_1809c0d08 = uVar9;
  }
  pcVar8 = (code *)DAT_180c7d7d0;
  FUN_1805f68fc(&DAT_1809c0d10);
  if (pcVar8 == (code *)0x0) {
    return;
  }
LAB_180419a3a:
  local_88 = local_c8;
  uStack_80 = uStack_c0;
  uStack_78 = uStack_b8;
  uStack_70 = uStack_b0;
  local_68 = local_a8;
  uStack_60 = uStack_a0;
  uStack_58 = uStack_98;
  uStack_50 = uStack_90;
  local_48 = local_f8;
  local_108 = local_f0;
  local_110 = uVar3;
  local_100 = uVar2;
  (*pcVar8)(param_2,&local_118,&local_108,&local_88,4,1);
  return;
}



