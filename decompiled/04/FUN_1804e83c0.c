// FUN_1804e83c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804e83c0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804e83c0(longlong param_1,ushort param_2,float *param_3)

{
  ushort *puVar1;
  ushort uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  float *pfVar7;
  char cVar8;
  uint uVar9;
  longlong lVar10;
  ushort *puVar11;
  ushort uVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_e8 [32];
  uint local_c8;
  longlong *local_c0;
  float *local_b8;
  ushort local_a8;
  uint local_a4;
  longlong local_a0;
  float *local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80 [5];
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = DAT_1808d5f00 ^ (ulonglong)auStack_e8;
  lVar3 = *(longlong *)(param_1 + 0x58);
  uVar13 = (ulonglong)param_2;
  lVar4 = *(longlong *)(lVar3 + 8);
  local_a8 = param_2;
  local_98 = param_3;
  if ((*(char *)(lVar4 + 0x50) == '\0') && ((*(byte *)(lVar3 + 0x10) & 4) == 0)) {
    uVar15 = 0xffffffff;
    local_a4 = 0xffffffff;
    uVar12 = param_2;
    if (*(int *)(lVar3 + 0x38) != 0) {
      uVar9 = FUN_1804b13e0(lVar3 + 0x38,uVar13,uVar13);
      uVar12 = (ushort)uVar9;
      if ((int)uVar9 < 0) {
        uVar12 = 0xffff;
        local_a4 = uVar9 & 0xffff;
        uVar15 = uVar9 >> 0x10 & 0xff;
      }
    }
    if (((param_2 != *(ushort *)(lVar3 + 0x30)) || (*(char *)(lVar3 + 0x35) == '\0')) ||
       (lVar10 = FUN_1804e5d40(lVar4,param_1), lVar10 == 0)) {
      local_a0 = *(longlong *)(param_1 + 0x60);
      uVar9 = 0;
      if (0 < *(int *)(lVar3 + 0x20)) {
        local_88 = (longlong)(int)uVar15;
        lVar10 = 0;
        do {
          lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0x28) + lVar10 * 8);
          lVar14 = *(longlong *)(lVar5 + 0x88);
          if (lVar14 == 0) {
            lVar14 = *(longlong *)(lVar4 + 0xa8);
          }
          local_90 = *(longlong *)(lVar14 + 0x50) + local_a0;
          if (uVar12 == 0xffff) {
            if (lVar10 == local_88) {
              uVar15 = local_a4;
              goto LAB_1804e852c;
            }
LAB_1804e85fb:
            uVar2 = local_a8;
          }
          else {
            puVar11 = *(ushort **)(lVar5 + 0x48);
            if (puVar11 != (ushort *)0x0) {
              uVar2 = *puVar11;
              while (uVar2 != 0) {
                if ((uVar2 <= uVar12) && (uVar12 <= puVar11[1])) goto LAB_1804e85fb;
                puVar1 = puVar11 + 2;
                puVar11 = puVar11 + 2;
                uVar2 = *puVar1;
              }
            }
            uVar15 = (**(code **)(lVar14 + 0x28))(lVar4,lVar5,uVar12);
LAB_1804e852c:
            pfVar7 = local_98;
            uVar2 = local_a8;
            if (uVar15 == 0) goto LAB_1804e85fb;
            local_c8 = uVar15;
            if (local_98 != (float *)0x0) {
              local_b8 = local_98;
              local_c0 = (longlong *)0x0;
              cVar8 = (**(code **)(lVar14 + 0x48))(lVar4,lVar5,param_1);
              if (cVar8 != '\0') {
                fVar17 = *(float *)(**(longlong **)(*(longlong *)(param_1 + 0x58) + 0x28) + 0x3c);
                if (fVar17 == 0.0) {
                  fVar17 = 1.0;
                }
                else {
                  fVar17 = *(float *)(param_1 + 0x14) / fVar17;
                }
                fVar16 = fVar17 * *(float *)(lVar5 + 0x58);
                if (fVar16 <= *pfVar7) {
                  auVar6 = vminss_avx(ZEXT416((uint)(fVar17 * *(float *)(lVar5 + 0x5c))),
                                      ZEXT416((uint)*pfVar7));
                  fVar16 = auVar6._0_4_;
                }
                if (*(char *)(lVar5 + 0x36) != '\0') {
                  fVar16 = (float)(int)(fVar16 + 0.5);
                }
                uVar13 = (ulonglong)local_a8;
                fVar16 = fVar16 + *(float *)(lVar5 + 0x60);
                FUN_1804e82b0(param_1,local_a8 + 1);
                *(float *)(*(longlong *)(param_1 + 8) + uVar13 * 4) = fVar16;
              }
              goto LAB_1804e85fb;
            }
            local_b8 = (float *)0x0;
            local_58 = 0xffffffff;
            local_c0 = local_80;
            local_80[0] = (ulonglong)local_a8 << 6;
            local_80[1] = 0;
            local_80[2] = 0;
            local_80[3] = 0;
            local_80[4] = 0;
            cVar8 = (**(code **)(lVar14 + 0x48))(lVar4,lVar5,param_1);
            if (cVar8 != '\0') {
              local_80[0] = CONCAT44(local_80[0]._4_4_,
                                     (uVar9 & 0xf) << 2 | (uint)local_80[0] & 0xffffffc3);
              FUN_1804e91d0(lVar4,param_1,lVar5,local_80);
            }
          }
          uVar13 = (ulonglong)uVar2;
          uVar9 = uVar9 + 1;
          lVar10 = lVar10 + 1;
          local_a0 = local_90;
        } while ((int)uVar9 < *(int *)(lVar3 + 0x20));
      }
      if ((*(uint *)(param_1 + 0x4c) & 0x8000000) == 0) {
        if (*(int *)(param_1 + 0x40) == -1) {
          FUN_1804e5f90(param_1);
        }
        FUN_1804e82b0(param_1,(int)uVar13 + 1);
        *(undefined4 *)(*(longlong *)(param_1 + 8) + uVar13 * 4) = *(undefined4 *)(param_1 + 0x10);
        *(undefined2 *)(*(longlong *)(param_1 + 0x28) + uVar13 * 2) = 0xfffe;
      }
    }
  }
  else if ((*(int *)(param_1 + 0x40) == -1) && ((*(uint *)(param_1 + 0x4c) & 0x8000000) == 0)) {
    FUN_1804e5f90();
  }
}



