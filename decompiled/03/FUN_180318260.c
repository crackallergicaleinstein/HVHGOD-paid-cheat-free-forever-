// FUN_180318260 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180318260 */

void FUN_180318260(longlong *param_1,ulonglong param_2)

{
  float fVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  bool bVar5;
  undefined1 auVar6 [16];
  int iVar7;
  ulonglong uVar8;
  byte bVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  undefined **ppuVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  double *pdVar21;
  double *pdVar22;
  double *pdVar23;
  char **ppcVar24;
  double *pdVar25;
  double *pdVar26;
  double *pdVar27;
  double *pdVar28;
  double *pdVar29;
  double *pdVar30;
  double *pdVar31;
  double *pdVar32;
  longlong lVar33;
  longlong lVar34;
  longlong lVar35;
  longlong lVar36;
  longlong lVar37;
  longlong lVar38;
  longlong lVar39;
  double *pdVar40;
  double *pdVar41;
  double *pdVar42;
  undefined4 uVar43;
  char *local_3f8;
  ulonglong uStack_3f0;
  longlong local_3e8;
  ulonglong *puStack_3e0;
  char local_3d8 [320];
  double local_298;
  double local_290;
  double local_288;
  double local_280;
  double local_278;
  double local_270;
  double local_268;
  double local_260;
  double local_258;
  double local_250;
  double local_248;
  char *local_240;
  double local_238;
  double local_230;
  double local_228 [2];
  longlong local_218;
  ulonglong *puStack_210;
  undefined1 local_208 [16];
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  ulonglong local_1e8 [56];
  
  param_2 = param_2 & 0xff;
  iVar4 = *(int *)(*param_1 + 0x28);
  lVar17 = *(longlong *)param_1[1];
  if (((lVar17 < 0) || (lVar17 < DAT_1808e3d10)) || (0x1f < lVar17 - DAT_1808e3d10)) {
    DAT_180bda17c = 0;
    DAT_1808e3d10 = lVar17;
  }
  else {
  }
  iVar7 = DAT_180bda17c;
  cVar2 = *(char *)param_1[2];
  lVar17 = *param_1;
  cVar3 = *(char *)(lVar17 + 2);
  iVar13 = (int)param_2;
  if ((((*(char *)param_1[3] == '\0') || (lVar16 = *(longlong *)param_1[1], lVar16 < 0)) ||
      ((uVar10 = (uint)(lVar16 >> 0x3f) & 0x1f, ((int)lVar16 + uVar10 & 0x1f) != uVar10 ||
       (lVar16 == *(longlong *)(lVar17 + 0x248))))) ||
     ((4 < (byte)(cVar3 - 1U) && ((iVar13 - 0x23U & 0xfd) != 0)))) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  *(int *)(lVar17 + 0x138) = iVar13;
  *(undefined4 *)(*param_1 + 0x1c8) = *(undefined4 *)param_1[4];
  *(undefined8 *)(*param_1 + 0x1d0) = *(undefined8 *)param_1[5];
  *(undefined4 *)(*param_1 + 0x198) = *(undefined4 *)param_1[6];
  *(undefined1 *)(*param_1 + 0x19c) = *(undefined1 *)param_1[7];
  ((undefined1 *)*param_1)[0x134] = *(undefined1 *)*param_1;
  *(uint *)(*param_1 + 0x130) = (uint)*(byte *)(*param_1 + 2);
  if ((((iVar13 != iVar4) && (iVar7 < 6)) || (cVar2 != cVar3)) || (bVar5)) {
    *(int *)(*param_1 + 0x28) = iVar13;
    *(undefined8 *)(*param_1 + 0x30) = *(undefined8 *)param_1[1];
    *(undefined8 *)(*param_1 + 0x248) = *(undefined8 *)param_1[1];
    DAT_180bda17c = DAT_180bda17c + 1;
    if (0x26 < param_2) {
      param_2 = 0x26;
    }
    ppuVar15 = &PTR_DAT_180803050 + param_2 * 2;
    lVar16 = param_1[0xb];
    local_298 = (double)*(float *)(lVar16 + 0x54);
    local_290 = (double)*(float *)(lVar16 + 0x70);
    local_288 = (double)*(float *)(lVar16 + 0x6c);
    lVar17 = *param_1;
    lVar36 = param_1[0x15];
    lVar35 = param_1[0x14];
    lVar34 = param_1[0x13];
    lVar33 = param_1[7];
    local_280 = (double)*(float *)param_1[6];
    local_278 = (double)*(float *)param_1[0x12];
    local_270 = (double)*(float *)param_1[0x11];
    local_268 = (double)*(float *)param_1[0x10];
    local_260 = (double)*(float *)param_1[0xf];
    local_258 = (double)*(float *)param_1[0xe];
    local_250 = (double)*(float *)param_1[0xd];
    local_248 = (double)*(float *)param_1[0xc];
    local_240 = "(model)";
    if (*(char *)(lVar17 + 0x5c) == '\0') {
      fVar1 = *(float *)(lVar16 + 0x78) -
              *(float *)(lVar16 + 0x54) * *(float *)(lVar16 + 0x50) *
              (1.0 - *(float *)(lVar16 + 0x6c));
    }
    else {
      local_240 = "(learned)";
      fVar1 = *(float *)(lVar17 + 0x60);
    }
    local_238 = (double)fVar1;
    local_230 = (double)*(float *)param_1[10];
    local_228[0] = (double)*(float *)param_1[9];
    lVar20 = param_1[8];
    lVar19 = param_1[4];
    local_218 = param_1[5];
    local_3f8 = (char *)FUN_18030e660(*(undefined1 *)(lVar17 + 2));
    local_3e8 = param_1[1];
    local_1e8[0] = 0xdb35e39b27e1c185;
    local_1e8[1] = 0xa05181ee77d57a06;
    local_1e8[2] = 0x929654b1461b7377;
    local_1e8[3] = 0xa5cea54bfef7110;
    local_1e8[4] = 0xa70c9f7f916b7e19;
    local_1e8[5] = 0x2b2d6d82aa402c0a;
    local_1e8[6] = 0xc064ed9510bc010b;
    local_1e8[7] = 0xfec09918395f26c4;
    local_1e8[8] = 0x835e2313e2c48f8d;
    local_1e8[9] = 0xf863c3261a551f0e;
    local_1e8[10] = 0x56a0bc092c25563f;
    local_1e8[0xb] = 0x67ff882c0a9bdf38;
    local_1e8[0xc] = 0xe9fbbd57d9292e61;
    local_1e8[0xd] = 0x24c1d5fafa9ec992;
    local_1e8[0xe] = 0xe0a313cd38802513;
    local_1e8[0xf] = 0x3a86d390ee208d6c;
    local_1e8[0x10] = 0x95484dcb29dcfd95;
    local_1e8[0x11] = 0xc5f2049e64fab916;
    local_1e8[0x12] = 0x99be47e160dada07;
    local_1e8[0x13] = 0x1047a904a2394520;
    local_1e8[0x14] = 0x9a6f01af4f2ca929;
    local_1e8[0x15] = 0x91e97532caa6fc1a;
    local_1e8[0x16] = 0x4f948c455ded471b;
    local_1e8[0x17] = 0xb10776480ca86bd4;
    local_1e8[0x18] = 0x35a5004309b1b61d;
    local_1e8[0x19] = 0x5b5a30d674a48d9e;
    local_1e8[0x1a] = 0xa73d3b392572a64f;
    local_1e8[0x1b] = 0x8edd3f5c2400c2c8;
    local_1e8[0x1c] = 0xefe67c07e4e44b71;
    local_1e8[0x1d] = 0xf3b0b42a9dc4e322;
    local_1e8[0x1e] = 0x617eb6fd00a53ba3;
    local_1e8[0x1f] = 0x2de935c0128ee4fc;
    local_1e8[0x20] = 0x478f2afbac69aaa5;
    local_1e8[0x21] = 0xcbdcc34e14e75ba6;
    local_1e8[0x22] = 0xfcb4b591bb2a4897;
    local_1e8[0x23] = 0xed8a82b4c2a70f30;
    local_1e8[0x24] = 0xfd656f5fa97c17b9;
    local_1e8[0x25] = 0x4883c462eb7a3faa;
    local_1e8[0x26] = 0x1db6975e079f42b;
    uVar43 = 0x8f878478;
    local_1e8[0x27] = 0x8f8784786e324e64;
    builtin_strncpy(local_3d8,
                    "[pixelsurf] cmd={} state={} reason={} ({}) path={} eta={} ride={}/{} speed={:.1f} vz={:.3f} ref={:.3f}{} gap={:.4f} nz={:.3f} align={:.1f} plan_yaw={:.3f} margin={:.3f} model_err={:.3f} engine_err={:.3f} final_yaw={:.3f} wish={} refine={} cuts={} duck={} traces={} engine={} hit={} cal={}/{:.3f}/{:.3f}/{:.2f}\n"
                    ,0x137);
    local_3d8[0x137] = '\0';
    local_3d8[0x138] = '\0';
    local_3d8[0x139] = '\0';
    local_3d8[0x13a] = '\0';
    local_3d8[0x13b] = '\0';
    local_3d8[0x13c] = '\0';
    local_3d8[0x13d] = '\0';
    local_3d8[0x13e] = '\0';
    local_3d8[0x13f] = '\0';
    uVar8 = 0xffffffffffffffff;
    do {
      uVar11 = uVar8 + 1;
      lVar39 = uVar8 + 1;
      uVar8 = uVar11;
    } while (local_3d8[lVar39] != '\0');
    if (DAT_180bbeabc != '\0') {
      lVar39 = lVar17 + 0x68;
      lVar38 = lVar17 + 3;
      lVar37 = lVar16 + 0x98;
      lVar16 = lVar16 + 0x94;
      lVar17 = lVar17 + 8;
      pdVar42 = &local_298;
      pdVar41 = &local_290;
      pdVar40 = &local_288;
      pdVar32 = &local_280;
      pdVar31 = &local_278;
      pdVar30 = &local_270;
      pdVar29 = &local_268;
      pdVar28 = &local_260;
      pdVar27 = &local_258;
      pdVar26 = &local_250;
      pdVar25 = &local_248;
      ppcVar24 = &local_240;
      pdVar23 = &local_238;
      pdVar22 = &local_230;
      pdVar21 = local_228;
      ppuVar15 = ppuVar15 + 1;
      lVar18 = local_218;
      FUN_1803375f0(local_1e8,local_3e8);
      local_3e8 = 0x1f;
      puStack_3e0 = local_1e8;
      local_3f8 = local_3d8;
      local_1f8 = 0;
      uStack_1f0 = 0xf;
      local_208._1_15_ = SUB1615((undefined1  [16])0x0,1);
      auVar6[0xf] = 0;
      auVar6._0_15_ = local_208._1_15_;
      local_208 = auVar6 << 8;
      uVar8 = 0;
      uVar14 = 0;
      do {
        bVar9 = (byte)(local_1e8[uVar14] >> 0x3c);
        if (bVar9 == 0xc) {
          uVar8 = uVar8 + *(longlong *)
                           ((longlong)local_1e8 + (local_1e8[uVar14] & 0xfffffffffffffff) + 0x100);
        }
        else if (bVar9 == 0xb) {
          uVar8 = uVar8 + 0x20;
        }
        else {
          uVar8 = uVar8 + 8;
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 < 0x1f);
      lVar12 = uVar11 + uVar8;
      if (CARRY8(uVar11,uVar8)) {
        lVar12 = -1;
      }
      uStack_3f0 = uVar11;
      FUN_1800f5540(local_208,lVar12,uVar14,0xfffffffffffffff,ppuVar15,lVar18,lVar19,lVar17,lVar20,
                    pdVar21,pdVar22,pdVar23,ppcVar24,pdVar25,pdVar26,pdVar27,pdVar28,pdVar29,pdVar30
                    ,pdVar31,pdVar32,lVar33,lVar34,lVar35,lVar36,lVar16,lVar37,lVar38,lVar39,pdVar40
                    ,pdVar41,pdVar42,CONCAT44(uVar43,1));
      local_218 = local_3e8;
      puStack_210 = puStack_3e0;
      FUN_1801da050(&local_3e8,local_208,&local_3f8,&local_218,0);
      FUN_18030e280(local_208);
      FUN_18015c010(local_208);
    }
  }
  else {
    *(int *)(*param_1 + 0x28) = iVar13;
  }
  return;
}



