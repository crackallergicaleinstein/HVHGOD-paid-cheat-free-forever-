// FUN_180547a00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180547a00 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180547a00(undefined1 (*param_1) [16],undefined8 param_2,undefined8 param_3,
                  undefined8 ****param_4,float param_5)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  undefined8 ***pppuVar3;
  bool bVar4;
  bool bVar5;
  undefined8 ****ppppuVar6;
  longlong lVar7;
  undefined8 in_R8;
  undefined4 uVar8;
  undefined1 auVar9 [64];
  undefined1 auStack_128 [32];
  undefined8 ***local_108;
  undefined8 ****local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined4 local_d8;
  undefined1 (*local_c8) [16];
  undefined4 local_c0;
  undefined8 ****local_b8 [3];
  ulonglong local_a0;
  undefined8 ****local_98;
  ulonglong local_90;
  
  local_90 = DAT_1808d5f00 ^ (ulonglong)auStack_128;
  bVar4 = false;
  local_c0 = 0;
  local_100 = param_4;
  if ((undefined8 ***)0xf < param_4[3]) {
    local_100 = (undefined8 ****)*param_4;
  }
  local_d8 = 0;
  local_e8 = 0;
  local_f0 = 0;
  local_f8 = 0;
  uVar8 = 0;
  local_108 = (undefined8 ***)((ulonglong)local_108 & 0xffffffff00000000);
  auVar9 = ZEXT464(0x7f7fffff);
  local_c8 = param_1;
  local_98 = param_4;
  FUN_1804ea040(&local_c8,param_2,in_R8,auVar9._0_8_);
  if (param_5 < local_c8._0_4_) {
    do {
      pppuVar1 = param_4[2];
      if (pppuVar1 == (undefined8 ***)0x0) {
LAB_180547bac:
        bVar5 = false;
      }
      else {
        if (0x7fffffffffffffffU - (longlong)pppuVar1 < 3) {
                    /* WARNING: Subroutine does not return */
          FUN_18015bb70();
        }
        local_f8 = 3;
        local_100 = (undefined8 ****)&DAT_180830c34;
        local_108 = pppuVar1;
        FUN_18015a9c0(local_b8);
        bVar4 = true;
        local_c0 = 6;
        local_100 = local_b8;
        if (0xf < local_a0) {
          local_100 = local_b8[0];
        }
        local_d8 = 0;
        local_e8 = 0;
        local_f0 = 0;
        local_f8 = 0;
        local_108 = (undefined8 ***)CONCAT44(local_108._4_4_,uVar8);
        FUN_1804ea040(&local_c8,param_2,param_3,auVar9._0_8_);
        if (local_c8._0_4_ <= param_5) goto LAB_180547bac;
        bVar5 = true;
      }
      if (bVar4) {
        bVar4 = false;
        FUN_18015c010(local_b8);
      }
      if (!bVar5) goto LAB_180547c01;
      lVar7 = (longlong)param_4[2] + -1;
      if (lVar7 != 0) {
        do {
          ppppuVar6 = param_4;
          if ((undefined8 ***)0xf < param_4[3]) {
            ppppuVar6 = (undefined8 ****)*param_4;
          }
        } while (((*(byte *)((longlong)ppppuVar6 + lVar7) & 0xc0) == 0x80) &&
                (lVar7 = lVar7 + -1, lVar7 != 0));
      }
      FUN_1800f5630(param_4,lVar7,0);
    } while( true );
  }
  *param_1 = (undefined1  [16])0x0;
  *(undefined8 *)param_1[1] = 0;
  *(undefined8 *)(param_1[1] + 8) = 0;
  pppuVar1 = param_4[1];
  pppuVar2 = param_4[2];
  pppuVar3 = param_4[3];
  *(undefined8 ****)*param_1 = *param_4;
  *(undefined8 ****)(*param_1 + 8) = pppuVar1;
  *(undefined8 ****)param_1[1] = pppuVar2;
  *(undefined8 ****)(param_1[1] + 8) = pppuVar3;
  *(undefined1 *)param_4 = 0;
  param_4[2] = (undefined8 ***)0x0;
  param_4[3] = (undefined8 ***)0xf;
LAB_180547c3a:
  FUN_18015c010(param_4);
LAB_180547c01:
  if (0x7fffffffffffffffU - (longlong)param_4[2] < 3) {
                    /* WARNING: Subroutine does not return */
    FUN_18015bb70();
  }
  local_f8 = 3;
  local_100 = (undefined8 ****)&DAT_180830c34;
  local_108 = param_4[2];
  FUN_18015a9c0(param_1);
  goto LAB_180547c3a;
}



