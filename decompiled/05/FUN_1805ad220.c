// FUN_1805ad220 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805ad220 */

int FUN_1805ad220(longlong param_1)

{
  char cVar1;
  size_t sVar2;
  char *_Str;
  longlong lVar3;
  char *pcVar4;
  char *pcVar5;
  size_t sVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int local_78 [2];
  char *local_70 [4];
  size_t local_50 [5];
  
  uVar9 = 0;
  local_78[0] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  local_70[0] = (char *)0x0;
  local_70[1] = (char *)0x0;
  local_70[2] = (char *)0x0;
  local_70[3] = (char *)0x0;
  lVar3 = FUN_1805ac480(0,"SLANT");
  uVar7 = 0;
  if (((lVar3 != 0) && (*(char *)(lVar3 + 8) != '\0')) &&
     ((cVar1 = **(char **)(lVar3 + 0x10), cVar1 == 'O' ||
      (((cVar1 == 'o' || (cVar1 == 'I')) || (cVar1 == 'i')))))) {
    uVar7 = 1;
    *(undefined4 *)(param_1 + 0xc) = 1;
    if ((**(char **)(lVar3 + 0x10) == 'O') ||
       (local_70[2] = "Italic", **(char **)(lVar3 + 0x10) == 'o')) {
      local_70[2] = "Oblique";
    }
  }
  pcVar4 = local_70[2];
  lVar3 = FUN_1805ac480(param_1,"WEIGHT_NAME");
  if (((lVar3 != 0) && (*(char *)(lVar3 + 8) != '\0')) &&
     ((**(char **)(lVar3 + 0x10) == 'B' || (**(char **)(lVar3 + 0x10) == 'b')))) {
    *(uint *)(param_1 + 0xc) = uVar7 | 2;
    local_70[1] = "Bold";
  }
  pcVar5 = local_70[1];
  lVar3 = FUN_1805ac480(param_1,"SETWIDTH_NAME");
  if ((lVar3 != 0) && (*(char *)(lVar3 + 8) != '\0')) {
    cVar1 = **(char **)(lVar3 + 0x10);
    if ((cVar1 != '\0') && ((cVar1 + 0xb2U & 0xdf) != 0)) {
      local_70[3] = *(char **)(lVar3 + 0x10);
    }
  }
  _Str = local_70[3];
  lVar3 = FUN_1805ac480(param_1,"ADD_STYLE_NAME");
  if ((lVar3 != 0) && (*(char *)(lVar3 + 8) != '\0')) {
    cVar1 = **(char **)(lVar3 + 0x10);
    if ((cVar1 != '\0') && ((cVar1 + 0xb2U & 0xdf) != 0)) {
      local_70[0] = *(char **)(lVar3 + 0x10);
    }
  }
  local_50[0] = 0;
  uVar8 = 0;
  if (local_70[0] != (char *)0x0) {
    local_50[0] = strlen(local_70[0]);
    uVar8 = local_50[0] + 1;
  }
  local_50[1] = 0;
  if (pcVar5 != (char *)0x0) {
    local_50[1] = strlen(pcVar5);
    uVar8 = uVar8 + 1 + local_50[1];
  }
  local_50[2] = 0;
  if (pcVar4 != (char *)0x0) {
    local_50[2] = strlen(pcVar4);
    uVar8 = uVar8 + 1 + local_50[2];
  }
  local_50[3] = 0;
  if (_Str != (char *)0x0) {
    local_50[3] = strlen(_Str);
    uVar8 = uVar8 + 1 + local_50[3];
  }
  if (uVar8 == 0) {
    local_50[0] = 7;
    local_70[0] = "Regular";
    uVar8 = 8;
  }
  pcVar4 = (char *)FUN_18057abe0(*(undefined8 *)(param_1 + 0x98),uVar8 & 0xffffffff,local_78);
  *(char **)(param_1 + 0x20) = pcVar4;
  if (local_78[0] == 0) {
    do {
      pcVar5 = local_70[uVar9];
      sVar2 = local_50[uVar9];
      if (pcVar5 != (char *)0x0) {
        if (pcVar4 != *(char **)(param_1 + 0x20)) {
          *pcVar4 = ' ';
          pcVar4 = pcVar4 + 1;
        }
        FUN_18063aed0(pcVar4,pcVar5,sVar2);
        if (((uVar9 == 0) || (uVar9 == 3)) && (sVar2 != 0)) {
          pcVar5 = pcVar4;
          sVar6 = sVar2;
          do {
            if (*pcVar5 == ' ') {
              *pcVar5 = '-';
            }
            pcVar5 = pcVar5 + 1;
            sVar6 = sVar6 - 1;
          } while (sVar6 != 0);
        }
        pcVar4 = pcVar4 + sVar2;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < 4);
    *pcVar4 = '\0';
  }
  return local_78[0];
}



