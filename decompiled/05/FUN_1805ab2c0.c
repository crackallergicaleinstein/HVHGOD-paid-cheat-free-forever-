// FUN_1805ab2c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805ab2c0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1805ab2c0(uint *param_1,uint param_2)

{
  longlong lVar1;
  ushort uVar2;
  short sVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  undefined1 auStack_108 [32];
  int local_e8;
  uint local_e4;
  short local_e0;
  ushort local_de;
  short local_dc;
  ushort local_da;
  ushort local_d8;
  int local_d4;
  undefined1 local_d0 [4];
  uint local_cc;
  int local_c8;
  uint local_c4;
  undefined8 local_c0;
  undefined1 local_b8 [4];
  int local_b4;
  int local_b0;
  short local_ac;
  ushort local_aa;
  short local_a8;
  short local_a6;
  int local_a4;
  undefined1 local_98 [8];
  int local_90;
  int local_88;
  undefined1 local_80 [12];
  ushort local_74;
  ushort local_72;
  undefined1 local_70 [12];
  ushort local_64;
  ushort local_62;
  undefined1 local_60 [12];
  ushort local_54;
  ushort local_52;
  int local_50;
  undefined4 local_4c;
  ulonglong local_40;
  
  local_40 = DAT_1808d5f00 ^ (ulonglong)auStack_108;
  local_c0 = *(undefined8 *)(param_1 + 0x26);
  lVar1 = *(longlong *)(param_1 + 0x28);
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  uVar11 = -param_2;
  if ((int)-param_2 < 0) {
    uVar11 = param_2;
  }
  uVar11 = uVar11 & 0xffff;
  local_e4 = uVar11;
  local_e8 = FUN_1805788b0(lVar1,0);
  if (local_e8 != 0) {
  }
  iVar5 = FUN_180578280(lVar1,&DAT_180673558,&local_e0);
  if (iVar5 != 0) {
  }
  local_e8 = 2;
  if (local_e0 != 0x5a4d) goto LAB_1805ab9b2;
  local_e8 = FUN_1805788b0(lVar1,local_de);
  if (local_e8 != 0) {
  }
  iVar5 = FUN_180578280(lVar1,&DAT_180673570,&local_dc);
  if (iVar5 != 0) {
  }
  local_e8 = 2;
  if (local_dc == 0x454e) {
    uVar4 = 0;
    iVar5 = 0;
    local_e8 = FUN_1805788b0(lVar1,(uint)local_da + (uint)local_de);
    if (local_e8 != 0) {
    }
    local_e8 = FUN_180577bf0(lVar1,(uint)local_d8 - (uint)local_da);
    if (local_e8 != 0) {
    }
    uVar2 = FUN_180577f10(lVar1,0);
    if (0x10 < uVar2) {
      local_e8 = 3;
      FUN_180577d30();
    }
    sVar3 = FUN_180577f10(lVar1);
    if (sVar3 != 0) {
      while( true ) {
        uVar4 = FUN_180577f10(lVar1);
        if (sVar3 == -0x7ff8) break;
        *(ulonglong *)(lVar1 + 0x38) = *(longlong *)(lVar1 + 0x38) + ((ulonglong)uVar4 * 3 + 1) * 4;
        sVar3 = FUN_180577f10(lVar1);
        if (sVar3 == 0) {
          FUN_180577d30(lVar1);
        }
      }
      iVar6 = *(int *)(lVar1 + 0x38);
      iVar7 = *(int *)(lVar1 + 0x40);
      iVar5 = FUN_1805780f0(lVar1);
      iVar5 = (iVar6 - iVar7) + 4 + iVar5;
    }
    FUN_180577d30(lVar1);
    uVar11 = local_e4;
    if (uVar4 == 0) {
    }
    if (iVar5 == 0) {
    }
    if (*(uint *)(lVar1 + 8) < (uint)uVar4 * 0x76) {
    }
    *param_1 = (uint)uVar4;
    if ((int)param_2 < 0) {
    }
    if (uVar4 <= local_e4) {
    }
    uVar8 = FUN_18057aad0(local_c0,0xb8,&local_e8);
    *(undefined8 *)(param_1 + 0x36) = uVar8;
    if (local_e8 != 0) {
    }
    local_e8 = FUN_1805788b0(lVar1,iVar5 + uVar11 * 0xc);
    if ((local_e8 == 0) && (local_e8 = FUN_180577bf0(lVar1,0xc), local_e8 == 0)) {
      piVar9 = *(int **)(param_1 + 0x36);
      uVar4 = FUN_180577f10(lVar1);
      *piVar9 = (uint)uVar4 << ((byte)uVar2 & 0x1f);
      uVar4 = FUN_180577f10(lVar1);
      *(uint *)(*(longlong *)(param_1 + 0x36) + 0xa8) = (uint)uVar4 << ((byte)uVar2 & 0x1f);
      *(longlong *)(lVar1 + 0x38) = *(longlong *)(lVar1 + 0x38) + 8;
      FUN_180577d30(lVar1);
      local_e8 = FUN_1805abac0(*(undefined8 *)(param_1 + 0x36),lVar1);
      uVar11 = local_e4;
      goto LAB_1805ab991;
    }
  }
  else {
    if (local_dc == 0x4550) {
      local_e8 = FUN_1805788b0(lVar1,local_de);
      if (local_e8 != 0) {
      }
      iVar5 = FUN_180578280(lVar1,&DAT_180673588,&local_b0);
      if (iVar5 != 0) {
      }
      if (local_b0 != 0x4550) {
      }
      if (local_ac != 0x14c) {
      }
      if (local_a8 != 0xe0) {
      }
      if (local_a6 != 0x10b) {
      }
      uVar4 = 0;
      *param_1 = 0;
      if (local_aa == 0) {
      }
      while( true ) {
        local_e8 = 0;
        local_e8 = FUN_180578280(lVar1,&DAT_1806735c0,local_98);
        if (local_e8 != 0) {
        }
        if (local_a4 == local_90) break;
        uVar4 = uVar4 + 1;
        if (local_aa <= uVar4) {
        }
      }
      local_e8 = FUN_1805788b0(lVar1,local_88);
      if (local_e8 != 0) {
      }
      iVar6 = FUN_180578280(lVar1,&DAT_1806735e0,local_60);
      iVar5 = local_88;
      if (iVar6 != 0) {
      }
      local_e4 = local_e4 & 0xffff0000;
      local_e8 = 0;
      if ((uint)local_52 + (uint)local_54 != 0) {
        uVar10 = 0;
        local_e8 = 0;
        do {
          local_e8 = FUN_1805788b0(lVar1,iVar5 + (uVar10 + 2) * 8);
          if (local_e8 != 0) {
          }
          local_e8 = FUN_180578280(lVar1,&DAT_180673600,&local_c8);
          if (local_e8 != 0) {
          }
          if (-1 < (int)local_c4) {
          }
          local_c4 = local_c4 & 0x7fffffff;
          iVar6 = local_88 + local_c4;
          local_d4 = iVar6;
          local_e8 = FUN_1805788b0(lVar1,iVar6);
          if (local_e8 != 0) {
          }
          iVar7 = FUN_180578280(lVar1,&DAT_1806735e0,local_70);
          if (iVar7 != 0) {
          }
          uVar4 = 0;
          local_e8 = 0;
          if ((uint)local_62 + (uint)local_64 != 0) {
            uVar10 = 0;
            local_e8 = 0;
            do {
              local_e8 = FUN_1805788b0(lVar1,iVar6 + (uVar10 + 2) * 8);
              if (local_e8 != 0) {
              }
              local_e8 = FUN_180578280(lVar1,&DAT_180673600,local_d0);
              if (local_e8 != 0) {
              }
              if (-1 < (int)local_cc) {
              }
              local_cc = local_cc & 0x7fffffff;
              iVar6 = local_88 + local_cc;
              local_e8 = FUN_1805788b0(lVar1,iVar6);
              if (local_e8 != 0) {
              }
              iVar7 = FUN_180578280(lVar1,&DAT_1806735e0,local_80);
              if (iVar7 != 0) {
              }
              uVar2 = 0;
              local_e8 = 0;
              if ((uint)local_72 + (uint)local_74 != 0) {
                uVar10 = 0;
                local_e8 = 0;
                do {
                  local_e8 = FUN_1805788b0(lVar1,iVar6 + (uVar10 + 2) * 8);
                  if (local_e8 != 0) {
                  }
                  local_e8 = FUN_180578280(lVar1,&DAT_180673600,local_b8);
                  if (local_e8 != 0) {
                  }
                  if ((local_cc & 0x80000000) != 0) {
                  }
                  iVar7 = 0;
                  if (local_c8 == 8) {
                    local_e8 = FUN_1805788b0(lVar1,local_b4 + iVar5);
                    if (local_e8 != 0) {
                    }
                    local_e8 = FUN_180578280(lVar1,&DAT_180673610,&local_50);
                    if (local_e8 != 0) {
                    }
                    iVar7 = 0;
                    if (uVar11 == *param_1) {
                      piVar9 = (int *)FUN_18057aad0(local_c0,0xb8,&local_e8);
                      *(int **)(param_1 + 0x36) = piVar9;
                      if (local_e8 != 0) {
                      }
                      *piVar9 = (local_50 - local_90) + local_88;
                      *(undefined4 *)(*(longlong *)(param_1 + 0x36) + 0xa8) = local_4c;
                      local_e8 = FUN_1805abac0(*(undefined8 *)(param_1 + 0x36),lVar1);
                      iVar7 = local_e8;
                      if (local_e8 != 0) goto LAB_1805ab9ab;
                    }
                    local_e8 = iVar7;
                    *param_1 = *param_1 + 1;
                    iVar7 = local_e8;
                  }
                  local_e8 = iVar7;
                  uVar2 = uVar2 + 1;
                  uVar10 = (uint)uVar2;
                } while (uVar10 < (uint)local_72 + (uint)local_74);
              }
              uVar4 = uVar4 + 1;
              uVar10 = (uint)uVar4;
              iVar6 = local_d4;
            } while (uVar10 < (uint)local_62 + (uint)local_64);
          }
          uVar10 = (uint)(ushort)((short)local_e4 + 1U);
          local_e4 = CONCAT22(local_e4._2_2_,(short)local_e4 + 1U);
        } while (uVar10 < (uint)local_52 + (uint)local_54);
      }
    }
LAB_1805ab991:
    if (*param_1 == 0) {
    }
    if ((int)*param_1 <= (int)uVar11) {
    }
  }
LAB_1805ab9ab:
  if (local_e8 == 0) {
  }
LAB_1805ab9b2:
  lVar1 = *(longlong *)(param_1 + 0x36);
  uVar8 = *(undefined8 *)(param_1 + 0x26);
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + 0xa0) != 0) {
      FUN_180578860(*(undefined8 *)(param_1 + 0x28));
    }
    FUN_18057abd0(uVar8,*(undefined8 *)(lVar1 + 0xb0));
    *(undefined8 *)(lVar1 + 0xb0) = 0;
    FUN_18057abd0(uVar8,lVar1);
    param_1[0x36] = 0;
    param_1[0x37] = 0;
  }
}



