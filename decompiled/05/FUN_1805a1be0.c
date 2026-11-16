// FUN_1805a1be0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805a1be0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1805a1be0(longlong param_1,longlong *param_2,uint param_3,ulonglong param_4)

{
  short sVar1;
  short sVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  bool bVar9;
  int iVar10;
  undefined4 uVar11;
  ulonglong uVar12;
  byte bVar13;
  byte bVar14;
  uint uVar15;
  longlong lVar16;
  int iVar17;
  byte *pbVar18;
  byte *pbVar19;
  int *piVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  ulonglong uVar24;
  undefined1 auStack_938 [32];
  uint *local_918;
  undefined8 local_910;
  code *local_908;
  code *local_900;
  char local_8f8;
  undefined2 local_8f4;
  uint local_8f0;
  uint local_8ec;
  uint local_8e8;
  uint local_8e4;
  undefined8 local_8e0;
  undefined8 *local_8d8;
  longlong *local_8d0;
  undefined8 local_8c8;
  uint local_8c0;
  undefined1 local_8b8 [56];
  uint local_880;
  int local_878;
  int local_874;
  undefined1 local_85e;
  longlong local_858;
  code *local_840;
  undefined4 local_550;
  undefined1 local_547;
  undefined8 local_468;
  int local_460;
  int local_45c;
  undefined8 local_458;
  ushort local_450;
  short local_44e;
  short local_44c;
  ushort local_44a;
  int local_448;
  int iStack_444;
  int iStack_440;
  int iStack_43c;
  undefined1 local_438 [992];
  ulonglong local_58;
  
  local_58 = DAT_1808d5f00 ^ (ulonglong)auStack_938;
  lVar16 = *(longlong *)(param_1 + 8);
  uVar24 = (ulonglong)param_3;
  uVar21 = (uint)param_4;
  local_468 = *(ulonglong *)(lVar16 + 0x2f8);
  lVar3 = *(longlong *)(lVar16 + 0x3e0);
  local_8f8 = '\0';
  local_8d8 = *(undefined8 **)(local_468 + 0x50);
  uVar23 = 0;
  if ((*(int *)(lVar3 + 0x660) == 0xffff) || (*(longlong *)(lVar3 + 0x4e0) == 0)) {
    if (*(uint *)(lVar3 + 0x20) <= param_3) {
    }
  }
  else if (param_3 != 0) {
    if (param_3 <= *(uint *)(lVar3 + 0x4e8)) {
      uVar23 = (uint)*(ushort *)(*(longlong *)(lVar3 + 0x4e0) + uVar24 * 2);
    }
    uVar24 = (ulonglong)uVar23;
    if (uVar23 == 0) {
    }
  }
  lVar4 = *param_2;
  uVar23 = (uint)uVar24;
  local_8e4 = uVar21;
  local_8d0 = param_2;
  if (((((int)param_2[8] != -1) && ((param_4 & 8) == 0)) &&
      ((*(uint *)(lVar4 + 4) & 0x7fff0000) == 0)) && ((*(uint *)(lVar4 + 8) & 0x8000) == 0)) {
    local_908 = (code *)&local_458;
    local_910 = param_1 + 0x68;
    local_918 = (uint *)*(undefined8 *)(lVar4 + 0xa0);
    iVar10 = (**(code **)(*(longlong *)(lVar4 + 0x2d0) + 0x98))(lVar16,(int)param_2[8],uVar24);
    if (iVar10 == 0) {
      *(uint *)(param_1 + 0x30) = (uint)local_458._2_2_ << 6;
      *(uint *)(param_1 + 0x34) = (uint)(ushort)local_458 << 6;
      *(int *)(param_1 + 0x38) = (int)local_458._4_2_ << 6;
      *(int *)(param_1 + 0x3c) = (int)local_458._6_2_ << 6;
      *(uint *)(param_1 + 0x40) = (uint)local_450 << 6;
      *(int *)(param_1 + 0x44) = (int)local_44e << 6;
      *(int *)(param_1 + 0x48) = (int)local_44c << 6;
      *(uint *)(param_1 + 0x4c) = (uint)local_44a << 6;
      *(undefined4 *)(param_1 + 0x60) = 0x62697473;
      iVar17 = (int)local_44c;
      iVar10 = (int)local_44e;
      if ((uVar21 >> 4 & 1) == 0) {
        iVar17 = (int)local_458._6_2_;
        iVar10 = (int)local_458._4_2_;
      }
      *(int *)(param_1 + 0x90) = iVar10;
      *(int *)(param_1 + 0x94) = iVar17;
      local_918 = (uint *)&local_8f4;
      (**(code **)(*(longlong *)(lVar16 + 0x2d0) + 0x150))(lVar16,0,uVar24,&local_8f0);
      *(uint *)(param_1 + 0x50) = (uint)local_8f4;
      if ((*(char *)(lVar16 + 400) != '\0') && (*(short *)(lVar16 + 0x1ba) != 0)) {
        local_918 = (uint *)&local_8f4;
        (**(code **)(*(longlong *)(lVar16 + 0x2d0) + 0x150))(lVar16,1,uVar24,&local_8f0);
        *(uint *)(param_1 + 0x54) = (uint)local_8f4;
      }
      if (*(short *)(lVar16 + 0x208) == -1) {
        sVar1 = *(short *)(lVar16 + 0x13e);
        sVar2 = *(short *)(lVar16 + 0x13c);
      }
      else {
        sVar1 = *(short *)(lVar16 + 0x250);
        sVar2 = *(short *)(lVar16 + 0x24e);
      }
      *(int *)(param_1 + 0x54) = (int)sVar2 - (int)sVar1;
    }
  }
  if ((uVar21 >> 0xe & 1) != 0) {
  }
  if (((uVar21 & 0x1100000) == 0x100000) && (*(longlong *)(lVar16 + 0x4e8) != 0)) {
    lVar4 = *(longlong *)(lVar16 + 0x2d0);
    if ((short)param_2[3] == 0) {
    }
    if (*(short *)((longlong)param_2 + 0x1a) == 0) {
    }
    iVar10 = (**(code **)(lVar4 + 0x178))(param_1,uVar24);
    if (iVar10 == 0) {
      iVar10 = *(int *)((longlong)param_2 + 0x1c);
      local_918 = &local_8ec;
      lVar3 = param_2[4];
      *(undefined4 *)(param_1 + 0x60) = 0x53564720;
      (**(code **)(lVar4 + 0x150))(lVar16,0,uVar24,&local_8f0);
      local_918 = (uint *)&local_8f4;
      (**(code **)(lVar4 + 0x150))(lVar16,1,uVar24,&local_8f0);
      lVar16 = (longlong)iVar10 * (ulonglong)(ushort)local_8ec;
      *(uint *)(param_1 + 0x50) = (uint)(ushort)local_8ec;
      *(uint *)(param_1 + 0x54) = (uint)local_8f4;
      *(int *)(param_1 + 0x40) = (int)((ulonglong)(lVar16 + 0x8000 + (lVar16 >> 0x3f)) >> 0x10);
      lVar16 = (longlong)(int)lVar3 * (ulonglong)local_8f4;
      *(int *)(param_1 + 0x4c) = (int)((ulonglong)(lVar16 + 0x8000 + (lVar16 >> 0x3f)) >> 0x10);
    }
  }
  uVar12 = param_4 >> 1 & 0x7fffffff;
  uVar12 = CONCAT71((int7)(uVar12 >> 8),~(byte)uVar12) & 0xffffffffffffff01;
  bVar13 = ~(byte)param_4 & 1;
  local_8e8 = (uint)uVar12;
  local_8f4 = CONCAT11(local_8f4._1_1_,~(byte)param_4) & 0xff01;
  *(byte *)(param_1 + 0xf9) = bVar13;
  *(char *)(param_1 + 0xf8) = (char)uVar12;
  if (bVar13 == 0) {
    *(undefined4 *)(param_1 + 0xfc) = 0x10000;
    uVar11 = 0x10000;
  }
  else {
    *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)((longlong)param_2 + 0x1c);
    uVar11 = (undefined4)param_2[4];
  }
  *(undefined4 *)(param_1 + 0x100) = uVar11;
  uVar21 = *(uint *)(lVar3 + 0x8a8);
  if (uVar21 == 0) {
    local_448 = *(int *)(lVar3 + 0x60c);
    iStack_444 = *(int *)(lVar3 + 0x610);
    iStack_440 = *(int *)(lVar3 + 0x614);
    iStack_43c = *(int *)(lVar3 + 0x618);
    uVar12 = *(ulonglong *)(lVar3 + 0x624);
    local_458 = uVar12;
  }
  else {
    puVar5 = *(undefined1 **)(lVar3 + 0x10b8);
    bVar13 = 0;
    if (puVar5 != (undefined1 *)0x0) {
      if (*(char *)(lVar3 + 0x10b0) == '\0') {
        bVar13 = puVar5[uVar24];
      }
      else if (*(char *)(lVar3 + 0x10b0) == '\x03') {
        if (uVar23 - *(int *)(lVar3 + 0x10c4) < *(uint *)(lVar3 + 0x10c8)) {
          bVar13 = *(byte *)(lVar3 + 0x10cc);
        }
        else {
          pbVar18 = puVar5 + 2;
          uVar22 = (uint)CONCAT11(*puVar5,puVar5[1]);
          do {
            if (uVar23 < uVar22) break;
            bVar14 = *pbVar18;
            pbVar19 = pbVar18 + 3;
            uVar15 = (uint)CONCAT11(pbVar18[1],pbVar18[2]);
            if (uVar23 < uVar15) {
              *(uint *)(lVar3 + 0x10c4) = uVar22;
              *(uint *)(lVar3 + 0x10c8) = uVar15 - uVar22;
              *(byte *)(lVar3 + 0x10cc) = bVar14;
              bVar13 = bVar14;
              break;
            }
            pbVar18 = pbVar19;
            uVar22 = uVar15;
          } while (pbVar19 < puVar5 + *(uint *)(lVar3 + 0x10c0));
        }
      }
    }
    iVar10 = *(int *)(lVar3 + 0x620);
    bVar14 = (char)uVar21 - 1;
    if (bVar13 < uVar21) {
      bVar14 = bVar13;
    }
    lVar4 = lVar3 + (ulonglong)bVar14 * 8;
    lVar6 = *(longlong *)(lVar4 + 0x8b0);
    iVar17 = *(int *)(lVar6 + 0x40);
    local_448 = *(int *)(lVar6 + 0x2c);
    iStack_444 = *(int *)(lVar6 + 0x30);
    iStack_440 = *(int *)(lVar6 + 0x34);
    iStack_43c = *(int *)(lVar6 + 0x38);
    uVar12 = *(ulonglong *)(*(longlong *)(lVar4 + 0x8b0) + 0x44);
    local_458 = uVar12;
    if (iVar10 != iVar17) {
      uVar11 = FUN_1805753e0(*(undefined4 *)(param_1 + 0xfc),iVar10,iVar17);
      *(undefined4 *)(param_1 + 0xfc) = uVar11;
      uVar11 = FUN_1805753e0(*(undefined4 *)(param_1 + 0x100),iVar10,iVar17);
      *(undefined4 *)(param_1 + 0x100) = uVar11;
      local_8f8 = '\x01';
    }
    param_2 = local_8d0;
  }
  uVar23 = local_8e4;
  local_900 = FUN_1805a06e0;
  local_908 = FUN_1805a0750;
  local_910 = CONCAT44(local_910._4_4_,(int)local_8e4 >> 0x10) & 0xffffffff0000000f;
  local_918 = (uint *)CONCAT71(local_918._1_7_,(char)local_8e8);
  (*(code *)*local_8d8)(local_8b8,lVar16,param_2,param_1);
  if ((uVar23 >> 8 & 1) != 0) {
    local_547 = 1;
  }
  local_8ec = uVar23 & 0x400;
  local_85e = local_8ec != 0;
  iVar10 = (*(code *)local_8d8[1])(local_8b8,param_2,uVar24);
  if (iVar10 == 0) {
    puVar7 = *(undefined8 **)(*(longlong *)(lVar16 + 0xd0) + 0x50);
    if (puVar7 == (undefined8 *)0x0) {
      iVar10 = FUN_1805a07c0(*(longlong *)(lVar16 + 0x3e0) + 0x4f0,uVar24,&local_8e0,&local_8f0);
      uVar23 = local_8f0;
    }
    else {
      iVar10 = (**(code **)*puVar7)(puVar7[1],uVar24,&local_8c8);
      local_8e0 = local_8c8;
      uVar23 = local_8c0;
    }
    if (iVar10 == 0) {
      (**(code **)(local_468 + 0x30))(local_438,local_8b8,0);
      iVar10 = (*(code *)local_8d8[2])(local_438,local_8e0,uVar23);
      if ((char)iVar10 == -0x5c) {
        *(undefined1 *)(param_1 + 0xf8) = 0;
        local_8e8 = local_8e8 & 0xffffff00;
        local_8f8 = '\x01';
        iVar10 = (*(code *)local_8d8[2])(local_438,local_8e0,uVar23);
      }
      plVar8 = *(longlong **)(*(longlong *)(lVar16 + 0xd0) + 0x50);
      if (plVar8 == (longlong *)0x0) {
        if (*(longlong *)(*(longlong *)(lVar16 + 0x3e0) + 0x518) == 0) {
          FUN_180578860(*(undefined8 *)(*(longlong *)(lVar16 + 0x3e0) + 0x4f0),&local_8e0);
        }
      }
      else {
        local_8c8 = local_8e0;
        (**(code **)(*plVar8 + 8))(plVar8[1],&local_8c8);
      }
      if (iVar10 == 0) {
        if (*(longlong *)(*(longlong *)(lVar16 + 0xd0) + 0x50) == 0) {
          if (*(longlong *)(lVar3 + 0x510) != 0) {
            uVar21 = *(uint *)(*(longlong *)(lVar3 + 0x510) + uVar24 * 4);
            lVar3 = *(longlong *)(lVar3 + 0x518);
            *(uint *)(param_1 + 0xd8) = uVar23;
            *(ulonglong *)(param_1 + 0xd0) = (ulonglong)uVar21 + lVar3 + -1;
          }
        }
        else {
          *(undefined8 *)(param_1 + 0xd0) = 0;
          *(undefined4 *)(param_1 + 0xd8) = 0;
        }
        (*local_840)(local_8b8);
        plVar8 = *(longlong **)(*(longlong *)(lVar16 + 0xd0) + 0x50);
        if ((plVar8 != (longlong *)0x0) && (*(code **)(*plVar8 + 0x10) != (code *)0x0)) {
          local_460 = local_878;
          local_45c = local_874;
          local_468 = (ulonglong)local_880;
          iVar10 = (**(code **)(*plVar8 + 0x10))(plVar8[1],uVar24,0,&local_468);
          local_878 = local_460;
          local_874 = local_45c;
          local_880 = (uint)local_468;
          if (iVar10 != 0) {
          }
        }
        if (local_8ec == 0) {
          *(undefined4 *)(param_1 + 0x60) = 0x6f75746c;
          *(undefined4 *)(param_1 + 0xb8) = 4;
          if (*(ushort *)((longlong)local_8d0 + 0x1a) < 0x18) {
            *(undefined4 *)(param_1 + 0xb8) = 0x104;
          }
          if (*(short *)(lVar16 + 0x15a) == 0) {
            *(undefined4 *)(param_1 + 0x40) = local_550;
            *(undefined4 *)(param_1 + 0x50) = local_550;
          }
          else {
            local_8f0 = local_8f0 & 0xffff0000;
            local_8ec = 0;
            local_918 = &local_8ec;
            (**(code **)(*(longlong *)(lVar16 + 0x2d0) + 0x150))(lVar16,0,uVar24,&local_8f0);
            *(uint *)(param_1 + 0x40) = local_8ec & 0xffff;
            *(int *)(param_1 + 0x38) = (int)(short)local_8f0;
            *(uint *)(param_1 + 0x50) = local_8ec & 0xffff;
          }
          *(undefined1 *)(*(longlong *)(param_1 + 0xf0) + 0xc) = 0;
          if ((*(char *)(lVar16 + 400) == '\0') || (*(short *)(lVar16 + 0x1ba) == 0)) {
            bVar9 = false;
            if (*(short *)(lVar16 + 0x208) == -1) {
              sVar1 = *(short *)(lVar16 + 0x13e);
              sVar2 = *(short *)(lVar16 + 0x13c);
            }
            else {
              sVar1 = *(short *)(lVar16 + 0x250);
              sVar2 = *(short *)(lVar16 + 0x24e);
            }
            uVar23 = (int)sVar2 - (int)sVar1;
          }
          else {
            local_8f0 = local_8f0 & 0xffff0000;
            bVar9 = true;
            local_8ec = local_8ec & 0xffff0000;
            local_918 = &local_8ec;
            (**(code **)(*(longlong *)(lVar16 + 0x2d0) + 0x150))(lVar16,1,uVar24,&local_8f0);
            uVar23 = local_8ec & 0xffff;
            *(int *)(param_1 + 0x48) = (int)(short)local_8f0;
          }
          *(uint *)(param_1 + 0x4c) = uVar23;
          *(uint *)(param_1 + 0x54) = uVar23;
          if ((((local_448 != 0x10000) || (iStack_43c != 0x10000)) || (iStack_444 != 0)) ||
             (iStack_440 != 0)) {
            FUN_1805765a0(param_1 + 0x98,&local_448);
            lVar16 = (longlong)*(int *)(param_1 + 0x40) * (longlong)local_448;
            *(int *)(param_1 + 0x40) =
                 (int)((ulonglong)(lVar16 + 0x8000 + (lVar16 >> 0x3f)) >> 0x10);
            lVar16 = (longlong)*(int *)(param_1 + 0x4c) * (longlong)iStack_43c;
            *(int *)(param_1 + 0x4c) =
                 (int)((ulonglong)(lVar16 + 0x8000 + (lVar16 >> 0x3f)) >> 0x10);
          }
          iVar10 = local_458._4_4_;
          if (((int)uVar12 != 0) || (local_458._4_4_ != 0)) {
            FUN_180576690(param_1 + 0x98,uVar12 & 0xffffffff,local_458._4_4_);
            *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + (int)uVar12;
            *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + iVar10;
          }
          if (((char)local_8f4 != '\0') || (local_8f8 != '\0')) {
            piVar20 = *(int **)(param_1 + 0xa0);
            iVar10 = *(int *)(param_1 + 0xfc);
            iVar17 = *(int *)(param_1 + 0x100);
            if ((((char)local_8e8 == '\0') || (local_858 == 0)) &&
               (uVar23 = (uint)*(ushort *)(param_1 + 0x9a), *(ushort *)(param_1 + 0x9a) != 0)) {
              do {
                lVar16 = (longlong)*piVar20 * (longlong)iVar10;
                uVar23 = uVar23 - 1;
                *piVar20 = (int)((ulonglong)(lVar16 + (lVar16 >> 0x3f) + 0x8000) >> 0x10);
                lVar16 = (longlong)piVar20[1] * (longlong)iVar17;
                piVar20[1] = (int)((ulonglong)(lVar16 + 0x8000 + (lVar16 >> 0x3f)) >> 0x10);
                piVar20 = piVar20 + 2;
              } while (0 < (int)uVar23);
            }
            lVar16 = (longlong)*(int *)(param_1 + 0x40) * (longlong)iVar10;
            *(int *)(param_1 + 0x40) =
                 (int)((ulonglong)(lVar16 + 0x8000 + (lVar16 >> 0x3f)) >> 0x10);
            lVar16 = (longlong)*(int *)(param_1 + 0x4c) * (longlong)iVar17;
            *(int *)(param_1 + 0x4c) =
                 (int)((ulonglong)(lVar16 + 0x8000 + (lVar16 >> 0x3f)) >> 0x10);
          }
          FUN_180576310(param_1 + 0x98,&local_468);
          *(uint *)(param_1 + 0x38) = (uint)local_468;
          *(uint *)(param_1 + 0x30) = local_460 - (uint)local_468;
          *(int *)(param_1 + 0x34) = local_45c - local_468._4_4_;
          *(int *)(param_1 + 0x3c) = local_45c;
          if (bVar9) {
            *(uint *)(param_1 + 0x44) = (uint)local_468 - *(int *)(param_1 + 0x40) / 2;
            lVar16 = (longlong)*(int *)(param_1 + 0x100) * (longlong)*(int *)(param_1 + 0x48);
            *(int *)(param_1 + 0x48) =
                 (int)((ulonglong)(lVar16 + 0x8000 + (lVar16 >> 0x3f)) >> 0x10);
          }
          else if ((local_8e4 & 0x10) != 0) {
            FUN_18057bc10(param_1 + 0x30,*(undefined4 *)(param_1 + 0x4c));
          }
        }
        else {
          lVar16 = *(longlong *)(param_1 + 0xf0);
          *(undefined4 *)(param_1 + 0x40) = local_550;
          *(uint *)(param_1 + 0x38) = local_880;
          *(ulonglong *)(lVar16 + 0x10) = CONCAT44(iStack_444,local_448);
          *(ulonglong *)(lVar16 + 0x18) = CONCAT44(iStack_43c,iStack_440);
          *(ulonglong *)(lVar16 + 0x20) = uVar12;
          *(undefined1 *)(lVar16 + 0xc) = 1;
        }
      }
    }
  }
}



