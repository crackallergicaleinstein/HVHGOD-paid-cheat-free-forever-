// FUN_1803c7e60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803c7e60 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1803c7e60(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  char *local_28;
  undefined8 local_20;
  
  if ((*(longlong *)*param_1 == *(longlong *)param_1[1]) && (*(char *)param_1[2] == '\0')) {
    plVar1 = (longlong *)param_1[3];
    uVar7 = (ulonglong)*(int *)param_1[4];
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar7;
    uVar4 = SUB168(ZEXT816(0x80) * auVar2,0);
    if (SUB168(ZEXT816(0x80) * auVar2,8) != 0) {
      uVar4 = 0xffffffffffffffff;
    }
    lVar5 = FUN_1805f6194(uVar4);
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else if (uVar7 != 0) {
      puVar6 = (undefined8 *)(lVar5 + 0x20);
      do {
        *(undefined1 (*) [16])(puVar6 + -4) = (undefined1  [16])0x0;
        puVar6[-2] = 0;
        puVar6[-1] = 0;
        *puVar6 = 0;
        puVar6[1] = 0;
        puVar6[2] = 0;
        puVar6[3] = 0;
        puVar6[4] = 0;
        puVar6[5] = 0;
        puVar6[6] = 0;
        puVar6[7] = 0;
        *(undefined4 *)(puVar6 + 8) = 0;
        *(undefined2 *)((longlong)puVar6 + 0x44) = 0;
        *(undefined8 *)((longlong)puVar6 + 0x46) = 0;
        *(undefined2 *)((longlong)puVar6 + 0x4e) = 0;
        puVar6[10] = 0;
        *(undefined4 *)(puVar6 + 0xb) = 0;
        puVar6 = puVar6 + 0x10;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    lVar8 = *plVar1;
    *plVar1 = lVar5;
    if (lVar8 != 0) {
      if (DAT_180c7df30 == (undefined8 *)0x0) {
        local_28 = "tier0.dll:g_pMemAlloc";
        local_20 = 0x15;
        DAT_180c7df30 = (undefined8 *)FUN_180451750(&local_28);
      }
      (**(code **)(*(longlong *)*DAT_180c7df30 + 0x18))((longlong *)*DAT_180c7df30,lVar8);
    }
    if (*(longlong *)param_1[3] == 0) {
      *(undefined1 *)param_1[2] = 1;
    }
    else {
      if (*(longlong *)*param_1 != 0) {
        FUN_18063aed0(*(longlong *)param_1[3],*(undefined8 *)param_1[5],*(longlong *)*param_1 << 7);
      }
      *(undefined8 *)param_1[5] = *(undefined8 *)param_1[3];
      *(longlong *)param_1[1] = (longlong)*(int *)param_1[4];
    }
  }
  if (*(ulonglong *)*param_1 < *(ulonglong *)param_1[1]) {
    lVar8 = *(longlong *)param_1[5] + *(ulonglong *)*param_1 * 0x80;
    lVar5 = FUN_18017ea70();
    *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + 1;
    cVar3 = FUN_1804514f0(lVar8,param_2,0x70);
    lVar5 = FUN_18017ea70();
    if (*(int *)(lVar5 + 4) != 0) {
      *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + -1;
    }
    if (cVar3 == '\0') {
      *(int *)param_1[6] = *(int *)param_1[6] + 1;
    }
    else {
      *(undefined4 *)(lVar8 + 0x78) = param_3;
      *(undefined8 *)(lVar8 + 0x70) = param_2;
      *(longlong *)*param_1 = *(longlong *)*param_1 + 1;
    }
  }
  return;
}



