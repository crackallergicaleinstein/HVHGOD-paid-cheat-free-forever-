// FUN_180194970 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180194970 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180194970(void)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  int *piVar7;
  longlong *plVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 local_2b8 [16];
  int *local_2a8;
  undefined1 local_298 [16];
  undefined *local_288;
  char *local_278;
  undefined8 local_270;
  undefined1 local_268 [8];
  undefined1 local_260 [448];
  undefined8 local_a0;
  longlong *plStack_98;
  undefined8 uStack_90;
  longlong *plStack_88;
  
  uVar10 = 0;
  local_298 = (undefined1  [16])0x0;
  local_2b8 = (undefined1  [16])0x0;
  local_2a8 = (int *)0x0;
  local_288 = &DAT_180b90310;
  iVar9 = FUN_1805f68d0(&DAT_180b90310);
  if (iVar9 != 0) {
LAB_180194cee:
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_180b9035c != 0x7fffffff) {
    DAT_180b907f8 = 1;
    local_268[0] = 0;
    FUN_1801a85f0(local_260);
    local_a0 = 0;
    plStack_98 = (longlong *)0x0;
    uStack_90 = 0;
    plStack_88 = (longlong *)0x0;
    FUN_180195c60(&DAT_180b90360,local_268);
    plVar8 = plStack_88;
    if (plStack_88 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_88 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plStack_88)(plStack_88);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        iVar9 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8);
        }
      }
    }
    plVar8 = plStack_98;
    if (plStack_98 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_98 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plStack_98)(plStack_98);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        iVar9 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8);
        }
      }
    }
    _eh_vector_destructor_iterator_(local_260,0xe0,2,thunk_FUN_1801ab310);
    if (DAT_180b907e8 != 0) {
      FUN_18015a2e0(&DAT_180b907f0);
      FUN_18015a450(local_2b8);
      piVar7 = local_2a8;
      piVar2 = DAT_180b907f0;
      auVar6 = _DAT_180b907e0;
      if (local_2b8._8_4_ != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_18060ab3c();
      }
      local_298 = _DAT_180b907e0;
      _DAT_180b907e0 = (undefined1  [16])0x0;
      local_2b8 = auVar6;
      DAT_180b907f0 = (int *)0x0;
      local_2a8 = piVar2;
      if (piVar7 != (int *)0x0) {
        LOCK();
        puVar3 = (uint *)(piVar7 + 1);
        uVar4 = *puVar3;
        *puVar3 = *puVar3 - 2;
        UNLOCK();
        if ((uVar4 & 0xfffffffe) == 2) {
          LOCK();
          iVar9 = *piVar7;
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            if (DAT_180c7df30 == (undefined8 *)0x0) {
              local_278 = "tier0.dll:g_pMemAlloc";
              local_270 = 0x15;
              DAT_180c7df30 = (undefined8 *)FUN_180451750(&local_278);
            }
            (**(code **)(*(longlong *)*DAT_180c7df30 + 0x18))((longlong *)*DAT_180c7df30,piVar7);
          }
        }
      }
    }
    FUN_1805f68fc(&DAT_180b90310);
    if (local_298._8_4_ != 0) {
      FUN_18015a3e0(local_2b8);
    }
    local_288 = &DAT_180b90310;
    iVar9 = FUN_1805f68d0(&DAT_180b90310);
    if (iVar9 != 0) goto LAB_180194cee;
    if (DAT_180b9035c != 0x7fffffff) {
      FUN_1801a8640(local_268);
      do {
        FUN_180195300((longlong)&DAT_180b90548 + uVar10,local_268 + uVar10);
        uVar10 = uVar10 + 0x128;
      } while (uVar10 < 0x250);
      _eh_vector_destructor_iterator_(local_268,0x128,2,FUN_1801952f0);
      FUN_1801ab230(&DAT_180b907a0);
      FUN_1805f68fc(&DAT_180b90310);
      FUN_18015a450(local_2b8);
      piVar2 = local_2a8;
      if (local_2a8 != (int *)0x0) {
        LOCK();
        puVar3 = (uint *)(local_2a8 + 1);
        uVar4 = *puVar3;
        *puVar3 = *puVar3 - 2;
        UNLOCK();
        if ((uVar4 & 0xfffffffe) == 2) {
          LOCK();
          iVar9 = *local_2a8;
          *local_2a8 = *local_2a8 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            if (DAT_180c7df30 == (undefined8 *)0x0) {
              local_298._8_8_ = 0x15;
              local_298._0_8_ = "tier0.dll:g_pMemAlloc";
              DAT_180c7df30 = (undefined8 *)FUN_180451750(local_298);
            }
            (**(code **)(*(longlong *)*DAT_180c7df30 + 0x18))((longlong *)*DAT_180c7df30,piVar2);
          }
        }
      }
      if (local_2b8._8_4_ != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_18060ab3c();
      }
      return;
    }
  }
  DAT_180b9035c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
  FUN_1805f6d44(6);
}



