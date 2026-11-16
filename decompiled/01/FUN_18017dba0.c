// FUN_18017dba0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18017dba0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_18017dba0(longlong *param_1)

{
  longlong *plVar1;
  short *psVar2;
  int *piVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  short *psVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  short *psVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  short *psVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined1 auStack_2c8 [32];
  undefined1 local_2a8 [16];
  uint local_298;
  undefined1 local_288 [44];
  short local_25c;
  short local_25a;
  short local_258;
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_2c8;
  lVar4 = *param_1;
  bVar9 = 0;
  if (*(char *)(lVar4 + 100) == '\0') {
LAB_18017dd3f:
    puVar17 = (undefined8 *)(lVar4 + 0x40);
    if (bVar9 != 0) {
      puVar18 = *(undefined8 **)(lVar4 + 0x50);
      if (puVar18 == *(undefined8 **)(lVar4 + 0x58)) {
        FUN_1801b64b0(lVar4 + 0x48,puVar18,puVar17);
      }
      else {
        uVar5 = *puVar17;
        *puVar17 = 0xffffffffffffffff;
        *puVar18 = uVar5;
        *(longlong *)(lVar4 + 0x50) = *(longlong *)(lVar4 + 0x50) + 8;
      }
      iVar11 = FUN_18017d830(lVar4 + 0x20,*(undefined4 *)(lVar4 + 0x60),puVar17,local_288);
      goto LAB_18017dd9c;
    }
  }
  else {
    uVar10 = *(uint *)(lVar4 + 0x10);
    if (((uVar10 >> 10 & 1) == 0) ||
       ((*(int *)(lVar4 + 0x14) != -0x5ffffff4 && (*(int *)(lVar4 + 0x14) != -0x5ffffffd)))) {
      bVar9 = (byte)(uVar10 >> 4) & 1;
      goto LAB_18017dd3f;
    }
    if ((*(byte *)(lVar4 + 0x60) & 1) == 0) goto LAB_18017dd3f;
    plVar14 = (longlong *)(lVar4 + 0x20);
    if (7 < *(ulonglong *)(lVar4 + 0x38)) {
      plVar14 = (longlong *)*plVar14;
    }
    uVar10 = FUN_1805fb620(plVar14,local_2a8,3,uVar10);
    if (uVar10 == 0) {
      bVar9 = (byte)(local_298 >> 4) & 1;
      goto LAB_18017dd3f;
    }
    if (uVar10 < 0x41) {
      if (((((uVar10 != 0x40) && (uVar10 != 2)) && (uVar10 != 3)) && (uVar10 != 0x35)) &&
         ((uVar10 != 5 || ((*(byte *)(lVar4 + 0x60) & 2) == 0)))) goto LAB_18017dce4;
    }
    else if ((uVar10 != 0x7b) && (uVar10 != 0x10b)) {
LAB_18017dce4:
      *param_1 = 0;
      plVar14 = (longlong *)param_1[1];
      param_1[1] = 0;
      if (plVar14 == (longlong *)0x0) {
      }
      LOCK();
      plVar1 = plVar14 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 != 1) {
      }
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar3 = (int *)((longlong)plVar14 + 0xc);
      iVar11 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*plVar14 + 8))(plVar14);
      }
    }
  }
  iVar11 = FUN_1805fb424(*(undefined8 *)(lVar4 + 0x40),local_288);
  if (iVar11 == 0) {
    uVar5 = *(undefined8 *)(lVar4 + 0x40);
    do {
      if ((local_25c != 0x2e) || ((local_25a != 0 && ((local_25a != 0x2e || (local_258 != 0)))))) {
        iVar11 = 0;
        break;
      }
      iVar11 = FUN_1805fb424(uVar5,local_288);
    } while (iVar11 == 0);
  }
LAB_18017dd9c:
  puVar18 = (undefined8 *)(lVar4 + 0x40);
  puVar17 = (undefined8 *)(lVar4 + 0x20);
  *(undefined1 *)(lVar4 + 100) = 1;
  if (iVar11 != 0) {
    do {
      do {
        if ((iVar11 != 0x12) ||
           (lVar6 = *(longlong *)(lVar4 + 0x50), *(longlong *)(lVar4 + 0x48) == lVar6)) {
          *param_1 = 0;
          plVar14 = (longlong *)param_1[1];
          param_1[1] = 0;
          if (plVar14 == (longlong *)0x0) {
          }
          LOCK();
          plVar1 = plVar14 + 1;
          lVar4 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar4 != 1) {
          }
          (**(code **)*plVar14)(plVar14);
          LOCK();
          piVar3 = (int *)((longlong)plVar14 + 0xc);
          iVar11 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*plVar14 + 8))(plVar14);
          }
        }
        uVar5 = *(undefined8 *)(lVar6 + -8);
        *(undefined8 *)(lVar6 + -8) = 0xffffffffffffffff;
        uVar7 = *puVar18;
        *puVar18 = uVar5;
        FUN_1805fb444(uVar7);
        FUN_1805fb444(*(undefined8 *)(*(longlong *)(lVar4 + 0x50) + -8));
        *(longlong *)(lVar4 + 0x50) = *(longlong *)(lVar4 + 0x50) + -8;
        puVar13 = puVar17;
        if (7 < *(ulonglong *)(lVar4 + 0x38)) {
          puVar13 = (undefined8 *)*puVar17;
        }
        psVar15 = (short *)((longlong)puVar13 + *(longlong *)(lVar4 + 0x30) * 2);
        psVar12 = (short *)FUN_1800a7b00(puVar13,psVar15);
        if (psVar15 != psVar12) {
          if ((*psVar12 == 0x5c) || (*psVar12 == 0x2f)) {
            psVar12 = psVar12 + 1;
          }
          if (psVar15 != psVar12) {
            do {
              psVar2 = psVar15 + -1;
              psVar8 = psVar15;
              if ((*psVar2 == 0x5c) || (*psVar2 == 0x2f)) break;
              psVar15 = psVar2;
              psVar8 = psVar2;
            } while (psVar2 != psVar12);
            do {
              psVar15 = psVar8;
              if (psVar15 == psVar12) break;
              psVar8 = psVar15 + -1;
            } while ((*psVar8 == 0x5c) || (*psVar8 == 0x2f));
          }
        }
        uVar16 = (longlong)psVar15 - (longlong)puVar13 >> 1;
        if (*(ulonglong *)(lVar4 + 0x30) < uVar16) {
                    /* WARNING: Subroutine does not return */
          FUN_180141470();
        }
        *(ulonglong *)(lVar4 + 0x30) = uVar16;
        puVar13 = puVar17;
        if (7 < *(ulonglong *)(lVar4 + 0x38)) {
          puVar13 = (undefined8 *)*puVar17;
        }
        *(undefined2 *)((longlong)puVar13 + uVar16 * 2) = 0;
        iVar11 = FUN_1805fb424(*puVar18,local_288);
      } while (iVar11 != 0);
      uVar5 = *puVar18;
      do {
        if ((local_25c != 0x2e) || ((local_25a != 0 && ((local_25a != 0x2e || (local_258 != 0))))))
        {
          iVar11 = 0;
          break;
        }
        iVar11 = FUN_1805fb424(uVar5,local_288);
      } while (iVar11 == 0);
    } while (iVar11 != 0);
  }
  FUN_18017d9c0(lVar4,local_288);
}



