// FUN_1803b73b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803b73b0 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_1803b73b0(undefined8 param_1,undefined2 *param_2,ulonglong param_3,ulonglong param_4,
                  ulonglong param_5)

{
  longlong *plVar1;
  bool bVar2;
  bool bVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined8 *******pppppppuVar7;
  char cVar8;
  short sVar9;
  int *piVar10;
  longlong lVar11;
  undefined2 *puVar12;
  int iVar13;
  undefined8 *******pppppppuVar14;
  ulonglong uVar15;
  ulonglong *puVar16;
  bool bVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  int iVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  undefined1 auVar23 [64];
  undefined1 auVar24 [64];
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  ulonglong uStack_18140;
  ulonglong uStack_18138;
  undefined2 uStack_18130;
  uint uStack_1812c;
  ulonglong uStack_18128;
  undefined2 *puStack_18120;
  ulonglong uStack_18118;
  undefined1 auStack_18110 [8];
  ulonglong uStack_18108;
  ulonglong uStack_18100;
  ulonglong uStack_180f8;
  ulonglong uStack_180f0;
  ulonglong uStack_180e8;
  undefined8 uStack_180e0;
  ulonglong uStack_180d8;
  undefined4 uStack_180d0;
  undefined4 uStack_180cc;
  undefined8 *******apppppppuStack_180c8 [2];
  longlong lStack_180b8;
  ulonglong uStack_180b0;
  ulonglong auStack_180a8 [2];
  undefined4 uStack_18098;
  undefined4 uStack_18094;
  
  bVar17 = false;
  uStack_18140 = uStack_18140 & 0xffffffff00000000;
  if (((param_3 != 0) && (param_4 != 0)) && (0x82 < param_5)) {
    iVar20 = 0;
    puStack_18120 = param_2;
    uStack_18108 = param_4;
    do {
      if (iVar20 < 0x10) {
        piVar10 = (int *)FUN_1801b55b0(apppppppuStack_180c8,param_3);
        bVar17 = true;
        plVar1 = (longlong *)(piVar10 + 4);
        if (0xf < *(ulonglong *)(piVar10 + 6)) {
          piVar10 = *(int **)piVar10;
        }
        if (*plVar1 == 7) {
          iVar13 = *piVar10 + -0x4f475343;
          if ((iVar13 == 0) && (iVar13 = *(ushort *)(piVar10 + 1) - 0x7548, iVar13 == 0)) {
            iVar13 = *(byte *)((longlong)piVar10 + 6) - 100;
          }
          if (iVar13 == 0) goto LAB_1803b74b8;
        }
        bVar2 = true;
      }
      else {
LAB_1803b74b8:
        bVar2 = false;
      }
      if (bVar17) {
        bVar17 = false;
        FUN_18015c010(apppppppuStack_180c8);
      }
      if (!bVar2) {
        piVar10 = (int *)FUN_1801b55b0(apppppppuStack_180c8,param_3);
        plVar1 = (longlong *)(piVar10 + 4);
        if (0xf < *(ulonglong *)(piVar10 + 6)) {
          piVar10 = *(int **)piVar10;
        }
        if (*plVar1 == 7) {
          iVar20 = *piVar10 + -0x4f475343;
          if ((iVar20 == 0) && (iVar20 = *(ushort *)(piVar10 + 1) - 0x7548, iVar20 == 0)) {
            iVar20 = *(byte *)((longlong)piVar10 + 6) - 100;
          }
          FUN_18015c010(apppppppuStack_180c8);
          if (iVar20 == 0) {
            lVar11 = FUN_18017ea70();
            *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + 1;
            if (param_3 + 0x18 == 0) {
              bVar17 = false;
              uVar15 = uStack_18118;
            }
            else {
              uStack_18138 = 0;
              cVar8 = FUN_1804514f0(&uStack_18138,param_3 + 0x18,8);
              if (cVar8 == '\0') {
                bVar17 = false;
                uVar15 = uStack_18118;
              }
              else {
                bVar17 = true;
                uVar15 = uStack_18138;
              }
            }
            lVar11 = FUN_18017ea70();
            if (*(int *)(lVar11 + 4) != 0) {
              *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + -1;
            }
            if (bVar17) {
              uVar21 = 1;
              fVar25 = 16.0;
              fVar26 = 32768.0;
              auVar24 = ZEXT464((uint)uStack_18140);
              auVar23 = ZEXT464((uint)uStack_18140);
              uStack_18094 = uStack_180e0._4_4_;
              auStack_180a8[1] = uVar15;
              uStack_18138 = 0;
              auStack_180a8[0] = param_3;
              uStack_18098 = 0;
              uStack_18128 = 1;
              bVar17 = false;
              uVar27 = 0;
              uVar15 = uStack_18108;
              goto LAB_1803b7650;
            }
          }
        }
        else {
          FUN_18015c010(apppppppuStack_180c8);
        }
        break;
      }
      lVar11 = FUN_18017ea70();
      *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + 1;
      lVar11 = param_3 + 0x18;
      bVar2 = false;
      param_3 = param_4;
      if (lVar11 != 0) {
        uStack_18138 = 0;
        cVar8 = FUN_1804514f0(&uStack_18138,lVar11,8);
        if (cVar8 == '\0') {
          bVar2 = false;
        }
        else {
          bVar2 = true;
          param_3 = uStack_18138;
        }
      }
      lVar11 = FUN_18017ea70();
      if (*(int *)(lVar11 + 4) != 0) {
        *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + -1;
      }
      if ((!bVar2) || (param_3 == 0)) break;
      iVar20 = iVar20 + 1;
      param_4 = param_3;
    } while( true );
  }
LAB_1803b7be3:
  *(undefined1 *)((longlong)param_2 + 1) = 0;
LAB_1803b7650:
  uVar4 = uStack_18138;
  uStack_180e0 = auStack_180a8[uStack_18138 * 3 + 2];
  uVar22 = auStack_180a8[uStack_18138 * 3];
  uVar19 = auStack_180a8[uStack_18138 * 3 + 1];
  lVar11 = FUN_18017ea70();
  *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + 1;
  if (uVar22 == 0) {
    bVar2 = false;
  }
  else {
    uStack_18140 = 0;
    cVar8 = FUN_1804514f0(&uStack_18140,uVar22,8);
    if (cVar8 == '\0') {
      bVar2 = false;
    }
    else {
      bVar2 = true;
      uStack_18100 = uStack_18140;
    }
  }
  uVar6 = uStack_18100;
  lVar11 = FUN_18017ea70();
  if (*(int *)(lVar11 + 4) != 0) {
    *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + -1;
  }
  uVar18 = 0;
  if (bVar2) {
    uVar18 = uVar6;
  }
  lVar11 = FUN_18017ea70();
  *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + 1;
  if (uVar22 + 0x18 == 0) {
    bVar2 = false;
  }
  else {
    uStack_18140 = 0;
    cVar8 = FUN_1804514f0(&uStack_18140,uVar22 + 0x18,8);
    if (cVar8 == '\0') {
      bVar2 = false;
    }
    else {
      bVar2 = true;
      uStack_180f8 = uStack_18140;
    }
  }
  uVar6 = uStack_180f8;
  lVar11 = FUN_18017ea70();
  if (*(int *)(lVar11 + 4) != 0) {
    *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + -1;
  }
  if ((((uVar18 < uStack_18108) || (param_5 <= uVar18 - uStack_18108)) || (!bVar2)) ||
     (uVar6 != uVar19)) {
    uStack_18130._1_1_ = 0;
    puVar12 = &uStack_18130;
  }
  else {
    uStack_180d0 = 0xffffffff;
    uStack_180cc = 0;
    uStack_180d8 = uVar22;
    puVar12 = (undefined2 *)FUN_1803bad50(uStack_18108,auStack_18110,&uStack_180d8,uStack_18108);
  }
  if ((char)((ushort)*puVar12 >> 8) == '\0') {
    if (uVar4 == 0) {
      param_2 = puStack_18120;
      goto LAB_1803b7be3;
    }
    bVar17 = true;
    uStack_18138 = uVar4;
  }
  else if ((char)*puVar12 == '\0') {
    if (uVar4 == 0) {
      *puStack_18120 = 0x101;
    }
    uStack_18138 = uVar4;
  }
  else {
    FUN_1801b55b0(apppppppuStack_180c8,uVar22);
    uVar19 = uStack_180b0;
    lVar11 = lStack_180b8;
    pppppppuVar7 = apppppppuStack_180c8[0];
    pppppppuVar14 = apppppppuStack_180c8;
    if (0xf < uStack_180b0) {
      pppppppuVar14 = apppppppuStack_180c8[0];
    }
    if ((lStack_180b8 == 10) && (iVar20 = memcmp(pppppppuVar14,"Scoreboard",10), iVar20 == 0)) {
      iVar20 = 1;
LAB_1803b784a:
      pppppppuVar14 = apppppppuStack_180c8;
      if (0xf < uVar19) {
        pppppppuVar14 = pppppppuVar7;
      }
      if (lVar11 == 0xf) {
        iVar13 = memcmp(pppppppuVar14,"ScoreboardPanel",0xf);
joined_r0x0001803b78bb:
        if (iVar13 == 0) {
          lVar11 = FUN_18017ea70();
          *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + 1;
          if (uVar22 + 0x50 == 0) {
            bVar2 = false;
          }
          else {
            uStack_18140 = CONCAT44(uStack_18140._4_4_,uVar27);
            cVar8 = FUN_1804514f0(&uStack_18140,uVar22 + 0x50,4);
            if (cVar8 == '\0') {
              bVar2 = false;
            }
            else {
              auVar23 = ZEXT464((uint)uStack_18140);
              bVar2 = true;
            }
          }
          lVar11 = FUN_18017ea70();
          if (*(int *)(lVar11 + 4) != 0) {
            *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + -1;
          }
          lVar11 = FUN_18017ea70();
          *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + 1;
          bVar3 = false;
          if (uVar22 + 0x54 != 0) {
            uStack_18140 = CONCAT44(uStack_18140._4_4_,uVar27);
            cVar8 = FUN_1804514f0(&uStack_18140,uVar22 + 0x54,4);
            if (cVar8 == '\0') {
              bVar3 = false;
            }
            else {
              auVar24 = ZEXT464((uint)uStack_18140);
              bVar3 = true;
            }
          }
          lVar11 = FUN_18017ea70();
          if (*(int *)(lVar11 + 4) != 0) {
            *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + -1;
          }
          if ((!bVar2) || (!bVar3)) {
            bVar17 = true;
          }
          else {
            sVar9 = thunk_FUN_180624430(auVar23._0_8_);
            if (sVar9 < 1) {
              sVar9 = thunk_FUN_180624430(auVar24._0_8_);
              if (sVar9 < 1) {
                if (fVar25 <= auVar23._0_4_) {
                  if (((fVar25 <= auVar24._0_4_) && (auVar23._0_4_ <= fVar26)) &&
                     (auVar24._0_4_ <= fVar26)) {
                    *puStack_18120 = 0x101;
                    FUN_18015c010(apppppppuStack_180c8);
                  }
                }
              }
            }
          }
        }
      }
    }
    else {
      pppppppuVar14 = apppppppuStack_180c8;
      if (0xf < uVar19) {
        pppppppuVar14 = pppppppuVar7;
      }
      if ((lVar11 == 0xe) && (iVar20 = memcmp(pppppppuVar14,"TeamSelectMenu",0xe), iVar20 == 0)) {
        iVar20 = 2;
LAB_1803b7898:
        pppppppuVar14 = apppppppuStack_180c8;
        if (0xf < uVar19) {
          pppppppuVar14 = pppppppuVar7;
        }
        if (lVar11 == 0x11) {
          iVar13 = memcmp(pppppppuVar14,"TeamSelectButtons",0x11);
          goto joined_r0x0001803b78bb;
        }
      }
      else {
        iVar20 = (int)uStack_180e0;
        if ((int)uStack_180e0 == 1) goto LAB_1803b784a;
        if ((int)uStack_180e0 == 2) goto LAB_1803b7898;
      }
    }
    lVar11 = FUN_18017ea70();
    *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + 1;
    if (uVar22 + 0x28 == 0) {
      bVar2 = false;
    }
    else {
      uStack_18140 = uStack_18140 & 0xffffffff00000000;
      cVar8 = FUN_1804514f0(&uStack_18140,uVar22 + 0x28,4);
      if (cVar8 == '\0') {
        bVar2 = false;
      }
      else {
        bVar2 = true;
        uStack_1812c = (uint)uStack_18140;
      }
    }
    uVar5 = uStack_1812c;
    lVar11 = FUN_18017ea70();
    if (*(int *)(lVar11 + 4) != 0) {
      *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + -1;
    }
    if ((!bVar2) || (0x200 < uVar5)) {
LAB_1803b7b94:
      bVar17 = true;
    }
    else if (uVar5 != 0) {
      lVar11 = FUN_18017ea70();
      *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + 1;
      if (uVar22 + 0x30 == 0) {
        bVar2 = false;
      }
      else {
        uStack_18140 = 0;
        cVar8 = FUN_1804514f0(&uStack_18140,uVar22 + 0x30,8);
        if (cVar8 == '\0') {
          bVar2 = false;
        }
        else {
          bVar2 = true;
          uStack_18118 = uStack_18140;
        }
      }
      uVar19 = uStack_18118;
      lVar11 = FUN_18017ea70();
      if (*(int *)(lVar11 + 4) != 0) {
        *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + -1;
      }
      if ((bVar2) && (uVar19 != 0)) {
        if ((ulonglong)(longlong)(int)uVar5 <= 0x1000 - uStack_18128) {
          if (0 < (int)uVar5) {
            uVar21 = (ulonglong)uStack_1812c;
            puVar16 = auStack_180a8 + uStack_18128 * 3;
            do {
              lVar11 = FUN_18017ea70();
              *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + 1;
              if (uVar19 == 0) {
                bVar2 = false;
              }
              else {
                uStack_18140 = 0;
                cVar8 = FUN_1804514f0(&uStack_18140,uVar19,8);
                if (cVar8 == '\0') {
                  bVar2 = false;
                }
                else {
                  bVar2 = true;
                  uVar15 = uStack_18140;
                }
              }
              lVar11 = FUN_18017ea70();
              if (*(int *)(lVar11 + 4) != 0) {
                *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + -1;
              }
              if ((!bVar2) || (uVar15 == 0)) {
                bVar17 = true;
              }
              else {
                uStack_18128 = uStack_18128 + 1;
                *puVar16 = uVar15;
                puVar16[1] = uVar22;
                uStack_180e0 = CONCAT44(uStack_180e0._4_4_,iVar20);
                puVar16[2] = uStack_180e0;
                puVar16 = puVar16 + 3;
                uStack_180f0 = uVar15;
                uStack_180e8 = uVar22;
              }
              uVar19 = uVar19 + 8;
              uVar21 = uVar21 - 1;
            } while (uVar21 != 0);
          }
          FUN_18015c010(apppppppuStack_180c8);
          uVar21 = uStack_18128;
          goto LAB_1803b7baa;
        }
        uVar21 = uStack_18128;
      }
      goto LAB_1803b7b94;
    }
    FUN_18015c010(apppppppuStack_180c8);
  }
LAB_1803b7baa:
  uStack_18138 = uStack_18138 + 1;
  if (uVar21 <= uStack_18138) {
    if (bVar17) {
      *(undefined1 *)((longlong)puStack_18120 + 1) = 0;
    }
    else {
      *puStack_18120 = 0x100;
    }
  }
  goto LAB_1803b7650;
}



