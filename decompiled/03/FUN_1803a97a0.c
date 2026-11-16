// FUN_1803a97a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803a97a0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1803a97a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4,
                  undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  uint uVar4;
  undefined *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined *puVar9;
  uint uStack_44;
  longlong lStack_38;
  longlong lStack_30;
  longlong lStack_28;
  undefined8 local_20;
  
  LOCK();
  DAT_180c64050 = DAT_180c64050 + 1;
  UNLOCK();
  if (((DAT_1808d9bda == '\0') && (DAT_1808d9bd8 == '\x03')) && (DAT_1808d9bd9 == '\0')) {
    FUN_18036d9c0(param_1,param_3,param_4 & 0xffffffff);
    if (DAT_180c705d0 != 0) {
      (*(code *)DAT_180c705d0)
                (param_1,param_2,param_3,param_4 & 0xffffffff,param_5,param_6,param_7,param_8);
    }
    puVar5 = (undefined *)FUN_18036f390();
    puVar9 = &DAT_180bda1f0;
    if (puVar5 != (undefined *)0x0) {
      puVar9 = puVar5;
    }
    if (*(int *)(puVar9 + 0x140) != 0) {
      uVar4 = *(int *)(puVar9 + 0x140) - 1;
      uVar6 = (ulonglong)uVar4;
      *(uint *)(puVar9 + 0x140) = uVar4;
      if (uVar4 < 8) {
        plVar1 = (longlong *)(puVar9 + uVar6 * 0x28);
        lVar8 = *plVar1;
        lStack_38 = plVar1[1];
        lVar3 = plVar1[2];
        lStack_28 = plVar1[3];
        local_20 = *(undefined8 *)(puVar9 + uVar6 * 0x28 + 0x20);
        uStack_44 = uStack_44 & 0xffffff00;
        puVar2 = (undefined8 *)(puVar9 + uVar6 * 0x28);
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
        *(ulonglong *)(puVar9 + uVar6 * 0x28 + 0x20) = (ulonglong)uStack_44 << 0x20;
        lStack_30 = lVar3;
        if ((lVar8 != 0) && (lStack_38 != 0)) {
          lVar7 = FUN_18017ea70();
          *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
          FUN_1801fde60(lVar8,&lStack_38);
          lVar8 = FUN_18017ea70();
          if (*(int *)(lVar8 + 4) != 0) {
            *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
          }
        }
        if (((local_20._4_1_ != '\0') && (lVar3 != 0)) && (lVar3 + 0xe8 != 0)) {
          lVar8 = FUN_18017ea70();
          *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
          FUN_18022ffa0(lVar3 + 0xe8,&lStack_28);
          lVar8 = FUN_18017ea70();
          if (*(int *)(lVar8 + 4) != 0) {
            *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
          }
        }
      }
    }
  }
  else if (DAT_180c705d0 != 0) {
    (*(code *)DAT_180c705d0)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  LOCK();
  DAT_180c64050 = DAT_180c64050 + -1;
  UNLOCK();
  return;
}



