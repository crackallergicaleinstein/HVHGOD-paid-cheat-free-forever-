// FUN_180451510 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180451510 */

ulonglong * FUN_180451510(ulonglong *param_1,longlong *param_2,longlong *param_3)

{
  char cVar1;
  char cVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  byte bVar8;
  int iVar9;
  ushort *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ushort local_res10;
  ushort local_res20;
  ushort local_38;
  
  uVar3 = param_2[1];
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  if ((uVar3 != 0) && (uVar4 = param_3[1], uVar4 != 0)) {
    uVar12 = 0;
    uVar11 = 0;
    if (uVar3 != 0) {
LAB_180451560:
      do {
        if (uVar4 <= uVar12) break;
        lVar5 = *param_2;
        cVar1 = *(char *)(lVar5 + uVar11);
        uVar6 = uVar11;
        if ((cVar1 == ' ') || (cVar1 == '\t')) goto LAB_180451587;
        if (cVar1 == '>') {
          *(undefined1 *)(param_1 + 1) = 1;
LAB_180451583:
          param_1[2] = uVar12;
LAB_180451587:
          uVar6 = uVar6 + 1;
        }
        else {
          if (cVar1 == '*') {
            *(undefined1 *)(param_1 + 1) = 2;
            goto LAB_180451583;
          }
          if (cVar1 == '^') {
            *(undefined1 *)(param_1 + 1) = 3;
            goto LAB_180451583;
          }
          if (cVar1 == '~') {
            *(undefined1 *)(param_1 + 4) = 1;
            goto LAB_180451587;
          }
          if (((int)cVar1 - 0x2bU & 0xfd) == 0) {
            uVar11 = 0;
            while (uVar6 = uVar6 + 1, uVar6 < uVar3) {
              cVar2 = *(char *)(lVar5 + uVar6);
              iVar9 = (int)cVar2;
              if ((byte)(cVar2 - 0x30U) < 10) {
                iVar9 = iVar9 + -0x30;
              }
              else if ((byte)(cVar2 + 0x9fU) < 6) {
                iVar9 = iVar9 + -0x57;
              }
              else {
                if (5 < (byte)(cVar2 + 0xbfU)) break;
                iVar9 = iVar9 + -0x37;
              }
              if (iVar9 < 0) break;
              uVar11 = uVar11 << 4 | (longlong)iVar9;
            }
            uVar7 = -uVar11;
            if (cVar1 != '-') {
              uVar7 = uVar11;
            }
            param_1[3] = uVar7;
          }
          else {
            uVar6 = uVar11 + 1;
            if (cVar1 == '?') {
              *(undefined2 *)(*param_3 + uVar12 * 2) = 0x100;
              uVar12 = uVar12 + 1;
              if (uVar3 <= uVar6) break;
              uVar11 = uVar6;
              if (*(char *)(lVar5 + uVar6) == '?') goto LAB_180451587;
              goto LAB_180451560;
            }
            if ((cVar1 < '0') || ('9' < cVar1)) {
              if ((byte)(cVar1 + 0x9fU) < 6) {
                bVar8 = cVar1 + 0xa9;
              }
              else {
                bVar8 = cVar1 - 0x37;
                if (5 < (byte)(cVar1 + 0xbfU)) {
                  bVar8 = 0xff;
                }
              }
            }
            else {
              bVar8 = cVar1 - 0x30;
            }
            if (uVar3 <= uVar6) {
              local_38 = (ushort)bVar8;
              *(ushort *)(*param_3 + uVar12 * 2) = local_38;
              uVar12 = uVar12 + 1;
              goto LAB_18045158a;
            }
            cVar1 = *(char *)(lVar5 + uVar6);
            iVar9 = (int)cVar1;
            if ((byte)(cVar1 - 0x30U) < 10) {
              iVar9 = iVar9 + -0x30;
LAB_18045166e:
              puVar10 = (ushort *)(*param_3 + uVar12 * 2);
              if (iVar9 != -1) {
                uVar6 = uVar11 + 2;
                local_res10 = (ushort)(byte)(bVar8 << 4 | (byte)iVar9);
                uVar12 = uVar12 + 1;
                *puVar10 = local_res10;
                goto LAB_18045158a;
              }
            }
            else {
              if ((byte)(cVar1 + 0x9fU) < 6) {
                iVar9 = iVar9 + -0x57;
                goto LAB_18045166e;
              }
              if ((byte)(cVar1 + 0xbfU) < 6) {
                iVar9 = iVar9 + -0x37;
                goto LAB_18045166e;
              }
              puVar10 = (ushort *)(*param_3 + uVar12 * 2);
            }
            uVar12 = uVar12 + 1;
            local_res20 = (ushort)bVar8;
            *puVar10 = local_res20;
          }
        }
LAB_18045158a:
        uVar11 = uVar6;
      } while (uVar6 < uVar3);
    }
    *param_1 = uVar12;
  }
  return param_1;
}



