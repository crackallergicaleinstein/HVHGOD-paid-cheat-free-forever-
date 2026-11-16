// FUN_1803032c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803032c0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1803032c0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  float *pfVar1;
  short sVar2;
  int iVar3;
  ULONGLONG UVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  ulonglong uVar11;
  undefined4 local_b7;
  undefined2 local_b3;
  undefined1 local_b1;
  undefined7 uStack_6f;
  uint7 uStack_67;
  
  if (((DAT_1808e3aa8 == '\0') || (DAT_1808e3a60 != param_1)) || (DAT_1808e3a68 != param_2)) {
    _DAT_1808e3a78 = 0;
    _DAT_1808e3a80 = 0;
    _DAT_1808e3a88 = 0;
    _DAT_1808e3a90 = 0;
    _DAT_1808e3a98 = 0x1c3003;
    _DAT_1808e3aa0 = CONCAT71(uStack_6f,0xb);
    _DAT_1808e3aa8 = (ulonglong)uStack_67 << 8;
    if (param_1 == 0) {
      DAT_1808e3a60 = param_1;
      DAT_1808e3a68 = param_2;
      DAT_1808e3a70 = 0;
      _DAT_1808e3a78 = 0;
      _DAT_1808e3a80 = 0;
      _DAT_1808e3a88 = 0;
      _DAT_1808e3a90 = 0;
      _DAT_1808e3a98 = 0x1c3003;
      return &DAT_1808e3a60;
    }
    if (param_2 == 0) {
      DAT_1808e3a60 = param_1;
      DAT_1808e3a68 = param_2;
      DAT_1808e3a70 = 0;
      _DAT_1808e3a78 = 0;
      _DAT_1808e3a80 = 0;
      _DAT_1808e3a88 = 0;
      _DAT_1808e3a90 = 0;
      _DAT_1808e3a98 = 0x1c3003;
      return &DAT_1808e3a60;
    }
    lVar5 = *(longlong *)(param_2 + 0x38);
    if (lVar5 != param_1) {
      DAT_1808e3a60 = param_1;
      DAT_1808e3a68 = param_2;
      DAT_1808e3a70 = 0;
      _DAT_1808e3a78 = 0;
      _DAT_1808e3a80 = 0;
      _DAT_1808e3a88 = 0;
      _DAT_1808e3a90 = 0;
      _DAT_1808e3a98 = 0x1c3003;
      return &DAT_1808e3a60;
    }
    DAT_1808e3a70 = *(ulonglong *)(lVar5 + 0xd50);
    uVar6 = 0xffffffffffffffff;
    iVar3 = DAT_180c6f2a0;
    DAT_1808e3a60 = param_1;
    DAT_1808e3a68 = param_2;
    if (DAT_180c6f2a0 == 0) {
      UVar4 = GetTickCount64();
      if (UVar4 < DAT_180c6f298) {
        iVar3 = 0;
      }
      else {
        iVar3 = FUN_1805f68d0(&DAT_1808ff420);
        if (iVar3 != 0) goto LAB_180303853;
        if (DAT_1808ff46c == 0x7fffffff) {
          DAT_1808ff46c = 0x7ffffffe;
          goto LAB_180303848;
        }
        if ((DAT_180c6f2a0 == 0) && (DAT_180c6f298 <= UVar4)) {
          DAT_180c6f2a0 = FUN_1804174b0("C_BaseEntity",0xa4a37590);
          if (DAT_180c6f2a0 == 0) {
            DAT_180c6f298 = UVar4 + 1000;
          }
          else {
            DAT_180c6f298 = 0xffffffffffffffff;
          }
        }
        iVar3 = DAT_180c6f2a0;
        FUN_1805f68fc(&DAT_1808ff420);
      }
    }
    if ((*(byte *)(iVar3 + lVar5) & 0x10) != 0) {
      DAT_1808e3a70 = DAT_1808e3a70 | 0x20;
    }
    iVar3 = DAT_180c6f294;
    if (DAT_180c6f294 == 0) {
      UVar4 = GetTickCount64();
      if (UVar4 < DAT_180c6f2b8) {
        iVar3 = 0;
      }
      else {
        iVar3 = FUN_1805f68d0(&DAT_1808ff470);
        if (iVar3 != 0) goto LAB_180303853;
        if (DAT_1808ff4bc == 0x7fffffff) {
          DAT_1808ff4bc = 0x7ffffffe;
          goto LAB_180303848;
        }
        if ((DAT_180c6f294 == 0) && (DAT_180c6f2b8 <= UVar4)) {
          DAT_180c6f294 = FUN_1804174b0("C_BaseModelEntity",0xae8e690f);
          if (DAT_180c6f294 == 0) {
            DAT_180c6f2b8 = UVar4 + 1000;
          }
          else {
            DAT_180c6f2b8 = 0xffffffffffffffff;
          }
        }
        iVar3 = DAT_180c6f294;
        FUN_1805f68fc(&DAT_1808ff470);
      }
    }
    lVar5 = iVar3 + param_1;
    iVar3 = DAT_180c6f2b0;
    if (DAT_180c6f2b0 == 0) {
      UVar4 = GetTickCount64();
      if (UVar4 < DAT_180c6f2a8) {
        iVar3 = 0;
      }
      else {
        iVar3 = FUN_1805f68d0(&DAT_1808ff380);
        if (iVar3 != 0) goto LAB_180303853;
        if (DAT_1808ff3cc == 0x7fffffff) {
          DAT_1808ff3cc = 0x7ffffffe;
          goto LAB_180303848;
        }
        if ((DAT_180c6f2b0 == 0) && (DAT_180c6f2a8 <= UVar4)) {
          DAT_180c6f2b0 = FUN_1804174b0("CCollisionProperty",0xe57f80c);
          if (DAT_180c6f2b0 == 0) {
            DAT_180c6f2a8 = UVar4 + 1000;
          }
          else {
            DAT_180c6f2a8 = 0xffffffffffffffff;
          }
        }
        iVar3 = DAT_180c6f2b0;
        FUN_1805f68fc(&DAT_1808ff380);
      }
    }
    uVar11 = *(ulonglong *)(iVar3 + lVar5);
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar11;
    auVar7 = vshufps_avx(auVar7,auVar7,0x55);
    _DAT_1808e3a78 = CONCAT44(auVar7._0_4_,(int)uVar11);
    _DAT_1808e3a80 = CONCAT44(_DAT_1808e3a84,*(undefined4 *)((longlong)iVar3 + 8 + lVar5));
    iVar3 = DAT_180c6f280;
    if (DAT_180c6f280 == 0) {
      UVar4 = GetTickCount64();
      if (UVar4 < DAT_180c6f278) {
        iVar3 = 0;
      }
      else {
        iVar3 = FUN_1805f68d0(&DAT_1808ff330);
        if (iVar3 != 0) {
LAB_180303853:
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(5);
        }
        if (DAT_1808ff37c == 0x7fffffff) {
          DAT_1808ff37c = 0x7ffffffe;
LAB_180303848:
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(6);
        }
        if ((DAT_180c6f280 == 0) && (DAT_180c6f278 <= UVar4)) {
          DAT_180c6f280 = FUN_1804174b0("CCollisionProperty",0x7d388d3e,param_3,param_4,uVar11);
          if (DAT_180c6f280 == 0) {
            uVar6 = UVar4 + 1000;
          }
          DAT_180c6f278 = uVar6;
        }
        iVar3 = DAT_180c6f280;
        FUN_1805f68fc(&DAT_1808ff330);
      }
    }
    pfVar1 = (float *)(iVar3 + lVar5);
    fVar8 = *pfVar1;
    fVar10 = pfVar1[1];
    fVar9 = *(float *)((longlong)iVar3 + 8 + lVar5);
    _DAT_1808e3a80 = CONCAT44(fVar8,DAT_1808e3a80);
    _DAT_1808e3a88 = CONCAT44(fVar9,fVar10);
    _DAT_1808e3a98 = 0x1c3003;
    if (DAT_1808e3a70 != 0) {
      _DAT_1808e3a98 = DAT_1808e3a70;
    }
    _DAT_1808e3aa0 = CONCAT17(local_b1,CONCAT25(local_b3,CONCAT41(local_b7,0xb)));
    _DAT_1808e3a90 = param_1;
    if ((DAT_1808e3a70 != 0) && (sVar2 = thunk_FUN_180624430(), sVar2 < 1)) {
      sVar2 = thunk_FUN_180624430(DAT_1808e3a7c);
      if (sVar2 < 1) {
        sVar2 = thunk_FUN_180624430(DAT_1808e3a80);
        if (((((sVar2 < 1) && (((uint)fVar8 & 0x7f800000) != 0x7f800000)) &&
             (((uint)fVar10 & 0x7f800000) != 0x7f800000)) &&
            ((((uint)fVar9 & 0x7f800000) != 0x7f800000 && (DAT_1808e3a78 < fVar8)))) &&
           ((DAT_1808e3a7c < fVar10 && (DAT_1808e3a80 < fVar9)))) {
          _DAT_1808e3aa8 = CONCAT71(DAT_1808e3aa8_1,1);
          return &DAT_1808e3a60;
        }
      }
    }
    _DAT_1808e3aa8 = _DAT_1808e3aa8 & 0xffffffffffffff00;
  }
  return &DAT_1808e3a60;
}



