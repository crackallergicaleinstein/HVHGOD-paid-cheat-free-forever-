// FUN_180305a10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180305a10 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180305a10(longlong *param_1,int param_2)

{
  float fVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_208 [32];
  undefined8 *local_1e8;
  longlong local_1e0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined8 local_1bc;
  undefined4 local_1b4;
  undefined1 local_1a8 [152];
  float local_110;
  float local_104;
  float local_fc;
  float local_98;
  float local_94;
  float local_90;
  float local_88;
  float local_84;
  float local_80;
  ulonglong local_78;
  
  local_78 = DAT_1808d5f00 ^ (ulonglong)auStack_208;
  pfVar2 = (float *)&DAT_180801f18;
  fVar3 = 2.0;
  fVar7 = 110.0;
  fVar8 = 1.0;
  fVar4 = 48.0;
  fVar6 = (float)param_2 * 0.015625 * ((float *)param_1[1])[1] + ((float *)*param_1)[1];
  fVar5 = (float)param_2 * 0.015625 * *(float *)param_1[1] + *(float *)*param_1;
  while( true ) {
    local_98 = *pfVar2 * *(float *)param_1[2] + fVar5;
    local_94 = *pfVar2 * ((float *)param_1[2])[1] + fVar6;
    local_80 = fVar3 + *(float *)(*param_1 + 8);
    local_90 = *(float *)(*param_1 + 8) - fVar7;
    local_1c8 = *(undefined8 *)param_1[3];
    local_1c0 = *(undefined4 *)((undefined8 *)param_1[3] + 1);
    local_1bc = *(undefined8 *)param_1[4];
    local_1b4 = *(undefined4 *)((undefined8 *)param_1[4] + 1);
    local_1e0 = param_1[5];
    local_1e8 = &local_1c8;
    local_88 = local_98;
    local_84 = local_94;
    FUN_180419610(local_1bc,local_1a8,&local_88,&local_98);
    if ((((local_fc < fVar8) && (*(float *)param_1[7] <= local_110)) &&
        (fVar1 = *(float *)(*param_1 + 8) - local_104, fVar3 <= fVar1)) && (fVar1 <= fVar4)) break;
    pfVar2 = pfVar2 + 1;
    if (pfVar2 == (float *)&DAT_180801f3c) {
    }
  }
}



