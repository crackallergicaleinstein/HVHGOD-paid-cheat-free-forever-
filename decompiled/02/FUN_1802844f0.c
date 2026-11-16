// FUN_1802844f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802844f0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

bool FUN_1802844f0(longlong param_1,float param_2)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  undefined8 *puVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  ULONGLONG UVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined *puVar13;
  bool bVar14;
  float fVar15;
  undefined *local_58;
  undefined1 local_50 [40];
  
  local_50._0_16_ = (undefined1  [16])0x0;
  plVar9 = (longlong *)FUN_180113860(&DAT_180bbef58);
  puVar5 = DAT_180bbef50;
  local_50._8_8_ = plVar9;
  local_50._0_8_ = DAT_180bbef50;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
  }
  LOCK();
  UNLOCK();
  bVar4 = (byte)DAT_180bbef58;
  DAT_180bbef58 = (longlong)plVar9;
  if ((bVar4 & 3) == 2) {
    FUN_1805fa36c(&DAT_180bbef58);
  }
  if ((puVar5 != (undefined8 *)0x0) && (UVar10 = GetTickCount64(), UVar10 - puVar5[5] < 0xfb)) {
    for (plVar12 = (longlong *)*puVar5; plVar12 != (longlong *)puVar5[1]; plVar12 = plVar12 + 7) {
      if (*plVar12 == param_1) {
        fVar2 = *(float *)(puVar5 + 4) - *(float *)((longlong)plVar12 + 0x14);
        fVar15 = *(float *)((longlong)puVar5 + 0x1c) - *(float *)(plVar12 + 2);
        fVar3 = *(float *)(puVar5 + 3) - *(float *)((longlong)plVar12 + 0xc);
        fVar2 = fVar3 * fVar3 + fVar15 * fVar15 + fVar2 * fVar2;
        fVar15 = 0.0;
        if (fVar2 != 0.0) {
          if (fVar2 < 0.0) {
            fVar15 = (float)FUN_18061e150(fVar2);
          }
          else {
            fVar15 = SQRT(fVar2);
          }
        }
        iVar7 = DAT_180c65298;
        if (fVar15 * 0.0254 <= param_2) {
          if ((DAT_180c65298 == 0) && (UVar10 = GetTickCount64(), DAT_180c65290 <= UVar10)) {
            local_58 = &DAT_1808f2460;
            iVar7 = FUN_1805f68d0(&DAT_1808f2460);
            if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_1805f6d44(5);
            }
            if (DAT_1808f24ac == 0x7fffffff) {
              DAT_1808f24ac = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
              FUN_1805f6d44(6);
            }
            if ((DAT_180c65298 == 0) && (DAT_180c65290 <= UVar10)) {
              DAT_180c65298 = FUN_1804174b0("CEntityInstance",0xa8a45978);
              if (DAT_180c65298 == 0) {
                DAT_180c65290 = UVar10 + 1000;
              }
              else {
                DAT_180c65290 = 0xffffffffffffffff;
              }
            }
            iVar7 = DAT_180c65298;
            FUN_1805f68fc(&DAT_1808f2460);
          }
          lVar11 = FUN_18017ea70();
          *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + 1;
          bVar14 = false;
          if (iVar7 + param_1 != 0) {
            local_58 = (undefined *)0x0;
            cVar6 = FUN_1804514f0(&local_58,iVar7 + param_1,8);
            if (cVar6 == '\0') {
              bVar14 = false;
            }
            else {
              bVar14 = true;
            }
          }
          puVar13 = local_58;
          lVar11 = FUN_18017ea70();
          if (*(int *)(lVar11 + 4) != 0) {
            *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + -1;
          }
          lVar11 = FUN_18017ea70();
          *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + 1;
          if (bVar14) {
            puVar13 = puVar13 + 0x10;
            if (puVar13 != (undefined *)0x0) goto LAB_18028476c;
            bVar14 = false;
          }
          else {
            puVar13 = (undefined *)0x10;
LAB_18028476c:
            local_58 = (undefined *)((ulonglong)local_58 & 0xffffffff00000000);
            cVar6 = FUN_1804514f0(&local_58,puVar13,4);
            if (cVar6 == '\0') {
              bVar14 = false;
            }
            else {
              bVar14 = true;
            }
          }
          iVar7 = (int)local_58;
          lVar11 = FUN_18017ea70();
          if (*(int *)(lVar11 + 4) != 0) {
            *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + -1;
          }
          iVar8 = -1;
          if (bVar14) {
            iVar8 = iVar7;
          }
          bVar14 = iVar8 == (int)plVar12[1];
          goto LAB_1802845a0;
        }
        break;
      }
    }
  }
  bVar14 = false;
LAB_1802845a0:
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar9 + 1;
    lVar11 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9);
      }
    }
  }
  return bVar14;
}



