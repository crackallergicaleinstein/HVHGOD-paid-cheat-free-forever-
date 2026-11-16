// FUN_180196ee0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180196ee0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180196ee0(void)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  int *piVar6;
  int iVar7;
  undefined1 local_48 [16];
  int *local_38;
  undefined1 local_28 [16];
  char *local_18;
  undefined8 local_10;
  
  local_28 = (undefined1  [16])0x0;
  local_48 = (undefined1  [16])0x0;
  local_38 = (int *)0x0;
  iVar7 = FUN_1805f68d0(&DAT_1808da778);
  if (iVar7 != 0) {
LAB_18019713e:
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_1808da7c4 != 0x7fffffff) {
    DAT_1808da7f0 = 1;
    if (DAT_1808da7e0 != 0) {
      FUN_18015a2e0(&DAT_1808da7e8);
      FUN_18015a450(local_48);
      piVar6 = local_38;
      piVar2 = DAT_1808da7e8;
      auVar5 = _DAT_1808da7d8;
      if (local_48._8_4_ != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_18060ab3c();
      }
      local_28 = _DAT_1808da7d8;
      _DAT_1808da7d8 = (undefined1  [16])0x0;
      local_48 = auVar5;
      DAT_1808da7e8 = (int *)0x0;
      local_38 = piVar2;
      if (piVar6 != (int *)0x0) {
        LOCK();
        puVar1 = (uint *)(piVar6 + 1);
        uVar3 = *puVar1;
        *puVar1 = *puVar1 - 2;
        UNLOCK();
        if ((uVar3 & 0xfffffffe) == 2) {
          LOCK();
          iVar7 = *piVar6;
          *piVar6 = *piVar6 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            if (DAT_180c7df30 == (undefined8 *)0x0) {
              local_18 = "tier0.dll:g_pMemAlloc";
              local_10 = 0x15;
              DAT_180c7df30 = (undefined8 *)FUN_180451750(&local_18);
            }
            (**(code **)(*(longlong *)*DAT_180c7df30 + 0x18))((longlong *)*DAT_180c7df30,piVar6);
          }
        }
      }
    }
    FUN_1805f68fc(&DAT_1808da778);
    if (local_28._8_4_ != 0) {
      FUN_18015a3e0(local_48);
    }
    iVar7 = FUN_1805f68d0(&DAT_1808da778);
    lVar4 = DAT_1808da7d0;
    if (iVar7 != 0) goto LAB_18019713e;
    if (DAT_1808da7c4 != 0x7fffffff) {
      DAT_1808da7c8 = 0;
      DAT_1808da7d0 = 0;
      if (lVar4 != 0) {
        LOCK();
        piVar2 = (int *)(lVar4 + 8);
        iVar7 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (*(code *)**(undefined8 **)lVar4)(lVar4);
          LOCK();
          piVar2 = (int *)(lVar4 + 0xc);
          iVar7 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*(longlong *)lVar4 + 8))(lVar4);
          }
        }
      }
      FUN_1805f68fc(&DAT_1808da778);
      FUN_18015a450(local_48);
      piVar2 = local_38;
      if (local_38 != (int *)0x0) {
        LOCK();
        puVar1 = (uint *)(local_38 + 1);
        uVar3 = *puVar1;
        *puVar1 = *puVar1 - 2;
        UNLOCK();
        if ((uVar3 & 0xfffffffe) == 2) {
          LOCK();
          iVar7 = *local_38;
          *local_38 = *local_38 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            if (DAT_180c7df30 == (undefined8 *)0x0) {
              local_28._8_8_ = 0x15;
              local_28._0_8_ = "tier0.dll:g_pMemAlloc";
              DAT_180c7df30 = (undefined8 *)FUN_180451750(local_28);
            }
            (**(code **)(*(longlong *)*DAT_180c7df30 + 0x18))((longlong *)*DAT_180c7df30,piVar2);
          }
        }
      }
      if (local_48._8_4_ != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_18060ab3c();
      }
      return;
    }
  }
  DAT_1808da7c4 = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
  FUN_1805f6d44(6);
}



