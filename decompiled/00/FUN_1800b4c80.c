// FUN_1800b4c80 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800b4c80 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1800b4c80(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [16];
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_80 [32];
  undefined1 local_60 [32];
  undefined1 local_40 [8];
  undefined1 local_38 [8];
  undefined1 local_30 [8];
  undefined1 local_28 [8];
  undefined1 local_20 [8];
  undefined1 local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_1808d5f00 ^ (ulonglong)auStack_c8;
  FUN_1800abfc0(local_20);
  FUN_1800b4410(local_40);
  cVar1 = FUN_1800e6540(param_1,&DAT_1806bbfa8);
  if (cVar1 == '\0') {
    uVar3 = FUN_1800e78e0(param_1,"fields");
    FUN_1800f4a50(local_30,uVar3);
    uVar3 = FUN_1800e78e0(param_1,"version");
    iVar2 = FUN_1800e62a0(uVar3);
    lVar4 = FUN_1800aa200();
    if ((iVar2 < 0xc) && (*(code **)(lVar4 + 0x38) != (code *)0x0)) {
      (**(code **)(lVar4 + 0x38))(local_30,iVar2,0);
    }
    local_a8 = (undefined1  [16])0x0;
    local_98 = 0;
    local_90 = 0;
    FUN_18015ba30(local_a8,"fields",6);
    uVar3 = FUN_1800f43d0(local_40,local_a8);
    uVar5 = FUN_1800f3e20(local_30,local_80);
    uVar6 = FUN_1800f3f60(local_30,local_60);
    FUN_180113160(uVar3,uVar6,uVar5,0);
    cVar1 = FUN_1800ac270(local_40);
    FUN_1801409d0(local_28,local_30[0]);
  }
  else {
    cVar1 = FUN_1800ac950();
  }
  if (cVar1 == '\0') {
    FUN_1801409d0(local_38,local_40[0]);
    FUN_1800ac270(local_20);
    FUN_1801409d0(local_18,local_20[0]);
  }
  else {
    FUN_1801409d0(local_38,local_40[0]);
    FUN_1801409d0(local_18,local_20[0]);
  }
}



