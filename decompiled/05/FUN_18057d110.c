// FUN_18057d110 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18057d110 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18057d110(undefined8 param_1)

{
  char cVar1;
  char *pcVar2;
  longlong lVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined1 auStack_1e8 [32];
  char local_1c8 [144];
  char local_138 [144];
  char local_a8 [144];
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_1e8;
  pcVar2 = (char *)common_getenv<>("FREETYPE_PROPERTIES");
  if (pcVar2 != (char *)0x0) {
    cVar1 = *pcVar2;
    while (cVar1 != '\0') {
      if ((cVar1 != ' ') && (cVar1 != '\t')) {
        uVar4 = 0;
        lVar3 = 0;
        pcVar5 = pcVar2;
        do {
          cVar1 = *pcVar5;
          if ((cVar1 == '\0') || (cVar1 == ':')) break;
          local_a8[lVar3] = cVar1;
          cVar1 = pcVar5[1];
          if ((cVar1 == '\0') || (cVar1 == ':')) {
            lVar3 = lVar3 + 1;
            uVar4 = uVar4 + 1;
            pcVar5 = pcVar5 + 1;
            break;
          }
          local_a8[lVar3 + 1] = cVar1;
          pcVar5 = pcVar5 + 2;
          lVar3 = lVar3 + 2;
          uVar4 = uVar4 + 2;
        } while (lVar3 < 0x80);
        if (0x80 < uVar4) {
LAB_18057d329:
                    /* WARNING: Subroutine does not return */
          FUN_1805f5e50();
        }
        local_a8[lVar3] = '\0';
        if (*pcVar5 == '\0') {
        }
        if (*pcVar5 != ':') {
        }
        if (pcVar5 == pcVar2) {
        }
        uVar4 = 0;
        lVar3 = 0;
        pcVar6 = pcVar5 + 1;
        do {
          cVar1 = *pcVar6;
          if ((cVar1 == '\0') || (cVar1 == '=')) break;
          local_138[lVar3] = cVar1;
          cVar1 = pcVar6[1];
          if ((cVar1 == '\0') || (cVar1 == '=')) {
            lVar3 = lVar3 + 1;
            uVar4 = uVar4 + 1;
            pcVar6 = pcVar6 + 1;
            break;
          }
          local_138[lVar3 + 1] = cVar1;
          pcVar6 = pcVar6 + 2;
          lVar3 = lVar3 + 2;
          uVar4 = uVar4 + 2;
        } while (lVar3 < 0x80);
        if (0x80 < uVar4) goto LAB_18057d329;
        local_138[lVar3] = '\0';
        if (*pcVar6 == '\0') {
        }
        if (*pcVar6 != '=') {
        }
        if (pcVar6 == pcVar5 + 1) {
        }
        uVar4 = 0;
        lVar3 = 0;
        pcVar2 = pcVar6 + 1;
        do {
          cVar1 = *pcVar2;
          if (((cVar1 == '\0') || (cVar1 == ' ')) || (cVar1 == '\t')) break;
          local_1c8[lVar3] = cVar1;
          cVar1 = pcVar2[1];
          if (((cVar1 == '\0') || (cVar1 == ' ')) || (cVar1 == '\t')) {
            lVar3 = lVar3 + 1;
            uVar4 = uVar4 + 1;
            pcVar2 = pcVar2 + 1;
            break;
          }
          local_1c8[lVar3 + 1] = cVar1;
          pcVar2 = pcVar2 + 2;
          lVar3 = lVar3 + 2;
          uVar4 = uVar4 + 2;
        } while (lVar3 < 0x80);
        if (0x80 < uVar4) goto LAB_18057d329;
        local_1c8[lVar3] = '\0';
        cVar1 = *pcVar2;
        if (((cVar1 != '\0') && (cVar1 != ' ')) && (cVar1 != '\t')) {
        }
        if (pcVar2 == pcVar6 + 1) {
        }
        FUN_18057b9d0(param_1,local_a8,local_138,local_1c8);
        if (*pcVar2 == '\0') {
        }
      }
      pcVar5 = pcVar2 + 1;
      pcVar2 = pcVar2 + 1;
      cVar1 = *pcVar5;
    }
  }
}



