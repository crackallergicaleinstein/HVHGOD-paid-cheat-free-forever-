// FUN_1801f7b10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801f7b10 */

ulonglong FUN_1801f7b10(ulonglong param_1,ulonglong param_2,uint param_3,int *param_4,
                       ulonglong param_5,ulonglong param_6)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong in_RAX;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  
  if ((((param_1 == 0) || (param_2 == 0)) || (param_1 == param_2)) ||
     (in_RAX = (ulonglong)(param_3 - 1), 0xfffffffd < param_3 - 1)) goto LAB_1801f7d2a;
  uVar5 = param_3 & 0x7fff;
  uVar8 = (ulonglong)uVar5;
  in_RAX = uVar8;
  if (((((uVar5 == 0x7fff) || (*param_4 < 1)) ||
       ((param_4[1] < 1 || ((param_4[2] < 1 || (param_4[3] < 1)))))) || (param_4[4] < 1)) ||
     ((param_4[5] < 1 || (0x3fff < uVar5)))) goto LAB_1801f7d2a;
  uVar11 = (&DAT_180b0e108)[uVar8 * 4];
  in_RAX = uVar8 * 0x20;
  if (((uVar11 & 1) != 0) ||
     (in_RAX = (ulonglong)(uint)(&DAT_180b0e110)[uVar8 * 8], (&DAT_180b0e110)[uVar8 * 8] != param_3)
     ) goto LAB_1801f7d2a;
  in_RAX = (&DAT_180b0e108)[uVar8 * 4];
  if ((((in_RAX != uVar11) ||
       (in_RAX = (ulonglong)(uint)(&DAT_180b0e110)[uVar8 * 8],
       (&DAT_180b0e110)[uVar8 * 8] != param_3)) || ((&DAT_180b0e118)[uVar8 * 4] == 0)) ||
     ((((&DAT_180b0e120)[uVar8 * 8] == 0 || ((&DAT_180b0e118)[uVar8 * 4] != param_2)) ||
      (iVar1 = param_4[2], (longlong)iVar1 + param_2 == 0)))) goto LAB_1801f7d2a;
  param_5 = param_5 & 0xffffffff00000000;
  lVar9 = FUN_18017ea70();
  *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
  cVar4 = FUN_1804514c0(&param_5,(longlong)iVar1 + param_2,4);
  if (cVar4 == '\0') goto LAB_1801f7d19;
  lVar9 = FUN_18017ea70();
  if (*(int *)(lVar9 + 4) != 0) {
    *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
  }
  in_RAX = (ulonglong)((uint)param_5 - 1);
  if (0xfffffffd < (uint)param_5 - 1) goto LAB_1801f7d2a;
  uVar6 = (uint)param_5 & 0x7fff;
  in_RAX = (ulonglong)uVar6;
  if ((uVar6 == 0x7fff) || (0x3fff < uVar6)) goto LAB_1801f7d2a;
  uVar11 = (ulonglong)uVar6;
  uVar8 = (&DAT_180b0e108)[uVar11 * 4];
  if (((uVar8 & 1) != 0) ||
     (in_RAX = (ulonglong)(uint)(&DAT_180b0e110)[uVar11 * 8],
     (&DAT_180b0e110)[uVar11 * 8] != (uint)param_5)) goto LAB_1801f7d2a;
  in_RAX = (&DAT_180b0e108)[uVar11 * 4];
  if (((((in_RAX != uVar8) ||
        (in_RAX = (ulonglong)(uint)(&DAT_180b0e110)[uVar11 * 8],
        (&DAT_180b0e110)[uVar11 * 8] != (uint)param_5)) || ((&DAT_180b0e118)[uVar11 * 4] == 0)) ||
      (((&DAT_180b0e120)[uVar11 * 8] == 0 || ((&DAT_180b0e118)[uVar11 * 4] != param_1)))) ||
     (iVar1 = *param_4, (longlong)iVar1 + param_1 == 0)) goto LAB_1801f7d2a;
  param_6 = 0;
  lVar9 = FUN_18017ea70();
  *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
  cVar4 = FUN_1804514c0(&param_6,(longlong)iVar1 + param_1,8);
  if (cVar4 != '\0') {
    in_RAX = FUN_18017ea70();
    uVar8 = param_6;
    if (*(int *)(in_RAX + 4) != 0) {
      *(int *)(in_RAX + 4) = *(int *)(in_RAX + 4) + -1;
    }
    if ((param_6 == 0) || (lVar9 = (longlong)param_4[1] + param_6, lVar9 == 0)) goto LAB_1801f7d2a;
    param_6 = param_6 & 0xffffffff00000000;
    lVar10 = FUN_18017ea70();
    *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
    cVar4 = FUN_1804514c0(&param_6,lVar9,4);
    if (cVar4 == '\0') goto LAB_1801f7d19;
    lVar9 = FUN_18017ea70();
    if (*(int *)(lVar9 + 4) != 0) {
      *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
    }
    uVar3 = (uint)param_6;
    in_RAX = (ulonglong)((uint)param_6 - 1);
    if (0xfffffffd < (uint)param_6 - 1) goto LAB_1801f7d2a;
    uVar7 = (uint)param_6 & 0x7fff;
    uVar11 = (ulonglong)uVar7;
    in_RAX = uVar11;
    if (((uVar7 == 0x7fff) || ((uint)param_6 == param_3)) || (0x3fff < uVar7)) goto LAB_1801f7d2a;
    uVar12 = (&DAT_180b0e108)[uVar11 * 4];
    in_RAX = uVar11 * 0x20;
    if (((uVar12 & 1) != 0) ||
       (in_RAX = (ulonglong)(uint)(&DAT_180b0e110)[uVar11 * 8],
       (&DAT_180b0e110)[uVar11 * 8] != (uint)param_6)) goto LAB_1801f7d2a;
    uVar2 = (&DAT_180b0e118)[uVar11 * 4];
    in_RAX = (&DAT_180b0e108)[uVar11 * 4];
    if ((((in_RAX != uVar12) ||
         ((in_RAX = (ulonglong)(uint)(&DAT_180b0e110)[uVar11 * 8],
          (&DAT_180b0e110)[uVar11 * 8] != (uint)param_6 || (uVar2 == 0)))) ||
        ((&DAT_180b0e120)[uVar11 * 8] == 0)) ||
       ((uVar11 = 0, uVar2 == param_2 || (iVar1 = param_4[2], (longlong)iVar1 + uVar2 == 0))))
    goto LAB_1801f7d2a;
    param_6 = param_6 & 0xffffffff00000000;
    lVar9 = FUN_18017ea70();
    *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
    cVar4 = FUN_1804514c0(&param_6,(longlong)iVar1 + uVar2,4);
    if (cVar4 == '\0') goto LAB_1801f7d19;
    lVar9 = FUN_18017ea70();
    if (*(int *)(lVar9 + 4) != 0) {
      *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
    }
    in_RAX = (ulonglong)((uint)param_6 - 1);
    if (0xfffffffd < (uint)param_6 - 1) goto LAB_1801f7d2a;
    uVar7 = (uint)param_6 & 0x7fff;
    uVar12 = (ulonglong)uVar7;
    in_RAX = uVar12;
    if ((uVar7 == 0x7fff) || (0x3fff < uVar7)) goto LAB_1801f7d2a;
    uVar2 = (&DAT_180b0e108)[uVar12 * 4];
    in_RAX = uVar12 * 0x20;
    if (((uVar2 & 1) != 0) ||
       (in_RAX = (ulonglong)(uint)(&DAT_180b0e110)[uVar12 * 8],
       (&DAT_180b0e110)[uVar12 * 8] != (uint)param_6)) goto LAB_1801f7d2a;
    in_RAX = (&DAT_180b0e108)[uVar12 * 4];
    if (((((in_RAX != uVar2) ||
          (in_RAX = (ulonglong)(uint)(&DAT_180b0e110)[uVar12 * 8],
          (&DAT_180b0e110)[uVar12 * 8] != (uint)param_6)) || ((&DAT_180b0e118)[uVar12 * 4] == 0)) ||
        (((&DAT_180b0e120)[uVar12 * 8] == 0 || ((&DAT_180b0e118)[uVar12 * 4] != param_1)))) ||
       (iVar1 = param_4[3], (longlong)iVar1 + param_2 == 0)) goto LAB_1801f7d2a;
    param_6 = 0;
    lVar9 = FUN_18017ea70();
    *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
    cVar4 = FUN_1804514c0(&param_6,(longlong)iVar1 + param_2,8);
    if (cVar4 == '\0') goto LAB_1801f7d19;
    in_RAX = FUN_18017ea70();
    uVar12 = param_6;
    if (*(int *)(in_RAX + 4) != 0) {
      *(int *)(in_RAX + 4) = *(int *)(in_RAX + 4) + -1;
    }
    if (param_6 == 0) goto LAB_1801f7d2a;
    lVar9 = (longlong)param_4[4] + param_6;
    if (lVar9 != 0) {
      param_6 = 0;
      lVar10 = FUN_18017ea70();
      *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
      cVar4 = FUN_1804514c0(&param_6,lVar9,8);
      if (cVar4 == '\0') {
        in_RAX = FUN_18017ea70();
        if (*(int *)(in_RAX + 4) != 0) {
          *(int *)(in_RAX + 4) = *(int *)(in_RAX + 4) + -1;
        }
      }
      else {
        in_RAX = FUN_18017ea70();
        if (*(int *)(in_RAX + 4) != 0) {
          *(int *)(in_RAX + 4) = *(int *)(in_RAX + 4) + -1;
        }
        uVar11 = param_6;
      }
    }
    if ((uVar11 == 0) || (iVar1 = param_4[5], (longlong)iVar1 + uVar11 == 0)) goto LAB_1801f7d2a;
    param_6 = 0;
    lVar9 = FUN_18017ea70();
    *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
    cVar4 = FUN_1804514c0(&param_6,(longlong)iVar1 + uVar11,8);
    if (cVar4 == '\0') goto LAB_1801f7d19;
    lVar9 = FUN_18017ea70();
    if (*(int *)(lVar9 + 4) != 0) {
      *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
    }
    in_RAX = param_1;
    if (param_6 != param_1) goto LAB_1801f7d2a;
    iVar1 = param_4[1];
    if ((longlong)iVar1 + uVar8 == 0) {
LAB_1801f8069:
      in_RAX = 0;
    }
    else {
      param_6 = param_6 & 0xffffffff00000000;
      lVar9 = FUN_18017ea70();
      *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
      cVar4 = FUN_1804514c0(&param_6,(longlong)iVar1 + uVar8,4);
      if (cVar4 == '\0') {
        lVar9 = FUN_18017ea70();
        if (*(int *)(lVar9 + 4) != 0) {
          *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
        }
        goto LAB_1801f8069;
      }
      lVar9 = FUN_18017ea70();
      if (*(int *)(lVar9 + 4) != 0) {
        *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
      }
      in_RAX = param_6 & 0xffffffff;
    }
    if ((uint)in_RAX != uVar3) goto LAB_1801f7d2a;
    iVar1 = param_4[2];
    if ((longlong)iVar1 + param_2 == 0) {
LAB_1801f80b5:
      in_RAX = 0;
    }
    else {
      param_6 = param_6 & 0xffffffff00000000;
      lVar9 = FUN_18017ea70();
      *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
      cVar4 = FUN_1804514c0(&param_6,(longlong)iVar1 + param_2,4);
      if (cVar4 == '\0') {
        lVar9 = FUN_18017ea70();
        if (*(int *)(lVar9 + 4) != 0) {
          *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
        }
        goto LAB_1801f80b5;
      }
      lVar9 = FUN_18017ea70();
      if (*(int *)(lVar9 + 4) != 0) {
        *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
      }
      in_RAX = param_6 & 0xffffffff;
    }
    uVar3 = (uint)param_5;
    if (((uint)in_RAX != (uint)param_5) || (iVar1 = param_4[4], (longlong)iVar1 + uVar12 == 0))
    goto LAB_1801f7d2a;
    param_5 = 0;
    lVar9 = FUN_18017ea70();
    *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
    cVar4 = FUN_1804514c0(&param_5,(longlong)iVar1 + uVar12,8);
    if (cVar4 != '\0') {
      in_RAX = FUN_18017ea70();
      if (*(int *)(in_RAX + 4) != 0) {
        *(int *)(in_RAX + 4) = *(int *)(in_RAX + 4) + -1;
      }
      if (param_5 == uVar11) {
        uVar11 = (ulonglong)uVar5;
        in_RAX = uVar11 * 0x20;
        uVar8 = (&DAT_180b0e108)[uVar11 * 4];
        if (((uVar8 & 1) == 0) &&
           (in_RAX = (ulonglong)(uint)(&DAT_180b0e110)[uVar11 * 8],
           (&DAT_180b0e110)[uVar11 * 8] == param_3)) {
          in_RAX = (&DAT_180b0e108)[uVar11 * 4];
          if (((in_RAX == uVar8) &&
              (((in_RAX = (ulonglong)(uint)(&DAT_180b0e110)[uVar11 * 8],
                (&DAT_180b0e110)[uVar11 * 8] == param_3 && ((&DAT_180b0e118)[uVar11 * 4] != 0)) &&
               ((&DAT_180b0e120)[uVar11 * 8] != 0)))) && ((&DAT_180b0e118)[uVar11 * 4] == param_2))
          {
            uVar11 = (ulonglong)uVar6;
            uVar8 = (&DAT_180b0e108)[uVar11 * 4];
            if (((uVar8 & 1) == 0) &&
               (in_RAX = (ulonglong)(uint)(&DAT_180b0e110)[uVar11 * 8],
               (&DAT_180b0e110)[uVar11 * 8] == uVar3)) {
              in_RAX = (&DAT_180b0e108)[uVar11 * 4];
              if (in_RAX == uVar8) {
                uVar5 = (&DAT_180b0e110)[uVar11 * 8];
                in_RAX = (ulonglong)uVar5;
                if (((uVar5 == uVar3) && ((&DAT_180b0e118)[uVar11 * 4] != 0)) &&
                   (((&DAT_180b0e120)[uVar11 * 8] != 0 && ((&DAT_180b0e118)[uVar11 * 4] == param_1))
                   )) {
                  return CONCAT71((uint7)(uint3)(uVar5 >> 8),1);
                }
              }
            }
          }
        }
      }
      goto LAB_1801f7d2a;
    }
  }
LAB_1801f7d19:
  in_RAX = FUN_18017ea70();
  if (*(int *)(in_RAX + 4) != 0) {
    *(int *)(in_RAX + 4) = *(int *)(in_RAX + 4) + -1;
  }
LAB_1801f7d2a:
  return in_RAX & 0xffffffffffffff00;
}



