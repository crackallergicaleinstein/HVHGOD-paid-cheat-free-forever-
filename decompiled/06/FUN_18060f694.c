// FUN_18060f694 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18060f694 */

ulonglong FUN_18060f694(longlong param_1,longlong *param_2,uint param_3,byte param_4)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  byte bVar13;
  
  pcVar2 = (char *)*param_2;
  if (pcVar2 == (char *)0x0) {
    puVar8 = (undefined4 *)FUN_18060fe00();
    *puVar8 = 0x16;
    FUN_18060aad4();
LAB_18060f709:
    if ((longlong *)param_2[1] != (longlong *)0x0) {
      *(longlong *)param_2[1] = *param_2;
    }
    return 0;
  }
  if ((param_3 != 0) && (0x22 < param_3 - 2)) {
    *(undefined1 *)(param_1 + 0x30) = 1;
    *(undefined4 *)(param_1 + 0x2c) = 0x16;
    FUN_18060aa1c(0,0,0,0,0,param_1);
    goto LAB_18060f709;
  }
  cVar5 = *pcVar2;
  *param_2 = (longlong)(pcVar2 + 1);
  if (*(char *)(param_1 + 0x28) == '\0') {
    FUN_18060e230();
  }
  while (iVar6 = FUN_18060f970(cVar5,8,param_1 + 0x18), iVar6 != 0) {
    cVar5 = *(char *)*param_2;
    *param_2 = (longlong)((char *)*param_2 + 1);
  }
  bVar13 = param_4 | 2;
  if (cVar5 != '-') {
    bVar13 = param_4;
  }
  if ((cVar5 - 0x2bU & 0xfd) == 0) {
    cVar5 = *(char *)*param_2;
    *param_2 = (longlong)((char *)*param_2 + 1);
  }
  if ((param_3 & 0xffffffef) != 0) goto LAB_18060f81b;
  if ((byte)(cVar5 - 0x30U) < 10) {
    iVar6 = cVar5 + -0x30;
LAB_18060f7be:
    if (iVar6 != 0) goto LAB_18060f80f;
    pcVar3 = (char *)*param_2;
    cVar1 = *pcVar3;
    *param_2 = (longlong)(pcVar3 + 1);
    if ((cVar1 + 0xa8U & 0xdf) != 0) {
      *param_2 = (longlong)pcVar3;
      uVar7 = 8;
      if (param_3 != 0) {
        uVar7 = param_3;
      }
      param_3 = uVar7;
      if ((cVar1 != '\0') && (*pcVar3 != cVar1)) {
        puVar8 = (undefined4 *)FUN_18060fe00();
        *puVar8 = 0x16;
        FUN_18060aad4();
      }
      goto LAB_18060f81b;
    }
    cVar5 = pcVar3[1];
    *param_2 = (longlong)(pcVar3 + 2);
    uVar7 = 0x10;
  }
  else {
    if ((byte)(cVar5 + 0x9fU) < 0x1a) {
      iVar6 = cVar5 + -0x57;
      goto LAB_18060f7be;
    }
    if ((byte)(cVar5 + 0xbfU) < 0x1a) {
      iVar6 = cVar5 + -0x37;
      goto LAB_18060f7be;
    }
LAB_18060f80f:
    uVar7 = 10;
  }
  if (param_3 != 0) {
    uVar7 = param_3;
  }
  param_3 = uVar7;
LAB_18060f81b:
  uVar12 = (ulonglong)(int)param_3;
  uVar10 = 0xffffffffffffffff % uVar12;
  uVar11 = 0;
  while( true ) {
    if ((byte)(cVar5 - 0x30U) < 10) {
      uVar9 = (ulonglong)((int)cVar5 - 0x30);
    }
    else if ((byte)(cVar5 + 0x9fU) < 0x1a) {
      uVar9 = (ulonglong)((int)cVar5 - 0x57);
    }
    else if ((byte)(cVar5 + 0xbfU) < 0x1a) {
      uVar9 = (ulonglong)((int)cVar5 - 0x37);
    }
    else {
      uVar9 = 0xffffffff;
    }
    pcVar3 = (char *)*param_2;
    if (param_3 <= (uint)uVar9) break;
    cVar5 = *pcVar3;
    uVar10 = uVar9 + uVar12 * uVar11;
    *param_2 = (longlong)(pcVar3 + 1);
    bVar13 = bVar13 | (uVar10 < uVar12 * uVar11 || 0xffffffffffffffff / uVar12 < uVar11) << 2 | 8U;
    uVar11 = uVar10;
  }
  *param_2 = (longlong)(pcVar3 + -1);
  if ((cVar5 != '\0') && (pcVar3[-1] != cVar5)) {
    puVar8 = (undefined4 *)FUN_18060fe00(uVar9,uVar10);
    *puVar8 = 0x16;
    FUN_18060aad4();
  }
  if ((bVar13 & 8) == 0) {
    *param_2 = (longlong)pcVar2;
    if ((undefined8 *)param_2[1] == (undefined8 *)0x0) {
      return 0;
    }
    *(undefined8 *)param_2[1] = pcVar2;
    return 0;
  }
  cVar5 = FUN_18060ebe4(bVar13,uVar11);
  if (cVar5 == '\0') {
    if ((bVar13 & 2) != 0) {
      uVar11 = -uVar11;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x30) = 1;
    *(undefined4 *)(param_1 + 0x2c) = 0x22;
    if ((bVar13 & 1) != 0) {
      plVar4 = (longlong *)param_2[1];
      if ((bVar13 & 2) == 0) {
        if (plVar4 != (longlong *)0x0) {
          *plVar4 = *param_2;
        }
        return 0x7fffffffffffffff;
      }
      if (plVar4 != (longlong *)0x0) {
        *plVar4 = *param_2;
      }
      return 0x8000000000000000;
    }
    uVar11 = 0xffffffffffffffff;
  }
  if ((longlong *)param_2[1] != (longlong *)0x0) {
    *(longlong *)param_2[1] = *param_2;
  }
  return uVar11;
}



