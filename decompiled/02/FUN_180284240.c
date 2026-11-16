// FUN_180284240 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180284240 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

bool FUN_180284240(longlong param_1,int param_2)

{
  int *piVar1;
  byte bVar2;
  undefined8 *puVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  ULONGLONG UVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined *puVar11;
  bool bVar12;
  undefined *local_48;
  undefined1 local_40 [24];
  
  if (param_2 == 1) {
    bVar12 = true;
  }
  else {
    local_40._0_16_ = (undefined1  [16])0x0;
    plVar7 = (longlong *)FUN_180113860(&DAT_180bbef58);
    puVar3 = DAT_180bbef50;
    local_40._8_8_ = plVar7;
    local_40._0_8_ = DAT_180bbef50;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    LOCK();
    UNLOCK();
    bVar2 = (byte)DAT_180bbef58;
    DAT_180bbef58 = (longlong)plVar7;
    if ((bVar2 & 3) == 2) {
      FUN_1805fa36c(&DAT_180bbef58);
    }
    if (puVar3 != (undefined8 *)0x0) {
      UVar8 = GetTickCount64();
      iVar5 = DAT_180c6529c;
      if (UVar8 - puVar3[5] < 0xfb) {
        for (plVar10 = (longlong *)*puVar3; plVar10 != (longlong *)puVar3[1]; plVar10 = plVar10 + 7)
        {
          if (*plVar10 == param_1) {
            if (((plVar10[5] != 0) && (UVar8 - plVar10[5] < 0xfb)) && ((char)plVar10[6] != '\0')) {
              if ((DAT_180c6529c == 0) && (UVar8 = GetTickCount64(), DAT_180c652a0 <= UVar8)) {
                local_48 = &DAT_1808f2500;
                iVar5 = FUN_1805f68d0(&DAT_1808f2500);
                if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_1805f6d44(5);
                }
                if (DAT_1808f254c == 0x7fffffff) {
                  DAT_1808f254c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
                  FUN_1805f6d44(6);
                }
                if ((DAT_180c6529c == 0) && (DAT_180c652a0 <= UVar8)) {
                  DAT_180c6529c = FUN_1804174b0("CEntityInstance",0xa8a45978);
                  if (DAT_180c6529c == 0) {
                    DAT_180c652a0 = UVar8 + 1000;
                  }
                  else {
                    DAT_180c652a0 = 0xffffffffffffffff;
                  }
                }
                iVar5 = DAT_180c6529c;
                FUN_1805f68fc(&DAT_1808f2500);
              }
              lVar9 = FUN_18017ea70();
              *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
              bVar12 = false;
              if (iVar5 + param_1 != 0) {
                local_48 = (undefined *)0x0;
                cVar4 = FUN_1804514f0(&local_48,iVar5 + param_1,8);
                if (cVar4 == '\0') {
                  bVar12 = false;
                }
                else {
                  bVar12 = true;
                }
              }
              puVar11 = local_48;
              lVar9 = FUN_18017ea70();
              if (*(int *)(lVar9 + 4) != 0) {
                *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
              }
              lVar9 = FUN_18017ea70();
              *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
              if (bVar12) {
                puVar11 = puVar11 + 0x10;
                if (puVar11 != (undefined *)0x0) goto LAB_180284472;
                bVar12 = false;
              }
              else {
                puVar11 = (undefined *)0x10;
LAB_180284472:
                local_48 = (undefined *)((ulonglong)local_48 & 0xffffffff00000000);
                cVar4 = FUN_1804514f0(&local_48,puVar11,4);
                if (cVar4 == '\0') {
                  bVar12 = false;
                }
                else {
                  bVar12 = true;
                }
              }
              iVar5 = (int)local_48;
              lVar9 = FUN_18017ea70();
              if (*(int *)(lVar9 + 4) != 0) {
                *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
              }
              iVar6 = -1;
              if (bVar12) {
                iVar6 = iVar5;
              }
              bVar12 = iVar6 == (int)plVar10[1];
              goto LAB_1802842f6;
            }
            break;
          }
        }
      }
    }
    bVar12 = false;
LAB_1802842f6:
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar7 + 1;
      lVar9 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7);
        }
      }
    }
  }
  return bVar12;
}



