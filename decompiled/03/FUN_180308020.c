// FUN_180308020 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180308020 */

float FUN_180308020(float param_1)

{
  short sVar1;
  float fVar2;
  undefined1 auVar3 [64];
  
  sVar1 = thunk_FUN_180624430();
  if (0 < sVar1) {
    return 0.0;
  }
  auVar3 = ZEXT464(0x43b40000);
  fVar2 = (float)FUN_180637760(param_1 + 180.0);
  if (fVar2 < 0.0) {
    fVar2 = fVar2 + auVar3._0_4_;
  }
  return fVar2 - 180.0;
}



