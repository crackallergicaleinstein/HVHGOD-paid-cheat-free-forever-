// FUN_1805436d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805436d0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1805436d0(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  undefined1 auVar3 [64];
  undefined8 uVar4;
  undefined1 auVar5 [64];
  undefined1 auStack_a8 [32];
  char *local_88;
  undefined8 local_80;
  undefined1 local_78;
  undefined *local_70;
  undefined1 local_60;
  undefined **local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_a8;
  lVar1 = *param_1;
  cVar2 = FUN_18048b0e0("Surface Search",&DAT_18082ac6c,1);
  auVar5 = ZEXT464(0x43af0000);
  if (cVar2 != '\0') {
    FUN_1805303d0("##pixelsurf_search",auVar5._0_8_);
  }
  cVar2 = FUN_180488630("##pixelsurf_search","Surface Search",auVar5._0_8_);
  if (cVar2 != '\0') {
    FUN_180488c60();
    local_50 = 4;
    local_58 = &PTR_DAT_18086b760;
    FUN_18055c1b0();
    auVar3 = ZEXT464(0x3f800000);
    local_60 = 0;
    local_70 = &DAT_18082a248;
    local_78 = 1;
    local_80._0_4_ = 0x3f800000;
    local_88 = "%.0f deg";
    FUN_18048a250("Scan FOV",lVar1 + 0x4bc,auVar3._0_8_,0x43340000);
    local_88 = &DAT_18082a278;
    FUN_18053bcb0("Minimum Ride Ticks",lVar1 + 0x4c0,1,0x20);
    local_60 = 0;
    local_70 = &DAT_18082a274;
    local_78 = 1;
    local_80 = CONCAT44(local_80._4_4_,auVar3._0_4_);
    local_88 = "%.0f u/s";
    FUN_18048a250("Minimum Speed",lVar1 + 0x530,0,0x43a00000);
    FUN_180488f10();
    FUN_1804aeac0();
  }
  lVar1 = *param_1;
  cVar2 = FUN_18048b0e0("Steering & Jump Timing",&DAT_18082a298,1);
  if (cVar2 != '\0') {
    FUN_1805303d0("##pixelsurf_steering",auVar5._0_8_);
  }
  cVar2 = FUN_180488630("##pixelsurf_steering","Steering & Jump Timing",auVar5._0_8_);
  if (cVar2 != '\0') {
    FUN_180488c60();
    local_80 = 0;
    local_88 = (char *)((ulonglong)local_88 & 0xffffffffffffff00);
    cVar2 = FUN_1804898a0("Follow Movement Direction",lVar1 + 0x4c8,&DAT_18082a298,1);
    if (cVar2 != '\0') {
      *(undefined1 *)(lVar1 + 0x4d8) = *(undefined1 *)(lVar1 + 0x4c8);
    }
    local_80 = 0;
    local_88 = (char *)((ulonglong)local_88 & 0xffffffffffffff00);
    cVar2 = FUN_1804898a0("Accelerate on Surface",lVar1 + 0x538,&DAT_18082a274,1);
    if (cVar2 != '\0') {
      *(undefined1 *)(lVar1 + 0x548) = *(undefined1 *)(lVar1 + 0x538);
    }
    local_80 = 0;
    local_88 = (char *)((ulonglong)local_88 & 0xffffffffffffff00);
    cVar2 = FUN_1804898a0("Assist Movement",lVar1 + 0x6d8,&DAT_180829dc4,1);
    if (cVar2 != '\0') {
      *(undefined1 *)(lVar1 + 0x6e8) = *(undefined1 *)(lVar1 + 0x6d8);
    }
    FUN_180488f10();
    FUN_180488c60();
    local_80 = 0;
    local_88 = (char *)((ulonglong)local_88 & 0xffffffffffffff00);
    cVar2 = FUN_1804898a0("Auto Jump",lVar1 + 0x608,&DAT_18082a27c,1);
    if (cVar2 != '\0') {
      *(undefined1 *)(lVar1 + 0x618) = *(undefined1 *)(lVar1 + 0x608);
    }
    local_80 = 0;
    local_88 = (char *)((ulonglong)local_88 & 0xffffffffffffff00);
    cVar2 = FUN_1804898a0("Time Wall Jumps",lVar1 + 0x670,&DAT_18082a278,1);
    if (cVar2 != '\0') {
      *(undefined1 *)(lVar1 + 0x680) = *(undefined1 *)(lVar1 + 0x670);
    }
    FUN_180488f10();
    FUN_1804aeac0();
  }
  lVar1 = *param_1;
  cVar2 = FUN_18048b0e0("Visual & Audio Feedback",&DAT_180829dc0,1);
  uVar4 = auVar5._0_8_;
  if (cVar2 != '\0') {
    FUN_1805303d0("##pixelsurf_feedback",uVar4);
    uVar4 = auVar5._0_8_;
  }
  cVar2 = FUN_180488630("##pixelsurf_feedback","Visual & Audio Feedback",uVar4);
  if (cVar2 != '\0') {
    FUN_180488c60();
    local_80 = 0;
    local_88 = (char *)((ulonglong)local_88 & 0xffffffffffffff00);
    cVar2 = FUN_1804898a0("Show Surface Route",lVar1 + 0x5a0,&DAT_180829dc0,1);
    if (cVar2 != '\0') {
      *(undefined1 *)(lVar1 + 0x5b0) = *(undefined1 *)(lVar1 + 0x5a0);
    }
    FUN_180488f10();
    FUN_180488c60();
    FUN_180542e40(lVar1 + 0x740,lVar1 + 0x7a8);
    FUN_180488f10();
    FUN_1804aeac0();
  }
}



