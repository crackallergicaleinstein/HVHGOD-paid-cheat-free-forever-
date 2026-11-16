// FUN_1804ab580 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804ab580 */

undefined1 FUN_1804ab580(undefined8 param_1,float *param_2,char param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  longlong lVar3;
  bool bVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined2 *puVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  float fVar10;
  undefined1 auVar11 [64];
  float fVar12;
  undefined8 local_res8;
  float local_res10;
  float local_res14;
  undefined1 local_res18 [8];
  
  lVar3 = DAT_180bb8ae8;
  *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
  plVar2 = *(longlong **)(lVar3 + 0x14d0);
  local_res8 = param_1;
  uVar5 = FUN_1804b0a90("##dots",0,
                        *(undefined4 *)(plVar2[0x22] + -4 + (longlong)(int)plVar2[0x21] * 4));
  if (*(uint *)(*plVar2 + 0x1534) == uVar5) {
    FUN_1804cf810(uVar5,0xb,"##dots");
  }
  local_res14 = DAT_180b0a41c * 8.0;
  local_res8 = CONCAT44(local_res14 + param_2[1],local_res14 + *param_2);
  local_res10 = *param_2 - local_res14;
  local_res14 = param_2[1] - local_res14;
  puVar7 = (undefined2 *)FUN_1804aad60(local_res18,uVar5,&local_res10,&local_res8,param_3);
  uVar1 = *(undefined1 *)(puVar7 + 1);
  if ((*(int *)(DAT_180bb8ae8 + 0x2008) < *(int *)(DAT_180bb8ae8 + 0x1ff8)) &&
     (*(uint *)((longlong)*(int *)(DAT_180bb8ae8 + 0x2008) * 0x38 +
               *(longlong *)(DAT_180bb8ae8 + 0x2000)) == uVar5)) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  fVar12 = 0.0;
  if (((char)*puVar7 != '\0') || (bVar4)) {
    uVar6 = 0x3f800000;
  }
  else {
    uVar6 = 0;
  }
  uVar8 = (ulonglong)(uVar5 >> 0x1e ^ uVar5) * -0x40a7b892e31b1a47;
  uVar8 = (uVar8 >> 0x1b ^ uVar8) * -0x6b2fb644ecceee15;
  uVar8 = uVar8 >> 0x1f ^ uVar8;
  uVar9 = FUN_1804aaa10((uint)(uVar8 >> 0x20) ^ (uint)uVar8,uVar6,0x41900000);
  uVar6 = FUN_180462ad0(DAT_180b0a518,DAT_180b0a40c,uVar9);
  if (param_3 == '\0') {
    uVar6 = FUN_180462ad0(DAT_1808da488,uVar6,0x3ee66666);
  }
  fVar10 = DAT_180b0a41c * 3.1;
  auVar11 = ZEXT464((uint)(DAT_180b0a41c * 1.15));
  lVar3 = plVar2[0x59];
  local_res8 = CONCAT44(param_2[1],*param_2 - fVar10 * 1.0);
  FUN_1804e01c0(lVar3,&local_res8,DAT_180b0a41c * 1.15,uVar6,0xc);
  local_res8 = CONCAT44(param_2[1],fVar10 * fVar12 + *param_2);
  FUN_1804e01c0(lVar3,&local_res8,auVar11._0_8_,uVar6,0xc);
  local_res8 = CONCAT44(param_2[1],fVar10 + *param_2);
  FUN_1804e01c0(lVar3,&local_res8,auVar11._0_8_,uVar6,0xc);
  return uVar1;
}



