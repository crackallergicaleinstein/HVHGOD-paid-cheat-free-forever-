// FUN_18020d300 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18020d300 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_18020d300(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  uint *puVar6;
  ulonglong uVar7;
  code *pcVar8;
  longlong *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  uint uVar12;
  HRESULT HVar13;
  HRESULT HVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  uint uVar18;
  uint uVar19;
  uint *puVar20;
  uint uVar21;
  longlong lVar22;
  undefined8 *puVar23;
  uint uVar24;
  ulonglong uVar25;
  undefined8 *puVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  int iVar29;
  bool bVar30;
  undefined1 auStackY_108 [32];
  uint local_ac;
  uint local_a8 [2];
  longlong *local_a0;
  longlong *local_98;
  longlong *local_90;
  longlong *local_88;
  longlong *local_80;
  undefined1 local_78 [16];
  undefined8 *local_68;
  undefined1 local_60 [16];
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStackY_108;
  puVar6 = (uint *)*param_2;
  uVar7 = param_2[1];
  if (0x1b < uVar7) {
    uVar21 = *puVar6;
    uVar28 = (ulonglong)uVar21;
    uVar19 = puVar6[3];
    if ((((short)puVar6[1] == 0xc) && (uVar19 - 1 < 0x40)) && (uVar18 = 0, uVar19 != 0)) {
LAB_18020d361:
      uVar12 = uVar18 * 0xc + 0x10;
      uVar27 = (ulonglong)uVar12;
      if (uVar27 + 0xc <= uVar7) {
        if (*(int *)(uVar27 + (longlong)puVar6) != 0x41544144) goto code_r0x00018020d384;
        uVar12 = *(int *)(uVar27 + 4 + (longlong)puVar6) + 4 + uVar12;
        uVar27 = (ulonglong)uVar12;
        if (uVar7 < (ulonglong)uVar12 + 0x28) {
        }
        lVar22 = (longlong)puVar6 + uVar27;
        if (lVar22 == 0) {
        }
        uVar4 = *(ushort *)(lVar22 + 0x14);
        uVar18 = (uint)uVar4;
        uVar5 = *(ushort *)(lVar22 + 0x16);
        uVar19 = (uint)uVar5;
        bVar3 = *(byte *)(lVar22 + 0x1b);
        uVar25 = (ulonglong)bVar3;
        if (uVar18 == 0) {
        }
        if (uVar5 == 0) {
        }
        if (bVar3 == 0) {
        }
        if (*(char *)(lVar22 + 0x1a) == '\x10') {
          if (0x1000 < uVar4) {
          }
          if (0x1000 < uVar5) {
          }
          if (uVar7 <= uVar28) {
          }
          if (0x1000000 < uVar7 - uVar28) {
          }
          HVar13 = CoInitializeEx((LPVOID)0x0,0);
          local_a0 = (longlong *)0x0;
          local_88 = (longlong *)0x0;
          local_80 = (longlong *)0x0;
          local_90 = (longlong *)0x0;
          local_98 = (longlong *)0x0;
          HVar14 = CoCreateInstance((IID *)&DAT_1807c6830,(LPUNKNOWN)0x0,1,(IID *)&DAT_1807c67d8,
                                    &local_a0);
          plVar9 = local_88;
          plVar1 = local_a0;
          if (-1 < HVar14) {
            pcVar8 = *(code **)(*local_a0 + 0x70);
            if (local_88 != (longlong *)0x0) {
              local_88 = (longlong *)0x0;
              (**(code **)(*plVar9 + 0x10))();
            }
            iVar15 = (*pcVar8)(plVar1,&local_88);
            if ((-1 < iVar15) &&
               (iVar15 = (**(code **)(*local_88 + 0x80))
                                   (local_88,uVar28 + (longlong)puVar6,(int)uVar7 - uVar21),
               plVar9 = local_80, plVar1 = local_a0, -1 < iVar15)) {
              pcVar8 = *(code **)(*local_a0 + 0x20);
              if (local_80 != (longlong *)0x0) {
                local_80 = (longlong *)0x0;
                (**(code **)(*plVar9 + 0x10))();
              }
              iVar15 = (*pcVar8)(plVar1,local_88,0,1);
              plVar9 = local_80;
              plVar1 = local_90;
              if (-1 < iVar15) {
                pcVar8 = *(code **)(*local_80 + 0x68);
                if (local_90 != (longlong *)0x0) {
                  local_90 = (longlong *)0x0;
                  (**(code **)(*plVar1 + 0x10))();
                }
                iVar15 = (*pcVar8)(plVar9,0,&local_90);
                plVar9 = local_98;
                plVar1 = local_a0;
                if (-1 < iVar15) {
                  pcVar8 = *(code **)(*local_a0 + 0x50);
                  if (local_98 != (longlong *)0x0) {
                    local_98 = (longlong *)0x0;
                    (**(code **)(*plVar9 + 0x10))();
                  }
                  iVar15 = (*pcVar8)(plVar1,&local_98);
                  if (-1 < iVar15) {
                    local_ac = 0;
                    local_a8[0] = 0;
                    iVar15 = (**(code **)(*local_90 + 0x18))(local_90,&local_ac,local_a8);
                    if (((-1 < iVar15) && (local_ac == uVar18)) &&
                       ((local_a8[0] == uVar19 &&
                        (iVar15 = (**(code **)(*local_98 + 0x40))
                                            (local_98,local_90,&DAT_1807c6800,0), -1 < iVar15)))) {
                      lVar2 = (ulonglong)uVar19 * (ulonglong)uVar18 * 4;
                      local_60 = (undefined1  [16])0x0;
                      local_50 = 0;
                      lVar22 = 0;
                      if ((ulonglong)uVar19 * (ulonglong)uVar18 != 0) {
                        lVar17 = FUN_18015bca0(lVar2);
                        local_60._0_8_ = lVar17;
                        lVar22 = lVar17 + lVar2;
                        local_50 = lVar22;
                        FUN_18063ab10(lVar17,0,lVar2);
                        local_60._8_8_ = lVar22;
                      }
                      iVar15 = (**(code **)(*local_98 + 0x38))
                                         (local_98,0,uVar18 * 4,(int)lVar22 - local_60._0_4_);
                      if (-1 < iVar15) {
                        *(uint *)(param_3 + 0x30) = uVar18;
                        *(uint *)(param_3 + 0x34) = uVar19;
                        *(undefined4 *)(param_3 + 0x38) = 0x1c;
                        plVar1 = (longlong *)(param_3 + 0x18);
                        puVar26 = *(undefined8 **)(param_3 + 0x20);
                        puVar23 = (undefined8 *)*plVar1;
                        if (puVar23 != puVar26) {
                          do {
                            FUN_180113710(puVar23);
                            puVar23 = puVar23 + 3;
                          } while (puVar23 != puVar26);
                          puVar26 = (undefined8 *)*plVar1;
                          *(undefined8 **)(param_3 + 0x20) = puVar26;
                        }
                        lVar22 = local_50;
                        if (puVar26 == *(undefined8 **)(param_3 + 0x28)) {
                          FUN_180211270(plVar1,puVar26,local_60);
                        }
                        else {
                          local_50 = 0;
                          uVar11 = local_60._8_8_;
                          uVar10 = local_60._0_8_;
                          local_60 = ZEXT816(0);
                          *puVar26 = uVar10;
                          puVar26[1] = uVar11;
                          puVar26[2] = lVar22;
                          *(longlong *)(param_3 + 0x20) = *(longlong *)(param_3 + 0x20) + 0x18;
                        }
                      }
                      FUN_180113710(local_60);
                    }
                  }
                }
              }
            }
          }
          plVar1 = local_98;
          if (local_98 != (longlong *)0x0) {
            local_98 = (longlong *)0x0;
            (**(code **)(*plVar1 + 0x10))();
          }
          plVar1 = local_90;
          if (local_90 != (longlong *)0x0) {
            local_90 = (longlong *)0x0;
            (**(code **)(*plVar1 + 0x10))();
          }
          plVar1 = local_80;
          if (local_80 != (longlong *)0x0) {
            local_80 = (longlong *)0x0;
            (**(code **)(*plVar1 + 0x10))();
          }
          plVar1 = local_88;
          if (local_88 != (longlong *)0x0) {
            local_88 = (longlong *)0x0;
            (**(code **)(*plVar1 + 0x10))();
          }
          plVar1 = local_a0;
          if (local_a0 != (longlong *)0x0) {
            local_a0 = (longlong *)0x0;
            (**(code **)(*plVar1 + 0x10))();
          }
          if (HVar13 < 0) {
          }
          CoUninitialize();
        }
        iVar29 = 0;
        iVar15 = 0;
        switch(*(char *)(lVar22 + 0x1a)) {
        case '\x01':
          local_ac = 0x47;
          iVar29 = 8;
          break;
        case '\x02':
          local_ac = 0x4d;
          iVar29 = 0x10;
          break;
        default:
          goto LAB_18020d38d;
        case '\x04':
          local_ac = 0x1c;
          goto LAB_18020d85e;
        case '\x13':
          local_ac = 0x5f;
          iVar29 = 0x10;
          break;
        case '\x14':
          local_ac = 0x62;
          iVar29 = 0x10;
          break;
        case '\x1b':
          local_ac = 0x50;
          iVar29 = 8;
          break;
        case '\x1c':
          local_ac = 0x57;
LAB_18020d85e:
          iVar15 = 4;
        }
        bVar30 = false;
        local_a0 = (longlong *)0x0;
        local_a8[0] = 0;
        if (*(int *)(lVar22 + 0x24) == 0) goto LAB_18020d946;
        uVar12 = 0;
        puVar20 = (uint *)((ulonglong)*(uint *)(lVar22 + 0x20) + 0x24 + lVar22);
        goto LAB_18020d8a0;
      }
    }
  }
LAB_18020d38d:
code_r0x00018020d384:
  uVar18 = uVar18 + 1;
  if (uVar19 <= uVar18) {
  }
  goto LAB_18020d361;
  while( true ) {
    uVar12 = uVar12 + 1;
    puVar20 = puVar20 + 3;
    if (*(uint *)(lVar22 + 0x24) <= uVar12) break;
LAB_18020d8a0:
    if (uVar7 < (uVar27 - lVar22) + 8 + (longlong)puVar20) {
    }
    if (puVar20[-1] == 4) {
      lVar2 = (ulonglong)*puVar20 - lVar22;
      if (uVar7 < (longlong)puVar20 + uVar27 + lVar2 + 0xc) {
      }
      if (puVar20[1] < 0xc) {
      }
      uVar12 = *(uint *)((longlong)puVar20 + lVar22 + lVar2);
      local_a8[0] = *(uint *)((longlong)puVar20 + lVar22 + lVar2 + 8);
      if (1 < uVar12) {
      }
      if (local_a8[0] != bVar3) {
      }
      lVar2 = (ulonglong)*(uint *)((longlong)puVar20 + lVar22 + lVar2 + 4) + 4 + lVar2;
      if (uVar7 < (longlong)puVar20 + uVar27 + (ulonglong)(local_a8[0] * 4) + lVar2) {
      }
      bVar30 = uVar12 == 1;
      local_a0 = (longlong *)((longlong)puVar20 + lVar22 + lVar2);
      break;
    }
  }
LAB_18020d946:
  if (uVar7 <= uVar21) {
  }
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined8 *)0x0;
  local_78._0_8_ = FUN_18015bca0(0x18);
  local_68 = (undefined8 *)(local_78._0_8_ + 0x18);
  *(undefined8 *)local_78._0_8_ = 0;
  *(undefined8 *)(local_78._0_8_ + 8) = 0;
  *(undefined8 *)(local_78._0_8_ + 0x10) = 0;
  local_78._8_8_ = local_68;
  uVar28 = (ulonglong)uVar21;
  while( true ) {
    uVar24 = (int)uVar25 - 1;
    uVar25 = (ulonglong)uVar24;
    uVar12 = (uint)(uVar4 >> (uVar24 & 0x1f));
    uVar21 = 1;
    if (1 < uVar12) {
      uVar21 = uVar12;
    }
    uVar16 = (uint)(uVar5 >> (uVar24 & 0x1f));
    uVar12 = 1;
    if (1 < uVar16) {
      uVar12 = uVar16;
    }
    if (iVar29 == 0) {
      uVar21 = uVar21 * uVar12 * iVar15;
    }
    else {
      uVar16 = uVar21 + 3 & 0xfffffffc;
      uVar12 = uVar12 + 3 & 0xfffffffc;
      uVar21 = 4;
      if (4 < uVar12) {
        uVar21 = uVar12;
      }
      uVar12 = 4;
      if (4 < uVar16) {
        uVar12 = uVar16;
      }
      uVar21 = (uVar21 >> 2) * (uVar12 >> 2) * iVar29;
    }
    if (((bVar30) && (local_a0 != (longlong *)0x0)) && (uVar24 < local_a8[0])) {
      uVar12 = *(uint *)((longlong)local_a0 + uVar25 * 4);
      if (uVar21 <= uVar12) {
        uVar12 = uVar21;
      }
    }
    else {
      uVar12 = uVar21;
    }
    if (uVar7 < uVar12 + uVar28) goto LAB_18020dab8;
    if (uVar24 == 0) break;
    uVar28 = uVar12 + uVar28;
  }
  if (iVar29 == 0) {
    uVar21 = iVar15 * uVar19 * uVar18;
  }
  else {
    uVar16 = uVar18 + 3 & 0xfffffffc;
    uVar24 = uVar19 + 3 & 0xfffffffc;
    uVar21 = 4;
    if (4 < uVar24) {
      uVar21 = uVar24;
    }
    uVar24 = 4;
    if (4 < uVar16) {
      uVar24 = uVar16;
    }
    uVar21 = (uVar21 >> 2) * (uVar24 >> 2) * iVar29;
  }
  FUN_1801acf20(local_78._0_8_,uVar21);
  if ((bVar30) && (uVar12 < uVar21)) {
    uVar12 = FUN_1804207a0((longlong)puVar6 + uVar28,*(undefined8 *)local_78._0_8_,uVar12,uVar21);
    if (uVar12 != uVar21) goto LAB_18020dab8;
  }
  else {
    if (uVar12 != uVar21) goto LAB_18020dab8;
    FUN_18063aed0(*(undefined8 *)local_78._0_8_,(longlong)puVar6 + uVar28,uVar21);
  }
  puVar26 = (undefined8 *)(param_3 + 0x18);
  if (puVar26 != (undefined8 *)local_78) {
    FUN_180210a20(puVar26);
    *puVar26 = local_78._0_8_;
    *(undefined8 *)(param_3 + 0x20) = local_78._8_8_;
    *(undefined8 **)(param_3 + 0x28) = local_68;
    local_78 = (undefined1  [16])0x0;
    local_68 = (undefined8 *)0x0;
  }
  *(uint *)(param_3 + 0x30) = uVar18;
  *(uint *)(param_3 + 0x34) = uVar19;
  *(uint *)(param_3 + 0x38) = local_ac;
LAB_18020dab8:
  FUN_180210a20(local_78);
}



