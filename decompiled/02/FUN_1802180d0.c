// FUN_1802180d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802180d0 */

undefined * FUN_1802180d0(undefined8 param_1,longlong param_2)

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
  
  iVar4 = DAT_180c639b0;
  if (DAT_180c639b0 == 0) {
    UVar5 = GetTickCount64();
    if (UVar5 < DAT_180c639a8) {
      iVar4 = 0;
    }
    else {
      local_48 = &DAT_1808ea070;
      iVar4 = FUN_1805f68d0(&DAT_1808ea070);
      if (iVar4 != 0) goto LAB_180218a31;
      if (DAT_1808ea0bc == 0x7fffffff) {
        DAT_1808ea0bc = 0x7ffffffe;
        goto LAB_180218a26;
      }
      if ((DAT_180c639b0 == 0) && (DAT_180c639a8 <= UVar5)) {
        DAT_180c639b0 = FUN_1804174b0("C_BasePlayerPawn",0x51b23a93);
        if (DAT_180c639b0 == 0) {
          DAT_180c639a8 = UVar5 + 1000;
        }
        else {
          DAT_180c639a8 = 0xffffffffffffffff;
        }
      }
      iVar4 = DAT_180c639b0;
      FUN_1805f68fc(&DAT_1808ea070);
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
    iVar4 = DAT_180c6399c;
    if (DAT_180c6399c == 0) {
      UVar5 = GetTickCount64();
      if (UVar5 < DAT_180c639a0) {
        iVar4 = 0;
      }
      else {
        local_48 = &DAT_1808ea020;
        iVar4 = FUN_1805f68d0(&DAT_1808ea020);
        if (iVar4 != 0) goto LAB_180218a31;
        if (DAT_1808ea06c == 0x7fffffff) {
          DAT_1808ea06c = 0x7ffffffe;
          goto LAB_180218a26;
        }
        if ((DAT_180c6399c == 0) && (DAT_180c639a0 <= UVar5)) {
          DAT_180c6399c = FUN_1804174b0("CPlayer_WeaponServices",0x940131c5);
          if (DAT_180c6399c == 0) {
            DAT_180c639a0 = UVar5 + 1000;
          }
          else {
            DAT_180c639a0 = 0xffffffffffffffff;
          }
        }
        iVar4 = DAT_180c6399c;
        FUN_1805f68fc(&DAT_1808ea020);
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
  iVar3 = DAT_180c63998;
  if (DAT_180c63998 == 0) {
    UVar5 = GetTickCount64();
    if (UVar5 < DAT_180c63990) {
      iVar3 = 0;
    }
    else {
      local_38[0] = &DAT_1808e9fd0;
      iVar3 = FUN_1805f68d0(&DAT_1808e9fd0);
      if (iVar3 != 0) goto LAB_180218a31;
      if (DAT_1808ea01c == 0x7fffffff) {
        DAT_1808ea01c = 0x7ffffffe;
        goto LAB_180218a26;
      }
      if ((DAT_180c63998 == 0) && (DAT_180c63990 <= UVar5)) {
        DAT_180c63998 = FUN_1804174b0("C_BaseEntity",0x6d279c31);
        if (DAT_180c63998 == 0) {
          DAT_180c63990 = UVar5 + 1000;
        }
        else {
          DAT_180c63990 = 0xffffffffffffffff;
        }
      }
      iVar3 = DAT_180c63998;
      FUN_1805f68fc(&DAT_1808e9fd0);
    }
  }
  if ((iVar4 - 1U < 0xfffffffe) && (iVar3 != 0)) {
    iVar4 = DAT_180c63984;
    if (DAT_180c63984 == 0) {
      UVar5 = GetTickCount64();
      if (UVar5 < DAT_180c63988) {
        iVar4 = 0;
      }
      else {
        local_38[0] = &DAT_1808e9f80;
        iVar4 = FUN_1805f68d0(&DAT_1808e9f80);
        if (iVar4 != 0) goto LAB_180218a31;
        if (DAT_1808e9fcc == 0x7fffffff) {
          DAT_1808e9fcc = 0x7ffffffe;
          goto LAB_180218a26;
        }
        if ((DAT_180c63984 == 0) && (DAT_180c63988 <= UVar5)) {
          DAT_180c63984 = FUN_1804174b0("C_CSPlayerPawn",0x2279a8c6);
          if (DAT_180c63984 == 0) {
            DAT_180c63988 = UVar5 + 1000;
          }
          else {
            DAT_180c63988 = 0xffffffffffffffff;
          }
        }
        iVar4 = DAT_180c63984;
        FUN_1805f68fc(&DAT_1808e9f80);
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
    iVar4 = DAT_180c63980;
    if (DAT_180c63980 == 0) {
      UVar5 = GetTickCount64();
      if (UVar5 < DAT_180c63978) {
        iVar4 = 0;
      }
      else {
        local_38[0] = &DAT_1808e9f30;
        iVar4 = FUN_1805f68d0(&DAT_1808e9f30);
        if (iVar4 != 0) goto LAB_180218a31;
        if (DAT_1808e9f7c == 0x7fffffff) {
          DAT_1808e9f7c = 0x7ffffffe;
          goto LAB_180218a26;
        }
        if ((DAT_180c63980 == 0) && (DAT_180c63978 <= UVar5)) {
          DAT_180c63980 = FUN_1804174b0("C_BaseEntity",0x9d930423);
          if (DAT_180c63980 == 0) {
            DAT_180c63978 = UVar5 + 1000;
          }
          else {
            DAT_180c63978 = 0xffffffffffffffff;
          }
        }
        iVar4 = DAT_180c63980;
        FUN_1805f68fc(&DAT_1808e9f30);
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
      iVar4 = DAT_180c6396c;
      if (DAT_180c6396c == 0) {
        UVar5 = GetTickCount64();
        if (UVar5 < DAT_180c63970) {
          iVar4 = 0;
        }
        else {
          local_38[0] = &DAT_1808e9ee0;
          iVar4 = FUN_1805f68d0(&DAT_1808e9ee0);
          if (iVar4 != 0) {
LAB_180218a31:
                    /* WARNING: Subroutine does not return */
            FUN_1805f6d44(5);
          }
          if (DAT_1808e9f2c == 0x7fffffff) {
            DAT_1808e9f2c = 0x7ffffffe;
LAB_180218a26:
                    /* WARNING: Subroutine does not return */
            FUN_1805f6d44(6);
          }
          if ((DAT_180c6396c == 0) && (DAT_180c63970 <= UVar5)) {
            DAT_180c6396c = FUN_1804174b0("CGameSceneNode",0x4a0b773f);
            if (DAT_180c6396c == 0) {
              DAT_180c63970 = UVar5 + 1000;
            }
            else {
              DAT_180c63970 = 0xffffffffffffffff;
            }
          }
          iVar4 = DAT_180c6396c;
          FUN_1805f68fc(&DAT_1808e9ee0);
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
          iVar4 = DAT_180c63968;
          if (puVar11 < (undefined *)0x10001) {
            return (undefined *)0x0;
          }
          if (0x3f < iVar15) {
            return (undefined *)0x0;
          }
          if ((DAT_180c63968 == 0) && (UVar5 = GetTickCount64(), DAT_180c63960 <= UVar5)) {
            local_40 = &DAT_1808e9e90;
            iVar4 = FUN_1805f68d0(&DAT_1808e9e90);
            if (iVar4 != 0) goto LAB_180218a31;
            if (DAT_1808e9edc == 0x7fffffff) {
              DAT_1808e9edc = 0x7ffffffe;
              goto LAB_180218a26;
            }
            if ((DAT_180c63968 == 0) && (DAT_180c63960 <= UVar5)) {
              DAT_180c63968 = FUN_1804174b0("CGameSceneNode",0x6b325da);
              DAT_180c63960 = 0xffffffffffffffff;
              if (DAT_180c63968 == 0) {
                DAT_180c63960 = UVar5 + 1000;
              }
            }
            iVar4 = DAT_180c63968;
            FUN_1805f68fc(&DAT_1808e9e90);
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
          iVar4 = DAT_180c63950;
          if ((DAT_180c63950 == 0) && (UVar5 = GetTickCount64(), DAT_180c63958 <= UVar5)) {
            local_40 = &DAT_1808e9e40;
            iVar4 = FUN_1805f68d0(&DAT_1808e9e40);
            if (iVar4 != 0) goto LAB_180218a31;
            if (DAT_1808e9e8c == 0x7fffffff) {
              DAT_1808e9e8c = 0x7ffffffe;
              goto LAB_180218a26;
            }
            if ((DAT_180c63950 == 0) && (DAT_180c63958 <= UVar5)) {
              DAT_180c63950 = FUN_1804174b0("CGameSceneNode",0x40e828fc);
              DAT_180c63958 = 0xffffffffffffffff;
              if (DAT_180c63950 == 0) {
                DAT_180c63958 = UVar5 + 1000;
              }
            }
            iVar4 = DAT_180c63950;
            FUN_1805f68fc(&DAT_1808e9e40);
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



