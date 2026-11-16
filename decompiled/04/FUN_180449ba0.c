// FUN_180449ba0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180449ba0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180449ba0(longlong param_1,ulonglong param_2,byte param_3,longlong param_4,longlong param_5
                  )

{
  longlong lVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined2 *puVar6;
  ulonglong uVar7;
  undefined1 auStack_88 [50];
  undefined2 local_56;
  undefined2 local_54 [2];
  ulonglong local_50;
  
  local_50 = DAT_1808d5f00 ^ (ulonglong)auStack_88;
  uVar7 = (ulonglong)param_3;
  if (param_4 != 0) {
    if (*(ulonglong *)(param_1 + 0x20) <
        (ulonglong)(*(longlong *)(param_1 + 0x18) + -1 + *(longlong *)(param_4 + 0x18))) {
    }
    FUN_18063aed0(*(longlong *)(param_1 + 0x18) + *(longlong *)(param_1 + 0x38) + -1,
                  *(undefined8 *)(param_4 + 0x38),*(longlong *)(param_4 + 0x18) + -1);
    *(longlong *)(param_1 + 0x18) =
         *(longlong *)(param_1 + 0x18) + *(longlong *)(param_4 + 0x18) + -1;
    *(undefined1 *)(*(longlong *)(param_1 + 0x18) + -1 + *(longlong *)(param_1 + 0x38)) = 0;
  }
  puVar6 = local_54;
  while (99 < param_2) {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = param_2;
    lVar3 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar2,8);
    puVar6 = puVar6 + -1;
    uVar4 = (param_2 - lVar3 >> 1) + lVar3 >> 6;
    *puVar6 = *(undefined2 *)
               (
               "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
               + (param_2 + uVar4 * -100) * 2);
    param_2 = uVar4;
  }
  puVar6 = puVar6 + -1;
  lVar3 = 0;
  *puVar6 = *(undefined2 *)
             (
             "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
             + param_2 * 2);
  uVar5 = (longlong)local_54 + (-(longlong)puVar6 - (ulonglong)(param_2 < 10));
  uVar4 = uVar5;
  if (uVar5 <= uVar7) {
    uVar4 = uVar7;
  }
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (uVar4 + lVar1 <= *(ulonglong *)(param_1 + 0x20)) {
    if (uVar5 < uVar7) {
      lVar3 = uVar7 - uVar5;
      FUN_18063ab10(*(longlong *)(param_1 + 0x38) + -1 + lVar1,0x30,lVar3);
    }
    FUN_18063aed0(*(longlong *)(param_1 + 0x38) + -1 + lVar1 + lVar3,
                  (longlong)puVar6 + (ulonglong)(param_2 < 10),uVar5);
    *(ulonglong *)(param_1 + 0x18) = uVar4 + lVar1;
    *(undefined1 *)(*(longlong *)(param_1 + 0x38) + uVar4 + -1 + lVar1) = 0;
    if (param_5 != 0) {
      if ((ulonglong)(*(longlong *)(param_5 + 0x18) + -1 + *(longlong *)(param_1 + 0x18)) <=
          *(ulonglong *)(param_1 + 0x20)) {
        FUN_18063aed0(*(longlong *)(param_1 + 0x18) + *(longlong *)(param_1 + 0x38) + -1,
                      *(undefined8 *)(param_5 + 0x38),*(longlong *)(param_5 + 0x18) + -1);
        lVar3 = *(longlong *)(param_5 + 0x18) + -1 + *(longlong *)(param_1 + 0x18);
        *(longlong *)(param_1 + 0x18) = lVar3;
        *(undefined1 *)(*(longlong *)(param_1 + 0x38) + -1 + lVar3) = 0;
      }
    }
  }
}



