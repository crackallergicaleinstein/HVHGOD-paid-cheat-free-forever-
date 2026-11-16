// FUN_1802439f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802439f0 */

void FUN_1802439f0(longlong param_1)

{
  undefined4 uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  ULONGLONG UVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined *puVar10;
  undefined *local_68 [2];
  char *local_58;
  longlong local_50;
  char *local_48;
  undefined8 local_40;
  
  lVar6 = DAT_180c64430;
  if (*(int *)(param_1 + 0x10) == -1) {
    return;
  }
  if (DAT_180c64430 == 0) goto LAB_180243c34;
  lVar5 = FUN_18017ea70();
  *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + 1;
  bVar2 = false;
  if (lVar6 != 0) {
    local_68[0] = (undefined *)0x0;
    cVar3 = FUN_1804514f0(local_68,lVar6,8);
    if (cVar3 == '\0') {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
  }
  puVar10 = local_68[0];
  lVar6 = FUN_18017ea70();
  if (*(int *)(lVar6 + 4) != 0) {
    *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
  }
  if (!bVar2) {
    puVar10 = (undefined *)0x0;
  }
  if ((puVar10 == (undefined *)0x0) || (puVar10 != *(undefined **)(param_1 + 0x18)))
  goto LAB_180243c34;
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  lVar5 = DAT_1808ede80;
  lVar6 = DAT_1808da460;
  if ((DAT_1808ede80 != DAT_1808da460) || (lVar8 = DAT_180c64408, DAT_180c64408 == 0)) {
    UVar7 = GetTickCount64();
    if ((lVar5 == lVar6) && (UVar7 < DAT_180c64400)) {
      lVar8 = 0;
    }
    else {
      local_68[0] = &DAT_1808eddd0;
      iVar4 = FUN_1805f68d0(&DAT_1808eddd0);
      if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1808ede1c == 0x7fffffff) {
        DAT_1808ede1c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      uVar9 = 1000;
      if (DAT_1808ede80 == lVar6) {
        if ((DAT_180c64408 == 0) && (DAT_180c64400 <= UVar7)) goto LAB_180243b58;
      }
      else {
        DAT_1808ede20 = 1000;
LAB_180243b58:
        lVar5 = -1;
        do {
          local_50 = lVar5 + 1;
          lVar8 = lVar5 + 1;
          lVar5 = local_50;
        } while ("client.dll:83FAFF0F84????????4154"[lVar8] != '\0');
        local_58 = "client.dll:83FAFF0F84????????4154";
        local_48 = "patterns::particle_destroy_effect";
        local_40 = 0x21;
        DAT_180c64408 = FUN_1800e5d20(&local_48,&local_58);
        DAT_1808ede80 = lVar6;
        DAT_180c64400 = 0xffffffffffffffff;
        if (DAT_180c64408 == 0) {
          DAT_180c64400 = DAT_1808ede20 + UVar7;
          uVar9 = 60000;
          if (DAT_1808ede20 < 60000) {
            uVar9 = DAT_1808ede20 * 2;
          }
        }
        DAT_1808ede20 = uVar9;
      }
      lVar8 = DAT_180c64408;
      FUN_1805f68fc(&DAT_1808eddd0);
    }
  }
  cVar3 = FUN_1804513c0(lVar8,1,2);
  if (cVar3 != '\0') {
    lVar6 = FUN_18017ea70();
    *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
    FUN_1802449f0(lVar8,puVar10,uVar1);
    lVar6 = FUN_18017ea70();
    if (*(int *)(lVar6 + 4) != 0) {
      *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
    }
  }
LAB_180243c34:
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



