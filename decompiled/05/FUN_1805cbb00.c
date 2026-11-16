// FUN_1805cbb00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805cbb00 */

char * FUN_1805cbb00(longlong param_1)

{
  char *pcVar1;
  ushort uVar2;
  undefined8 uVar3;
  uint uVar4;
  short *psVar5;
  char *pcVar6;
  size_t sVar7;
  ulonglong uVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  char *pcVar13;
  char *pcVar14;
  uint *puVar15;
  longlong lVar16;
  uint uVar17;
  ulonglong in_stack_ffffffffffffff88;
  int local_68;
  uint local_64;
  char *local_60;
  int *local_58;
  longlong local_50;
  char *local_48;
  undefined1 local_40 [12];
  uint local_34 [3];
  
  uVar3 = *(undefined8 *)(param_1 + 0x98);
  uVar17 = 0;
  lVar16 = *(longlong *)(param_1 + 0x2e0);
  if (*(longlong *)(param_1 + 0x418) == 0) {
    uVar2 = *(ushort *)(param_1 + 0x1d0);
    iVar11 = -1;
    iVar12 = -1;
    iVar10 = 0;
    uVar4 = (uint)uVar2;
    if (uVar2 != 0) {
      psVar5 = *(short **)(param_1 + 0x1e8);
      do {
        if (psVar5[3] == 0x19) {
          if (psVar5[4] != 0) {
            if (*psVar5 == 3) {
              if (psVar5[1] != 1) {
                if (psVar5[1] != 0) goto LAB_1805cbbb6;
              }
              if (psVar5[2] != 0x409) {
                if (iVar11 != -1) goto LAB_1805cbbb6;
              }
              iVar11 = iVar10;
            }
            else if (((*psVar5 == 1) && (psVar5[1] == 0)) && ((psVar5[2] == 0 || (iVar12 == -1)))) {
              iVar12 = iVar10;
            }
          }
        }
LAB_1805cbbb6:
        iVar10 = iVar10 + 1;
        psVar5 = psVar5 + 0xc;
      } while (iVar10 < (int)uVar4);
      if ((iVar11 < 0) && (iVar12 < 0)) goto LAB_1805cbbd1;
LAB_1805cbced:
      if (iVar11 == -1) {
LAB_1805cbd27:
        if ((iVar12 == -1) ||
           (pcVar6 = (char *)FUN_1805c9ec0(*(undefined8 *)(param_1 + 0x98),
                                           *(undefined8 *)(param_1 + 0x200),
                                           *(longlong *)(param_1 + 0x1e8) + (longlong)iVar12 * 0x18,
                                           FUN_1805cc140,
                                           in_stack_ffffffffffffff88 & 0xffffffffffffff00),
           pcVar6 == (char *)0x0)) goto LAB_1805cbf1f;
      }
      else {
        in_stack_ffffffffffffff88 = in_stack_ffffffffffffff88 & 0xffffffffffffff00;
        pcVar6 = (char *)FUN_1805ca0c0(uVar3,*(undefined8 *)(param_1 + 0x200),
                                       *(longlong *)(param_1 + 0x1e8) + (longlong)iVar11 * 0x18,
                                       FUN_1805cc140,in_stack_ffffffffffffff88);
        if (pcVar6 == (char *)0x0) goto LAB_1805cbd27;
      }
      sVar7 = strlen(pcVar6);
      uVar4 = (uint)sVar7;
      if (0x5b < uVar4) {
        uVar4 = 0x5b;
        pcVar6[0x5b] = '\0';
      }
      *(char **)(param_1 + 0x418) = pcVar6;
      *(uint *)(param_1 + 0x420) = uVar4;
      goto LAB_1805cbd90;
    }
LAB_1805cbbd1:
    iVar11 = -1;
    iVar10 = 0;
    iVar12 = -1;
    if (uVar2 != 0) {
      psVar5 = *(short **)(param_1 + 0x1e8);
      do {
        if (psVar5[3] == 0x10) {
          if (psVar5[4] != 0) {
            if (*psVar5 == 3) {
              if (psVar5[1] != 1) {
                if (psVar5[1] != 0) goto LAB_1805cbc46;
              }
              if (psVar5[2] != 0x409) {
                if (iVar11 != -1) goto LAB_1805cbc46;
              }
              iVar11 = iVar10;
            }
            else if (((*psVar5 == 1) && (psVar5[1] == 0)) && ((psVar5[2] == 0 || (iVar12 == -1)))) {
              iVar12 = iVar10;
            }
          }
        }
LAB_1805cbc46:
        iVar10 = iVar10 + 1;
        psVar5 = psVar5 + 0xc;
      } while (iVar10 < (int)uVar4);
      if ((-1 < iVar11) || (-1 < iVar12)) goto LAB_1805cbced;
    }
    iVar11 = -1;
    iVar10 = 0;
    iVar12 = -1;
    if (uVar2 != 0) {
      psVar5 = *(short **)(param_1 + 0x1e8);
      do {
        if (psVar5[3] == 1) {
          if (psVar5[4] != 0) {
            if (*psVar5 == 3) {
              if (psVar5[1] != 1) {
                if (psVar5[1] != 0) goto LAB_1805cbcd6;
              }
              if (psVar5[2] != 0x409) {
                if (iVar11 != -1) goto LAB_1805cbcd6;
              }
              iVar11 = iVar10;
            }
            else if (((*psVar5 == 1) && (psVar5[1] == 0)) && ((psVar5[2] == 0 || (iVar12 == -1)))) {
              iVar12 = iVar10;
            }
          }
        }
LAB_1805cbcd6:
        iVar10 = iVar10 + 1;
        psVar5 = psVar5 + 0xc;
      } while (iVar10 < (int)uVar4);
      if ((-1 < iVar11) || (-1 < iVar12)) goto LAB_1805cbced;
    }
LAB_1805cbf1f:
    pcVar6 = (char *)0x0;
  }
  else {
LAB_1805cbd90:
    (**(code **)(lVar16 + 0x88))(param_1,&local_64,&local_58,0,&local_50);
    if (((*(uint *)(param_1 + 4) & 0x7fff0000) == 0) || ((*(uint *)(param_1 + 8) & 0x8000) != 0)) {
LAB_1805cbef4:
      lVar16 = *(longlong *)(local_50 + 0x10);
      pcVar6 = (char *)FUN_18057abe0(uVar3,*(int *)(param_1 + 0x420) + local_64 * 0x11 + 1,&local_68
                                    );
      if (local_68 != 0) goto LAB_1805cbf1f;
      FUN_18063bac0(pcVar6,*(undefined8 *)(param_1 + 0x418));
      pcVar13 = pcVar6 + *(uint *)(param_1 + 0x420);
      if (local_64 != 0) {
        pcVar14 = (char *)(lVar16 + 0x14);
        do {
          if (*local_58 != *(int *)(pcVar14 + -8)) {
            *pcVar13 = '_';
            pcVar13 = (char *)FUN_1805c9d20(*local_58,pcVar13 + 1);
            cVar9 = pcVar14[3];
            iVar11 = (int)cVar9;
            if ((cVar9 != ' ') &&
               (((iVar11 - 0x30U < 10 || (iVar11 - 0x41U < 0x1a)) || (iVar11 - 0x61U < 0x1a)))) {
              *pcVar13 = cVar9;
              pcVar13 = pcVar13 + 1;
            }
            cVar9 = pcVar14[2];
            iVar11 = (int)cVar9;
            if ((cVar9 != ' ') &&
               (((iVar11 - 0x30U < 10 || (iVar11 - 0x41U < 0x1a)) || (iVar11 - 0x61U < 0x1a)))) {
              *pcVar13 = cVar9;
              pcVar13 = pcVar13 + 1;
            }
            cVar9 = (char)((uint)*(undefined4 *)pcVar14 >> 8);
            if ((cVar9 != ' ') &&
               (((iVar11 = (int)cVar9, iVar11 - 0x30U < 10 || (iVar11 - 0x41U < 0x1a)) ||
                (iVar11 - 0x61U < 0x1a)))) {
              *pcVar13 = cVar9;
              pcVar13 = pcVar13 + 1;
            }
            cVar9 = *pcVar14;
            iVar11 = (int)cVar9;
            if ((cVar9 != ' ') &&
               (((iVar11 - 0x30U < 10 || (iVar11 - 0x41U < 0x1a)) || (iVar11 - 0x61U < 0x1a)))) {
              *pcVar13 = cVar9;
              pcVar13 = pcVar13 + 1;
            }
          }
          local_58 = local_58 + 1;
          uVar17 = uVar17 + 1;
          pcVar14 = pcVar14 + 0x20;
        } while (uVar17 < local_64);
      }
      *pcVar13 = '\0';
    }
    else {
      lVar16 = *(longlong *)(param_1 + 0x2d0);
      uVar8 = (ulonglong)((int)*(uint *)(param_1 + 4) >> 0x10 & 0x7fff);
      uVar4 = *(uint *)(*(longlong *)(local_50 + 0x18) + -4 + uVar8 * 0x10);
      local_48 = (char *)0x0;
      if ((uVar4 == 6) || (uVar4 - 0x100 < 0x7f00)) {
        (**(code **)(lVar16 + 0x158))(param_1,uVar4 & 0xffff,&local_48);
        pcVar6 = local_48;
        if (local_48 == (char *)0x0) goto LAB_1805cbe32;
        sVar7 = strlen(local_48);
        pcVar13 = pcVar6 + sVar7;
      }
      else {
LAB_1805cbe32:
        (**(code **)(lVar16 + 0x158))
                  (param_1,*(undefined2 *)(*(longlong *)(local_50 + 0x18) + -8 + uVar8 * 0x10),
                   &local_60);
        if (local_60 == (char *)0x0) goto LAB_1805cbef4;
        sVar7 = strlen(local_60);
        pcVar6 = (char *)FUN_18057abe0(uVar3,*(int *)(param_1 + 0x420) + 2 + (int)sVar7,&local_68);
        if (local_68 != 0) goto LAB_1805cbf1f;
        FUN_18063bac0(pcVar6,*(undefined8 *)(param_1 + 0x418));
        uVar17 = *(uint *)(param_1 + 0x420);
        pcVar6[uVar17] = '-';
        pcVar13 = pcVar6 + (ulonglong)uVar17 + 1;
        cVar9 = *local_60;
        pcVar14 = local_60;
        while (cVar9 != '\0') {
          iVar11 = (int)cVar9;
          if (((iVar11 - 0x30U < 10) || (iVar11 - 0x41U < 0x1a)) || (iVar11 - 0x61U < 0x1a)) {
            *pcVar13 = cVar9;
            pcVar13 = pcVar13 + 1;
          }
          pcVar1 = pcVar14 + 1;
          pcVar14 = pcVar14 + 1;
          cVar9 = *pcVar1;
        }
        *pcVar13 = '\0';
        FUN_18057abd0(uVar3,local_60);
        local_60 = (char *)0x0;
      }
    }
    if (0x7f < (longlong)(pcVar13 + (1 - (longlong)pcVar6))) {
      FUN_1805ca620(pcVar6,((int)pcVar13 + 1) - (int)pcVar6,0x75bcd15,local_40);
      uVar8 = (ulonglong)*(uint *)(param_1 + 0x420);
      puVar15 = local_34;
      lVar16 = 4;
      pcVar6[uVar8] = '-';
      pcVar13 = pcVar6 + uVar8 + 0x21;
      pcVar13[0] = '.';
      pcVar13[1] = '.';
      pcVar13[2] = '.';
      pcVar13[3] = '\0';
      pcVar13 = pcVar6 + uVar8 + 0x20;
      do {
        uVar17 = *puVar15;
        puVar15 = puVar15 + -1;
        *pcVar13 = (&DAT_180685030)[uVar17 & 0xf];
        pcVar13[-1] = (&DAT_180685030)[uVar17 >> 4 & 0xf];
        pcVar13[-2] = (&DAT_180685030)[uVar17 >> 8 & 0xf];
        pcVar13[-3] = (&DAT_180685030)[uVar17 >> 0xc & 0xf];
        pcVar13[-4] = (&DAT_180685030)[uVar17 >> 0x10 & 0xf];
        pcVar13[-5] = (&DAT_180685030)[uVar17 >> 0x14 & 0xf];
        pcVar13[-6] = (&DAT_180685030)[uVar17 >> 0x18 & 0xf];
        pcVar13[-7] = (&DAT_180685030)[uVar17 >> 0x1c];
        lVar16 = lVar16 + -1;
        pcVar13 = pcVar13 + -8;
      } while (lVar16 != 0);
    }
  }
  return pcVar6;
}



