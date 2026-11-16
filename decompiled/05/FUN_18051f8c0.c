// FUN_18051f8c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18051f8c0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18051f8c0(longlong param_1,float *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined4 local_48;
  undefined8 local_38;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_88;
  if (*(int *)(param_1 + 0x24) != 4) {
    if (*(int *)(param_1 + 0x24) == 0) {
      local_38 = param_2;
      if (DAT_180cad2e0 == 0) {
        FUN_18051fb50(&local_38,&DAT_180c8fdb8);
      }
      else {
        FUN_180520110(&local_38,&DAT_180c7e1f0);
      }
    }
    iVar1 = *(int *)(param_1 + 0x24);
    if ((iVar1 == 0xd) || (iVar1 == 0xc)) {
      FUN_180539510(param_2,iVar1 == 0xd);
    }
    lVar4 = DAT_180bb8ae8;
    uVar3 = DAT_180b0a528;
    local_28 = DAT_180b0a41c * 508.0 + *param_2;
    local_24 = DAT_180b0a41c * 10.0 + param_2[1];
    local_20 = DAT_180b0a41c * 628.0 + *param_2;
    local_1c = DAT_180b0a41c * 34.0 + param_2[1];
    local_68._0_4_ = DAT_180b0a41c * 5.0;
    local_60 = (char *)((ulonglong)local_60._4_4_ << 0x20);
    *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
    uVar2 = *(undefined8 *)(*(longlong *)(lVar4 + 0x14d0) + 0x2c8);
    FUN_1804df870(uVar2,&local_28,&local_20,uVar3);
    local_60 = &DAT_18082ac6c;
    local_38 = (float *)CONCAT44((local_1c + local_24) * 0.5,DAT_180b0a41c * 10.0 + local_28);
    local_68 = (undefined8 *)CONCAT44(local_68._4_4_,DAT_180b0a4c4);
    FUN_180463b40(uVar2,DAT_180c62cc0,0x41300000,&local_38);
    local_58 = FUN_1804c52a0(0x1227,0,0);
    local_48 = 0;
    local_60 = "Find feature";
    local_30 = DAT_180b0a41c * 23.0 + local_28;
    local_38 = (float *)CONCAT44(local_1c,local_20 - DAT_180b0a41c * 5.0);
    local_68 = &local_38;
    local_2c = local_24;
    FUN_1804ad540("##global_feature_search",&DAT_180c62ec0,0x80,&local_30);
    FUN_18050ce60("Search",&local_28,&local_20);
    local_68 = (undefined8 *)CONCAT44(local_68._4_4_,DAT_180b0a540);
    FUN_180463160(uVar2,DAT_180b0a41c * 146.0 + *param_2,DAT_180b0a41c * 628.0 + *param_2,
                  DAT_180b0a41c * 44.0 + param_2[1]);
  }
}



