// FUN_18052cec0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18052cec0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18052cec0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,float param_4,
                  char param_5)

{
  undefined1 auVar1 [16];
  float fVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  float fVar7;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  float local_68;
  float local_64;
  undefined1 local_60 [8];
  undefined8 local_58;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  ulonglong local_40;
  
  local_40 = DAT_1808d5f00 ^ (ulonglong)auStack_98;
  if (*(char *)*param_1 != '\0') {
    param_4 = param_4 + 300.0;
  }
  local_44 = (*(float *)param_1[2] - 9.0) * DAT_180b0a41c + ((float *)param_1[1])[1];
  plVar6 = *(longlong **)(DAT_180bb8ae8 + 0x14d0);
  local_48 = (param_4 - 9.0) * DAT_180b0a41c + *(float *)param_1[1];
  local_50 = local_48 + DAT_180b0a41c * 18.0;
  local_4c = local_44 + DAT_180b0a41c * 18.0;
  iVar4 = FUN_1804b0a90(param_2,0,
                        *(undefined4 *)(plVar6[0x22] + -4 + (longlong)(int)plVar6[0x21] * 4));
  if (*(int *)(*plVar6 + 0x1534) == iVar4) {
    FUN_1804cf810(iVar4,0xb,param_2);
  }
  local_78 = CONCAT31(local_78._1_3_,param_5);
  FUN_1804aad60(local_60,iVar4,&local_48,&local_50);
  uVar5 = DAT_1808da474;
  if (param_5 != '\0') {
    uVar5 = DAT_180b0a458;
  }
  if (DAT_180cd6f38 != 0) {
    local_58 = param_2;
    (**(code **)(*(longlong *)DAT_180cd6f38 + 0x10))(DAT_180cd6f38,&local_58,&local_48,&local_50);
  }
  lVar3 = DAT_180bb8ae8;
  if (param_5 == '\0') {
    fVar2 = ((float)(uVar5 >> 0x18) / 255.0) * 0.45;
    fVar7 = 0.0;
    if (0.0 <= fVar2) {
      auVar1 = vminss_avx(SUB6416(ZEXT464(0x3f800000),0),ZEXT416((uint)fVar2));
      fVar7 = auVar1._0_4_;
    }
    uVar5 = uVar5 & 0xffffff | (int)(longlong)(fVar7 * 255.0 + 0.5) << 0x18;
  }
  local_64 = DAT_180b0a41c * *(float *)param_1[2] + ((float *)param_1[1])[1];
  local_68 = DAT_180b0a41c * param_4 + *(float *)param_1[1];
  local_78 = 0x41380000;
  *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
  FUN_180463dc0(*(undefined8 *)(*(longlong *)(lVar3 + 0x14d0) + 0x2c8),&local_68,uVar5,param_3);
}



