// FUN_1805df9b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805df9b0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1805df9b0(undefined1 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5,code *param_6)

{
  longlong lVar1;
  byte bVar2;
  undefined1 *puVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 *puVar9;
  uint uVar10;
  int iVar11;
  longlong *plVar12;
  undefined1 *puVar13;
  int iVar14;
  longlong *plVar15;
  bool bVar16;
  undefined1 auStack_178 [32];
  undefined8 local_158;
  longlong local_150;
  undefined1 *local_138;
  longlong local_130;
  ulonglong local_f8 [4];
  longlong local_d8 [4];
  ulonglong local_b8 [5];
  longlong *local_90;
  longlong local_80 [5];
  ulonglong local_58;
  
  local_58 = DAT_1808d5f00 ^ (ulonglong)auStack_178;
  local_150 = param_5;
  puVar9 = param_1 + param_2;
  if (param_2 < 1) {
    puVar9 = param_1;
  }
  lVar1 = param_5 + 4;
  local_158 = param_4;
  local_138 = puVar9;
  local_130 = param_2;
  uVar5 = FUN_1805ddd10(local_f8,param_1,param_2,param_3);
  if ((uVar5 < 0xffffffffffffff89) && (uVar5 != 0)) {
    (*param_6)(local_f8);
    uVar5 = param_2 + 3U >> 2;
    plVar15 = local_d8;
    iVar14 = 0;
    do {
      if (uVar5 <= (ulonglong)((longlong)puVar9 - (longlong)param_1)) {
        puVar9 = param_1 + uVar5;
      }
      puVar3 = (undefined1 *)*plVar15;
      if (puVar9 < puVar3) {
      }
      plVar12 = (longlong *)plVar15[-4];
      if (plVar12 < (longlong *)(plVar15[0xb] + -8)) {
      }
      uVar7 = 0;
      if (plVar15[4] != 0) {
        for (; ((ulonglong)plVar15[4] >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
        }
      }
      lVar8 = *plVar12;
      puVar13 = puVar3;
      if (3 < (longlong)puVar9 - (longlong)puVar3) {
        do {
          uVar4 = (uint)uVar7;
          if (uVar4 < 0x41) {
            if (plVar12 < local_90 + 1) {
              if (plVar12 == local_90) {
                uVar10 = 2 - (uVar4 < 0x40);
                goto LAB_1805dfb3a;
              }
              uVar6 = uVar7 >> 3 & 0x1fffffff;
              bVar16 = (longlong *)((longlong)plVar12 - uVar6) < local_90;
              if (bVar16) {
                uVar6 = (ulonglong)(uint)((int)plVar12 - (int)local_90);
              }
              uVar10 = (uint)bVar16;
              uVar4 = uVar4 + (int)uVar6 * -8;
            }
            else {
              uVar4 = uVar4 & 7;
              uVar6 = (uVar7 & 0xffffffff) >> 3;
              uVar10 = 0;
            }
            uVar7 = (ulonglong)uVar4;
            plVar12 = (longlong *)((longlong)plVar12 - uVar6);
            lVar8 = *plVar12;
          }
          else {
            plVar12 = (longlong *)&DAT_1806877f0;
            uVar10 = 3;
          }
LAB_1805dfb3a:
          if (uVar10 != 0 || puVar9 + -3 <= puVar13) goto joined_r0x0001805dfc2e;
          uVar6 = (ulonglong)(lVar8 << ((byte)uVar7 & 0x3f)) >> 0x35;
          iVar11 = (uint)*(byte *)(lVar1 + uVar6 * 2) + (int)uVar7;
          *puVar13 = *(undefined1 *)(param_5 + 5 + uVar6 * 2);
          uVar7 = (ulonglong)(lVar8 << ((byte)iVar11 & 0x3f)) >> 0x35;
          bVar2 = *(byte *)(lVar1 + uVar7 * 2);
          puVar13[1] = *(undefined1 *)(param_5 + 5 + uVar7 * 2);
          iVar11 = (uint)bVar2 + iVar11;
          uVar7 = (ulonglong)(lVar8 << ((byte)iVar11 & 0x3f)) >> 0x35;
          iVar11 = (uint)*(byte *)(lVar1 + uVar7 * 2) + iVar11;
          puVar13[2] = *(undefined1 *)(param_5 + 5 + uVar7 * 2);
          uVar6 = (ulonglong)(lVar8 << ((byte)iVar11 & 0x3f)) >> 0x35;
          uVar7 = (ulonglong)((uint)*(byte *)(lVar1 + uVar6 * 2) + iVar11);
          puVar13[3] = *(undefined1 *)(lVar1 + uVar6 * 2 + 1);
          puVar13 = puVar13 + 4;
        } while( true );
      }
      uVar4 = (uint)uVar7;
      if (uVar4 < 0x41) {
        if (plVar12 < local_90 + 1) {
          if (plVar12 != local_90) {
            uVar6 = uVar7 >> 3 & 0x1fffffff;
            if ((longlong *)((longlong)plVar12 - uVar6) < local_90) {
              uVar6 = (ulonglong)(uint)((int)plVar12 - (int)local_90);
            }
            uVar7 = (ulonglong)(uVar4 + (int)uVar6 * -8);
            lVar8 = *(longlong *)((longlong)plVar12 - uVar6);
          }
        }
        else {
          uVar6 = uVar7 & 0xffffffff;
          uVar7 = (ulonglong)(uVar4 & 7);
          lVar8 = *(longlong *)((longlong)plVar12 - (uVar6 >> 3));
        }
      }
joined_r0x0001805dfc2e:
      for (; puVar13 < puVar9; puVar13 = puVar13 + 1) {
        uVar6 = (ulonglong)(lVar8 << ((byte)uVar7 & 0x3f)) >> 0x35;
        uVar7 = (ulonglong)((int)uVar7 + (uint)*(byte *)(lVar1 + uVar6 * 2));
        *puVar13 = *(undefined1 *)(param_5 + 5 + uVar6 * 2);
      }
      *plVar15 = (longlong)(puVar9 + (*plVar15 - (longlong)puVar3));
      if ((undefined1 *)*plVar15 != puVar9) {
      }
      iVar14 = iVar14 + 1;
      plVar15 = plVar15 + 1;
      param_1 = puVar9;
      puVar9 = local_138;
    } while (iVar14 < 4);
  }
}



