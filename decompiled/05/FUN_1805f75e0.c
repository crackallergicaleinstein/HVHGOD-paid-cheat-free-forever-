// FUN_1805f75e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805f75e0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1805f75e0(byte *param_1,ulonglong param_2)

{
  byte *pbVar1;
  byte bVar2;
  undefined1 auVar3 [32];
  undefined1 auVar4 [64];
  undefined1 auStack_158 [56];
  undefined1 local_120 [256];
  ulonglong local_20;
  
  local_20 = DAT_1808d5f00 ^ (ulonglong)auStack_158;
  pbVar1 = param_1 + param_2;
  if (param_2 < 0x15) {
    auVar4 = ZEXT1664((undefined1  [16])0x0);
    while (param_1 != pbVar1) {
      bVar2 = *param_1;
      param_1 = param_1 + 1;
      auVar3 = vpmovzxbq_avx2(ZEXT416((uint)(1 << (bVar2 >> 3 & 0x18))));
      auVar3 = vpsllq_avx2(auVar3,ZEXT416(bVar2 & 0x3f));
      auVar3 = vpor_avx2(auVar3,auVar4._0_32_);
      auVar4 = ZEXT3264(auVar3);
    }
  }
  else {
    FUN_18063ab10(local_120,0,0x100);
    for (; param_1 != pbVar1; param_1 = param_1 + 1) {
      local_120[*param_1] = 0xff;
    }
  }
}



