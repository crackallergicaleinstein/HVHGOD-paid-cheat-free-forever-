// FUN_1805d69a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805d69a0 */

ulonglong FUN_1805d69a0(longlong param_1,undefined8 *param_2,uint param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint local_48;
  undefined4 uStack_44;
  undefined8 local_40;
  int local_38;
  int iStack_34;
  undefined8 local_30;
  int local_28;
  int local_24;
  int local_20;
  int iStack_1c;
  
  if ((param_1 == 0) || (param_4 == (undefined8 *)0x0)) {
    uVar4 = 6;
  }
  else {
    local_40 = *param_2;
    local_20 = (int)param_2[2];
    iVar6 = (int)param_2[1];
    iVar5 = local_20 + iVar6;
    iVar6 = (int)local_40 + iVar6;
    local_28 = iVar5 / 2;
    iVar5 = iVar5 + iVar6;
    iStack_34 = (int)((ulonglong)param_2[1] >> 0x20);
    iVar7 = (int)((ulonglong)local_40 >> 0x20) + iStack_34;
    local_30._4_4_ = (int)((ulonglong)param_2[2] >> 0x20);
    iStack_1c = local_30._4_4_;
    local_24 = (iStack_34 + local_30._4_4_) / 2;
    iVar1 = iStack_34 + local_30._4_4_ + iVar7;
    local_30 = CONCAT44((int)(iVar1 + (iVar1 >> 0x1f & 3U)) >> 2,
                        (int)(iVar5 + (iVar5 >> 0x1f & 3U)) >> 2);
    _local_38 = CONCAT44(iVar7 / 2,iVar6 / 2);
    if (param_3 < 3) {
      local_48 = 0;
      puVar2 = (undefined8 *)FUN_18057abe0(param_1,0x30,&local_48);
      if (local_48 == 0) {
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
        *(undefined4 *)(puVar2 + 4) = 0;
        *(undefined4 *)((longlong)puVar2 + 0x24) = 0;
        *(undefined4 *)(puVar2 + 5) = 0;
        *(undefined4 *)((longlong)puVar2 + 0x2c) = 0;
      }
      else {
        puVar2 = (undefined8 *)CONCAT44(uStack_44,local_48);
      }
      uVar4 = (ulonglong)local_48;
      if (local_48 == 0) {
        puVar3 = (undefined8 *)FUN_18057abe0(param_1,0x30,&local_48);
        if (local_48 == 0) {
          *puVar3 = 0;
          puVar3[1] = 0;
          puVar3[2] = 0;
          puVar3[3] = 0;
          puVar3[4] = 0;
          puVar3[5] = 0;
          *puVar2 = local_40;
          puVar2[1] = local_30;
          *(undefined4 *)(puVar2 + 4) = 1;
          *puVar3 = local_30;
          puVar3[1] = CONCAT44(iStack_1c,local_20);
          *(undefined4 *)(puVar3 + 4) = 1;
          puVar2[5] = puVar3;
          puVar3[5] = *param_4;
          *param_4 = puVar2;
        }
        return (ulonglong)local_48;
      }
    }
    else {
      uVar4 = FUN_1805d69a0(param_1,&local_40,param_3 >> 1,param_4);
      if ((int)uVar4 == 0) {
        uVar4 = FUN_1805d69a0(param_1,&local_30,param_3 >> 1,param_4);
        return uVar4;
      }
    }
  }
  return uVar4;
}



