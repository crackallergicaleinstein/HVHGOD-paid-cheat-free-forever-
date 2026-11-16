// FUN_180297e80 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180297e80 */

void FUN_180297e80(byte param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  byte bVar3;
  char cVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 local_res10;
  undefined4 local_res18;
  undefined4 local_38;
  undefined4 local_34;
  
  local_res10 = param_2;
  local_res18 = param_3;
  if ((char)((uint)param_2 >> 0x18) != '\0') {
    FUN_180296810(*param_4,*(undefined1 *)param_4[1],0,0,&local_res10);
  }
  uVar2 = local_res10;
  local_38 = 0x4030200;
  local_34 = 0x9080605;
  if (param_1 < 0xb) {
    bVar3 = param_1;
LAB_180297eee:
    if ((bVar3 == 6) && (local_res18._3_1_ != '\0')) {
      FUN_180296810(*param_4,*(char *)param_4[1],1,*(char *)param_4[1] == '\0',&local_res18);
    }
    local_38 = 0x4030200;
    local_34 = 0x9080605;
    if (10 < param_1) {
      if (0x12 < param_1) goto LAB_180297f60;
      param_1 = *(byte *)((longlong)&local_38 + (ulonglong)(param_1 - 0xb));
    }
    uVar6 = (uint)param_1;
    if (param_1 == 0) {
      if (local_res10._3_1_ == '\0') {
        return;
      }
      cVar4 = *(char *)param_4[1];
      puVar5 = &local_res10;
      goto LAB_180297fc3;
    }
    if ((uVar6 - 2 & 0xfd) != 0) {
      return;
    }
  }
  else {
    if (param_1 < 0x13) {
      bVar3 = *(byte *)((longlong)&local_38 + (ulonglong)(param_1 - 0xb));
      goto LAB_180297eee;
    }
LAB_180297f60:
    uVar6 = 2;
  }
  if (local_res10._3_1_ == 0) {
    return;
  }
  auVar1 = vpcmpeqd_avx(ZEXT416(uVar6),SUB6416(ZEXT464(2),0));
  auVar1 = vblendvps_avx(SUB6416(ZEXT464(0x3ee66666),0),SUB6416(ZEXT464(0x3d75c28f),0),auVar1);
  cVar4 = (char)(int)(auVar1._0_4_ * (float)local_res10._3_1_ + 0.5);
  local_38 = CONCAT13(cVar4,(int3)uVar2);
  if (cVar4 == '\0') {
    return;
  }
  cVar4 = *(char *)param_4[1];
  puVar5 = &local_38;
LAB_180297fc3:
  local_34 = 0x9080605;
  FUN_180296810(*param_4,cVar4,1,cVar4 == '\0',puVar5);
  return;
}



