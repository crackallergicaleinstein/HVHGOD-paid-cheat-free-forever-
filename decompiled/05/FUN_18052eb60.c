// FUN_18052eb60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18052eb60 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_18052eb60(void)

{
  undefined1 auVar1 [16];
  longlong *plVar2;
  undefined8 *******pppppppuVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *******pppppppuVar11;
  uint uVar12;
  bool bVar13;
  undefined1 auStack_98 [32];
  undefined1 local_78 [16];
  undefined8 uStack_68;
  ulonglong uStack_60;
  undefined8 *******local_58;
  undefined8 uStack_50;
  longlong lStack_48;
  ulonglong uStack_40;
  undefined8 ******local_38;
  undefined8 uStack_30;
  longlong lStack_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  iVar7 = DAT_1808e4fb8;
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_98;
  if (DAT_1808e4fb8 < 0) {
  }
  if (DAT_180b909b0 == 0) {
  }
  if (DAT_1808e6670 != '\0') {
    if (DAT_180bbef48 == '\0') {
      DAT_180bbef48 = '\x01';
      FUN_18052c6c0();
    }
  }
  DAT_180bbef48 = '\0';
  DAT_1808e4fb8 = -1;
  uStack_68 = 0;
  uStack_60 = 0xf;
  local_78._1_15_ = SUB1615((undefined1  [16])0x0,1);
  auVar1[0xf] = 0;
  auVar1._0_15_ = local_78._1_15_;
  local_78 = auVar1 << 8;
  local_58 = (undefined8 *******)DAT_1808e6890;
  uStack_50 = uRam00000001808e6898;
  lStack_48 = _DAT_1808e68a0;
  uStack_40 = DAT_1808e68a8;
  local_38 = DAT_1808e6890;
  uStack_30 = uRam00000001808e6898;
  lStack_28 = _DAT_1808e68a0;
  uStack_20 = DAT_1808e68a8;
  _DAT_1808e68a0 = 0;
  DAT_1808e68a8 = 0xf;
  DAT_1808e6890 = (undefined8 ******)((ulonglong)DAT_1808e6890 & 0xffffffffffffff00);
  FUN_18015c010(&DAT_1808e6890);
  DAT_1808e6890 = (undefined8 ******)local_78._0_8_;
  uRam00000001808e6898 = local_78._8_8_;
  _DAT_1808e68a0 = uStack_68;
  DAT_1808e68a8 = uStack_60;
  FUN_18015c010(local_78);
  FUN_1804759c0(DAT_180c62f50,iVar7);
  uVar5 = uStack_40;
  lVar4 = lStack_48;
  pppppppuVar3 = local_58;
  pppppppuVar11 = &local_38;
  if (0xf < uStack_40) {
    pppppppuVar11 = local_58;
  }
  uVar12 = 0;
  if ((lStack_48 == 0xd) &&
     (iVar6 = memcmp(pppppppuVar11,"Custom Agents",0xd), plVar2 = DAT_180c62f50, iVar6 == 0)) {
    *(undefined4 *)((longlong)DAT_180c62f50 + 0x7c) = 2;
    *(undefined4 *)(plVar2 + 0x1f) = 0;
  }
  pppppppuVar11 = &local_38;
  if (0xf < uVar5) {
    pppppppuVar11 = pppppppuVar3;
  }
  if ((lVar4 == 8) && (iVar6 = memcmp(pppppppuVar11,"Stickers",8), iVar6 == 0)) {
LAB_18052ed31:
    pppppppuVar11 = &local_38;
    if (0xf < uVar5) {
      pppppppuVar11 = pppppppuVar3;
    }
    if (lVar4 == 8) {
      iVar6 = memcmp(pppppppuVar11,"Stickers",8);
      bVar13 = iVar6 == 0;
    }
    else {
      bVar13 = false;
    }
    FUN_18052acc0(*(undefined4 *)
                   (*(longlong *)(*DAT_180c62f50 + (longlong)(int)DAT_180c62f50[3] * 8) + 0x4968),
                  iVar7,(bVar13 ^ 1U) + 1,0);
  }
  else {
    pppppppuVar11 = &local_38;
    if (0xf < uVar5) {
      pppppppuVar11 = pppppppuVar3;
    }
    if (lVar4 == 6) {
      lVar10 = 0;
      do {
        lVar9 = lVar10 + 1;
        if (*(byte *)((longlong)pppppppuVar11 + lVar10) != "Charms"[lVar10]) {
          uVar8 = -(uint)(*(byte *)((longlong)pppppppuVar11 + lVar10) < (byte)"Charms"[lVar10]) | 1;
          goto LAB_18052ed2d;
        }
        lVar10 = lVar9;
      } while (lVar9 != 6);
      uVar8 = 0;
LAB_18052ed2d:
      if (uVar8 == 0) goto LAB_18052ed31;
    }
    pppppppuVar11 = &local_38;
    if (0xf < uVar5) {
      pppppppuVar11 = pppppppuVar3;
    }
    if ((lVar4 != 0xc) || (iVar7 = memcmp(pppppppuVar11,"Skin Changer",0xc), iVar7 != 0)) {
      pppppppuVar11 = &local_38;
      if (0xf < uVar5) {
        pppppppuVar11 = pppppppuVar3;
      }
      if (lVar4 == 5) {
        lVar10 = 0;
        do {
          lVar9 = lVar10 + 1;
          if (*(byte *)((longlong)pppppppuVar11 + lVar10) != (&DAT_1806bd334)[lVar10]) {
            uVar8 = -(uint)(*(byte *)((longlong)pppppppuVar11 + lVar10) <
                           (byte)(&DAT_1806bd334)[lVar10]) | 1;
            goto LAB_18052ee0d;
          }
          lVar10 = lVar9;
        } while (lVar9 != 5);
        uVar8 = 0;
LAB_18052ee0d:
        if (uVar8 == 0) goto LAB_18052eebf;
      }
      pppppppuVar11 = &local_38;
      if (0xf < uVar5) {
        pppppppuVar11 = pppppppuVar3;
      }
      if (lVar4 == 6) {
        lVar10 = 0;
        do {
          lVar9 = lVar10 + 1;
          if (*(byte *)((longlong)pppppppuVar11 + lVar10) != "Gloves"[lVar10]) {
            uVar8 = -(uint)(*(byte *)((longlong)pppppppuVar11 + lVar10) < (byte)"Gloves"[lVar10]) |
                    1;
            goto LAB_18052ee4f;
          }
          lVar10 = lVar9;
        } while (lVar9 != 6);
        uVar8 = 0;
LAB_18052ee4f:
        if (uVar8 == 0) goto LAB_18052eebf;
      }
      pppppppuVar11 = &local_38;
      if (0xf < uVar5) {
        pppppppuVar11 = pppppppuVar3;
      }
      if (lVar4 == 6) {
        lVar10 = 0;
        do {
          lVar9 = lVar10 + 1;
          if (*(byte *)((longlong)pppppppuVar11 + lVar10) != "Agents"[lVar10]) {
            uVar12 = -(uint)(*(byte *)((longlong)pppppppuVar11 + lVar10) < (byte)"Agents"[lVar10]) |
                     1;
            break;
          }
          lVar10 = lVar9;
        } while (lVar9 != 6);
        if (uVar12 == 0) goto LAB_18052eebf;
      }
      pppppppuVar11 = &local_38;
      if (0xf < uVar5) {
        pppppppuVar11 = pppppppuVar3;
      }
      if ((lVar4 != 0xd) || (iVar7 = memcmp(pppppppuVar11,"Custom Agents",0xd), iVar7 != 0)) {
        DAT_180bbef4c = 1;
      }
    }
  }
LAB_18052eebf:
  FUN_18015c010(&local_38);
}



