// FUN_1801511e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801511e0 */

longlong * FUN_1801511e0(longlong *param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  plVar7 = (longlong *)param_2[2];
  plVar6 = param_2 + 2;
  if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
    cVar1 = *(char *)(*plVar7 + 0x19);
    plVar4 = plVar7;
    plVar5 = (longlong *)*plVar7;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*plVar5 + 0x19);
      plVar4 = plVar5;
      plVar5 = (longlong *)*plVar5;
    }
  }
  else {
    cVar1 = *(char *)(param_2[1] + 0x19);
    plVar8 = (longlong *)param_2[1];
    plVar5 = param_2;
    while ((plVar4 = plVar8, cVar1 == '\0' && (plVar5 == (longlong *)plVar4[2]))) {
      cVar1 = *(char *)(plVar4[1] + 0x19);
      plVar8 = (longlong *)plVar4[1];
      plVar5 = plVar4;
    }
  }
  plVar8 = param_2 + 1;
  plVar5 = (longlong *)*param_2;
  if (*(char *)((longlong)plVar5 + 0x19) == '\0') {
    if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
      plVar7 = (longlong *)plVar4[2];
      if (plVar4 != param_2) {
        plVar5[1] = (longlong)plVar4;
        *plVar4 = *param_2;
        if (plVar4 == (longlong *)*plVar6) {
          plVar5 = plVar4;
        }
        else {
          plVar5 = (longlong *)plVar4[1];
          if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
            plVar7[1] = (longlong)plVar5;
          }
          *plVar5 = (longlong)plVar7;
          plVar4[2] = *plVar6;
          *(longlong **)(*plVar6 + 8) = plVar4;
        }
        if (*(longlong **)(*param_1 + 8) == param_2) {
          *(longlong **)(*param_1 + 8) = plVar4;
        }
        else {
          puVar3 = (undefined8 *)*plVar8;
          if ((longlong *)*puVar3 == param_2) {
            *puVar3 = plVar4;
          }
          else {
            puVar3[2] = plVar4;
          }
        }
        lVar2 = plVar4[3];
        plVar4[1] = *plVar8;
        *(char *)(plVar4 + 3) = (char)param_2[3];
        *(char *)(param_2 + 3) = (char)lVar2;
        goto LAB_180151384;
      }
    }
    else {
      plVar7 = plVar5;
    }
  }
  plVar5 = (longlong *)*plVar8;
  if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
    plVar7[1] = (longlong)plVar5;
  }
  if (*(longlong **)(*param_1 + 8) == param_2) {
    *(longlong **)(*param_1 + 8) = plVar7;
  }
  else if ((longlong *)*plVar5 == param_2) {
    *plVar5 = (longlong)plVar7;
  }
  else {
    plVar5[2] = (longlong)plVar7;
  }
  if (*(longlong **)*param_1 == param_2) {
    if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
      cVar1 = *(char *)(*plVar7 + 0x19);
      plVar6 = (longlong *)*plVar7;
      plVar4 = plVar7;
      while (plVar8 = plVar6, cVar1 == '\0') {
        plVar6 = (longlong *)*plVar8;
        cVar1 = *(char *)((longlong)plVar6 + 0x19);
        plVar4 = plVar8;
      }
    }
    else {
      plVar4 = plVar5;
    }
    *(longlong **)*param_1 = plVar4;
  }
  lVar2 = *param_1;
  if (*(longlong **)(lVar2 + 0x10) == param_2) {
    if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
      cVar1 = *(char *)(plVar7[2] + 0x19);
      plVar6 = (longlong *)plVar7[2];
      plVar4 = plVar7;
      while (plVar8 = plVar6, cVar1 == '\0') {
        plVar6 = (longlong *)plVar8[2];
        cVar1 = *(char *)((longlong)plVar6 + 0x19);
        plVar4 = plVar8;
      }
      *(longlong **)(lVar2 + 0x10) = plVar4;
    }
    else {
      *(longlong **)(lVar2 + 0x10) = plVar5;
    }
  }
LAB_180151384:
  if ((char)param_2[3] == '\x01') {
    if (plVar7 != *(longlong **)(*param_1 + 8)) {
      plVar6 = plVar7;
      if ((char)plVar7[3] == '\x01') {
        do {
          plVar7 = plVar5;
          plVar4 = (longlong *)*plVar7;
          if (plVar6 == plVar4) {
            plVar4 = (longlong *)plVar7[2];
            if ((char)plVar4[3] == '\0') {
              *(undefined1 *)(plVar4 + 3) = 1;
              plVar4 = (longlong *)plVar7[2];
              *(undefined1 *)(plVar7 + 3) = 0;
              plVar7[2] = *plVar4;
              if (*(char *)(*plVar4 + 0x19) == '\0') {
                *(longlong **)(*plVar4 + 8) = plVar7;
              }
              plVar5 = plVar7 + 1;
              plVar4[1] = plVar7[1];
              if (plVar7 == *(longlong **)(*param_1 + 8)) {
                *(longlong **)(*param_1 + 8) = plVar4;
                *plVar4 = (longlong)plVar7;
                *plVar5 = (longlong)plVar4;
                plVar4 = (longlong *)plVar7[2];
              }
              else {
                puVar3 = (undefined8 *)*plVar5;
                if (plVar7 == (longlong *)*puVar3) {
                  *puVar3 = plVar4;
                  *plVar4 = (longlong)plVar7;
                  *plVar5 = (longlong)plVar4;
                  plVar4 = (longlong *)plVar7[2];
                }
                else {
                  puVar3[2] = plVar4;
                  *plVar4 = (longlong)plVar7;
                  *plVar5 = (longlong)plVar4;
                  plVar4 = (longlong *)plVar7[2];
                }
              }
            }
            if (*(char *)((longlong)plVar4 + 0x19) == '\0') {
              if ((*(char *)(*plVar4 + 0x18) != '\x01') || (*(char *)(plVar4[2] + 0x18) != '\x01'))
              {
                if (*(char *)(plVar4[2] + 0x18) == '\x01') {
                  *(undefined1 *)(*plVar4 + 0x18) = 1;
                  lVar2 = *plVar4;
                  *(undefined1 *)(plVar4 + 3) = 0;
                  *plVar4 = *(longlong *)(lVar2 + 0x10);
                  if (*(char *)(*(longlong *)(lVar2 + 0x10) + 0x19) == '\0') {
                    *(longlong **)(*(longlong *)(lVar2 + 0x10) + 8) = plVar4;
                  }
                  *(longlong *)(lVar2 + 8) = plVar4[1];
                  if (plVar4 == *(longlong **)(*param_1 + 8)) {
                    *(longlong *)(*param_1 + 8) = lVar2;
                  }
                  else {
                    plVar5 = (longlong *)plVar4[1];
                    if (plVar4 == (longlong *)plVar5[2]) {
                      plVar5[2] = lVar2;
                    }
                    else {
                      *plVar5 = lVar2;
                    }
                  }
                  *(longlong **)(lVar2 + 0x10) = plVar4;
                  plVar4[1] = lVar2;
                  plVar4 = (longlong *)plVar7[2];
                }
                *(char *)(plVar4 + 3) = (char)plVar7[3];
                *(undefined1 *)(plVar7 + 3) = 1;
                *(undefined1 *)(plVar4[2] + 0x18) = 1;
                plVar4 = (longlong *)plVar7[2];
                plVar7[2] = *plVar4;
                if (*(char *)(*plVar4 + 0x19) == '\0') {
                  *(longlong **)(*plVar4 + 8) = plVar7;
                }
                plVar4[1] = plVar7[1];
                if (plVar7 == *(longlong **)(*param_1 + 8)) {
                  *(longlong **)(*param_1 + 8) = plVar4;
                  *plVar4 = (longlong)plVar7;
                }
                else {
                  puVar3 = (undefined8 *)plVar7[1];
                  if (plVar7 == (longlong *)*puVar3) {
                    *puVar3 = plVar4;
                    *plVar4 = (longlong)plVar7;
                  }
                  else {
                    puVar3[2] = plVar4;
                    *plVar4 = (longlong)plVar7;
                  }
                }
                goto LAB_1801516aa;
              }
              goto LAB_180151540;
            }
          }
          else {
            if ((char)plVar4[3] == '\0') {
              *(undefined1 *)(plVar4 + 3) = 1;
              lVar2 = *plVar7;
              *(undefined1 *)(plVar7 + 3) = 0;
              *plVar7 = *(longlong *)(lVar2 + 0x10);
              if (*(char *)(*(longlong *)(lVar2 + 0x10) + 0x19) == '\0') {
                *(longlong **)(*(longlong *)(lVar2 + 0x10) + 8) = plVar7;
              }
              plVar4 = plVar7 + 1;
              *(longlong *)(lVar2 + 8) = plVar7[1];
              if (plVar7 == *(longlong **)(*param_1 + 8)) {
                *(longlong *)(*param_1 + 8) = lVar2;
                *(longlong **)(lVar2 + 0x10) = plVar7;
                *plVar4 = lVar2;
                plVar4 = (longlong *)*plVar7;
              }
              else {
                plVar5 = (longlong *)*plVar4;
                if (plVar7 == (longlong *)plVar5[2]) {
                  plVar5[2] = lVar2;
                  *(longlong **)(lVar2 + 0x10) = plVar7;
                  *plVar4 = lVar2;
                  plVar4 = (longlong *)*plVar7;
                }
                else {
                  *plVar5 = lVar2;
                  *(longlong **)(lVar2 + 0x10) = plVar7;
                  *plVar4 = lVar2;
                  plVar4 = (longlong *)*plVar7;
                }
              }
            }
            if (*(char *)((longlong)plVar4 + 0x19) == '\0') {
              if ((*(char *)(plVar4[2] + 0x18) != '\x01') || (*(char *)(*plVar4 + 0x18) != '\x01'))
              {
                if (*(char *)(*plVar4 + 0x18) == '\x01') {
                  *(undefined1 *)(plVar4[2] + 0x18) = 1;
                  plVar5 = (longlong *)plVar4[2];
                  *(undefined1 *)(plVar4 + 3) = 0;
                  plVar4[2] = *plVar5;
                  if (*(char *)(*plVar5 + 0x19) == '\0') {
                    *(longlong **)(*plVar5 + 8) = plVar4;
                  }
                  plVar5[1] = plVar4[1];
                  if (plVar4 == *(longlong **)(*param_1 + 8)) {
                    *(longlong **)(*param_1 + 8) = plVar5;
                  }
                  else {
                    puVar3 = (undefined8 *)plVar4[1];
                    if (plVar4 == (longlong *)*puVar3) {
                      *puVar3 = plVar5;
                    }
                    else {
                      puVar3[2] = plVar5;
                    }
                  }
                  *plVar5 = (longlong)plVar4;
                  plVar4[1] = (longlong)plVar5;
                  plVar4 = (longlong *)*plVar7;
                }
                *(char *)(plVar4 + 3) = (char)plVar7[3];
                *(undefined1 *)(plVar7 + 3) = 1;
                *(undefined1 *)(*plVar4 + 0x18) = 1;
                plVar4 = (longlong *)*plVar7;
                *plVar7 = plVar4[2];
                if (*(char *)(plVar4[2] + 0x19) == '\0') {
                  *(longlong **)(plVar4[2] + 8) = plVar7;
                }
                plVar4[1] = plVar7[1];
                if (plVar7 == *(longlong **)(*param_1 + 8)) {
                  *(longlong **)(*param_1 + 8) = plVar4;
                }
                else {
                  puVar3 = (undefined8 *)plVar7[1];
                  if (plVar7 == (longlong *)puVar3[2]) {
                    puVar3[2] = plVar4;
                  }
                  else {
                    *puVar3 = plVar4;
                  }
                }
                plVar4[2] = (longlong)plVar7;
LAB_1801516aa:
                plVar7[1] = (longlong)plVar4;
                plVar7 = plVar6;
                break;
              }
LAB_180151540:
              *(undefined1 *)(plVar4 + 3) = 0;
            }
          }
          if (plVar7 == *(longlong **)(*param_1 + 8)) break;
          plVar5 = (longlong *)plVar7[1];
          plVar6 = plVar7;
        } while ((char)plVar7[3] == '\x01');
      }
    }
    *(undefined1 *)(plVar7 + 3) = 1;
  }
  if (param_1[1] != 0) {
    param_1[1] = param_1[1] + -1;
  }
  return param_2;
}



