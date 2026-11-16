// FUN_1805a70e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805a70e0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1805a70e0(longlong param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  undefined8 uVar12;
  byte *pbVar13;
  byte *pbVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  uint uVar19;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  int *local_70;
  int local_68;
  uint local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_1808d5f00 ^ (ulonglong)auStack_98;
  pbVar14 = param_2 + 1;
  local_68 = 0;
  if (param_3 < pbVar14) {
  }
  bVar1 = *param_2;
  if ((char)bVar1 < '\0') {
  }
  uVar19 = 0;
  local_64 = 0;
  if ((bVar1 & 4) == 0) {
    pbVar13 = pbVar14;
    if ((bVar1 & 2) != 0) {
      pbVar13 = param_2 + 2;
      if (param_3 < pbVar13) {
      }
      local_64 = (uint)*pbVar14;
    }
    if ((bVar1 & 1) == 0) goto LAB_1805a719d;
    param_2 = pbVar13 + 1;
    if (param_3 < param_2) {
    }
    bVar2 = *pbVar13;
  }
  else {
    param_2 = param_2 + 2;
    if (param_3 < param_2) {
    }
    local_64 = *pbVar14 & 0xf;
    bVar2 = *pbVar14 >> 4;
  }
  uVar19 = (uint)bVar2;
  pbVar13 = param_2;
LAB_1805a719d:
  uVar10 = uVar19 + local_64;
  if (*(uint *)(param_1 + 4) < uVar10) {
    local_70 = &local_68;
    local_78 = *(undefined8 *)(param_1 + 8);
    uVar8 = FUN_18057ad10(**(undefined8 **)(param_1 + 0x28));
    *(undefined8 *)(param_1 + 8) = uVar8;
    if (local_68 != 0) {
    }
    *(uint *)(param_1 + 4) = uVar10 + 7 & 0xfffffff8;
  }
  uVar18 = 0;
  uVar9 = 0;
  uVar17 = 0;
  *(ulonglong *)(param_1 + 0x10) = *(longlong *)(param_1 + 8) + (ulonglong)local_64 * 4;
  if (uVar10 != 0) {
    do {
      pbVar14 = pbVar13;
      if ((uVar17 & 7) == 0) {
        pbVar14 = pbVar13 + 1;
        if (param_3 < pbVar14) {
        }
        uVar18 = (ulonglong)*pbVar13;
      }
      if ((uVar18 & 1) == 0) {
        pbVar13 = pbVar14 + 1;
        if (param_3 < pbVar13) {
        }
        uVar9 = uVar9 + *pbVar14;
      }
      else {
        pbVar13 = pbVar14 + 2;
        if (param_3 < pbVar13) {
        }
        uVar9 = (int)(short)((ushort)*pbVar14 << 8) | (uint)pbVar14[1];
      }
      uVar18 = uVar18 >> 1;
      *(uint *)(*(longlong *)(param_1 + 8) + uVar17 * 4) = uVar9;
      uVar15 = (int)uVar17 + 1;
      uVar17 = (ulonglong)uVar15;
    } while (uVar15 < uVar10);
  }
  pbVar14 = pbVar13;
  if ((bVar1 & 8) != 0) {
    pbVar14 = pbVar13 + 1;
    if (param_3 < pbVar14) {
    }
    uVar10 = (uint)*pbVar13;
    if (*pbVar13 != 0) {
      do {
        if (param_3 < pbVar14 + 2) {
        }
        pbVar14 = pbVar14 + 2 + *pbVar14;
        if (param_3 < pbVar14) {
        }
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    local_68 = 0;
  }
  local_60 = 0;
  uVar8 = 0;
  local_48 = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  uVar12 = uVar8;
  if (param_3 < pbVar14 + 1) {
  }
  do {
    bVar1 = *pbVar14;
    uVar10 = bVar1 & 0xf;
    uVar18 = (ulonglong)uVar10;
    pbVar14 = pbVar14 + 1;
    switch(bVar1 >> 4) {
    case 0:
      goto switchD_1805a730b_caseD_0;
    case 1:
    case 4:
    case 5:
      uVar10 = 1;
      break;
    case 2:
      if (local_64 <= uVar10) {
      }
      local_60 = CONCAT44((int)((ulonglong)local_48 >> 0x20),
                          *(undefined4 *)(*(longlong *)(param_1 + 8) + uVar18 * 4));
      local_48 = local_60;
      uVar8 = local_60;
      uVar12 = local_60;
      goto LAB_1805a7507;
    case 3:
      if (uVar19 <= uVar10) {
      }
      local_60 = CONCAT44(*(undefined4 *)(*(longlong *)(param_1 + 0x10) + uVar18 * 4),(int)local_48)
      ;
      local_48 = local_60;
      uVar8 = local_60;
      uVar12 = local_60;
      goto LAB_1805a7507;
    case 6:
      uVar18 = 0xb8e;
      uVar10 = 3;
      break;
    case 7:
      uVar18 = 0xe2b;
      uVar10 = 3;
      break;
    default:
      uVar10 = 4;
    }
    puVar11 = (uint *)&local_60;
    uVar9 = 0;
    do {
      while( true ) {
        uVar15 = (uint)uVar12;
        uVar16 = (uint)uVar18;
        if ((uVar18 & 3) == 0) {
          if (param_3 < pbVar14 + 1) {
          }
          if (local_64 <= *pbVar14) {
          }
          uVar15 = *(uint *)(*(longlong *)(param_1 + 8) + (ulonglong)*pbVar14 * 4);
          pbVar14 = pbVar14 + 1;
        }
        else if ((uVar16 & 3) == 1) {
          if (param_3 < pbVar14 + 2) {
          }
          uVar15 = (int)(short)((ushort)*pbVar14 << 8) | (uint)pbVar14[1];
          pbVar14 = pbVar14 + 2;
        }
        else if ((uVar16 & 3) == 2) {
          if (param_3 < pbVar14 + 1) {
          }
          uVar15 = uVar15 + (int)(char)*pbVar14;
          pbVar14 = pbVar14 + 1;
        }
        *puVar11 = uVar15;
        uVar15 = uVar16 >> 2 & 3;
        if (uVar15 == 0) {
          if (param_3 < pbVar14 + 1) {
          }
          if (uVar19 <= *pbVar14) {
          }
          local_48._4_4_ = *(uint *)(*(longlong *)(param_1 + 0x10) + (ulonglong)*pbVar14 * 4);
          pbVar14 = pbVar14 + 1;
        }
        else if (uVar15 == 1) {
          if (param_3 < pbVar14 + 2) {
          }
          local_48._4_4_ = (int)(short)((ushort)*pbVar14 << 8) | (uint)pbVar14[1];
          pbVar14 = pbVar14 + 2;
        }
        else if (uVar15 == 2) {
          if (param_3 < pbVar14 + 1) {
          }
          local_48._4_4_ = (int)(char)*pbVar14 + local_48._4_4_;
          pbVar14 = pbVar14 + 1;
        }
        puVar11[1] = local_48._4_4_;
        if ((uVar9 != 0) || (uVar10 != 4)) break;
        if (param_3 < pbVar14 + 1) {
        }
        uVar12 = *(undefined8 *)puVar11;
        uVar10 = 3;
        uVar18 = (ulonglong)*pbVar14;
        puVar11 = puVar11 + 2;
        uVar9 = 1;
        local_48 = uVar12;
        pbVar14 = pbVar14 + 1;
      }
      uVar12 = *(undefined8 *)puVar11;
      uVar9 = uVar9 + 1;
      puVar11 = puVar11 + 2;
      uVar18 = (ulonglong)(uVar16 >> 4);
      local_48 = uVar12;
    } while (uVar9 < uVar10);
    uVar8 = local_60;
switchD_1805a730b_caseD_0:
    if (bVar1 >> 4 < 6) {
LAB_1805a7507:
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(bVar1 >> 4) {
      case 0:
        FUN_1805a6b60(param_1);
        FUN_180573bc0(*(undefined8 *)(param_1 + 0x28));
      case 4:
      case 5:
        lVar4 = *(longlong *)(param_1 + 0x28);
        FUN_1805a6b60(param_1);
        *(undefined1 *)(param_1 + 0x30) = 1;
        if (((*(uint *)(lVar4 + 8) < *(ushort *)(lVar4 + 0x62) + 1 + (uint)*(ushort *)(lVar4 + 0x1a)
             ) || (*(uint *)(lVar4 + 0xc) <
                   *(ushort *)(lVar4 + 0x60) + 1 + (uint)*(ushort *)(lVar4 + 0x18))) &&
           (iVar7 = FUN_180573d00(lVar4,1,1), iVar7 != 0)) goto LAB_1805a7656;
      }
      lVar4 = *(longlong *)(param_1 + 0x28);
      if (*(char *)(param_1 + 0x30) == '\0') {
        iVar7 = 8;
      }
      else {
        if (*(uint *)(lVar4 + 8) < *(ushort *)(lVar4 + 0x1a) + 1 + (uint)*(ushort *)(lVar4 + 0x62))
        {
          iVar7 = FUN_180573d00(lVar4,1,0);
          if (iVar7 != 0) goto LAB_1805a7656;
        }
        else {
          iVar7 = 0;
        }
        uVar3 = *(ushort *)(lVar4 + 0x62);
        *(undefined8 *)(*(longlong *)(lVar4 + 0x68) + (ulonglong)uVar3 * 8) = uVar8;
        *(undefined1 *)((ulonglong)uVar3 + *(longlong *)(lVar4 + 0x70)) = 1;
        *(short *)(lVar4 + 0x62) = *(short *)(lVar4 + 0x62) + 1;
      }
    }
    else {
      lVar4 = *(longlong *)(param_1 + 0x28);
      if (*(char *)(param_1 + 0x30) == '\0') {
        iVar7 = 8;
      }
      else {
        if (*(uint *)(lVar4 + 8) < *(ushort *)(lVar4 + 0x1a) + 3 + (uint)*(ushort *)(lVar4 + 0x62))
        {
          iVar7 = FUN_180573d00(lVar4,3,0);
          if (iVar7 != 0) goto LAB_1805a7656;
        }
        else {
          iVar7 = 0;
        }
        uVar18 = (ulonglong)*(ushort *)(lVar4 + 0x62);
        lVar5 = *(longlong *)(lVar4 + 0x68);
        lVar6 = *(longlong *)(lVar4 + 0x70);
        *(undefined8 *)(lVar5 + uVar18 * 8) = uVar8;
        lVar5 = lVar5 + uVar18 * 8;
        *(undefined8 *)(lVar5 + 8) = local_58;
        *(undefined8 *)(lVar5 + 0x10) = local_50;
        *(undefined2 *)(lVar6 + uVar18) = 0x202;
        *(undefined1 *)(lVar6 + 2 + uVar18) = 1;
        *(short *)(lVar4 + 0x62) = *(short *)(lVar4 + 0x62) + 3;
      }
    }
LAB_1805a7656:
    if (iVar7 != 0) {
    }
    if (param_3 < pbVar14 + 1) {
    }
    local_68 = 0;
  } while( true );
}



