// FUN_18060ec1c - decompiled reference (Ghidra). Not original source, does not compile.

/* 18060ec1c */

uint FUN_18060ec1c(longlong param_1,longlong *param_2,uint param_3,uint param_4)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  char cVar12;
  uint uVar13;
  
  pcVar2 = (char *)*param_2;
  uVar11 = (ulonglong)param_3;
  if (pcVar2 == (char *)0x0) {
    puVar7 = (undefined4 *)FUN_18060fe00();
    *puVar7 = 0x16;
    FUN_18060aad4();
LAB_18060ec91:
    if ((longlong *)param_2[1] != (longlong *)0x0) {
      *(longlong *)param_2[1] = *param_2;
    }
    return 0;
  }
  if ((param_3 != 0) && (0x22 < param_3 - 2)) {
    *(undefined1 *)(param_1 + 0x30) = 1;
    *(undefined4 *)(param_1 + 0x2c) = 0x16;
    FUN_18060aa1c(0,0,0,0,0,param_1);
    goto LAB_18060ec91;
  }
  cVar12 = *pcVar2;
  *param_2 = (longlong)(pcVar2 + 1);
  if (*(char *)(param_1 + 0x28) == '\0') {
    FUN_18060e230();
  }
  while (iVar5 = FUN_18060f970(cVar12,8,param_1 + 0x18), iVar5 != 0) {
    cVar12 = *(char *)*param_2;
    *param_2 = (longlong)((char *)*param_2 + 1);
  }
  uVar10 = param_4 & 0xff | 2;
  if (cVar12 != '-') {
    uVar10 = param_4 & 0xff;
  }
  if ((cVar12 - 0x2bU & 0xfd) == 0) {
    cVar12 = *(char *)*param_2;
    *param_2 = (longlong)((char *)*param_2 + 1);
  }
  if ((param_3 & 0xffffffef) == 0) {
    if ((byte)(cVar12 - 0x30U) < 10) {
      iVar5 = cVar12 + -0x30;
LAB_18060ed41:
      if (iVar5 != 0) goto LAB_18060ed92;
      pcVar3 = (char *)*param_2;
      cVar1 = *pcVar3;
      *param_2 = (longlong)(pcVar3 + 1);
      if ((cVar1 + 0xa8U & 0xdf) != 0) {
        *param_2 = (longlong)pcVar3;
        uVar13 = 8;
        if (param_3 != 0) {
          uVar13 = param_3;
        }
        uVar11 = (ulonglong)uVar13;
        if ((cVar1 != '\0') && (*pcVar3 != cVar1)) {
          puVar7 = (undefined4 *)FUN_18060fe00();
          *puVar7 = 0x16;
          FUN_18060aad4();
        }
        goto LAB_18060ed9e;
      }
      cVar12 = pcVar3[1];
      *param_2 = (longlong)(pcVar3 + 2);
      uVar13 = 0x10;
    }
    else {
      if ((byte)(cVar12 + 0x9fU) < 0x1a) {
        iVar5 = cVar12 + -0x57;
        goto LAB_18060ed41;
      }
      if ((byte)(cVar12 + 0xbfU) < 0x1a) {
        iVar5 = cVar12 + -0x37;
        goto LAB_18060ed41;
      }
LAB_18060ed92:
      uVar13 = 10;
    }
    if (param_3 != 0) {
      uVar13 = param_3;
    }
    uVar11 = (ulonglong)uVar13;
  }
LAB_18060ed9e:
  uVar9 = 0xffffffff % uVar11;
  uVar13 = 0;
  while( true ) {
    if ((byte)(cVar12 - 0x30U) < 10) {
      uVar8 = (int)cVar12 - 0x30;
    }
    else if ((byte)(cVar12 + 0x9fU) < 0x1a) {
      uVar8 = (int)cVar12 - 0x57;
    }
    else if ((byte)(cVar12 + 0xbfU) < 0x1a) {
      uVar8 = (int)cVar12 - 0x37;
    }
    else {
      uVar8 = 0xffffffff;
    }
    pcVar3 = (char *)*param_2;
    if ((uint)uVar11 <= uVar8) break;
    cVar12 = *pcVar3;
    uVar6 = uVar13 * (uint)uVar11;
    uVar8 = uVar6 + uVar8;
    uVar9 = (ulonglong)uVar8;
    *param_2 = (longlong)(pcVar3 + 1);
    uVar10 = uVar10 | (uint)(uVar8 < uVar6 || (uint)(0xffffffff / uVar11) < uVar13) << 2 | 8;
    uVar13 = uVar8;
  }
  *param_2 = (longlong)(pcVar3 + -1);
  if ((cVar12 != '\0') && (pcVar3[-1] != cVar12)) {
    puVar7 = (undefined4 *)FUN_18060fe00(uVar8,uVar9);
    *puVar7 = 0x16;
    FUN_18060aad4();
  }
  if ((uVar10 & 8) == 0) {
    *param_2 = (longlong)pcVar2;
    if ((undefined8 *)param_2[1] == (undefined8 *)0x0) {
      return 0;
    }
    *(undefined8 *)param_2[1] = pcVar2;
    return 0;
  }
  if ((uVar10 & 4) == 0) {
    if ((uVar10 & 1) == 0) {
      if ((uVar10 & 2) == 0) goto LAB_18060ee8d;
LAB_18060eeae:
      uVar13 = -uVar13;
      goto LAB_18060ee8d;
    }
    if ((uVar10 & 2) == 0) {
      if (uVar13 < 0x80000000) goto LAB_18060ee8d;
    }
    else if (uVar13 < 0x80000001) goto LAB_18060eeae;
  }
  *(undefined1 *)(param_1 + 0x30) = 1;
  *(undefined4 *)(param_1 + 0x2c) = 0x22;
  if ((uVar10 & 1) != 0) {
    plVar4 = (longlong *)param_2[1];
    if ((uVar10 & 2) != 0) {
      if (plVar4 != (longlong *)0x0) {
        *plVar4 = *param_2;
      }
      return 0x80000000;
    }
    if (plVar4 == (longlong *)0x0) {
      return 0x7fffffff;
    }
    *plVar4 = *param_2;
    return 0x7fffffff;
  }
  uVar13 = 0xffffffff;
LAB_18060ee8d:
  if ((longlong *)param_2[1] != (longlong *)0x0) {
    *(longlong *)param_2[1] = *param_2;
  }
  return uVar13;
}



