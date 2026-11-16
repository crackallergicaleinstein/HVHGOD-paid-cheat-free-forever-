// FUN_180626c00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180626c00 */

int FUN_180626c00(uint param_1,short *param_2,ulonglong param_3)

{
  short *psVar1;
  byte *pbVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  BOOL BVar6;
  DWORD DVar7;
  int iVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  short *psVar12;
  short sVar13;
  short *psVar14;
  ulonglong uVar15;
  longlong lVar16;
  uint uVar17;
  short *psVar18;
  DWORD local_res20 [2];
  DWORD local_68 [2];
  HANDLE local_60;
  ulonglong local_58;
  ulonglong local_50;
  short *local_48;
  
  if (param_1 == 0xfffffffe) {
    puVar9 = (undefined4 *)FUN_18060fddc();
    *puVar9 = 0;
    puVar9 = (undefined4 *)FUN_18060fe00();
    *puVar9 = 9;
    return -1;
  }
  if ((-1 < (int)param_1) && (param_1 < DAT_180bb2530)) {
    uVar10 = (ulonglong)(param_1 & 0x3f);
    local_50 = 1;
    local_58 = (ulonglong)(longlong)(int)param_1 >> 6;
    lVar16 = (&DAT_180bb2130)[local_58];
    if ((*(byte *)(lVar16 + 0x38 + uVar10 * 0x48) & 1) != 0) {
      uVar17 = (uint)param_3;
      if (uVar17 < 0x80000000) {
        if ((uVar17 == 0) || ((*(byte *)(lVar16 + 0x38 + uVar10 * 0x48) & 2) != 0)) {
          return 0;
        }
        if (param_2 != (short *)0x0) {
          local_60 = *(HANDLE *)(lVar16 + 0x28 + uVar10 * 0x48);
          psVar14 = (short *)0x0;
          cVar3 = *(char *)(lVar16 + 0x39 + uVar10 * 0x48);
          if (cVar3 == '\x01') {
            if ((~uVar17 & 1) == 0) goto LAB_180626cfa;
            uVar15 = param_3 >> 1 & 0x7fffffff;
            if ((uint)uVar15 < 4) {
              uVar15 = 4;
            }
            psVar14 = (short *)_malloc_base(uVar15);
            FUN_180621380(0);
            FUN_180621380(0);
            if (psVar14 != (short *)0x0) {
              uVar11 = FUN_1806262c4(param_1,0,1);
              *(undefined8 *)((&DAT_180bb2130)[local_58] + 0x30 + uVar10 * 0x48) = uVar11;
              local_48 = psVar14;
              goto LAB_180626d9c;
            }
            puVar9 = (undefined4 *)FUN_18060fe00();
            *puVar9 = 0xc;
            puVar9 = (undefined4 *)FUN_18060fddc();
            *puVar9 = 8;
          }
          else if ((cVar3 == '\x02') && ((~uVar17 & 1) == 0)) {
LAB_180626cfa:
            puVar9 = (undefined4 *)FUN_18060fddc();
            *puVar9 = 0;
            puVar9 = (undefined4 *)FUN_18060fe00();
            *puVar9 = 0x16;
            FUN_18060aad4();
          }
          else {
            uVar15 = param_3 & 0xffffffff;
            local_48 = param_2;
LAB_180626d9c:
            iVar8 = 0;
            psVar18 = local_48;
            if ((((*(byte *)((&DAT_180bb2130)[local_58] + 0x38 + uVar10 * 0x48) & 0x48) != 0) &&
                (cVar4 = *(char *)((&DAT_180bb2130)[local_58] + 0x3a + uVar10 * 0x48), cVar4 != '\n'
                )) && (iVar5 = (int)uVar15, iVar5 != 0)) {
              *(char *)local_48 = cVar4;
              uVar15 = (ulonglong)(iVar5 - 1U);
              psVar18 = (short *)((longlong)local_48 + 1);
              iVar8 = 1;
              *(undefined1 *)((&DAT_180bb2130)[local_58] + 0x3a + uVar10 * 0x48) = 10;
              if (((cVar3 != '\0') &&
                  (cVar4 = *(char *)((&DAT_180bb2130)[local_58] + 0x3b + uVar10 * 0x48),
                  cVar4 != '\n')) && (iVar5 - 1U != 0)) {
                *(char *)psVar18 = cVar4;
                iVar8 = 2;
                psVar18 = local_48 + 1;
                uVar15 = (ulonglong)(iVar5 - 2U);
                *(undefined1 *)((&DAT_180bb2130)[local_58] + 0x3b + uVar10 * 0x48) = 10;
                if (((cVar3 == '\x01') &&
                    (cVar4 = *(char *)((&DAT_180bb2130)[local_58] + 0x3c + uVar10 * 0x48),
                    cVar4 != '\n')) && (iVar5 - 2U != 0)) {
                  *(char *)psVar18 = cVar4;
                  iVar8 = 3;
                  psVar18 = (short *)((longlong)local_48 + 3);
                  uVar15 = (ulonglong)(iVar5 - 3);
                  *(undefined1 *)((&DAT_180bb2130)[local_58] + 0x3c + uVar10 * 0x48) = 10;
                }
              }
            }
            local_68[0] = 0;
            iVar5 = FUN_180632c90(param_1);
            if (((iVar5 == 0) || (-1 < *(char *)((&DAT_180bb2130)[local_58] + 0x38 + uVar10 * 0x48))
                ) || (BVar6 = GetConsoleMode(local_60,local_68), BVar6 == 0)) {
              local_50 = local_50 & 0xffffffffffffff00;
LAB_180626ed2:
              local_res20[0] = 0;
              BVar6 = ReadFile(local_60,psVar18,(DWORD)uVar15,local_res20,(LPOVERLAPPED)0x0);
              if ((BVar6 != 0) && (local_res20[0] <= uVar17)) {
                uVar17 = local_res20[0];
LAB_180626f14:
                iVar8 = iVar8 + uVar17;
                if (*(char *)((&DAT_180bb2130)[local_58] + 0x38 + uVar10 * 0x48) < '\0') {
                  if (cVar3 == '\x02') {
                    if ((char)local_50 == '\0') {
                      iVar8 = FUN_1806265b4(param_1,local_48);
                    }
                    else {
                      psVar1 = (short *)((longlong)local_48 +
                                        ((longlong)iVar8 & 0xfffffffffffffffeU));
                      psVar18 = local_48;
                      for (psVar12 = local_48; psVar12 < psVar1;
                          psVar12 = (short *)((longlong)psVar12 + lVar16)) {
                        sVar13 = *psVar12;
                        if (sVar13 == 0x1a) {
                          pbVar2 = (byte *)((&DAT_180bb2130)[local_58] + 0x38 + uVar10 * 0x48);
                          *pbVar2 = *pbVar2 | 2;
                          break;
                        }
                        if (((sVar13 == 0xd) && (psVar12 + 1 < psVar1)) && (psVar12[1] == 10)) {
                          sVar13 = 10;
                          lVar16 = 4;
                        }
                        else {
                          lVar16 = 2;
                        }
                        *psVar18 = sVar13;
                        psVar18 = psVar18 + 1;
                      }
                      iVar8 = (int)((longlong)psVar18 - (longlong)local_48 >> 1) * 2;
                    }
                  }
                  else {
                    iVar8 = FUN_1806267b0(param_1,psVar18,(longlong)iVar8,param_2,
                                          (param_3 & 0xffffffff) >> 1);
                  }
                }
                goto LAB_180626eb2;
              }
              DVar7 = GetLastError();
              if (DVar7 != 5) {
                if (DVar7 == 0x6d) {
                  iVar8 = 0;
                  goto LAB_180626eb2;
                }
                goto LAB_180626ea8;
              }
              puVar9 = (undefined4 *)FUN_18060fe00();
              *puVar9 = 9;
              puVar9 = (undefined4 *)FUN_18060fddc();
              *puVar9 = 5;
            }
            else {
              if (cVar3 != '\x02') goto LAB_180626ed2;
              local_res20[0] = 0;
              BVar6 = ReadConsoleW(local_60,psVar18,(DWORD)(uVar15 >> 1),local_res20,
                                   (PCONSOLE_READCONSOLE_CONTROL)0x0);
              if (BVar6 != 0) {
                uVar17 = local_res20[0] * 2;
                goto LAB_180626f14;
              }
              DVar7 = GetLastError();
LAB_180626ea8:
              FUN_18060fd90(DVar7);
            }
          }
          iVar8 = -1;
LAB_180626eb2:
          FUN_180621380(psVar14);
          return iVar8;
        }
      }
      puVar9 = (undefined4 *)FUN_18060fddc();
      *puVar9 = 0;
      puVar9 = (undefined4 *)FUN_18060fe00();
      *puVar9 = 0x16;
      goto LAB_18062703f;
    }
  }
  puVar9 = (undefined4 *)FUN_18060fddc();
  *puVar9 = 0;
  puVar9 = (undefined4 *)FUN_18060fe00();
  *puVar9 = 9;
LAB_18062703f:
  FUN_18060aad4();
  return -1;
}



