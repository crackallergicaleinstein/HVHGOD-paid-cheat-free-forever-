// FUN_18020fc90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18020fc90 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18020fc90(undefined8 *param_1,undefined8 *param_2,longlong param_3,undefined1 param_4,
                  undefined1 param_5)

{
  int iVar1;
  short sVar2;
  undefined8 uVar3;
  longlong lVar4;
  short sVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  char cVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 *puVar12;
  bool bVar13;
  bool bVar14;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined1 local_70;
  undefined1 local_68;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_98;
  uVar6 = (longlong)param_2 - (longlong)param_1;
  while (0x100 < (longlong)(uVar6 & 0xfffffffffffffff8)) {
    if (param_3 < 1) {
      lVar11 = (longlong)param_2 - (longlong)param_1 >> 3;
      lVar9 = (longlong)param_2 - (longlong)param_1 >> 4;
      while (0 < lVar9) {
        lVar4 = lVar9 + -1;
        lVar9 = lVar9 + -1;
        local_68 = param_5;
        local_70 = param_5;
        local_58._0_8_ = param_1[lVar4];
        local_78 = param_4;
        FUN_1802124d0(param_1,lVar9,lVar11,local_58);
      }
      if (lVar11 < 2) {
      }
      param_2 = param_2 + -1;
      do {
        local_58._0_8_ = *param_2;
        local_68 = param_5;
        local_70 = param_5;
        *param_2 = *param_1;
        local_78 = param_4;
        FUN_1802124d0(param_1,0,(longlong)param_2 - (longlong)param_1 >> 3,local_58);
        param_2 = param_2 + -1;
      } while (0xf < (longlong)((8 - (longlong)param_1) + (longlong)param_2 & 0xfffffffffffffff8U));
    }
    local_78 = param_5;
    local_58 = (undefined1  [16])0x0;
    FUN_180210ef0(local_58,param_1,param_2,param_4);
    puVar12 = (undefined8 *)local_58._0_8_;
    uVar3 = local_58._8_8_;
    local_78 = param_5;
    param_3 = (param_3 >> 1) + (param_3 >> 2);
    if ((longlong)(local_58._0_8_ - (longlong)param_1 & 0xfffffffffffffff8U) <
        (longlong)((longlong)param_2 - local_58._8_8_ & 0xfffffffffffffff8U)) {
      FUN_18020fc90(param_1,local_58._0_8_,param_3,param_4);
      param_1 = (undefined8 *)uVar3;
      puVar12 = param_2;
    }
    else {
      FUN_18020fc90(local_58._8_8_,param_2,param_3,param_4);
    }
    param_2 = puVar12;
    uVar6 = (longlong)puVar12 - (longlong)param_1;
  }
  puVar12 = param_1;
  if (param_1 != param_2) {
    while (puVar12 = puVar12 + 1, puVar12 != param_2) {
      uVar3 = *puVar12;
      local_58._4_4_ = SUB84((ulonglong)uVar3 >> 0x20,0);
      puVar7 = puVar12;
      puVar10 = puVar12;
      do {
        sVar2 = *(short *)(puVar7 + -1);
        sVar5 = (short)uVar3;
        bVar14 = SBORROW2(sVar5,sVar2);
        bVar13 = (short)(sVar5 - sVar2) < 0;
        if (sVar5 == sVar2) {
          iVar1 = *(int *)((longlong)puVar7 + -4);
          bVar14 = SBORROW4(local_58._4_4_,iVar1);
          bVar13 = local_58._4_4_ - iVar1 < 0;
          if (local_58._4_4_ != iVar1) goto LAB_18020fe98;
          cVar8 = '\0';
        }
        else {
LAB_18020fe98:
          cVar8 = -1;
          if (bVar14 == bVar13) {
            cVar8 = '\x01';
          }
        }
        if (-1 < cVar8) break;
        *puVar10 = puVar7[-1];
        puVar10 = puVar10 + -1;
        puVar7 = puVar7 + -1;
      } while (puVar10 != param_1);
      *puVar10 = uVar3;
    }
  }
}



