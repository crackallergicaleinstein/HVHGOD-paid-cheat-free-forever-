// FUN_1805dd6f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805dd6f0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void thunk_FUN_1805dd700(longlong param_1,int *param_2,uint *param_3,uint *param_4,ulonglong param_5
                        )

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  bool bVar15;
  undefined1 auStack_98 [32];
  undefined8 uStack_78;
  int *piStack_68;
  uint *puStack_60;
  longlong lStack_58;
  ulonglong uStack_50;
  
  uStack_50 = DAT_1808d5f00 ^ (ulonglong)auStack_98;
  uVar7 = 0;
  bVar15 = false;
  uVar10 = *param_2 + 1;
  lVar1 = (longlong)param_4 + param_5;
  piStack_68 = param_2;
  puStack_60 = param_4;
  if (param_5 < 8) {
    lStack_58 = 0;
    FUN_18063aed0(&lStack_58,param_4,param_5);
    uStack_78 = 8;
    FUN_1805dd700(param_1,piStack_68,param_3,&lStack_58);
  }
  else {
    lStack_58 = param_1;
    FUN_18063ab10(param_1,0,(ulonglong)uVar10 * 2);
    uVar8 = *param_4;
    uVar11 = uVar8 & 0xf;
    uVar12 = uVar11 + 5;
    if (uVar12 < 0x10) {
      *param_3 = uVar12;
      uVar8 = uVar8 >> 4;
      iVar14 = 1 << (sbyte)uVar12;
      uVar12 = 4;
      iVar13 = uVar11 + 6;
      uVar11 = iVar14 + 1;
      do {
        iVar6 = (int)lVar1;
        puVar5 = param_4;
        if (bVar15) {
          uVar3 = 0;
          if ((~uVar8 | 0x80000000) != 0) {
            for (; ((~uVar8 | 0x80000000) >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
            }
          }
          while( true ) {
            uVar3 = uVar3 >> 1;
            iVar4 = (int)param_4;
            if (uVar3 < 0xc) break;
            uVar7 = (ulonglong)((int)uVar7 + 0x24);
            if ((uint *)(lVar1 + -7) < param_4) {
              param_4 = (uint *)(lVar1 + -4);
              uVar12 = (uVar12 + (iVar4 - iVar6) * 8) - 8 & 0x1f;
            }
            else {
              param_4 = (uint *)((longlong)param_4 + 3);
            }
            uVar8 = *param_4 >> (sbyte)uVar12;
            uVar3 = 0;
            if ((~uVar8 | 0x80000000) != 0) {
              for (; ((~uVar8 | 0x80000000) >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
              }
            }
          }
          uVar8 = (int)uVar7 + uVar3 * 3 + (uVar8 >> ((byte)(uVar3 * 2) & 0x1f) & 3);
          uVar7 = (ulonglong)uVar8;
          uVar3 = uVar12 + 2 + uVar3 * 2;
          if (uVar10 <= uVar8) {
LAB_1805dd986:
            if (uVar11 != 1) {
            }
            if (uVar10 < uVar8) {
            }
            if ((int)uVar3 < 0x21) {
              *piStack_68 = uVar8 - 1;
            }
          }
          if (((uint *)(lVar1 + -7) < param_4) &&
             (puVar5 = (uint *)(lVar1 - 4),
             puVar5 < (uint *)((longlong)((int)uVar3 >> 3) + (longlong)param_4))) {
            uVar12 = uVar3 + (iVar4 - iVar6) * 8 & 0x1f;
          }
          else {
            puVar5 = (uint *)((longlong)param_4 + ((longlong)(int)uVar3 >> 3));
            uVar12 = uVar3 & 7;
          }
          uVar8 = *puVar5 >> (sbyte)uVar12;
        }
        uVar9 = (iVar14 * 2 - uVar11) - 1;
        if ((iVar14 - 1U & uVar8) < uVar9) {
          uVar3 = (uVar12 - 1) + iVar13;
          uVar12 = iVar14 - 1U & uVar8;
        }
        else {
          uVar3 = uVar12 + iVar13;
          uVar8 = iVar14 * 2 - 1U & uVar8;
          uVar12 = uVar8 - uVar9;
          if ((int)uVar8 < iVar14) {
            uVar12 = uVar8;
          }
        }
        iVar2 = uVar12 - 1;
        iVar4 = iVar2;
        if (-1 < iVar2) {
          iVar4 = -iVar2;
        }
        uVar11 = uVar11 + iVar4;
        *(short *)(lStack_58 + uVar7 * 2) = (short)iVar2;
        uVar8 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar8;
        bVar15 = iVar2 == 0;
        if ((int)uVar11 < iVar14) {
          if ((int)uVar11 < 2) goto LAB_1805dd986;
          iVar14 = 0x1f;
          if (uVar11 != 0) {
            for (; uVar11 >> iVar14 == 0; iVar14 = iVar14 + -1) {
            }
          }
          iVar13 = iVar14 + 1;
          iVar14 = 1 << ((byte)iVar14 & 0x1f);
        }
        if (uVar10 <= uVar8) goto LAB_1805dd986;
        if (((uint *)(lVar1 - 7U) < puVar5) &&
           (param_4 = (uint *)(lVar1 - 4),
           param_4 < (uint *)((longlong)((int)uVar3 >> 3) + (longlong)puVar5))) {
          uVar12 = uVar3 + ((int)puVar5 - iVar6) * 8 & 0x1f;
          uVar8 = *param_4 >> (sbyte)uVar12;
        }
        else {
          uVar12 = uVar3 & 7;
          param_4 = (uint *)((longlong)puVar5 + ((longlong)(int)uVar3 >> 3));
          uVar8 = *param_4 >> (sbyte)uVar12;
        }
      } while( true );
    }
  }
}



