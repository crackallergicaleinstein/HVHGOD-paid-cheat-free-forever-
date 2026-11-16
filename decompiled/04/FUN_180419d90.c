// FUN_180419d90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180419d90 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180419d90(undefined8 param_1,float *param_2,float *param_3,float *param_4)

{
  short sVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_a8 [32];
  int local_88 [2];
  undefined1 local_80 [12];
  float fStack_74;
  undefined8 local_70;
  ulonglong local_68;
  
  local_68 = DAT_1808d5f00 ^ (ulonglong)auStack_a8;
  fVar6 = *param_3;
  fVar5 = param_3[1];
  fVar7 = param_3[2];
  fVar4 = fVar5 * param_4[0xd] + fVar6 * param_4[0xc] + fVar7 * param_4[0xe] + param_4[0xf];
  sVar1 = thunk_FUN_180624430(fVar4);
  if ((sVar1 < 1) && (0.001 <= fVar4)) {
    fVar8 = fVar5 * param_4[1] + fVar6 * *param_4 + fVar7 * param_4[2] + param_4[3];
    sVar1 = thunk_FUN_180624430(fVar8);
    if (sVar1 < 1) {
      fVar6 = fVar5 * param_4[5] + fVar6 * param_4[4] + fVar7 * param_4[6] + param_4[7];
      sVar1 = thunk_FUN_180624430(fVar6);
      if (sVar1 < 1) {
        local_70 = 0;
        local_88[0] = 1;
        _local_80 = (undefined1  [16])0x0;
        if (((DAT_180bbab78 != 0) &&
            ((**(code **)(*(longlong *)DAT_180bbab78 + 0x2f8))(DAT_180bbab78,local_88,local_80),
            local_88[0] == 0)) || ((float)local_80._8_4_ <= 0.0)) {
          iVar2 = 0;
          iVar3 = 0;
        }
        else {
          iVar3 = (int)fStack_74;
          iVar2 = (int)(float)local_80._8_4_;
        }
        *param_2 = ((1.0 / fVar4) * fVar8 + 1.0) * (float)iVar2 * 0.5;
        param_2[1] = (1.0 - (1.0 / fVar4) * fVar6) * (float)iVar3 * 0.5;
      }
    }
  }
  *param_2 = 57005.0;
  param_2[1] = 57005.0;
}



