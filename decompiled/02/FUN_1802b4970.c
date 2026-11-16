// FUN_1802b4970 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802b4970 */

longlong * FUN_1802b4970(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  ULONGLONG UVar5;
  ulonglong uVar6;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *(undefined2 *)(param_2 + 4) = 0;
  *(undefined4 *)((longlong)param_2 + 0x24) = 0;
  *(undefined1 *)(param_2 + 5) = 0;
  lVar1 = *param_3;
  *param_2 = lVar1;
  *(int *)(param_2 + 1) = (int)param_3[1];
  iVar4 = (int)param_3[1];
  if (iVar4 == 0x3e9aa8ce) {
    iVar3 = 1;
  }
  else if (iVar4 == 0x40987e9a) {
    iVar3 = 4;
  }
  else if (iVar4 == 0x4e65f325) {
    iVar3 = 2;
  }
  else if (iVar4 == 0x74db88a5) {
    iVar3 = 0;
  }
  else {
    iVar3 = 3;
    if (iVar4 != -0x9359614) {
      iVar3 = -1;
    }
  }
  *(int *)((longlong)param_2 + 0xc) = iVar3;
  if (lVar1 == 0) {
    return param_2;
  }
  if (iVar3 == -1) {
    return param_2;
  }
  uVar6 = 0xffffffffffffffff;
  iVar4 = DAT_180c6e58c;
  if (DAT_180c6e58c == 0) {
    UVar5 = GetTickCount64();
    if (UVar5 < DAT_180c6e590) {
      iVar4 = 0;
    }
    else {
      iVar4 = FUN_1805f68d0(&DAT_1808f4960);
      if (iVar4 != 0) goto LAB_1802b4fd1;
      if (DAT_1808f49ac == 0x7fffffff) {
        DAT_1808f49ac = 0x7ffffffe;
        goto LAB_1802b4fc6;
      }
      if ((DAT_180c6e58c == 0) && (DAT_180c6e590 <= UVar5)) {
        DAT_180c6e58c = FUN_1804174b0("C_BaseEntity",0x9d930423);
        if (DAT_180c6e58c == 0) {
          DAT_180c6e590 = UVar5 + 1000;
        }
        else {
          DAT_180c6e590 = 0xffffffffffffffff;
        }
      }
      iVar4 = DAT_180c6e58c;
      FUN_1805f68fc(&DAT_1808f4960);
    }
  }
  lVar1 = *(longlong *)((longlong)iVar4 + *param_2);
  if (lVar1 == 0) {
LAB_1802b4fb4:
    *param_2 = 0;
    return param_2;
  }
  iVar4 = DAT_180c6e578;
  if (DAT_180c6e578 == 0) {
    UVar5 = GetTickCount64();
    if (UVar5 < DAT_180c6e580) {
      iVar4 = 0;
    }
    else {
      iVar4 = FUN_1805f68d0(&DAT_1808f4910);
      if (iVar4 != 0) goto LAB_1802b4fd1;
      if (DAT_1808f495c == 0x7fffffff) {
        DAT_1808f495c = 0x7ffffffe;
        goto LAB_1802b4fc6;
      }
      if ((DAT_180c6e578 == 0) && (DAT_180c6e580 <= UVar5)) {
        DAT_180c6e578 = FUN_1804174b0("CGameSceneNode",0xe8b4eae5);
        if (DAT_180c6e578 == 0) {
          DAT_180c6e580 = UVar5 + 1000;
        }
        else {
          DAT_180c6e580 = 0xffffffffffffffff;
        }
      }
      iVar4 = DAT_180c6e578;
      FUN_1805f68fc(&DAT_1808f4910);
    }
  }
  param_2[2] = *(longlong *)(iVar4 + lVar1);
  *(undefined4 *)(param_2 + 3) = *(undefined4 *)((longlong)iVar4 + 8 + lVar1);
  sVar2 = thunk_FUN_180624430(*(float *)((longlong)param_2 + 0x14) + *(float *)(param_2 + 2) +
                              *(float *)(param_2 + 3));
  if (0 < sVar2) goto LAB_1802b4fb4;
  if (*(int *)((longlong)param_2 + 0xc) == 3) {
    iVar4 = DAT_180c6e588;
    if (DAT_180c6e588 == 0) {
      UVar5 = GetTickCount64();
      if (UVar5 < DAT_180c6e560) {
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_1805f68d0(&DAT_1808f48c0);
        if (iVar4 != 0) goto LAB_1802b4fd1;
        if (DAT_1808f490c == 0x7fffffff) {
          DAT_1808f490c = 0x7ffffffe;
          goto LAB_1802b4fc6;
        }
        if ((DAT_180c6e588 == 0) && (DAT_180c6e560 <= UVar5)) {
          DAT_180c6e588 = FUN_1804174b0("C_MolotovProjectile",0x9d1c12b7);
          if (DAT_180c6e588 == 0) {
            DAT_180c6e560 = UVar5 + 1000;
          }
          else {
            DAT_180c6e560 = 0xffffffffffffffff;
          }
        }
        iVar4 = DAT_180c6e588;
        FUN_1805f68fc(&DAT_1808f48c0);
      }
    }
    *(undefined1 *)(param_2 + 5) = *(undefined1 *)((longlong)iVar4 + *param_2);
  }
  iVar4 = *(int *)((longlong)param_2 + 0xc);
  if ((iVar4 == 0) || (iVar4 == 1)) {
    iVar4 = DAT_180c6e568;
    if (DAT_180c6e568 == 0) {
      UVar5 = GetTickCount64();
      if (UVar5 < DAT_180c6e570) {
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_1805f68d0(&DAT_1808f4820);
        if (iVar4 != 0) goto LAB_1802b4fd1;
        if (DAT_1808f486c == 0x7fffffff) {
          DAT_1808f486c = 0x7ffffffe;
          goto LAB_1802b4fc6;
        }
        if ((DAT_180c6e568 == 0) && (DAT_180c6e570 <= UVar5)) {
          DAT_180c6e568 = FUN_1804174b0("C_BaseCSGrenadeProjectile",0x2f04f603);
          if (DAT_180c6e568 == 0) {
            uVar6 = UVar5 + 1000;
          }
          DAT_180c6e570 = uVar6;
        }
        iVar4 = DAT_180c6e568;
        FUN_1805f68fc(&DAT_1808f4820);
      }
    }
    *(bool *)(param_2 + 4) = 0 < *(int *)((longlong)iVar4 + *param_2);
    return param_2;
  }
  if (iVar4 != 2) {
    if (iVar4 != 4) {
      return param_2;
    }
    iVar4 = DAT_180c6e550;
    if (DAT_180c6e550 == 0) {
      UVar5 = GetTickCount64();
      if (UVar5 < DAT_180c6e538) {
        *(undefined4 *)((longlong)param_2 + 0x24) = *(undefined4 *)*param_2;
        return param_2;
      }
      iVar4 = FUN_1805f68d0(&DAT_1808f4780);
      if (iVar4 != 0) {
LAB_1802b4fd1:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1808f47cc == 0x7fffffff) {
        DAT_1808f47cc = 0x7ffffffe;
LAB_1802b4fc6:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      if ((DAT_180c6e550 == 0) && (DAT_180c6e538 <= UVar5)) {
        DAT_180c6e550 = FUN_1804174b0("C_DecoyProjectile",0xc4efed0a);
        if (DAT_180c6e550 == 0) {
          uVar6 = UVar5 + 1000;
        }
        DAT_180c6e538 = uVar6;
      }
      iVar4 = DAT_180c6e550;
      FUN_1805f68fc(&DAT_1808f4780);
    }
    *(undefined4 *)((longlong)param_2 + 0x24) = *(undefined4 *)((longlong)iVar4 + *param_2);
    return param_2;
  }
  iVar4 = DAT_180c6e554;
  if (DAT_180c6e554 == 0) {
    UVar5 = GetTickCount64();
    if (UVar5 < DAT_180c6e558) {
      iVar4 = 0;
    }
    else {
      iVar4 = FUN_1805f68d0(&DAT_1808f4870);
      if (iVar4 != 0) goto LAB_1802b4fd1;
      if (DAT_1808f48bc == 0x7fffffff) {
        DAT_1808f48bc = 0x7ffffffe;
        goto LAB_1802b4fc6;
      }
      if ((DAT_180c6e554 == 0) && (DAT_180c6e558 <= UVar5)) {
        DAT_180c6e554 = FUN_1804174b0("C_SmokeGrenadeProjectile",0xf5a25253);
        if (DAT_180c6e554 == 0) {
          DAT_180c6e558 = UVar5 + 1000;
        }
        else {
          DAT_180c6e558 = 0xffffffffffffffff;
        }
      }
      iVar4 = DAT_180c6e554;
      FUN_1805f68fc(&DAT_1808f4870);
    }
  }
  *(undefined4 *)((longlong)param_2 + 0x24) = *(undefined4 *)((longlong)iVar4 + *param_2);
  iVar4 = DAT_180c6e540;
  if (DAT_180c6e540 == 0) {
    UVar5 = GetTickCount64();
    if (UVar5 < DAT_180c6e548) {
      iVar4 = 0;
    }
    else {
      iVar4 = FUN_1805f68d0(&DAT_1808f47d0);
      if (iVar4 != 0) goto LAB_1802b4fd1;
      if (DAT_1808f481c == 0x7fffffff) {
        DAT_1808f481c = 0x7ffffffe;
        goto LAB_1802b4fc6;
      }
      if ((DAT_180c6e540 == 0) && (DAT_180c6e548 <= UVar5)) {
        DAT_180c6e540 = FUN_1804174b0("C_SmokeGrenadeProjectile",0x81a8b092);
        if (DAT_180c6e540 == 0) {
          uVar6 = UVar5 + 1000;
        }
        DAT_180c6e548 = uVar6;
      }
      iVar4 = DAT_180c6e540;
      FUN_1805f68fc(&DAT_1808f47d0);
    }
  }
  *(undefined1 *)((longlong)param_2 + 0x21) = *(undefined1 *)((longlong)iVar4 + *param_2);
  return param_2;
}



