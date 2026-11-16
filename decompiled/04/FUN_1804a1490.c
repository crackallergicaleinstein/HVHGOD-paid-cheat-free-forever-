// FUN_1804a1490 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804a1490 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804a1490(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  char cVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_d8 [32];
  int local_b8;
  undefined1 *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_88;
  float local_78;
  float local_74;
  undefined8 local_70;
  longlong local_68;
  undefined8 *local_60;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_d8;
  if (DAT_180bbecdb == '\0') {
    cVar6 = FUN_18048b0e0("Items",&DAT_180829db8,1);
    lVar4 = DAT_180bb8ae8;
    fVar9 = *(float *)(DAT_180bb8ae8 + 0x1ed8);
    fVar7 = *(float *)(DAT_180bb8ae8 + 0x1ed0);
    fVar8 = *(float *)(DAT_180bb8ae8 + 0x1ed4);
    *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
    fVar9 = (fVar7 + fVar9) * 0.5;
    uVar1 = *(undefined8 *)(*(longlong *)(lVar4 + 0x14d0) + 0x2c8);
    FUN_18015abc0(local_58,0x10,&DAT_1807c6e5c,*(undefined4 *)*param_1);
    uVar5 = DAT_180c62ca8;
    local_b0 = local_58;
    local_88 = 0;
    local_98 = 0;
    auVar2 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 13.2 + 0.5)),1);
    auVar2 = vmaxss_avx(SUB6416(ZEXT464(0x3f800000),0),auVar2);
    local_a0 = 0;
    local_b8 = 0;
    local_a8 = 0;
    FUN_1804ea040(&local_78,DAT_180c62ca8,auVar2._0_8_,0x7f7fffff);
    uVar3 = DAT_1808da474;
    fVar8 = fVar8 - DAT_180b0a41c * 13.0;
    fVar7 = (float)FUN_180463350(uVar5,0x41533333);
    local_74 = fVar9 - fVar7 * 0.5;
    local_78 = (fVar8 - DAT_180b0a41c * 8.0) - local_78;
    local_b0 = local_58;
    local_a8 = 0;
    local_b8 = uVar3;
    FUN_180463450(uVar1,uVar5,0x41533333,&local_78);
    local_b0 = (undefined1 *)CONCAT44(local_b0._4_4_,DAT_180b0a41c * 1.5);
    local_b8 = DAT_1808da474;
    local_78 = fVar8;
    local_74 = fVar9;
    FUN_1804648c0(uVar1,&local_78,DAT_180b0a41c * 1.8,DAT_180b0a41c * 3.6);
    if (cVar6 != '\0') {
      FUN_180488320("##wm_items");
    }
    cVar6 = FUN_180488630("##wm_items","Items",0x435c0000);
    if (cVar6 != '\0') {
      if (DAT_180bbecdb == '\0') {
        local_70 = param_1[1];
        local_68 = DAT_180bb8ae8 + 0x28;
        local_60 = &DAT_180c62ca8;
        FUN_180488c60();
        FUN_1804a17c0(&local_70);
        FUN_180488f10();
      }
      FUN_1804aeac0();
    }
  }
  local_b8._0_1_ = 1;
  FUN_180489c50("Additional Color",param_1[1] + 0x6ccc,param_1[1] + 0x6ccb,&DAT_18082a268);
  local_b0 = (undefined1 *)0x0;
  local_b8 = (uint)local_b8._1_3_ << 8;
  FUN_1804898a0("Display Avatar",param_1[1] + 0x6cc8,&DAT_18082a250,1);
}



