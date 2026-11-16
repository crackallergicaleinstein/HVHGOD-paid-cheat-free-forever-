// FUN_180454030 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180454030 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180454030(undefined1 (*param_1) [16],ulonglong param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  char cVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auStack_1d8 [32];
  ulonglong local_1b8;
  undefined1 local_1a8;
  undefined1 (*local_1a0) [16];
  ulonglong local_190;
  undefined1 (*local_188) [16];
  undefined8 local_180;
  longlong local_178;
  longlong local_170;
  undefined1 local_168 [16];
  longlong lStack_158;
  ulonglong uStack_150;
  undefined1 local_148 [264];
  ulonglong local_40;
  
  local_40 = DAT_1808d5f00 ^ (ulonglong)auStack_1d8;
  if ((param_2 == 0) || (param_3 == 0)) {
    *param_1 = (undefined1  [16])0x0;
    *(undefined8 *)param_1[1] = 0;
    *(undefined8 *)(param_1[1] + 8) = 0xf;
    (*param_1)[0] = 0;
  }
  else {
    local_1a0 = param_1;
    local_190 = param_2;
    local_188 = param_1;
    lVar4 = FUN_18017ea70();
    *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
    lStack_158 = 0;
    uStack_150 = 0xf;
    local_168._1_15_ = SUB1615((undefined1  [16])0x0,1);
    auVar1[0xf] = 0;
    auVar1._0_15_ = local_168._1_15_;
    local_168 = auVar1 << 8;
    uVar5 = param_3;
    if (0x100 < param_3) {
      uVar5 = 0x100;
    }
    FUN_1800f5540(local_168,uVar5);
    FUN_18063ab10(local_148,0,0x100);
    uVar5 = 0;
    if (param_3 != 0) {
      uVar8 = ~param_2;
      do {
        if (uVar8 < uVar5) break;
        local_180 = 0x100;
        local_178 = param_3 - uVar5;
        local_170 = 0x1000 - (ulonglong)((uint)(param_2 + uVar5) & 0xfff);
        lVar4 = thunk_FUN_1805f8430(&local_180,local_168);
        cVar3 = FUN_1804514c0(local_148,param_2 + uVar5,lVar4);
        if (cVar3 == '\0') break;
        local_1a0 = (undefined1 (*) [16])thunk_FUN_1805f7e70(local_148,local_148 + lVar4,0);
        uVar7 = (longlong)local_1a0 - (longlong)local_148;
        if (uStack_150 - lStack_158 < uVar7) {
          local_1b8 = uVar7;
          FUN_18015b150(local_168,uVar7,local_1a8,local_148);
        }
        else {
          puVar6 = local_168;
          if (0xf < uStack_150) {
            puVar6 = (undefined1 *)local_168._0_8_;
          }
          puVar6 = puVar6 + lStack_158;
          lStack_158 = uVar7 + lStack_158;
          FUN_18063aed0(puVar6,local_148,uVar7);
          puVar6[uVar7] = 0;
        }
        if (local_1a0 != (undefined1 (*) [16])(local_148 + lVar4)) break;
        uVar5 = uVar5 + lVar4;
        param_2 = local_190;
      } while (uVar5 < param_3);
      param_1 = local_188;
    }
    *(undefined8 *)*param_1 = local_168._0_8_;
    *(undefined8 *)(*param_1 + 8) = local_168._8_8_;
    *(longlong *)param_1[1] = lStack_158;
    *(ulonglong *)(param_1[1] + 8) = uStack_150;
    lStack_158 = 0;
    uStack_150 = 0xf;
    auVar2[0xf] = 0;
    auVar2._0_15_ = local_168._1_15_;
    local_168 = auVar2 << 8;
    FUN_18015c010(local_168);
    lVar4 = FUN_18017ea70();
    if (*(int *)(lVar4 + 4) != 0) {
      *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + -1;
    }
  }
}



