// FUN_180597980 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180597980 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180597980(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  int *piVar4;
  char *_Str1;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  uint *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined8 **ppuVar12;
  uint *puVar13;
  ulonglong uVar14;
  longlong lVar15;
  uint *puVar16;
  undefined1 auStack_d8 [32];
  int local_b8 [2];
  uint *local_b0;
  undefined8 *local_a8 [2];
  uint local_98;
  uint local_94;
  undefined8 local_90;
  int local_88 [16];
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_d8;
  puVar16 = *(uint **)(param_1 + 0x2e0);
  uVar3 = *(undefined8 *)(param_1 + 0x98);
  if (puVar16 != (uint *)0x0) {
    uVar1 = *puVar16;
    uVar2 = puVar16[1];
    if (uVar2 != 0) {
      uVar14 = (ulonglong)uVar2;
      piVar7 = local_88;
      puVar13 = puVar16 + 0x2a;
      puVar8 = puVar16;
      do {
        puVar8 = puVar8 + 2;
        piVar4 = *(int **)(puVar13 + 2);
        *(undefined8 *)(piVar7 + -2) = *(undefined8 *)puVar8;
        *piVar7 = *piVar4;
        piVar7[1] = piVar4[(ulonglong)(byte)*puVar13 - 1];
        uVar14 = uVar14 - 1;
        piVar7 = piVar7 + 4;
        puVar13 = puVar13 + 6;
      } while (uVar14 != 0);
    }
    uVar14 = (ulonglong)uVar2;
    lVar10 = 0;
    local_b8[0] = 0;
    uVar11 = uVar14 * 2 + 7 & 0xfffffffffffffff8;
    local_b0 = puVar16;
    local_a8[0] = param_2;
    local_98 = uVar2;
    local_94 = uVar1;
    puVar8 = (uint *)FUN_18057abe0(uVar3,(uVar2 + 1) * 0x20 + (int)uVar11,local_b8);
    if (local_b8[0] == 0) {
      puVar8[1] = uVar1;
      *puVar8 = uVar2;
      puVar8[2] = 0;
      FUN_18063ab10(puVar8 + 8,0,uVar14 * 2);
      puVar8[6] = 0;
      puVar8[7] = 0;
      *(ulonglong *)(puVar8 + 4) = (longlong)(puVar8 + 8) + uVar11;
      if (uVar2 != 0) {
        lVar15 = 0;
        piVar7 = local_88;
        uVar11 = uVar14;
        do {
          *(undefined8 *)(lVar15 + *(longlong *)(puVar8 + 4)) = *(undefined8 *)(piVar7 + -2);
          *(int *)(*(longlong *)(puVar8 + 4) + 8 + lVar15) = *piVar7 << 0x10;
          *(int *)(*(longlong *)(puVar8 + 4) + 0x10 + lVar15) = piVar7[1] << 0x10;
          *(undefined4 *)(*(longlong *)(puVar8 + 4) + 0x18 + lVar15) = 0xffffffff;
          *(undefined4 *)(*(longlong *)(puVar8 + 4) + 0x14 + lVar15) = 0xffffffff;
          puVar9 = (undefined8 *)(*(longlong *)(puVar8 + 4) + lVar15);
          _Str1 = (char *)*puVar9;
          if (_Str1 != (char *)0x0) {
            iVar5 = strcmp(_Str1,"Weight");
            if (iVar5 == 0) {
              *(undefined4 *)((longlong)puVar9 + 0x14) = 0x77676874;
            }
            else {
              iVar5 = strcmp(_Str1,"Width");
              if (iVar5 == 0) {
                *(undefined4 *)((longlong)puVar9 + 0x14) = 0x77647468;
              }
              else {
                iVar5 = strcmp(_Str1,"OpticalSize");
                if (iVar5 == 0) {
                  *(undefined4 *)((longlong)puVar9 + 0x14) = 0x6f70737a;
                }
                else {
                  iVar5 = strcmp(_Str1,"Slant");
                  if (iVar5 == 0) {
                    *(undefined4 *)((longlong)puVar9 + 0x14) = 0x736c6e74;
                  }
                  else {
                    iVar5 = strcmp(_Str1,"Italic");
                    if (iVar5 == 0) {
                      *(undefined4 *)((longlong)puVar9 + 0x14) = 0x6974616c;
                    }
                  }
                }
              }
            }
          }
          piVar7 = piVar7 + 4;
          lVar15 = lVar15 + 0x20;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
        param_2 = local_a8[0];
        puVar16 = local_b0;
      }
      FUN_18059bc90(*(undefined8 *)(puVar16 + 0x44),local_a8,puVar16[1]);
      if (uVar2 != 0) {
        lVar15 = 0;
        ppuVar12 = local_a8;
        do {
          uVar6 = FUN_18059bbf0(lVar15 + 0xa8 + (longlong)puVar16,*(undefined4 *)ppuVar12);
          lVar10 = lVar10 + 0x20;
          ppuVar12 = (undefined8 **)((longlong)ppuVar12 + 4);
          lVar15 = lVar15 + 0x18;
          *(undefined4 *)(*(longlong *)(puVar8 + 4) + -0x14 + lVar10) = uVar6;
          uVar14 = uVar14 - 1;
        } while (uVar14 != 0);
      }
      *param_2 = puVar8;
    }
  }
}



