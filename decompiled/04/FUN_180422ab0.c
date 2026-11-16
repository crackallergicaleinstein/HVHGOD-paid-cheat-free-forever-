// FUN_180422ab0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180422ab0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180422ab0(longlong param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  char *pcVar5;
  longlong lVar6;
  float fVar7;
  double dVar8;
  undefined1 auStack_68 [32];
  uint *local_48;
  undefined2 local_38;
  undefined1 local_36;
  float local_30 [4];
  uint local_20;
  uint local_1c;
  uint local_18 [2];
  ulonglong local_10;
  
  local_10 = DAT_1808d5f00 ^ (ulonglong)auStack_68;
  local_48 = local_18;
  iVar3 = FUN_1804396b0(param_1,"rgb(%u, %u, %u)",&local_20,&local_1c);
  if (iVar3 != 3) {
    pcVar5 = (char *)(param_1 + 4);
    iVar3 = 0;
    lVar6 = 0;
    local_38 = 0x2c2c;
    local_36 = 0x29;
    do {
      cVar2 = *pcVar5;
      while ((cVar2 != '\0' && (lVar4 = FUN_180606b00(&DAT_18081e618,(int)cVar2), lVar4 != 0))) {
        cVar2 = pcVar5[1];
        pcVar5 = pcVar5 + 1;
      }
      cVar2 = *pcVar5;
      if (cVar2 == '+') {
        cVar2 = pcVar5[1];
        pcVar5 = pcVar5 + 1;
      }
      if (cVar2 == '\0') break;
      dVar8 = (double)FUN_1804227e0(pcVar5);
      cVar2 = *pcVar5;
      local_30[lVar6] = (float)dVar8;
      while ((cVar2 != '\0' && ((byte)(cVar2 - 0x30U) < 10))) {
        pcVar1 = pcVar5 + 1;
        pcVar5 = pcVar5 + 1;
        cVar2 = *pcVar1;
      }
      if (*pcVar5 == '.') {
        cVar2 = pcVar5[1];
        pcVar1 = pcVar5;
        if (9 < (byte)(cVar2 - 0x30U)) break;
        while ((pcVar5 = pcVar1 + 1, cVar2 != '\0' && ((byte)(cVar2 - 0x30U) < 10))) {
          cVar2 = pcVar1[2];
          pcVar1 = pcVar5;
        }
      }
      if (*pcVar5 != '%') break;
      cVar2 = pcVar5[1];
      while ((pcVar5 = pcVar5 + 1, cVar2 != '\0' &&
             (lVar4 = FUN_180606b00(&DAT_18081e618,(int)cVar2), lVar4 != 0))) {
        cVar2 = pcVar5[1];
      }
      if (*pcVar5 != *(char *)((longlong)local_30 + lVar6 + -8)) break;
      pcVar5 = pcVar5 + 1;
      iVar3 = iVar3 + 1;
      lVar6 = lVar6 + 1;
    } while (lVar6 < 3);
    if (iVar3 == 3) {
      fVar7 = (float)FUN_180618990(local_30[0] * 2.55);
      local_20 = (uint)(longlong)fVar7;
      fVar7 = (float)FUN_180618990(local_30[1] * 2.55);
      local_1c = (uint)(longlong)fVar7;
      FUN_180618990(local_30[2] * 2.55);
    }
  }
}



