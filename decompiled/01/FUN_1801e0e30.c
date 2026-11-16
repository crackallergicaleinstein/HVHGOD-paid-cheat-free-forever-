// FUN_1801e0e30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801e0e30 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801e0e30(longlong *param_1)

{
  uint uVar1;
  bool bVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  char cVar6;
  uint uVar7;
  byte bVar8;
  char cVar9;
  char cVar10;
  undefined *puVar11;
  longlong lVar12;
  byte bVar13;
  uint uVar14;
  undefined1 auStack_68 [32];
  undefined1 local_48 [16];
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_68;
  uVar1 = *(uint *)(param_1 + 3);
  puVar11 = &DAT_1807c7630;
  uVar5 = 0x55b;
  do {
    uVar4 = uVar5 >> 1;
    if (*(uint *)(puVar11 + uVar4 * 4) <= uVar1) {
      puVar11 = puVar11 + uVar4 * 4 + 4;
      uVar4 = uVar5 + (-1 - uVar4);
    }
    uVar5 = uVar4;
  } while (0 < (longlong)uVar4);
  lVar12 = (longlong)(puVar11 + -0x1807c7630) >> 2;
  if ((lVar12 == 0) ||
     ((*(ushort *)(&UNK_1807c8b9a + lVar12 * 2) & 0xfff) + *(int *)(&UNK_1807c762c + lVar12 * 4) <=
      uVar1)) {
    uVar7 = 0xff;
  }
  else {
    uVar7 = (uint)(*(ushort *)(&UNK_1807c8b9a + lVar12 * 2) >> 0xc);
  }
  puVar11 = &DAT_1807c7450;
  uVar5 = 0x4e;
  do {
    uVar4 = uVar5 >> 1;
    if (*(uint *)(puVar11 + uVar4 * 4) <= uVar1) {
      puVar11 = puVar11 + uVar4 * 4 + 4;
      uVar4 = uVar5 + (-1 - uVar4);
    }
    uVar5 = uVar4;
  } while (0 < (longlong)uVar4);
  lVar12 = (longlong)(puVar11 + -0x1807c7450) >> 2;
  if (lVar12 == 0) {
    cVar9 = -1;
  }
  else {
    cVar9 = -1;
    if (uVar1 < (uint)*(ushort *)(&UNK_1807c7586 + lVar12 * 2) +
                *(int *)(&UNK_1807c744c + lVar12 * 4)) {
      cVar9 = '\0';
    }
  }
  bVar8 = 0;
  do {
    while( true ) {
      lVar12 = param_1[2];
      *param_1 = lVar12;
      if (lVar12 != param_1[1]) {
        plVar3 = (longlong *)FUN_1801e61d0(local_48,lVar12,param_1[1],param_1 + 3);
        param_1[2] = *plVar3;
      }
      if (*param_1 == param_1[1]) {
      }
      uVar1 = *(uint *)(param_1 + 3);
      puVar11 = &DAT_1807c7630;
      uVar5 = 0x55b;
      do {
        uVar4 = uVar5 >> 1;
        if (*(uint *)(puVar11 + uVar4 * 4) <= uVar1) {
          puVar11 = puVar11 + uVar4 * 4 + 4;
          uVar4 = uVar5 + (-1 - uVar4);
        }
        uVar5 = uVar4;
      } while (0 < (longlong)uVar4);
      lVar12 = (longlong)(puVar11 + -0x1807c7630) >> 2;
      if ((lVar12 == 0) ||
         ((*(ushort *)(&UNK_1807c8b9a + lVar12 * 2) & 0xfff) + *(int *)(&UNK_1807c762c + lVar12 * 4)
          <= uVar1)) {
        uVar14 = 0xff;
      }
      else {
        uVar14 = (uint)(*(ushort *)(&UNK_1807c8b9a + lVar12 * 2) >> 0xc);
      }
      puVar11 = &DAT_1807c7450;
      uVar5 = 0x4e;
      do {
        uVar4 = uVar5 >> 1;
        if (*(uint *)(puVar11 + uVar4 * 4) <= uVar1) {
          puVar11 = puVar11 + uVar4 * 4 + 4;
          uVar4 = uVar5 + (-1 - uVar4);
        }
        uVar5 = uVar4;
      } while (0 < (longlong)uVar4);
      lVar12 = (longlong)(puVar11 + -0x1807c7450) >> 2;
      if (lVar12 == 0) {
        cVar10 = -1;
      }
      else {
        cVar10 = -1;
        if (uVar1 < (uint)*(ushort *)(&UNK_1807c7586 + lVar12 * 2) +
                    *(int *)(&UNK_1807c744c + lVar12 * 4)) {
          cVar10 = '\0';
        }
      }
      cVar6 = (char)uVar7;
      bVar13 = (byte)uVar14;
      if ((char)param_1[4] != '\0') break;
      if (cVar9 == '\0') {
        *(undefined1 *)(param_1 + 4) = 1;
      }
LAB_1801e109d:
      bVar2 = false;
      bVar8 = bVar8 + 1;
      if (cVar6 != '\b') {
        bVar8 = 0;
      }
      if (cVar6 != '\0') {
        if (cVar6 == '\x01') {
        }
        if (cVar6 == '\x04') {
        }
        goto LAB_1801e10f5;
      }
      if (bVar13 != 4) {
      }
LAB_1801e117d:
      cVar9 = cVar10;
      uVar7 = uVar14;
    }
    if ((char)param_1[4] != '\x01') goto LAB_1801e109d;
    if (cVar6 == '\f') {
      *(undefined1 *)(param_1 + 4) = 0;
      bVar2 = true;
    }
    else {
      bVar2 = false;
      if (cVar6 != '\x02') {
        *(undefined1 *)(param_1 + 4) = 0;
        goto LAB_1801e109d;
      }
    }
    bVar8 = 0;
LAB_1801e10f5:
    if (((uVar14 & 0xfa) == 0) && (bVar13 != 5)) {
    }
    if (cVar6 != '\x03') {
      if ((((cVar6 != '\x05') && (cVar6 != '\v')) || (1 < (byte)(bVar13 - 10))) &&
         (((uVar7 - 6 & 0xfb) != 0 || (bVar13 != 10)))) {
LAB_1801e1142:
        if ((((0xc < bVar13) || ((0x1204U >> (uVar14 & 0x1f) & 1) == 0)) && (cVar6 != '\a')) &&
           ((!bVar2 || (cVar10 != '\0')))) {
          if (cVar6 != '\b') {
          }
          if (bVar13 != 8) {
          }
          if (!(bool)(bVar8 & 1)) {
          }
        }
      }
      goto LAB_1801e117d;
    }
    if ((0xb < bVar13) || ((0x868U >> (uVar14 & 0x1f) & 1) == 0)) goto LAB_1801e1142;
    cVar9 = cVar10;
    uVar7 = uVar14;
  } while( true );
}



