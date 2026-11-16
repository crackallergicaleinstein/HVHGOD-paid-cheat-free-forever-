// FUN_1804e67c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804e67c0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1804e67c0(longlong param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  short sVar3;
  int iVar4;
  int *piVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  char *pcVar9;
  
  lVar2 = *(longlong *)(param_1 + 0xa0);
  if ((DAT_180bb8ae8 != 0) && ((*(uint *)(DAT_180bb8ae8 + 0x28cc) & 0x100) != 0)) {
    if (*(int *)(param_2 + 4) == 0) {
      pcVar9 = "<unknown>";
    }
    else {
      pcVar9 = *(char **)param_2[5];
    }
    FUN_1804cf3e0("[font] Discard baked %.2f for \"%s\"\n",(double)*(float *)(param_3 + 0x14),pcVar9
                 );
  }
  lVar8 = *(longlong *)(param_3 + 0x38);
  lVar6 = (longlong)*(int *)(param_3 + 0x30) * 0x2c + lVar8;
  for (; lVar8 != lVar6; lVar8 = lVar8 + 0x2c) {
    if (*(int *)(lVar8 + 0x28) != -1) {
      FUN_1804e7e60(param_1);
    }
  }
  plVar7 = (longlong *)param_2[5];
  lVar8 = *(longlong *)(param_3 + 0x60);
  plVar1 = plVar7 + *(int *)(param_2 + 4);
  lVar6 = DAT_180bb8ae8;
  for (; DAT_180bb8ae8 = lVar6, plVar7 != plVar1; plVar7 = plVar7 + 1) {
    lVar6 = *(longlong *)(*plVar7 + 0x88);
    if (lVar6 == 0) {
      lVar6 = *(longlong *)(param_1 + 0xa8);
    }
    if (*(code **)(lVar6 + 0x40) != (code *)0x0) {
      (**(code **)(lVar6 + 0x40))(param_1,*plVar7,param_3,lVar8);
    }
    lVar8 = lVar8 + *(longlong *)(lVar6 + 0x50);
    lVar6 = DAT_180bb8ae8;
  }
  lVar8 = *(longlong *)(param_3 + 0x60);
  if (lVar8 != 0) {
    if (lVar6 != 0) {
      piVar5 = (int *)(lVar6 + 0x2998 + (longlong)*(short *)(lVar6 + 0x2994) * 8);
      if (*piVar5 != *(int *)(lVar6 + 4)) {
        iVar4 = *(short *)(lVar6 + 0x2994) + 1;
        sVar3 = (short)iVar4 + (short)(iVar4 / 6) * -6;
        *(short *)(lVar6 + 0x2994) = sVar3;
        piVar5 = (int *)(lVar6 + ((longlong)sVar3 + 0x533) * 8);
        *piVar5 = *(int *)(lVar6 + 4);
        piVar5[1] = 0;
      }
      *(short *)((longlong)piVar5 + 6) = *(short *)((longlong)piVar5 + 6) + 1;
      *(int *)(lVar6 + 0x2990) = *(int *)(lVar6 + 0x2990) + 1;
    }
    thunk_FUN_180621380(lVar8);
    *(undefined8 *)(param_3 + 0x60) = 0;
  }
  FUN_1804b17b0(lVar2 + 0xd8,*(undefined4 *)(param_3 + 0x54),0);
  piVar5 = (int *)(lVar2 + 0xe8);
  *piVar5 = *piVar5 + 1;
  *(undefined4 *)(param_3 + 0x10) = 0;
  lVar8 = DAT_180bb8ae8;
  lVar2 = *(longlong *)(param_3 + 0x38);
  if (lVar2 != 0) {
    *(undefined8 *)(param_3 + 0x30) = 0;
    if (lVar8 != 0) {
      piVar5 = (int *)(lVar8 + 0x2998 + (longlong)*(short *)(lVar8 + 0x2994) * 8);
      if (*piVar5 != *(int *)(lVar8 + 4)) {
        iVar4 = *(short *)(lVar8 + 0x2994) + 1;
        sVar3 = (short)iVar4 + (short)(iVar4 / 6) * -6;
        *(short *)(lVar8 + 0x2994) = sVar3;
        piVar5 = (int *)(lVar8 + ((longlong)sVar3 + 0x533) * 8);
        *piVar5 = *(int *)(lVar8 + 4);
        piVar5[1] = 0;
      }
      *(short *)((longlong)piVar5 + 6) = *(short *)((longlong)piVar5 + 6) + 1;
      *(int *)(lVar8 + 0x2990) = *(int *)(lVar8 + 0x2990) + 1;
    }
    thunk_FUN_180621380(lVar2);
    *(undefined8 *)(param_3 + 0x38) = 0;
  }
  FUN_1804aeee0(param_3);
  FUN_1804aeee0(param_3 + 0x20);
  *(uint *)(param_3 + 0x4c) = *(uint *)(param_3 + 0x4c) & 0xfc000000;
  *(uint *)(param_3 + 0x4c) = *(uint *)(param_3 + 0x4c) | 0x4000000;
  *(undefined4 *)(param_3 + 0x40) = 0xffffffff;
  *(undefined8 *)(param_3 + 0x44) = 0;
  *param_2 = 0;
  return;
}



