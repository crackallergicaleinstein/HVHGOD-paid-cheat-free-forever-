// FUN_18060e5dc - decompiled reference (Ghidra). Not original source, does not compile.

/* 18060e5dc */

int FUN_18060e5dc(undefined4 param_1,undefined1 *param_2,ulonglong param_3,ulonglong param_4,
                 longlong param_5,undefined4 *param_6,undefined8 param_7)

{
  undefined4 uVar1;
  undefined1 auVar2 [8];
  int iVar3;
  longlong lVar4;
  int iVar5;
  bool bVar6;
  longlong local_58 [2];
  undefined1 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  char local_30;
  undefined1 local_2c [8];
  undefined4 local_24;
  char local_20;
  
  local_58[0] = 0;
  local_48 = 0;
  local_30 = '\0';
  uVar1 = local_2c._0_4_;
  local_2c[4] = 0;
  auVar2 = local_2c;
  local_20 = '\0';
  if (param_6 == (undefined4 *)0x0) {
    if (DAT_180bb2030 == 0) {
      param_1 = PTR_PTR_1808d7448._0_4_;
      uStack_3c = PTR_PTR_1808d7448._4_4_;
      uStack_38 = PTR_DAT_1808d7450._0_4_;
      uStack_34 = PTR_DAT_1808d7450._4_4_;
      goto LAB_18060e639;
    }
  }
  else {
    param_1 = *param_6;
    uStack_3c = param_6[1];
    uStack_38 = param_6[2];
    uStack_34 = param_6[3];
LAB_18060e639:
    local_30 = '\x01';
    local_40 = param_1;
  }
  if (param_5 != 0) {
    if (param_4 == 0) {
      if (param_2 != (undefined1 *)0x0) goto LAB_18060e673;
      if (param_3 == 0) {
        iVar3 = 0;
        goto LAB_18060e742;
      }
    }
    else if (param_2 != (undefined1 *)0x0) {
LAB_18060e673:
      if (param_3 != 0) {
        iVar5 = -1;
        if (param_4 < param_3) {
          iVar3 = FUN_18060b59c(param_1,param_2,param_4 + 1,param_5,local_58,param_7);
          if (iVar3 == -2) {
LAB_18060e6a9:
            iVar3 = iVar5;
            if (local_2c[4] != '\0') {
              if (local_2c._0_4_ == 0x22) {
                local_2c._4_4_ = auVar2._4_4_;
                local_2c = (undefined1  [8])CONCAT44(local_2c._4_4_,uVar1);
              }
            }
            goto LAB_18060e742;
          }
LAB_18060e6dc:
          if (-1 < iVar3) goto LAB_18060e742;
        }
        else {
          iVar3 = FUN_18060b59c();
          param_2[param_3 - 1] = 0;
          if (iVar3 != -2) goto LAB_18060e6dc;
          iVar3 = -2;
          if (param_4 == 0xffffffffffffffff) goto LAB_18060e6a9;
        }
        *param_2 = 0;
        bVar6 = iVar3 == -2;
        iVar3 = iVar5;
        if (bVar6) {
          local_2c._0_5_ = 0x100000000;
          local_2c._0_4_ = 0x22;
          FUN_18060aa1c(0,0,0,0,0,local_58);
        }
        goto LAB_18060e742;
      }
    }
  }
  local_2c._0_5_ = 0x100000000;
  local_2c._0_4_ = 0x16;
  FUN_18060aa1c(0,0,0,0,0,local_58);
  iVar3 = -1;
LAB_18060e742:
  if (local_30 == '\x02') {
    *(uint *)(local_58[0] + 0x3a8) = *(uint *)(local_58[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_2c[4] != '\0') {
    uVar1 = local_2c._0_4_;
    lVar4 = FUN_18060a6e8(local_58);
    *(undefined4 *)(lVar4 + 0x20) = uVar1;
  }
  if (local_20 != '\0') {
    lVar4 = FUN_18060a6e8(local_58);
    *(undefined4 *)(lVar4 + 0x24) = local_24;
  }
  return iVar3;
}



