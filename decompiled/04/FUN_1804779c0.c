// FUN_1804779c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804779c0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804779c0(undefined8 *param_1,undefined8 param_2,float param_3,int param_4,char param_5)

{
  undefined2 uVar1;
  float *pfVar2;
  undefined1 auVar3 [16];
  int iVar4;
  undefined2 *puVar5;
  undefined4 uVar6;
  longlong *plVar7;
  float fVar8;
  undefined1 auStack_b8 [32];
  float local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined1 local_78 [8];
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_b8;
  pfVar2 = (float *)*param_1;
  fVar8 = 0.5;
  auVar3 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 451.5 + 0.5)),1);
  local_64 = auVar3._0_4_ + pfVar2[1];
  auVar3 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * param_3 + 0.5)),1);
  local_68 = auVar3._0_4_ + *pfVar2;
  auVar3 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 471.5 + 0.5)),1);
  local_6c = auVar3._0_4_ + pfVar2[1];
  auVar3 = vroundss_avx(ZEXT816(0),ZEXT416((uint)((param_3 + 23.0) * DAT_180b0a41c + 0.5)),1);
  local_70 = auVar3._0_4_ + *pfVar2;
  plVar7 = *(longlong **)(DAT_180bb8ae8 + 0x14d0);
  iVar4 = FUN_1804b0a90(param_2,0,
                        *(undefined4 *)(plVar7[0x22] + -4 + (longlong)(int)plVar7[0x21] * 4));
  if (*(int *)(*plVar7 + 0x1534) == iVar4) {
    FUN_1804cf810(iVar4,0xb,param_2);
  }
  local_98 = (float)CONCAT31(local_98._1_3_,param_5);
  puVar5 = (undefined2 *)FUN_1804aad60(local_78,iVar4,&local_68,&local_70);
  uVar1 = *puVar5;
  if ((char)uVar1 != '\0') {
    local_98 = DAT_180b0a41c * 10.0;
    local_90 = 0;
    FUN_1804df870(*(undefined8 *)param_1[1],&local_68,&local_70,DAT_180b0a418);
  }
  if (param_5 == '\0') {
    uVar6 = DAT_180b0a450;
  }
  else {
    uVar6 = DAT_1808da474;
    if ((char)uVar1 != '\0') {
      uVar6 = DAT_180b0a458;
    }
  }
  local_54 = (local_6c + local_64) * fVar8;
  fVar8 = (local_70 + local_68) * fVar8;
  local_60 = DAT_180b0a41c * 1.8 * (float)param_4;
  local_5c = local_54 - DAT_180b0a41c * 3.0;
  local_4c = DAT_180b0a41c * 3.0 + local_54;
  local_58 = local_60 + fVar8;
  local_60 = fVar8 - local_60;
  local_88 = 0x7f7fffff;
  local_98 = DAT_180b0a41c * 1.3;
  local_90 = 0;
  local_50 = local_60;
  FUN_1804d9a00(*(undefined8 *)param_1[1],&local_60,3,uVar6);
}



