// FUN_180048a40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180048a40 */

undefined8 FUN_180048a40(undefined8 *param_1)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int *piVar9;
  longlong lVar10;
  longlong *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  code *local_90;
  undefined8 *local_88;
  longlong *local_78;
  undefined8 *local_70;
  int *local_68;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  local_78 = param_1 + 1;
  piVar9 = (int *)*param_1;
  *param_1 = 0;
  local_68 = piVar9;
  local_70 = param_1;
  do {
    if ((piVar9 != (int *)0x0) && ((piVar9[1] & 1U) != 0)) goto LAB_180048e4e;
    iVar2 = FUN_1805f68d0(&DAT_1808d4080);
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1808d40cc == 0x7fffffff) {
      DAT_1808d40cc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if (piVar9 != (int *)0x0) {
      LOCK();
      *piVar9 = *piVar9 + 1;
      UNLOCK();
    }
    uVar3 = FUN_1805fa1c4();
    uVar4 = FUN_1805fa1a8();
    piVar9 = local_68;
    if (uVar3 == 24000000) {
      uVar3 = ((longlong)uVar4 / 24000000) * 1000000000;
      lVar7 = (((longlong)uVar4 % 24000000) * 1000000000) / 24000000;
LAB_180048ba3:
      lVar7 = lVar7 + uVar3;
    }
    else {
      if (uVar3 != 10000000) {
        if ((uVar4 | uVar3) >> 0x20 == 0) {
          uVar5 = (uVar4 & 0xffffffff) / (uVar3 & 0xffffffff);
          uVar4 = (uVar4 & 0xffffffff) % (uVar3 & 0xffffffff);
        }
        else {
          uVar5 = (longlong)uVar4 / (longlong)uVar3;
          uVar4 = (longlong)uVar4 % (longlong)uVar3;
        }
        uVar4 = uVar4 * 1000000000;
        if ((uVar4 | uVar3) >> 0x20 == 0) {
          uVar3 = (uVar4 & 0xffffffff) / (uVar3 & 0xffffffff);
        }
        else {
          uVar3 = (longlong)uVar4 / (longlong)uVar3;
        }
        lVar7 = uVar5 * 1000000000;
        goto LAB_180048ba3;
      }
      lVar7 = uVar4 * 100;
    }
    lVar8 = lVar7 + 5000000000;
    if (SCARRY8(lVar7,5000000000)) {
      lVar8 = 0x7fffffffffffffff;
    }
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    local_90 = FUN_180179aa0;
    local_88 = &DAT_180bacb98;
    FUN_18017c460(&local_a8);
    do {
      lVar7 = DAT_180bacb98;
      iVar2 = FUN_1805f68d0(DAT_180bacb98);
      if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (*(int *)(lVar7 + 0x4c) == 0x7fffffff) {
        *(undefined4 *)(lVar7 + 0x4c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      if ((piVar9 != (int *)0x0) && ((piVar9[1] & 1U) != 0)) {
        FUN_1805f68fc(lVar7);
        FUN_18017c1b0(&local_a8);
        goto LAB_180048dd4;
      }
      FUN_1805f68fc(&DAT_1808d4080);
      uVar3 = FUN_1805fa1c4();
      uVar4 = FUN_1805fa1a8();
      if (uVar3 == 24000000) {
        uVar3 = ((longlong)uVar4 / 24000000) * 1000000000;
        lVar10 = (((longlong)uVar4 % 24000000) * 1000000000) / 24000000;
LAB_180048d13:
        lVar10 = lVar10 + uVar3;
        lVar6 = lVar8 - lVar10;
        if (lVar6 != 0 && lVar10 <= lVar8) {
LAB_180048d1e:
          iVar2 = 86400000;
          if (lVar6 < 0x4e94914f0001) {
            iVar2 = (uint)((lVar6 / 1000000) * 1000000 < lVar6) + (int)(lVar6 / 1000000);
          }
          FUN_1805f6bd4(&DAT_180bacba8,DAT_180bacb98,iVar2);
        }
      }
      else {
        if (uVar3 != 10000000) {
          if ((uVar4 | uVar3) >> 0x20 == 0) {
            uVar5 = (uVar4 & 0xffffffff) / (uVar3 & 0xffffffff);
            uVar4 = (uVar4 & 0xffffffff) % (uVar3 & 0xffffffff);
          }
          else {
            uVar5 = (longlong)uVar4 / (longlong)uVar3;
            uVar4 = (longlong)uVar4 % (longlong)uVar3;
          }
          uVar4 = uVar4 * 1000000000;
          if ((uVar4 | uVar3) >> 0x20 == 0) {
            uVar3 = (uVar4 & 0xffffffff) / (uVar3 & 0xffffffff);
          }
          else {
            uVar3 = (longlong)uVar4 / (longlong)uVar3;
          }
          lVar10 = uVar5 * 1000000000;
          goto LAB_180048d13;
        }
        lVar10 = uVar4 * 100;
        lVar6 = lVar8 + uVar4 * -100;
        if (lVar6 != 0 && lVar10 <= lVar8) goto LAB_180048d1e;
      }
      FUN_1805f68fc(lVar7);
      iVar2 = FUN_1805f68d0(&DAT_1808d4080);
      piVar9 = local_68;
      if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1808d40cc == 0x7fffffff) {
        DAT_1808d40cc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
    } while (lVar10 < lVar8);
    FUN_18017c1b0(&local_a8);
    if (piVar9 == (int *)0x0) {
      FUN_1805f68fc(&DAT_1808d4080);
    }
    else {
LAB_180048dd4:
      LOCK();
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (*piVar9 == 0) {
        FUN_1804547d0(piVar9);
      }
      FUN_1805f68fc(&DAT_1808d4080);
      if ((piVar9[1] & 1U) != 0) goto LAB_180048e4e;
    }
    local_b0 = local_70[3];
    local_b8 = local_78;
    if (0xf < (ulonglong)local_70[4]) {
      local_b8 = (longlong *)local_70[1];
    }
    cVar1 = FUN_1800488f0(&local_b8);
    if (cVar1 == '\0') {
      DAT_180baccb0 = 0;
      if (piVar9 != (int *)0x0) {
LAB_180048e4e:
        LOCK();
        *piVar9 = *piVar9 + -1;
        UNLOCK();
        if (*piVar9 == 0) {
          FUN_1804547d0(piVar9,0x20);
        }
      }
      FUN_1805fa938();
      uVar3 = local_70[4];
      if (0xf < uVar3) {
        lVar7 = *local_78;
        uVar4 = uVar3 + 1;
        lVar8 = lVar7;
        if (0xfff < uVar4) {
          lVar8 = *(longlong *)(lVar7 + -8);
          if (0x1f < (ulonglong)((lVar7 + -8) - lVar8)) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          uVar4 = uVar3 + 0x28;
        }
        FUN_1804547d0(lVar8,uVar4);
      }
      local_70[3] = 0;
      local_70[4] = 0xf;
      *(undefined1 *)(local_70 + 1) = 0;
      piVar9 = (int *)*local_70;
      if (piVar9 != (int *)0x0) {
        LOCK();
        *piVar9 = *piVar9 + -1;
        UNLOCK();
        if (*piVar9 == 0) {
          FUN_1804547d0(piVar9,0x20);
        }
      }
      FUN_1804547d0(local_70,0x28);
      return 0;
    }
    DAT_180baccb8 = GetTickCount64();
  } while( true );
}



