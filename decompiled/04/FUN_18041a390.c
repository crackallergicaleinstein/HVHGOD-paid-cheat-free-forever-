// FUN_18041a390 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18041a390 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18041a390(LPCWSTR param_1,LPCWSTR param_2,int *param_3,uint param_4)

{
  short *psVar1;
  short sVar2;
  undefined8 uVar3;
  short *psVar4;
  char cVar5;
  DWORD DVar6;
  DWORD DVar7;
  BOOL BVar8;
  int iVar9;
  short *psVar10;
  undefined8 uVar11;
  LPCWSTR pWVar12;
  LPCWSTR lpExistingFileName;
  longlong lVar13;
  short *psVar14;
  undefined1 auStack_d8 [40];
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined1 local_90 [32];
  undefined1 local_70 [16];
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_1808d5f00 ^ (ulonglong)auStack_d8;
  if (param_4 < 0x11) {
    FUN_1800f5370(local_70,param_1);
    cVar5 = FUN_180165ac0(local_70);
    if (cVar5 != '\0') {
      FUN_1800f5370(local_70,param_2);
      cVar5 = FUN_180165ac0(local_70);
      if (cVar5 != '\0') {
        pWVar12 = param_1;
        if (7 < *(ulonglong *)(param_1 + 0xc)) {
          pWVar12 = *(LPCWSTR *)param_1;
        }
        DVar6 = GetFileAttributesW(pWVar12);
        if (DVar6 == 0xffffffff) {
        }
        pWVar12 = param_2;
        if (7 < *(ulonglong *)(param_2 + 0xc)) {
          pWVar12 = *(LPCWSTR *)param_2;
        }
        DVar7 = GetFileAttributesW(pWVar12);
        if (DVar7 == 0xffffffff) {
          pWVar12 = param_2;
          if (7 < *(ulonglong *)(param_2 + 0xc)) {
            pWVar12 = *(LPCWSTR *)param_2;
          }
          lpExistingFileName = param_1;
          if (7 < *(ulonglong *)(param_1 + 0xc)) {
            lpExistingFileName = *(LPCWSTR *)param_1;
          }
          BVar8 = MoveFileExW(lpExistingFileName,pWVar12,0);
          if (BVar8 != 0) {
            *param_3 = *param_3 + 1;
          }
        }
        if (((DVar6 & 0x10) != 0) &&
           (((DVar7 == 0xffffffff || ((DVar7 & 0x10) != 0)) &&
            (cVar5 = FUN_1800a9120(param_2), cVar5 != '\0')))) {
          local_b0 = (undefined1  [16])0x0;
          iVar9 = FUN_1801c5780(local_b0,param_1,0);
          local_a0 = (undefined1  [16])0x0;
          while ((iVar9 == 0 && (uVar3 = local_b0._0_8_, local_b0._0_8_ != 0))) {
            lVar13 = local_b0._0_8_ + 0x20;
            if (7 < *(ulonglong *)(local_b0._0_8_ + 0x38)) {
              lVar13 = *(longlong *)(local_b0._0_8_ + 0x20);
            }
            psVar1 = (short *)(lVar13 + *(longlong *)(local_b0._0_8_ + 0x30) * 2);
            psVar10 = (short *)FUN_1800a7b00(lVar13,psVar1);
            psVar14 = psVar1;
            if (psVar10 != psVar1) {
              do {
                psVar4 = psVar1;
                if ((*psVar10 != 0x5c) && (*psVar10 != 0x2f)) break;
                psVar10 = psVar10 + 1;
              } while (psVar10 != psVar1);
              do {
                psVar14 = psVar4;
                if (psVar10 == psVar14) break;
                sVar2 = psVar14[-1];
                if ((sVar2 == 0x5c) || (psVar4 = psVar14 + -1, sVar2 == 0x2f)) break;
              } while( true );
            }
            local_70 = (undefined1  [16])0x0;
            local_60 = 0;
            local_58 = 0;
            FUN_180159e60(local_70,psVar14,(longlong)psVar1 - (longlong)psVar14 >> 1);
            uVar11 = FUN_1800a7e60(local_90,param_2,local_70);
            FUN_18041a390(uVar3 + 0x20,uVar11,param_3,param_4 + 1);
            FUN_18015b930(local_90);
            FUN_18015b930(local_70);
            iVar9 = FUN_1801bde70(local_b0);
          }
          FUN_1800efed0(local_a0);
          FUN_1800efed0(local_b0);
          if (7 < *(ulonglong *)(param_1 + 0xc)) {
            param_1 = *(LPCWSTR *)param_1;
          }
          RemoveDirectoryW(param_1);
          if (iVar9 == 0) {
          }
        }
        param_3[1] = param_3[1] + 1;
      }
    }
  }
  param_3[2] = param_3[2] + 1;
}



