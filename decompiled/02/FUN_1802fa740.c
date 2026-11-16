// FUN_1802fa740 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802fa740 */

undefined4 * FUN_1802fa740(undefined8 *param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  bool bVar2;
  ulonglong uVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined1 auVar9 [64];
  undefined4 uVar10;
  ulonglong local_res8;
  
  lVar5 = FUN_1802fa6a0(*param_1,param_3);
  if (lVar5 == 0) {
LAB_1802fa89e:
    *(undefined1 *)(param_2 + 2) = 0;
    return param_2;
  }
  lVar6 = FUN_18017ea70();
  uVar8 = 0;
  *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
  bVar2 = false;
  if (lVar5 + 0x58 != 0) {
    local_res8 = local_res8 & 0xffffffff00000000;
    cVar4 = FUN_1804514f0(&local_res8,lVar5 + 0x58,4);
    if (cVar4 == '\0') {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
  }
  uVar10 = (uint)local_res8;
  lVar6 = FUN_18017ea70();
  if (*(int *)(lVar6 + 4) != 0) {
    *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
  }
  if (!bVar2) goto LAB_1802fa89e;
  lVar6 = FUN_18017ea70();
  *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
  bVar2 = false;
  if (lVar5 + 8 != 0) {
    local_res8 = 0;
    cVar4 = FUN_1804514f0(&local_res8,lVar5 + 8,8);
    if (cVar4 == '\0') {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
  }
  uVar3 = local_res8;
  lVar5 = FUN_18017ea70();
  if (*(int *)(lVar5 + 4) != 0) {
    *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + -1;
  }
  lVar5 = FUN_18017ea70();
  *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + 1;
  if ((bVar2) && (uVar3 != 0)) {
    local_res8 = CONCAT44(local_res8._4_4_,uVar8);
    cVar4 = FUN_1804514f0(&local_res8,uVar3,4);
    auVar9 = ZEXT464((uint)local_res8);
    if (cVar4 != '\0') {
      uVar7 = 1;
      goto LAB_1802fa85c;
    }
  }
  else {
    auVar9 = ZEXT464((uint)local_res8);
  }
  uVar7 = 0;
LAB_1802fa85c:
  lVar5 = FUN_18017ea70();
  if (*(int *)(lVar5 + 4) != 0) {
    *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + -1;
  }
  auVar1 = vpcmpeqd_avx(ZEXT416(uVar7),SUB6416(ZEXT464(0),0));
  auVar1 = vblendvps_avx(auVar9._0_16_,SUB6416(ZEXT464(0x7fc00000),0),auVar1);
  param_2[1] = auVar1._0_4_;
  *param_2 = uVar10;
  *(undefined1 *)(param_2 + 2) = 1;
  return param_2;
}



