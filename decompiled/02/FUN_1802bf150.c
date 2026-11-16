// FUN_1802bf150 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802bf150 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802bf150(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 uVar1;
  undefined8 ******ppppppuVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  int iVar9;
  char cVar10;
  short sVar11;
  ULONGLONG UVar12;
  longlong lVar13;
  undefined8 *******pppppppuVar14;
  undefined8 *******pppppppuVar15;
  longlong lVar16;
  undefined8 uVar17;
  longlong lVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  longlong *plVar21;
  int iVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  byte bVar25;
  undefined8 ******ppppppuVar26;
  undefined8 *puVar27;
  uint uVar28;
  longlong *plVar29;
  ulonglong uVar30;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar31;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 uVar32;
  float fVar33;
  char *pcVar34;
  undefined1 auVar35 [64];
  undefined4 uVar36;
  float fVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  float fVar40;
  undefined1 auStack_2e8 [32];
  undefined8 local_2c8;
  undefined8 ******local_2b8;
  ulonglong *puStack_2b0;
  undefined4 local_2a8;
  undefined8 ******local_2a0;
  char *local_298;
  ulonglong *puStack_290;
  undefined4 local_288 [4];
  undefined8 *******local_278;
  undefined8 *******pppppppuStack_270;
  undefined8 *******local_268;
  undefined8 *******pppppppuStack_260;
  undefined8 local_258;
  ulonglong local_250;
  undefined1 local_248 [16];
  undefined8 local_238;
  ulonglong uStack_230;
  ulonglong local_228;
  undefined8 uStack_220;
  undefined8 ******ppppppuStack_218;
  undefined8 ******ppppppuStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  undefined1 (*local_1c8) [16];
  undefined1 local_1c0 [16];
  undefined8 uStack_1b0;
  ulonglong uStack_1a8;
  undefined1 local_1a0 [16];
  undefined8 uStack_190;
  ulonglong uStack_188;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  ulonglong uStack_160;
  ulonglong local_158;
  undefined8 uStack_150;
  undefined8 ******local_148;
  undefined8 *******pppppppuStack_140;
  undefined8 ******local_138;
  float local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 local_11c;
  undefined4 uStack_118;
  undefined4 local_114;
  undefined4 uStack_110;
  undefined4 local_10c;
  undefined4 local_108;
  float local_104;
  undefined8 *******local_f8 [3];
  ulonglong local_e0;
  undefined1 local_d8 [16];
  undefined8 ******local_c8;
  ulonglong local_c0;
  undefined1 local_b8 [32];
  ulonglong local_98;
  
  if (param_2 == 0) {
    return;
  }
  local_98 = DAT_1808d5f00 ^ (ulonglong)auStack_2e8;
  local_2b8 = (undefined8 ******)((ulonglong)local_2b8 & 0xffffffff00000000);
  iVar22 = DAT_180c6e8d4;
  if (DAT_180c6e8d4 == 0) {
    UVar12 = GetTickCount64();
    if (UVar12 < DAT_180c6e8d8) {
      iVar22 = 0;
    }
    else {
      local_2b8 = (undefined8 ******)&DAT_1808f5ab0;
      iVar22 = FUN_1805f68d0(&DAT_1808f5ab0);
      if (iVar22 != 0) goto LAB_1802c0b29;
      if (DAT_1808f5afc == 0x7fffffff) {
        DAT_1808f5afc = 0x7ffffffe;
        goto LAB_1802c0b3e;
      }
      if ((DAT_180c6e8d4 == 0) && (DAT_180c6e8d8 <= UVar12)) {
        DAT_180c6e8d4 = FUN_1804174b0("CBasePlayerController",0xb22f805e);
        if (DAT_180c6e8d4 == 0) {
          DAT_180c6e8d8 = UVar12 + 1000;
        }
        else {
          DAT_180c6e8d8 = 0xffffffffffffffff;
        }
      }
      iVar22 = DAT_180c6e8d4;
      FUN_1805f68fc(&DAT_1808f5ab0);
    }
  }
  lVar13 = FUN_18017ea70();
  *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + 1;
  if (iVar22 + param_2 == 0) {
    bVar3 = false;
    ppppppuVar26 = local_2a0;
  }
  else {
    local_2b8 = (undefined8 ******)0x0;
    cVar10 = FUN_1804514f0(&local_2b8,iVar22 + param_2,8);
    if (cVar10 == '\0') {
      bVar3 = false;
      ppppppuVar26 = local_2a0;
    }
    else {
      bVar3 = true;
      ppppppuVar26 = local_2b8;
    }
  }
  lVar13 = FUN_18017ea70();
  if (*(int *)(lVar13 + 4) != 0) {
    *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + -1;
  }
  if ((!bVar3) || (ppppppuVar26 < (undefined8 ******)0x110000100000000)) goto LAB_1802c0acd;
  iVar22 = DAT_180c6e8e0;
  local_2a0 = ppppppuVar26;
  if (DAT_180c6e8e0 == 0) {
    UVar12 = GetTickCount64();
    if (UVar12 < DAT_180c6e8c8) {
      iVar22 = 0;
    }
    else {
      local_2b8 = (undefined8 ******)&DAT_1808f5a60;
      iVar22 = FUN_1805f68d0(&DAT_1808f5a60);
      if (iVar22 != 0) {
LAB_1802c0b29:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1808f5aac == 0x7fffffff) {
        DAT_1808f5aac = 0x7ffffffe;
LAB_1802c0b3e:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      if ((DAT_180c6e8e0 == 0) && (DAT_180c6e8c8 <= UVar12)) {
        DAT_180c6e8e0 = FUN_1804174b0("CBasePlayerController",0x7c628c1d);
        if (DAT_180c6e8e0 == 0) {
          DAT_180c6e8c8 = UVar12 + 1000;
        }
        else {
          DAT_180c6e8c8 = 0xffffffffffffffff;
        }
      }
      iVar22 = DAT_180c6e8e0;
      FUN_1805f68fc(&DAT_1808f5a60);
    }
  }
  lVar13 = FUN_18017ea70();
  *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + 1;
  if (iVar22 + param_2 == 0) {
    bVar3 = false;
  }
  else {
    local_2a8 = 0;
    cVar10 = FUN_1804514f0(&local_2a8,iVar22 + param_2,4);
    if (cVar10 == '\0') {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
  }
  iVar9 = local_2a8;
  lVar13 = FUN_18017ea70();
  iVar22 = *(int *)(lVar13 + 4);
  if (iVar22 != 0) {
    iVar22 = iVar22 + -1;
    *(int *)(lVar13 + 4) = iVar22;
  }
  if (!bVar3) {
  }
  if (iVar9 == 0) {
  }
  lVar13 = FUN_1803d4150(iVar22,iVar9);
  uVar28 = DAT_180b0b430;
  local_1d8 = (undefined1  [16])0x0;
  local_1c8 = (undefined1 (*) [16])0x0;
  uStack_1b0 = 0;
  uStack_1a8 = 0xf;
  local_1c0._1_15_ = SUB1615((undefined1  [16])0x0,1);
  auVar4[0xf] = 0;
  auVar4._0_15_ = local_1c0._1_15_;
  local_1c0 = auVar4 << 8;
  uStack_190 = 0;
  uStack_188 = 0xf;
  local_1a0._1_15_ = SUB1615((undefined1  [16])0x0,1);
  auVar5[0xf] = 0;
  auVar5._0_15_ = local_1a0._1_15_;
  local_1a0 = auVar5 << 8;
  local_2a8 = DAT_180b0b430;
  fVar37 = 100.0;
  local_2b8._0_4_ = 100.0;
  fVar33 = 0.0;
  local_288[0] = 0;
  auVar35 = ZEXT464(DAT_180b0b444);
  local_278._0_4_ = DAT_180b0b444;
  sVar11 = thunk_FUN_180624430(DAT_180b0b444);
  if (sVar11 < 1) {
    pppppppuVar15 = (undefined8 *******)local_288;
    if (fVar33 <= auVar35._0_4_) {
      pppppppuVar15 = &local_278;
    }
    pppppppuVar14 = &local_2b8;
    if (auVar35._0_4_ <= fVar37) {
      pppppppuVar14 = pppppppuVar15;
    }
    fVar40 = *(float *)pppppppuVar14;
  }
  else {
    fVar40 = 35.0;
  }
  fVar40 = fVar40 / fVar37;
  fVar37 = 8.0;
  local_288[0] = 0x41000000;
  auVar35 = ZEXT464(DAT_180b0b440);
  local_278._0_4_ = DAT_180b0b440;
  local_2b8._0_4_ = fVar33;
  sVar11 = thunk_FUN_180624430(DAT_180b0b440);
  if (sVar11 < 1) {
    pppppppuVar15 = &local_2b8;
    if (fVar33 <= auVar35._0_4_) {
      pppppppuVar15 = &local_278;
    }
    pppppppuVar14 = (undefined8 *******)local_288;
    if (auVar35._0_4_ <= fVar37) {
      pppppppuVar14 = pppppppuVar15;
    }
    uVar39 = *(undefined4 *)pppppppuVar14;
  }
  else {
    uVar39 = 0x40000000;
  }
  fVar33 = 1.5;
  local_288[0] = 0x3fc00000;
  fVar37 = 0.75;
  local_2b8 = (undefined8 ******)CONCAT44(local_2b8._4_4_,0x3f400000);
  auVar35 = ZEXT464(DAT_180b0b43c);
  local_278 = (undefined8 *******)CONCAT44(local_278._4_4_,DAT_180b0b43c);
  sVar11 = thunk_FUN_180624430(DAT_180b0b43c);
  uVar38 = 0x3f800000;
  if (sVar11 < 1) {
    pppppppuVar15 = &local_2b8;
    if (fVar37 <= auVar35._0_4_) {
      pppppppuVar15 = &local_278;
    }
    pppppppuVar14 = (undefined8 *******)local_288;
    if (auVar35._0_4_ <= fVar33) {
      pppppppuVar14 = pppppppuVar15;
    }
    uVar36 = *(undefined4 *)pppppppuVar14;
  }
  else {
    uVar36 = 0x3f800000;
  }
  fVar33 = 255.0;
  local_178 = (undefined8 ******)0x1000000000000000;
  local_158 = (ulonglong)CONCAT14(DAT_180b0b439,(uint)DAT_180b0b438);
  uStack_170 = 0x1000000000000004;
  uStack_168 = 0x1000000000000008;
  uStack_150 = (undefined8 ******)CONCAT44((float)DAT_180b0b43b / 255.0,(uint)DAT_180b0b43a);
  uStack_160 = 0x700000000000000c;
  local_2b8 = (undefined8 ******)&DAT_1807d30c0;
  puStack_2b0 = (ulonglong *)0x15;
  local_278 = (undefined8 *******)0x4;
  pppppppuStack_270 = (undefined8 *******)&local_178;
  local_298 = "rgba({},{},{},{:.3f})";
  puStack_290 = (ulonglong *)0x15;
  FUN_1801d97f0(&local_268,&local_298,&local_278);
  local_178 = (undefined8 ******)0x1000000000000000;
  local_158 = (ulonglong)CONCAT14(DAT_180b0b435,(uint)DAT_180b0b434);
  uStack_170 = 0x1000000000000004;
  uStack_168 = 0x1000000000000008;
  uStack_150 = (undefined8 ******)CONCAT44((float)DAT_180b0b437 / fVar33,(uint)DAT_180b0b436);
  uStack_160 = 0x700000000000000c;
  local_2b8 = (undefined8 ******)&DAT_1807d30c0;
  puStack_2b0 = (ulonglong *)0x15;
  local_278 = (undefined8 *******)0x4;
  pppppppuStack_270 = (undefined8 *******)&local_178;
  local_298 = "rgba({},{},{},{:.3f})";
  puStack_290 = (ulonglong *)0x15;
  FUN_1801d97f0(local_248,&local_298,&local_278);
  fVar33 = (float)(DAT_180b0b430 >> 0x18) / fVar33;
  local_178 = (undefined8 ******)0x1000000000000000;
  local_158 = (ulonglong)CONCAT14(local_2a8._1_1_,uVar28) & 0xffffffff000000ff;
  uStack_170 = 0x1000000000000004;
  uStack_168 = 0x1000000000000008;
  uStack_150 = (undefined8 ******)(CONCAT44(uVar38,local_2a8 >> 0x10) & 0xffffffff000000ff);
  uStack_160 = 0x700000000000000c;
  local_2b8 = (undefined8 ******)&DAT_1807d30c0;
  puStack_2b0 = (ulonglong *)0x15;
  local_278 = (undefined8 *******)0x4;
  pppppppuStack_270 = (undefined8 *******)&local_178;
  local_298 = "rgba({},{},{},{:.3f})";
  puStack_290 = (ulonglong *)0x15;
  FUN_1801d97f0(local_f8,&local_298,&local_278);
  pppppppuStack_140 = local_f8;
  if (0xf < local_e0) {
    pppppppuStack_140 = local_f8[0];
  }
  local_138 = local_f8[2];
  local_178 = (undefined8 ******)0xc000000000000000;
  uStack_170 = 0x7000000000000010;
  puVar20 = local_248;
  if (0xf < uStack_230) {
    puVar20 = (undefined1 *)local_248._0_8_;
  }
  uStack_12c = SUB84(puVar20,0);
  uStack_128 = (undefined4)((ulonglong)puVar20 >> 0x20);
  uStack_124 = (undefined4)local_238;
  uStack_120 = (undefined4)((ulonglong)local_238 >> 0x20);
  uStack_168 = 0xc000000000000014;
  pppppppuVar15 = &local_268;
  if (0xf < local_250) {
    pppppppuVar15 = local_268;
  }
  local_11c = SUB84(pppppppuVar15,0);
  uStack_118 = (undefined4)((ulonglong)pppppppuVar15 >> 0x20);
  local_114 = (undefined4)local_258;
  uStack_110 = (undefined4)((ulonglong)local_258 >> 0x20);
  uStack_160 = 0xc000000000000024;
  local_158 = 0x7000000000000034;
  uStack_150 = (undefined8 ******)0x7000000000000038;
  local_148 = (undefined8 ******)0x700000000000003c;
  local_2b8 = (undefined8 ******)0x1807d3100;
  puStack_2b0 = (ulonglong *)0x64;
  local_278 = (undefined8 *******)0x7;
  pppppppuStack_270 = (undefined8 *******)&local_178;
  local_298 = 
  "{{weapon:\"{}\",alpha:{:.3f},background:\"{}\",border:\"{}\",scale:{:.3f},spacing:{:.3f},inactive:{:.3f}}}"
  ;
  puStack_290 = (ulonglong *)0x64;
  local_130 = fVar33;
  local_10c = uVar36;
  local_108 = uVar39;
  local_104 = fVar40;
  FUN_1801d97f0(&local_228,&local_298,&local_278);
  FUN_18015c010(local_1a0);
  local_1a0._8_8_ = uStack_220;
  local_1a0._0_8_ = local_228;
  uStack_190 = ppppppuStack_218;
  uStack_188 = (ulonglong)ppppppuStack_210;
  uVar32 = 0;
  uVar24 = 0xf;
  ppppppuStack_218 = (undefined8 ******)0x0;
  ppppppuStack_210 = (undefined8 ******)0xf;
  local_228 = local_228 & 0xffffffffffffff00;
  FUN_18015c010(&local_228);
  FUN_18015c010(local_f8);
  FUN_18015c010(local_248);
  FUN_18015c010(&local_268);
  iVar22 = DAT_180c6e890;
  if (lVar13 != 0) {
    if ((DAT_180c6e890 == 0) && (UVar12 = GetTickCount64(), DAT_180c6e898 <= UVar12)) {
      local_2b8 = (undefined8 ******)&DAT_1808f5920;
      iVar22 = FUN_1805f68d0(&DAT_1808f5920);
      if (iVar22 != 0) goto LAB_1802c0b1e;
      if (DAT_1808f596c == 0x7fffffff) {
        DAT_1808f596c = 0x7ffffffe;
        goto LAB_1802c0b53;
      }
      if ((DAT_180c6e890 == 0) && (DAT_180c6e898 <= UVar12)) {
        DAT_180c6e890 = FUN_1804174b0("C_BaseEntity",0x84cdad2);
        if (DAT_180c6e890 == 0) {
          DAT_180c6e898 = UVar12 + 1000;
        }
        else {
          DAT_180c6e898 = 0xffffffffffffffff;
        }
      }
      iVar22 = DAT_180c6e890;
      FUN_1805f68fc(&DAT_1808f5920);
    }
    lVar16 = FUN_18017ea70();
    *(int *)(lVar16 + 4) = *(int *)(lVar16 + 4) + 1;
    if (iVar22 + lVar13 == 0) {
      bVar3 = false;
      uVar28 = (uint)local_2b8._0_4_;
    }
    else {
      local_2a8 = 0;
      cVar10 = FUN_1804514f0(&local_2a8,iVar22 + lVar13,4);
      if (cVar10 == '\0') {
        bVar3 = false;
        uVar28 = (uint)local_2b8._0_4_;
      }
      else {
        bVar3 = true;
        uVar28 = local_2a8;
      }
    }
    lVar16 = FUN_18017ea70();
    if (*(int *)(lVar16 + 4) != 0) {
      *(int *)(lVar16 + 4) = *(int *)(lVar16 + 4) + -1;
    }
    iVar22 = DAT_180c6e8a0;
    if ((bVar3) && (0 < (int)uVar28)) {
      if ((DAT_180c6e8a0 == 0) && (UVar12 = GetTickCount64(), DAT_180c6e878 <= UVar12)) {
        local_2b8 = (undefined8 ******)&DAT_1808f58d0;
        iVar22 = FUN_1805f68d0(&DAT_1808f58d0);
        if (iVar22 != 0) goto LAB_1802c0b1e;
        if (DAT_1808f591c == 0x7fffffff) {
          DAT_1808f591c = 0x7ffffffe;
          goto LAB_1802c0b53;
        }
        if ((DAT_180c6e8a0 == 0) && (DAT_180c6e878 <= UVar12)) {
          DAT_180c6e8a0 = FUN_1804174b0("C_BasePlayerPawn",0x51b23a93);
          if (DAT_180c6e8a0 == 0) {
            DAT_180c6e878 = UVar12 + 1000;
          }
          else {
            DAT_180c6e878 = 0xffffffffffffffff;
          }
        }
        iVar22 = DAT_180c6e8a0;
        FUN_1805f68fc(&DAT_1808f58d0);
      }
      lVar16 = FUN_18017ea70();
      *(int *)(lVar16 + 4) = *(int *)(lVar16 + 4) + 1;
      if (iVar22 + lVar13 == 0) {
        bVar3 = false;
        ppppppuVar26 = local_2a0;
      }
      else {
        local_2b8 = (undefined8 ******)0x0;
        cVar10 = FUN_1804514f0(&local_2b8,iVar22 + lVar13,8);
        if (cVar10 == '\0') {
          bVar3 = false;
          ppppppuVar26 = local_2a0;
        }
        else {
          bVar3 = true;
          ppppppuVar26 = local_2b8;
        }
      }
      lVar16 = FUN_18017ea70();
      if (*(int *)(lVar16 + 4) != 0) {
        *(int *)(lVar16 + 4) = *(int *)(lVar16 + 4) + -1;
      }
      iVar22 = DAT_180c6e880;
      if ((bVar3) && (ppppppuVar26 != (undefined8 ******)0x0)) {
        if ((DAT_180c6e880 == 0) && (UVar12 = GetTickCount64(), DAT_180c6e888 <= UVar12)) {
          local_2b8 = (undefined8 ******)&DAT_1808f5830;
          iVar22 = FUN_1805f68d0(&DAT_1808f5830);
          if (iVar22 != 0) {
LAB_1802c0b1e:
                    /* WARNING: Subroutine does not return */
            FUN_1805f6d44(5);
          }
          if (DAT_1808f587c == 0x7fffffff) {
            DAT_1808f587c = 0x7ffffffe;
LAB_1802c0b53:
                    /* WARNING: Subroutine does not return */
            FUN_1805f6d44(6);
          }
          if ((DAT_180c6e880 == 0) && (DAT_180c6e888 <= UVar12)) {
            DAT_180c6e880 = FUN_1804174b0("CPlayer_WeaponServices",0x940131c5);
            if (DAT_180c6e880 == 0) {
              DAT_180c6e888 = UVar12 + 1000;
            }
            else {
              DAT_180c6e888 = 0xffffffffffffffff;
            }
          }
          iVar22 = DAT_180c6e880;
          FUN_1805f68fc(&DAT_1808f5830);
        }
        lVar16 = FUN_18017ea70();
        *(int *)(lVar16 + 4) = *(int *)(lVar16 + 4) + 1;
        if ((char *)((longlong)ppppppuVar26 + (longlong)iVar22) == (char *)0x0) {
          bVar3 = false;
          uVar28 = (uint)local_2b8._0_4_;
        }
        else {
          local_2a8 = 0;
          cVar10 = FUN_1804514f0(&local_2a8,(char *)((longlong)ppppppuVar26 + (longlong)iVar22),4);
          if (cVar10 == '\0') {
            bVar3 = false;
            uVar28 = (uint)local_2b8._0_4_;
          }
          else {
            bVar3 = true;
            uVar28 = local_2a8;
          }
        }
        lVar16 = FUN_18017ea70();
        iVar22 = *(int *)(lVar16 + 4);
        if (iVar22 != 0) {
          iVar22 = iVar22 + -1;
          *(int *)(lVar16 + 4) = iVar22;
        }
        if ((!bVar3) || (uVar28 == 0)) {
          uVar17 = 0;
          uVar31 = extraout_XMM0_Qa;
        }
        else {
          uVar17 = FUN_1803d4150(iVar22,uVar28);
          uVar31 = extraout_XMM0_Qa_00;
        }
        FUN_1802c0b80(uVar31,&local_178,uVar17);
        cVar10 = '\0';
        if ((char)uStack_150 != '\0') {
          ppppppuVar26 = (undefined8 ******)&local_178;
          if (0xf < uStack_160) {
            ppppppuVar26 = local_178;
          }
          FUN_180113930(local_1c0,ppppppuVar26,uStack_168);
          cVar10 = (char)uStack_150;
        }
        if (cVar10 != '\0') {
          FUN_18015c010(&local_178);
        }
      }
      plVar29 = (longlong *)*param_3;
      plVar21 = plVar29 + param_3[1] * 3;
      if (plVar29 != plVar21) {
        uVar28 = (uint)local_2b8._0_4_;
        do {
          iVar22 = DAT_180c6e86c;
          if (*plVar29 != 0) {
            if ((DAT_180c6e86c == 0) && (UVar12 = GetTickCount64(), DAT_180c6e870 <= UVar12)) {
              local_2b8 = (undefined8 ******)&DAT_1808f5880;
              iVar22 = FUN_1805f68d0(&DAT_1808f5880);
              if (iVar22 != 0) goto LAB_1802c0b1e;
              if (DAT_1808f58cc == 0x7fffffff) {
                DAT_1808f58cc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
                FUN_1805f6d44(6);
              }
              if ((DAT_180c6e86c == 0) && (DAT_180c6e870 <= UVar12)) {
                DAT_180c6e86c = FUN_1804174b0("C_BaseEntity",0x6d279c31);
                if (DAT_180c6e86c == 0) {
                  DAT_180c6e870 = UVar12 + 1000;
                }
                else {
                  DAT_180c6e870 = 0xffffffffffffffff;
                }
              }
              iVar22 = DAT_180c6e86c;
              FUN_1805f68fc(&DAT_1808f5880);
            }
            lVar16 = *plVar29;
            lVar18 = FUN_18017ea70();
            *(int *)(lVar18 + 4) = *(int *)(lVar18 + 4) + 1;
            bVar3 = false;
            if (iVar22 + lVar16 != 0) {
              local_2a8 = 0;
              cVar10 = FUN_1804514f0(&local_2a8,iVar22 + lVar16,4);
              if (cVar10 == '\0') {
                bVar3 = false;
              }
              else {
                bVar3 = true;
                uVar28 = local_2a8;
              }
            }
            lVar16 = FUN_18017ea70();
            iVar22 = *(int *)(lVar16 + 4);
            if (iVar22 != 0) {
              iVar22 = iVar22 + -1;
              *(int *)(lVar16 + 4) = iVar22;
            }
            if (((bVar3) && (uVar28 != 0)) &&
               (lVar16 = FUN_1803d4150(iVar22,uVar28), lVar16 == lVar13)) {
              FUN_1802c0b80(extraout_XMM0_Qa_01,&local_178,*plVar29);
              if ((char)uStack_150 != '\0') {
                if ((undefined1 (*) [16])local_1d8._8_8_ == local_1c8) {
                  FUN_1802c1fa0(local_1d8,local_1d8._8_8_,&local_178);
                }
                else {
                  *(undefined1 (*) [16])local_1d8._8_8_ = (undefined1  [16])0x0;
                  *(undefined8 *)*(undefined1 (*) [16])(local_1d8._8_8_ + 0x10) = 0;
                  *(undefined8 *)(*(undefined1 (*) [16])(local_1d8._8_8_ + 0x10) + 8) = 0;
                  *(undefined8 *******)(undefined1 *)local_1d8._8_8_ = local_178;
                  *(undefined8 *)((undefined1 *)local_1d8._8_8_ + 8) = uStack_170;
                  *(undefined8 *)*(undefined1 (*) [16])(local_1d8._8_8_ + 0x10) = uStack_168;
                  *(ulonglong *)(*(undefined1 (*) [16])(local_1d8._8_8_ + 0x10) + 8) = uStack_160;
                  local_178 = (undefined8 ******)((ulonglong)local_178 & 0xffffffffffffff00);
                  *(undefined4 *)*(undefined1 (*) [16])(local_1d8._8_8_ + 0x20) =
                       (undefined4)local_158;
                  local_1d8._8_8_ = *(undefined1 (*) [16])(local_1d8._8_8_ + 0x20) + 8;
                  uStack_168 = uVar32;
                  uStack_160 = uVar24;
                }
              }
              if ((char)uStack_150 != '\0') {
                FUN_18015c010(&local_178);
              }
            }
          }
          plVar29 = plVar29 + 3;
        } while (plVar29 != plVar21);
      }
    }
  }
  if (DAT_180b8fb78 == 8) {
    local_228 = 0xdb35e39b27e1c185;
    uStack_220 = 0xa05181ee77d57a06;
    ppppppuStack_218 = (undefined8 ******)0x929654b1461b7377;
    ppppppuStack_210 = (undefined8 ******)0xa5cea54bfef7110;
    local_208 = 0xa70c9f7f916b7e19;
    uStack_200 = 0x2b2d6d82aa402c0a;
    local_1f8 = 0xc064ed9510bc010b;
    local_2b8 = (undefined8 ******)0xfec09918395f26c4;
    uStack_1f0 = 0xfec09918395f26c4;
    local_178 = (undefined8 ******)0x6f6265726f63735b;
    uStack_170 = 0x706165775f647261;
    uStack_168 = 0x697578205d736e6f;
    uStack_160 = 0x6c6f63207d7b3d64;
    local_158 = 0x775f64657463656c;
    uStack_150 = (undefined8 ******)0x7b3d736e6f706165;
    local_148 = (undefined8 ******)0xa7d;
    pppppppuStack_140 = (undefined8 *******)0x0;
    puStack_290 = (ulonglong *)0xffffffffffffffff;
    do {
      puStack_290 = (ulonglong *)((longlong)puStack_290 + 1);
    } while (*(char *)((longlong)&local_178 + (longlong)puStack_290) != '\0');
    local_298 = (char *)&local_178;
    local_f8[2] = (undefined8 *******)local_2a0;
    local_f8[0] = (undefined8 *******)0x4000000000000000;
    local_e0 = (longlong)(local_1d8._8_8_ - local_1d8._0_8_) / 0x28;
    local_f8[1] = (undefined8 *******)0x4000000000000008;
    local_278 = (undefined8 *******)0x2;
    pppppppuStack_270 = local_f8;
    local_248._1_15_ = SUB1615((undefined1  [16])0x0,1);
    auVar6[0xf] = 0;
    auVar6._0_15_ = local_248._1_15_;
    local_248 = auVar6 << 8;
    local_2b8 = (undefined8 ******)0xfec09918000003fc;
    uVar23 = 0;
    uVar30 = 0;
    do {
      bVar25 = (byte)((ulonglong)local_f8[uVar30] >> 0x3c);
      if (bVar25 == 0xc) {
        uVar23 = uVar23 + *(longlong *)
                           (local_d8 + (((ulonglong)local_f8[uVar30] & 0xfffffffffffffff) - 8));
      }
      else if (bVar25 == 0xb) {
        uVar23 = uVar23 + 0x20;
      }
      else {
        uVar23 = uVar23 + 8;
      }
      uVar30 = uVar30 + 1;
    } while (uVar30 < 2);
    lVar13 = (longlong)puStack_290 + uVar23;
    if (CARRY8((ulonglong)puStack_290,uVar23)) {
      lVar13 = -1;
    }
    local_238 = uVar32;
    uStack_230 = uVar24;
    FUN_1800f5540(local_248,lVar13);
    local_268 = local_278;
    pppppppuStack_260 = pppppppuStack_270;
    local_2c8 = 0;
    FUN_1801da050(&local_278,local_248,&local_298,&local_268);
    puVar20 = local_248;
    if (uStack_230 < 0x10) {
LAB_1802c033c:
      puVar19 = (undefined1 *)FUN_1803b0a60();
      uVar1 = *puVar19;
      puVar19 = (undefined1 *)FUN_1803b0a60();
      *puVar19 = 1;
      FUN_1800a9e50(1,puVar20);
      puVar20 = (undefined1 *)FUN_1803b0a60();
      *puVar20 = uVar1;
    }
    else {
      puVar20 = (undefined1 *)local_248._0_8_;
      if ((undefined1 *)local_248._0_8_ != (undefined1 *)0x0) goto LAB_1802c033c;
    }
    FUN_18015c010(local_248);
  }
  FUN_1802c1200(local_1d8._0_8_,local_1d8._8_8_,local_1e8);
  ppppppuVar26 = local_2a0;
  uVar24 = (((((((((ulonglong)local_2a0 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                 (ulonglong)local_2a0 >> 8 & 0xff) * 0x100000001b3 ^
                (ulonglong)local_2a0 >> 0x10 & 0xff) * 0x100000001b3 ^
               (ulonglong)local_2a0 >> 0x18 & 0xff) * 0x100000001b3 ^
              (ulonglong)local_2a0 >> 0x20 & 0xff) * 0x100000001b3 ^
             (ulonglong)local_2a0 >> 0x28 & 0xff) * 0x100000001b3 ^
            (ulonglong)local_2a0 >> 0x30 & 0xff) * 0x100000001b3 ^ (ulonglong)local_2a0 >> 0x38) *
           0x100000001b3 & _DAT_180b8fb68;
  lVar13 = *(longlong *)(DAT_180b8fb50 + 8 + uVar24 * 0x10);
  if (lVar13 == DAT_180b8fb40) {
LAB_1802c0451:
    lVar13 = 0;
  }
  else {
    ppppppuVar2 = *(undefined8 *******)(lVar13 + 0x10);
    while (local_2a0 != ppppppuVar2) {
      if (lVar13 == *(longlong *)(DAT_180b8fb50 + uVar24 * 0x10)) goto LAB_1802c0451;
      lVar13 = *(longlong *)(lVar13 + 8);
      ppppppuVar2 = *(undefined8 *******)(lVar13 + 0x10);
    }
  }
  lVar16 = DAT_180b8fb40;
  if (lVar13 != 0) {
    lVar16 = lVar13;
  }
  if ((lVar16 == DAT_180b8fb40) || (cVar10 = FUN_1802bdb50(lVar16 + 0x18,local_1d8), cVar10 == '\0')
     ) {
    if (local_1d8._0_8_ == local_1d8._8_8_) {
      ppppppuStack_210 = ppppppuVar26 + -0x22000020000000;
      if (ppppppuVar26 < (undefined8 ******)0x110000100000000) {
        ppppppuStack_210 = ppppppuVar26;
      }
      ppppppuStack_218 = ppppppuVar26;
      local_228 = 0x4000000000000000;
      uStack_220 = 0x4000000000000008;
      local_298 = 
      "if(typeof(SClient)!==\'undefined\'){{SClient.receive({{type:\"clearWeapons\",content:{{xuid:\"{}\",account_id:\"{}\"}}}});}}"
      ;
      puStack_290 = (ulonglong *)0x74;
      local_2b8 = (undefined8 ******)0x2;
      puStack_2b0 = &local_228;
      local_268 = (undefined8 *******)0x1807d31c0;
      pppppppuStack_260 = (undefined8 *******)0x74;
      uVar32 = FUN_1801d97f0(local_f8,&local_268,&local_2b8);
      cVar10 = FUN_1802bef30(uVar32,local_f8);
      FUN_18015c010(local_f8);
      if (cVar10 != '\0') {
        plVar21 = (longlong *)FUN_1802c1830(&DAT_180b8fb38,&local_268,&local_2a0);
        lVar13 = *plVar21;
        if ((undefined1 *)(lVar13 + 0x18) != local_1d8) {
          FUN_1802c1b60((undefined1 *)(lVar13 + 0x18),local_1d8._0_8_,
                        (longlong)(local_1d8._8_8_ - local_1d8._0_8_) / 0x28);
        }
        if ((undefined1 *)(lVar13 + 0x30) != local_1c0) {
          puVar20 = local_1c0;
          if (0xf < uStack_1a8) {
            puVar20 = (undefined1 *)local_1c0._0_8_;
          }
          FUN_180113930((undefined1 *)(lVar13 + 0x30),puVar20,uStack_1b0);
        }
        if ((undefined1 *)(lVar13 + 0x50) != local_1a0) {
          puVar20 = local_1a0;
          if (0xf < uStack_188) {
            puVar20 = (undefined1 *)local_1a0._0_8_;
          }
          FUN_180113930((undefined1 *)(lVar13 + 0x50),puVar20,uStack_190);
        }
      }
    }
    else {
      local_d8 = (undefined1  [16])0x0;
      local_c8 = (undefined8 ******)0x0;
      local_c0 = 0;
      FUN_18015ba30(local_d8,&DAT_1807d30f8,1);
      uVar24 = 0;
      lVar13 = (longlong)(local_1d8._8_8_ - local_1d8._0_8_) >> 0x3f;
      if ((longlong)(local_1d8._8_8_ - local_1d8._0_8_) / 0x28 + lVar13 != lVar13) {
        lVar16 = 0;
        pcVar34 = "{{path:\"{}\",type:{}}}";
        pppppppuVar15 = (undefined8 *******)0x15;
        lVar13 = local_1d8._0_8_;
        do {
          ppppppuVar26 = (undefined8 ******)(lVar16 + lVar13);
          ppppppuStack_218 = ppppppuVar26;
          if ((undefined8 *****)0xf < ppppppuVar26[3]) {
            ppppppuStack_218 = (undefined8 ******)*ppppppuVar26;
          }
          ppppppuStack_210 = (undefined8 ******)ppppppuVar26[2];
          local_228 = 0xc000000000000000;
          local_208 = CONCAT44(local_208._4_4_,*(undefined4 *)(ppppppuVar26 + 4));
          uStack_220 = 0x1000000000000010;
          local_298 = (char *)0x2;
          puStack_290 = &local_228;
          local_268 = (undefined8 *******)pcVar34;
          pppppppuStack_260 = pppppppuVar15;
          FUN_1801d97f0(local_f8,&local_268,&local_298);
          pppppppuVar14 = local_f8;
          if (0xf < local_e0) {
            pppppppuVar14 = local_f8[0];
          }
          FUN_18015b2a0(local_d8,pppppppuVar14,local_f8[2]);
          FUN_18015c010(local_f8);
          uVar24 = uVar24 + 1;
          if (uVar24 < (ulonglong)((longlong)(local_1d8._8_8_ - local_1d8._0_8_) / 0x28)) {
            FUN_18015b2a0(local_d8,&DAT_1807d30d8,1);
          }
          lVar16 = lVar16 + 0x28;
          lVar13 = local_1d8._0_8_;
        } while (uVar24 < (ulonglong)((longlong)(local_1d8._8_8_ - local_1d8._0_8_) / 0x28));
      }
      FUN_18015b2a0(local_d8,&DAT_1807d32dc,1);
      local_148 = local_2a0 + -0x22000020000000;
      uStack_150 = local_2a0;
      local_178 = (undefined8 ******)0x4000000000000000;
      uStack_170 = 0x4000000000000008;
      pppppppuStack_140 = (undefined8 *******)local_d8;
      if (0xf < local_c0) {
        pppppppuStack_140 = (undefined8 *******)local_d8._0_8_;
      }
      local_138 = local_c8;
      uStack_168 = 0xc000000000000010;
      puVar20 = local_1c0;
      if (0xf < uStack_1a8) {
        puVar20 = (undefined1 *)local_1c0._0_8_;
      }
      local_130 = SUB84(puVar20,0);
      uStack_12c = (undefined4)((ulonglong)puVar20 >> 0x20);
      uStack_128 = (undefined4)uStack_1b0;
      uStack_124 = (undefined4)((ulonglong)uStack_1b0 >> 0x20);
      uStack_160 = 0xc000000000000020;
      puVar20 = local_1a0;
      if (0xf < uStack_188) {
        puVar20 = (undefined1 *)local_1a0._0_8_;
      }
      uStack_120 = SUB84(puVar20,0);
      local_11c = (undefined4)((ulonglong)puVar20 >> 0x20);
      uStack_118 = (undefined4)uStack_190;
      local_114 = (undefined4)((ulonglong)uStack_190 >> 0x20);
      local_158 = 0xc000000000000030;
      local_298 = 
      "if(typeof(SClient)!==\'undefined\'){{SClient.receive({{type:\"updateWeapons\",content:{{xuid:\"{}\",account_id:\"{}\",weapons:{},active_path:\"{}\",style:{}}}}});}}"
      ;
      puStack_290 = (ulonglong *)0x9a;
      local_2b8 = (undefined8 ******)0x5;
      puStack_2b0 = &local_178;
      local_268 = (undefined8 *******)0x1807d3240;
      pppppppuStack_260 = (undefined8 *******)0x9a;
      uVar32 = FUN_1801d97f0(local_b8,&local_268,&local_2b8);
      cVar10 = FUN_1802bef30(uVar32,local_b8);
      if (cVar10 != '\0') {
        plVar21 = (longlong *)FUN_1802c1830(&DAT_180b8fb38,&local_268,&local_2a0);
        lVar13 = *plVar21;
        puVar27 = (undefined8 *)(lVar13 + 0x18);
        if (puVar27 != (undefined8 *)local_1d8) {
          FUN_1801b3620(puVar27);
          *puVar27 = local_1d8._0_8_;
          *(undefined8 *)(lVar13 + 0x20) = local_1d8._8_8_;
          *(undefined1 (**) [16])(lVar13 + 0x28) = local_1c8;
          local_1d8 = (undefined1  [16])0x0;
          local_1c8 = (undefined1 (*) [16])0x0;
        }
        puVar27 = (undefined8 *)(lVar13 + 0x30);
        if (puVar27 != (undefined8 *)local_1c0) {
          FUN_18015c010(puVar27);
          *puVar27 = local_1c0._0_8_;
          *(undefined8 *)(lVar13 + 0x38) = local_1c0._8_8_;
          *(undefined8 *)(lVar13 + 0x40) = uStack_1b0;
          *(ulonglong *)(lVar13 + 0x48) = uStack_1a8;
          uStack_1b0 = 0;
          uStack_1a8 = 0xf;
          auVar7[0xf] = 0;
          auVar7._0_15_ = local_1c0._1_15_;
          local_1c0 = auVar7 << 8;
        }
        puVar27 = (undefined8 *)(lVar13 + 0x50);
        if (puVar27 != (undefined8 *)local_1a0) {
          FUN_18015c010(puVar27);
          *puVar27 = local_1a0._0_8_;
          *(undefined8 *)(lVar13 + 0x58) = local_1a0._8_8_;
          *(undefined8 *)(lVar13 + 0x60) = uStack_190;
          *(ulonglong *)(lVar13 + 0x68) = uStack_188;
          uStack_190 = 0;
          uStack_188 = 0xf;
          auVar8[0xf] = 0;
          auVar8._0_15_ = local_1a0._1_15_;
          local_1a0 = auVar8 << 8;
        }
      }
      FUN_18015c010(local_b8);
      FUN_18015c010(local_d8);
    }
  }
  FUN_18015c010(local_1a0);
  FUN_18015c010(local_1c0);
  FUN_1801b3620(local_1d8);
LAB_1802c0acd:
}



