// FUN_180472e00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180472e00 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180472e00(int param_1,int param_2)

{
  undefined2 *puVar1;
  byte bVar2;
  ushort uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  short sVar9;
  int iVar10;
  int *piVar11;
  ulonglong uVar12;
  int *piVar13;
  int iVar14;
  uint uVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  ulonglong uVar20;
  uint uVar21;
  ulonglong uVar22;
  undefined1 auStack_178 [48];
  uint local_148;
  uint local_144 [3];
  ulonglong local_138;
  undefined1 local_130 [16];
  longlong local_120;
  undefined1 local_118 [16];
  undefined8 local_108;
  undefined4 local_e8;
  undefined4 local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_178;
  uVar12 = 0;
  local_148 = 0;
  local_144[0] = 0;
  local_138 = local_138 & 0xffffffff00000000;
  local_58 = (ulonglong)*(uint *)(&DAT_18077f8c0 + (longlong)param_1 * 0x14) + _DAT_180bbb290;
  local_108 = 0;
  local_e8 = 0;
  local_60 = 0;
  local_50 = *(int *)(&DAT_18077f8c4 + (longlong)param_1 * 0x14) + local_58;
  local_48 = local_58;
  local_40 = local_50;
  local_138 = FUN_18046f450(local_118,&local_148,local_144,&local_138);
  uVar19 = local_144[0];
  uVar21 = local_148;
  if (local_138 != 0) {
    uVar20 = (ulonglong)(int)local_144[0];
    uVar22 = (ulonglong)(int)local_148;
    uVar18 = uVar20 * uVar22;
    local_130 = (undefined1  [16])0x0;
    local_120 = 0;
    if (uVar18 * 4 != 0) {
      if (0x7fffffffffffffff < uVar18 * 4) {
                    /* WARNING: Subroutine does not return */
        FUN_1801136f0();
      }
      lVar4 = uVar18 * 8;
      lVar5 = FUN_18015bca0(lVar4);
      local_130._0_8_ = lVar5;
      local_120 = lVar5 + lVar4;
      FUN_18063ab10(lVar5,0,lVar4);
      local_130._8_8_ = lVar5 + lVar4;
    }
    uVar16 = 0;
    if (uVar18 != 0) {
      do {
        bVar2 = *(byte *)(local_138 + 3 + uVar16 * 4);
        *(short *)(local_130._0_8_ + uVar16 * 8) =
             (short)((ulonglong)
                     ((uint)*(byte *)(local_138 + uVar16 * 4) * (uint)bVar2 * 0x100 + 0x7f) / 0xff);
        *(short *)(local_130._0_8_ + 2 + uVar16 * 8) =
             (short)((ulonglong)
                     ((uint)*(byte *)(local_138 + 1 + uVar16 * 4) * (uint)bVar2 * 0x100 + 0x7f) /
                    0xff);
        *(short *)(local_130._0_8_ + 4 + uVar16 * 8) =
             (short)((ulonglong)
                     ((uint)*(byte *)(local_138 + 2 + uVar16 * 4) * (uint)bVar2 * 0x100 + 0x7f) /
                    0xff);
        *(ushort *)(local_130._0_8_ + 6 + uVar16 * 8) = (ushort)bVar2 * 0x100;
        uVar16 = uVar16 + 1;
      } while (uVar16 < uVar18);
    }
    thunk_FUN_180621380(local_138);
    iVar14 = 0;
    if (0 < param_2) {
      do {
        if ((int)(uint)uVar22 < 2) {
          uVar21 = (uint)uVar22;
          uVar19 = (uint)uVar20;
          if ((int)(uint)uVar20 < 2) break;
        }
        FUN_180472a90(local_130,&local_148,local_144);
        iVar14 = iVar14 + 1;
        uVar22 = (ulonglong)local_148;
        uVar20 = (ulonglong)local_144[0];
        uVar21 = local_148;
        uVar19 = local_144[0];
      } while (iVar14 < param_2);
    }
    puVar6 = (undefined8 *)_malloc_base(0x60);
    lVar4 = DAT_180bb8ae8;
    if (DAT_180bb8ae8 != 0) {
      piVar13 = (int *)(DAT_180bb8ae8 + 4);
      piVar11 = (int *)(DAT_180bb8ae8 + 0x2998 + (longlong)*(short *)(DAT_180bb8ae8 + 0x2994) * 8);
      if (*piVar11 != *piVar13) {
        iVar14 = *(short *)(DAT_180bb8ae8 + 0x2994) + 1;
        sVar9 = (short)iVar14 + (short)(iVar14 / 6) * -6;
        *(short *)(DAT_180bb8ae8 + 0x2994) = sVar9;
        piVar11 = (int *)(lVar4 + ((longlong)sVar9 + 0x533) * 8);
        *piVar11 = *piVar13;
        piVar11[1] = 0;
      }
      *(short *)(piVar11 + 1) = (short)piVar11[1] + 1;
      piVar13 = (int *)(lVar4 + 0x298c);
      *piVar13 = *piVar13 + 1;
    }
    if (puVar6 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)0x0;
    }
    else {
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6[2] = 0;
      puVar6[3] = 0;
      puVar6[4] = 0;
      puVar6[5] = 0;
      puVar6[6] = 0;
      puVar6[7] = 0;
      puVar6[8] = 0;
      puVar6[9] = 0;
      puVar6[10] = 0;
      puVar6[0xb] = 0;
      *(undefined4 *)((longlong)puVar6 + 4) = 1;
    }
    FUN_1804e26d0(puVar6);
    *(undefined4 *)(puVar6 + 4) = 0;
    *(undefined4 *)((longlong)puVar6 + 4) = 2;
    *(uint *)((longlong)puVar6 + 0x24) = uVar21;
    *(uint *)(puVar6 + 5) = uVar19;
    *(undefined4 *)((longlong)puVar6 + 0x2c) = 4;
    *(undefined1 *)((longlong)puVar6 + 0x5e) = 0;
    uVar7 = FUN_1804b8110((longlong)(int)(uVar19 * uVar21 * 4));
    puVar6[6] = uVar7;
    FUN_18063ab10(uVar7,0,(longlong)
                          (*(int *)((longlong)puVar6 + 0x2c) * *(int *)((longlong)puVar6 + 0x24) *
                          *(int *)(puVar6 + 5)));
    puVar6[7] = 0;
    *(undefined4 *)(puVar6 + 8) = 0xffffffff;
    *(undefined4 *)((longlong)puVar6 + 0x44) = 0;
    *(undefined1 *)((longlong)puVar6 + 0x5e) = 1;
    lVar4 = puVar6[6];
    if ((longlong)(int)uVar19 * (longlong)(int)uVar21 != 0) {
      do {
        uVar3 = *(ushort *)(local_130._0_8_ + 6 + uVar12 * 8);
        puVar1 = (undefined2 *)(lVar4 + uVar12 * 4);
        if (uVar3 == 0) {
          *puVar1 = 0;
          uVar8 = 0;
        }
        else {
          uVar17 = (uint)uVar3;
          uVar15 = (uint)(uVar3 >> 1);
          uVar18 = (ulonglong)((uint)*(ushort *)(local_130._0_8_ + uVar12 * 8) * 0xff + uVar15) /
                   (ulonglong)uVar17;
          uVar8 = (char)uVar18;
          if (0xff < (uint)uVar18) {
            uVar8 = 0xff;
          }
          *(undefined1 *)puVar1 = uVar8;
          uVar18 = (ulonglong)((uint)*(ushort *)(local_130._0_8_ + 2 + uVar12 * 8) * 0xff + uVar15)
                   / (ulonglong)uVar17;
          uVar8 = (char)uVar18;
          if (0xff < (uint)uVar18) {
            uVar8 = 0xff;
          }
          *(undefined1 *)((longlong)puVar1 + 1) = uVar8;
          uVar18 = (ulonglong)((uint)*(ushort *)(local_130._0_8_ + 4 + uVar12 * 8) * 0xff + uVar15)
                   / (ulonglong)uVar17;
          uVar8 = (undefined1)uVar18;
          if (0xff < (uint)uVar18) {
            uVar8 = 0xff;
          }
        }
        *(undefined1 *)(puVar1 + 1) = uVar8;
        *(char *)((longlong)puVar1 + 3) = (char)(uVar3 + 0x80 >> 8);
        uVar12 = uVar12 + 1;
      } while (uVar12 < (ulonglong)((longlong)(int)uVar19 * (longlong)(int)uVar21));
    }
    *(short *)((longlong)puVar6 + 0x5c) = *(short *)((longlong)puVar6 + 0x5c) + 1;
    lVar4 = DAT_180bb8ae8;
    piVar13 = (int *)(DAT_180bb8ae8 + 0x2768);
    iVar14 = *(int *)(DAT_180bb8ae8 + 0x276c);
    if (*piVar13 == iVar14) {
      iVar10 = *piVar13 + 1;
      if (iVar14 == 0) {
        iVar14 = 8;
      }
      else {
        iVar14 = iVar14 / 2 + iVar14;
      }
      if (iVar10 < iVar14) {
        iVar10 = iVar14;
      }
      FUN_1804d0a80(piVar13,iVar10);
    }
    *(undefined8 **)(*(longlong *)(lVar4 + 0x2770) + (longlong)*piVar13 * 8) = puVar6;
    *piVar13 = *piVar13 + 1;
    FUN_1801c6980(local_130);
  }
}



