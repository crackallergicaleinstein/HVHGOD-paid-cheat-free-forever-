// FUN_180433240 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180433240 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180433240(undefined8 param_1,float param_2,float param_3,float param_4,undefined4 param_5,
                  float param_6,int param_7)

{
  undefined1 auVar1 [16];
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  float fVar6;
  undefined1 in_register_000012c4 [12];
  undefined1 auVar7 [64];
  undefined1 auVar8 [64];
  float fVar9;
  undefined1 auStack_d8 [32];
  float local_b8;
  longlong local_a8;
  longlong local_a0;
  undefined1 local_98 [16];
  longlong local_88;
  ulonglong local_80;
  
  local_80 = DAT_1808d5f00 ^ (ulonglong)auStack_d8;
  auVar8 = ZEXT1664(CONCAT124(in_register_000012c4,param_4));
  if ((0.0 < param_4) && ((char)((uint)param_5 >> 0x18) != '\0')) {
    if (0.0 < param_6) {
      if (param_7 < 1) {
        auVar1._4_12_ = in_register_000012c4;
        auVar1._0_4_ = param_4;
        param_7 = FUN_180435700(0,auVar1._0_8_);
      }
      fVar9 = 6.2831855 / (float)param_7;
      iVar2 = param_7 * 2;
      local_98 = (undefined1  [16])0x0;
      iVar4 = 0;
      local_88 = 0;
      if (iVar2 != 0) {
        if (0x3fffffffffffffff < (ulonglong)(longlong)iVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_1801136f0();
        }
        lVar5 = (longlong)iVar2 * 4;
        lVar3 = FUN_18015bca0(lVar5);
        local_98._0_8_ = lVar3;
        local_88 = lVar5 + lVar3;
        FUN_18063ab10(lVar3,0,lVar5);
        local_98._8_8_ = lVar5 + lVar3;
      }
      if (0 < param_7) {
        lVar5 = 0;
        do {
          auVar7 = ZEXT464((uint)((float)iVar4 * fVar9));
          fVar6 = (float)FUN_180637540((float)iVar4 * fVar9);
          *(float *)(local_98._0_8_ + lVar5 * 8) = fVar6 * auVar8._0_4_ + param_2;
          fVar6 = (float)FUN_180638e00(auVar7._0_8_);
          *(float *)(local_98._0_8_ + 4 + lVar5 * 8) = fVar6 * auVar8._0_4_ + param_3;
          iVar4 = iVar4 + 1;
          lVar5 = lVar5 + 1;
        } while (lVar5 < param_7);
      }
      local_a8 = local_98._0_8_;
      local_a0 = (longlong)(local_98._8_8_ - local_98._0_8_) >> 2;
      local_b8 = param_6;
      FUN_180433590(param_1,&local_a8,param_5,1);
      FUN_180159650(local_98);
    }
  }
}



