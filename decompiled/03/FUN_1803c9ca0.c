// FUN_1803c9ca0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803c9ca0 */

void FUN_1803c9ca0(byte param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4)

{
  undefined1 auVar1 [16];
  byte bVar2;
  char cVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 local_res10;
  undefined4 local_res18;
  undefined4 local_38;
  undefined4 local_34;
  
  local_res10 = param_2;
  local_res18 = param_3;
  if ((char)((uint)param_2 >> 0x18) != '\0') {
    FUN_1803c9810(*param_4,*(undefined1 *)param_4[1],0,0,&local_res10);
  }
  local_38 = 0x4030200;
  local_34 = 0x9080605;
  if (param_1 < 0xb) {
    bVar2 = param_1;
LAB_1803c9d0b:
    if ((bVar2 == 6) && (local_res18._3_1_ != '\0')) {
      FUN_1803c9810(*param_4,*(char *)param_4[1],1,*(char *)param_4[1] == '\0',&local_res18);
    }
    local_38 = 0x4030200;
    local_34 = 0x9080605;
    if (10 < param_1) {
      if (0x12 < param_1) goto LAB_1803c9d7d;
      param_1 = *(byte *)((longlong)&local_38 + (ulonglong)(param_1 - 0xb));
    }
    uVar5 = (uint)param_1;
    if (param_1 == 0) {
      if (local_res10._3_1_ == '\0') {
        return;
      }
      cVar3 = *(char *)param_4[1];
      puVar4 = &local_res10;
      goto LAB_1803c9de0;
    }
    if ((uVar5 - 2 & 0xfd) != 0) {
      return;
    }
  }
  else {
    if (param_1 < 0x13) {
      bVar2 = *(byte *)((longlong)&local_38 + (ulonglong)(param_1 - 0xb));
      goto LAB_1803c9d0b;
    }
LAB_1803c9d7d:
    uVar5 = 2;
  }
  if (local_res10._3_1_ == 0) {
    return;
  }
  auVar1 = vpcmpeqd_avx(ZEXT416(uVar5),SUB6416(ZEXT464(2),0));
  auVar1 = vblendvps_avx(SUB6416(ZEXT464(0x3ee66666),0),SUB6416(ZEXT464(0x3d75c28f),0),auVar1);
  cVar3 = (char)(int)(auVar1._0_4_ * (float)local_res10._3_1_ + 0.5);
  local_38 = CONCAT13(cVar3,(int3)param_2);
  if (cVar3 == '\0') {
    return;
  }
  cVar3 = *(char *)param_4[1];
  puVar4 = &local_38;
LAB_1803c9de0:
  local_34 = 0x9080605;
  FUN_1803c9810(*param_4,cVar3,1,cVar3 == '\0',puVar4);
  return;
}



