// FUN_18018ba90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18018ba90 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_18018ba90(undefined8 param_1)

{
  short *psVar1;
  short sVar2;
  short *psVar3;
  undefined1 *puVar4;
  uint uVar5;
  short *psVar6;
  undefined8 *******pppppppuVar7;
  undefined1 auStack_f8 [32];
  uint local_d8;
  undefined8 local_d0;
  undefined1 local_c8 [16];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [16];
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  undefined8 *******local_48 [2];
  longlong local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_f8;
  local_d8 = 0;
  local_d0 = param_1;
  FUN_180186d00(local_48);
  if (local_38 == 0) {
    FUN_1800f5370(local_88,local_48);
    puVar4 = local_88;
    uVar5 = 1;
  }
  else {
    local_a8 = (undefined1  [16])0x0;
    local_98 = 0;
    local_90 = 0;
    FUN_180159e60(local_a8,L"resources",9);
    local_d8 = 0x62;
    pppppppuVar7 = local_48;
    if (7 < local_30) {
      pppppppuVar7 = local_48[0];
    }
    psVar6 = (short *)((longlong)pppppppuVar7 + local_38 * 2);
    psVar3 = (short *)FUN_1800a7b00(pppppppuVar7,psVar6);
    if (psVar3 != psVar6) {
      do {
        if ((*psVar3 != 0x5c) && (*psVar3 != 0x2f)) break;
        psVar3 = psVar3 + 1;
      } while (psVar3 != psVar6);
      do {
        if (psVar3 == psVar6) goto LAB_18018bbab;
        sVar2 = psVar6[-1];
        psVar1 = psVar6;
      } while ((sVar2 != 0x5c) && (psVar6 = psVar6 + -1, sVar2 != 0x2f));
      do {
        psVar6 = psVar1;
        if (psVar3 == psVar6) break;
        psVar1 = psVar6 + -1;
      } while ((*psVar1 == 0x5c) || (*psVar1 == 0x2f));
    }
LAB_18018bbab:
    local_c8 = (undefined1  [16])0x0;
    local_b8 = 0;
    local_b0 = 0;
    FUN_180159e60(local_c8,pppppppuVar7,(longlong)psVar6 - (longlong)pppppppuVar7 >> 1);
    local_d8 = 0x3e6;
    puVar4 = (undefined1 *)FUN_1800a7e60(local_68,local_c8,local_a8);
    uVar5 = 0x3ee;
  }
  local_d8 = uVar5;
  FUN_1800f5370(param_1,puVar4);
  if ((uVar5 & 8) != 0) {
    uVar5 = uVar5 & 0xfffffff7;
    FUN_18015b930(local_68);
  }
  if ((uVar5 & 4) != 0) {
    uVar5 = uVar5 & 0xfffffffb;
    FUN_18015b930(local_c8);
  }
  if ((uVar5 & 2) != 0) {
    uVar5 = uVar5 & 0xfffffffd;
    FUN_18015b930(local_a8);
  }
  if ((uVar5 & 1) != 0) {
    FUN_18015b930(local_88);
  }
  FUN_18015b930(local_48);
}



