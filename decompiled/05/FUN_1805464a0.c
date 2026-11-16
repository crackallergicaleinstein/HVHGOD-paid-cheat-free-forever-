// FUN_1805464a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805464a0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1805464a0(void)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  short sVar5;
  int *piVar6;
  int *piVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined2 local_ad8 [2];
  undefined4 local_ad4;
  undefined8 local_ad0;
  undefined8 uStack_ac8;
  undefined8 uStack_ac0;
  undefined8 uStack_ab8;
  undefined1 local_ab0 [16];
  undefined8 local_aa0;
  undefined1 local_a80;
  undefined1 local_a68 [8];
  undefined8 local_a60;
  char local_a50;
  undefined8 local_a20;
  undefined8 local_9e0;
  undefined8 local_9a0;
  undefined8 local_960;
  undefined8 local_920;
  undefined8 local_8e0;
  undefined8 local_8a0;
  undefined8 local_860;
  undefined8 local_820;
  undefined8 local_7e0;
  undefined8 local_7a0;
  undefined8 local_760;
  undefined8 local_720;
  undefined8 local_6e0;
  undefined8 local_6a0;
  undefined8 local_660;
  undefined8 local_620;
  undefined8 local_5e0;
  undefined8 local_5a0;
  undefined8 local_560;
  undefined8 local_520;
  undefined8 local_4e0;
  undefined8 local_4a0;
  undefined8 local_460;
  undefined8 local_420;
  undefined8 local_3e0;
  undefined8 local_3a0;
  undefined8 local_360;
  undefined8 local_320;
  undefined8 local_2e0;
  undefined8 local_2a0;
  undefined8 local_260;
  undefined8 local_220;
  undefined8 local_1e0;
  undefined8 local_1a0;
  undefined8 local_160;
  undefined8 local_120;
  undefined8 local_e0;
  undefined8 local_a0;
  undefined8 local_60;
  undefined8 local_20;
  
  iVar3 = FUN_1805f68d0(&DAT_1808e6940);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_1808e698c == 0x7fffffff) {
    DAT_1808e698c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  if (DAT_180c62ff0 != 0) {
    DAT_180bb8ae8 = DAT_180c62ff0;
    if (DAT_180bda4dc != 0) {
      FUN_18050c9f0(0);
    }
    local_ad8[0] = 0;
    local_ad4 = 0x3f800000;
    local_ad0 = 0;
    uStack_ac8 = 0;
    uStack_ac0 = 0;
    uStack_ab8 = 0;
    local_ab0 = (undefined1  [16])0x0;
    local_a80 = 0;
    local_a50 = '\0';
    FUN_1805449d0();
    if (local_a50 != '\0') {
      FUN_180159650(local_a68);
    }
    FUN_1801b3620(&uStack_ab8);
    FUN_1801b3410(&local_ad0);
    DAT_180c62f48 = 0;
    DAT_180c62fe0 = 0;
    DAT_1808e4f84 = 0xffffffff;
    DAT_180bbecdf = 0;
    DAT_180bbecde = 0;
    lVar4 = FUN_180439770();
    *(undefined8 *)(lVar4 + 0x420) = 0;
    DAT_180c62c80 = 0;
    DAT_180c62c88 = 0;
    FUN_180509100();
    lVar4 = DAT_180bb8ae8;
    if (DAT_180bb8ae8 == 0) {
      plVar8 = (longlong *)0x0;
    }
    else {
      plVar8 = *(longlong **)(DAT_180bb8ae8 + 0xd0);
    }
    FUN_180508390();
    if ((longlong *)plVar8[2] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar8[2] + 0x10))();
    }
    if ((longlong *)*plVar8 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar8 + 0x10))();
    }
    if ((longlong *)plVar8[1] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar8[1] + 0x10))();
    }
    *(undefined8 *)(lVar4 + 0xc0) = 0;
    *(undefined8 *)(lVar4 + 0xd0) = 0;
    *(uint *)(lVar4 + 0x2c) = *(uint *)(lVar4 + 0x2c) & 0xffffffe7;
    *(undefined8 *)(lVar4 + 0xc38) = 0;
    *(undefined8 *)(lVar4 + 0xc40) = 0;
    *(undefined8 *)(lVar4 + 0xc60) = 0;
    *(undefined8 *)(lVar4 + 0xc58) = 0;
    *(undefined8 *)(lVar4 + 0xc50) = 0;
    *(undefined8 *)(lVar4 + 0xc48) = 0;
    lVar4 = DAT_180bb8ae8;
    if (DAT_180bb8ae8 != 0) {
      piVar7 = (int *)(DAT_180bb8ae8 + 4);
      piVar6 = (int *)(DAT_180bb8ae8 + 0x2998 + (longlong)*(short *)(DAT_180bb8ae8 + 0x2994) * 8);
      if (*piVar6 != *piVar7) {
        iVar3 = *(short *)(DAT_180bb8ae8 + 0x2994) + 1;
        sVar5 = (short)iVar3 + (short)(iVar3 / 6) * -6;
        *(short *)(DAT_180bb8ae8 + 0x2994) = sVar5;
        piVar6 = (int *)(lVar4 + ((longlong)sVar5 + 0x533) * 8);
        *piVar6 = *piVar7;
        piVar6[1] = 0;
      }
      *(short *)((longlong)piVar6 + 6) = *(short *)((longlong)piVar6 + 6) + 1;
      piVar7 = (int *)(lVar4 + 0x2990);
      *piVar7 = *piVar7 + 1;
    }
    thunk_FUN_180621380(plVar8);
    lVar4 = DAT_180bb8ae8;
    if (DAT_180bb8ae8 == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = *(longlong *)(DAT_180bb8ae8 + 200);
    }
    puVar1 = (undefined8 *)(DAT_180bb8ae8 + 0xbf8);
    if (*(HMODULE *)(lVar9 + 0x48) != (HMODULE)0x0) {
      FreeLibrary(*(HMODULE *)(lVar9 + 0x48));
    }
    lVar2 = DAT_180bb8ae8;
    *(undefined8 *)(lVar4 + 0xb8) = 0;
    *(undefined8 *)(lVar4 + 200) = 0;
    *(uint *)(lVar4 + 0x2c) = *(uint *)(lVar4 + 0x2c) & 0xfffffff8;
    *(undefined8 *)(lVar4 + 0xc08) = 0;
    *(undefined8 *)(lVar4 + 0xc18) = 0;
    *(undefined8 *)(lVar4 + 0xc28) = 0;
    *puVar1 = FUN_1804cefa0;
    *(code **)(lVar4 + 0xc00) = FUN_1804cf0f0;
    *(code **)(lVar4 + 0xc10) = FUN_1804cf1c0;
    *(code **)(lVar4 + 0xc20) = FUN_1804cf300;
    if (lVar2 != 0) {
      piVar7 = (int *)(lVar2 + ((longlong)*(short *)(lVar2 + 0x2994) + 0x533) * 8);
      if (*piVar7 != *(int *)(lVar2 + 4)) {
        iVar3 = *(short *)(lVar2 + 0x2994) + 1;
        sVar5 = (short)iVar3 + (short)(iVar3 / 6) * -6;
        *(short *)(lVar2 + 0x2994) = sVar5;
        piVar7 = (int *)(lVar2 + ((longlong)sVar5 + 0x533) * 8);
        *piVar7 = *(int *)(lVar2 + 4);
        piVar7[1] = 0;
      }
      *(short *)((longlong)piVar7 + 6) = *(short *)((longlong)piVar7 + 6) + 1;
      *(int *)(lVar2 + 0x2990) = *(int *)(lVar2 + 0x2990) + 1;
    }
    uVar10 = thunk_FUN_180621380(lVar9);
    lVar4 = DAT_180c62f50;
    if (DAT_180c62f50 != 0) {
      uVar10 = FUN_18047e140(DAT_180c62f50);
      lVar4 = DAT_180c62f50;
    }
    DAT_180c62f50 = 0;
    if (lVar4 != 0) {
      uVar10 = FUN_18056d8e0();
    }
    if (DAT_180c62f40 != 0) {
      uVar10 = (**(code **)(*(longlong *)DAT_180c62f40 + 0x10))();
      DAT_180c62f40 = 0;
    }
    if (DAT_180cd6478 != (undefined *)0x0) {
      uVar10 = (**(code **)(*(longlong *)DAT_180cd6478 + 0x20))
                         (DAT_180cd6478,DAT_180cd6478 != &DAT_180cd6440);
      DAT_180cd6478 = (undefined *)0x0;
    }
    if (DAT_180cd6f78 != (undefined *)0x0) {
      uVar10 = (**(code **)(*(longlong *)DAT_180cd6f78 + 0x20))
                         (DAT_180cd6f78,DAT_180cd6f78 != &DAT_180cd6f40);
      DAT_180cd6f78 = (undefined *)0x0;
    }
    local_aa0 = 0;
    local_a60 = 0;
    local_a20 = 0;
    local_9e0 = 0;
    local_9a0 = 0;
    local_960 = 0;
    local_920 = 0;
    local_8e0 = 0;
    local_8a0 = 0;
    local_860 = 0;
    local_820 = 0;
    local_7e0 = 0;
    local_7a0 = 0;
    local_760 = 0;
    local_720 = 0;
    local_6e0 = 0;
    local_6a0 = 0;
    local_660 = 0;
    local_620 = 0;
    local_5e0 = 0;
    local_5a0 = 0;
    local_560 = 0;
    local_520 = 0;
    local_4e0 = 0;
    local_4a0 = 0;
    local_460 = 0;
    local_420 = 0;
    local_3e0 = 0;
    local_3a0 = 0;
    local_360 = 0;
    local_320 = 0;
    local_2e0 = 0;
    local_2a0 = 0;
    local_260 = 0;
    local_220 = 0;
    local_1e0 = 0;
    local_1a0 = 0;
    local_160 = 0;
    local_120 = 0;
    local_e0 = 0;
    local_a0 = 0;
    local_60 = 0;
    local_20 = 0;
    FUN_180546aa0(uVar10,local_ad8);
    FUN_1804558c0(local_ad8);
    lVar4 = DAT_180bb8ae8;
    lVar9 = DAT_180bb8ae8;
    if (DAT_180c62ff0 != 0) {
      lVar9 = DAT_180c62ff0;
    }
    DAT_180bb8ae8 = lVar9;
    FUN_1804b6340();
    DAT_180bb8ae8 = 0;
    if (lVar4 != lVar9) {
      DAT_180bb8ae8 = lVar4;
    }
    if (lVar9 != 0) {
      FUN_1804b5b20(lVar9);
      lVar4 = DAT_180bb8ae8;
      if (DAT_180bb8ae8 != 0) {
        piVar7 = (int *)(DAT_180bb8ae8 + 4);
        piVar6 = (int *)(DAT_180bb8ae8 + 0x2998 + (longlong)*(short *)(DAT_180bb8ae8 + 0x2994) * 8);
        if (*piVar6 != *piVar7) {
          iVar3 = *(short *)(DAT_180bb8ae8 + 0x2994) + 1;
          sVar5 = (short)iVar3 + (short)(iVar3 / 6) * -6;
          *(short *)(DAT_180bb8ae8 + 0x2994) = sVar5;
          piVar6 = (int *)(lVar4 + ((longlong)sVar5 + 0x533) * 8);
          *piVar6 = *piVar7;
          piVar6[1] = 0;
        }
        *(short *)((longlong)piVar6 + 6) = *(short *)((longlong)piVar6 + 6) + 1;
        piVar7 = (int *)(lVar4 + 0x2990);
        *piVar7 = *piVar7 + 1;
      }
      thunk_FUN_180621380(lVar9);
    }
    DAT_180c62ff0 = 0;
    DAT_180bbef4b = 0;
  }
  FUN_1805f68fc(&DAT_1808e6940);
  return;
}



