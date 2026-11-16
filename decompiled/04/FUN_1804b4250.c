// FUN_1804b4250 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804b4250 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804b4250(undefined1 (*param_1) [16],int param_2,ulonglong param_3,float param_4)

{
  int *piVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  undefined8 *puVar16;
  float fVar17;
  undefined1 auStack_b8 [32];
  float local_98;
  float local_90;
  undefined4 local_88;
  undefined1 local_78 [8];
  undefined8 uStack_70;
  float local_68;
  undefined1 auStack_64 [4];
  undefined8 uStack_60;
  ulonglong local_58;
  
  local_58 = DAT_1808d5f00 ^ (ulonglong)auStack_b8;
  if ((((param_2 == *(int *)(DAT_180bb8ae8 + 0x203c)) &&
       ((*(char *)(DAT_180bb8ae8 + 0x2038) != '\0' || ((param_3 & 4) != 0)))) &&
      ((param_2 != *(int *)(DAT_180bb8ae8 + 0x1ec0) ||
       ((*(byte *)(DAT_180bb8ae8 + 0x1ec4) & 2) == 0)))) &&
     (lVar3 = *(longlong *)(DAT_180bb8ae8 + 0x14d0), *(char *)(lVar3 + 0x179) == '\0')) {
    if (param_4 < 0.0) {
      if ((param_3 & 8) == 0) {
        param_4 = *(float *)(DAT_180bb8ae8 + 0xccc);
      }
      else {
        param_4 = 0.0;
      }
    }
    auVar2 = *param_1;
    auVar5 = vmaxss_avx(auVar2,ZEXT416(*(uint *)(lVar3 + 0x268)));
    auVar8 = vshufps_avx(auVar2,auVar2,0x55);
    auVar8 = vmaxss_avx(auVar8,ZEXT416(*(uint *)(lVar3 + 0x26c)));
    uStack_60._4_4_ = auVar2._12_4_;
    uVar12 = (uint)uStack_60._4_4_;
    uStack_60._0_4_ = auVar2._8_4_;
    uVar11 = (uint)(float)uStack_60;
    uStack_60 = auVar2._8_8_;
    auStack_64 = (undefined1  [4])auVar8._0_4_;
    local_68 = auVar5._0_4_;
    auVar6 = vminss_avx(ZEXT416(uVar12),ZEXT416(*(uint *)(lVar3 + 0x274)));
    auVar7 = vminss_avx(ZEXT416(uVar11),ZEXT416(*(uint *)(lVar3 + 0x270)));
    auVar2 = vmaxss_avx(SUB6416(ZEXT464(0x40000000),0),
                        ZEXT416((uint)(*(float *)(DAT_180bb8ae8 + 0x11ac) * 1.5)));
    fVar17 = (float)(int)auVar2._0_4_;
    uStack_60._0_4_ = auVar7._0_4_;
    uStack_60._4_4_ = auVar6._0_4_;
    if ((param_3 & 2) == 0) {
      uStack_60._0_4_ = (float)(int)(fVar17 * 0.5 + 3.0);
      auStack_64 = (undefined1  [4])(auVar8._0_4_ - (float)uStack_60);
      local_68 = auVar5._0_4_ - (float)uStack_60;
      uStack_60._4_4_ = (float)uStack_60 + auVar6._0_4_;
      uStack_60._0_4_ = (float)uStack_60 + auVar7._0_4_;
      if ((((local_68 < *(float *)(lVar3 + 0x268)) ||
           ((float)auStack_64 < *(float *)(lVar3 + 0x26c))) ||
          (*(float *)(lVar3 + 0x270) < (float)uStack_60)) ||
         (*(float *)(lVar3 + 0x274) < uStack_60._4_4_)) {
        bVar10 = false;
        lVar4 = *(longlong *)(lVar3 + 0x2c8);
        auVar2 = vmaxss_avx(ZEXT416((uint)local_68),ZEXT416((uint)(float)uStack_60));
        auVar5 = vmaxss_avx(ZEXT416((uint)auStack_64),ZEXT416((uint)uStack_60._4_4_));
        piVar1 = (int *)(lVar4 + 0xa0);
        iVar14 = *(int *)(lVar4 + 0xa4);
        local_78._4_4_ = auStack_64;
        local_78._0_4_ = local_68;
        uStack_70._0_4_ = auVar2._0_4_;
        uStack_70._4_4_ = auVar5._0_4_;
        if (*piVar1 == iVar14) {
          iVar15 = *piVar1 + 1;
          if (iVar14 == 0) {
            iVar14 = 8;
          }
          else {
            iVar14 = iVar14 / 2 + iVar14;
          }
          if (iVar15 < iVar14) {
            iVar15 = iVar14;
          }
          FUN_1804aec70(piVar1,iVar15);
        }
        puVar16 = (undefined8 *)(*(longlong *)(lVar4 + 0xa8) + (longlong)*piVar1 * 0x10);
        *puVar16 = local_78;
        puVar16[1] = uStack_70;
        *piVar1 = *piVar1 + 1;
        *(undefined1 (*) [8])(lVar4 + 0x60) = local_78;
        *(undefined8 *)(lVar4 + 0x68) = uStack_70;
        FUN_1804d9200(lVar4);
      }
      else {
        bVar10 = true;
      }
      auVar2 = *(undefined1 (*) [16])(DAT_180bb8ae8 + 0x1158);
      auVar5 = vshufps_avx(auVar2,auVar2,0xff);
      _local_78 = auVar2._0_12_;
      uStack_70._4_4_ = auVar5._0_4_ * *(float *)(DAT_180bb8ae8 + 0xc84);
      uVar13 = FUN_1804b1120(local_78);
      local_88 = 0;
      local_98 = param_4;
      local_90 = fVar17;
      FUN_1804de7c0(*(undefined8 *)(lVar3 + 0x2c8),&local_68,&uStack_60,uVar13);
      if (!bVar10) {
        lVar3 = *(longlong *)(lVar3 + 0x2c8);
        iVar14 = *(int *)(lVar3 + 0xa0);
        iVar15 = iVar14 + -1;
        *(int *)(lVar3 + 0xa0) = iVar15;
        if (iVar15 == 0) {
          puVar16 = (undefined8 *)(*(longlong *)(lVar3 + 0x38) + 0x3c);
        }
        else {
          puVar16 = (undefined8 *)((longlong)(iVar14 + -2) * 0x10 + *(longlong *)(lVar3 + 0xa8));
        }
        uVar9 = puVar16[1];
        *(undefined8 *)(lVar3 + 0x60) = *puVar16;
        *(undefined8 *)(lVar3 + 0x68) = uVar9;
        FUN_1804d9200();
      }
    }
    else {
      auVar2 = *(undefined1 (*) [16])(DAT_180bb8ae8 + 0x1158);
      auVar5 = vshufps_avx(auVar2,auVar2,0xff);
      _local_78 = auVar2._0_12_;
      uStack_70._4_4_ = auVar5._0_4_ * *(float *)(DAT_180bb8ae8 + 0xc84);
      uVar13 = FUN_1804b1120(local_78);
      local_88 = 0;
      local_98 = param_4;
      local_90 = fVar17;
      FUN_1804de7c0(*(undefined8 *)(lVar3 + 0x2c8),&local_68,&uStack_60,uVar13);
    }
  }
}



