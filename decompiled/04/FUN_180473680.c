// FUN_180473680 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180473680 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180473680(longlong param_1,uint param_2,float *param_3,float *param_4)

{
  float fVar1;
  uint uVar2;
  double dVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  int iVar8;
  ulonglong uVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [64];
  uint local_78;
  uint local_74;
  undefined4 local_70;
  undefined4 local_6c;
  longlong local_68;
  undefined8 local_60;
  undefined1 local_58 [40];
  
  if (param_2 < 0x900) {
    fVar10 = *param_3;
    fVar1 = *param_4;
    if (fVar10 < fVar1) {
      if (param_3[1] < param_4[1]) {
        lVar4 = (longlong)*(int *)(param_1 + 0xa0);
        lVar5 = *(longlong *)(param_1 + 0xa8);
        if ((((*(float *)(lVar5 + -0x10 + lVar4 * 0x10) <= fVar1) &&
             (fVar10 <= *(float *)(lVar5 + -8 + lVar4 * 0x10))) &&
            (*(float *)(lVar5 + -0xc + lVar4 * 0x10) <= param_4[1])) &&
           (param_3[1] <= *(float *)(lVar5 + -4 + lVar4 * 0x10))) {
          auVar13 = ZEXT464(0x3f800000);
          auVar11 = vmaxss_avx(ZEXT416((uint)(fVar1 - fVar10)),auVar13._0_16_);
          auVar11 = vmaxss_avx(ZEXT416((uint)((float)*(ushort *)
                                                      (&DAT_18077f8cc +
                                                      (longlong)(int)param_2 * 0x14) / auVar11._0_4_
                                             )),auVar13._0_16_);
          fVar10 = (float)FUN_180637ac0(auVar11._0_8_);
          auVar12 = auVar13._0_16_;
          auVar11 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(fVar10 + 0.15)),1);
          iVar8 = (int)auVar11._0_4_;
          if (iVar8 < 0) {
            iVar8 = 0;
          }
          else if (3 < iVar8) {
            iVar8 = 3;
          }
          local_78 = iVar8 + param_2 * 8;
          uVar9 = ((((ulonglong)(local_78 >> 8 & 0xff) ^
                    ((ulonglong)(local_78 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3) *
                    0x100000001b3 ^ (ulonglong)(local_78 >> 0x10 & 0xff)) * 0x100000001b3 ^
                  (ulonglong)(local_78 >> 0x18)) * 0x100000001b3 & DAT_180c62d00;
          lVar5 = *(longlong *)(DAT_180c62ce8 + 8 + uVar9 * 0x10);
          if (lVar5 == DAT_180c62cd8) {
LAB_180473814:
            lVar5 = 0;
          }
          else {
            uVar2 = *(uint *)(lVar5 + 0x10);
            while (local_78 != uVar2) {
              if (lVar5 == *(longlong *)(DAT_180c62ce8 + uVar9 * 0x10)) goto LAB_180473814;
              lVar5 = *(longlong *)(lVar5 + 8);
              uVar2 = *(uint *)(lVar5 + 0x10);
            }
          }
          lVar4 = DAT_180c62cd8;
          if (lVar5 != 0) {
            lVar4 = lVar5;
          }
          if (lVar4 == DAT_180c62cd8) {
            plVar7 = (longlong *)FUN_18017bf40(&local_70);
            if ((DAT_180bbecda != '\0') && (6.0 < (double)(*plVar7 - _DAT_180c62cc8) / 1000000.0)) {
              return;
            }
            DAT_180bbecda = '\x01';
            local_68 = FUN_180472e00(param_2,iVar8);
            local_60 = *(undefined8 *)(DAT_180bb8ae8 + 0x10);
            plVar6 = (longlong *)FUN_1804739b0(local_60,local_58,&local_78,&local_68);
            auVar12 = auVar13._0_16_;
            plVar7 = (longlong *)0x0;
            if (*(longlong *)(*plVar6 + 0x18) != 0) {
              plVar7 = (longlong *)(*plVar6 + 0x18);
            }
          }
          else {
            plVar7 = (longlong *)(lVar4 + 0x18);
            if (*plVar7 == 0) {
              plVar7 = (longlong *)0x0;
            }
          }
          if (plVar7 != (longlong *)0x0) {
            dVar3 = *(double *)(DAT_180bb8ae8 + 0x10) - (double)plVar7[1];
            auVar11._0_4_ = (float)dVar3 / 0.18;
            auVar11._4_4_ = (int)((ulonglong)dVar3 >> 0x20);
            auVar11._8_8_ = 0;
            local_70 = 0;
            if (0.0 <= auVar11._0_4_) {
              auVar11 = vminss_avx(auVar12,auVar11);
              fVar10 = auVar11._0_4_;
            }
            else {
              fVar10 = 0.0;
            }
            fVar10 = (2.0 - fVar10) * fVar10;
            if (0.0 <= fVar10) {
              auVar11 = vminss_avx(auVar12,ZEXT416((uint)fVar10));
              fVar10 = auVar11._0_4_;
            }
            else {
              fVar10 = 0.0;
            }
            local_68 = *plVar7;
            local_60 = 0;
            local_78 = auVar12._0_4_;
            local_74 = local_78;
            local_6c = local_70;
            FUN_1804e0320(param_1,&local_68,param_3,param_4,&local_70,&local_78,
                          (int)(longlong)(fVar10 * 255.0 + 0.5) << 0x18 | 0xffffff);
          }
        }
      }
    }
  }
  return;
}



