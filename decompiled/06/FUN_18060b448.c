// FUN_18060b448 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18060b448 */

undefined4 FUN_18060b448(FILE *param_1)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 auStack_38 [32];
  undefined1 *local_18;
  
  local_18 = auStack_38;
  if (param_1 == (FILE *)0x0) {
    local_18 = auStack_38;
    puVar4 = (undefined4 *)FUN_18060fe00();
    *puVar4 = 0x16;
    FUN_18060aad4();
    return 0xffffffff;
  }
  FUN_180611584();
  bVar1 = true;
  if ((*(uint *)((longlong)&param_1->_base + 4) >> 0xc & 1) == 0) {
    uVar2 = _fileno(param_1);
    if (uVar2 + 2 < 2) {
      puVar6 = &DAT_1808d7460;
    }
    else {
      puVar6 = (undefined *)
               ((&DAT_180bb2130)[(longlong)(int)uVar2 >> 6] + (ulonglong)(uVar2 & 0x3f) * 0x48);
    }
    puVar5 = &DAT_1808d7460;
    if (puVar6[0x39] == '\0') {
      if (1 < uVar2 + 2) {
        puVar5 = (undefined *)
                 ((&DAT_180bb2130)[(longlong)(int)uVar2 >> 6] + (ulonglong)(uVar2 & 0x3f) * 0x48);
      }
      if ((puVar5[0x3d] & 1) == 0) goto LAB_18060b514;
    }
    bVar1 = false;
  }
LAB_18060b514:
  if (bVar1) {
    uVar3 = _fgetc_nolock(param_1);
    FUN_180611590(param_1);
  }
  else {
    puVar4 = (undefined4 *)FUN_18060fe00();
    *puVar4 = 0x16;
    FUN_18060aad4();
    FUN_180636370(local_18,0x18060b53a);
    uVar3 = 0xffffffff;
  }
  return uVar3;
}



