// FUN_1803703c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803703c0 */

void FUN_1803703c0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  uint uVar3;
  bool bVar4;
  undefined4 uVar5;
  char cVar6;
  undefined1 uVar7;
  short sVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  float *pfVar13;
  longlong lVar14;
  float *pfVar15;
  undefined1 auVar16 [64];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [64];
  undefined8 local_e8;
  ulonglong uStack_e0;
  undefined4 local_d8;
  uint uStack_d4;
  float local_d0 [6];
  longlong local_b8;
  longlong lStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  
  lVar9 = FUN_180370680();
  uVar3 = *(uint *)(lVar9 + 0x180);
  uVar10 = (ulonglong)uVar3;
  *(uint *)(lVar9 + 0x180) = uVar3 + 1;
  if (uVar3 < 0x10) {
    local_e8 = 0;
    uStack_e0 = 0;
    local_d8 = 0;
    uStack_d4 = uStack_d4 & 0xffffff00;
    puVar1 = (undefined8 *)(lVar9 + uVar10 * 0x18);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(ulonglong *)(lVar9 + 0x10 + uVar10 * 0x18) = (ulonglong)uStack_d4 << 0x20;
    if ((param_2 != 0) && (DAT_180cc8ef0 != '\0')) {
      lVar14 = param_2 + 0xe4;
      lVar11 = FUN_18017ea70();
      *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + 1;
      if (lVar14 == 0) {
        bVar4 = false;
      }
      else {
        local_e8 = 0;
        uStack_e0 = uStack_e0 & 0xffffffff00000000;
        cVar6 = FUN_1804514f0(&local_e8,lVar14,0xc);
        if (cVar6 == '\0') {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
      }
      uVar5 = (undefined4)uStack_e0;
      lVar11 = local_e8;
      lVar12 = FUN_18017ea70();
      if (*(int *)(lVar12 + 4) != 0) {
        *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + -1;
      }
      if (bVar4) {
        auVar16 = ZEXT464(DAT_180cc8f5c);
        fVar17 = 4.0;
        fVar19 = (float)DAT_180cc8f58 / 255.0;
        fVar20 = (float)DAT_180cc8f59 / 255.0;
        fVar18 = 0.0;
        auVar21 = ZEXT1664(CONCAT124(SUB1612(ZEXT816(0),4),(float)DAT_180cc8f5a / 255.0));
        local_d0[4] = 4.0;
        local_d0[0] = 0.0;
        local_d0[2] = (float)DAT_180cc8f5c;
        sVar8 = thunk_FUN_180624430(DAT_180cc8f5c);
        if (sVar8 < 1) {
          pfVar15 = local_d0;
          if (fVar18 <= auVar16._0_4_) {
            pfVar15 = local_d0 + 2;
          }
          pfVar13 = local_d0 + 4;
          if (auVar16._0_4_ <= fVar17) {
            pfVar13 = pfVar15;
          }
          fVar17 = *pfVar13;
        }
        else {
          fVar17 = 0.85;
        }
        local_a8 = uVar5;
        uStack_e0 = CONCAT44(uStack_e0._4_4_,auVar21._0_4_ * fVar17);
        local_e8 = CONCAT44(fVar20 * fVar17,fVar19 * fVar17);
        local_b8 = param_2;
        lStack_b0 = lVar11;
        if (lVar14 == 0) {
          uVar7 = 0;
        }
        else {
          lVar11 = FUN_18017ea70();
          *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + 1;
          uVar7 = FUN_18022ffa0(lVar14,&local_e8);
          lVar14 = FUN_18017ea70();
          if (*(int *)(lVar14 + 4) != 0) {
            *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + -1;
          }
        }
        uStack_a4 = CONCAT31(uStack_a4._1_3_,uVar7);
        plVar2 = (longlong *)(lVar9 + uVar10 * 0x18);
        *plVar2 = local_b8;
        plVar2[1] = lStack_b0;
        *(ulonglong *)(lVar9 + 0x10 + uVar10 * 0x18) = CONCAT44(uStack_a4,local_a8);
      }
    }
  }
  return;
}



