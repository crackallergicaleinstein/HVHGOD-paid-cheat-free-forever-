// FUN_18041cb40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18041cb40 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18041cb40(undefined8 *param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  char **ppcVar9;
  longlong lVar10;
  undefined1 auStack_118 [32];
  char local_f8;
  char *local_e8;
  undefined8 uStack_e0;
  char *local_c8;
  longlong local_c0;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  char local_88;
  char *local_80 [7];
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_118;
  iVar6 = FUN_1805f68d0(&DAT_1808da600);
  cVar5 = DAT_180bbe888;
  uVar4 = DAT_180bbe880;
  uVar3 = DAT_180bbe87c;
  uVar2 = DAT_180bbe878;
  if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_1808da64c == 0x7fffffff) {
    DAT_1808da64c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  local_f8 = DAT_180bbe884;
  DAT_180bbe888 = 0;
  FUN_1805f68fc(&DAT_1808da600);
  if (cVar5 != '\0') {
    if (param_1[1] != 0) {
      local_e8 = (char *)*param_1;
      uStack_e0 = param_1[1];
      FUN_1800b4580(local_98,&local_e8);
      if (local_88 == '\0') {
LAB_18041cd9b:
        if (local_88 == '\0') {
        }
        FUN_1800aab30(local_98);
      }
      cVar5 = FUN_1800e6540(local_98);
      if (cVar5 == '\0') {
        uVar8 = FUN_1803d27d0(local_98);
      }
      else {
        uVar8 = FUN_1800e78e0();
      }
      local_80[0] = "theme";
      local_80[1] = "effect";
      local_80[2] = "duration ms";
      local_80[3] = "motion";
      local_80[4] = "character";
      local_80[5] = "character motion";
      local_80[6] = "character position";
      ppcVar9 = local_80;
      do {
        local_c8 = *ppcVar9;
        local_c0 = -1;
        do {
          local_c0 = local_c0 + 1;
        } while (local_c8[local_c0] != '\0');
        local_48 = (char *)0x0;
        local_40 = 0;
        local_e8 = "menu appearance";
        uStack_e0 = 0xf;
        uVar7 = FUN_1800aa290(&local_e8,&local_c8);
        FUN_18015abc0(&local_48,0xc,&DAT_1806bbf8c,uVar7);
        local_b8 = (undefined1  [16])0x0;
        local_a8 = (undefined1  [16])0x0;
        lVar10 = -1;
        do {
          lVar1 = lVar10 + 0x39;
          lVar10 = lVar10 + 1;
        } while (*(char *)((longlong)local_80 + lVar1) != '\0');
        FUN_18015ba30(local_b8,&local_48);
        cVar5 = FUN_1800f40c0(uVar8);
        FUN_18015c010(local_b8);
        if (cVar5 != '\0') goto LAB_18041cd9b;
        ppcVar9 = ppcVar9 + 1;
      } while (ppcVar9 != (char **)&local_48);
      if (local_88 != '\0') {
        FUN_1800aab30(local_98);
      }
    }
    DAT_180cc9240 = uVar2;
    DAT_180cc9244 = uVar3;
    DAT_180cc9248 = uVar4;
    DAT_180cc924c = (uint)(local_f8 != '\0');
    FUN_1800d39c0();
  }
}



