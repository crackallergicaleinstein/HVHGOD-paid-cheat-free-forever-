// FUN_1806603b7 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806603b7 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined * FUN_1806603b7(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  int *piVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  puVar7 = (undefined8 *)FUN_1806065f0();
  piVar3 = (int *)*puVar7;
  if ((*piVar3 == -0x1fbcb0b3) || (*piVar3 == -0x1fbcbcae)) {
    thunk_FUN_180621380(*(undefined8 *)(param_2 + 0x98));
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(undefined4 *)(param_2 + 0x20) = 2;
    LOCK();
    DAT_1808d6088 = DAT_1808d6088 + 1;
    UNLOCK();
    *(undefined **)(param_2 + 0x30) = &DAT_1808d6090;
    *(undefined ***)(param_2 + 0x38) = &PTR_vftable_1808d6080;
    FUN_1805fca98(*(undefined8 *)(param_2 + 0x80),param_2 + 0x30);
    *(undefined4 *)(param_2 + 0x20) = 0;
    plVar4 = *(longlong **)(param_2 + 0x38);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar4 + 1;
      lVar10 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar3 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4);
        }
      }
    }
    puVar8 = (undefined *)0x1805fcf23;
  }
  else if (((*piVar3 == -0x1f928c9d) && (piVar3[6] == 4)) &&
          ((piVar3[8] == 0x19930520 ||
           (((piVar3[8] == 0x19930521 || (piVar3[8] == 0x19930522)) || (piVar3[8] == 0x1994000))))))
  {
    lVar10 = (longlong)
             *(int *)((longlong)*(int *)(*(longlong *)(piVar3 + 0xc) + 0xc) + 4 +
                     *(longlong *)(piVar3 + 0xe)) + *(longlong *)(piVar3 + 0xe);
    uVar9 = (longlong)*(int *)(lVar10 + 0x14) + 0xb0;
    if (*(ulonglong *)(param_2 + 0x28) < uVar9) {
      thunk_FUN_180621380(*(undefined8 *)(param_2 + 0x98));
      puVar7 = (undefined8 *)_malloc_base(uVar9);
      *(undefined8 **)(param_2 + 0x98) = puVar7;
      if (puVar7 == (undefined8 *)0x0) {
        *(undefined8 *)(param_2 + 0x30) = 0;
        *(undefined8 *)(param_2 + 0x38) = 0;
        *(undefined4 *)(param_2 + 0x20) = 4;
        LOCK();
        DAT_1808d6148 = DAT_1808d6148 + 1;
        UNLOCK();
        *(undefined **)(param_2 + 0x30) = &DAT_1808d6150;
        *(undefined ***)(param_2 + 0x38) = &PTR_vftable_1808d6140;
        FUN_1805fca98(*(undefined8 *)(param_2 + 0x80),param_2 + 0x30);
        *(undefined4 *)(param_2 + 0x20) = 0;
        plVar4 = *(longlong **)(param_2 + 0x38);
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar4 + 1;
          lVar10 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*plVar4)(plVar4);
            LOCK();
            piVar3 = (int *)((longlong)plVar4 + 0xc);
            iVar2 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*plVar4 + 8))(plVar4);
            }
          }
        }
        return &DAT_1805fcf33;
      }
    }
    else {
      puVar7 = *(undefined8 **)(param_2 + 0x98);
    }
    FUN_1805fd0ac(puVar7 + 0x16,*(undefined8 *)(piVar3 + 10),lVar10,*(undefined8 *)(param_2 + 0x30))
    ;
    *puVar7 = 0;
    puVar7[1] = 0;
    *(undefined4 *)(puVar7 + 1) = 1;
    *(undefined4 *)((longlong)puVar7 + 0xc) = 1;
    *puVar7 = _anon_6E02EFE5::_ExceptionPtr_normal::vftable;
    puVar7[0x15] = 0;
    *(int *)(puVar7 + 2) = *piVar3;
    *(uint *)((longlong)puVar7 + 0x14) = piVar3[1] | 1;
    puVar7[3] = 0;
    puVar7[4] = 0;
    uVar6 = piVar3[6];
    *(uint *)(puVar7 + 5) = uVar6;
    if (0xf < uVar6) {
      uVar6 = 0xf;
    }
    FUN_18063aed0(puVar7 + 6,piVar3 + 8,(ulonglong)uVar6 << 3);
    FUN_18063ab10(puVar7 + (ulonglong)uVar6 + 6,0,(ulonglong)(0xf - uVar6) << 3);
    puVar7[7] = puVar7 + 0x16;
    puVar5 = *(undefined8 **)(param_2 + 0x80);
    *puVar5 = puVar7 + 2;
    puVar5[1] = puVar7;
    puVar8 = &DAT_1805fcf35;
  }
  else {
    FUN_1805fcf3c(*(undefined8 *)(param_2 + 0x80),piVar3,*(undefined8 *)(param_2 + 0x98));
    puVar8 = &DAT_1805fcf39;
  }
  return puVar8;
}



