// FUN_180530940 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180530940 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180530940(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  uint uVar1;
  undefined1 auVar2 [16];
  char cVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_68 [40];
  undefined1 local_40;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  ulonglong local_20;
  
  local_20 = DAT_1808d5f00 ^ (ulonglong)auStack_68;
  fVar9 = 255.0;
  local_40 = 1;
  uVar1 = *param_3;
  local_30 = (float)(uVar1 & 0xff) / 255.0;
  local_2c = (float)(uVar1 >> 8 & 0xff) / 255.0;
  local_28 = (float)(uVar1 >> 0x10 & 0xff) / 255.0;
  local_24 = (float)(uVar1 >> 0x18) / 255.0;
  cVar3 = FUN_180489fc0(param_2,&local_30,1);
  if (cVar3 != '\0') {
    fVar5 = 0.0;
    auVar4 = SUB6416(ZEXT464(0x3f800000),0);
    if (0.0 <= local_30) {
      auVar2 = vminss_avx(auVar4,ZEXT416((uint)local_30));
      fVar8 = auVar2._0_4_;
    }
    else {
      fVar8 = 0.0;
    }
    if (0.0 <= local_2c) {
      auVar2 = vminss_avx(auVar4,ZEXT416((uint)local_2c));
      fVar7 = auVar2._0_4_;
    }
    else {
      fVar7 = 0.0;
    }
    if (0.0 <= local_28) {
      auVar2 = vminss_avx(auVar4,ZEXT416((uint)local_28));
      fVar6 = auVar2._0_4_;
    }
    else {
      fVar6 = 0.0;
    }
    if (0.0 <= local_24) {
      auVar4 = vminss_avx(auVar4,ZEXT416((uint)local_24));
      fVar5 = auVar4._0_4_;
    }
    *param_3 = CONCAT13((char)(int)(fVar5 * fVar9),
                        CONCAT12((char)(int)(fVar6 * fVar9),
                                 CONCAT11((char)(int)(fVar7 * fVar9),(char)(int)(fVar8 * fVar9))));
  }
}



