// FUN_1805fe6e8 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805fe6e8 */

double FUN_1805fe6e8(uint param_1,double param_2,undefined8 param_3)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  double local_res10 [2];
  undefined8 local_res20;
  double local_38;
  undefined4 local_30;
  uint local_2c;
  
  local_res10[0] = 4.94065645841247e-318;
  local_30 = 0xffffffff;
  local_38 = (double)param_1 + param_2;
  local_res20 = 0x3cb0000000000000;
  local_2c = param_1;
  dVar2 = (double)FUN_1805fdb54(&local_38,&local_res20,local_res10);
  if ((ulonglong)local_res10[0] < 1000000) {
    dVar3 = (double)FUN_18061c8d0(-param_2);
    return dVar3 / dVar2;
  }
  local_res10[0] = (double)(ulonglong)local_res10[0];
  FUN_180601c04("boost::math::expint_continued_fraction<%1%>(unsigned,%1%)",
                "Series evaluation exceeded %1% iterations, giving up now.",local_res10,param_3);
  pcVar1 = (code *)swi(3);
  dVar2 = (double)(*pcVar1)();
  return dVar2;
}



