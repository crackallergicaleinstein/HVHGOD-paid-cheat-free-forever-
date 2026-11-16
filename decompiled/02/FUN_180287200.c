// FUN_180287200 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180287200 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180287200(undefined8 param_1,ulonglong param_2,longlong param_3,undefined1 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  bool bVar5;
  longlong *plVar6;
  byte bVar7;
  int iVar8;
  longlong *plVar9;
  ULONGLONG UVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 uVar13;
  undefined4 uVar14;
  float fVar15;
  char cVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  longlong lStack_80;
  longlong lStack_78;
  undefined8 uStack_70;
  
  if (DAT_180cc7f78 != '\0') {
    if ((DAT_180c653f0 != '\0') && (DAT_1808f2c58 == 4)) {
      param_2 = 0;
      param_4 = &DAT_1807c5d98;
      lVar11 = 0;
      do {
        lVar12 = lVar11 + 1;
        if (*(byte *)(DAT_1808f2c50 + lVar11) != (&DAT_1807c5d98)[lVar11]) {
          param_2 = (ulonglong)
                    (-(uint)(*(byte *)(DAT_1808f2c50 + lVar11) < (byte)(&DAT_1807c5d98)[lVar11]) | 1
                    );
          break;
        }
        lVar11 = lVar12;
      } while (lVar12 != 4);
      param_3 = DAT_1808f2c50;
      if ((int)param_2 == 0) {
        return;
      }
    }
    plVar9 = (longlong *)FUN_180113860(&DAT_180b8f8b8,param_2,param_3,param_4,(undefined1  [16])0x0)
    ;
    plVar1 = DAT_180b8f8b0;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
    }
    LOCK();
    UNLOCK();
    bVar7 = (byte)DAT_180b8f8b8;
    DAT_180b8f8b8 = (longlong)plVar9;
    if ((bVar7 & 3) == 2) {
      FUN_1805fa36c(&DAT_180b8f8b8);
    }
    UVar10 = GetTickCount64();
    if (((plVar1 != (longlong *)0x0) && ((ulonglong)plVar1[2] <= UVar10)) &&
       (UVar10 - plVar1[2] < 0xfb)) {
      AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
      lStack_80 = lRam0000000180bb8898;
      lStack_78 = lRam0000000180bb88a0;
      uStack_70 = uRam0000000180bb88a8;
      cVar16 = cRam0000000180bb88b8;
      ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
      plVar6 = &lStack_78;
      if (cVar16 != '\0') {
        plVar6 = &lStack_80;
      }
      if (*plVar6 == *plVar1) {
        fVar15 = (float)(UVar10 - plVar1[2]) * 0.001;
        fVar17 = *(float *)(plVar1 + 3) - fVar15;
        fVar15 = *(float *)(plVar1 + 4) - fVar15;
        if (0.0 < fVar17) {
          uVar18 = *(undefined4 *)((longlong)plVar1 + 0x1c);
          uVar19 = *(undefined4 *)((longlong)plVar1 + 0x24);
          lVar11 = plVar1[5];
          if (*(char *)((longlong)plVar1 + 0x35) == '\0') {
            uVar14 = 0xffffffff;
          }
          else {
            uVar14 = (undefined4)plVar1[6];
          }
          uVar4 = *(undefined4 *)((longlong)plVar1 + 0x2c);
          if ((*(char *)((longlong)plVar1 + 0x34) == '\0') || (fVar15 <= 0.0)) {
            uVar13 = 0;
          }
          else {
            uVar13 = 1;
          }
          bVar5 = fVar15 <= fVar17;
          uVar3 = *(undefined1 *)((longlong)plVar1 + 0x36);
          iVar8 = FUN_1805f68d0(&DAT_1808e6940);
          if (iVar8 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1805f6d44(5);
          }
          if (DAT_1808e698c == 0x7fffffff) {
            DAT_1808e698c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
            FUN_1805f6d44(6);
          }
          DAT_1808e6907 = uStack_70._7_1_;
          if (DAT_1808e6908 == '\0') {
            DAT_1808e6908 = '\x01';
          }
          _DAT_1808e68e8 = fVar17;
          _DAT_1808e68ec = uVar18;
          _DAT_1808e68f0 = fVar15;
          _DAT_1808e68f4 = uVar19;
          _DAT_1808e68f8 = (int)lVar11;
          _DAT_1808e68fc = uVar14;
          _DAT_1808e6900 = uVar4;
          DAT_1808e6904 = uVar13;
          DAT_1808e6905 = bVar5;
          DAT_1808e6906 = uVar3;
          FUN_1805f68fc(&DAT_1808e6940);
        }
      }
    }
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar9 + 1;
      lVar11 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        iVar8 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
      }
    }
  }
  return;
}



