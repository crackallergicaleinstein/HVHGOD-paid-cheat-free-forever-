// FUN_1804cdf20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804cdf20 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804cdf20(longlong param_1,longlong param_2)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  ushort uVar4;
  char *pcVar5;
  longlong lVar6;
  short sVar7;
  int iVar8;
  char *pcVar9;
  undefined1 *puVar10;
  ushort uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  undefined1 auStack_a8 [48];
  longlong local_78;
  char *local_70;
  char *local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  lVar6 = DAT_180bb8ae8;
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_a8;
  local_78 = param_2;
  if (param_2 == 0) {
    local_78 = -1;
    do {
      local_78 = local_78 + 1;
    } while (*(char *)(local_78 + param_1) != '\0');
  }
  lVar14 = local_78;
  iVar8 = *(int *)(DAT_180bb8ae8 + 0x2784);
  iVar12 = (int)local_78 + 1;
  local_60 = param_1;
  if (iVar8 < iVar12) {
    if (iVar8 == 0) {
      iVar8 = 8;
    }
    else {
      iVar8 = iVar8 / 2 + iVar8;
    }
    iVar3 = iVar12;
    if (iVar12 < iVar8) {
      iVar3 = iVar8;
    }
    FUN_1804d0ea0(DAT_180bb8ae8 + 0x2780,iVar3);
  }
  *(int *)(lVar6 + 0x2780) = iVar12;
  pcVar9 = *(char **)(lVar6 + 0x2788);
  pcVar2 = pcVar9 + lVar14;
  local_68 = pcVar9;
  FUN_18063aed0(pcVar9,param_1,lVar14);
  *pcVar2 = '\0';
  lVar13 = *(longlong *)(lVar6 + 0x2798);
  lVar15 = (longlong)*(int *)(lVar6 + 0x2790) * 0x50 + lVar13;
  for (; lVar13 != lVar15; lVar13 = lVar13 + 0x50) {
    if (*(code **)(lVar13 + 0x18) != (code *)0x0) {
      (**(code **)(lVar13 + 0x18))(lVar6,lVar13);
    }
  }
  iVar8 = 0;
  lVar13 = 0;
  if (pcVar9 < pcVar2) {
    lVar14 = 0;
    do {
      for (; (*pcVar9 == '\n' || (pcVar5 = pcVar9, *pcVar9 == '\r')); pcVar9 = pcVar9 + 1) {
      }
      for (; ((pcVar5 < pcVar2 && (*pcVar5 != '\n')) && (*pcVar5 != '\r')); pcVar5 = pcVar5 + 1) {
      }
      *pcVar5 = '\0';
      if (*pcVar9 != ';') {
        if (((*pcVar9 == '[') && (pcVar9 < pcVar5)) && (pcVar1 = pcVar5 + -1, pcVar5[-1] == ']')) {
          local_70 = pcVar9 + 1;
          *pcVar1 = '\0';
          puVar10 = (undefined1 *)FUN_18063b630(local_70,0x5d,(longlong)pcVar1 - (longlong)local_70)
          ;
          if ((puVar10 != (undefined1 *)0x0) &&
             (lVar15 = FUN_18063b630(puVar10 + 1,0x5b,(longlong)pcVar1 - (longlong)(puVar10 + 1)),
             lVar15 != 0)) {
            *puVar10 = 0;
            lVar13 = FUN_1804cde90(local_70);
            if (lVar13 == 0) {
              lVar14 = 0;
            }
            else {
              lVar14 = (**(code **)(lVar13 + 0x20))(lVar6,lVar13,lVar15 + 1);
            }
          }
        }
        else if ((lVar13 != 0) && (lVar14 != 0)) {
          (**(code **)(lVar13 + 0x28))(lVar6,lVar13,lVar14,pcVar9);
        }
      }
      pcVar9 = pcVar5 + 1;
    } while (pcVar9 < pcVar2);
    lVar14 = local_78;
    pcVar9 = local_68;
  }
  *(undefined1 *)(lVar6 + 0x277a) = 1;
  FUN_18063aed0(pcVar9,local_60,lVar14);
  lVar14 = DAT_180bb8ae8;
  uVar16 = *(uint *)(lVar6 + 0x88);
  local_58 = 0;
  local_50 = 0;
  if (0 < (int)uVar16) {
    local_58 = (ulonglong)uVar16 << 0x20;
    iVar12 = *(int *)(DAT_180bb8ae8 + 0xc34);
    if (iVar12 != 0) {
      sVar7 = (short)(iVar12 / 100);
      uVar11 = (sVar7 + (short)((iVar12 / 100) / 100) * -4) * 0x80 & 0x780U |
               ((short)iVar12 + sVar7 * -4) * 0x800 | (short)(iVar12 / 10000) + 0x30U & 0x7f;
      do {
        uVar4 = uVar11;
        uVar11 = (uVar4 - ((uVar4 & 0x780) == 0x80) ^ uVar4) & 0x7f ^ uVar4;
        sVar7 = (uVar4 >> 7) - 1;
        if ((uVar4 & 0x780) == 0x80) {
          sVar7 = 0xc;
        }
        uVar16 = uVar16 - 1;
        uVar11 = (sVar7 << 7 ^ uVar11) & 0x780 ^ uVar11;
      } while (0 < (int)uVar16);
      if (((uVar11 & 0x7f) == 0 || (uVar11 & 0x780) == 0) || (uVar11 < 0x800)) {
        uVar16 = 0;
      }
      else {
        uVar16 = (((uVar11 & 0x7f) + 2000) * 100 + (uVar11 >> 7 & 0xf)) * 100 + (uint)(uVar4 >> 0xb)
        ;
      }
      local_50 = (ulonglong)uVar16 << 0x20;
    }
    lVar13 = *(longlong *)(DAT_180bb8ae8 + 0x2798);
    lVar15 = (longlong)*(int *)(DAT_180bb8ae8 + 0x2790) * 0x50 + lVar13;
    for (; lVar13 != lVar15; lVar13 = lVar13 + 0x50) {
      if ((iVar8 == 0) || (*(int *)(lVar13 + 8) == iVar8)) {
        if (*(code **)(lVar13 + 0x40) != (code *)0x0) {
          (**(code **)(lVar13 + 0x40))(lVar14,lVar13,&local_58);
          iVar8 = (int)local_58;
        }
      }
    }
  }
  lVar14 = *(longlong *)(lVar6 + 0x2798);
  lVar13 = (longlong)*(int *)(lVar6 + 0x2790) * 0x50 + lVar14;
  for (; lVar14 != lVar13; lVar14 = lVar14 + 0x50) {
    if (*(code **)(lVar14 + 0x30) != (code *)0x0) {
      (**(code **)(lVar14 + 0x30))(lVar6,lVar14);
    }
  }
}



