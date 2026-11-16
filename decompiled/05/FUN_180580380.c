// FUN_180580380 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180580380 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180580380(longlong *param_1,longlong param_2)

{
  char *pcVar1;
  char cVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  char *pcVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  int *piVar16;
  int iVar17;
  ushort uVar18;
  uint uVar19;
  uint uVar20;
  ulonglong uVar21;
  undefined1 auStack_268 [32];
  longlong *local_248;
  uint local_240;
  uint local_23c;
  undefined *local_238;
  uint local_230;
  int local_22c;
  longlong local_228;
  longlong local_220;
  ushort local_218;
  ushort uStack_216;
  undefined2 uStack_214;
  undefined2 uStack_212;
  undefined2 uStack_210;
  undefined2 uStack_20e;
  undefined2 uStack_20c;
  undefined2 uStack_20a;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  int local_1e8 [52];
  int local_118 [52];
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_268;
  local_238 = &DAT_18066bd50 + (longlong)*(int *)(*param_1 + 0xc) * 8;
  iVar6 = *(int *)(&DAT_18066bd50 + (longlong)*(int *)(*param_1 + 0xc) * 8);
  local_248 = param_1;
  local_228 = param_2;
  do {
    if (iVar6 == 0x159b) {
    }
    bVar4 = true;
    pcVar11 = &DAT_18066a7b0 + iVar6;
    local_220 = 0x44;
    if ((local_238[4] & 2) == 0) {
      local_220 = 0x208;
    }
    local_220 = local_220 + (longlong)local_248;
    local_240 = 0;
    local_23c = 0;
    plVar8 = local_248;
    uVar15 = 0;
    uVar21 = 0;
    while (cVar2 = *pcVar11, cVar2 != '\0') {
      while (cVar2 == ' ') {
        pcVar1 = pcVar11 + 1;
        pcVar11 = pcVar11 + 1;
        cVar2 = *pcVar1;
      }
      if (cVar2 == '|') {
        bVar4 = false;
        pcVar11 = pcVar11 + 1;
      }
      else {
        pcVar11 = (char *)FUN_1805871d0(pcVar11,plVar8,&local_22c,&local_230);
        plVar8 = local_248;
        if (local_230 < 2) {
          if (local_22c != 0) {
            iVar6 = FUN_180574690(param_2);
            lVar3 = *(longlong *)(param_2 + 0x78);
            local_218 = *(ushort *)(lVar3 + 0x98);
            uStack_216 = *(ushort *)(lVar3 + 0x9a);
            uStack_214 = *(undefined2 *)(lVar3 + 0x9c);
            uStack_212 = *(undefined2 *)(lVar3 + 0x9e);
            uStack_210 = *(undefined2 *)(lVar3 + 0xa0);
            uStack_20e = *(undefined2 *)(lVar3 + 0xa2);
            uStack_20c = *(undefined2 *)(lVar3 + 0xa4);
            uStack_20a = *(undefined2 *)(lVar3 + 0xa6);
            lVar5 = *(longlong *)(lVar3 + 0xa0);
            local_208 = *(undefined4 *)(lVar3 + 0xa8);
            uStack_204 = *(undefined4 *)(lVar3 + 0xac);
            uStack_200 = *(undefined4 *)(lVar3 + 0xb0);
            uStack_1fc = *(undefined4 *)(lVar3 + 0xb4);
            plVar8 = local_248;
            if ((iVar6 == 0) && (2 < uStack_216)) {
              iVar6 = 0;
              lVar13 = 0;
              iVar17 = -1;
              uVar12 = 0xffffffff;
              if ((ulonglong)local_218 != 0) {
                do {
                  iVar7 = (int)uVar12 + 1;
                  uVar18 = *(ushort *)(*(longlong *)(lVar3 + 0xb0) + lVar13 * 2);
                  uVar12 = (ulonglong)uVar18;
                  if (iVar7 < (int)(uint)uVar18) {
                    uVar15 = (ulonglong)uVar18;
                    lVar10 = (longlong)iVar7;
                    uVar18 = *(ushort *)(local_238 + 4) & 1;
                    if ((*(ushort *)(local_238 + 4) & 2) == 0) {
                      if (uVar18 == 0) {
                        if (lVar10 <= (longlong)uVar15) {
                          piVar16 = (int *)(lVar5 + 4 + lVar10 * 8);
                          lVar10 = (uVar15 - lVar10) + 1;
                          do {
                            if ((iVar17 < 0) || (*piVar16 < iVar6)) {
                              iVar6 = *piVar16;
                              iVar17 = iVar7;
                            }
                            iVar7 = iVar7 + 1;
                            piVar16 = piVar16 + 2;
                            lVar10 = lVar10 + -1;
                          } while (lVar10 != 0);
                        }
                      }
                      else if (lVar10 <= (longlong)uVar15) {
                        piVar16 = (int *)(lVar5 + 4 + lVar10 * 8);
                        lVar10 = (uVar15 - lVar10) + 1;
                        do {
                          if ((iVar17 < 0) || (iVar6 < *piVar16)) {
                            iVar6 = *piVar16;
                            iVar17 = iVar7;
                          }
                          iVar7 = iVar7 + 1;
                          piVar16 = piVar16 + 2;
                          lVar10 = lVar10 + -1;
                        } while (lVar10 != 0);
                      }
                    }
                    else if (uVar18 == 0) {
                      for (; lVar10 <= (longlong)uVar15; lVar10 = lVar10 + 1) {
                        if ((iVar17 < 0) || (*(int *)(lVar10 * 8 + lVar5) < iVar6)) {
                          iVar6 = *(int *)(lVar10 * 8 + lVar5);
                          iVar17 = iVar7;
                        }
                        iVar7 = iVar7 + 1;
                      }
                    }
                    else if (lVar10 <= (longlong)uVar12) {
                      do {
                        if ((iVar17 < 0) || (iVar6 < *(int *)(lVar10 * 8 + lVar5))) {
                          iVar6 = *(int *)(lVar10 * 8 + lVar5);
                          iVar17 = iVar7;
                        }
                        iVar7 = iVar7 + 1;
                        lVar10 = lVar10 + 1;
                      } while (lVar10 <= (longlong)uVar15);
                    }
                  }
                  lVar13 = lVar13 + 1;
                } while (lVar13 < (longlong)(ulonglong)local_218);
                uVar21 = (ulonglong)local_240;
                uVar15 = (ulonglong)local_23c;
              }
              param_2 = local_228;
              if (bVar4) {
                local_240 = (int)uVar21 + 1;
                local_1e8[uVar21] = iVar6;
                uVar21 = (ulonglong)local_240;
              }
              else {
                local_23c = (int)uVar15 + 1;
                local_118[uVar15] = iVar6;
                uVar15 = (ulonglong)local_23c;
              }
            }
          }
        }
      }
    }
    uVar14 = (uint)uVar15;
    uVar20 = (uint)uVar21;
    if ((uVar14 != 0) || (uVar20 != 0)) {
      uVar19 = 1;
      if (1 < uVar20) {
        do {
          if (uVar19 != 0) {
            piVar16 = local_1e8 + uVar19;
            uVar9 = uVar19;
            do {
              iVar6 = *piVar16;
              uVar9 = uVar9 - 1;
              if (local_1e8[uVar9] <= iVar6) break;
              *piVar16 = local_1e8[uVar9];
              piVar16 = piVar16 + -1;
              local_1e8[uVar9] = iVar6;
            } while (uVar9 != 0);
          }
          uVar19 = uVar19 + 1;
        } while (uVar19 < uVar20);
      }
      uVar19 = 1;
      if (1 < uVar14) {
        do {
          if (uVar19 != 0) {
            piVar16 = local_118 + uVar19;
            uVar9 = uVar19;
            do {
              iVar6 = *piVar16;
              uVar9 = uVar9 - 1;
              if (local_118[uVar9] <= iVar6) break;
              *piVar16 = local_118[uVar9];
              piVar16 = piVar16 + -1;
              local_118[uVar9] = iVar6;
            } while (uVar9 != 0);
          }
          uVar19 = uVar19 + 1;
        } while (uVar19 < uVar14);
      }
      piVar16 = (int *)(local_220 + 0xdc + (ulonglong)*(uint *)(local_220 + 0xd8) * 0x1c);
      *(uint *)(local_220 + 0xd8) = *(uint *)(local_220 + 0xd8) + 1;
      if (uVar14 == 0) {
        iVar6 = local_1e8[uVar21 >> 1];
        piVar16[3] = iVar6;
        *piVar16 = iVar6;
      }
      else {
        iVar6 = local_118[uVar15 >> 1];
        if (uVar20 == 0) {
          piVar16[3] = iVar6;
          *piVar16 = iVar6;
        }
        else {
          *piVar16 = local_1e8[uVar21 >> 1];
          piVar16[3] = iVar6;
        }
      }
      iVar6 = *piVar16;
      iVar17 = piVar16[3];
      if ((iVar17 != iVar6) && ((ushort)(iVar17 < iVar6) != (*(ushort *)(local_238 + 4) & 1))) {
        iVar6 = (iVar17 + iVar6) / 2;
        piVar16[3] = iVar6;
        *piVar16 = iVar6;
      }
      piVar16[6] = 0;
      if ((local_238[4] & 1) != 0) {
        piVar16[6] = 2;
      }
    }
    iVar6 = *(int *)(local_238 + 8);
    local_238 = local_238 + 8;
  } while( true );
}



