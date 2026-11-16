// FUN_180459860 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180459860 */

byte FUN_180459860(longlong *param_1,undefined8 param_2,float param_3,undefined8 param_4)

{
  byte bVar1;
  undefined1 auVar2 [16];
  int iVar3;
  undefined4 uVar4;
  byte *pbVar5;
  longlong *plVar6;
  undefined8 uVar7;
  float local_res8;
  float local_resc;
  undefined1 local_res18 [16];
  float local_38;
  float local_34;
  
  plVar6 = *(longlong **)(DAT_180bb8ae8 + 0x14d0);
  iVar3 = FUN_1804b0a90(param_2,0,
                        *(undefined4 *)(plVar6[0x22] + -4 + (longlong)(int)plVar6[0x21] * 4));
  if (*(int *)(*plVar6 + 0x1534) == iVar3) {
    FUN_1804cf810(iVar3,0xb,param_2);
  }
  local_res8 = DAT_180b0a41c * 7.0 + param_3;
  local_34 = *(float *)(*param_1 + 4);
  local_38 = param_3 - DAT_180b0a41c * 7.0;
  local_resc = local_34 + *(float *)param_1[1];
  pbVar5 = (byte *)FUN_1804aad60(local_res18,iVar3,&local_38,&local_res8,1);
  bVar1 = pbVar5[2];
  auVar2 = vpcmpeqd_avx(ZEXT116(*pbVar5),SUB6416(ZEXT464(0),0));
  auVar2 = vblendvps_avx(SUB6416(ZEXT464(0x3f800000),0),ZEXT816(0),auVar2);
  uVar7 = FUN_1804aaa10(iVar3 + 1,auVar2._0_8_,0x41900000);
  local_resc = *(float *)param_1[3];
  local_res8 = param_3;
  uVar4 = FUN_180462ad0(DAT_1808da474,DAT_180b0a424,uVar7);
  FUN_180463dc0(*(undefined8 *)param_1[2],&local_res8,uVar4,param_4,0x41300000);
  return bVar1;
}



