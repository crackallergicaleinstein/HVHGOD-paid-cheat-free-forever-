// FUN_1802898c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802898c0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802898c0(ulonglong *param_1,ulonglong *param_2,ulonglong *param_3,longlong param_4,
                  longlong param_5,undefined8 param_6,longlong param_7,undefined1 param_8)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  char cVar5;
  ulonglong *puVar6;
  ulonglong *puVar7;
  ulonglong *puVar8;
  longlong lVar9;
  undefined1 auStack_108 [32];
  longlong local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined1 local_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  ulonglong uStack_b8;
  ulonglong uStack_b0;
  ulonglong uStack_a8;
  ulonglong local_a0;
  ulonglong uStack_98;
  ulonglong uStack_90;
  ulonglong uStack_88;
  ulonglong local_80;
  ulonglong local_78;
  ulonglong uStack_70;
  ulonglong uStack_68;
  ulonglong uStack_60;
  ulonglong local_58;
  ulonglong local_50;
  
  if (param_2 == param_3) {
    return;
  }
  local_50 = DAT_1808d5f00 ^ (ulonglong)auStack_108;
  local_c8 = param_6;
  while( true ) {
    if (param_1 == param_2) {
    }
    cVar5 = FUN_180114040(param_2,param_1);
    if (cVar5 < '\0') break;
    param_1 = param_1 + 5;
    param_4 = param_4 + -1;
  }
  do {
    lVar9 = param_5;
    puVar6 = param_3;
    param_3 = puVar6 + -5;
    if (param_2 == param_3) {
      local_c0 = *param_2;
      uStack_b8 = param_2[1];
      uStack_b0 = param_2[2];
      uStack_a8 = param_2[3];
      *(undefined1 *)param_2 = 0;
      param_2[2] = 0;
      param_2[3] = 0xf;
      uVar1 = param_2[4];
      local_78 = local_c0;
      uStack_70 = uStack_b8;
      uStack_68 = uStack_b0;
      uStack_60 = uStack_a8;
      local_58 = uVar1;
      FUN_180289660(param_1,param_2,puVar6);
      if (param_1 != &local_78) {
        FUN_18015c010(param_1);
        *param_1 = local_c0;
        param_1[1] = uStack_b8;
        param_1[2] = uStack_b0;
        param_1[3] = uStack_a8;
        uStack_68 = 0;
        uStack_60 = 0xf;
        local_78 = local_78 & 0xffffffffffffff00;
      }
      param_1[4] = uVar1;
      puVar6 = &local_78;
      goto LAB_180289b46;
    }
    cVar5 = FUN_180114040(param_3,param_2 + -5);
    param_5 = lVar9 + -1;
  } while (-1 < cVar5);
  if (param_4 == 1) {
    local_c0 = *param_1;
    uStack_b8 = param_1[1];
    uStack_b0 = param_1[2];
    uStack_a8 = param_1[3];
    *(undefined1 *)param_1 = 0;
    param_1[2] = 0;
    param_1[3] = 0xf;
    uVar1 = param_1[4];
    puVar8 = param_1;
    local_a0 = local_c0;
    uStack_98 = uStack_b8;
    uStack_90 = uStack_b0;
    uStack_88 = uStack_a8;
    local_80 = uVar1;
    if (param_2 != puVar6) {
      puVar7 = param_2;
      do {
        if (puVar8 != puVar7) {
          FUN_18015c010(puVar8);
          uVar2 = puVar7[1];
          uVar3 = puVar7[2];
          uVar4 = puVar7[3];
          *puVar8 = *puVar7;
          puVar8[1] = uVar2;
          puVar8[2] = uVar3;
          puVar8[3] = uVar4;
          puVar7[2] = 0;
          puVar7[3] = 0xf;
          *(undefined1 *)puVar7 = 0;
        }
        puVar8 = puVar8 + 5;
        *(ulonglong *)
         ((undefined1 *)((longlong)param_1 + (0x20 - (longlong)param_2)) + (longlong)puVar7) =
             puVar7[4];
        puVar7 = puVar7 + 5;
      } while (puVar7 != puVar6);
    }
    if (puVar8 != &local_a0) {
      FUN_18015c010(puVar8);
      *puVar8 = local_c0;
      puVar8[1] = uStack_b8;
      puVar8[2] = uStack_b0;
      puVar8[3] = uStack_a8;
      uStack_90 = 0;
      uStack_88 = 0xf;
      local_a0 = local_a0 & 0xffffffffffffff00;
    }
    puVar8[4] = uVar1;
    puVar6 = &local_a0;
LAB_180289b46:
    FUN_18015c010(puVar6);
  }
  else if ((lVar9 < param_4) || (param_7 < param_4)) {
    if (param_7 < lVar9) {
      local_d0 = param_8;
      local_d8 = param_7;
      local_e0 = local_c8;
      local_e8 = lVar9;
      FUN_18028a960(param_1,param_2,puVar6,param_4);
    }
    else {
      FUN_18028a720(param_1,param_2,puVar6,local_c8);
    }
  }
  else {
    FUN_18028a550(param_1,param_2,puVar6,local_c8);
  }
}



