// FUN_1804268b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804268b0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804268b0(longlong param_1,longlong *param_2)

{
  double dVar1;
  int iVar2;
  char *pcVar3;
  longlong lVar4;
  char cVar5;
  char cVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined4 uVar11;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [64];
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_a8;
  lVar4 = *param_2;
  if (lVar4 == 0) {
  }
  plVar10 = param_2 + 1;
  lVar9 = 0;
  plVar8 = param_2;
LAB_180426911:
  iVar2 = FUN_180423a20(param_1,lVar4,*plVar10);
  if (iVar2 == 0) {
    pcVar3 = (char *)*plVar8;
    lVar4 = 0;
    do {
      lVar7 = lVar4 + 1;
      if (pcVar3[lVar4] != "width"[lVar4]) {
        lVar4 = 0;
        goto LAB_180426970;
      }
      lVar4 = lVar7;
    } while (lVar7 != 6);
    uVar11 = FUN_180422f50(param_1,*plVar10,0,0);
    **(undefined4 **)(param_1 + 0x9c20) = uVar11;
  }
  goto LAB_180426c51;
  while (lVar4 = lVar7, lVar7 != 7) {
LAB_180426970:
    lVar7 = lVar4 + 1;
    if (pcVar3[lVar4] != "height"[lVar4]) {
      lVar4 = 0;
      goto LAB_1804269b3;
    }
  }
  uVar11 = FUN_180422f50(param_1,*plVar10,0,0);
  *(undefined4 *)(*(longlong *)(param_1 + 0x9c20) + 4) = uVar11;
  goto LAB_180426c51;
  while (lVar4 = lVar7, lVar7 != 8) {
LAB_1804269b3:
    lVar7 = lVar4 + 1;
    if (pcVar3[lVar4] != (&DAT_18081e880)[lVar4]) {
      iVar2 = strcmp(pcVar3,"preserveAspectRatio");
      if (iVar2 == 0) {
        lVar4 = FUN_180606b80(*plVar10,&DAT_1806bba88);
        if (lVar4 == 0) {
          lVar4 = FUN_180606b80(*plVar10,&DAT_18081e870);
          if (lVar4 == 0) {
            lVar4 = FUN_180606b80(*plVar10,&DAT_18081e878);
            if (lVar4 == 0) {
              lVar4 = FUN_180606b80(*plVar10,&DAT_18081e860);
              if (lVar4 != 0) {
                *(undefined4 *)(param_1 + 0x9c48) = 2;
              }
            }
            else {
              *(undefined4 *)(param_1 + 0x9c48) = 1;
            }
          }
          else {
            *(undefined4 *)(param_1 + 0x9c48) = 0;
          }
          lVar4 = FUN_180606b80(*plVar10,&DAT_18081e868);
          if (lVar4 == 0) {
            lVar4 = FUN_180606b80(*plVar10,&DAT_18081e8e8);
            if (lVar4 == 0) {
              lVar4 = FUN_180606b80(*plVar10,&DAT_18081e8f0);
              if (lVar4 != 0) {
                *(undefined4 *)(param_1 + 0x9c4c) = 2;
              }
            }
            else {
              *(undefined4 *)(param_1 + 0x9c4c) = 1;
            }
          }
          else {
            *(undefined4 *)(param_1 + 0x9c4c) = 0;
          }
          *(undefined4 *)(param_1 + 0x9c50) = 1;
          lVar4 = FUN_180606b80(*plVar10,"slice");
          if (lVar4 != 0) {
            *(undefined4 *)(param_1 + 0x9c50) = 2;
          }
        }
        else {
          *(undefined4 *)(param_1 + 0x9c50) = 0;
        }
      }
      goto LAB_180426c51;
    }
  }
  pcVar3 = (char *)FUN_180422970(*plVar10,local_88);
  dVar1 = (double)FUN_1804227e0(local_88);
  *(float *)(param_1 + 0x9c38) = (float)dVar1;
  cVar5 = *pcVar3;
  if (cVar5 == '\0') {
  }
  do {
    lVar4 = FUN_180606b00(&DAT_18081e618,(int)cVar5);
    if (((lVar4 == 0) && (cVar6 = *pcVar3, cVar6 != '%')) && (cVar6 != ',')) break;
    cVar5 = pcVar3[1];
    pcVar3 = pcVar3 + 1;
    cVar6 = '\0';
  } while (cVar5 != '\0');
  if (cVar6 == '\0') {
  }
  pcVar3 = (char *)FUN_180422970(pcVar3,local_88);
  dVar1 = (double)FUN_1804227e0(local_88);
  *(float *)(param_1 + 0x9c3c) = (float)dVar1;
  cVar5 = *pcVar3;
  if (cVar5 == '\0') {
  }
  do {
    lVar4 = FUN_180606b00(&DAT_18081e618,(int)cVar5);
    if (((lVar4 == 0) && (cVar6 = *pcVar3, cVar6 != '%')) && (cVar6 != ',')) break;
    cVar5 = pcVar3[1];
    pcVar3 = pcVar3 + 1;
    cVar6 = '\0';
  } while (cVar5 != '\0');
  if (cVar6 == '\0') {
  }
  pcVar3 = (char *)FUN_180422970(pcVar3,local_88);
  dVar1 = (double)FUN_1804227e0(local_88);
  *(float *)(param_1 + 40000) = (float)dVar1;
  cVar5 = *pcVar3;
  if (cVar5 == '\0') {
  }
  do {
    lVar4 = FUN_180606b00(&DAT_18081e618,(int)cVar5);
    if (((lVar4 == 0) && (cVar6 = *pcVar3, cVar6 != '%')) && (cVar6 != ',')) break;
    cVar5 = pcVar3[1];
    pcVar3 = pcVar3 + 1;
    cVar6 = '\0';
  } while (cVar5 != '\0');
  if (cVar6 == '\0') {
  }
  FUN_180422970(pcVar3,local_88);
  dVar1 = (double)FUN_1804227e0(local_88);
  *(float *)(param_1 + 0x9c44) = (float)dVar1;
LAB_180426c51:
  lVar9 = lVar9 + 2;
  plVar10 = plVar10 + 2;
  lVar4 = param_2[lVar9];
  plVar8 = param_2 + lVar9;
  if (lVar4 == 0) {
  }
  goto LAB_180426911;
}



