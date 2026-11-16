// FUN_1805af220 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805af220 */

int FUN_1805af220(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  char *pcVar4;
  size_t sVar5;
  longlong *plVar6;
  char *pcVar7;
  char *pcVar8;
  size_t sVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int local_98 [2];
  int *local_90;
  undefined8 *local_88;
  char *local_80 [4];
  size_t local_60 [5];
  longlong local_38;
  
  lVar3 = *(longlong *)(param_1 + 0xe8);
  uVar11 = 0;
  local_60[4] = *(undefined8 *)(param_1 + 0x98);
  local_98[0] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  local_80[0] = (char *)0x0;
  local_80[1] = (char *)0x0;
  local_80[2] = (char *)0x0;
  local_80[3] = (char *)0x0;
  local_38 = param_1;
  if ((lVar3 == 0) || (*(int *)(lVar3 + 0x50) == 0)) {
LAB_1805af32b:
    if (lVar3 != 0) goto LAB_1805af342;
LAB_1805af40c:
    local_88 = (undefined8 *)(lVar3 + 0x70);
    local_90 = (int *)(lVar3 + 0x50);
LAB_1805af410:
    pcVar7 = local_80[1];
    if (lVar3 == 0) {
      pcVar8 = local_80[3];
      goto LAB_1805af47c;
    }
  }
  else {
    plVar6 = (longlong *)FUN_18057a550("SLANT",*(undefined8 *)(lVar3 + 0x70));
    if (plVar6 != (longlong *)0x0) {
      lVar1 = *(longlong *)(lVar3 + 0x58) + *plVar6 * 0x18;
      if ((((lVar1 == 0) || (*(int *)(lVar1 + 8) != 1)) || (*(char **)(lVar1 + 0x10) == (char *)0x0)
          ) || (((cVar2 = **(char **)(lVar1 + 0x10), cVar2 != 'O' && (cVar2 != 'o')) &&
                ((cVar2 != 'I' && (cVar2 != 'i')))))) goto LAB_1805af32b;
      *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 1;
      if ((**(char **)(lVar1 + 0x10) == 'O') ||
         (local_80[2] = "Italic", **(char **)(lVar1 + 0x10) == 'o')) {
        local_80[2] = "Oblique";
      }
    }
LAB_1805af342:
    local_88 = (undefined8 *)(lVar3 + 0x70);
    local_90 = (int *)(lVar3 + 0x50);
    if (*local_90 == 0) {
      if (lVar3 == 0) goto LAB_1805af40c;
    }
    else {
      plVar6 = (longlong *)FUN_18057a550("WEIGHT_NAME",*local_88);
      if ((((plVar6 != (longlong *)0x0) &&
           (lVar1 = *(longlong *)(lVar3 + 0x58) + *plVar6 * 0x18, lVar1 != 0)) &&
          (*(int *)(lVar1 + 8) == 1)) &&
         ((*(char **)(lVar1 + 0x10) != (char *)0x0 &&
          ((cVar2 = **(char **)(lVar1 + 0x10), cVar2 == 'B' || (cVar2 == 'b')))))) {
        *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 2;
        local_80[1] = "Bold";
      }
    }
    pcVar7 = local_80[1];
    if (*local_90 == 0) goto LAB_1805af410;
    plVar6 = (longlong *)FUN_18057a550("SETWIDTH_NAME",*local_88);
    if (plVar6 != (longlong *)0x0) {
      lVar1 = *(longlong *)(lVar3 + 0x58) + *plVar6 * 0x18;
      if ((lVar1 != 0) && (*(int *)(lVar1 + 8) == 1)) {
        pcVar8 = *(char **)(lVar1 + 0x10);
        if (pcVar8 != (char *)0x0) {
          if ((*pcVar8 != '\0') && ((*pcVar8 + 0xb2U & 0xdf) != 0)) {
            local_80[3] = pcVar8;
          }
        }
      }
    }
  }
  pcVar8 = local_80[3];
  if (*(int *)(lVar3 + 0x50) != 0) {
    plVar6 = (longlong *)FUN_18057a550("ADD_STYLE_NAME",*(undefined8 *)(lVar3 + 0x70));
    if (plVar6 != (longlong *)0x0) {
      lVar3 = *(longlong *)(lVar3 + 0x58) + *plVar6 * 0x18;
      if (lVar3 != 0) {
        if (*(int *)(lVar3 + 8) == 1) {
          pcVar4 = *(char **)(lVar3 + 0x10);
          if (pcVar4 != (char *)0x0) {
            if (*pcVar4 != '\0') {
              if ((*pcVar4 + 0xb2U & 0xdf) != 0) {
                local_80[0] = pcVar4;
              }
            }
          }
        }
      }
    }
  }
LAB_1805af47c:
  uVar10 = 0;
  local_60[0] = 0;
  if (local_80[0] != (char *)0x0) {
    local_60[0] = strlen(local_80[0]);
    uVar10 = local_60[0] + 1;
  }
  local_60[1] = 0;
  if (pcVar7 != (char *)0x0) {
    local_60[1] = strlen(pcVar7);
    uVar10 = uVar10 + 1 + local_60[1];
  }
  local_60[2] = 0;
  if (local_80[2] != (char *)0x0) {
    local_60[2] = strlen(local_80[2]);
    uVar10 = uVar10 + 1 + local_60[2];
  }
  local_60[3] = 0;
  if (pcVar8 != (char *)0x0) {
    local_60[3] = strlen(pcVar8);
    uVar10 = uVar10 + 1 + local_60[3];
  }
  if (uVar10 == 0) {
    local_60[0] = 7;
    local_80[0] = "Regular";
    uVar10 = 8;
  }
  pcVar7 = (char *)FUN_18057abe0(local_60[4],uVar10 & 0xffffffff,local_98);
  lVar3 = local_38;
  *(char **)(local_38 + 0x20) = pcVar7;
  if (local_98[0] == 0) {
    do {
      pcVar8 = local_80[uVar11];
      sVar5 = local_60[uVar11];
      if (pcVar8 != (char *)0x0) {
        if (pcVar7 != *(char **)(lVar3 + 0x20)) {
          *pcVar7 = ' ';
          pcVar7 = pcVar7 + 1;
        }
        FUN_18063aed0(pcVar7,pcVar8,sVar5);
        if (((uVar11 == 0) || (uVar11 == 3)) && (sVar5 != 0)) {
          pcVar8 = pcVar7;
          sVar9 = sVar5;
          do {
            if (*pcVar8 == ' ') {
              *pcVar8 = '-';
            }
            pcVar8 = pcVar8 + 1;
            sVar9 = sVar9 - 1;
          } while (sVar9 != 0);
        }
        pcVar7 = pcVar7 + sVar5;
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < 4);
    *pcVar7 = '\0';
  }
  return local_98[0];
}



