// FUN_1802ccf00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802ccf00 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1802ccf00(void)

{
  undefined1 (*pauVar1) [16];
  int *piVar2;
  ulonglong uVar3;
  double dVar4;
  bool bVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  char cVar9;
  short sVar10;
  int iVar11;
  undefined1 (**ppauVar12) [16];
  undefined1 (***pppauVar13) [16];
  ULONGLONG UVar14;
  ulonglong *puVar15;
  ulonglong uVar16;
  byte bVar17;
  undefined8 *puVar18;
  longlong lVar19;
  undefined1 (*pauVar20) [16];
  ulonglong uVar21;
  undefined8 *puVar22;
  longlong lVar23;
  longlong lVar24;
  undefined8 uVar25;
  undefined1 auStack_308 [32];
  ulonglong local_2e8;
  double local_2e0;
  double local_2d8;
  double local_2d0;
  double local_2c8;
  double local_2c0;
  ulonglong local_2b8;
  ulonglong local_2b0;
  ulonglong local_2a8;
  undefined8 local_298;
  undefined1 (*local_288) [16];
  undefined1 (***local_280) [16];
  undefined1 (*local_278 [2]) [16];
  undefined1 local_268 [16];
  undefined1 local_258 [16];
  undefined1 (**local_248 [2]) [16];
  undefined1 local_238 [96];
  undefined1 local_1d8 [24];
  undefined1 local_1c0 [24];
  undefined1 local_1a8 [24];
  undefined1 local_190 [328];
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_308;
  local_258 = ZEXT816(0x1807d4018);
  FUN_18017bf40(local_258 + 8);
  lVar19 = DAT_180bb8958;
  if (DAT_180bb8958 == 0) {
    bVar5 = false;
    ppauVar12 = (undefined1 (**) [16])local_268._0_8_;
  }
  else {
    local_298 = (undefined1 (**) [16])0x0;
    lVar24 = FUN_18017ea70();
    *(int *)(lVar24 + 4) = *(int *)(lVar24 + 4) + 1;
    cVar9 = FUN_1804514c0(&local_298,lVar19,8);
    if (cVar9 == '\0') {
      bVar5 = false;
      lVar19 = FUN_18017ea70();
      if (*(int *)(lVar19 + 4) != 0) {
        *(int *)(lVar19 + 4) = *(int *)(lVar19 + 4) + -1;
      }
      ppauVar12 = (undefined1 (**) [16])local_268._0_8_;
    }
    else {
      bVar5 = true;
      lVar19 = FUN_18017ea70();
      if (*(int *)(lVar19 + 4) != 0) {
        *(int *)(lVar19 + 4) = *(int *)(lVar19 + 4) + -1;
      }
      ppauVar12 = local_298;
    }
  }
  if (!bVar5) {
    ppauVar12 = (undefined1 (**) [16])0x0;
  }
  if (ppauVar12 == (undefined1 (**) [16])0x0) {
    local_248[0]._0_5_ = (uint5)(uint)local_248[0];
  }
  else if (ppauVar12 + 6 == (undefined1 (**) [16])0x0) {
    local_298._0_5_ = (uint5)(uint)local_298;
    local_248[0] = local_298;
  }
  else {
    local_298 = (undefined1 (**) [16])((ulonglong)local_298 & 0xffffffff00000000);
    lVar19 = FUN_18017ea70();
    *(int *)(lVar19 + 4) = *(int *)(lVar19 + 4) + 1;
    cVar9 = FUN_1804514c0(&local_298,ppauVar12 + 6,4);
    if (cVar9 == '\0') {
      local_298._0_5_ = (uint5)(uint)local_298;
    }
    else {
      local_298._0_5_ = CONCAT14(1,(uint)local_298);
    }
    lVar19 = FUN_18017ea70();
    if (*(int *)(lVar19 + 4) != 0) {
      *(int *)(lVar19 + 4) = *(int *)(lVar19 + 4) + -1;
    }
    local_248[0] = local_298;
  }
  if (((((char)((ulonglong)local_248[0] >> 0x20) == '\0') ||
       (sVar10 = thunk_FUN_180624430((ulonglong)local_248[0] & 0xffffffff), 0 < sVar10)) ||
      (DAT_180b8e2b0 == '\0')) ||
     (((DAT_180b0c6c8 == '\0' && (DAT_180b0c5c0 == '\0')) && (DAT_180b0c290 == '\0')))) {
    local_280 = (undefined1 (***) [16])FUN_180113860(&DAT_180cc9a88);
    pauVar20 = DAT_180cc9a88;
    local_288 = DAT_180cc9a80;
    DAT_180cc9a80 = (undefined1 (*) [16])0x0;
    LOCK();
    DAT_180cc9a88 = (undefined1 (*) [16])0x0;
    UNLOCK();
    if (((byte)pauVar20 & 3) == 2) {
      FUN_1805fa36c(&DAT_180cc9a88);
    }
    FUN_1800efed0(&local_288);
    goto LAB_1802cd68f;
  }
  FUN_18063ab10(local_238,0,0x1f0);
  FUN_180181c80(local_238);
  local_268 = ZEXT816(0x180cc9b08);
  iVar11 = FUN_1805f68d8(&DAT_180cc9b08);
  puVar7 = DAT_180cc9a28;
  local_268[8] = iVar11 == 0;
  if (iVar11 == 0) {
    local_288 = (undefined1 (*) [16])&DAT_180b0be78;
    local_280 = local_248;
    local_278[0] = (undefined1 (*) [16])&local_288;
    local_298 = &local_288;
    puVar22 = DAT_180cc9a20;
    if (DAT_180cc9a20 != DAT_180cc9a28) {
      do {
        cVar9 = FUN_1802e9bf0(&local_298,puVar22);
        if (cVar9 != '\0') break;
        puVar22 = puVar22 + 3;
      } while (puVar22 != puVar7);
      if (puVar22 != puVar7) {
        puVar18 = puVar22 + 3;
        if (puVar18 != puVar7) {
          do {
            cVar9 = FUN_1802e9bf0(local_278,puVar18);
            if (cVar9 == '\0') {
              uVar25 = puVar18[1];
              *puVar22 = *puVar18;
              puVar22[1] = uVar25;
              puVar22[2] = puVar18[2];
              puVar22 = puVar22 + 3;
            }
            puVar18 = puVar18 + 3;
          } while (puVar18 != puVar7);
          if (puVar22 == puVar7) goto LAB_1802cd1a7;
        }
        lVar19 = (longlong)DAT_180cc9a28 - (longlong)puVar7;
        FUN_18063aed0(puVar22,puVar7,lVar19);
        DAT_180cc9a28 = (undefined8 *)(lVar19 + (longlong)puVar22);
      }
    }
LAB_1802cd1a7:
    local_288 = (undefined1 (*) [16])&DAT_180b0be78;
    local_280 = local_248;
    FUN_1802e7330(&DAT_180cc9a38,&local_288);
    local_288 = (undefined1 (*) [16])&DAT_180b0be78;
    local_280 = local_248;
    FUN_1802e7550(&DAT_180cc9a50,&local_288);
    lVar24 = DAT_180cc9a70;
    local_288 = (undefined1 (*) [16])&DAT_180b0be78;
    local_280 = local_248;
    local_298 = &local_288;
    local_278[0] = (undefined1 (*) [16])&local_288;
    lVar19 = DAT_180cc9a68;
    if (DAT_180cc9a68 != DAT_180cc9a70) {
      do {
        cVar9 = FUN_1802e9ce0(local_278,lVar19);
        if (cVar9 != '\0') break;
        lVar19 = lVar19 + 0xb8;
      } while (lVar19 != lVar24);
    }
    if (lVar19 == lVar24) {
LAB_1802cd296:
      lVar6 = DAT_180cc9a70;
      if (lVar19 != lVar24) goto joined_r0x0001802cd29e;
    }
    else {
      lVar23 = lVar19 + 0xb8;
      lVar6 = DAT_180cc9a70;
      if (lVar23 != lVar24) {
        do {
          cVar9 = FUN_1802e9ce0(&local_298,lVar23);
          if (cVar9 == '\0') {
            FUN_1802e9e00(lVar19,lVar23);
            lVar19 = lVar19 + 0xb8;
          }
          lVar23 = lVar23 + 0xb8;
        } while (lVar23 != lVar24);
        goto LAB_1802cd296;
      }
joined_r0x0001802cd29e:
      while( true ) {
        lVar8 = DAT_180cc9a70;
        bVar5 = lVar24 == DAT_180cc9a70;
        lVar23 = lVar19;
        DAT_180cc9a70 = lVar6;
        if (bVar5) break;
        FUN_1802e9e00(lVar19,lVar24);
        lVar19 = lVar19 + 0xb8;
        lVar24 = lVar24 + 0xb8;
        lVar6 = DAT_180cc9a70;
        DAT_180cc9a70 = lVar8;
      }
      for (; lVar23 != lVar6; lVar23 = lVar23 + 0xb8) {
        FUN_1801b36e0(lVar23 + 0x10);
      }
      DAT_180cc9a70 = lVar19;
    }
    if (((DAT_180cc9a20 == DAT_180cc9a28) && (DAT_180cc9a38 == DAT_180cc9a40)) &&
       ((DAT_180cc9a50 == DAT_180cc9a58 && (DAT_180cc9a68 == DAT_180cc9a70)))) {
      pppauVar13 = (undefined1 (***) [16])FUN_180113860(&DAT_180cc9a88);
      pauVar20 = DAT_180cc9a88;
      local_288 = DAT_180cc9a80;
      DAT_180cc9a80 = (undefined1 (*) [16])0x0;
      LOCK();
      DAT_180cc9a88 = (undefined1 (*) [16])0x0;
      UNLOCK();
      if (((byte)pauVar20 & 3) == 2) {
        FUN_1805fa36c(&DAT_180cc9a88);
      }
      local_280 = pppauVar13;
      FUN_1800efed0(&local_288);
      goto LAB_1802cd386;
    }
    FUN_1802e8770(local_1d8,DAT_180cc9a20,((longlong)DAT_180cc9a28 - (longlong)DAT_180cc9a20) / 0x18
                 );
    FUN_1802e85e0(local_1c0,DAT_180cc9a38,(DAT_180cc9a40 - DAT_180cc9a38) / 0x30);
    FUN_1802e8440(local_1a8,DAT_180cc9a50,(DAT_180cc9a58 - DAT_180cc9a50) / 0x28);
    FUN_1802e7120(local_190,&DAT_180cc9a68);
    FUN_1805f68fc(&DAT_180cc9b08);
    if (DAT_180c7df28 == (undefined8 *)0x0) {
      local_268._8_8_ = 0x15;
      local_268._0_8_ = "tier0.dll:g_pMemAlloc";
      DAT_180c7df28 = (undefined8 *)FUN_180451750(local_268);
    }
    local_278[0] = (undefined1 (*) [16])
                   (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x40);
    if (local_278[0] == (undefined1 (*) [16])0x0) {
      pauVar20 = (undefined1 (*) [16])0x0;
    }
    else {
      *local_278[0] = (undefined1  [16])0x0;
      *(undefined4 *)(*local_278[0] + 8) = 1;
      *(undefined4 *)(*local_278[0] + 0xc) = 1;
      *(undefined ***)*local_278[0] =
           std::_Ref_count_obj2<features::misc::impacts::world_effect_frame>::vftable;
      *(undefined8 *)local_278[0][1] = 0;
      *(undefined8 *)(local_278[0][1] + 8) = 0;
      *(undefined8 *)local_278[0][2] = 0;
      *(undefined8 *)(local_278[0][2] + 8) = 0;
      *(undefined8 *)local_278[0][3] = 0;
      *(undefined8 *)(local_278[0][3] + 8) = 0;
      pauVar20 = local_278[0];
    }
    pauVar1 = pauVar20 + 1;
    local_268._8_8_ = pauVar20;
    local_268._0_8_ = pauVar1;
    UVar14 = GetTickCount64();
    *(ULONGLONG *)pauVar20[3] = UVar14;
    *(undefined4 *)(pauVar20[2] + 8) = 0;
    uVar25 = FUN_1802da8c0(local_238,pauVar1,(ulonglong)local_248[0] & 0xffffffff);
    cVar9 = FUN_1802cd880(uVar25,"impacts");
    if (cVar9 != '\0') {
      uVar25 = FUN_1802dc9c0(local_238,pauVar1,(ulonglong)local_248[0] & 0xffffffff);
      cVar9 = FUN_1802cd880(uVar25,"sparks");
      if (cVar9 != '\0') {
        *(undefined4 *)(pauVar20[2] + 8) = 1;
        uVar25 = FUN_1802db440(local_238,pauVar1,(ulonglong)local_248[0] & 0xffffffff);
        cVar9 = FUN_1802cd880(uVar25,"tracers");
        if (cVar9 != '\0') {
          *(undefined4 *)(pauVar20[2] + 8) = 2;
          uVar25 = FUN_1802de530(local_238,pauVar1,(ulonglong)local_248[0] & 0xffffffff);
          cVar9 = FUN_1802cd880(uVar25,"deaths");
          if (cVar9 != '\0') {
            pppauVar13 = (undefined1 (***) [16])FUN_180113860(&DAT_180cc9a88);
            local_288 = DAT_180cc9a80;
            LOCK();
            UNLOCK();
            bVar17 = (byte)DAT_180cc9a88;
            DAT_180cc9a80 = pauVar1;
            DAT_180cc9a88 = pauVar20;
            if ((bVar17 & 3) == 2) {
              FUN_1805fa36c(&DAT_180cc9a88);
            }
            local_280 = pppauVar13;
            FUN_1800efed0(&local_288);
            pauVar20 = (undefined1 (*) [16])0x0;
          }
        }
      }
    }
    if (pauVar20 != (undefined1 (*) [16])0x0) {
      LOCK();
      piVar2 = (int *)(*pauVar20 + 8);
      iVar11 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (*(code *)**(undefined8 **)*pauVar20)(pauVar20);
        LOCK();
        piVar2 = (int *)(*pauVar20 + 0xc);
        iVar11 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*(longlong *)*pauVar20 + 8))(pauVar20);
        }
      }
    }
  }
  else {
LAB_1802cd386:
    if (iVar11 == 0) {
      FUN_1805f68fc(&DAT_180cc9b08);
    }
  }
  FUN_180181e20(local_238);
LAB_1802cd68f:
  FUN_18017bf40(local_278);
  pauVar20 = local_278[0];
  uVar21 = (longlong)local_278[0] - local_258._8_8_;
  puVar15 = (ulonglong *)FUN_1802e8b30();
  local_2e8 = *puVar15 + 1;
  *puVar15 = local_2e8;
  uVar3 = puVar15[1];
  puVar15[1] = uVar3 + uVar21;
  local_2b8 = puVar15[3] + (ulonglong)(999999 < uVar21);
  puVar15[3] = local_2b8;
  local_2b0 = puVar15[4] + (ulonglong)(4999999 < uVar21);
  puVar15[4] = local_2b0;
  local_2a8 = puVar15[5] + (ulonglong)(15999999 < uVar21);
  puVar15[5] = local_2a8;
  uVar16 = puVar15[2];
  if (puVar15[2] < uVar21) {
    puVar15[2] = uVar21;
    uVar16 = uVar21;
  }
  if ((pauVar20 == (undefined1 (*) [16])puVar15[7]) || ((longlong)puVar15[7] <= (longlong)pauVar20))
  {
    local_2c8 = (double)(longlong)((longlong)pauVar20 - puVar15[6]) / 1000000.0;
    dVar4 = (double)(uVar3 + uVar21);
    local_2c0 = 0.0;
    if (0.0 < local_2c8) {
      local_2c0 = (dVar4 / 1000.0) / local_2c8;
    }
    local_2d0 = dVar4 / 1000000.0;
    local_2d8 = (double)uVar16 / 1000.0;
    local_2e0 = (dVar4 / (double)local_2e8) / 1000.0;
    FUN_1801af8a0(dVar4 / (double)local_2e8,local_2e0,local_258._0_8_);
    puVar15[2] = 0;
    puVar15[1] = 0;
    *puVar15 = 0;
    puVar15[5] = 0;
    puVar15[4] = 0;
    puVar15[3] = 0;
    puVar15[6] = (ulonglong)pauVar20;
    puVar15[7] = (ulonglong)(pauVar20 + 0x12a05f20);
  }
}



