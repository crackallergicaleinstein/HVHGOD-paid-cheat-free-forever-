// FUN_1800e76d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800e76d0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800e76d0(undefined1 *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auVar4 [16];
  char cVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined1 auStack_1f8 [32];
  undefined4 local_1d8;
  longlong *local_1d0;
  longlong *local_1c8;
  undefined1 *local_1c0;
  longlong local_1b8 [7];
  longlong *local_180;
  undefined4 local_178;
  longlong local_170;
  longlong local_168;
  undefined1 local_160;
  undefined4 local_15c;
  undefined1 local_158;
  undefined8 local_150;
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined8 local_128;
  undefined1 local_120 [16];
  undefined8 local_110;
  undefined8 local_108;
  undefined **local_100;
  undefined1 local_f8 [16];
  undefined8 local_e8;
  int local_e0;
  undefined8 local_d8;
  undefined1 local_d0;
  undefined1 local_c8 [64];
  undefined1 local_88 [64];
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_1808d5f00 ^ (ulonglong)auStack_1f8;
  local_1d8 = 0;
  *param_1 = 0;
  local_1c0 = param_1;
  local_48 = param_3;
  FUN_180111d10(param_1 + 8,0);
  local_1d8 = 1;
  plVar6 = (longlong *)FUN_180111f10(local_c8,param_3);
  lVar1 = *param_2;
  lVar2 = param_2[1];
  local_1d0 = plVar6;
  plVar7 = (longlong *)FUN_180111f10(local_88,plVar6);
  local_1c8 = plVar7;
  FUN_180111f10(local_1b8,plVar7);
  local_178 = 0;
  local_160 = 0;
  local_15c = 0xffffffff;
  local_158 = 0;
  local_150 = 0;
  local_148 = (undefined1  [16])0x0;
  local_138 = (undefined1  [16])0x0;
  local_128 = 0;
  local_110 = 0;
  local_108 = 0xf;
  local_120._1_15_ = SUB1615((undefined1  [16])0x0,1);
  auVar4[0xf] = 0;
  auVar4._0_15_ = local_120._1_15_;
  local_120 = auVar4 << 8;
  local_100 = &PTR_180700558;
  local_f8 = (undefined1  [16])0x0;
  local_e8 = 0;
  local_170 = lVar1;
  local_168 = lVar2 + lVar1;
  puVar8 = (undefined8 *)FUN_18061159c();
  if ((char *)*puVar8 == (char *)0x0) {
    cVar5 = '.';
  }
  else {
    cVar5 = *(char *)*puVar8;
  }
  local_e0 = (int)cVar5;
  local_d8 = 0xffffffffffffffff;
  local_d0 = 0;
  FUN_1801401f0(local_1b8);
  plVar3 = (longlong *)plVar7[7];
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x20))(plVar3,plVar3 != plVar7);
    plVar7[7] = 0;
  }
  local_1d8 = 3;
  plVar7 = (longlong *)plVar6[7];
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x20))(plVar7,plVar7 != plVar6);
    plVar6[7] = 0;
  }
  FUN_18010fca0(local_1b8);
  FUN_18015c010(local_120);
  FUN_180113710(local_138);
  if (local_180 != (longlong *)0x0) {
    (**(code **)(*local_180 + 0x20))(local_180,local_180 != local_1b8);
  }
  plVar6 = (longlong *)param_3[7];
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x20))(plVar6,plVar6 != param_3);
    param_3[7] = 0;
  }
}



