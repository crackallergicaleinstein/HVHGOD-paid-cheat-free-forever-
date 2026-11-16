// FUN_1803ff4b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803ff4b0 */

/* WARNING: Removing unreachable block (ram,0x0001803ffb2b) */

void FUN_1803ff4b0(longlong *param_1,longlong *param_2)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ULONGLONG UVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  ulonglong uVar13;
  longlong *plVar14;
  longlong *local_88;
  longlong *local_80;
  longlong *local_70;
  longlong *plStack_68;
  longlong *plStack_60;
  longlong *plStack_58;
  longlong *local_50;
  longlong *plStack_48;
  int local_40;
  int iStack_3c;
  
  plStack_68 = (longlong *)0x0;
  plStack_60 = (longlong *)0x0;
  plStack_58 = (longlong *)0x0;
  local_50 = (longlong *)0x0;
  plStack_48 = (longlong *)0x0;
  iStack_3c = 0;
  uVar13 = 0xffffffffffffffff;
  iVar4 = DAT_180c7d678;
  local_80 = param_1;
  local_70 = param_2;
  if (DAT_180c7d678 == 0) {
    UVar8 = GetTickCount64();
    if (UVar8 < DAT_180c7d670) {
      iVar4 = 0;
    }
    else {
      local_88 = (longlong *)&DAT_1809c05d0;
      iVar4 = FUN_1805f68d0(&DAT_1809c05d0);
      if (iVar4 != 0) goto LAB_1803ffd3e;
      if (DAT_1809c061c == 0x7fffffff) {
        DAT_1809c061c = 0x7ffffffe;
        goto LAB_1803ffd33;
      }
      if ((DAT_180c7d678 == 0) && (DAT_180c7d670 <= UVar8)) {
        DAT_180c7d678 = FUN_1804174b0("C_BaseEntity",0x9d930423);
        if (DAT_180c7d678 == 0) {
          DAT_180c7d670 = UVar8 + 1000;
        }
        else {
          DAT_180c7d670 = 0xffffffffffffffff;
        }
      }
      iVar4 = DAT_180c7d678;
      FUN_1805f68fc(&DAT_1809c05d0);
    }
  }
  iVar5 = DAT_180c7d67c;
  if (DAT_180c7d67c == 0) {
    UVar8 = GetTickCount64();
    if (UVar8 < DAT_180c7d680) {
      iVar5 = 0;
    }
    else {
      local_88 = (longlong *)&DAT_1809c0620;
      iVar5 = FUN_1805f68d0(&DAT_1809c0620);
      if (iVar5 != 0) goto LAB_1803ffd3e;
      if (DAT_1809c066c == 0x7fffffff) {
        DAT_1809c066c = 0x7ffffffe;
        goto LAB_1803ffd33;
      }
      if ((DAT_180c7d67c == 0) && (DAT_180c7d680 <= UVar8)) {
        DAT_180c7d67c = FUN_1804174b0("CGameSceneNode",0x6b325da);
        if (DAT_180c7d67c == 0) {
          DAT_180c7d680 = UVar8 + 1000;
        }
        else {
          DAT_180c7d680 = 0xffffffffffffffff;
        }
      }
      iVar5 = DAT_180c7d67c;
      FUN_1805f68fc(&DAT_1809c0620);
    }
  }
  iVar6 = DAT_180c7d638;
  if (DAT_180c7d638 == 0) {
    UVar8 = GetTickCount64();
    if (UVar8 < DAT_180c7d630) {
      iVar6 = 0;
    }
    else {
      local_88 = (longlong *)&DAT_1809c04e0;
      iVar6 = FUN_1805f68d0(&DAT_1809c04e0);
      if (iVar6 != 0) goto LAB_1803ffd3e;
      if (DAT_1809c052c == 0x7fffffff) {
        DAT_1809c052c = 0x7ffffffe;
        goto LAB_1803ffd33;
      }
      if ((DAT_180c7d638 == 0) && (DAT_180c7d630 <= UVar8)) {
        DAT_180c7d638 = FUN_1804174b0("CSkeletonInstance",0x52ac8c4f);
        if (DAT_180c7d638 == 0) {
          DAT_180c7d630 = UVar8 + 1000;
        }
        else {
          DAT_180c7d630 = 0xffffffffffffffff;
        }
      }
      iVar6 = DAT_180c7d638;
      FUN_1805f68fc(&DAT_1809c04e0);
    }
  }
  iVar7 = DAT_180c7d63c;
  if (DAT_180c7d63c == 0) {
    UVar8 = GetTickCount64();
    if (UVar8 < DAT_180c7d640) {
      iVar7 = 0;
    }
    else {
      local_88 = (longlong *)&DAT_1809c0530;
      iVar7 = FUN_1805f68d0(&DAT_1809c0530);
      if (iVar7 != 0) {
LAB_1803ffd3e:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1809c057c == 0x7fffffff) {
        DAT_1809c057c = 0x7ffffffe;
LAB_1803ffd33:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      if ((DAT_180c7d63c == 0) && (DAT_180c7d640 <= UVar8)) {
        DAT_180c7d63c = FUN_1804174b0("CModelState",0xe100c814);
        if (DAT_180c7d63c == 0) {
          uVar13 = UVar8 + 1000;
        }
        DAT_180c7d640 = uVar13;
      }
      iVar7 = DAT_180c7d63c;
      FUN_1805f68fc(&DAT_1809c0530);
    }
  }
  if ((((param_2 != (longlong *)0x0) && (iVar4 != 0)) && (iVar5 != 0)) &&
     ((iVar6 != 0 && (iVar7 != 0)))) {
    if (param_2 + 2 == (longlong *)0x0) {
      bVar2 = false;
      plVar12 = local_80;
    }
    else {
      local_88 = (longlong *)0x0;
      lVar9 = FUN_18017ea70();
      *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
      cVar3 = FUN_1804514c0(&local_88,param_2 + 2,8);
      if (cVar3 == '\0') {
        bVar2 = false;
        lVar9 = FUN_18017ea70();
        if (*(int *)(lVar9 + 4) != 0) {
          *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
        }
        plVar12 = local_80;
      }
      else {
        bVar2 = true;
        lVar9 = FUN_18017ea70();
        if (*(int *)(lVar9 + 4) != 0) {
          *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
        }
        plVar12 = local_88;
      }
    }
    if (!bVar2) {
      plVar12 = (longlong *)0x0;
    }
    if (plVar12 != (longlong *)0x0) {
      local_88 = (longlong *)0x0;
      plStack_68 = plVar12;
      lVar9 = FUN_18017ea70();
      *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
      cVar3 = FUN_1804514c0(&local_88,plVar12,8);
      if (cVar3 == '\0') {
        bVar2 = false;
        lVar9 = FUN_18017ea70();
        if (*(int *)(lVar9 + 4) != 0) {
          *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
        }
        plVar10 = local_80;
      }
      else {
        bVar2 = true;
        lVar9 = FUN_18017ea70();
        if (*(int *)(lVar9 + 4) != 0) {
          *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
        }
        plVar10 = local_88;
      }
      bVar1 = false;
      if (!bVar2) {
        plVar10 = (longlong *)0x0;
      }
      if ((plVar10 == param_2) && (plVar12 + 2 != (longlong *)0x0)) {
        local_88 = (longlong *)((ulonglong)local_88 & 0xffffffff00000000);
        lVar9 = FUN_18017ea70();
        *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
        cVar3 = FUN_1804514c0(&local_88,plVar12 + 2,4);
        if (cVar3 != '\0') {
          lVar9 = FUN_18017ea70();
          if (*(int *)(lVar9 + 4) != 0) {
            *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
          }
          local_40 = (int)local_88;
          if ((int)local_88 == -1) goto LAB_1803ff908;
          if ((longlong)iVar4 + (longlong)param_2 == 0) {
            plVar12 = local_80;
          }
          else {
            local_88 = (longlong *)0x0;
            lVar9 = FUN_18017ea70();
            *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
            cVar3 = FUN_1804514c0(&local_88,(longlong)iVar4 + (longlong)param_2,8);
            if (cVar3 == '\0') {
              lVar9 = FUN_18017ea70();
              if (*(int *)(lVar9 + 4) != 0) {
                *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
              }
              plVar12 = local_80;
            }
            else {
              bVar1 = true;
              lVar9 = FUN_18017ea70();
              if (*(int *)(lVar9 + 4) != 0) {
                *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
              }
              plVar12 = local_88;
            }
          }
          if (!bVar1) {
            plVar12 = (longlong *)0x0;
          }
          if (plVar12 == (longlong *)0x0) goto LAB_1803ff908;
          plStack_60 = plVar12;
          if ((longlong)iVar5 + (longlong)plVar12 == 0) {
            bVar2 = false;
            plVar10 = local_80;
          }
          else {
            local_88 = (longlong *)0x0;
            lVar9 = FUN_18017ea70();
            *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
            cVar3 = FUN_1804514c0(&local_88,(longlong)iVar5 + (longlong)plVar12,8);
            if (cVar3 == '\0') {
              bVar2 = false;
              lVar9 = FUN_18017ea70();
              if (*(int *)(lVar9 + 4) != 0) {
                *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
              }
              plVar10 = local_80;
            }
            else {
              bVar2 = true;
              lVar9 = FUN_18017ea70();
              if (*(int *)(lVar9 + 4) != 0) {
                *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
              }
              plVar10 = local_88;
            }
          }
          plVar14 = (longlong *)0x0;
          if (!bVar2) {
            plVar10 = plVar14;
          }
          if (plVar10 != param_2) goto LAB_1803ff908;
          lVar9 = (longlong)plVar12 + (longlong)iVar7 + (longlong)iVar6;
          if (lVar9 == 0) {
            bVar2 = false;
            plVar10 = local_80;
          }
          else {
            local_88 = (longlong *)0x0;
            lVar11 = FUN_18017ea70();
            *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + 1;
            cVar3 = FUN_1804514c0(&local_88,lVar9,8);
            if (cVar3 == '\0') {
              bVar2 = false;
              lVar9 = FUN_18017ea70();
              if (*(int *)(lVar9 + 4) != 0) {
                *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
              }
              plVar10 = local_80;
            }
            else {
              bVar2 = true;
              lVar9 = FUN_18017ea70();
              if (*(int *)(lVar9 + 4) != 0) {
                *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
              }
              plVar10 = local_88;
            }
          }
          if (!bVar2) {
            plVar10 = plVar14;
          }
          plStack_58 = plVar10;
          if (plVar10 == (longlong *)0x0) {
            local_50 = (longlong *)0x0;
          }
          else {
            local_88 = (longlong *)0x0;
            lVar9 = FUN_18017ea70();
            *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
            cVar3 = FUN_1804514c0(&local_88,plVar10,8);
            if (cVar3 == '\0') {
              lVar9 = FUN_18017ea70();
              if (*(int *)(lVar9 + 4) != 0) {
                *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
              }
              local_50 = (longlong *)0x0;
            }
            else {
              lVar9 = FUN_18017ea70();
              if (*(int *)(lVar9 + 4) != 0) {
                *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
              }
              local_50 = local_88;
            }
          }
          plVar10 = local_50;
          lVar9 = (longlong)plVar12 + (longlong)iVar6 + 0x80;
          if (lVar9 == 0) {
            bVar2 = false;
            plVar12 = local_80;
          }
          else {
            local_88 = (longlong *)0x0;
            lVar11 = FUN_18017ea70();
            *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + 1;
            cVar3 = FUN_1804514c0(&local_88,lVar9,8);
            if (cVar3 == '\0') {
              bVar2 = false;
              lVar9 = FUN_18017ea70();
              if (*(int *)(lVar9 + 4) != 0) {
                *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
              }
              plVar12 = local_80;
            }
            else {
              bVar2 = true;
              lVar9 = FUN_18017ea70();
              if (*(int *)(lVar9 + 4) != 0) {
                *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
              }
              plVar12 = local_88;
            }
          }
          if (!bVar2) {
            plVar12 = plVar14;
          }
          if (plVar10 == (longlong *)0x0) goto LAB_1803ff908;
          plStack_48 = plVar12;
          if (plVar10 + 0x2f == (longlong *)0x0) {
            bVar2 = false;
            iVar4 = (int)local_80;
          }
          else {
            local_88 = (longlong *)((ulonglong)local_88 & 0xffffffff00000000);
            lVar9 = FUN_18017ea70();
            *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
            cVar3 = FUN_1804514c0(&local_88,plVar10 + 0x2f,4);
            if (cVar3 == '\0') {
              bVar2 = false;
              lVar9 = FUN_18017ea70();
              if (*(int *)(lVar9 + 4) != 0) {
                *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
              }
              iVar4 = (int)local_80;
            }
            else {
              bVar2 = true;
              lVar9 = FUN_18017ea70();
              if (*(int *)(lVar9 + 4) != 0) {
                *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
              }
              iVar4 = (int)local_88;
            }
          }
          if (!bVar2) {
            iVar4 = 0;
          }
          if ((plVar12 == (longlong *)0x0) || (0x1ff < iVar4 - 1U)) goto LAB_1803ff908;
          iStack_3c = iVar4;
          if (iVar4 < 0x81) {
LAB_1803ffcff:
            *local_80 = (longlong)local_70;
            local_80[1] = (longlong)plStack_68;
            local_80[2] = (longlong)plStack_60;
            local_80[3] = (longlong)plStack_58;
            local_80[4] = (longlong)local_50;
            local_80[5] = (longlong)plStack_48;
            local_80[6] = CONCAT44(iStack_3c,local_40);
            *(undefined1 *)(local_80 + 7) = 1;
            return;
          }
          if (plVar10 + 0x2c == (longlong *)0x0) goto LAB_1803ff908;
          local_88 = (longlong *)((ulonglong)local_88 & 0xffffffff00000000);
          lVar9 = FUN_18017ea70();
          *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
          cVar3 = FUN_1804514c0(&local_88,plVar10 + 0x2c,4);
          if (cVar3 != '\0') {
            lVar9 = FUN_18017ea70();
            if (*(int *)(lVar9 + 4) != 0) {
              *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
            }
            if (((int)local_88 != iVar4) || (plVar10 + 0x31 == (longlong *)0x0)) goto LAB_1803ff908;
            local_88 = (longlong *)((ulonglong)local_88 & 0xffffffff00000000);
            lVar9 = FUN_18017ea70();
            *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
            cVar3 = FUN_1804514c0(&local_88,plVar10 + 0x31,4);
            if (cVar3 != '\0') {
              lVar9 = FUN_18017ea70();
              if (*(int *)(lVar9 + 4) != 0) {
                *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
              }
              if ((int)local_88 == iVar4) goto LAB_1803ffcff;
              goto LAB_1803ff908;
            }
          }
        }
        lVar9 = FUN_18017ea70();
        if (*(int *)(lVar9 + 4) != 0) {
          *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
        }
      }
    }
  }
LAB_1803ff908:
  *(undefined1 *)(local_80 + 7) = 0;
  return;
}



