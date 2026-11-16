// FUN_1806208ec - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806208ec */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1806208ec(longlong param_1,int param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  short sVar2;
  short sVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int *piVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
  ushort *puVar14;
  uint uVar15;
  uint uVar16;
  short *psVar17;
  longlong lVar18;
  longlong lVar19;
  undefined1 auStackY_368 [32];
  short local_308 [136];
  undefined1 local_1f8 [176];
  ushort local_148 [128];
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStackY_368;
  lVar18 = (longlong)param_2;
  lVar10 = FUN_18061f698();
  puVar1 = (undefined8 *)(lVar10 + 0x2c8);
  lVar11 = FUN_18061fed8(param_3,local_308,0x83,local_1f8);
  if (lVar11 != 0) {
    psVar17 = local_308;
    lVar19 = lVar18 * 0x20;
    lVar11 = *(longlong *)(lVar19 + 0x28 + param_1) - (longlong)psVar17;
    do {
      sVar2 = *psVar17;
      sVar3 = *(short *)((longlong)psVar17 + lVar11);
      if (sVar2 != sVar3) break;
      psVar17 = psVar17 + 1;
    } while (sVar3 != 0);
    if (sVar2 != sVar3) {
      lVar11 = -1;
      do {
        lVar11 = lVar11 + 1;
      } while (local_308[lVar11] != 0);
      puVar12 = (undefined4 *)_malloc_base(lVar11 * 2 + 6);
      if (puVar12 != (undefined4 *)0x0) {
        puVar5 = *(undefined **)(lVar19 + 0x28 + param_1);
        uVar6 = *(undefined8 *)(param_1 + 0x128 + lVar18 * 8);
        uVar4 = *(undefined4 *)(param_1 + 0xc);
        iVar9 = FUN_1806160a0();
        if (iVar9 != 0) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        *(undefined4 **)(lVar19 + 0x28 + param_1) = puVar12 + 1;
        if ((local_308[0] == 0x43) && (local_308[1] == 0)) {
          uVar13 = 0;
        }
        else {
          uVar13 = FUN_18061fb50(local_1f8);
        }
        *(undefined8 *)(param_1 + 0x128 + lVar18 * 8) = uVar13;
        if (param_2 == 2) {
          iVar9 = 0;
          *(undefined4 *)(param_1 + 0xc) = 0;
          lVar11 = 0;
          uVar13 = *(undefined8 *)(lVar10 + 0x2e8);
          do {
            if (*(int *)(param_1 + 0xc) == *(int *)(puVar1 + lVar11)) {
              if (iVar9 != 0) {
                *puVar1 = puVar1[iVar9];
                puVar1[iVar9] = uVar13;
              }
              break;
            }
            uVar7 = puVar1[lVar11];
            iVar9 = iVar9 + 1;
            puVar1[lVar11] = uVar13;
            lVar11 = lVar11 + 1;
            uVar13 = uVar7;
          } while (lVar11 < 5);
          if (iVar9 == 5) {
            iVar9 = FUN_18062c7f4(0,1,&DAT_1806b0210);
            uVar16 = 0;
            uVar15 = 0;
            if (iVar9 != 0) {
              puVar14 = local_148;
              do {
                uVar16 = uVar16 + 1;
                *puVar14 = *puVar14 & 0x1ff;
                puVar14 = puVar14 + 1;
              } while (uVar16 < 0x7f);
              iVar9 = memcmp(local_148,PTR_DAT_1808d72e0,0xfe);
              uVar15 = (uint)(iVar9 == 0);
            }
            *(uint *)(lVar10 + 0x2cc) = uVar15;
            *(undefined4 *)puVar1 = *(undefined4 *)(param_1 + 0xc);
          }
          *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(lVar10 + 0x2cc);
        }
        else if (param_2 == 1) {
          *(undefined4 *)(param_1 + 0x14) = 0;
        }
        else if (param_2 == 5) {
          *(undefined4 *)(param_1 + 0x18) = 0;
        }
        iVar9 = (*(code *)(&PTR_FUN_1806b02a0)[lVar18 * 3])();
        if (iVar9 == 0) {
          if (puVar5 != &DAT_1808d7458) {
            piVar8 = *(int **)(lVar18 * 0x20 + 0x38 + param_1);
            LOCK();
            iVar9 = *piVar8;
            *piVar8 = *piVar8 + -1;
            UNLOCK();
            if (iVar9 == 1) {
              FUN_180621380(*(undefined8 *)(lVar18 * 0x20 + 0x38 + param_1));
              FUN_180621380(*(undefined8 *)(lVar18 * 0x20 + 0x30 + param_1));
              FUN_180621380(*(undefined8 *)(param_1 + 0x128 + lVar18 * 8));
              *(undefined8 *)(lVar18 * 0x20 + 0x28 + param_1) = 0;
              *(undefined8 *)(param_1 + 0x128 + lVar18 * 8) = 0;
            }
          }
          *puVar12 = 1;
          *(undefined4 **)(lVar18 * 0x20 + 0x38 + param_1) = puVar12;
        }
        else {
          *(undefined **)(lVar18 * 0x20 + 0x28 + param_1) = puVar5;
          FUN_180621380(*(undefined8 *)(param_1 + 0x128 + lVar18 * 8));
          *(undefined8 *)(param_1 + 0x128 + lVar18 * 8) = uVar6;
          FUN_180621380(puVar12);
          *(undefined4 *)(param_1 + 0xc) = uVar4;
        }
      }
    }
  }
}



