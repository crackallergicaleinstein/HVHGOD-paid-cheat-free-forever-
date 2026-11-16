// FUN_1805766d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805766d0 */

int * FUN_1805766d0(longlong *param_1,longlong *param_2,uint param_3,int param_4,int param_5,
                   char param_6,longlong *param_7,uint *param_8)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined2 *puVar6;
  int *piVar7;
  undefined1 *puVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  uint uVar12;
  int *piVar13;
  uint uVar14;
  short sVar15;
  undefined2 uVar16;
  int *piVar17;
  short sVar18;
  code *pcVar19;
  ulonglong uVar20;
  undefined2 *puVar21;
  undefined1 local_58 [4];
  undefined1 local_54 [4];
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  undefined1 local_48 [4];
  undefined1 local_44 [12];
  
  lVar1 = *param_1;
  uVar20 = (ulonglong)param_3;
  if ((code *)param_2[4] == (code *)0x0) {
    if (*(uint *)(param_2 + 1) < param_3) {
      uVar14 = 0x55;
      goto LAB_180576769;
    }
  }
  else {
    iVar2 = (*(code *)param_2[4])(param_2,uVar20,0);
    uVar14 = -(uint)(iVar2 != 0) & 0x55;
    if (iVar2 != 0) {
LAB_180576769:
      return (int *)(ulonglong)uVar14;
    }
  }
  *(uint *)((longlong)param_2 + 0xc) = param_3;
  sVar15 = 0;
  if (*(uint *)(param_2 + 1) <= param_3 + 1) {
    return (int *)0x55;
  }
  if ((code *)param_2[4] == (code *)0x0) {
    puVar8 = (undefined1 *)(*param_2 + uVar20);
    uVar14 = param_3;
    if (puVar8 == (undefined1 *)0x0) goto LAB_18057678f;
  }
  else {
    iVar2 = (*(code *)param_2[4])(param_2,uVar20,local_58);
    if (iVar2 != 2) {
      return (int *)0x55;
    }
    puVar8 = local_58;
    uVar14 = *(uint *)((longlong)param_2 + 0xc);
  }
  sVar15 = CONCAT11(*puVar8,puVar8[1]);
LAB_18057678f:
  uVar14 = uVar14 + 2;
  iVar2 = sVar15 + 1;
  *(uint *)((longlong)param_2 + 0xc) = uVar14;
  if (0xfef < iVar2) {
LAB_180576c3d:
    return (int *)&DAT_00000008;
  }
  iVar11 = 0;
  if (0 < iVar2) {
    do {
      iVar3 = 0;
      uVar12 = *(uint *)(param_2 + 1);
      if (uVar12 <= uVar14 + 3) {
        return (int *)0x55;
      }
      if ((code *)param_2[4] == (code *)0x0) {
        puVar8 = (undefined1 *)((ulonglong)uVar14 + *param_2);
        if (puVar8 != (undefined1 *)0x0) goto LAB_18057682d;
      }
      else {
        iVar3 = (*(code *)param_2[4])(param_2,(ulonglong)uVar14,local_48);
        if (iVar3 != 4) {
          return (int *)0x55;
        }
        uVar14 = *(uint *)((longlong)param_2 + 0xc);
        puVar8 = local_48;
        uVar12 = *(uint *)(param_2 + 1);
LAB_18057682d:
        iVar3 = CONCAT31(CONCAT21(CONCAT11(*puVar8,puVar8[1]),puVar8[2]),puVar8[3]);
      }
      uVar9 = uVar14 + 4;
      sVar15 = 0;
      *(uint *)((longlong)param_2 + 0xc) = uVar9;
      if (uVar12 <= uVar14 + 5) {
        return (int *)0x55;
      }
      if ((code *)param_2[4] == (code *)0x0) {
        puVar8 = (undefined1 *)(*param_2 + (ulonglong)uVar9);
        if (puVar8 != (undefined1 *)0x0) goto LAB_18057689e;
      }
      else {
        iVar4 = (*(code *)param_2[4])(param_2,uVar9,local_54);
        if (iVar4 != 2) {
          return (int *)0x55;
        }
        uVar9 = *(uint *)((longlong)param_2 + 0xc);
        puVar8 = local_54;
        uVar12 = *(uint *)(param_2 + 1);
LAB_18057689e:
        sVar15 = CONCAT11(*puVar8,puVar8[1]);
      }
      sVar18 = 0;
      uVar14 = uVar9 + 2;
      *(uint *)((longlong)param_2 + 0xc) = uVar14;
      if (uVar12 <= uVar9 + 3) {
        return (int *)0x55;
      }
      if ((code *)param_2[4] == (code *)0x0) {
        puVar8 = (undefined1 *)(*param_2 + (ulonglong)uVar14);
        if (puVar8 != (undefined1 *)0x0) goto LAB_1805768f4;
      }
      else {
        iVar4 = (*(code *)param_2[4])(param_2,uVar14,local_50,2);
        if (iVar4 != 2) {
          return (int *)0x55;
        }
        uVar14 = *(uint *)((longlong)param_2 + 0xc);
        puVar8 = local_50;
LAB_1805768f4:
        sVar18 = CONCAT11(*puVar8,puVar8[1]);
      }
      uVar14 = uVar14 + 2;
      *(uint *)((longlong)param_2 + 0xc) = uVar14;
      if (iVar3 == param_5) {
        *param_8 = (int)sVar15 + 1;
        if (0xaa6 < (uint)(int)sVar15) goto LAB_180576c3d;
        piVar5 = (int *)FUN_1805788b0(param_2,(int)sVar18 + param_3);
        if ((int)piVar5 != 0) {
          return piVar5;
        }
        uVar14 = *param_8;
        if ((int)uVar14 < 0) {
          return (int *)0x6;
        }
        if (uVar14 == 0) {
          puVar6 = (undefined2 *)0x0;
        }
        else {
          if (0xfffffff < (int)uVar14) {
            return (int *)0xa;
          }
          puVar6 = (undefined2 *)(**(code **)(lVar1 + 8))(lVar1,uVar14 * 8);
          if (puVar6 == (undefined2 *)0x0) {
            return (int *)0x40;
          }
        }
        iVar2 = 0;
        uVar14 = *param_8;
        if ((int)uVar14 < 1) goto LAB_180576b26;
        puVar21 = puVar6;
        goto LAB_1805769d0;
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < iVar2);
  }
  return (int *)0x1;
LAB_1805769d0:
  do {
    uVar12 = 0;
    uVar14 = *(uint *)((longlong)param_2 + 0xc);
    uVar16 = 0;
    if (*(uint *)(param_2 + 1) <= uVar14 + 1) {
LAB_180576b7d:
      piVar5 = (int *)0x55;
      *puVar21 = 0;
      goto LAB_180576c04;
    }
    if ((code *)param_2[4] == (code *)0x0) {
      puVar8 = (undefined1 *)(*param_2 + (ulonglong)uVar14);
      if (puVar8 != (undefined1 *)0x0) goto LAB_180576a17;
    }
    else {
      iVar11 = (*(code *)param_2[4])(param_2,(ulonglong)uVar14,local_4c,2);
      if (iVar11 != 2) goto LAB_180576b7d;
      uVar14 = *(uint *)((longlong)param_2 + 0xc);
      puVar8 = local_4c;
LAB_180576a17:
      uVar16 = CONCAT11(*puVar8,puVar8[1]);
    }
    *(uint *)((longlong)param_2 + 0xc) = uVar14 + 2;
    *puVar21 = uVar16;
    iVar11 = *(int *)((longlong)param_2 + 0xc);
    uVar14 = iVar11 + 2;
    if ((code *)param_2[4] == (code *)0x0) {
      if (uVar14 <= *(uint *)(param_2 + 1)) goto LAB_180576a69;
LAB_180576b73:
      piVar5 = (int *)0x55;
      goto LAB_180576c04;
    }
    iVar3 = (*(code *)param_2[4])(param_2,uVar14,0,0);
    piVar5 = (int *)(ulonglong)(-(uint)(iVar3 != 0) & 0x55);
    if (iVar3 != 0) goto LAB_180576c04;
LAB_180576a69:
    *(uint *)((longlong)param_2 + 0xc) = uVar14;
    if (*(uint *)(param_2 + 1) <= iVar11 + 5U) goto LAB_180576b73;
    if ((code *)param_2[4] == (code *)0x0) {
      puVar8 = (undefined1 *)((ulonglong)uVar14 + *param_2);
      pcVar19 = (code *)0x0;
      if (puVar8 != (undefined1 *)0x0) goto LAB_180576ab2;
    }
    else {
      iVar11 = (*(code *)param_2[4])(param_2,uVar14,local_44);
      if (iVar11 != 4) goto LAB_180576b73;
      uVar14 = *(uint *)((longlong)param_2 + 0xc);
      puVar8 = local_44;
      pcVar19 = (code *)param_2[4];
LAB_180576ab2:
      uVar12 = (uint)CONCAT21(CONCAT11(puVar8[1],puVar8[2]),puVar8[3]);
    }
    *(uint *)((longlong)param_2 + 0xc) = uVar14 + 4;
    uVar14 = uVar14 + 8;
    if (pcVar19 == (code *)0x0) {
      if (*(uint *)(param_2 + 1) < uVar14) goto LAB_180576b73;
    }
    else {
      iVar11 = (*pcVar19)(param_2,uVar14,0);
      piVar5 = (int *)(ulonglong)(-(uint)(iVar11 != 0) & 0x55);
      if (iVar11 != 0) goto LAB_180576c04;
    }
    *(uint *)((longlong)param_2 + 0xc) = uVar14;
    *(uint *)(puVar21 + 2) = uVar12;
    iVar2 = iVar2 + 1;
    uVar14 = *param_8;
    puVar21 = puVar21 + 4;
  } while (iVar2 < (int)uVar14);
LAB_180576b26:
  piVar13 = (int *)0x0;
  if (param_6 == '\0') {
LAB_180576b4f:
    if ((int)uVar14 < 0) {
      piVar5 = (int *)0x6;
      goto LAB_180576c04;
    }
    if (uVar14 != 0) goto LAB_180576b59;
    piVar7 = piVar13;
  }
  else {
    FUN_1806192c0(puVar6,(longlong)(int)uVar14,8,FUN_18057bae0);
    uVar14 = *param_8;
    if ((int)uVar14 < 1) goto LAB_180576b4f;
LAB_180576b59:
    if (0x1fffffff < uVar14) {
      piVar5 = (int *)0xa;
      goto LAB_180576c04;
    }
    piVar7 = (int *)(**(code **)(lVar1 + 8))(lVar1,uVar14 * 4);
    piVar5 = (int *)0x40;
    if (piVar7 == (int *)0x0) goto LAB_180576c04;
  }
  if (0 < (int)*param_8) {
    piVar5 = (int *)(puVar6 + 2);
    piVar10 = piVar13;
    piVar17 = piVar7;
    do {
      iVar2 = *piVar5;
      piVar5 = piVar5 + 2;
      uVar14 = (int)piVar10 + 1;
      piVar10 = (int *)(ulonglong)uVar14;
      *piVar17 = iVar2 + param_4;
      piVar17 = piVar17 + 1;
    } while ((int)uVar14 < (int)*param_8);
  }
  *param_7 = (longlong)piVar7;
  piVar5 = piVar13;
LAB_180576c04:
  if (puVar6 != (undefined2 *)0x0) {
    (**(code **)(lVar1 + 0x10))(lVar1,puVar6);
  }
  return piVar5;
}



