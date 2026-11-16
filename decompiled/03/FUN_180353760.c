// FUN_180353760 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180353760 */

void FUN_180353760(int *param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 local_18;
  undefined4 local_10;
  
  iVar2 = *param_1;
  if (iVar2 == 0) {
    lVar3 = *(longlong *)(param_2 + 0x180);
    local_10 = CONCAT22(local_10._2_2_,0x102);
    local_18 = CONCAT44(local_18._4_4_,0xffffffff);
    auVar12._8_8_ = 0;
    auVar12._0_8_ = local_18;
    auVar12 = vinsertps_avx(auVar12,ZEXT416((uint)param_1[1]),0x10);
    local_18._4_4_ = auVar12._4_4_;
    local_18 = CONCAT44(local_18._4_4_,0xffffffff);
    *(longlong *)(param_2 + 0x180) = lVar3 + 1;
    *(longlong *)(param_2 + lVar3 * 0xc) = auVar12._0_8_;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = local_18;
    *(undefined4 *)(param_2 + 8 + lVar3 * 0xc) = local_10;
    lVar3 = *(longlong *)(param_2 + 0x180);
    auVar12 = vinsertps_avx(auVar13,ZEXT416((uint)param_1[2]),0x10);
    local_10 = CONCAT22(local_10._2_2_,2);
    *(longlong *)(param_2 + 0x180) = lVar3 + 1;
    *(longlong *)(param_2 + lVar3 * 0xc) = auVar12._0_8_;
    *(undefined4 *)(param_2 + 8 + lVar3 * 0xc) = local_10;
    lVar3 = *(longlong *)(param_2 + 0x180);
    local_10 = CONCAT22(local_10._2_2_,1);
    local_18._4_4_ = auVar12._4_4_;
    local_18 = CONCAT44(local_18._4_4_,0xffffffff);
    auVar14._8_8_ = 0;
    auVar14._0_8_ = local_18;
    auVar12 = vinsertps_avx(auVar14,ZEXT416((uint)param_1[2]),0x10);
    *(longlong *)(param_2 + 0x180) = lVar3 + 1;
    *(longlong *)(param_2 + lVar3 * 0xc) = auVar12._0_8_;
    *(undefined4 *)(param_2 + 8 + lVar3 * 0xc) = local_10;
    lVar3 = *(longlong *)(param_2 + 0x180);
    uVar1 = param_1[2];
    local_18._4_4_ = auVar12._4_4_;
    local_18 = CONCAT44(local_18._4_4_,0xffffffff);
    auVar15._8_8_ = 0;
    auVar15._0_8_ = local_18;
    local_10 = CONCAT22(local_10._2_2_,0x101);
    *(longlong *)(param_2 + 0x180) = lVar3 + 1;
    auVar12 = vinsertps_avx(auVar15,ZEXT416(uVar1),0x10);
    local_18 = auVar12._0_8_;
    *(ulonglong *)(param_2 + lVar3 * 0xc) = local_18;
    *(undefined4 *)(param_2 + 8 + lVar3 * 0xc) = local_10;
    if ((char)param_1[4] != '\0') {
      lVar3 = *(longlong *)(param_2 + 0x180);
      uVar1 = param_1[3];
      local_18._4_4_ = auVar12._4_4_;
      local_18 = CONCAT44(local_18._4_4_,0xffffffff);
      auVar16._8_8_ = 0;
      auVar16._0_8_ = local_18;
      local_10 = CONCAT22(local_10._2_2_,1);
      *(longlong *)(param_2 + 0x180) = lVar3 + 1;
      auVar12 = vinsertps_avx(auVar16,ZEXT416(uVar1),0x10);
      local_18 = auVar12._0_8_;
      *(ulonglong *)(param_2 + lVar3 * 0xc) = local_18;
      *(undefined4 *)(param_2 + 8 + lVar3 * 0xc) = local_10;
    }
    auVar12 = ZEXT416((uint)param_1[3]);
  }
  else {
    if (iVar2 == 1) {
      lVar3 = *(longlong *)(param_2 + 0x180);
      local_18 = CONCAT44(local_18._4_4_,0xffffffff);
      auVar10._8_8_ = 0;
      auVar10._0_8_ = local_18;
      auVar12 = vinsertps_avx(auVar10,ZEXT416((uint)param_1[1]),0x10);
      local_10 = CONCAT22(local_10._2_2_,0x102);
      *(longlong *)(param_2 + 0x180) = lVar3 + 1;
      *(longlong *)(param_2 + lVar3 * 0xc) = auVar12._0_8_;
      local_18._4_4_ = auVar12._4_4_;
      local_18 = CONCAT44(local_18._4_4_,0xffffffff);
      auVar11._8_8_ = 0;
      auVar11._0_8_ = local_18;
      auVar12 = vinsertps_avx(auVar11,ZEXT416(0x3f800000),0x10);
      uVar4 = auVar12._0_8_;
      *(undefined4 *)(param_2 + 8 + lVar3 * 0xc) = local_10;
      local_10 = CONCAT22(local_10._2_2_,2);
      goto LAB_180353aeb;
    }
    if (iVar2 == 2) {
      lVar3 = *(longlong *)(param_2 + 0x180);
      local_10 = CONCAT22(local_10._2_2_,2);
      local_18 = CONCAT44(local_18._4_4_,0xffffffff);
      auVar8._8_8_ = 0;
      auVar8._0_8_ = local_18;
      *(longlong *)(param_2 + 0x180) = lVar3 + 1;
      auVar12 = ZEXT816(0);
      auVar13 = vinsertps_avx(auVar8,auVar12,0x10);
      *(longlong *)(param_2 + lVar3 * 0xc) = auVar13._0_8_;
      *(undefined4 *)(param_2 + 8 + lVar3 * 0xc) = local_10;
      lVar3 = *(longlong *)(param_2 + 0x180);
      local_18._4_4_ = auVar13._4_4_;
      local_18 = CONCAT44(local_18._4_4_,0xffffffff);
      auVar9._8_8_ = 0;
      auVar9._0_8_ = local_18;
      local_10 = CONCAT22(local_10._2_2_,1);
      *(longlong *)(param_2 + 0x180) = lVar3 + 1;
      auVar13 = vinsertps_avx(auVar9,auVar12,0x10);
      local_18 = auVar13._0_8_;
      *(ulonglong *)(param_2 + lVar3 * 0xc) = local_18;
      *(undefined4 *)(param_2 + 8 + lVar3 * 0xc) = local_10;
    }
    else {
      if (iVar2 != 3) {
        return;
      }
      lVar3 = *(longlong *)(param_2 + 0x180);
      local_10 = CONCAT22(local_10._2_2_,0x102);
      local_18 = CONCAT44(local_18._4_4_,0xffffffff);
      auVar5._8_8_ = 0;
      auVar5._0_8_ = local_18;
      auVar12 = vinsertps_avx(auVar5,ZEXT816(0),0x10);
      local_18._4_4_ = auVar12._4_4_;
      local_18 = CONCAT44(local_18._4_4_,0xffffffff);
      *(longlong *)(param_2 + 0x180) = lVar3 + 1;
      *(longlong *)(param_2 + lVar3 * 0xc) = auVar12._0_8_;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = local_18;
      *(undefined4 *)(param_2 + 8 + lVar3 * 0xc) = local_10;
      lVar3 = *(longlong *)(param_2 + 0x180);
      auVar12 = vinsertps_avx(auVar6,ZEXT416((uint)param_1[2]),0x10);
      local_10 = CONCAT22(local_10._2_2_,2);
      *(longlong *)(param_2 + 0x180) = lVar3 + 1;
      *(longlong *)(param_2 + lVar3 * 0xc) = auVar12._0_8_;
      *(undefined4 *)(param_2 + 8 + lVar3 * 0xc) = local_10;
      lVar3 = *(longlong *)(param_2 + 0x180);
      local_18._4_4_ = auVar12._4_4_;
      local_18 = CONCAT44(local_18._4_4_,0xffffffff);
      auVar7._8_8_ = 0;
      auVar7._0_8_ = local_18;
      auVar12 = vinsertps_avx(auVar7,ZEXT416((uint)param_1[2]),0x10);
      local_10 = CONCAT22(local_10._2_2_,1);
      *(longlong *)(param_2 + 0x180) = lVar3 + 1;
      local_18 = auVar12._0_8_;
      *(ulonglong *)(param_2 + lVar3 * 0xc) = local_18;
      *(undefined4 *)(param_2 + 8 + lVar3 * 0xc) = local_10;
      auVar12 = ZEXT416((uint)param_1[2]);
    }
  }
  local_18 = CONCAT44(local_18._4_4_,0xffffffff);
  auVar17._8_8_ = 0;
  auVar17._0_8_ = local_18;
  auVar12 = vinsertps_avx(auVar17,auVar12,0x10);
  uVar4 = auVar12._0_8_;
  local_10 = CONCAT22(local_10._2_2_,0x101);
LAB_180353aeb:
  lVar3 = *(longlong *)(param_2 + 0x180);
  *(longlong *)(param_2 + 0x180) = lVar3 + 1;
  *(undefined8 *)(param_2 + lVar3 * 0xc) = uVar4;
  *(undefined4 *)(param_2 + 8 + lVar3 * 0xc) = local_10;
  return;
}



