// FUN_1805178a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805178a0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1805178a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,float *param_4,
                  float param_5)

{
  int iVar1;
  char cVar2;
  char *pcVar3;
  undefined8 ****ppppuVar4;
  undefined4 uVar5;
  longlong lVar6;
  float fVar7;
  undefined1 auStack_c8 [32];
  char *local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined *local_90;
  undefined1 local_80;
  undefined4 local_78;
  float local_74 [3];
  undefined8 ****local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_c8;
  local_78 = 0;
  FUN_1804c28a0(param_4);
  pcVar3 = "Ragebot / Anti-Aim / Right Override";
  if (param_5 < 0.0) {
    pcVar3 = "Ragebot / Anti-Aim / Left Override";
  }
  local_68 = (undefined8 ****)CONCAT71(DAT_1808e6650._1_7_,(undefined1)DAT_1808e6650);
  uStack_60 = uRam00000001808e6658;
  uStack_58 = DAT_1808e6660;
  uStack_50 = DAT_1808e6668;
  DAT_1808e6660 = 0;
  DAT_1808e6668 = 0xf;
  DAT_1808e6650._0_1_ = 0;
  local_78 = 1;
  lVar6 = -1;
  do {
    lVar6 = lVar6 + 1;
  } while (pcVar3[lVar6] != '\0');
  fVar7 = 0.0;
  FUN_180113930(&DAT_1808e6650);
  FUN_180488c60();
  FUN_180516ec0(param_2,param_3);
  uVar5 = 1;
  if (param_5 < fVar7) {
    uVar5 = 0xffffffff;
  }
  local_74[0] = (float)FUN_1800b4f90(uVar5,*param_4);
  local_74[0] = local_74[0] - param_5;
  local_80 = 1;
  local_90 = &DAT_180829a4c;
  local_98 = 1;
  local_a0 = 0x3f800000;
  local_a8 = "%.0f deg";
  cVar2 = FUN_18048a250("Adjustment",local_74,0xc1700000,0x41700000);
  if (cVar2 != '\0') {
    *param_4 = param_5 + local_74[0];
    FUN_18050cd00();
  }
  FUN_180488f10();
  ppppuVar4 = &local_68;
  if (0xf < uStack_50) {
    ppppuVar4 = local_68;
  }
  FUN_180113930(&DAT_1808e6650,ppppuVar4,uStack_58);
  iVar1 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
  if (iVar1 < 2) {
    FUN_1804c5a40("Calling PopID() too many times!");
  }
  else {
    *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar1 + -1;
  }
  FUN_18015c010(&local_68);
}



