// FUN_1804ee250 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804ee250 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804ee250(longlong param_1)

{
  byte *pbVar1;
  short sVar2;
  int iVar3;
  undefined1 auVar4 [16];
  longlong lVar5;
  char cVar6;
  uint uVar7;
  float *pfVar8;
  int *piVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [64];
  undefined1 auVar21 [64];
  float fVar22;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  char local_a8;
  char local_a7 [7];
  float local_a0;
  float local_9c;
  float local_98;
  undefined4 local_94;
  ulonglong local_90;
  
  lVar5 = DAT_180bb8ae8;
  local_90 = DAT_1808d5f00 ^ (ulonglong)auStack_d8;
  if (*(short *)(param_1 + 0x78) == 0) {
    lVar11 = param_1 + 0x1b0;
  }
  else {
    lVar11 = *(longlong *)(param_1 + 0x1d0) + (longlong)(*(short *)(param_1 + 0x78) + -1) * 0x18;
  }
  fVar22 = (float)(int)(*(float *)(DAT_180bb8ae8 + 0x11f0) * 4.0);
  pfVar8 = (float *)(param_1 + 0xf8);
  if (*(short *)(param_1 + 0x22e) < 1) {
    pfVar8 = (float *)(param_1 + 0x118);
  }
  fVar19 = *(float *)(param_1 + 0xec) + *pfVar8;
  auVar21 = ZEXT464((uint)(fVar19 + *(float *)(lVar11 + 8)));
  iVar15 = 0;
  auVar4 = vmaxss_avx(ZEXT416(*(uint *)(param_1 + 0x100)),
                      ZEXT416((uint)((fVar19 + *(float *)(lVar11 + 4)) - *(float *)(param_1 + 0xec))
                             ));
  auVar20 = ZEXT1664(auVar4);
  if (0 < *(int *)(param_1 + 0x6c)) {
    lVar11 = 0;
    uVar14 = 1;
    uVar17 = 0xff7fffff;
    fVar18 = 0.06;
    do {
      if ((*(uint *)(*(longlong *)(param_1 + 0x48) + ((longlong)iVar15 >> 5) * 4) & uVar14) != 0) {
        lVar13 = *(longlong *)(param_1 + 0x18);
        sVar2 = *(short *)(lVar11 + *(longlong *)(param_1 + 0x28));
        lVar12 = (longlong)sVar2 * 0x78;
        if ((*(uint *)(lVar12 + lVar13) & 0x40000020) == 0) {
          uVar7 = *(uint *)(param_1 + 4) & 0x800;
          auVar4 = vpcmpeqd_avx(ZEXT416(uVar7),ZEXT416(0));
          auVar4 = vblendvps_avx(auVar21._0_16_,auVar20._0_16_,auVar4);
          if (((uVar7 == 0) || (*(char *)(param_1 + 0x243) != '\0')) &&
             ((*(char *)(lVar12 + 0x6d + lVar13) != '\0' || (*(short *)(param_1 + 0x218) == sVar2)))
             ) {
            if (*(short *)(param_1 + 0x78) == 0) {
              piVar9 = (int *)(param_1 + 0x1b0);
            }
            else {
              piVar9 = (int *)(*(longlong *)(param_1 + 0x1d0) +
                              (longlong)(*(short *)(param_1 + 0x78) + -1) * 0x18);
            }
            local_98 = *(float *)(lVar12 + 0xc + lVar13);
            local_a0 = local_98 - fVar22;
            iVar3 = *piVar9;
            local_98 = local_98 + fVar22;
            local_94 = auVar4._0_4_;
            local_9c = fVar19;
            FUN_1804c6190(&local_a0,sVar2 + iVar3 + 1,0,2);
            local_a7[0] = '\0';
            local_a8 = '\0';
            local_b8 = 0x40910;
            cVar6 = FUN_1804f4d40(&local_a0,sVar2 + iVar3 + 1,local_a7,&local_a8);
            lVar13 = DAT_180bb8ae8;
            if (((cVar6 == '\0') || (*(short *)(DAT_180bb8ae8 + 0xb4a) != 2)) ||
               (lVar10 = FUN_1804af210(DAT_180bb8ae8), *(char *)(lVar10 + 8) != '\0')) {
              if (local_a8 != '\0') {
                if (*(short *)(param_1 + 0x218) == -1) {
                  if (*(short *)(param_1 + 0x224) == -1) {
                    uVar16 = uVar17;
                  }
                  else {
                    uVar16 = *(undefined4 *)
                              ((longlong)*(short *)(param_1 + 0x224) * 0x78 + 0xc +
                              *(longlong *)(param_1 + 0x18));
                  }
                  *(undefined4 *)(param_1 + 0xe4) = uVar16;
                }
                *(undefined2 *)(param_1 + 0x7a) = *(undefined2 *)(param_1 + 0x78);
                *(short *)(param_1 + 0x216) = sVar2;
              }
            }
            else {
              lVar13 = *(longlong *)(param_1 + 0x18);
              if (*(char *)(lVar13 + 0x6a + lVar12) != '\0') {
                pbVar1 = (byte *)(lVar13 + 0x73 + lVar12);
                *pbVar1 = *pbVar1 & 0xf;
                pbVar1 = (byte *)(lVar13 + 0x73 + lVar12);
                *pbVar1 = *pbVar1 | 0x10;
                *(short *)(param_1 + 0x214) = sVar2;
              }
              FUN_1804b7870(0);
              local_a8 = '\0';
              lVar13 = DAT_180bb8ae8;
            }
            if (((local_a7[0] != '\0') && (fVar18 < *(float *)(lVar5 + 0x1544))) ||
               (local_a8 != '\0')) {
              *(short *)(param_1 + 0x210) = sVar2;
              *(undefined4 *)(lVar13 + 0x24d8) = 4;
            }
          }
        }
      }
      iVar15 = iVar15 + 1;
      uVar14 = uVar14 << 1 | (uint)((int)uVar14 < 0);
      lVar11 = lVar11 + 2;
    } while (iVar15 < *(int *)(param_1 + 0x6c));
  }
}



