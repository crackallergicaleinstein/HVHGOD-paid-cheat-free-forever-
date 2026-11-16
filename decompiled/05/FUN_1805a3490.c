// FUN_1805a3490 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805a3490 */

ulonglong FUN_1805a3490(undefined8 param_1,undefined4 *param_2,int param_3)

{
  char cVar1;
  char cVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  short sVar6;
  ushort uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  char *pcVar13;
  char *pcVar14;
  short sVar15;
  
  *param_2 = 1;
  if (*(longlong *)(param_2 + 0x38) == 0) {
    lVar10 = FUN_180573a90(*(undefined8 *)(*(longlong *)(param_2 + 0x24) + 8),"psaux");
    if (lVar10 == 0) {
      return 0xb;
    }
    *(longlong *)(param_2 + 0x38) = lVar10;
  }
  if (*(longlong *)(param_2 + 0x76) == 0) {
    uVar11 = FUN_180573a90(*(undefined8 *)(*(longlong *)(param_2 + 0x24) + 8),"pshinter");
    *(undefined8 *)(param_2 + 0x76) = uVar11;
  }
  uVar12 = FUN_1805788b0(param_1,0);
  if ((int)uVar12 == 0) {
    uVar12 = FUN_1805a4230(param_2,param_3);
    if (((int)uVar12 == 0) && (-1 < param_3)) {
      if ((short)param_3 == 0) {
        param_2[4] = param_2[0x6b];
        uVar4 = param_2[2];
        uVar8 = uVar4 | 0x811;
        param_2[2] = uVar8;
        param_2[0xe] = 0;
        param_2[1] = 0;
        if (*(char *)(param_2 + 0x4f) != '\0') {
          uVar8 = uVar4 | 0x815;
        }
        param_2[2] = uVar8 | 0x1000;
        pcVar14 = *(char **)(param_2 + 0x4a);
        *(char **)(param_2 + 6) = pcVar14;
        *(char **)(param_2 + 8) = "Regular";
        if (pcVar14 == (char *)0x0) {
          if (*(longlong *)(param_2 + 0x3a) != 0) {
            *(longlong *)(param_2 + 6) = *(longlong *)(param_2 + 0x3a);
          }
        }
        else {
          pcVar13 = *(char **)(param_2 + 0x48);
          if (pcVar13 != (char *)0x0) {
            cVar1 = *pcVar13;
            while (cVar1 != '\0') {
              cVar2 = *pcVar14;
              if (cVar1 == cVar2) {
                pcVar14 = pcVar14 + 1;
LAB_1805a35c0:
                pcVar13 = pcVar13 + 1;
              }
              else {
                if ((cVar1 == ' ') || (cVar1 == '-')) goto LAB_1805a35c0;
                if ((cVar2 != ' ') && (cVar2 != '-')) {
                  if (cVar2 == '\0') {
                    *(char **)(param_2 + 8) = pcVar13;
                  }
                  break;
                }
                pcVar14 = pcVar14 + 1;
              }
              cVar1 = *pcVar13;
            }
          }
        }
        param_2[3] = 0;
        iVar5 = param_2[0x4e];
        if (iVar5 != 0) {
          param_2[3] = 1;
        }
        pcVar14 = *(char **)(param_2 + 0x4c);
        if ((pcVar14 != (char *)0x0) &&
           ((iVar9 = strcmp(pcVar14,"Bold"), iVar9 == 0 ||
            (iVar9 = strcmp(pcVar14,"Black"), iVar9 == 0)))) {
          param_2[3] = iVar5 != 0 | 2;
        }
        param_2[10] = 0;
        *(undefined8 *)(param_2 + 0xc) = 0;
        param_2[0x16] = (int)*(short *)((longlong)param_2 + 0x14a);
        sVar3 = *(short *)((longlong)param_2 + 0x14e);
        param_2[0x17] = (int)sVar3;
        param_2[0x18] = param_2[0x54] + 0xffff >> 0x10;
        uVar7 = *(ushort *)(param_2 + 0x1a);
        param_2[0x19] = param_2[0x55] + 0xffff >> 0x10;
        if (uVar7 == 0) {
          uVar7 = 1000;
          *(undefined2 *)(param_2 + 0x1a) = 1000;
        }
        sVar15 = (short)((uint)(param_2[0x55] + 0xffff) >> 0x10);
        *(short *)((longlong)param_2 + 0x6a) = sVar15;
        *(short *)(param_2 + 0x1b) = sVar3;
        sVar6 = (short)(((uint)uVar7 * 0xc) / 10);
        *(short *)((longlong)param_2 + 0x6e) = sVar6;
        if ((int)sVar6 < (int)sVar15 - (int)sVar3) {
          *(short *)((longlong)param_2 + 0x6e) = sVar15 - sVar3;
        }
        *(undefined2 *)(param_2 + 0x1d) = *(undefined2 *)((longlong)param_2 + 0x13e);
        *(undefined2 *)((longlong)param_2 + 0x76) = *(undefined2 *)(param_2 + 0x50);
        uVar12 = uVar12 & 0xffffffff;
      }
      else {
        uVar12 = 6;
      }
    }
  }
  return uVar12;
}



