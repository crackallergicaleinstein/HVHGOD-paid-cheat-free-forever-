// FUN_180454f00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180454f00 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180454f00(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 ****ppppuVar5;
  longlong lVar6;
  longlong lVar7;
  code *pcVar8;
  undefined8 extraout_XMM0_Qa;
  undefined1 auStack_c8 [32];
  longlong *local_a8 [2];
  char *local_98;
  undefined8 local_90;
  undefined *local_88;
  longlong *local_80;
  undefined8 ***local_78;
  longlong lStack_70;
  undefined1 auStack_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [8];
  undefined8 ****appppuStack_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_1808d5f00 ^ (ulonglong)auStack_c8;
  local_88 = &DAT_1808e4f30;
  local_a8[0] = param_1;
  local_80 = param_2;
  iVar2 = FUN_1805f68d0(&DAT_1808e4f30);
  puVar1 = DAT_180c62c40;
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_1808e4f7c == 0x7fffffff) {
    DAT_1808e4f7c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  if (DAT_180bbec8f == '\0') {
    uVar3 = FUN_180455230(DAT_180c62c38,DAT_180c62c40);
    FUN_1804556e0(extraout_XMM0_Qa,local_a8,uVar3,puVar1);
    if (DAT_180c7df28 == (undefined8 *)0x0) {
      local_98 = "tier0.dll:g_pMemAlloc";
      local_90 = 0x15;
      DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_98);
    }
    plVar4 = (longlong *)
             (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x90);
    if (plVar4 == (longlong *)0x0) {
      *param_1 = 0;
      FUN_1805f68fc(&DAT_1808e4f30);
      plVar4 = (longlong *)param_2[7];
      if (plVar4 == (longlong *)0x0) {
      }
      pcVar8 = *(code **)(*plVar4 + 0x20);
      goto LAB_180455176;
    }
    *(undefined8 *)((longlong)plVar4 + 0xc) = 0;
    *(undefined8 *)((longlong)plVar4 + 0x14) = 0;
    *(undefined8 *)((longlong)plVar4 + 0x1c) = 0;
    *(undefined8 *)((longlong)plVar4 + 0x24) = 0;
    *(undefined8 *)((longlong)plVar4 + 0x2c) = 0;
    *(undefined8 *)((longlong)plVar4 + 0x34) = 0;
    *(undefined8 *)((longlong)plVar4 + 0x3c) = 0;
    *(undefined8 *)((longlong)plVar4 + 0x44) = 0;
    *(undefined8 *)((longlong)plVar4 + 0x4c) = 0;
    *(undefined8 *)((longlong)plVar4 + 0x54) = 0;
    *(undefined8 *)((longlong)plVar4 + 0x5c) = 0;
    *(undefined8 *)((longlong)plVar4 + 100) = 0;
    *(undefined8 *)((longlong)plVar4 + 0x6c) = 0;
    *(undefined8 *)((longlong)plVar4 + 0x74) = 0;
    *(undefined8 *)((longlong)plVar4 + 0x7c) = 0;
    *(undefined8 *)((longlong)plVar4 + 0x84) = 0;
    *(undefined4 *)((longlong)plVar4 + 0x8c) = 0;
    *plVar4 = DAT_180c7dfb8;
    *(undefined4 *)(plVar4 + 1) = 1;
    *(undefined4 *)(plVar4 + 2) = 4;
    *(undefined1 *)((longlong)plVar4 + 0x15) = 1;
    local_78 = (undefined8 ***)0x0;
    lStack_70 = 0;
    auStack_68 = (undefined1  [16])0x0;
    local_58 = (undefined1  [16])0x0;
    _local_48 = (undefined1  [16])0x0;
    FUN_1801d9a70(&local_78,param_2);
    if (appppuStack_40[0] != (undefined8 ****)0x0) {
      ppppuVar5 = appppuStack_40[0];
      if ((&local_78 <= appppuStack_40[0]) && (appppuStack_40[0] < appppuStack_40)) {
        ppppuVar5 = (undefined8 ****)
                    (((longlong)appppuStack_40[0] - (longlong)&local_78) + (longlong)(plVar4 + 10));
      }
      plVar4[10] = (longlong)local_78;
      plVar4[0xb] = lStack_70;
      plVar4[0xc] = auStack_68._0_8_;
      plVar4[0xd] = auStack_68._8_8_;
      plVar4[0xe] = local_58._0_8_;
      plVar4[0xf] = local_58._8_8_;
      plVar4[0x10] = (longlong)local_48;
      plVar4[0x11] = (longlong)ppppuVar5;
    }
    local_a8[0] = plVar4;
    if (DAT_180c62c40 == DAT_180c62c48) {
      FUN_1804553d0();
    }
    else {
      *DAT_180c62c40 = plVar4;
      lVar6 = FUN_18017ea70();
      *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
      FUN_1804551e0(&local_98,plVar4,1);
      lVar6 = FUN_18017ea70();
      if (*(int *)(lVar6 + 4) != 0) {
        *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
      }
      DAT_180c62c40 = DAT_180c62c40 + 1;
    }
    lVar6 = DAT_180c7dfc0;
    if (DAT_180c7dfc0 != 0) {
      lVar7 = FUN_18017ea70();
      *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
      FUN_180298220(lVar6,0x10,plVar4);
      lVar6 = FUN_18017ea70();
      if (*(int *)(lVar6 + 4) != 0) {
        *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
      }
    }
    *param_1 = (longlong)plVar4;
  }
  else {
    *param_1 = 0;
  }
  FUN_1805f68fc(&DAT_1808e4f30);
  plVar4 = (longlong *)param_2[7];
  if (plVar4 == (longlong *)0x0) {
  }
  pcVar8 = *(code **)(*plVar4 + 0x20);
LAB_180455176:
  (*pcVar8)(plVar4,plVar4 != param_2);
  param_2[7] = 0;
}



