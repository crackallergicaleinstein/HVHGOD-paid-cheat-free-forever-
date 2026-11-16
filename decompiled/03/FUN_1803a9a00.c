// FUN_1803a9a00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803a9a00 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_1803a9a00(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  float fVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  double dVar8;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  uint uStack_34;
  longlong local_30;
  longlong lStack_28;
  undefined8 local_20;
  
  LOCK();
  DAT_180c64050 = DAT_180c64050 + 1;
  UNLOCK();
  if (((DAT_1808d9bda == '\0') && (DAT_1808d9bd8 == '\x03')) && (DAT_1808d9bd9 == '\0')) {
    FUN_1803703c0();
    fVar3 = DAT_180902d7c;
    uVar4 = DAT_180902d78;
    if ((param_2 != 0) && (DAT_180902d70 == param_2)) {
      dVar8 = (double)FUN_1806159d0(0x3ff0000000000000,(int)(char)(DAT_180902d78 >> 0x18));
      fVar3 = (float)dVar8 * fVar3 * 0.003921569;
      local_48 = CONCAT44((float)(uVar4 >> 8 & 0xff) * fVar3,(float)(uVar4 & 0xff) * fVar3);
      uStack_40 = CONCAT44(uStack_40._4_4_,(float)(uVar4 >> 0x10 & 0xff) * fVar3);
      if (param_2 + 0xe4 != 0) {
        lVar5 = FUN_18017ea70();
        *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + 1;
        FUN_18022ffa0(param_2 + 0xe4,&local_48);
        lVar5 = FUN_18017ea70();
        if (*(int *)(lVar5 + 4) != 0) {
          *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + -1;
        }
      }
    }
    if (DAT_180c70570 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = (*(code *)DAT_180c70570)(param_1,param_2,param_3);
    }
    lVar5 = FUN_180370680();
    if (*(int *)(lVar5 + 0x180) != 0) {
      uVar4 = *(int *)(lVar5 + 0x180) - 1;
      uVar7 = (ulonglong)uVar4;
      *(uint *)(lVar5 + 0x180) = uVar4;
      if (uVar4 < 0x10) {
        plVar1 = (longlong *)(lVar5 + uVar7 * 0x18);
        local_30 = *plVar1;
        lStack_28 = plVar1[1];
        local_20 = *(undefined8 *)(lVar5 + 0x10 + uVar7 * 0x18);
        local_48 = 0;
        uStack_40 = 0;
        local_38 = 0;
        uStack_34 = uStack_34 & 0xffffff00;
        puVar2 = (undefined8 *)(lVar5 + uVar7 * 0x18);
        *puVar2 = 0;
        puVar2[1] = 0;
        *(ulonglong *)(lVar5 + 0x10 + uVar7 * 0x18) = (ulonglong)uStack_34 << 0x20;
        if ((((char)((ulonglong)local_20 >> 0x20) != '\0') && (local_30 == param_2)) &&
           (param_2 + 0xe4 != 0)) {
          lVar5 = FUN_18017ea70();
          *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + 1;
          FUN_18022ffa0(param_2 + 0xe4,&lStack_28);
          lVar5 = FUN_18017ea70();
          if (*(int *)(lVar5 + 4) != 0) {
            *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + -1;
          }
        }
      }
    }
  }
  else if (DAT_180c70570 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = (*(code *)DAT_180c70570)();
  }
  LOCK();
  DAT_180c64050 = DAT_180c64050 + -1;
  UNLOCK();
  return uVar6;
}



