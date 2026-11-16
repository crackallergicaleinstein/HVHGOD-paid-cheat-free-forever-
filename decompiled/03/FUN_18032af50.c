// FUN_18032af50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18032af50 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18032af50(undefined8 *param_1,int param_2)

{
  float *pfVar1;
  longlong lVar2;
  undefined8 uVar3;
  short sVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [64];
  float fVar9;
  undefined1 auStack_1d8 [32];
  undefined8 *local_1b8;
  longlong local_1b0;
  undefined8 local_198;
  undefined4 local_190;
  undefined8 local_18c;
  undefined4 local_184;
  undefined1 local_178 [144];
  float local_e8;
  float local_e4;
  float local_e0;
  float local_cc;
  char local_bd;
  float local_68;
  float local_64;
  float local_60;
  ulonglong local_58;
  
  local_58 = DAT_1808d5f00 ^ (ulonglong)auStack_1d8;
  pfVar1 = (float *)*param_1;
  fVar5 = (((float)param_2 * 360.0) / 72.0) * 0.017453292;
  auVar8 = ZEXT464((uint)fVar5);
  fVar9 = 0.0;
  fVar7 = pfVar1[2] + 0.0;
  fVar5 = (float)FUN_180638e00(fVar5);
  fVar5 = fVar5 * 36.0 + pfVar1[1];
  fVar6 = (float)FUN_180637540(auVar8._0_8_);
  lVar2 = param_1[1];
  local_68 = fVar6 * 36.0 + *pfVar1;
  local_190 = *(undefined4 *)(lVar2 + 0x20);
  local_198 = *(undefined8 *)(lVar2 + 0x18);
  local_184 = *(undefined4 *)(lVar2 + 0x2c);
  local_1b0 = lVar2 + 0x30;
  local_1b8 = &local_198;
  local_18c = *(undefined8 *)(lVar2 + 0x24);
  local_64 = fVar5;
  local_60 = fVar7;
  FUN_180419610(lVar2,local_178,pfVar1,&local_68);
  if (local_bd == '\0') {
    sVar4 = thunk_FUN_180624430(local_cc);
    if (((sVar4 < 1) && (fVar9 <= local_cc)) && (local_cc < 1.0)) {
      auVar8 = ZEXT464((uint)local_e4);
      if (0.04 < local_e4 * local_e4 + local_e8 * local_e8) {
        sVar4 = thunk_FUN_180624430();
        if (sVar4 < 1) {
          sVar4 = thunk_FUN_180624430(auVar8._0_8_);
          if (sVar4 < 1) {
            sVar4 = thunk_FUN_180624430(local_e0);
            if ((sVar4 < 1) && (ABS(local_e0) <= 0.1)) {
              fVar7 = local_cc * 36.0;
              if (fVar7 < *(float *)param_1[3]) {
                uVar3 = param_1[4];
                *(float *)param_1[3] = fVar7;
                FUN_180333600(uVar3,local_178);
              }
              if (fVar7 <= 2.0) {
                if (fVar7 < *(float *)param_1[5]) {
                  uVar3 = param_1[6];
                  *(float *)param_1[5] = fVar7;
                  FUN_180333600(uVar3,local_178);
                }
              }
            }
          }
        }
      }
    }
  }
}



