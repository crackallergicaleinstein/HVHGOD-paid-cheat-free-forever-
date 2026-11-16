// FUN_1802c6c70 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802c6c70 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802c6c70(undefined1 (*param_1) [16])

{
  short *psVar1;
  short sVar2;
  undefined8 uVar3;
  short *psVar4;
  char cVar5;
  int iVar6;
  short *psVar7;
  longlong lVar8;
  undefined8 ****ppppuVar9;
  short *psVar10;
  uint uVar11;
  undefined1 auStack_f8 [32];
  uint local_d8;
  undefined8 ****local_d0;
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined8 local_a8;
  ulonglong local_a0;
  longlong local_98;
  undefined1 (*local_90) [16];
  undefined1 *local_88;
  undefined8 local_80;
  undefined1 local_78 [16];
  undefined8 ****local_68 [2];
  longlong local_58;
  ulonglong local_50;
  undefined1 local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_f8;
  uVar11 = 1;
  *param_1 = (undefined1  [16])0x0;
  *(undefined8 *)*param_1 = 0;
  *(undefined8 *)(*param_1 + 8) = 0;
  *(undefined8 *)param_1[1] = 0;
  local_d8 = 1;
  local_90 = param_1;
  FUN_1802c6ac0(local_48);
  FUN_1800f5370(local_68,local_48);
  cVar5 = FUN_180165ac0(local_68);
  if ((cVar5 == '\0') || (cVar5 = FUN_1800a9120(local_48), cVar5 == '\0')) {
    FUN_18015b930(local_48);
  }
  else {
    local_c8 = (undefined1  [16])0x0;
    iVar6 = FUN_1801c5780(local_c8,local_48,0);
    local_78 = (undefined1  [16])0x0;
    while ((iVar6 == 0 && (uVar3 = local_c8._0_8_, local_c8._0_8_ != 0))) {
      cVar5 = FUN_1802c6bf0(local_c8._0_8_ + 0x20);
      if (cVar5 != '\0') {
        lVar8 = uVar3 + 0x20;
        if (7 < *(ulonglong *)(uVar3 + 0x38)) {
          lVar8 = *(longlong *)(uVar3 + 0x20);
        }
        psVar1 = (short *)(lVar8 + *(longlong *)(uVar3 + 0x30) * 2);
        psVar7 = (short *)FUN_1800a7b00(lVar8,psVar1);
        psVar10 = psVar1;
        if (psVar7 != psVar1) {
          do {
            psVar4 = psVar1;
            if ((*psVar7 != 0x5c) && (*psVar7 != 0x2f)) break;
            psVar7 = psVar7 + 1;
          } while (psVar7 != psVar1);
          do {
            psVar10 = psVar4;
            if (psVar7 == psVar10) break;
            sVar2 = psVar10[-1];
            if ((sVar2 == 0x5c) || (psVar4 = psVar10 + -1, sVar2 == 0x2f)) break;
          } while( true );
        }
        local_b8 = (undefined1  [16])0x0;
        local_a8 = 0;
        local_a0 = 0;
        FUN_180159e60(local_b8,psVar10,(longlong)psVar1 - (longlong)psVar10 >> 1);
        local_d8 = uVar11 | 0xe;
        local_88 = local_b8;
        if (7 < local_a0) {
          local_88 = (undefined1 *)local_b8._0_8_;
        }
        local_80 = local_a8;
        FUN_1801a4fb0(local_68);
        uVar11 = uVar11 | 0x1e;
        local_d8 = uVar11;
        FUN_18015b930(local_b8);
        ppppuVar9 = local_68;
        if (0xf < local_50) {
          ppppuVar9 = local_68[0];
        }
        local_98 = local_58 + (longlong)ppppuVar9;
        local_d0 = local_68;
        if (0xf < local_50) {
          local_d0 = local_68[0];
        }
        lVar8 = *(longlong *)(*param_1 + 8);
        if (lVar8 == *(longlong *)param_1[1]) {
          FUN_1802e9a10(param_1,lVar8,&local_d0);
        }
        else {
          FUN_1802ec710(lVar8);
          *(longlong *)(*param_1 + 8) = *(longlong *)(*param_1 + 8) + 0x20;
        }
        FUN_18015c010(local_68);
      }
      iVar6 = FUN_1801bde70(local_c8);
    }
    FUN_1800efed0(local_78);
    FUN_1800efed0(local_c8);
    FUN_1801b4c40(*(longlong *)*param_1,*(longlong *)(*param_1 + 8),
                  *(longlong *)(*param_1 + 8) - *(longlong *)*param_1 >> 5,0);
    FUN_18015b930(local_48);
  }
}



