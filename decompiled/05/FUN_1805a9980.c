// FUN_1805a9980 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805a9980 */

void FUN_1805a9980(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  byte bVar4;
  undefined8 uVar5;
  byte *pbVar6;
  char *_Str2;
  bool bVar7;
  int iVar8;
  byte *pbVar9;
  uint uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  uint uVar13;
  byte *pbVar14;
  int iVar15;
  int local_res10;
  
  puVar12 = *(undefined8 **)(param_1 + 0x2a0);
  puVar1 = param_2 + 0x22;
  uVar5 = param_2[4];
  pbVar6 = (byte *)param_2[2];
  local_res10 = 0;
  bVar7 = false;
  (*(code *)param_2[7])(param_2);
  if ((byte *)*param_2 < pbVar6) {
    bVar4 = *(byte *)*param_2;
    if (bVar4 - 0x30 < 10) {
      iVar8 = (*(code *)param_2[9])(param_2);
      *(int *)(param_2 + 0x21) = iVar8;
      if (*(int *)(param_2 + 3) != 0) {
        return;
      }
      if (-1 < iVar8) {
        pbVar14 = (byte *)*param_2;
        lVar11 = (longlong)pbVar6 - (longlong)pbVar14 >> 2;
        if (lVar11 < iVar8) {
          *(int *)(param_2 + 0x21) = (int)lVar11;
        }
LAB_1805a9aaf:
        if ((pbVar14 < pbVar6) && (*(int *)(param_2 + 0x3b) == 0)) {
          iVar8 = (**(code **)*puVar12)(param_2 + 0x2d,*(undefined4 *)(param_2 + 0x21),uVar5);
          if ((iVar8 != 0) ||
             ((iVar8 = (**(code **)*puVar12)(puVar1,*(undefined4 *)(param_2 + 0x21),uVar5),
              iVar8 != 0 || (iVar8 = (**(code **)*puVar12)(param_2 + 0x38,4,uVar5), iVar8 != 0))))
          goto LAB_1805a9a87;
          iVar15 = 0;
          (*(code *)param_2[7])(param_2);
          pbVar14 = (byte *)*param_2;
          if (pbVar14 < pbVar6) {
            lVar11 = 0;
            iVar15 = 0;
            do {
              if (*pbVar14 == 0x65) {
                if (((pbVar14 + 3 < pbVar6) && (pbVar14[1] == 0x6e)) && (pbVar14[2] == 100)) {
                  bVar4 = pbVar14[3];
                  if ((bVar4 != 0x20) && ((0xd < bVar4 || ((0x3601U >> (bVar4 & 0x1f) & 1) == 0))))
                  goto LAB_1805a9b63;
                  break;
                }
              }
              else {
LAB_1805a9b63:
                if (*pbVar14 == 0x3e) break;
              }
              (*(code *)param_2[8])(param_2);
              if (pbVar6 <= (byte *)*param_2) goto LAB_1805a9a82;
              if (*(int *)(param_2 + 3) != 0) {
                return;
              }
              bVar4 = *pbVar14;
              if ((bVar4 == 0x2f) || (bVar4 == 0x28)) {
                if (pbVar6 <= pbVar14 + (ulonglong)(bVar4 == 0x28) + 2) goto LAB_1805a9a82;
                pbVar14 = pbVar14 + 1;
                uVar10 = (int)(byte *)*param_2 - (int)pbVar14;
                uVar13 = uVar10 - 1;
                if (bVar4 != 0x28) {
                  uVar13 = uVar10;
                }
                iVar8 = (*(code *)param_2[0x2b])(puVar1,iVar15,pbVar14,uVar13 + 1);
                if (iVar8 != 0) goto LAB_1805a9a87;
                *(undefined1 *)((ulonglong)uVar13 + *(longlong *)(param_2[0x26] + lVar11)) = 0;
                if (*pbVar14 == 0x2e) {
                  iVar8 = strcmp(".notdef",*(char **)(param_2[0x26] + lVar11));
                  if (iVar8 == 0) {
                    bVar7 = true;
                    local_res10 = iVar15;
                  }
                }
                (*(code *)param_2[7])(param_2);
                if (bVar4 == 0x28) {
                  (*(code *)param_2[8])(param_2);
                }
                uVar5 = *param_2;
                (*(code *)param_2[9])(param_2);
                if (pbVar6 <= (byte *)*param_2) goto LAB_1805a9a82;
                uVar13 = (int)(byte *)*param_2 - (int)uVar5;
                iVar8 = (*(code *)param_2[0x36])(param_2 + 0x2d,iVar15,uVar5,uVar13 + 1);
                if (iVar8 != 0) goto LAB_1805a9a87;
                iVar15 = iVar15 + 1;
                plVar2 = (longlong *)(param_2[0x31] + lVar11);
                lVar11 = lVar11 + 8;
                *(undefined1 *)((ulonglong)uVar13 + *plVar2) = 0;
                if (*(int *)(param_2 + 0x21) <= iVar15) break;
              }
              (*(code *)param_2[7])(param_2);
              pbVar14 = (byte *)*param_2;
            } while (pbVar14 < pbVar6);
          }
          puVar12 = param_2 + 0x38;
          *(int *)(param_2 + 0x21) = iVar15;
          if (bVar7) {
            _Str2 = *(char **)param_2[0x26];
            iVar8 = strcmp(".notdef",_Str2);
            if (iVar8 == 0) {
              return;
            }
            iVar8 = (*(code *)param_2[0x41])(puVar12,0,_Str2,*(undefined4 *)param_2[0x27]);
            if ((iVar8 == 0) &&
               (iVar8 = (*(code *)param_2[0x41])
                                  (puVar12,1,*(undefined8 *)param_2[0x31],
                                   *(undefined4 *)param_2[0x32]), iVar8 == 0)) {
              lVar11 = (longlong)local_res10 * 4;
              lVar3 = (longlong)local_res10 * 8;
              iVar8 = (*(code *)param_2[0x41])
                                (puVar12,2,*(undefined8 *)(param_2[0x26] + lVar3),
                                 *(undefined4 *)(param_2[0x27] + lVar11));
              if ((iVar8 == 0) &&
                 ((((iVar8 = (*(code *)param_2[0x41])
                                       (puVar12,3,*(undefined8 *)(param_2[0x31] + lVar3),
                                        *(undefined4 *)(lVar11 + param_2[0x32])), iVar8 == 0 &&
                    (iVar8 = (*(code *)param_2[0x2b])
                                       (puVar1,local_res10,*(undefined8 *)param_2[0x3c],
                                        *(undefined4 *)param_2[0x3d]), iVar8 == 0)) &&
                   (iVar8 = (*(code *)param_2[0x36])
                                      (param_2 + 0x2d,local_res10,*(undefined8 *)(param_2[0x3c] + 8)
                                       ,*(undefined4 *)(param_2[0x3d] + 4)), iVar8 == 0)) &&
                  ((iVar8 = (*(code *)param_2[0x2b])
                                      (puVar1,0,*(undefined8 *)(param_2[0x3c] + 0x10),
                                       *(undefined4 *)(param_2[0x3d] + 8)), iVar8 == 0 &&
                   (iVar8 = (*(code *)param_2[0x36])
                                      (param_2 + 0x2d,0,*(undefined8 *)(param_2[0x3c] + 0x18),
                                       *(undefined4 *)(param_2[0x3d] + 0xc)), iVar8 == 0)))))) {
                return;
              }
            }
            goto LAB_1805a9a87;
          }
        }
      }
    }
    else if (bVar4 == 0x3c) {
      iVar8 = 0;
      (*(code *)param_2[8])(param_2);
      if (*(int *)(param_2 + 3) != 0) {
        return;
      }
      (*(code *)param_2[7])(param_2);
      pbVar14 = (byte *)*param_2;
      if (pbVar6 <= pbVar14) goto LAB_1805a9aaf;
      pbVar9 = pbVar14;
      do {
        if (*pbVar9 == 0x2f) {
          iVar8 = iVar8 + 1;
        }
        else if (*pbVar9 == 0x3e) {
          *(int *)(param_2 + 0x21) = iVar8;
          *param_2 = pbVar14;
          goto LAB_1805a9aaf;
        }
        (*(code *)param_2[8])(param_2);
        if (*(int *)(param_2 + 3) != 0) {
          return;
        }
        (*(code *)param_2[7])(param_2);
        pbVar9 = (byte *)*param_2;
      } while (pbVar9 < pbVar6);
    }
  }
LAB_1805a9a82:
  iVar8 = 3;
LAB_1805a9a87:
  *(int *)(param_2 + 3) = iVar8;
  return;
}



