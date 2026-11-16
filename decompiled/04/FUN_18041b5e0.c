// FUN_18041b5e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18041b5e0 */

void FUN_18041b5e0(undefined8 param_1)

{
  LPCWSTR pWVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  DWORD DVar7;
  undefined8 *puVar8;
  LPCWSTR lpFileName;
  bool bVar9;
  undefined1 local_58 [16];
  undefined1 local_48 [2] [16];
  undefined1 local_28 [32];
  
  bVar9 = false;
  auVar2._12_4_ = 0;
  auVar2._0_12_ = local_58._4_12_;
  local_58 = auVar2 << 0x20;
  FUN_1800f5370(local_48,param_1);
  cVar5 = FUN_180165ac0(local_48);
  if (cVar5 != '\0') {
    local_58 = (undefined1  [16])0x0;
    iVar6 = FUN_1801a5100(local_58,param_1,0);
    local_48[0] = (undefined1  [16])0x0;
    while ((iVar6 == 0 && (uVar4 = local_58._0_8_, local_58._0_8_ != 0))) {
      pWVar1 = (LPCWSTR)(local_58._0_8_ + 0x20);
      lpFileName = pWVar1;
      if (7 < *(ulonglong *)(local_58._0_8_ + 0x38)) {
        lpFileName = *(LPCWSTR *)pWVar1;
      }
      DVar7 = GetFileAttributesW(lpFileName);
      if (((DVar7 == 0xffffffff) || ((DVar7 >> 10 & 1) != 0)) ||
         (0xb < (int)(*(longlong *)(uVar4 + 0x50) - *(longlong *)(uVar4 + 0x48) >> 3))) {
        *(undefined1 *)(uVar4 + 100) = 0;
      }
      else {
        if ((DVar7 & 0x10) == 0) {
          puVar8 = (undefined8 *)FUN_1801bdad0(pWVar1,local_28);
          bVar9 = true;
          if (7 < (ulonglong)puVar8[3]) {
            puVar8 = (undefined8 *)*puVar8;
          }
          iVar6 = FUN_180615da0(puVar8,L".log");
          if (iVar6 != 0) goto LAB_18041b6c6;
          bVar3 = true;
        }
        else {
LAB_18041b6c6:
          bVar3 = false;
        }
        if (bVar9) {
          bVar9 = false;
          FUN_18015b930(local_28);
        }
        if (bVar3) {
          FUN_18041b1b0(pWVar1);
        }
      }
      iVar6 = FUN_18017dba0(local_58);
    }
    FUN_1800efed0(local_48);
    FUN_1800efed0(local_58);
  }
  return;
}



