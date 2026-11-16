// FUN_1803cbbc0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803cbbc0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1803cbbc0(void)

{
  undefined4 uVar1;
  ulonglong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  char cVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined8 uVar15;
  longlong *plVar16;
  longlong lVar17;
  ulonglong uVar18;
  undefined1 (*pauVar19) [16];
  undefined1 auStack_148 [32];
  char *local_128;
  undefined8 local_120;
  undefined4 local_118 [2];
  undefined1 local_110 [16];
  ulonglong uStack_100;
  ulonglong uStack_f8;
  undefined1 local_f0 [16];
  ulonglong uStack_e0;
  ulonglong uStack_d8;
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined4 *local_88;
  undefined4 local_80 [2];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_148;
  if ((DAT_180c71e18 & 1) == 0) {
    DAT_180c71e18 = DAT_180c71e18 | 1;
    _DAT_180c71db0 = (undefined1  [16])0x0;
    DAT_180c71dc0 = (undefined4 *)0x0;
    FUN_1803ce3b0(&DAT_180c71dc8);
    atexit(FUN_180662f50);
  }
  plVar12 = (longlong *)FUN_18043aae0();
  plVar16 = (longlong *)*plVar12;
  lVar17 = plVar12[1] - (longlong)plVar16 >> 3;
  if (DAT_1809ba040 != lVar17) {
    local_98 = (undefined1  [16])0x0;
    local_88 = (undefined4 *)0x0;
    local_80[0] = 0;
    local_78 = (undefined1  [16])0x0;
    if (DAT_180c7df28 == (undefined8 *)0x0) {
      local_128 = "tier0.dll:g_pMemAlloc";
      local_120 = 0x15;
      DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_128);
    }
    lVar13 = (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x20);
    *(longlong *)lVar13 = lVar13;
    *(longlong *)(lVar13 + 8) = lVar13;
    local_68 = (undefined1  [16])0x0;
    local_58 = 0;
    local_50 = 7;
    local_48 = 8;
    local_80[0] = 0x3f800000;
    local_78._0_8_ = lVar13;
    FUN_1801406e0(local_68,0x10,lVar13);
    FUN_1803ce720(&DAT_180c71db0);
    _DAT_180c71db0 = local_98;
    DAT_180c71dc0 = local_88;
    local_98 = (undefined1  [16])0x0;
    local_88 = (undefined4 *)0x0;
    FUN_1801ac870(&DAT_180c71dc8);
    uVar10 = DAT_180c71e00;
    uVar9 = DAT_180c71df8;
    uVar8 = DAT_180c71df0;
    uVar7 = DAT_180c71de8;
    uVar6 = DAT_180c71de0;
    uVar15 = DAT_180c71dd8;
    lVar13 = DAT_180c71dd0;
    _DAT_180c71dc8 = local_80[0];
    DAT_180c71dd0 = local_78._0_8_;
    DAT_180c71dd8 = local_78._8_8_;
    local_78._8_8_ = uVar15;
    local_78._0_8_ = lVar13;
    DAT_180c71de0 = local_68._0_8_;
    DAT_180c71de8 = local_68._8_8_;
    local_68._8_8_ = uVar7;
    local_68._0_8_ = uVar6;
    DAT_180c71df0 = local_58;
    local_58 = uVar8;
    DAT_180c71df8 = local_50;
    local_50 = uVar9;
    DAT_180c71e00 = local_48;
    local_48 = uVar10;
    FUN_180165570(local_80);
    FUN_1803ce720(local_98);
    local_a8 = (undefined1  [16])0x0;
    DAT_1809ba040 = lVar17;
    if (DAT_180c7df28 == (undefined8 *)0x0) {
      local_128 = "tier0.dll:g_pMemAlloc";
      local_120 = 0x15;
      DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_128);
    }
    plVar14 = (longlong *)
              (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x68);
    *plVar14 = (longlong)plVar14;
    plVar14[1] = (longlong)plVar14;
    plVar14[2] = (longlong)plVar14;
    *(undefined2 *)(plVar14 + 3) = 0x101;
    local_a8._0_8_ = plVar14;
    plVar12 = plVar16 + lVar17;
    if (plVar16 != plVar12) {
      do {
        local_128 = (char *)*plVar16;
        if (local_128 != (char *)0x0) {
          FUN_1803cb860(local_98);
          cVar11 = '\0';
          if ((char)local_50 != '\0') {
            FUN_1803cdce0(&DAT_180c71dc8,local_c8,&local_128,local_98);
            FUN_18015b360(local_118,local_98 + 8);
            FUN_18015b360(&uStack_f8,local_78 + 8);
            FUN_1803ce540(local_a8,local_b8,local_118,local_98);
            FUN_18015c010(&uStack_f8);
            FUN_18015c010(local_118);
            cVar11 = (char)local_50;
          }
          if (cVar11 != '\0') {
            FUN_18015c010(local_78 + 8);
            FUN_18015c010(local_98 + 8);
          }
        }
        plVar16 = plVar16 + 1;
      } while (plVar16 != plVar12);
      plVar14 = (longlong *)local_a8._0_8_;
    }
    plVar16 = (longlong *)*plVar14;
    if (*(char *)((longlong)plVar16 + 0x19) == '\0') {
      do {
        uVar1 = (undefined4)plVar16[0xc];
        local_110 = (undefined1  [16])0x0;
        uStack_100 = 0;
        uStack_f8 = 0;
        uVar2 = plVar16[6];
        pauVar19 = (undefined1 (*) [16])(plVar16 + 4);
        if (0xf < (ulonglong)plVar16[7]) {
          pauVar19 = *(undefined1 (**) [16])*pauVar19;
        }
        local_118[0] = uVar1;
        if (0x7fffffffffffffff < uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_18015bb70();
        }
        if (uVar2 < 0x10) {
          uStack_f8 = 0xf;
          local_110 = *pauVar19;
          uStack_100 = uVar2;
        }
        else {
          uVar18 = uVar2 | 0xf;
          if (uVar18 < 0x8000000000000000) {
            if (uVar18 < 0x16) {
              uVar18 = 0x16;
            }
          }
          else {
            uVar18 = 0x7fffffffffffffff;
          }
          uVar15 = FUN_18015bca0(uVar18 + 1);
          local_110._0_8_ = uVar15;
          uStack_100 = uVar2;
          uStack_f8 = uVar18;
          FUN_18063aed0(uVar15,pauVar19,uVar2 + 1);
        }
        pauVar19 = (undefined1 (*) [16])(plVar16 + 8);
        local_f0 = (undefined1  [16])0x0;
        uStack_e0 = 0;
        uStack_d8 = 0;
        uVar2 = plVar16[10];
        if (0xf < (ulonglong)plVar16[0xb]) {
          pauVar19 = *(undefined1 (**) [16])*pauVar19;
        }
        if (0x7fffffffffffffff < uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_18015bb70();
        }
        if (uVar2 < 0x10) {
          uStack_d8 = 0xf;
          local_f0 = *pauVar19;
          uStack_e0 = uVar2;
        }
        else {
          uVar18 = uVar2 | 0xf;
          if (uVar18 < 0x8000000000000000) {
            if (uVar18 < 0x16) {
              uVar18 = 0x16;
            }
          }
          else {
            uVar18 = 0x7fffffffffffffff;
          }
          uVar15 = FUN_18015bca0(uVar18 + 1);
          local_f0._0_8_ = uVar15;
          uStack_e0 = uVar2;
          uStack_d8 = uVar18;
          FUN_18063aed0(uVar15,pauVar19,uVar2 + 1);
        }
        puVar5 = DAT_180c71db8;
        if (DAT_180c71db8 == DAT_180c71dc0) {
          FUN_1803ce930(&DAT_180c71db0,DAT_180c71db8,local_118);
        }
        else {
          *DAT_180c71db8 = uVar1;
          *(undefined8 *)(puVar5 + 2) = local_110._0_8_;
          *(undefined8 *)(puVar5 + 4) = local_110._8_8_;
          *(ulonglong *)(puVar5 + 6) = uStack_100;
          *(ulonglong *)(puVar5 + 8) = uStack_f8;
          uStack_100 = 0;
          uStack_f8 = 0xf;
          auVar3[0xf] = 0;
          auVar3._0_15_ = local_110._1_15_;
          local_110 = auVar3 << 8;
          *(undefined8 *)(puVar5 + 10) = local_f0._0_8_;
          *(undefined8 *)(puVar5 + 0xc) = local_f0._8_8_;
          *(ulonglong *)(puVar5 + 0xe) = uStack_e0;
          *(ulonglong *)(puVar5 + 0x10) = uStack_d8;
          uStack_e0 = 0;
          uStack_d8 = 0xf;
          auVar4[0xf] = 0;
          auVar4._0_15_ = local_f0._1_15_;
          local_f0 = auVar4 << 8;
          DAT_180c71db8 = DAT_180c71db8 + 0x12;
        }
        FUN_18015c010(local_f0);
        FUN_18015c010(local_110);
        plVar12 = (longlong *)plVar16[2];
        if (*(char *)((longlong)plVar12 + 0x19) == '\0') {
          cVar11 = *(char *)(*plVar12 + 0x19);
          plVar16 = plVar12;
          plVar12 = (longlong *)*plVar12;
          while (cVar11 == '\0') {
            cVar11 = *(char *)(*plVar12 + 0x19);
            plVar16 = plVar12;
            plVar12 = (longlong *)*plVar12;
          }
        }
        else {
          cVar11 = *(char *)(plVar16[1] + 0x19);
          plVar14 = (longlong *)plVar16[1];
          plVar12 = plVar16;
          while ((plVar16 = plVar14, cVar11 == '\0' && (plVar12 == (longlong *)plVar16[2]))) {
            cVar11 = *(char *)(plVar16[1] + 0x19);
            plVar14 = (longlong *)plVar16[1];
            plVar12 = plVar16;
          }
        }
      } while (*(char *)((longlong)plVar16 + 0x19) == '\0');
      plVar14 = (longlong *)local_a8._0_8_;
    }
    FUN_1803ce8c0(local_a8,local_a8,plVar14[1]);
    FUN_1804547d0(local_a8._0_8_,0x68);
  }
}



