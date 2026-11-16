// FUN_18062f070 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18062f070 */

undefined8 FUN_18062f070(longlong param_1)

{
  byte *pbVar1;
  byte bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined **ppuVar14;
  byte *pbVar15;
  undefined **ppuVar16;
  byte *pbVar17;
  undefined4 *puVar18;
  undefined8 uVar19;
  longlong local_38 [2];
  
  local_38[1] = 0;
  local_38[0] = param_1;
  if ((*(longlong *)(param_1 + 0x148) != 0) || (*(longlong *)(param_1 + 0x140) != 0)) {
    uVar19 = 1;
    ppuVar16 = (undefined **)_calloc_base(1,0x98);
    if (ppuVar16 == (undefined **)0x0) goto LAB_18062f339;
    puVar3 = *(undefined8 **)(param_1 + 0xf8);
    puVar8 = (undefined *)puVar3[1];
    *ppuVar16 = (undefined *)*puVar3;
    ppuVar16[1] = puVar8;
    puVar8 = (undefined *)puVar3[3];
    ppuVar16[2] = (undefined *)puVar3[2];
    ppuVar16[3] = puVar8;
    puVar8 = (undefined *)puVar3[5];
    ppuVar16[4] = (undefined *)puVar3[4];
    ppuVar16[5] = puVar8;
    puVar8 = (undefined *)puVar3[7];
    ppuVar16[6] = (undefined *)puVar3[6];
    ppuVar16[7] = puVar8;
    puVar8 = (undefined *)puVar3[9];
    ppuVar16[8] = (undefined *)puVar3[8];
    ppuVar16[9] = puVar8;
    puVar8 = (undefined *)puVar3[0xb];
    ppuVar16[10] = (undefined *)puVar3[10];
    ppuVar16[0xb] = puVar8;
    puVar8 = (undefined *)puVar3[0xd];
    ppuVar16[0xc] = (undefined *)puVar3[0xc];
    ppuVar16[0xd] = puVar8;
    uVar5 = *(undefined4 *)((longlong)puVar3 + 0x74);
    uVar6 = *(undefined4 *)(puVar3 + 0xf);
    uVar7 = *(undefined4 *)((longlong)puVar3 + 0x7c);
    *(undefined4 *)(ppuVar16 + 0xe) = *(undefined4 *)(puVar3 + 0xe);
    *(undefined4 *)((longlong)ppuVar16 + 0x74) = uVar5;
    *(undefined4 *)(ppuVar16 + 0xf) = uVar6;
    *(undefined4 *)((longlong)ppuVar16 + 0x7c) = uVar7;
    uVar5 = *(undefined4 *)((longlong)puVar3 + 0x84);
    uVar6 = *(undefined4 *)(puVar3 + 0x11);
    uVar7 = *(undefined4 *)((longlong)puVar3 + 0x8c);
    *(undefined4 *)(ppuVar16 + 0x10) = *(undefined4 *)(puVar3 + 0x10);
    *(undefined4 *)((longlong)ppuVar16 + 0x84) = uVar5;
    *(undefined4 *)(ppuVar16 + 0x11) = uVar6;
    *(undefined4 *)((longlong)ppuVar16 + 0x8c) = uVar7;
    ppuVar16[0x12] = (undefined *)puVar3[0x12];
    ppuVar14 = (undefined **)_malloc_base(4);
    FUN_180621380(0);
    if (ppuVar14 == (undefined **)0x0) {
      ppuVar14 = ppuVar16;
    }
    else {
      *(undefined4 *)ppuVar14 = 0;
      if (*(longlong *)(param_1 + 0x148) == 0) {
        *ppuVar16 = PTR_DAT_1808d7210;
        ppuVar16[1] = PTR_DAT_1808d7218;
        ppuVar16[2] = PTR_DAT_1808d7220;
        ppuVar16[0xb] = PTR_DAT_1808d7268;
        ppuVar16[0xc] = PTR_DAT_1808d7270;
        *(undefined4 *)ppuVar14 = 1;
        goto LAB_18062f2e6;
      }
      puVar18 = (undefined4 *)_malloc_base(4);
      FUN_180621380(0);
      if (puVar18 == (undefined4 *)0x0) {
        FUN_180621380(ppuVar16);
      }
      else {
        *puVar18 = 0;
        uVar19 = *(undefined8 *)(param_1 + 0x148);
        iVar9 = FUN_18062c62c(local_38,1,uVar19,0xe,ppuVar16);
        iVar10 = FUN_18062c62c(local_38,1,uVar19,0xf,ppuVar16 + 1);
        iVar11 = FUN_18062c62c(local_38,1,uVar19,0x10,ppuVar16 + 2);
        iVar12 = FUN_18062c62c(local_38,2,uVar19,0xe,ppuVar16 + 0xb);
        iVar13 = FUN_18062c62c(local_38,2,uVar19,0xf,ppuVar16 + 0xc);
        if (iVar13 == 0 && (((iVar9 == 0 && iVar10 == 0) && iVar11 == 0) && iVar12 == 0)) {
          pbVar15 = ppuVar16[2];
LAB_18062f286:
          do {
            bVar2 = *pbVar15;
            if (bVar2 == 0) goto code_r0x00018062f28c;
            if ((byte)(bVar2 - 0x30) < 10) {
              *pbVar15 = bVar2 - 0x30;
            }
            else if (bVar2 == 0x3b) {
              pbVar17 = pbVar15;
              do {
                pbVar1 = pbVar17 + 1;
                *pbVar17 = *pbVar1;
                pbVar17 = pbVar17 + 1;
              } while (*pbVar1 != 0);
              goto LAB_18062f286;
            }
            pbVar15 = pbVar15 + 1;
          } while( true );
        }
        __acrt_locale_free_numeric(ppuVar16);
        FUN_180621380(ppuVar16);
        FUN_180621380(puVar18);
        uVar19 = 0xffffffff;
      }
    }
    FUN_180621380(ppuVar14);
    goto LAB_18062f339;
  }
  ppuVar14 = (undefined **)0x0;
  ppuVar16 = &PTR_DAT_1808d7210;
LAB_18062f2e6:
  puVar18 = (undefined4 *)0x0;
LAB_18062f2e9:
  piVar4 = *(int **)(param_1 + 0xe8);
  if (piVar4 != (int *)0x0) {
    LOCK();
    *piVar4 = *piVar4 + -1;
    UNLOCK();
  }
  piVar4 = *(int **)(param_1 + 0xe0);
  if (piVar4 != (int *)0x0) {
    LOCK();
    iVar9 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar9 == 1) {
      FUN_180621380(*(undefined8 *)(param_1 + 0xe0));
      FUN_180621380(*(undefined8 *)(param_1 + 0xf8));
    }
  }
  *(undefined4 **)(param_1 + 0xe8) = puVar18;
  uVar19 = 0;
  *(undefined ***)(param_1 + 0xe0) = ppuVar14;
  *(undefined8 *)(param_1 + 0xf8) = ppuVar16;
LAB_18062f339:
  return uVar19;
code_r0x00018062f28c:
  *(undefined4 *)ppuVar14 = 1;
  *puVar18 = 1;
  goto LAB_18062f2e9;
}



