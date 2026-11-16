// FUN_18047b700 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18047b700 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18047b700(undefined8 *param_1,byte param_2,float param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ushort uVar1;
  int iVar2;
  longlong *plVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  ushort uVar6;
  char *pcVar7;
  ushort *puVar8;
  longlong lVar9;
  char cVar10;
  uint uVar11;
  uint uVar12;
  undefined8 *****pppppuVar13;
  float fVar14;
  undefined1 auVar15 [64];
  undefined1 auVar16 [64];
  undefined1 auVar17 [64];
  undefined8 uVar18;
  undefined1 auVar19 [64];
  float fVar20;
  undefined1 auStack_178 [32];
  float *local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined4 local_128;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  char *local_f8;
  longlong local_f0;
  byte local_e8 [8];
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  undefined8 *****local_c0 [3];
  ulonglong local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_1808d5f00 ^ (ulonglong)auStack_178;
  fVar14 = param_3;
  if (param_2 != 0) {
    fVar14 = 7.00649e-45;
  }
  local_110 = param_4;
  FUN_1804c2920(fVar14);
  plVar3 = *(longlong **)(DAT_180bb8ae8 + 0x14d0);
  uVar11 = ~*(uint *)(plVar3[0x22] + -4 + (longlong)(int)plVar3[0x21] * 4);
  pcVar7 = "##attachment";
  cVar10 = '#';
  uVar12 = uVar11;
  do {
    pcVar7 = pcVar7 + 1;
    if (((cVar10 == '#') && (*pcVar7 == '#')) && (pcVar7[1] == '#')) {
      pcVar7 = pcVar7 + 2;
      uVar12 = uVar11;
    }
    else {
      uVar12 = crc32(uVar12,cVar10);
    }
    cVar10 = *pcVar7;
  } while (cVar10 != '\0');
  uVar12 = ~uVar12;
  if (*(uint *)(*plVar3 + 0x1534) == uVar12) {
    FUN_1804cf810(uVar12,0xb,"##attachment");
  }
  local_158 = (float *)CONCAT71(local_158._1_7_,1);
  puVar8 = (ushort *)FUN_1804aad60(&local_e0,uVar12,&local_110,&param_5);
  uVar1 = *puVar8;
  uVar6 = puVar8[1];
  auVar16 = ZEXT864(0);
  auVar17 = ZEXT464(0x3f000000);
  auVar19 = ZEXT464(0x3f800000);
  if (((*(char *)*param_1 == '\0') || (*(int *)(param_1[1] + 0x50) != param_2 + 1)) ||
     ((param_2 == 0 &&
      ((DAT_180cd6778 == 0 ||
       (fVar14 = (float)(**(code **)(*(longlong *)DAT_180cd6778 + 0x10))(), fVar14 != param_3))))))
  {
    uVar11 = 0;
    auVar4 = vpcmpeqd_avx(ZEXT416(uVar1 & 0xff),SUB6416(ZEXT464(0),0));
    auVar4 = vblendvps_avx(auVar17._0_16_,auVar16._0_16_,auVar4);
    uVar18 = auVar4._0_8_;
  }
  else {
    uVar11 = 1;
    uVar18 = auVar19._0_8_;
  }
  fVar14 = (float)FUN_1804aaa10(uVar12 + 1,uVar18,0x41900000);
  fVar20 = 255.0;
  fVar14 = ((float)(DAT_180b0a458 >> 0x18) / 255.0) * fVar14 * 0.1;
  if (auVar16._0_4_ <= fVar14) {
    auVar4 = vminss_avx(auVar19._0_16_,ZEXT416((uint)fVar14));
    fVar14 = auVar4._0_4_;
  }
  else {
    fVar14 = 0.0;
  }
  local_150 = (undefined8 *****)((ulonglong)local_150._4_4_ << 0x20);
  local_158 = (float *)CONCAT44(local_158._4_4_,DAT_180b0a41c * 4.0);
  FUN_1804df870(*(undefined8 *)param_1[2],&local_110,&param_5,
                (int)(longlong)(fVar14 * 255.0 + auVar17._0_4_) << 0x18 | DAT_180b0a458 & 0xffffff);
  local_d8 = ((float)local_110 + (float)param_5) * auVar17._0_4_;
  local_d4 = (local_110._4_4_ + param_5._4_4_) * auVar17._0_4_;
  local_d0 = auVar16._0_4_;
  local_cc = local_d0;
  if (DAT_180cd6978 != 0) {
    local_118 = (undefined8 ****)&local_cc;
    local_108 = &local_d0;
    local_158 = (float *)&local_118;
    local_e8[0] = param_2;
    local_e0 = param_3;
    lVar9 = (**(code **)(*(longlong *)DAT_180cd6978 + 0x10))
                      (DAT_180cd6978,local_e8,&local_e0,&local_108);
    if (((lVar9 != 0) && (fVar14 = auVar16._0_4_, fVar14 < local_d0)) && (fVar14 < local_cc)) {
      auVar4 = vminss_avx(ZEXT416((uint)((((float)param_5 - (float)local_110) - DAT_180b0a41c * 4.0)
                                        / local_d0)),
                          ZEXT416((uint)(((param_5._4_4_ - local_110._4_4_) - DAT_180b0a41c * 4.0) /
                                        local_cc)));
      local_e0 = auVar4._0_4_ * local_d0 * auVar17._0_4_;
      local_dc = auVar4._0_4_ * local_cc * auVar17._0_4_;
      local_118 = (undefined8 ****)CONCAT44(auVar19._0_4_,auVar19._0_4_);
      local_108 = (float *)CONCAT44(fVar14,fVar14);
      local_c8 = local_e0 + local_d8;
      local_c4 = local_dc + local_d4;
      local_e0 = local_d8 - local_e0;
      local_dc = local_d4 - local_dc;
      local_f8 = (char *)0x0;
      local_148 = CONCAT44(local_148._4_4_,0xffffffff);
      local_150 = (undefined8 *****)&local_118;
      local_158 = (float *)&local_108;
      local_f0 = lVar9;
      FUN_1804e0320(*(undefined8 *)param_1[2],&local_f8,&local_e0,&local_c8);
      goto LAB_18047bc8a;
    }
  }
  if (param_2 == 0) {
    auVar5 = vminss_avx(ZEXT416((uint)((float)param_5 - (float)local_110)),
                        ZEXT416((uint)(param_5._4_4_ - local_110._4_4_)));
    auVar4 = vpcmpeqd_avx(ZEXT416(uVar11),SUB6416(ZEXT464(0),0));
    auVar4 = vblendvps_avx(SUB6416(ZEXT464(0x3f4ccccd),0),SUB6416(ZEXT464(0x3e800000),0),auVar4);
    fVar14 = auVar4._0_4_ * ((float)(DAT_1808da474 >> 0x18) / fVar20);
    if (auVar16._0_4_ <= fVar14) {
      auVar4 = vminss_avx(auVar19._0_16_,ZEXT416((uint)fVar14));
      fVar14 = auVar4._0_4_;
    }
    else {
      fVar14 = 0.0;
    }
    local_150 = (undefined8 *****)CONCAT44(local_150._4_4_,DAT_180b0a41c);
    local_158._0_4_ = 0x20;
    FUN_1804dff40(*(undefined8 *)param_1[2],&local_d8,auVar5._0_4_ * 0.36,
                  (int)(longlong)(fVar14 * fVar20 + auVar17._0_4_) << 0x18 |
                  DAT_1808da474 & 0xffffff);
    FUN_18015bea0(local_c0,(int)param_3 + 1);
    uVar12 = DAT_1808da474;
    pppppuVar13 = local_c0;
    if (0xf < local_a8) {
      pppppuVar13 = local_c0[0];
    }
    auVar15 = ZEXT464(0x41000000);
    auVar4 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 8.0 + auVar17._0_4_)),1);
    auVar4 = vmaxss_avx(auVar19._0_16_,auVar4);
    local_128 = 0;
    local_138 = 0;
    local_140 = 0;
    local_148 = 0;
    local_158._0_4_ = auVar16._0_4_;
    local_150 = pppppuVar13;
    FUN_1804ea040(&local_118,*(undefined8 *)param_1[3],auVar4._0_8_,0x7f7fffff);
    local_118 = (undefined8 ****)
                CONCAT44(local_118._4_4_,local_d8 - auVar17._0_4_ * (float)local_118);
    fVar14 = (float)FUN_180463350(*(undefined8 *)param_1[3],auVar15._0_8_);
    local_118 = (undefined8 ****)CONCAT44(local_d4 - fVar14 * auVar17._0_4_,(float)local_118);
    local_148 = 0;
    local_158 = (float *)CONCAT44(local_158._4_4_,uVar12);
    local_150 = pppppuVar13;
    FUN_180463450(*(undefined8 *)param_1[2],*(undefined8 *)param_1[3],auVar15._0_8_,&local_118);
    FUN_18015c010(local_c0);
  }
  else {
    local_158 = (float *)CONCAT44(local_158._4_4_,0x41400000);
    FUN_180463dc0(*(undefined8 *)param_1[2],&local_d8,DAT_1808da474,&DAT_180829dbc);
  }
LAB_18047bc8a:
  if ((char)uVar6 != '\0') {
    plVar3 = (longlong *)param_1[4];
    *(undefined1 *)(*plVar3 + 0xfc) = 0;
    fVar14 = (float)(param_2 + 1);
    local_108 = (float *)CONCAT44(local_108._4_4_,*(undefined4 *)plVar3[2]);
    local_118 = (undefined8 ****)CONCAT44(local_118._4_4_,*(undefined4 *)plVar3[1]);
    local_c8 = fVar14;
    if (DAT_180cd6938 == 0) {
      local_e0 = param_3;
                    /* WARNING: Subroutine does not return */
      FUN_1805fa874();
    }
    local_158 = &local_e0;
    local_e0 = param_3;
    (**(code **)(*(longlong *)DAT_180cd6938 + 0x10))(DAT_180cd6938,&local_118,&local_108,&local_c8);
    *(float *)(*plVar3 + 0x50) = fVar14;
    *(undefined4 *)(*plVar3 + 0xf8) = 0;
    *(undefined1 *)(*plVar3 + 0xb8) = 0;
  }
  if (DAT_180cd6f38 != 0) {
    local_f8 = "Sticker Placement";
    if (param_2 != 0) {
      local_f8 = "Charm Placement";
    }
    (**(code **)(*(longlong *)DAT_180cd6f38 + 0x10))(DAT_180cd6f38,&local_f8,&local_110,&param_5);
  }
  iVar2 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
  if (iVar2 < 2) {
    FUN_1804c5a40("Calling PopID() too many times!");
  }
  else {
    *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar2 + -1;
  }
}



