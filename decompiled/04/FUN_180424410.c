// FUN_180424410 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180424410 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180424410(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  longlong lVar3;
  char *pcVar4;
  ulonglong uVar5;
  char *pcVar6;
  int iVar7;
  char *pcVar8;
  undefined1 auStack_458 [32];
  undefined1 local_438 [512];
  undefined1 local_238 [512];
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_458;
  cVar2 = *param_2;
  do {
    if (cVar2 == '\0') {
    }
    cVar2 = *param_2;
    do {
      lVar3 = FUN_180606b00(&DAT_18081e618,(int)cVar2);
      if (lVar3 == 0) break;
      cVar2 = param_2[1];
      param_2 = param_2 + 1;
    } while (cVar2 != '\0');
    cVar2 = *param_2;
    pcVar6 = param_2;
    while ((pcVar8 = pcVar6, cVar2 != '\0' && (cVar2 != ';'))) {
      pcVar8 = pcVar6 + 1;
      pcVar6 = pcVar6 + 1;
      cVar2 = *pcVar8;
    }
    while ((param_2 < pcVar8 &&
           ((*pcVar8 == ';' || (lVar3 = FUN_180606b00(&DAT_18081e618,(int)*pcVar8), lVar3 != 0)))))
    {
      pcVar8 = pcVar8 + -1;
    }
    pcVar8 = pcVar8 + 1;
    for (pcVar4 = param_2; (pcVar1 = pcVar4, pcVar4 < pcVar8 && (*pcVar4 != ':'));
        pcVar4 = pcVar4 + 1) {
    }
    while ((param_2 < pcVar1 &&
           ((*pcVar1 == ':' || (lVar3 = FUN_180606b00(&DAT_18081e618,(int)*pcVar1), lVar3 != 0)))))
    {
      pcVar1 = pcVar1 + -1;
    }
    iVar7 = ((int)pcVar1 - (int)param_2) + 1;
    if (iVar7 < 0x200) {
      uVar5 = (ulonglong)iVar7;
      if (iVar7 != 0) goto LAB_18042452c;
    }
    else {
      uVar5 = 0x1ff;
LAB_18042452c:
      FUN_18063aed0(local_238,param_2,uVar5);
    }
    if (0x1ff < uVar5) goto LAB_180424620;
    local_238[uVar5] = 0;
    while ((pcVar4 < pcVar8 &&
           ((*pcVar4 == ':' || (lVar3 = FUN_180606b00(&DAT_18081e618,(int)*pcVar4), lVar3 != 0)))))
    {
      pcVar4 = pcVar4 + 1;
    }
    iVar7 = (int)pcVar8 - (int)pcVar4;
    if (iVar7 < 0x200) {
      uVar5 = (ulonglong)iVar7;
      if (iVar7 != 0) goto LAB_18042459c;
    }
    else {
      uVar5 = 0x1ff;
LAB_18042459c:
      FUN_18063aed0(local_438,pcVar4,uVar5);
    }
    if (0x1ff < uVar5) {
LAB_180424620:
                    /* WARNING: Subroutine does not return */
      FUN_1805f5e50();
    }
    local_438[uVar5] = 0;
    FUN_180423a20(param_1,local_238,local_438);
    if (*pcVar6 == '\0') {
    }
    cVar2 = pcVar6[1];
    param_2 = pcVar6 + 1;
  } while( true );
}



