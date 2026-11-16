// FUN_1804d4360 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804d4360 */

undefined8 * FUN_1804d4360(undefined8 *param_1,longlong param_2,int param_3)

{
  int iVar1;
  undefined1 (*pauVar2) [16];
  char cVar3;
  char cVar4;
  longlong lVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  char cVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  char *pcVar13;
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28 [16];
  
  pcVar13 = SUB168(*(undefined1 (*) [16])(param_2 + 0x90),0);
  iVar8 = SUB164(*(undefined1 (*) [16])(param_2 + 0x90),0xc);
  if (*(longlong *)(param_2 + 0x98) < 0) {
    iVar1 = iVar8;
  }
  else {
    iVar1 = 0;
    if (0 < iVar8) {
      iVar12 = 1;
      iVar1 = 1;
      if (*pcVar13 != '\0') {
        if (*pcVar13 == '\x03') {
          iVar1 = 2;
          if (iVar8 < 2) {
            cVar9 = '\0';
            iVar11 = 1;
            lVar5 = 1;
          }
          else {
            cVar9 = pcVar13[1];
            iVar12 = 2;
            iVar11 = 2;
            lVar5 = 2;
            iVar1 = 3;
          }
          if (iVar11 < iVar8) {
            cVar6 = pcVar13[lVar5];
          }
          else {
            cVar6 = '\0';
            iVar1 = iVar12;
          }
          if (iVar1 < iVar8) {
            lVar5 = (longlong)iVar1;
            iVar1 = iVar1 + 1;
            cVar10 = pcVar13[lVar5];
          }
          else {
            cVar10 = '\0';
          }
          if (iVar1 < iVar8) {
            lVar5 = (longlong)iVar1;
            iVar1 = iVar1 + 1;
            cVar3 = pcVar13[lVar5];
          }
          else {
            cVar3 = '\0';
          }
          iVar12 = 0;
          uVar7 = (uint)CONCAT11(cVar10,cVar3);
          if (CONCAT11(cVar9,cVar6) != 0) {
            do {
              if (iVar1 < iVar8) {
                lVar5 = (longlong)iVar1;
                iVar1 = iVar1 + 1;
                cVar10 = pcVar13[lVar5];
              }
              else {
                cVar10 = '\0';
              }
              if (iVar1 < iVar8) {
                lVar5 = (longlong)iVar1;
                iVar1 = iVar1 + 1;
                cVar3 = pcVar13[lVar5];
              }
              else {
                cVar3 = '\0';
              }
              if (iVar1 < iVar8) {
                lVar5 = (longlong)iVar1;
                iVar1 = iVar1 + 1;
                cVar4 = pcVar13[lVar5];
              }
              else {
                cVar4 = '\0';
              }
              if (((int)uVar7 <= param_3) && (param_3 < (int)(uint)CONCAT11(cVar3,cVar4)))
              goto LAB_1804d44dc;
              iVar12 = iVar12 + 1;
              uVar7 = (uint)CONCAT11(cVar3,cVar4);
            } while (iVar12 < (int)(uint)CONCAT11(cVar9,cVar6));
          }
        }
        *param_1 = 0;
        param_1[1] = 0;
        return param_1;
      }
    }
  }
  param_3 = param_3 + iVar1;
  if (((iVar8 < param_3) || (param_3 < 0)) || (iVar8 <= param_3)) {
    cVar10 = '\0';
  }
  else {
    cVar10 = pcVar13[param_3];
  }
LAB_1804d44dc:
  local_48 = *(undefined1 (*) [16])(param_2 + 0x80);
  pauVar2 = (undefined1 (*) [16])FUN_1804d22e0(local_28,local_48,cVar10);
  local_38 = *(undefined8 *)(param_2 + 0x40);
  uStack_30 = *(undefined8 *)(param_2 + 0x48);
  local_48 = *pauVar2;
  FUN_1804d2640(param_1,&local_38,local_48);
  return param_1;
}



