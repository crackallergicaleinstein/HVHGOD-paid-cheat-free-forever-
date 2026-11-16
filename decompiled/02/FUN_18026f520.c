// FUN_18026f520 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18026f520 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18026f520(float *param_1,undefined8 param_2,float *param_3,float *param_4,longlong param_5)

{
  char *pcVar1;
  uint uVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  ULONGLONG UVar6;
  undefined4 *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  code *pcVar11;
  code *pcVar12;
  int iVar13;
  undefined4 *puVar14;
  float fVar15;
  undefined8 uVar16;
  undefined1 auVar17 [64];
  float fVar18;
  undefined8 uVar19;
  undefined1 auVar20 [64];
  undefined8 uVar21;
  undefined1 auVar22 [64];
  undefined1 auStack_188 [32];
  undefined1 *local_168;
  undefined1 local_160;
  undefined8 local_158;
  undefined1 local_148;
  undefined8 local_140;
  undefined *local_138;
  char *local_128;
  longlong local_120;
  char *local_118;
  longlong local_110;
  undefined1 local_108 [8];
  code *pcStack_100;
  ulonglong local_f8;
  float local_f0;
  float local_ec;
  float local_e8;
  float *local_e0;
  undefined1 local_d8 [16];
  ulonglong local_c8;
  byte local_9f;
  ulonglong local_88;
  
  local_88 = DAT_1808d5f00 ^ (ulonglong)auStack_188;
  iVar13 = 0;
  *param_4 = 0.0;
  fVar18 = 0.0;
  if (*param_1 <= 0.0) {
  }
  if (param_1[1] <= 0.0) {
  }
  iVar5 = DAT_180c64fc8;
  local_140 = param_2;
  local_e0 = param_4;
  if (DAT_180c64fc8 == 0) {
    UVar6 = GetTickCount64();
    if (UVar6 < DAT_180c64fc0) {
      iVar5 = 0;
    }
    else {
      local_138 = &DAT_1808f1440;
      iVar5 = FUN_1805f68d0(&DAT_1808f1440);
      if (iVar5 != 0) goto LAB_18026fc5c;
      if (DAT_1808f148c == 0x7fffffff) {
        DAT_1808f148c = 0x7ffffffe;
        goto LAB_18026fc71;
      }
      if ((DAT_180c64fc8 == 0) && (DAT_180c64fc0 <= UVar6)) {
        DAT_180c64fc8 = FUN_1804174b0("C_BaseEntity",0xa5bfefb3);
        if (DAT_180c64fc8 == 0) {
          DAT_180c64fc0 = UVar6 + 1000;
        }
        else {
          DAT_180c64fc0 = 0xffffffffffffffff;
        }
      }
      iVar5 = DAT_180c64fc8;
      FUN_1805f68fc(&DAT_1808f1440);
    }
  }
  local_148 = *(undefined1 *)((longlong)iVar5 + *(longlong *)(param_5 + 8));
  local_e8 = param_1[3];
  local_f0 = local_e8 * *param_3;
  local_ec = local_e8 * param_3[1];
  local_e8 = local_e8 * param_3[2];
  FUN_180419210(local_e8,local_d8);
  local_c8 = local_c8 | 0x4000000000;
  local_9f = local_9f | 2;
  puVar7 = (undefined4 *)FUN_18027b660();
  puVar14 = (undefined4 *)&DAT_180b909e0;
  if (puVar7 != (undefined4 *)0x0) {
    puVar14 = puVar7;
  }
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  lVar9 = DAT_1808f13e0;
  lVar10 = DAT_1808da460;
  if ((DAT_1808f13e0 != DAT_1808da460) || (pcVar11 = (code *)DAT_180c64fb8, DAT_180c64fb8 == 0)) {
    UVar6 = GetTickCount64();
    if ((lVar9 == lVar10) && (UVar6 < DAT_180c64fb0)) {
    }
    local_138 = &DAT_1808f13f0;
    iVar5 = FUN_1805f68d0(&DAT_1808f13f0);
    if (iVar5 != 0) {
LAB_18026fc5c:
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1808f143c == 0x7fffffff) {
      DAT_1808f143c = 0x7ffffffe;
LAB_18026fc71:
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if (DAT_1808f13e0 == lVar10) {
      if ((DAT_180c64fb8 == 0) && (DAT_180c64fb0 <= UVar6)) goto LAB_18026f778;
    }
    else {
      DAT_1808f13e8 = 1000;
LAB_18026f778:
      lVar9 = -1;
      do {
        local_120 = lVar9 + 1;
        lVar8 = lVar9 + 1;
        lVar9 = local_120;
      } while ("client.dll:48895C24084889742410574883EC2033F6488DB9381C000089B1201C0000488BD939B1301C0000"
               [lVar8] != '\0');
      local_128 = 
      "client.dll:48895C24084889742410574883EC2033F6488DB9381C000089B1201C0000488BD939B1301C0000";
      local_118 = "patterns::trace_data_destroy";
      local_110 = 0x1c;
      DAT_180c64fb8 = FUN_1800e5d20(&local_118,&local_128);
      DAT_1808f13e0 = lVar10;
      DAT_180c64fb0 = 0xffffffffffffffff;
      if (DAT_180c64fb8 == 0) {
        DAT_180c64fb0 = DAT_1808f13e8 + UVar6;
        if (DAT_1808f13e8 < 60000) {
          DAT_1808f13e8 = DAT_1808f13e8 * 2;
        }
        else {
          DAT_1808f13e8 = 60000;
        }
      }
      else {
        DAT_1808f13e8 = 1000;
      }
    }
    pcVar11 = (code *)DAT_180c64fb8;
    FUN_1805f68fc(&DAT_1808f13f0);
    if (pcVar11 == (code *)0x0) {
    }
  }
  pcStack_100 = pcVar11;
  local_108 = (undefined1  [8])puVar14;
  if (*(longlong *)(puVar14 + 2) == 0) {
    *(undefined4 **)(puVar14 + 2) = puVar14 + 6;
  }
  if (*(longlong *)(puVar14 + 0x70a) == 0) {
    *(undefined4 **)(puVar14 + 0x70a) = puVar14 + 0x70e;
  }
  *puVar14 = 0;
  puVar14[1] = 0x42500000;
  *(undefined8 *)(puVar14 + 0x708) = 0;
  *(undefined8 *)(puVar14 + 0x73e) = 0;
  *(undefined8 *)(puVar14 + 0x740) = 0;
  *(undefined8 *)(puVar14 + 0x742) = 0;
  puVar14[0x744] = 0x3f800000;
  *(undefined1 *)(puVar14 + 0x745) = 0;
  *(undefined8 *)(puVar14 + 0x706) = 0;
  *(undefined8 *)((longlong)puVar14 + 0x1d15) = 0;
  *(undefined8 *)((longlong)puVar14 + 0x1d1d) = 0;
  *(undefined8 *)((longlong)puVar14 + 0x1d25) = 0;
  *(undefined8 *)((longlong)puVar14 + 0x1d2d) = 0;
  *(undefined8 *)((longlong)puVar14 + 0x1d35) = 0;
  *(undefined8 *)((longlong)puVar14 + 0x1d3d) = 0;
  *(undefined8 *)((longlong)puVar14 + 0x1d45) = 0;
  *(undefined8 *)((longlong)puVar14 + 0x1d4d) = 0;
  *(undefined8 *)((longlong)puVar14 + 0x1d55) = 0;
  *(undefined2 *)((longlong)puVar14 + 0x1d5d) = 0;
  *(undefined1 *)((longlong)puVar14 + 0x1d5f) = 0;
  local_168 = local_d8;
  FUN_180419860();
  iVar5 = puVar14[0x708];
  local_140 = CONCAT44(local_140._4_4_,iVar5);
  if ((((0xff < iVar5 - 1U) || ((int)puVar14[0x70c] < iVar5)) || (0x10000 < (int)puVar14[0x70c])) ||
     (*(longlong *)(puVar14 + 0x70a) == 0)) goto LAB_18026fc03;
  auVar17 = ZEXT464((uint)param_1[2]);
  auVar20 = ZEXT464((uint)param_1[1]);
  auVar22 = ZEXT464((uint)*param_1);
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  lVar9 = DAT_1808f1388;
  lVar10 = DAT_1808da460;
  uVar21 = auVar22._0_8_;
  uVar19 = auVar20._0_8_;
  uVar16 = auVar17._0_8_;
  if ((DAT_1808f1388 == DAT_1808da460) && (pcVar12 = (code *)DAT_180c64fa0, DAT_180c64fa0 != 0)) {
LAB_18026faa8:
    local_158 = 0;
    local_160 = local_148;
    local_168 = (undefined1 *)CONCAT44(local_168._4_4_,4);
    (*pcVar12)(puVar14,uVar21,uVar19,uVar16);
  }
  else {
    UVar6 = GetTickCount64();
    if ((lVar9 != lVar10) || (DAT_180c64fa8 <= UVar6)) {
      local_138 = &DAT_1808f1390;
      iVar5 = FUN_1805f68d0(&DAT_1808f1390);
      if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1808f13dc == 0x7fffffff) {
        DAT_1808f13dc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      if (DAT_1808f1388 == lVar10) {
        if ((DAT_180c64fa0 == 0) && (DAT_180c64fa8 <= UVar6)) goto LAB_18026fa02;
      }
      else {
        DAT_1808f1380 = 1000;
LAB_18026fa02:
        lVar9 = -1;
        do {
          local_110 = lVar9 + 1;
          pcVar1 = "lient.dll:40535741564883EC508B8424" + lVar9;
          lVar9 = local_110;
        } while (*pcVar1 != '\0');
        local_118 = "client.dll:40535741564883EC508B8424";
        local_128 = "patterns::trace_bullet";
        local_120 = 0x16;
        DAT_180c64fa0 = FUN_1800e5d20(&local_128,&local_118);
        DAT_1808f1388 = lVar10;
        DAT_180c64fa8 = 0xffffffffffffffff;
        if (DAT_180c64fa0 == 0) {
          DAT_180c64fa8 = DAT_1808f1380 + UVar6;
          if (DAT_1808f1380 < 60000) {
            DAT_1808f1380 = DAT_1808f1380 * 2;
          }
          else {
            DAT_1808f1380 = 60000;
          }
        }
        else {
          DAT_1808f1380 = 1000;
        }
      }
      pcVar12 = (code *)DAT_180c64fa0;
      FUN_1805f68fc(&DAT_1808f1390);
      uVar21 = auVar22._0_8_;
      uVar19 = auVar20._0_8_;
      uVar16 = auVar17._0_8_;
      if (pcVar12 != (code *)0x0) goto LAB_18026faa8;
    }
  }
  uVar2 = puVar14[0x708];
  lVar10 = *(longlong *)(puVar14 + 0x70a);
  if ((((uVar2 < 0x101) && ((int)uVar2 <= (int)puVar14[0x70c])) && ((int)puVar14[0x70c] < 0x10001))
     && (((uVar2 != 0 && (lVar10 != 0)) && ((0 < (int)uVar2 && ((int)uVar2 <= (int)local_140)))))) {
    while (lVar9 = lVar10 + (longlong)iVar13 * 0x18, lVar9 != 0) {
      _local_108 = (undefined1  [16])0x0;
      local_f8 = 0;
      lVar8 = FUN_18017ea70();
      *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
      cVar3 = FUN_1804514c0(local_108,lVar9,0x18);
      if (cVar3 == '\0') {
        lVar10 = FUN_18017ea70();
        if (*(int *)(lVar10 + 4) != 0) {
          *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
        }
        break;
      }
      lVar9 = FUN_18017ea70();
      if (*(int *)(lVar9 + 4) != 0) {
        *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
      }
      fVar15 = pcStack_100._0_4_;
      sVar4 = thunk_FUN_180624430(pcStack_100._0_4_);
      if ((0 < sVar4) || (fVar15 <= fVar18)) break;
      if ((local_f8 & 0x100000000) != 0) {
        fVar18 = (float)local_108._4_4_;
        sVar4 = thunk_FUN_180624430(local_108._4_4_);
        if (((sVar4 < 1) && (fVar18 < 1.0)) && ((float)local_108._0_4_ <= fVar18)) {
          *local_e0 = fVar15;
        }
        break;
      }
      iVar13 = iVar13 + 1;
      if ((int)uVar2 <= iVar13) break;
    }
  }
LAB_18026fc03:
  if (pcVar11 != (code *)0x0) {
    (*pcVar11)(puVar14);
  }
}



