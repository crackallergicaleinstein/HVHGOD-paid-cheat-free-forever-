// FUN_1801a8a50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801a8a50 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801a8a50(longlong *param_1,longlong param_2,longlong param_3,int param_4,
                  undefined8 param_5,longlong *param_6,longlong *param_7)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int local_res20 [2];
  undefined1 auStack_168 [32];
  longlong *local_148;
  undefined1 local_138 [16];
  longlong local_128;
  longlong local_120;
  int local_118 [2];
  undefined1 local_110 [16];
  longlong local_100;
  longlong local_f8;
  longlong lStack_f0;
  longlong local_d8;
  longlong lStack_d0;
  longlong local_c8;
  longlong lStack_c0;
  undefined1 local_b8 [8];
  char local_b0;
  longlong local_a8;
  longlong lStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulonglong local_58;
  
  local_58 = DAT_1808d5f00 ^ (ulonglong)auStack_168;
  local_138 = (undefined1  [16])0x0;
  local_128 = 0;
  local_f8 = *param_7;
  lStack_f0 = param_7[1];
  local_d8 = *param_6;
  lStack_d0 = param_6[1];
  local_148 = &local_f8;
  local_res20[0] = param_4;
  local_120 = param_3;
  FUN_1801ae5b0(local_138,local_d8,param_3,&local_d8);
  lVar4 = local_128;
  uVar2 = local_138._0_8_;
  local_d8 = local_138._0_8_;
  uVar3 = local_138._8_8_;
  local_f8 = local_138._8_8_;
  if (((ulonglong)((longlong)(local_138._8_8_ - local_138._0_8_) >> 3) < 2) &&
     (param_2 + 0xfef00000da780400U < 10000000000)) {
    local_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    FUN_1801abd10(&local_98);
    if (param_3 != 0) {
      FUN_1801b1240(&local_98,&local_c8,&local_120);
    }
    iVar7 = 0;
    local_118[1] = 0x100;
    local_118[0] = 0;
    piVar5 = local_118;
    if (-1 < param_4) {
      piVar5 = local_res20;
    }
    piVar6 = local_118 + 1;
    if (param_4 < 0x101) {
      piVar6 = piVar5;
    }
    if (0 < *piVar6) {
      iVar1 = *piVar6;
      do {
        local_120 = FUN_180197b20(param_5,iVar7);
        if (local_120 != 0) {
          FUN_1801b1240(&local_98,local_b8,&local_120);
          if (local_b0 != '\0') {
            local_110 = (undefined1  [16])0x0;
            local_100 = 0;
            local_a8 = *param_7;
            lStack_a0 = param_7[1];
            local_c8 = *param_6;
            lStack_c0 = param_6[1];
            local_148 = &local_a8;
            FUN_1801ae5b0(local_110,param_2,local_120,&local_c8);
            lVar4 = local_100;
            uVar3 = local_110._8_8_;
            uVar2 = local_110._0_8_;
            if (1 < (ulonglong)((longlong)(local_110._8_8_ - local_110._0_8_) >> 3)) {
              local_100 = 0;
              local_110 = ZEXT816(0);
              *param_1 = uVar2;
              param_1[1] = uVar3;
              param_1[2] = lVar4;
              FUN_1800f0160(local_110);
              FUN_18017e9a0(&local_98);
              goto LAB_1801a8cdc;
            }
            FUN_1800f0160(local_110);
          }
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar1);
    }
    lVar4 = local_128;
    local_128 = 0;
    local_138 = ZEXT816(0);
    *param_1 = local_d8;
    param_1[1] = local_f8;
    param_1[2] = lVar4;
    FUN_18017e9a0(&local_98);
  }
  else {
    local_128 = 0;
    local_138 = ZEXT816(0);
    *param_1 = uVar2;
    param_1[1] = uVar3;
    param_1[2] = lVar4;
  }
LAB_1801a8cdc:
  FUN_1800f0160(local_138);
}



