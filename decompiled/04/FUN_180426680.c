// FUN_180426680 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180426680 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180426680(longlong param_1,longlong *param_2,undefined1 param_3)

{
  int iVar1;
  char cVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  char *pcVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  double dVar11;
  undefined1 auStack_b8 [32];
  float local_98 [4];
  char local_88;
  undefined1 local_87;
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_b8;
  iVar7 = 0;
  *(undefined4 *)(param_1 + 0x9c10) = 0;
  lVar8 = *param_2;
  if (lVar8 != 0) {
    plVar9 = param_2 + 1;
    lVar10 = 0;
    plVar5 = param_2;
    do {
      iVar1 = FUN_180423a20(param_1,lVar8,*plVar9);
      if (iVar1 == 0) {
        lVar8 = 0;
        do {
          lVar4 = lVar8 + 1;
          if (*(char *)(*plVar5 + lVar8) != "points"[lVar8]) goto LAB_18042683d;
          lVar8 = lVar4;
        } while (lVar4 != 7);
        pcVar6 = (char *)*plVar9;
        lVar8 = 0;
        cVar2 = *pcVar6;
        while (cVar2 != '\0') {
          local_88 = '\0';
          cVar2 = *pcVar6;
          if (cVar2 != '\0') {
            do {
              lVar4 = FUN_180606b00(&DAT_18081e618,(int)cVar2);
              if ((lVar4 == 0) && (cVar3 = *pcVar6, cVar3 != ',')) break;
              cVar2 = pcVar6[1];
              pcVar6 = pcVar6 + 1;
              cVar3 = '\0';
            } while (cVar2 != '\0');
            if (cVar3 != '\0') {
              if ((((cVar3 - 0x2bU & 0xfc) == 0) && (cVar3 != ',')) || ((byte)(cVar3 - 0x30U) < 10))
              {
                pcVar6 = (char *)FUN_180422970(pcVar6,&local_88);
              }
              else {
                pcVar6 = pcVar6 + 1;
                local_87 = 0;
                local_88 = cVar3;
              }
            }
          }
          dVar11 = (double)FUN_1804227e0(&local_88);
          local_98[lVar8] = (float)dVar11;
          lVar8 = lVar8 + 1;
          if (1 < lVar8) {
            if (iVar7 == 0) {
              if (*(int *)(param_1 + 0x9c10) < 1) {
                FUN_1804218b0(param_1,local_98[0],local_98[1]);
              }
              else {
                *(float *)(*(longlong *)(param_1 + 0x9c08) + -8 +
                          (longlong)(*(int *)(param_1 + 0x9c10) * 2) * 4) = local_98[0];
                *(float *)(*(longlong *)(param_1 + 0x9c08) + -4 +
                          (longlong)(*(int *)(param_1 + 0x9c10) * 2) * 4) = local_98[1];
              }
            }
            else {
              FUN_180421970(param_1,local_98[0],local_98[1]);
            }
            lVar8 = 0;
            iVar7 = iVar7 + 1;
          }
          cVar2 = *pcVar6;
        }
      }
LAB_18042683d:
      lVar10 = lVar10 + 0x10;
      plVar9 = plVar9 + 2;
      lVar8 = *(longlong *)(lVar10 + (longlong)param_2);
      plVar5 = (longlong *)(lVar10 + (longlong)param_2);
    } while (lVar8 != 0);
  }
  FUN_1804225d0(param_1,param_3);
  FUN_180422270(param_1);
}



