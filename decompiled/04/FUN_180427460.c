// FUN_180427460 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180427460 */

void FUN_180427460(longlong param_1,char *param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  if (*(char *)(param_1 + 0x9c59) != '\0') {
    iVar1 = strcmp(param_2,"linearGradient");
    if (iVar1 == 0) {
LAB_1804276bc:
      FUN_180426cb0(param_1,param_3,2);
      return;
    }
    iVar1 = strcmp(param_2,"radialGradient");
    if (iVar1 != 0) {
      lVar4 = 0;
      do {
        lVar3 = lVar4 + 1;
        if (param_2[lVar4] != (&DAT_18081e908)[lVar4]) {
          return;
        }
        lVar4 = lVar3;
      } while (lVar3 != 5);
      FUN_1804272d0(param_1,param_3);
      return;
    }
LAB_1804276e2:
    FUN_180426cb0(param_1,param_3,3);
    return;
  }
  if ((*param_2 == 'g') && (param_2[1] == '\0')) {
    FUN_180421a20();
    FUN_180424630(param_1,param_3);
    return;
  }
  lVar3 = 0;
  lVar4 = 0;
  do {
    lVar2 = lVar4 + 1;
    if (param_2[lVar4] != (&DAT_180811b3c)[lVar4]) {
      lVar4 = 0;
      goto LAB_180427553;
    }
    lVar4 = lVar2;
  } while (lVar2 != 5);
  if (*(char *)(param_1 + 0x9c58) != '\0') {
    return;
  }
  FUN_180421a20(param_1);
  FUN_180424ef0(param_1,param_3);
  goto LAB_18042768e;
  while (lVar4 = lVar2, lVar2 != 5) {
LAB_180427553:
    lVar2 = lVar4 + 1;
    if (param_2[lVar4] != (&DAT_18081e990)[lVar4]) {
      lVar4 = 0;
      goto LAB_180427590;
    }
  }
  FUN_180421a20(param_1);
  FUN_1804258b0(param_1,param_3);
  goto LAB_18042768e;
  while (lVar4 = lVar2, lVar2 != 7) {
LAB_180427590:
    lVar2 = lVar4 + 1;
    if (param_2[lVar4] != "circle"[lVar4]) {
      lVar4 = 0;
      goto LAB_1804275d0;
    }
  }
  FUN_180421a20(param_1);
  FUN_180425e00(param_1,param_3);
  goto LAB_18042768e;
  while (lVar4 = lVar2, lVar2 != 8) {
LAB_1804275d0:
    lVar2 = lVar4 + 1;
    if (param_2[lVar4] != "ellipse"[lVar4]) {
      lVar4 = 0;
      goto LAB_180427610;
    }
  }
  FUN_180421a20(param_1);
  FUN_180426160(param_1,param_3);
  goto LAB_18042768e;
  while (lVar4 = lVar2, lVar2 != 5) {
LAB_180427610:
    lVar2 = lVar4 + 1;
    if (param_2[lVar4] != (&DAT_18081e968)[lVar4]) {
      iVar1 = strcmp(param_2,"polyline");
      if (iVar1 == 0) {
        FUN_180421a20(param_1);
        uVar5 = 0;
        goto LAB_180427683;
      }
      lVar4 = 0;
      goto LAB_180427662;
    }
  }
  FUN_180421a20(param_1);
  FUN_1804264a0(param_1,param_3);
  goto LAB_18042768e;
  while (lVar4 = lVar2, lVar2 != 8) {
LAB_180427662:
    lVar2 = lVar4 + 1;
    if (param_2[lVar4] != "polygon"[lVar4]) {
      iVar1 = strcmp(param_2,"linearGradient");
      if (iVar1 == 0) goto LAB_1804276bc;
      iVar1 = strcmp(param_2,"radialGradient");
      if (iVar1 != 0) {
        lVar4 = 0;
        do {
          lVar2 = lVar4 + 1;
          if (param_2[lVar4] != (&DAT_18081e908)[lVar4]) {
            lVar4 = 0;
            do {
              lVar2 = lVar4 + 1;
              if (param_2[lVar4] != (&DAT_18081e960)[lVar4]) {
                do {
                  lVar4 = lVar3 + 1;
                  if (param_2[lVar3] != (&DAT_18081e99c)[lVar3]) {
                    return;
                  }
                  lVar3 = lVar4;
                } while (lVar4 != 4);
                FUN_1804268b0(param_1,param_3);
                return;
              }
              lVar4 = lVar2;
            } while (lVar2 != 5);
            *(undefined1 *)(param_1 + 0x9c59) = 1;
            return;
          }
          lVar4 = lVar2;
        } while (lVar2 != 5);
        FUN_1804272d0(param_1,param_3);
        return;
      }
      goto LAB_1804276e2;
    }
  }
  FUN_180421a20(param_1);
  uVar5 = 1;
LAB_180427683:
  FUN_180426680(param_1,param_3,uVar5);
LAB_18042768e:
  if (0 < *(int *)(param_1 + 0x9c00)) {
    *(int *)(param_1 + 0x9c00) = *(int *)(param_1 + 0x9c00) + -1;
  }
  return;
}



