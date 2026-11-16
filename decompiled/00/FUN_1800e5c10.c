// FUN_1800e5c10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800e5c10 */

longlong FUN_1800e5c10(undefined8 *param_1)

{
  undefined *_Size;
  undefined *_Buf2;
  undefined *puVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined **ppuVar5;
  bool bVar6;
  undefined8 extraout_XMM0_Qa;
  undefined *local_28;
  undefined *puStack_20;
  undefined *local_18;
  undefined *puStack_10;
  
  _Buf2 = (undefined *)*param_1;
  puVar1 = (undefined *)param_1[1];
  ppuVar5 = &PTR_s_patterns_entity_list_1806fed00;
  local_28 = _Buf2;
  puStack_20 = puVar1;
  while ((_Size = ppuVar5[1], _Size != puVar1 ||
         ((_Size != (undefined *)0x0 && (iVar3 = memcmp(*ppuVar5,_Buf2,(size_t)_Size), iVar3 != 0)))
         )) {
    ppuVar5 = ppuVar5 + 6;
    if (ppuVar5 == (undefined **)"false") {
      return 0;
    }
  }
  local_28 = ppuVar5[4];
  puStack_20 = ppuVar5[5];
  local_18 = ppuVar5[2];
  puStack_10 = ppuVar5[3];
  lVar4 = FUN_1800e5990(&local_18,&local_28);
  if (ppuVar5[5] < (undefined *)0x2) {
    bVar6 = false;
  }
  else {
    bVar6 = *(short *)ppuVar5[4] == 0x6e66;
  }
  if (((lVar4 != 0) && (bVar6)) && (cVar2 = FUN_1804513c0(lVar4,1,2), cVar2 == '\0')) {
    FUN_1800efde0(extraout_XMM0_Qa,
                  "HVHGODS rejected non-executable function offset %.*s address=0x%llX",
                  *(undefined4 *)(param_1 + 1),*param_1,lVar4);
    return 0;
  }
  return lVar4;
}



