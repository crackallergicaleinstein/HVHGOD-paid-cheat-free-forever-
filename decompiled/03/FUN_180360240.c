// FUN_180360240 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180360240 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180360240(undefined8 param_1,uint *param_2,undefined8 *param_3,undefined8 param_4)

{
  float *pfVar1;
  undefined8 uVar2;
  char cVar3;
  short sVar4;
  undefined8 *puVar5;
  float *pfVar6;
  ulonglong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_2a8 [32];
  longlong local_288;
  undefined8 local_278;
  undefined8 uStack_270;
  int local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined8 local_258;
  undefined1 local_250 [72];
  undefined1 local_208 [384];
  undefined8 local_88;
  ulonglong local_78;
  
  local_78 = DAT_1808d5f00 ^ (ulonglong)auStack_2a8;
  DAT_180b8ff70 = 0;
  if (*(char *)((longlong)param_2 + 9) != '\0') {
    DAT_180b8ff70 = 0;
    DAT_180b8fff4 = 2;
  }
  if ((DAT_180b8ff6c != '\0') && (*param_2 < DAT_180b8ff68)) {
    DAT_180b8ff70 = 0;
    DAT_180b8fff4 = 0x1f;
  }
  if ((char)param_2[1] == '\0') {
    DAT_180b8ff70 = 0;
    DAT_180b8fff4 = 3;
  }
  if ((DAT_180b8ff6c == '\0') || (*param_2 != DAT_180b8ff68)) {
    pfVar6 = (float *)*param_3;
    uVar7 = 0;
    fVar10 = 0.0;
    pfVar1 = pfVar6 + param_3[1] * 2;
    if (pfVar6 != pfVar1) {
      fVar9 = 1.0;
      do {
        fVar8 = *pfVar6;
        sVar4 = thunk_FUN_180624430(fVar8);
        if (((0 < sVar4) || (fVar8 < fVar10)) || (fVar9 < fVar8)) {
          DAT_180b8fff4 = 0x1e;
        }
        if (*(char *)(pfVar6 + 1) == '\0') {
          uVar7 = uVar7 + 1;
        }
        pfVar6 = pfVar6 + 2;
      } while (pfVar6 != pfVar1);
    }
    _DAT_180b8fef8 = _DAT_180b8fed0;
    uRam0000000180b8ff00 = uRam0000000180b8fed8;
    uRam0000000180b8ff08 = uRam0000000180b8fee0;
    uRam0000000180b8ff10 = uRam0000000180b8fee8;
    DAT_180b8ff18 = DAT_180b8fef0;
    local_278._0_5_ = CONCAT14(1,*param_2);
    _DAT_180b8ff68 = local_278;
    local_288 = 0x20 - uVar7;
    if (0x1f < uVar7) {
      local_288 = 0;
    }
    puVar5 = (undefined8 *)FUN_180353260(local_250,&DAT_180b8fef8,param_2);
    _DAT_180b8ff20 = *puVar5;
    uRam0000000180b8ff28 = puVar5[1];
    DAT_180b8ff30 = puVar5[2];
    _DAT_180b8ff38 = puVar5[3];
    _DAT_180b8ff40 = puVar5[4];
    uRam0000000180b8ff48 = puVar5[5];
    uRam0000000180b8ff50 = puVar5[6];
    DAT_180b8ff58 = puVar5[7];
    _DAT_180b8ff60 = puVar5[8];
  }
  DAT_180b8fff4 = DAT_180b8ff60;
  local_268 = _DAT_180b8ff20;
  uStack_264 = DAT_180b8ff20_4;
  uStack_260 = (undefined4)uRam0000000180b8ff28;
  uStack_25c = uRam0000000180b8ff28._4_4_;
  local_258 = DAT_180b8ff30;
  uVar2 = local_258;
  if (*(char *)((longlong)param_2 + 5) == '\0') {
    DAT_180b8fff4 = 4;
    goto LAB_18036048c;
  }
  if (*(char *)((longlong)param_2 + 6) == '\0') {
    DAT_180b8fff4 = 5;
    goto LAB_18036048c;
  }
  if (*(char *)((longlong)param_2 + 10) == '\0') {
    DAT_180b8fff4 = 6;
    goto LAB_18036048c;
  }
  local_258._4_1_ = (char)((ulonglong)DAT_180b8ff30 >> 0x20);
  if (*(char *)((longlong)param_2 + 0xb) == '\0') {
LAB_180360488:
    if (local_258._4_1_ != '\0') {
      local_258 = uVar2;
      FUN_18063ab10(local_208,0,0x180);
      FUN_18035d180(local_208);
      local_278 = *param_3;
      uStack_270 = param_3[1];
      local_88 = 0;
      cVar3 = FUN_180353b20(&local_278,&local_268,local_208);
      if (cVar3 == '\0') {
        DAT_180b8fff4 = 0x1d;
      }
      cVar3 = FUN_180358870(param_4,local_208);
      if (cVar3 == '\0') {
        _DAT_180b8fed0 = _DAT_180b8fef8;
        uRam0000000180b8fed8 = uRam0000000180b8ff00;
        uRam0000000180b8fee0 = uRam0000000180b8ff08;
        uRam0000000180b8fee8 = uRam0000000180b8ff10;
        DAT_180b8fef0 = DAT_180b8ff18;
        DAT_180b8fff4 = 0x20;
      }
      _DAT_180b8fed0 = _DAT_180b8ff38;
      uRam0000000180b8fed8 = _DAT_180b8ff40;
      uRam0000000180b8fee0 = uRam0000000180b8ff48;
      uRam0000000180b8fee8 = uRam0000000180b8ff50;
      DAT_180b8fef0 = DAT_180b8ff58;
      DAT_180b8ff70 = local_258._4_1_;
      DAT_180b8fff4 = 1;
    }
  }
  else {
    if ((char)param_2[3] != '\0') {
      if (local_258._4_1_ == '\0') goto LAB_18036048c;
      if (_DAT_180b8ff20 == 3) goto LAB_180360488;
    }
    DAT_180b8fff4 = 7;
  }
LAB_18036048c:
  DAT_180b8fef0._5_3_ = (undefined3)((ulonglong)DAT_180b8ff58 >> 0x28);
  DAT_180b8fef0._0_5_ = (uint5)(uint)DAT_180b8ff58;
  uRam0000000180b8fee8 = uRam0000000180b8ff50;
  uRam0000000180b8fee0 = uRam0000000180b8ff48;
  uRam0000000180b8fed8 = _DAT_180b8ff40;
  _DAT_180b8fed0 = _DAT_180b8ff38;
}



