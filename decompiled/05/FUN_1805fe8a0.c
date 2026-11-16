// FUN_1805fe8a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805fe8a0 */

void FUN_1805fe8a0(uint param_1,double param_2,undefined8 param_3)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  uint uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 local_res8 [8];
  double local_res10;
  double local_res20;
  undefined8 local_b8;
  uint local_b0 [2];
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  
  uVar6 = param_1 - 1;
  uVar5 = 0;
  dVar3 = 1.0;
  dVar7 = 0.0;
  dVar4 = -1.0;
  local_res10 = 4.94065645841247e-318;
  dVar2 = 1.0 - (double)param_1;
  dVar8 = -1.0;
  dVar9 = 0.0;
  dVar10 = 1.0;
  if (uVar6 != 0) {
    do {
      dVar7 = dVar10 * dVar2;
      uVar5 = uVar5 + 1;
      dVar4 = dVar8 * -param_2;
      dVar2 = dVar2 + 1.0;
      dVar7 = dVar9 + dVar8 / dVar7;
      dVar3 = dVar10 * (double)uVar5;
      dVar8 = dVar4;
      dVar9 = dVar7;
      dVar10 = dVar3;
    } while (uVar5 < uVar6);
  }
  dVar8 = (double)FUN_1805fdc70((double)param_1,0,local_res8);
  dVar9 = (double)FUN_18061d2e0(-param_2,(double)uVar6);
  dVar10 = (double)FUN_18061cdb0(param_2);
  local_b8 = 0x3cb0000000000000;
  local_res20 = (dVar9 * (dVar8 - dVar10)) / dVar3 + dVar7;
  local_b0[0] = uVar5;
  local_a8 = param_2;
  local_a0 = dVar4;
  local_98 = dVar2;
  local_90 = dVar3;
  FUN_180601edc(local_b0,&local_b8,&local_res10,&local_res20);
  if ((ulonglong)local_res10 < 1000000) {
    return;
  }
  local_res10 = (double)(ulonglong)local_res10;
  FUN_180601c04("boost::math::expint_series<%1%>(unsigned,%1%)",
                "Series evaluation exceeded %1% iterations, giving up now.",&local_res10,param_3);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



