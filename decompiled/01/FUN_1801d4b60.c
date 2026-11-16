// FUN_1801d4b60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801d4b60 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801d4b60(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_1b8 [32];
  undefined1 local_198 [32];
  undefined1 local_178 [32];
  undefined1 local_158 [32];
  undefined1 local_138 [32];
  undefined1 local_118 [32];
  undefined1 local_f8 [32];
  undefined1 local_d8 [40];
  undefined1 local_b0 [32];
  undefined1 local_90 [32];
  undefined1 local_70 [32];
  undefined1 local_50 [40];
  ulonglong local_28;
  
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_1b8;
  if ((param_1 != param_2) && (lVar3 = param_1 + 0x168, lVar3 != param_2)) {
    lVar5 = param_1;
    do {
      FUN_18017a9c0(local_198,lVar3);
      cVar1 = FUN_1801d5040();
      lVar2 = lVar3;
      lVar4 = lVar5;
      while (cVar1 != '\0') {
        FUN_180175280(lVar2,lVar4);
        lVar2 = lVar2 + -0x168;
        if (lVar2 == param_1) break;
        lVar4 = lVar4 + -0x168;
        cVar1 = FUN_1801d5040();
      }
      FUN_180175280(lVar2,local_198);
      FUN_18015c010(local_50);
      FUN_18015c010(local_70);
      FUN_18015c010(local_90);
      FUN_18015c010(local_b0);
      FUN_18015c010(local_d8);
      FUN_18015c010(local_f8);
      FUN_18015c010(local_118);
      FUN_18015c010(local_138);
      FUN_18015c010(local_158);
      FUN_18015c010(local_178);
      FUN_18015c010(local_198);
      lVar3 = lVar3 + 0x168;
      lVar5 = lVar5 + 0x168;
    } while (lVar3 != param_2);
  }
}



