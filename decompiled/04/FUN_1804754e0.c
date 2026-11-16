// FUN_1804754e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804754e0 */

byte FUN_1804754e0(undefined8 param_1,undefined8 param_2,float *param_3,undefined8 param_4,
                  char param_5)

{
  byte bVar1;
  undefined1 auVar2 [16];
  int iVar3;
  undefined4 uVar4;
  byte *pbVar5;
  longlong *plVar6;
  undefined8 uVar7;
  float fVar8;
  undefined1 local_res18 [16];
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  
  plVar6 = *(longlong **)(DAT_180bb8ae8 + 0x14d0);
  fVar8 = DAT_180b0a41c * 9.0;
  iVar3 = FUN_1804b0a90(param_2,0,
                        *(undefined4 *)(plVar6[0x22] + -4 + (longlong)(int)plVar6[0x21] * 4));
  if (*(int *)(*plVar6 + 0x1534) == iVar3) {
    FUN_1804cf810(iVar3,0xb,param_2);
  }
  local_38 = fVar8 + *param_3;
  local_34 = fVar8 + param_3[1];
  local_30 = *param_3 - fVar8;
  local_2c = param_3[1] - fVar8;
  pbVar5 = (byte *)FUN_1804aad60(local_res18,iVar3,&local_30,&local_38,1);
  bVar1 = pbVar5[2];
  auVar2 = vpcmpeqd_avx(ZEXT116(*pbVar5),SUB6416(ZEXT464(0),0));
  auVar2 = vblendvps_avx(SUB6416(ZEXT464(0x3f800000),0),ZEXT816(0),auVar2);
  uVar7 = FUN_1804aaa10(iVar3 + 1,auVar2._0_8_,0x41800000);
  uVar4 = DAT_1808da474;
  if (param_5 != '\0') {
    uVar4 = DAT_180b0a40c;
  }
  uVar4 = FUN_180462ad0(uVar4,DAT_180b0a424,uVar7);
  FUN_180463dc0(param_1,param_3,uVar4,param_4,0x41380000);
  return bVar1;
}



