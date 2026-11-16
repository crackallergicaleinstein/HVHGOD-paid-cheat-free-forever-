// FUN_18059dfb0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18059dfb0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void thunk_FUN_1805a1be0(longlong param_1,longlong *param_2,uint param_3,ulonglong param_4)

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
  uint *puStack_918;
  undefined8 uStack_910;
  code *pcStack_908;
  code *pcStack_900;
  char cStack_8f8;
  undefined2 uStack_8f4;
  uint uStack_8f0;
  uint uStack_8ec;
  uint uStack_8e8;
  uint uStack_8e4;
  undefined8 uStack_8e0;
  undefined8 *puStack_8d8;
  longlong *plStack_8d0;
  undefined8 uStack_8c8;
  uint uStack_8c0;
  undefined1 auStack_8b8 [56];
  uint uStack_880;
  int iStack_878;
  int iStack_874;
  undefined1 uStack_85e;
  longlong lStack_858;
  code *pcStack_840;
  undefined4 uStack_550;
  undefined1 uStack_547;
  undefined8 uStack_468;
  int iStack_460;
  int iStack_45c;
  undefined8 uStack_458;
  ushort uStack_450;
  short sStack_44e;
  short sStack_44c;
  ushort uStack_44a;
  int iStack_448;
  int iStack_444;
  int iStack_440;
  int iStack_43c;
  undefined1 auStack_438 [992];
  ulonglong uStack_58;
  
  uStack_58 = DAT_1808d5f00 ^ (ulonglong)auStack_938;
  lVar16 = *(longlong *)(param_1 + 8);
  uVar24 = (ulonglong)param_3;
  uVar21 = (uint)param_4;
  uStack_468 = *(ulonglong *)(lVar16 + 0x2f8);
  lVar3 = *(longlong *)(lVar16 + 0x3e0);
  cStack_8f8 = '\0';
  puStack_8d8 = *(undefined8 **)(uStack_468 + 0x50);
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
  uStack_8e4 = uVar21;
  plStack_8d0 = param_2;
  if (((((int)param_2[8] != -1) && ((param_4 & 8) == 0)) &&
      ((*(uint *)(lVar4 + 4) & 0x7fff0000) == 0)) && ((*(uint *)(lVar4 + 8) & 0x8000) == 0)) {
    pcStack_908 = (code *)&uStack_458;
    uStack_910 = param_1 + 0x68;
    puStack_918 = (uint *)*(undefined8 *)(lVar4 + 0xa0);
    iVar10 = (**(code **)(*(longlong *)(lVar4 + 0x2d0) + 0x98))(lVar16,(int)param_2[8],uVar24);
    if (iVar10 == 0) {
      *(uint *)(param_1 + 0x30) = (uint)uStack_458._2_2_ << 6;
      *(uint *)(param_1 + 0x34) = (uint)(ushort)uStack_458 << 6;
      *(int *)(param_1 + 0x38) = (int)uStack_458._4_2_ << 6;
      *(int *)(param_1 + 0x3c) = (int)uStack_458._6_2_ << 6;
      *(uint *)(param_1 + 0x40) = (uint)uStack_450 << 6;
      *(int *)(param_1 + 0x44) = (int)sStack_44e << 6;
      *(int *)(param_1 + 0x48) = (int)sStack_44c << 6;
      *(uint *)(param_1 + 0x4c) = (uint)uStack_44a << 6;
      *(undefined4 *)(param_1 + 0x60) = 0x62697473;
      iVar17 = (int)sStack_44c;
      iVar10 = (int)sStack_44e;
      if ((uVar21 >> 4 & 1) == 0) {
        iVar17 = (int)uStack_458._6_2_;
        iVar10 = (int)uStack_458._4_2_;
      }
      *(int *)(param_1 + 0x90) = iVar10;
      *(int *)(param_1 + 0x94) = iVar17;
      puStack_918 = (uint *)&uStack_8f4;
      (**(code **)(*(longlong *)(lVar16 + 0x2d0) + 0x150))(lVar16,0,uVar24,&uStack_8f0);
      *(uint *)(param_1 + 0x50) = (uint)uStack_8f4;
      if ((*(char *)(lVar16 + 400) != '\0') && (*(short *)(lVar16 + 0x1ba) != 0)) {
        puStack_918 = (uint *)&uStack_8f4;
        (**(code **)(*(longlong *)(lVar16 + 0x2d0) + 0x150))(lVar16,1,uVar24,&uStack_8f0);
        *(uint *)(param_1 + 0x54) = (uint)uStack_8f4;
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
      puStack_918 = &uStack_8ec;
      lVar3 = param_2[4];
      *(undefined4 *)(param_1 + 0x60) = 0x53564720;
      (**(code **)(lVar4 + 0x150))(lVar16,0,uVar24,&uStack_8f0);
      puStack_918 = (uint *)&uStack_8f4;
      (**(code **)(lVar4 + 0x150))(lVar16,1,uVar24,&uStack_8f0);
      lVar16 = (longlong)iVar10 * (ulonglong)(ushort)uStack_8ec;
      *(uint *)(param_1 + 0x50) = (uint)(ushort)uStack_8ec;
      *(uint *)(param_1 + 0x54) = (uint)uStack_8f4;
      *(int *)(param_1 + 0x40) = (int)((ulonglong)(lVar16 + 0x8000 + (lVar16 >> 0x3f)) >> 0x10);
      lVar16 = (longlong)(int)lVar3 * (ulonglong)uStack_8f4;
      *(int *)(param_1 + 0x4c) = (int)((ulonglong)(lVar16 + 0x8000 + (lVar16 >> 0x3f)) >> 0x10);
    }
  }
  uVar12 = param_4 >> 1 & 0x7fffffff;
  uVar12 = CONCAT71((int7)(uVar12 >> 8),~(byte)uVar12) & 0xffffffffffffff01;
  bVar13 = ~(byte)param_4 & 1;
  uStack_8e8 = (uint)uVar12;
  uStack_8f4 = CONCAT11(uStack_8f4._1_1_,~(byte)param_4) & 0xff01;
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
    iStack_448 = *(int *)(lVar3 + 0x60c);
    iStack_444 = *(int *)(lVar3 + 0x610);
    iStack_440 = *(int *)(lVar3 + 0x614);
    iStack_43c = *(int *)(lVar3 + 0x618);
    uVar12 = *(ulonglong *)(lVar3 + 0x624);
    uStack_458 = uVar12;
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
    iStack_448 = *(int *)(lVar6 + 0x2c);
    iStack_444 = *(int *)(lVar6 + 0x30);
    iStack_440 = *(int *)(lVar6 + 0x34);
    iStack_43c = *(int *)(lVar6 + 0x38);
    uVar12 = *(ulonglong *)(*(longlong *)(lVar4 + 0x8b0) + 0x44);
    uStack_458 = uVar12;
    if (iVar10 != iVar17) {
      uVar11 = FUN_1805753e0(*(undefined4 *)(param_1 + 0xfc),iVar10,iVar17);
      *(undefined4 *)(param_1 + 0xfc) = uVar11;
      uVar11 = FUN_1805753e0(*(undefined4 *)(param_1 + 0x100),iVar10,iVar17);
      *(undefined4 *)(param_1 + 0x100) = uVar11;
      cStack_8f8 = '\x01';
    }
    param_2 = plStack_8d0;
  }
  uVar23 = uStack_8e4;
  pcStack_900 = FUN_1805a06e0;
  pcStack_908 = FUN_1805a0750;
  uStack_910 = CONCAT44(uStack_910._4_4_,(int)uStack_8e4 >> 0x10) & 0xffffffff0000000f;
  puStack_918 = (uint *)CONCAT71(puStack_918._1_7_,(char)uStack_8e8);
  (*(code *)*puStack_8d8)(auStack_8b8,lVar16,param_2,param_1);
  if ((uVar23 >> 8 & 1) != 0) {
    uStack_547 = 1;
  }
  uStack_8ec = uVar23 & 0x400;
  uStack_85e = uStack_8ec != 0;
  iVar10 = (*(code *)puStack_8d8[1])(auStack_8b8,param_2,uVar24);
  if (iVar10 == 0) {
    puVar7 = *(undefined8 **)(*(longlong *)(lVar16 + 0xd0) + 0x50);
    if (puVar7 == (undefined8 *)0x0) {
      iVar10 = FUN_1805a07c0(*(longlong *)(lVar16 + 0x3e0) + 0x4f0,uVar24,&uStack_8e0,&uStack_8f0);
      uVar23 = uStack_8f0;
    }
    else {
      iVar10 = (**(code **)*puVar7)(puVar7[1],uVar24,&uStack_8c8);
      uStack_8e0 = uStack_8c8;
      uVar23 = uStack_8c0;
    }
    if (iVar10 == 0) {
      (**(code **)(uStack_468 + 0x30))(auStack_438,auStack_8b8,0);
      iVar10 = (*(code *)puStack_8d8[2])(auStack_438,uStack_8e0,uVar23);
      if ((char)iVar10 == -0x5c) {
        *(undefined1 *)(param_1 + 0xf8) = 0;
        uStack_8e8 = uStack_8e8 & 0xffffff00;
        cStack_8f8 = '\x01';
        iVar10 = (*(code *)puStack_8d8[2])(auStack_438,uStack_8e0,uVar23);
      }
      plVar8 = *(longlong **)(*(longlong *)(lVar16 + 0xd0) + 0x50);
      if (plVar8 == (longlong *)0x0) {
        if (*(longlong *)(*(longlong *)(lVar16 + 0x3e0) + 0x518) == 0) {
          FUN_180578860(*(undefined8 *)(*(longlong *)(lVar16 + 0x3e0) + 0x4f0),&uStack_8e0);
        }
      }
      else {
        uStack_8c8 = uStack_8e0;
        (**(code **)(*plVar8 + 8))(plVar8[1],&uStack_8c8);
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
        (*pcStack_840)(auStack_8b8);
        plVar8 = *(longlong **)(*(longlong *)(lVar16 + 0xd0) + 0x50);
        if ((plVar8 != (longlong *)0x0) && (*(code **)(*plVar8 + 0x10) != (code *)0x0)) {
          iStack_460 = iStack_878;
          iStack_45c = iStack_874;
          uStack_468 = (ulonglong)uStack_880;
          iVar10 = (**(code **)(*plVar8 + 0x10))(plVar8[1],uVar24,0,&uStack_468);
          iStack_878 = iStack_460;
          iStack_874 = iStack_45c;
          uStack_880 = (uint)uStack_468;
          if (iVar10 != 0) {
          }
        }
        if (uStack_8ec == 0) {
          *(undefined4 *)(param_1 + 0x60) = 0x6f75746c;
          *(undefined4 *)(param_1 + 0xb8) = 4;
          if (*(ushort *)((longlong)plStack_8d0 + 0x1a) < 0x18) {
            *(undefined4 *)(param_1 + 0xb8) = 0x104;
          }
          if (*(short *)(lVar16 + 0x15a) == 0) {
            *(undefined4 *)(param_1 + 0x40) = uStack_550;
            *(undefined4 *)(param_1 + 0x50) = uStack_550;
          }
          else {
            uStack_8f0 = uStack_8f0 & 0xffff0000;
            uStack_8ec = 0;
            puStack_918 = &uStack_8ec;
            (**(code **)(*(longlong *)(lVar16 + 0x2d0) + 0x150))(lVar16,0,uVar24,&uStack_8f0);
            *(uint *)(param_1 + 0x40) = uStack_8ec & 0xffff;
            *(int *)(param_1 + 0x38) = (int)(short)uStack_8f0;
            *(uint *)(param_1 + 0x50) = uStack_8ec & 0xffff;
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
            uStack_8f0 = uStack_8f0 & 0xffff0000;
            bVar9 = true;
            uStack_8ec = uStack_8ec & 0xffff0000;
            puStack_918 = &uStack_8ec;
            (**(code **)(*(longlong *)(lVar16 + 0x2d0) + 0x150))(lVar16,1,uVar24,&uStack_8f0);
            uVar23 = uStack_8ec & 0xffff;
            *(int *)(param_1 + 0x48) = (int)(short)uStack_8f0;
          }
          *(uint *)(param_1 + 0x4c) = uVar23;
          *(uint *)(param_1 + 0x54) = uVar23;
          if ((((iStack_448 != 0x10000) || (iStack_43c != 0x10000)) || (iStack_444 != 0)) ||
             (iStack_440 != 0)) {
            FUN_1805765a0(param_1 + 0x98,&iStack_448);
            lVar16 = (longlong)*(int *)(param_1 + 0x40) * (longlong)iStack_448;
            *(int *)(param_1 + 0x40) =
                 (int)((ulonglong)(lVar16 + 0x8000 + (lVar16 >> 0x3f)) >> 0x10);
            lVar16 = (longlong)*(int *)(param_1 + 0x4c) * (longlong)iStack_43c;
            *(int *)(param_1 + 0x4c) =
                 (int)((ulonglong)(lVar16 + 0x8000 + (lVar16 >> 0x3f)) >> 0x10);
          }
          iVar10 = uStack_458._4_4_;
          if (((int)uVar12 != 0) || (uStack_458._4_4_ != 0)) {
            FUN_180576690(param_1 + 0x98,uVar12 & 0xffffffff,uStack_458._4_4_);
            *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + (int)uVar12;
            *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + iVar10;
          }
          if (((char)uStack_8f4 != '\0') || (cStack_8f8 != '\0')) {
            piVar20 = *(int **)(param_1 + 0xa0);
            iVar10 = *(int *)(param_1 + 0xfc);
            iVar17 = *(int *)(param_1 + 0x100);
            if ((((char)uStack_8e8 == '\0') || (lStack_858 == 0)) &&
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
          FUN_180576310(param_1 + 0x98,&uStack_468);
          *(uint *)(param_1 + 0x38) = (uint)uStack_468;
          *(uint *)(param_1 + 0x30) = iStack_460 - (uint)uStack_468;
          *(int *)(param_1 + 0x34) = iStack_45c - uStack_468._4_4_;
          *(int *)(param_1 + 0x3c) = iStack_45c;
          if (bVar9) {
            *(uint *)(param_1 + 0x44) = (uint)uStack_468 - *(int *)(param_1 + 0x40) / 2;
            lVar16 = (longlong)*(int *)(param_1 + 0x100) * (longlong)*(int *)(param_1 + 0x48);
            *(int *)(param_1 + 0x48) =
                 (int)((ulonglong)(lVar16 + 0x8000 + (lVar16 >> 0x3f)) >> 0x10);
          }
          else if ((uStack_8e4 & 0x10) != 0) {
            FUN_18057bc10(param_1 + 0x30,*(undefined4 *)(param_1 + 0x4c));
          }
        }
        else {
          lVar16 = *(longlong *)(param_1 + 0xf0);
          *(undefined4 *)(param_1 + 0x40) = uStack_550;
          *(uint *)(param_1 + 0x38) = uStack_880;
          *(ulonglong *)(lVar16 + 0x10) = CONCAT44(iStack_444,iStack_448);
          *(ulonglong *)(lVar16 + 0x18) = CONCAT44(iStack_43c,iStack_440);
          *(ulonglong *)(lVar16 + 0x20) = uVar12;
          *(undefined1 *)(lVar16 + 0xc) = 1;
        }
      }
    }
  }
}



