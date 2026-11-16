// FUN_1805155f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805155f0 */

undefined * FUN_1805155f0(longlong param_1,int param_2)

{
  ulonglong uVar1;
  longlong *in_RAX;
  undefined4 extraout_var;
  longlong *plVar2;
  undefined4 extraout_var_00;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  int *piVar7;
  undefined8 *puVar8;
  
  if ((*(longlong *)(param_1 + 0x28) != 0) && (*(char *)(param_1 + 4) != '\t')) {
    plVar6 = *(longlong **)(param_1 + 8);
    in_RAX = (longlong *)FUN_18050fed0();
    if ((char)in_RAX != '\0') {
      if (param_2 == 0) {
        uVar1 = *(ulonglong *)(param_1 + 0x50);
        plVar2 = (longlong *)(param_1 + 0x38);
        lVar5 = *(longlong *)(param_1 + 0x48);
        if (uVar1 < 0x10) {
          in_RAX = plVar2;
        }
        else {
          in_RAX = (longlong *)*plVar2;
        }
        if (lVar5 == 5) {
          iVar3 = (int)*in_RAX + -0x706f6373;
          if (iVar3 == 0) {
            iVar3 = *(byte *)((longlong)in_RAX + 4) - 0x65;
          }
          if (iVar3 == 0) goto switchD_1805157aa_caseD_1;
        }
        puVar8 = (undefined8 *)(param_1 + 0x38);
        if (0xf < uVar1) {
          plVar2 = (longlong *)*plVar2;
        }
        if (lVar5 == 0xe) {
          lVar4 = *plVar2 + -0x64657463656c6573;
          if (lVar4 == 0) {
            in_RAX = (longlong *)0x6f726720;
            lVar4 = (ulonglong)*(uint *)(plVar2 + 1) - 0x6f726720;
            if (lVar4 == 0) {
              in_RAX = (longlong *)0x7075;
              lVar4 = (ulonglong)*(ushort *)((longlong)plVar2 + 0xc) - 0x7075;
            }
          }
          if (lVar4 == 0) goto switchD_1805157aa_caseD_1;
        }
        if (0xf < uVar1) {
          puVar8 = (undefined8 *)*puVar8;
        }
        if (lVar5 == 0xf) {
          iVar3 = memcmp(puVar8,"selected weapon",0xf);
          in_RAX = (longlong *)CONCAT44(extraout_var,iVar3);
          if (iVar3 == 0) goto switchD_1805157aa_caseD_1;
        }
        in_RAX = (longlong *)&DAT_180cadce0;
        if ((plVar6 < &DAT_180cadbf0) || ((longlong *)0x180cadcdf < plVar6)) {
          if ((plVar6 < &DAT_180c8fdb8) || ((longlong *)0x180cad2df < plVar6)) {
            if ((longlong *)((longlong)&DAT_180c7e1ec + 3) < plVar6) {
              if (plVar6 < (longlong *)0x180c8fdb8) {
                if (DAT_180cad2e0 == 1) {
                  plVar2 = (longlong *)FUN_180509800();
                  if ((plVar2 <= plVar6) && (in_RAX = plVar2 + 0xdd, plVar6 < in_RAX))
                  goto LAB_180515789;
                  in_RAX = *(longlong **)(param_1 + 0x28);
                  piVar7 = (int *)(param_1 + 0x18);
                  if (0xf < *(ulonglong *)(param_1 + 0x30)) {
                    piVar7 = *(int **)piVar7;
                  }
                  if (in_RAX == (longlong *)0x7) {
                    iVar3 = *piVar7 + -0x65676172;
                    if (iVar3 == 0) {
                      in_RAX = (longlong *)0x6f62;
                      iVar3 = *(ushort *)(piVar7 + 1) - 0x6f62;
                      if (iVar3 == 0) {
                        iVar3 = *(byte *)((longlong)piVar7 + 6) - 0x74;
                      }
                    }
                    if (iVar3 == 0) {
                      return (undefined *)CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
                    }
                  }
                }
              }
              else if (plVar6 < &DAT_180cadce0) {
                plVar2 = (longlong *)(param_1 + 0x38);
                plVar6 = plVar2;
                if (0xf < *(ulonglong *)(param_1 + 0x50)) {
                  plVar6 = (longlong *)*plVar2;
                }
                if (*(longlong *)(param_1 + 0x48) == 0xd) {
                  lVar5 = *plVar6 + -0x64657463656c6573;
                  if (lVar5 == 0) {
                    in_RAX = (longlong *)0x646f6d20;
                    lVar5 = (ulonglong)*(uint *)(plVar6 + 1) - 0x646f6d20;
                    if (lVar5 == 0) {
                      in_RAX = (longlong *)0x0;
                      lVar5 = (ulonglong)*(byte *)((longlong)plVar6 + 0xc) - 0x65;
                    }
                  }
                  if (lVar5 == 0) goto switchD_1805157aa_caseD_1;
                }
                if (0xf < *(ulonglong *)(param_1 + 0x50)) {
                  plVar2 = (longlong *)*plVar2;
                }
                if (*(longlong *)(param_1 + 0x48) == 0xe) {
                  in_RAX = (longlong *)0x6379632065646f6d;
                  lVar5 = *plVar2 + -0x6379632065646f6d;
                  if (lVar5 == 0) {
                    in_RAX = (longlong *)0x6b20656c;
                    lVar5 = (ulonglong)*(uint *)(plVar2 + 1) - 0x6b20656c;
                    if (lVar5 == 0) {
                      in_RAX = (longlong *)0x7965;
                      lVar5 = (ulonglong)*(ushort *)((longlong)plVar2 + 0xc) - 0x7965;
                    }
                  }
                  if (lVar5 == 0) goto switchD_1805157aa_caseD_1;
                }
                if (DAT_180cad2e0 == 1) {
                  return (undefined *)CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
                }
              }
            }
          }
          else if (DAT_180cad2e0 == 0) {
            plVar2 = (longlong *)FUN_180509ec0(&DAT_180c8fdb8);
            if ((plVar6 < plVar2) || (in_RAX = plVar2 + 0x16e, in_RAX <= plVar6)) {
              in_RAX = *(longlong **)(param_1 + 0x28);
              plVar6 = (longlong *)(param_1 + 0x18);
              if (0xf < *(ulonglong *)(param_1 + 0x30)) {
                plVar6 = (longlong *)*plVar6;
              }
              if ((in_RAX != (longlong *)&DAT_00000008) ||
                 (in_RAX = (longlong *)0x746f62746967656c, *plVar6 != 0x746f62746967656c))
              goto switchD_1805157aa_caseD_1;
            }
            goto LAB_180515789;
          }
        }
      }
      else {
        switch(param_2) {
        case 3:
          if (((&DAT_180cc8be0 <= plVar6) &&
              (in_RAX = (longlong *)&DAT_180cc9240, plVar6 < &DAT_180cc9240)) ||
             (((in_RAX = *(longlong **)(param_1 + 8), &DAT_180b0c8c0 <= in_RAX &&
               (in_RAX < &DAT_180b0c928)) ||
              ((&DAT_180b0c9f8 <= in_RAX && (in_RAX < &DAT_180b0ca60)))))) goto LAB_180515789;
          if (((longlong *)0x180b0cac7 < in_RAX) && (in_RAX < &DAT_180b0cb30)) {
            return (undefined *)CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
          }
          break;
        case 5:
          in_RAX = (longlong *)&DAT_180b0b320;
          if (((((longlong *)0x180b0b31f < plVar6) &&
               (in_RAX = (longlong *)&DAT_180b0df40, plVar6 < &DAT_180b0df40)) &&
              ((plVar6 < &DAT_180b0d7e0 ||
               (in_RAX = (longlong *)&DAT_180b0d998,
               (longlong *)((longlong)&DAT_180b0d994 + 3) < plVar6)))) &&
             ((in_RAX = (longlong *)&DAT_180b0d998, plVar6 != (longlong *)&DAT_180b0d998 &&
              (in_RAX = (longlong *)&DAT_180b0b3c8,
              (longlong *)((longlong)&DAT_180b0b3c4 + 3) < plVar6)))) {
            if (((longlong *)0x180b0be77 < plVar6) && (plVar6 < &DAT_180b0c858)) {
              puVar8 = (undefined8 *)(param_1 + 0x38);
              if (0xf < *(ulonglong *)(param_1 + 0x50)) {
                puVar8 = (undefined8 *)*puVar8;
              }
              if (((2 < *(ulonglong *)(param_1 + 0x48)) &&
                  (lVar5 = *(ulonglong *)(param_1 + 0x48) + (longlong)puVar8,
                  lVar4 = thunk_FUN_1805f9970(puVar8,lVar5,&DAT_180866e68,3), lVar4 != lVar5)) &&
                 (in_RAX = (longlong *)(lVar4 - (longlong)puVar8),
                 in_RAX != (longlong *)0xffffffffffffffff)) break;
            }
            in_RAX = (longlong *)&DAT_180b0da70;
            if ((((((plVar6 != (longlong *)&DAT_180b0da70) &&
                   (in_RAX = (longlong *)&DAT_180b0b4d8, plVar6 != (longlong *)&DAT_180b0b4d8)) &&
                  ((plVar6 < &DAT_180b0cde0 ||
                   (in_RAX = (longlong *)&DAT_180b0d6f8, &DAT_180b0d6f7 < plVar6)))) &&
                 (((plVar6 < &DAT_180b0cba0 ||
                   (in_RAX = (longlong *)&DAT_180b0cd68, (longlong *)0x180b0cd67 < plVar6)) &&
                  ((plVar6 < &DAT_180b0cd68 ||
                   (in_RAX = (longlong *)&DAT_180b0cde0, (longlong *)0x180b0cddf < plVar6)))))) &&
                (((plVar6 < &DAT_180b0b540 ||
                  (in_RAX = (longlong *)&DAT_180b0be78, (longlong *)0x180b0be77 < plVar6)) &&
                 ((plVar6 < &DAT_180b0c858 ||
                  (in_RAX = (longlong *)&DAT_180b0cba0,
                  (longlong *)((longlong)&DAT_180b0cb9c + 3) < plVar6)))))) &&
               ((((plVar6 < &DAT_180b0dad8 ||
                  (in_RAX = (longlong *)&DAT_180b0de18, (longlong *)0x180b0de17 < plVar6)) &&
                 (in_RAX = (longlong *)&DAT_180b0de18, plVar6 < &DAT_180b0de18)) &&
                ((in_RAX = (longlong *)&DAT_180b0b448, plVar6 < &DAT_180b0b448 ||
                 (in_RAX = (longlong *)&DAT_180b0b4d8,
                 (longlong *)((longlong)&DAT_180b0b4d0 + 7) < plVar6)))))) goto LAB_180515789;
          }
          break;
        case 7:
          in_RAX = (longlong *)&DAT_180cc81b0;
          if (((longlong *)0x180cc81af < plVar6) &&
             (in_RAX = (longlong *)&DAT_180cc8bd8, plVar6 < &DAT_180cc8bd8)) {
            return &DAT_180cc8b01;
          }
          break;
        case 8:
          in_RAX = (longlong *)&DAT_180ccaa20;
          if (((longlong *)((longlong)&DAT_180ccaa1c + 3) < plVar6) &&
             (in_RAX = (longlong *)&DAT_180cce2e8, plVar6 < &DAT_180cce2e8)) {
            return &DAT_180cce201;
          }
          break;
        case 9:
          if ((((((&DAT_180b0cba0 <= plVar6) &&
                 (in_RAX = (longlong *)&DAT_180b0cd68, plVar6 < &DAT_180b0cd68)) ||
                ((&DAT_180b0cd68 <= plVar6 &&
                 (in_RAX = (longlong *)&DAT_180b0cde0, plVar6 < &DAT_180b0cde0)))) ||
               ((((&DAT_180b0c858 <= plVar6 &&
                  (plVar6 <= (longlong *)((longlong)&DAT_180b0cb9c + 3))) &&
                 ((in_RAX = *(longlong **)(param_1 + 8), in_RAX < &DAT_180b0c8c0 ||
                  (&DAT_180b0c928 <= in_RAX)))) &&
                (((in_RAX < &DAT_180b0c9f8 || (&DAT_180b0ca60 <= in_RAX)) &&
                 ((in_RAX < &DAT_180b0cac8 || (&DAT_180b0cb30 <= in_RAX)))))))) ||
              (((&DAT_180cb3528 <= plVar6 &&
                (in_RAX = (longlong *)&DAT_180cb3590, plVar6 < &DAT_180cb3590)) ||
               ((&DAT_180b0cde0 <= plVar6 &&
                (in_RAX = (longlong *)&DAT_180b0d018, plVar6 < &DAT_180b0d018)))))) ||
             ((in_RAX = (longlong *)&DAT_180b0d018, &DAT_180b0d018 <= plVar6 &&
              (in_RAX = (longlong *)&DAT_180b0d2d0, plVar6 < &DAT_180b0d2d0)))) goto LAB_180515789;
          if (((longlong *)((longlong)&DAT_180cadbec + 3) < plVar6) &&
             (in_RAX = (longlong *)&DAT_180cadce0, plVar6 < &DAT_180cadce0)) {
            return &DAT_180cadc01;
          }
          break;
        case 10:
          if ((plVar6 < &DAT_180b0b320) ||
             (in_RAX = (longlong *)&DAT_180b0b3c8,
             (longlong *)((longlong)&DAT_180b0b3c4 + 3) < plVar6)) {
            if (((longlong *)0x180b0be77 < plVar6) && (plVar6 < &DAT_180b0c858)) {
              puVar8 = (undefined8 *)(param_1 + 0x38);
              if (0xf < *(ulonglong *)(param_1 + 0x50)) {
                puVar8 = (undefined8 *)*puVar8;
              }
              if (((2 < *(ulonglong *)(param_1 + 0x48)) &&
                  (lVar5 = *(ulonglong *)(param_1 + 0x48) + (longlong)puVar8,
                  lVar4 = thunk_FUN_1805f9970(puVar8,lVar5,&DAT_180866e68,3), lVar4 != lVar5)) &&
                 (in_RAX = (longlong *)(lVar4 - (longlong)puVar8),
                 in_RAX != (longlong *)0xffffffffffffffff)) goto LAB_180515789;
            }
            in_RAX = (longlong *)&DAT_180b0da70;
            if (plVar6 != (longlong *)&DAT_180b0da70) break;
          }
LAB_180515789:
          return (undefined *)CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
        case 0xb:
          if ((((((&DAT_180b0cde0 <= plVar6) && (plVar6 <= &DAT_180b0d6f7)) &&
                (&DAT_180b0d018 <= plVar6)) &&
               ((plVar6 < &DAT_180b0d018 || (&DAT_180b0d2d0 <= plVar6)))) &&
              ((in_RAX = (longlong *)&DAT_180b0d2d0, plVar6 < &DAT_180b0d2d0 ||
               (in_RAX = (longlong *)&DAT_180b0d4c8, &DAT_180b0d4c8 <= plVar6)))) ||
             ((&DAT_180b0de18 <= plVar6 &&
              (in_RAX = (longlong *)&DAT_180b0df40, plVar6 < &DAT_180b0df40)))) goto LAB_180515789;
          in_RAX = (longlong *)&DAT_180cc7f78;
          if ((&DAT_180cc7f77 < plVar6) &&
             (in_RAX = (longlong *)&DAT_180cc8048, plVar6 < &DAT_180cc8048)) {
            return &DAT_180cc8001;
          }
          break;
        case 0xd:
          uVar1 = *(ulonglong *)(param_1 + 0x50);
          plVar2 = (longlong *)(param_1 + 0x38);
          lVar5 = *(longlong *)(param_1 + 0x48);
          if (uVar1 < 0x10) {
            in_RAX = plVar2;
          }
          else {
            in_RAX = (longlong *)*plVar2;
          }
          if (lVar5 == 5) {
            iVar3 = (int)*in_RAX + -0x706f6373;
            if (iVar3 == 0) {
              iVar3 = *(byte *)((longlong)in_RAX + 4) - 0x65;
            }
            if (iVar3 == 0) break;
          }
          puVar8 = (undefined8 *)(param_1 + 0x38);
          if (0xf < uVar1) {
            plVar2 = (longlong *)*plVar2;
          }
          if (lVar5 == 0xe) {
            lVar4 = *plVar2 + -0x64657463656c6573;
            if (lVar4 == 0) {
              in_RAX = (longlong *)0x6f726720;
              lVar4 = (ulonglong)*(uint *)(plVar2 + 1) - 0x6f726720;
              if (lVar4 == 0) {
                in_RAX = (longlong *)0x7075;
                lVar4 = (ulonglong)*(ushort *)((longlong)plVar2 + 0xc) - 0x7075;
              }
            }
            if (lVar4 == 0) break;
          }
          if (0xf < uVar1) {
            puVar8 = (undefined8 *)*puVar8;
          }
          if (lVar5 == 0xf) {
            iVar3 = memcmp(puVar8,"selected weapon",0xf);
            in_RAX = (longlong *)CONCAT44(extraout_var_00,iVar3);
            if (iVar3 == 0) break;
          }
          if (DAT_180c62f68 == 0) {
            in_RAX = (longlong *)FUN_18055ebb0(&DAT_180cb6200);
            if ((in_RAX <= plVar6) && (in_RAX = in_RAX + 0x4a, plVar6 < in_RAX)) {
              return (undefined *)CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
            }
          }
          else if (DAT_180c62f68 == 1) {
            in_RAX = (longlong *)FUN_18055ead0(&DAT_180cbda50);
            if ((in_RAX <= plVar6) && (in_RAX = in_RAX + 0xf, plVar6 < in_RAX)) {
              return (undefined *)CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
            }
          }
          else {
            in_RAX = (longlong *)FUN_180111410(&DAT_180cbf2c0);
            if (DAT_180cbf2c0 == 1) {
              in_RAX = (longlong *)&DAT_180cbf558;
              plVar2 = (longlong *)(&DAT_180cbf558 + (longlong)DAT_180cbf2c4 * 0x288);
            }
            else if (DAT_180cbf2c0 == 2) {
              in_RAX = (longlong *)&DAT_180cc0710;
              plVar2 = (longlong *)(&DAT_180cc0710 + (longlong)DAT_180cbf2c8 * 0x288);
            }
            else {
              plVar2 = (longlong *)&DAT_180cbf2d0;
            }
            if ((((plVar2 <= plVar6) && (in_RAX = plVar2 + 0x51, plVar6 < in_RAX)) &&
                ((plVar6 < plVar2 + 0x2e || (in_RAX = plVar2 + 0x4f, in_RAX <= plVar6)))) &&
               (((in_RAX = (longlong *)((longlong)plVar2 + 0x27c), plVar6 != in_RAX &&
                 (in_RAX = plVar2 + 0xd, plVar6 != in_RAX)) &&
                (in_RAX = (longlong *)((longlong)plVar2 + 0xe4), plVar6 != in_RAX)))) {
              return (undefined *)CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
            }
          }
        }
      }
    }
  }
switchD_1805157aa_caseD_1:
  return (undefined *)((ulonglong)in_RAX & 0xffffffffffffff00);
}



