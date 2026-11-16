// FUN_18059bd60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18059bd60 */

ulonglong FUN_18059bd60(longlong param_1,longlong *param_2,longlong param_3,uint param_4)

{
  byte bVar1;
  byte *pbVar2;
  longlong lVar3;
  char *_Str1;
  bool bVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined *puVar9;
  byte *pbVar10;
  byte *pbVar11;
  bool bVar12;
  
  pbVar10 = (byte *)0x0;
  pbVar11 = (byte *)((ulonglong)param_4 + param_3);
  *param_2 = param_3;
  param_2[2] = (longlong)pbVar11;
  *(undefined4 *)(param_2 + 3) = 0;
  bVar4 = false;
  (*(code *)param_2[7])(param_2);
  pbVar2 = (byte *)*param_2;
  while (pbVar2 < pbVar11) {
    if (*pbVar2 == 0x65) {
      if (pbVar2 + 6 == pbVar11) {
LAB_18059bdf2:
        iVar5 = strncmp((char *)pbVar2,"eexec",5);
        if (iVar5 == 0) break;
      }
      else if (pbVar2 + 6 < pbVar11) {
        bVar1 = pbVar2[5];
        if (((bVar1 < 0x3d) && ((0x1000832100003601U >> ((ulonglong)bVar1 & 0x3f) & 1) != 0)) ||
           (((byte)(bVar1 - 0x3e) < 0x40 &&
            ((0xa0000000a0000001U >> ((ulonglong)(byte)(bVar1 - 0x3e) & 0x3f) & 1) != 0))))
        goto LAB_18059bdf2;
      }
    }
    if (*pbVar2 == 99) {
      if (pbVar2 + 10 == pbVar11) {
LAB_18059be3f:
        iVar5 = strncmp((char *)pbVar2,"closefile",9);
        if (iVar5 == 0) break;
      }
      else if (pbVar2 + 10 < pbVar11) {
        bVar1 = pbVar2[9];
        if (((bVar1 < 0x3d) && ((0x1000832100003601U >> ((ulonglong)bVar1 & 0x3f) & 1) != 0)) ||
           (((byte)(bVar1 - 0x3e) < 0x40 &&
            ((0xa0000000a0000001U >> ((ulonglong)(byte)(bVar1 - 0x3e) & 0x3f) & 1) != 0))))
        goto LAB_18059be3f;
      }
    }
    if (*pbVar2 == 0x46) {
      if (pbVar2 + 0xe != pbVar11) {
        if (pbVar2 + 0xe < pbVar11) {
          bVar1 = pbVar2[0xd];
          if (((bVar1 < 0x3d) && ((0x1000832100003601U >> ((ulonglong)bVar1 & 0x3f) & 1) != 0)) ||
             (((byte)(bVar1 - 0x3e) < 0x40 &&
              ((0xa0000000a0000001U >> ((ulonglong)(byte)(bVar1 - 0x3e) & 0x3f) & 1) != 0))))
          goto LAB_18059be8c;
        }
        goto LAB_18059bec1;
      }
LAB_18059be8c:
      iVar5 = strncmp((char *)pbVar2,"FontDirectory",0xd);
      if (iVar5 != 0) goto LAB_18059bec1;
      if ((*(uint *)((longlong)param_2 + 0x294) & 1) != 0) {
        *(uint *)((longlong)param_2 + 0x294) = *(uint *)((longlong)param_2 + 0x294) | 2;
      }
      *param_2 = *param_2 + 0xd;
    }
    else {
LAB_18059bec1:
      bVar1 = *pbVar2;
      if (bVar1 - 0x30 < 10) {
        (*(code *)param_2[8])(param_2);
        if ((int)param_2[3] != 0) break;
        bVar4 = true;
        pbVar10 = pbVar2;
      }
      else {
        if (bVar1 == 0x52) {
          if (pbVar11 <= pbVar2 + 6) goto LAB_18059c08b;
          bVar12 = pbVar2[1] == 0x44;
LAB_18059bf04:
          if ((!bVar12) || (!bVar4)) goto LAB_18059c08b;
          pbVar2 = (byte *)param_2[2];
          *param_2 = (longlong)pbVar10;
          lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xd0) + 0x50);
          (*(code *)param_2[7])(param_2);
          if ((pbVar2 <= (byte *)*param_2) || (9 < *(byte *)*param_2 - 0x30)) {
LAB_18059c0d2:
            if (lVar3 == 0) {
              *(undefined4 *)(param_2 + 3) = 3;
            }
            return 3;
          }
          iVar5 = (*(code *)param_2[9])(param_2);
          (*(code *)param_2[8])(param_2);
          if ((iVar5 < 0) || ((longlong)(pbVar2 + (-1 - *param_2)) <= (longlong)iVar5))
          goto LAB_18059c0d2;
          *param_2 = (longlong)(iVar5 + 1) + *param_2;
          if ((int)param_2[3] != 0) {
            return 3;
          }
        }
        else {
          if (bVar1 == 0x2d) {
            if (pbVar2 + 6 < pbVar11) {
              bVar12 = pbVar2[1] == 0x7c;
              goto LAB_18059bf04;
            }
          }
          else if ((bVar1 == 0x2f) && (pbVar2 + 2 < pbVar11)) {
            pbVar2 = pbVar2 + 1;
            *param_2 = (longlong)pbVar2;
            (*(code *)param_2[8])(param_2);
            if ((int)param_2[3] == 0) {
              uVar8 = (int)*param_2 - (int)pbVar2;
              if ((uVar8 - 1 < 0x15) && ((byte *)*param_2 < pbVar11)) {
                puVar9 = &DAT_18066fb10;
                uVar6 = 7;
                do {
                  if (uVar6 == uVar8) {
                    _Str1 = *(char **)(puVar9 + 8);
                    iVar5 = memcmp(pbVar2,_Str1,(ulonglong)uVar8);
                    if (iVar5 == 0) {
                      if (((*(uint *)(puVar9 + 0x30) &
                           (*(uint *)((longlong)param_2 + 0x294) & 1) + 1) != 0) &&
                         (((*(uint *)((longlong)param_2 + 0x294) & 2) == 0 ||
                          (iVar5 = strcmp(_Str1,"CharStrings"), iVar5 == 0)))) {
                        uVar7 = FUN_18059c390(param_1,param_2,puVar9);
                        *(int *)(param_2 + 3) = (int)uVar7;
                        if ((int)uVar7 != 0) {
                          if ((char)uVar7 != -0x5e) {
                            return uVar7;
                          }
                          *(undefined4 *)(param_2 + 3) = 0;
                        }
                      }
                      break;
                    }
                  }
                  uVar6 = *(uint *)(puVar9 + 0x38);
                  puVar9 = puVar9 + 0x38;
                } while (uVar6 != 0);
              }
              goto LAB_18059c09a;
            }
            break;
          }
LAB_18059c08b:
          (*(code *)param_2[8])(param_2);
          if ((int)param_2[3] != 0) break;
        }
LAB_18059c09a:
        bVar4 = false;
      }
    }
    (*(code *)param_2[7])(param_2);
    pbVar2 = (byte *)*param_2;
  }
  return (ulonglong)*(uint *)(param_2 + 3);
}



