// FUN_18038d3c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18038d3c0 */

undefined8 FUN_18038d3c0(undefined8 param_1,char *param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  
  if ((((((DAT_180cc81b0 == '\0') && (DAT_180cc8280 == '\0')) && (DAT_180cc82f8 == '\0')) &&
       (((DAT_180cc8360 == '\0' && (DAT_180cc8438 == '\0')) &&
        ((DAT_180cc8600 == '\0' && ((DAT_180cc8960 == '\0' && (DAT_180cc8a30 == '\0')))))))) &&
      (DAT_180cc8a98 == '\0')) &&
     ((((DAT_180cc8b00 == '\0' && (DAT_180cc8b68 == '\0')) && (param_2[0x2f0f8] == '\0')) &&
      (param_2[0x2f168] == '\0')))) {
    if (*(int *)(param_2 + 0x2f0f0) == 1) {
      if (*param_2 != '\0') {
        return 1;
      }
      if (param_2[0x2f4c8] != '\0') {
        return 1;
      }
    }
    else if (*(int *)(param_2 + 0x2f0f0) == 0) {
      if (param_2[0x11c00] != '\0') {
        return 1;
      }
      if (param_2[0x11da8] != '\0') {
        return 1;
      }
      if (param_2[0x11d18] != '\0') {
        return 1;
      }
      if (*(int *)(param_2 + 0x11bc8) == 1) {
        uVar3 = 0;
        do {
          if (param_2[uVar3 + 0x11bd4] != '\0') {
            lVar1 = uVar3 * 0xb70;
            if (param_2[lVar1 + 0x12770] != '\0') {
              return 1;
            }
            if (param_2[lVar1 + 0x12918] != '\0') {
              return 1;
            }
            if (param_2[lVar1 + 0x12888] != '\0') {
              return 1;
            }
          }
          uVar2 = (int)uVar3 + 1;
          uVar3 = (ulonglong)uVar2;
        } while (uVar2 < 6);
      }
      else if (*(int *)(param_2 + 0x11bc8) == 2) {
        uVar3 = 0;
        do {
          if (param_2[uVar3 + 0x11bda] != '\0') {
            lVar1 = uVar3 * 0xb70;
            if (param_2[lVar1 + 0x16c10] != '\0') {
              return 1;
            }
            if (param_2[lVar1 + 0x16db8] != '\0') {
              return 1;
            }
            if (param_2[lVar1 + 0x16d28] != '\0') {
              return 1;
            }
          }
          uVar2 = (int)uVar3 + 1;
          uVar3 = (ulonglong)uVar2;
        } while (uVar2 < 0x22);
      }
    }
    if ((param_2[0x2fa00] == '\0') && (*(char *)(param_3 + 0xa08) == '\0')) {
      return 0;
    }
  }
  return 1;
}



