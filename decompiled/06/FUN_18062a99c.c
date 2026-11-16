// FUN_18062a99c - decompiled reference (Ghidra). Not original source, does not compile.

/* 18062a99c */

void FUN_18062a99c(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined4 *param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  
  __acrt_lock(*param_2);
  puVar7 = (undefined8 *)(*(longlong *)(*(longlong *)*param_3 + 0x88) + 0x18);
  if (DAT_180bb2650 == (undefined8 *)0x0) {
LAB_18062aa4f:
    puVar8 = (undefined4 *)FUN_18060fe00();
    *puVar8 = 0x16;
    FUN_18060aad4();
  }
  else {
    if (puVar7 == (undefined8 *)0x0) {
      FUN_18063ab10(DAT_180bb2650,0,0x101);
      goto LAB_18062aa4f;
    }
    lVar11 = 2;
    puVar10 = DAT_180bb2650;
    do {
      uVar6 = puVar7[1];
      *puVar10 = *puVar7;
      puVar10[1] = uVar6;
      uVar6 = puVar7[3];
      puVar10[2] = puVar7[2];
      puVar10[3] = uVar6;
      uVar6 = puVar7[5];
      puVar10[4] = puVar7[4];
      puVar10[5] = uVar6;
      uVar6 = puVar7[7];
      puVar10[6] = puVar7[6];
      puVar10[7] = uVar6;
      uVar6 = puVar7[9];
      puVar10[8] = puVar7[8];
      puVar10[9] = uVar6;
      uVar6 = puVar7[0xb];
      puVar10[10] = puVar7[10];
      puVar10[0xb] = uVar6;
      uVar3 = *(undefined4 *)((longlong)puVar7 + 100);
      uVar4 = *(undefined4 *)(puVar7 + 0xd);
      uVar5 = *(undefined4 *)((longlong)puVar7 + 0x6c);
      *(undefined4 *)(puVar10 + 0xc) = *(undefined4 *)(puVar7 + 0xc);
      *(undefined4 *)((longlong)puVar10 + 100) = uVar3;
      *(undefined4 *)(puVar10 + 0xd) = uVar4;
      *(undefined4 *)((longlong)puVar10 + 0x6c) = uVar5;
      puVar9 = puVar10 + 0x10;
      uVar6 = puVar7[0xf];
      puVar10[0xe] = puVar7[0xe];
      puVar10[0xf] = uVar6;
      puVar7 = puVar7 + 0x10;
      lVar11 = lVar11 + -1;
      puVar10 = puVar9;
    } while (lVar11 != 0);
    *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
  }
  lVar11 = 2;
  puVar7 = (undefined8 *)(*(longlong *)(*(longlong *)*param_3 + 0x88) + 0x119);
  if (DAT_180bb2658 != (undefined8 *)0x0) {
    puVar10 = DAT_180bb2658;
    if (puVar7 != (undefined8 *)0x0) {
      do {
        uVar6 = puVar7[1];
        *puVar10 = *puVar7;
        puVar10[1] = uVar6;
        uVar6 = puVar7[3];
        puVar10[2] = puVar7[2];
        puVar10[3] = uVar6;
        uVar6 = puVar7[5];
        puVar10[4] = puVar7[4];
        puVar10[5] = uVar6;
        uVar6 = puVar7[7];
        puVar10[6] = puVar7[6];
        puVar10[7] = uVar6;
        uVar6 = puVar7[9];
        puVar10[8] = puVar7[8];
        puVar10[9] = uVar6;
        uVar6 = puVar7[0xb];
        puVar10[10] = puVar7[10];
        puVar10[0xb] = uVar6;
        uVar3 = *(undefined4 *)((longlong)puVar7 + 100);
        uVar4 = *(undefined4 *)(puVar7 + 0xd);
        uVar5 = *(undefined4 *)((longlong)puVar7 + 0x6c);
        *(undefined4 *)(puVar10 + 0xc) = *(undefined4 *)(puVar7 + 0xc);
        *(undefined4 *)((longlong)puVar10 + 100) = uVar3;
        *(undefined4 *)(puVar10 + 0xd) = uVar4;
        *(undefined4 *)((longlong)puVar10 + 0x6c) = uVar5;
        uVar6 = puVar7[0xf];
        puVar10[0xe] = puVar7[0xe];
        puVar10[0xf] = uVar6;
        puVar7 = puVar7 + 0x10;
        lVar11 = lVar11 + -1;
        puVar10 = puVar10 + 0x10;
      } while (lVar11 != 0);
      goto LAB_18062ab00;
    }
    FUN_18063ab10(DAT_180bb2658,0,0x100);
  }
  puVar8 = (undefined4 *)FUN_18060fe00();
  *puVar8 = 0x16;
  FUN_18060aad4();
LAB_18062ab00:
  piVar2 = (int *)**(undefined8 **)param_3[1];
  LOCK();
  iVar1 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if ((iVar1 == 1) && ((undefined *)**(undefined8 **)param_3[1] != &DAT_1808d7780)) {
    FUN_180621380(**(undefined8 **)param_3[1]);
  }
  **(undefined8 **)param_3[1] = *(undefined8 *)(*(longlong *)*param_3 + 0x88);
  LOCK();
  **(int **)(*(longlong *)*param_3 + 0x88) = **(int **)(*(longlong *)*param_3 + 0x88) + 1;
  UNLOCK();
  __acrt_unlock(*param_4);
  return;
}



