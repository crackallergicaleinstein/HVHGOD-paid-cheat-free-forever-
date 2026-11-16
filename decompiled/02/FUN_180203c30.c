// FUN_180203c30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180203c30 */

undefined * FUN_180203c30(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  ULONGLONG UVar5;
  longlong lVar6;
  longlong lVar7;
  char *pcVar8;
  int iVar9;
  uint uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  int iVar15;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38 [2];
  
  iVar4 = DAT_180c635dc;
  if (DAT_180c635dc == 0) {
    UVar5 = GetTickCount64();
    if (UVar5 < DAT_180c635e0) {
      iVar4 = 0;
    }
    else {
      local_48 = &DAT_1808e88e0;
      iVar4 = FUN_1805f68d0(&DAT_1808e88e0);
      if (iVar4 != 0) goto LAB_180204591;
      if (DAT_1808e892c == 0x7fffffff) {
        DAT_1808e892c = 0x7ffffffe;
        goto LAB_180204586;
      }
      if ((DAT_180c635dc == 0) && (DAT_180c635e0 <= UVar5)) {
        DAT_180c635dc = FUN_1804174b0("C_BasePlayerPawn",0x51b23a93);
        if (DAT_180c635dc == 0) {
          DAT_180c635e0 = UVar5 + 1000;
        }
        else {
          DAT_180c635e0 = 0xffffffffffffffff;
        }
      }
      iVar4 = DAT_180c635dc;
      FUN_1805f68fc(&DAT_1808e88e0);
    }
  }
  lVar6 = FUN_18017ea70();
  *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
  bVar1 = false;
  if (iVar4 + param_2 != 0) {
    local_48 = (undefined *)0x0;
    cVar2 = FUN_1804514f0(&local_48,iVar4 + param_2,8);
    if (cVar2 == '\0') {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
  }
  puVar11 = local_48;
  lVar6 = FUN_18017ea70();
  if (*(int *)(lVar6 + 4) != 0) {
    *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
  }
  if ((!bVar1) || (puVar11 == (undefined *)0x0)) {
    iVar4 = 0;
  }
  else {
    iVar4 = DAT_180c635d8;
    if (DAT_180c635d8 == 0) {
      UVar5 = GetTickCount64();
      if (UVar5 < DAT_180c635d0) {
        iVar4 = 0;
      }
      else {
        local_48 = &DAT_1808e8890;
        iVar4 = FUN_1805f68d0(&DAT_1808e8890);
        if (iVar4 != 0) goto LAB_180204591;
        if (DAT_1808e88dc == 0x7fffffff) {
          DAT_1808e88dc = 0x7ffffffe;
          goto LAB_180204586;
        }
        if ((DAT_180c635d8 == 0) && (DAT_180c635d0 <= UVar5)) {
          DAT_180c635d8 = FUN_1804174b0("CPlayer_WeaponServices",0x940131c5);
          if (DAT_180c635d8 == 0) {
            DAT_180c635d0 = UVar5 + 1000;
          }
          else {
            DAT_180c635d0 = 0xffffffffffffffff;
          }
        }
        iVar4 = DAT_180c635d8;
        FUN_1805f68fc(&DAT_1808e8890);
      }
    }
    lVar6 = FUN_18017ea70();
    *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
    puVar11 = puVar11 + iVar4;
    if (puVar11 == (undefined *)0x0) {
      bVar1 = false;
      iVar3 = (int)local_48;
    }
    else {
      local_40 = (undefined *)((ulonglong)local_40 & 0xffffffff00000000);
      cVar2 = FUN_1804514f0(&local_40,puVar11,4);
      if (cVar2 == '\0') {
        bVar1 = false;
        iVar3 = (int)local_48;
      }
      else {
        bVar1 = true;
        iVar3 = (int)local_40;
      }
    }
    lVar6 = FUN_18017ea70();
    if (*(int *)(lVar6 + 4) != 0) {
      *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
    }
    iVar4 = 0;
    if (bVar1) {
      iVar4 = iVar3;
    }
  }
  iVar15 = 0;
  local_48 = (undefined *)CONCAT44(local_48._4_4_,iVar4);
  iVar3 = DAT_180c635c4;
  if (DAT_180c635c4 == 0) {
    UVar5 = GetTickCount64();
    if (UVar5 < DAT_180c635c8) {
      iVar3 = 0;
    }
    else {
      local_38[0] = &DAT_1808e8840;
      iVar3 = FUN_1805f68d0(&DAT_1808e8840);
      if (iVar3 != 0) goto LAB_180204591;
      if (DAT_1808e888c == 0x7fffffff) {
        DAT_1808e888c = 0x7ffffffe;
        goto LAB_180204586;
      }
      if ((DAT_180c635c4 == 0) && (DAT_180c635c8 <= UVar5)) {
        DAT_180c635c4 = FUN_1804174b0("C_BaseEntity",0x6d279c31);
        if (DAT_180c635c4 == 0) {
          DAT_180c635c8 = UVar5 + 1000;
        }
        else {
          DAT_180c635c8 = 0xffffffffffffffff;
        }
      }
      iVar3 = DAT_180c635c4;
      FUN_1805f68fc(&DAT_1808e8840);
    }
  }
  if ((iVar4 - 1U < 0xfffffffe) && (iVar3 != 0)) {
    iVar4 = DAT_180c635c0;
    if (DAT_180c635c0 == 0) {
      UVar5 = GetTickCount64();
      if (UVar5 < DAT_180c635b8) {
        iVar4 = 0;
      }
      else {
        local_38[0] = &DAT_1808e87f0;
        iVar4 = FUN_1805f68d0(&DAT_1808e87f0);
        if (iVar4 != 0) goto LAB_180204591;
        if (DAT_1808e883c == 0x7fffffff) {
          DAT_1808e883c = 0x7ffffffe;
          goto LAB_180204586;
        }
        if ((DAT_180c635c0 == 0) && (DAT_180c635b8 <= UVar5)) {
          DAT_180c635c0 = FUN_1804174b0("C_CSPlayerPawn",0x2279a8c6);
          if (DAT_180c635c0 == 0) {
            DAT_180c635b8 = UVar5 + 1000;
          }
          else {
            DAT_180c635b8 = 0xffffffffffffffff;
          }
        }
        iVar4 = DAT_180c635c0;
        FUN_1805f68fc(&DAT_1808e87f0);
      }
    }
    lVar6 = FUN_18017ea70();
    *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
    if (iVar4 + param_2 == 0) {
      bVar1 = false;
      iVar4 = (int)local_48;
    }
    else {
      local_40 = (undefined *)((ulonglong)local_40 & 0xffffffff00000000);
      cVar2 = FUN_1804514f0(&local_40,iVar4 + param_2,4);
      if (cVar2 == '\0') {
        bVar1 = false;
        iVar4 = (int)local_48;
      }
      else {
        bVar1 = true;
        iVar4 = (int)local_40;
      }
    }
    lVar6 = FUN_18017ea70();
    iVar9 = *(int *)(lVar6 + 4);
    if (iVar9 != 0) {
      iVar9 = iVar9 + -1;
      *(int *)(lVar6 + 4) = iVar9;
    }
    if (!bVar1) {
      return (undefined *)0x0;
    }
    if (iVar4 == 0) {
      return (undefined *)0x0;
    }
    lVar6 = FUN_1803d4150(iVar9,iVar4);
    if (lVar6 == 0) {
      return (undefined *)0x0;
    }
    iVar4 = DAT_180c635ac;
    if (DAT_180c635ac == 0) {
      UVar5 = GetTickCount64();
      if (UVar5 < DAT_180c635b0) {
        iVar4 = 0;
      }
      else {
        local_38[0] = &DAT_1808e87a0;
        iVar4 = FUN_1805f68d0(&DAT_1808e87a0);
        if (iVar4 != 0) goto LAB_180204591;
        if (DAT_1808e87ec == 0x7fffffff) {
          DAT_1808e87ec = 0x7ffffffe;
          goto LAB_180204586;
        }
        if ((DAT_180c635ac == 0) && (DAT_180c635b0 <= UVar5)) {
          DAT_180c635ac = FUN_1804174b0("C_BaseEntity",0x9d930423);
          if (DAT_180c635ac == 0) {
            DAT_180c635b0 = UVar5 + 1000;
          }
          else {
            DAT_180c635b0 = 0xffffffffffffffff;
          }
        }
        iVar4 = DAT_180c635ac;
        FUN_1805f68fc(&DAT_1808e87a0);
      }
    }
    lVar7 = FUN_18017ea70();
    *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
    if (iVar4 + lVar6 == 0) {
      bVar1 = false;
      puVar11 = local_48;
    }
    else {
      local_38[0] = (undefined *)0x0;
      cVar2 = FUN_1804514f0(local_38,iVar4 + lVar6,8);
      if (cVar2 == '\0') {
        bVar1 = false;
        puVar11 = local_48;
      }
      else {
        bVar1 = true;
        puVar11 = local_38[0];
      }
    }
    lVar6 = FUN_18017ea70();
    if (*(int *)(lVar6 + 4) != 0) {
      *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
    }
    if ((bVar1) && (puVar11 != (undefined *)0x0)) {
      iVar4 = DAT_180c635a8;
      if (DAT_180c635a8 == 0) {
        UVar5 = GetTickCount64();
        if (UVar5 < DAT_180c635a0) {
          iVar4 = 0;
        }
        else {
          local_38[0] = &DAT_1808e8750;
          iVar4 = FUN_1805f68d0(&DAT_1808e8750);
          if (iVar4 != 0) {
LAB_180204591:
                    /* WARNING: Subroutine does not return */
            FUN_1805f6d44(5);
          }
          if (DAT_1808e879c == 0x7fffffff) {
            DAT_1808e879c = 0x7ffffffe;
LAB_180204586:
                    /* WARNING: Subroutine does not return */
            FUN_1805f6d44(6);
          }
          if ((DAT_180c635a8 == 0) && (DAT_180c635a0 <= UVar5)) {
            DAT_180c635a8 = FUN_1804174b0("CGameSceneNode",0x4a0b773f);
            if (DAT_180c635a8 == 0) {
              DAT_180c635a0 = UVar5 + 1000;
            }
            else {
              DAT_180c635a0 = 0xffffffffffffffff;
            }
          }
          iVar4 = DAT_180c635a8;
          FUN_1805f68fc(&DAT_1808e8750);
        }
      }
      lVar6 = FUN_18017ea70();
      *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
      if (puVar11 + iVar4 == (undefined *)0x0) {
        bVar1 = false;
        puVar11 = local_48;
      }
      else {
        local_38[0] = (undefined *)0x0;
        cVar2 = FUN_1804514f0(local_38,puVar11 + iVar4,8);
        if (cVar2 == '\0') {
          bVar1 = false;
          puVar11 = local_48;
        }
        else {
          bVar1 = true;
          puVar11 = local_38[0];
        }
      }
      lVar6 = FUN_18017ea70();
      if (*(int *)(lVar6 + 4) != 0) {
        *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
      }
      if ((bVar1) && (puVar11 != (undefined *)0x0)) {
        puVar13 = local_48;
        puVar14 = local_48;
        do {
          iVar4 = DAT_180c63594;
          if (puVar11 < (undefined *)0x10001) {
            return (undefined *)0x0;
          }
          if (0x3f < iVar15) {
            return (undefined *)0x0;
          }
          if ((DAT_180c63594 == 0) && (UVar5 = GetTickCount64(), DAT_180c63598 <= UVar5)) {
            local_40 = &DAT_1808e8700;
            iVar4 = FUN_1805f68d0(&DAT_1808e8700);
            if (iVar4 != 0) goto LAB_180204591;
            if (DAT_1808e874c == 0x7fffffff) {
              DAT_1808e874c = 0x7ffffffe;
              goto LAB_180204586;
            }
            if ((DAT_180c63594 == 0) && (DAT_180c63598 <= UVar5)) {
              DAT_180c63594 = FUN_1804174b0("CGameSceneNode",0x6b325da);
              DAT_180c63598 = 0xffffffffffffffff;
              if (DAT_180c63594 == 0) {
                DAT_180c63598 = UVar5 + 1000;
              }
            }
            iVar4 = DAT_180c63594;
            FUN_1805f68fc(&DAT_1808e8700);
          }
          lVar6 = FUN_18017ea70();
          *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
          bVar1 = false;
          if (puVar11 + iVar4 != (undefined *)0x0) {
            local_40 = (undefined *)0x0;
            cVar2 = FUN_1804514f0(&local_40,puVar11 + iVar4,8);
            if (cVar2 == '\0') {
              bVar1 = false;
            }
            else {
              bVar1 = true;
              puVar14 = local_40;
            }
          }
          lVar6 = FUN_18017ea70();
          iVar4 = *(int *)(lVar6 + 4);
          if (iVar4 != 0) {
            iVar4 = iVar4 + -1;
            *(int *)(lVar6 + 4) = iVar4;
          }
          if (((bVar1) && ((undefined *)0x10000 < puVar14)) &&
             (pcVar8 = (char *)FUN_1803d3fa0(iVar4,puVar14), pcVar8 != (char *)0x0)) {
            uVar10 = 0x811c9dc5;
            cVar2 = *pcVar8;
            if (cVar2 != '\0') {
              do {
                pcVar8 = pcVar8 + 1;
                uVar10 = ((int)cVar2 ^ uVar10) * 0x1000193;
                cVar2 = *pcVar8;
              } while (cVar2 != '\0');
              if (uVar10 == 0xda74ab9b) {
                lVar6 = FUN_18017ea70();
                *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
                if (puVar14 + iVar3 == (undefined *)0x0) {
                  bVar1 = false;
                  iVar4 = (int)local_38[0];
                }
                else {
                  local_40 = (undefined *)((ulonglong)local_40 & 0xffffffff00000000);
                  cVar2 = FUN_1804514f0(&local_40,puVar14 + iVar3,4);
                  if (cVar2 == '\0') {
                    bVar1 = false;
                    iVar4 = (int)local_38[0];
                  }
                  else {
                    local_38[0] = (undefined *)CONCAT44(local_38[0]._4_4_,(int)local_40);
                    bVar1 = true;
                    iVar4 = (int)local_40;
                  }
                }
                lVar6 = FUN_18017ea70();
                if (*(int *)(lVar6 + 4) != 0) {
                  *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
                }
                if ((bVar1) && (iVar4 == (int)local_48)) {
                  return puVar14;
                }
              }
            }
          }
          iVar4 = DAT_180c63590;
          if ((DAT_180c63590 == 0) && (UVar5 = GetTickCount64(), DAT_180c63588 <= UVar5)) {
            local_40 = &DAT_1808e86b0;
            iVar4 = FUN_1805f68d0(&DAT_1808e86b0);
            if (iVar4 != 0) goto LAB_180204591;
            if (DAT_1808e86fc == 0x7fffffff) {
              DAT_1808e86fc = 0x7ffffffe;
              goto LAB_180204586;
            }
            if ((DAT_180c63590 == 0) && (DAT_180c63588 <= UVar5)) {
              DAT_180c63590 = FUN_1804174b0("CGameSceneNode",0x40e828fc);
              DAT_180c63588 = 0xffffffffffffffff;
              if (DAT_180c63590 == 0) {
                DAT_180c63588 = UVar5 + 1000;
              }
            }
            iVar4 = DAT_180c63590;
            FUN_1805f68fc(&DAT_1808e86b0);
          }
          lVar6 = FUN_18017ea70();
          *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
          puVar12 = puVar11 + iVar4;
          bVar1 = false;
          puVar11 = puVar13;
          if (puVar12 != (undefined *)0x0) {
            local_40 = (undefined *)0x0;
            cVar2 = FUN_1804514f0(&local_40,puVar12,8);
            if (cVar2 == '\0') {
              bVar1 = false;
            }
            else {
              bVar1 = true;
              puVar11 = local_40;
            }
          }
          lVar6 = FUN_18017ea70();
          if (*(int *)(lVar6 + 4) != 0) {
            *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
          }
          if (!bVar1) {
            return (undefined *)0x0;
          }
          iVar15 = iVar15 + 1;
          puVar13 = puVar11;
          if (puVar11 == (undefined *)0x0) {
            return (undefined *)0x0;
          }
        } while( true );
      }
    }
  }
  return (undefined *)0x0;
}



