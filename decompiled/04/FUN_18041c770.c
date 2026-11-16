// FUN_18041c770 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18041c770 */

void FUN_18041c770(undefined8 param_1,undefined8 param_2)

{
  LPCWSTR pWVar1;
  WCHAR WVar2;
  undefined8 uVar3;
  LPCWSTR pWVar4;
  char cVar5;
  int iVar6;
  LPCWSTR pWVar7;
  LPCWSTR pWVar8;
  LPCWSTR lpExistingFileName;
  undefined1 local_90 [16];
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined1 local_50 [40];
  
  FUN_1800f5370(local_90,param_1);
  cVar5 = FUN_180165ac0(local_90);
  if (cVar5 != '\0') {
    FUN_1800f5370(local_90,param_2);
    cVar5 = FUN_180165ac0(local_90);
    if (cVar5 != '\0') {
      local_70 = (undefined1  [16])0x0;
      iVar6 = FUN_1801c5780(local_70,param_1,0);
      local_60 = (undefined1  [16])0x0;
      while ((iVar6 == 0 && (uVar3 = local_70._0_8_, local_70._0_8_ != 0))) {
        lpExistingFileName = (LPCWSTR)(local_70._0_8_ + 0x20);
        cVar5 = FUN_1802c6bf0(lpExistingFileName);
        if (cVar5 != '\0') {
          pWVar8 = lpExistingFileName;
          if (7 < *(ulonglong *)(uVar3 + 0x38)) {
            pWVar8 = *(LPCWSTR *)lpExistingFileName;
          }
          pWVar1 = pWVar8 + *(longlong *)(uVar3 + 0x30);
          pWVar7 = (LPCWSTR)FUN_1800a7b00(pWVar8,pWVar1);
          pWVar8 = pWVar1;
          if (pWVar7 != pWVar1) {
            do {
              pWVar4 = pWVar1;
              if ((*pWVar7 != L'\\') && (*pWVar7 != L'/')) break;
              pWVar7 = pWVar7 + 1;
            } while (pWVar7 != pWVar1);
            do {
              pWVar8 = pWVar4;
              if (pWVar7 == pWVar8) break;
              WVar2 = pWVar8[-1];
              if ((WVar2 == L'\\') || (pWVar4 = pWVar8 + -1, WVar2 == L'/')) break;
            } while( true );
          }
          local_90 = (undefined1  [16])0x0;
          local_80 = 0;
          local_78 = 0;
          FUN_180159e60(local_90,pWVar8,(longlong)pWVar1 - (longlong)pWVar8 >> 1);
          pWVar8 = (LPCWSTR)FUN_1800a7e60(local_50,param_2,local_90);
          if (7 < *(ulonglong *)(pWVar8 + 0xc)) {
            pWVar8 = *(LPCWSTR *)pWVar8;
          }
          if (7 < *(ulonglong *)(uVar3 + 0x38)) {
            lpExistingFileName = *(LPCWSTR *)lpExistingFileName;
          }
          MoveFileExW(lpExistingFileName,pWVar8,2);
          FUN_18015b930(local_50);
          FUN_18015b930(local_90);
        }
        iVar6 = FUN_1801bde70(local_70);
      }
      FUN_1800efed0(local_60);
      FUN_1800efed0(local_70);
    }
  }
  return;
}



