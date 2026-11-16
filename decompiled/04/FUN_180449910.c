// FUN_180449910 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180449910 */

undefined * FUN_180449910(undefined4 param_1,ulonglong param_2,undefined8 *param_3,char param_4)

{
  char *pcVar1;
  code *pcVar2;
  byte bVar3;
  char cVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong unaff_RBX;
  undefined8 unaff_RBP;
  char cVar9;
  undefined8 unaff_RSI;
  byte bVar10;
  longlong unaff_RDI;
  ulonglong uVar11;
  char cVar12;
  int iVar13;
  char in_R11B;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  ulonglong uVar14;
  undefined8 unaff_R14;
  undefined1 *puVar15;
  undefined8 unaff_R15;
  longlong local_res8;
  
  switch(param_1) {
  case 0:
    *param_3 = &DAT_180774920 + (param_2 & 0xffff) * 0xf;
    return &DAT_180774920;
  case 1:
    *param_3 = &DAT_180769c00 + (param_2 & 0xffff) * 0xe;
    return &DAT_180769c00;
  case 2:
    *param_3 = &DAT_18076a1d0 + (param_2 & 0xffff) * 0xf;
    return &DAT_18076a1d0;
  case 3:
    *param_3 = &DAT_180756e10 + (param_2 & 0xffff) * 0x10;
    return &DAT_180756e10 + (param_2 & 0xffff) * 0x10;
  case 4:
    *param_3 = &DAT_1807430d0 + (param_2 & 0xffff) * 0x12;
    return &DAT_1807430d0 + (param_2 & 0xffff) * 0x12;
  case 5:
    *param_3 = &DAT_18077ba90 + (param_2 & 0xffff) * 0x11;
    return &DAT_18077ba90;
  }
  lVar7 = 0x25;
  pcVar2 = (code *)swi(0x29);
  lVar5 = (*pcVar2)();
  *(byte *)(lVar7 + -0x66baffbc) = *(byte *)(lVar7 + -0x66baffbc) ^ (byte)unaff_RBX;
  *(char *)(param_2 - 0x67) = *(char *)(param_2 - 0x67) + in_R11B;
  *(char *)(unaff_RDI + -0x67) = *(char *)(unaff_RDI + -0x67) + (char)unaff_R13;
  pcVar1 = (char *)(lVar7 + -0x6665ffbc + unaff_RBX * 4);
  cVar12 = (char)param_3;
  *pcVar1 = *pcVar1 + cVar12;
  *(char *)(lVar5 + -0x77) = *(char *)(lVar5 + -0x77) + param_4;
  *(char *)(local_res8 + 0x20) = param_4;
  *(ulonglong *)(local_res8 + 0x10) = param_2;
  *(undefined8 *)(local_res8 + -8) = unaff_RBP;
  *(undefined8 *)(local_res8 + -0x10) = unaff_RSI;
  *(longlong *)(local_res8 + -0x18) = unaff_RDI;
  *(undefined8 *)(local_res8 + -0x20) = unaff_R12;
  *(undefined8 *)(local_res8 + -0x28) = unaff_R13;
  *(undefined8 *)(local_res8 + -0x30) = unaff_R14;
  *(undefined8 *)(local_res8 + -0x38) = unaff_R15;
  lVar5 = *(longlong *)(lVar7 + 0x18);
  uVar14 = *(longlong *)(lVar7 + 0x20) - lVar5;
  uVar6 = (ulonglong)param_3 & 0xff;
  if (uVar6 <= uVar14) {
    if (param_2 != 0) {
      bVar3 = 0;
      puVar15 = (undefined1 *)0x0;
      cVar9 = '\a';
      if ((param_2 & 0xffffffff00000000) != 0) {
        cVar9 = '\x0f';
      }
      do {
        iVar13 = (int)cVar9;
        uVar11 = param_2 >> ((ulonglong)(uint)(iVar13 * 4) & 0x3f);
        bVar10 = (byte)uVar11 & 0xf;
        if (bVar3 == 0) {
          if ((uVar11 & 0xf) != 0) {
            if (((param_4 == '\0') || (bVar10 < 10)) || (iVar13 < (int)uVar6)) {
              lVar8 = 0;
            }
            else {
              lVar8 = 1;
            }
            if (uVar14 <= (ulonglong)(lVar8 + cVar9)) {
              return (undefined *)0x80100009;
            }
            puVar15 = (undefined1 *)(*(longlong *)(lVar7 + 0x38) + -1 + lVar5);
            if ((char)lVar8 != '\0') {
              *puVar15 = 0x30;
              bVar3 = 1;
            }
            if (iVar13 < (int)uVar6) {
              bVar3 = (cVar12 - cVar9) - 1;
              *(undefined8 *)(local_res8 + -0x60) = 0x180449b16;
              FUN_18063ab10(puVar15,0x30,bVar3);
              param_4 = *(char *)(local_res8 + 0x20);
            }
            goto LAB_180449b23;
          }
        }
        else {
LAB_180449b23:
          if (*(char *)(local_res8 + 0x28) == '\0') {
            cVar4 = "0123456789abcdef"[bVar10];
          }
          else {
            cVar4 = "0123456789ABCDEF"[bVar10];
          }
          param_2 = *(ulonglong *)(local_res8 + 0x10);
          puVar15[bVar3] = cVar4;
          bVar3 = bVar3 + 1;
        }
        cVar9 = cVar9 + -1;
        if (cVar9 < '\0') {
          *(ulonglong *)(lVar7 + 0x18) = (ulonglong)bVar3 + lVar5;
          *(undefined1 *)((ulonglong)bVar3 + *(longlong *)(lVar7 + 0x38) + -1 + lVar5) = 0;
          return (undefined *)0x100000;
        }
      } while( true );
    }
    if (cVar12 == '\0') {
      uVar6 = 1;
    }
    if (uVar6 <= uVar14) {
      lVar8 = *(longlong *)(lVar7 + 0x38);
      *(undefined8 *)(local_res8 + -0x60) = 0x180449a42;
      FUN_18063ab10(lVar8 + -1 + lVar5,0x30,uVar6);
      *(ulonglong *)(lVar7 + 0x18) = lVar5 + uVar6;
      *(undefined1 *)(*(longlong *)(lVar7 + 0x38) + lVar5 + -1 + uVar6) = 0;
      return (undefined *)0x100000;
    }
  }
  return (undefined *)0x80100009;
}



