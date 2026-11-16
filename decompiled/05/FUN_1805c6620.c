// FUN_1805c6620 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805c6620 */

int FUN_1805c6620(longlong param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 *puVar6;
  ushort *puVar7;
  undefined2 *puVar8;
  uint uVar9;
  undefined1 *puVar10;
  uint uVar11;
  ushort uVar12;
  undefined2 *puVar13;
  uint uVar14;
  uint uVar15;
  int local_res8 [2];
  uint local_res18 [2];
  undefined1 *local_res20;
  
  uVar4 = *(undefined8 *)(param_1 + 0x98);
  local_res20 = (undefined1 *)0x0;
  puVar7 = (ushort *)0x0;
  local_res8[0] = (**(code **)(param_1 + 0x2a0))(param_1,0x4350414c,param_2,local_res18);
  if (local_res8[0] != 0) goto LAB_1805c6ad2;
  if (0xb < local_res18[0]) {
    local_res8[0] = FUN_180577d80(param_2,local_res18[0],&local_res20);
    puVar10 = local_res20;
    if ((local_res8[0] != 0) ||
       (puVar7 = (ushort *)FUN_18057aad0(uVar4,0x28,local_res8), local_res8[0] != 0))
    goto LAB_1805c6ad2;
    uVar2 = *puVar10;
    uVar3 = puVar10[1];
    *puVar7 = CONCAT11(uVar2,uVar3);
    if (CONCAT11(uVar2,uVar3) < 2) {
      *(ushort *)(param_1 + 0x388) = CONCAT11(puVar10[2],puVar10[3]);
      *(ushort *)(param_1 + 0x370) = CONCAT11(puVar10[4],puVar10[5]);
      uVar12 = CONCAT11(puVar10[6],puVar10[7]);
      puVar7[1] = uVar12;
      uVar9 = CONCAT31(CONCAT21(CONCAT11(puVar10[8],puVar10[9]),puVar10[10]),puVar10[0xb]);
      if (((((uint)*(ushort *)(param_1 + 0x370) * 2 + 0xc <= local_res18[0]) &&
           (uVar9 < local_res18[0])) && ((uint)uVar12 << 2 <= local_res18[0] - uVar9)) &&
         (*(ushort *)(param_1 + 0x388) <= uVar12)) {
        *(undefined1 **)(puVar7 + 8) = puVar10 + 0xc;
        *(undefined1 **)(puVar7 + 4) = local_res20 + uVar9;
        if (*puVar7 == 1) {
          uVar9 = (uint)*(ushort *)(param_1 + 0x370) * 2;
          if (local_res18[0] < uVar9 + 0x18) goto LAB_1805c6acb;
          puVar10 = puVar10 + 0xc + uVar9;
          uVar14 = CONCAT31(CONCAT21(CONCAT11(*puVar10,puVar10[1]),puVar10[2]),puVar10[3]);
          uVar11 = CONCAT31(CONCAT21(CONCAT11(puVar10[4],puVar10[5]),puVar10[6]),puVar10[7]);
          uVar15 = CONCAT31(CONCAT21(CONCAT11(puVar10[8],puVar10[9]),puVar10[10]),puVar10[0xb]);
          if (uVar14 != 0) {
            if ((local_res18[0] <= uVar14) || (local_res18[0] - uVar14 < uVar9)) goto LAB_1805c6acb;
            puVar8 = (undefined2 *)
                     FUN_18057ac40(uVar4,2,0,*(ushort *)(param_1 + 0x370),0,local_res8);
            if (local_res8[0] != 0) goto LAB_1805c6ad2;
            uVar12 = *(ushort *)(param_1 + 0x370);
            if (puVar8 < puVar8 + uVar12) {
              puVar10 = local_res20 + ((ulonglong)uVar14 - 1);
              puVar13 = puVar8;
              do {
                puVar1 = puVar10 + 1;
                puVar10 = puVar10 + 2;
                *puVar13 = CONCAT11(*puVar1,*puVar10);
                puVar13 = puVar13 + 1;
              } while (puVar13 < puVar8 + uVar12);
            }
            *(undefined2 **)(param_1 + 0x380) = puVar8;
          }
          if (uVar11 != 0) {
            if ((local_res18[0] <= uVar11) ||
               (local_res18[0] - uVar11 < (uint)*(ushort *)(param_1 + 0x370) * 2))
            goto LAB_1805c6acb;
            puVar8 = (undefined2 *)
                     FUN_18057ac40(uVar4,2,0,*(ushort *)(param_1 + 0x370),0,local_res8);
            if (local_res8[0] != 0) goto LAB_1805c6ad2;
            uVar12 = *(ushort *)(param_1 + 0x370);
            if (puVar8 < puVar8 + uVar12) {
              puVar10 = local_res20 + ((ulonglong)uVar11 - 1);
              puVar13 = puVar8;
              do {
                puVar1 = puVar10 + 1;
                puVar10 = puVar10 + 2;
                *puVar13 = CONCAT11(*puVar1,*puVar10);
                puVar13 = puVar13 + 1;
              } while (puVar13 < puVar8 + uVar12);
            }
            *(undefined2 **)(param_1 + 0x378) = puVar8;
          }
          if (uVar15 != 0) {
            if ((local_res18[0] <= uVar15) ||
               (local_res18[0] - uVar15 < (uint)*(ushort *)(param_1 + 0x388) * 2))
            goto LAB_1805c6acb;
            puVar8 = (undefined2 *)
                     FUN_18057ac40(uVar4,2,0,*(ushort *)(param_1 + 0x388),0,local_res8);
            if (local_res8[0] != 0) goto LAB_1805c6ad2;
            uVar12 = *(ushort *)(param_1 + 0x388);
            if (puVar8 < puVar8 + uVar12) {
              puVar10 = local_res20 + ((ulonglong)uVar15 - 1);
              puVar13 = puVar8;
              do {
                puVar1 = puVar10 + 1;
                puVar10 = puVar10 + 2;
                *puVar13 = CONCAT11(*puVar1,*puVar10);
                puVar13 = puVar13 + 1;
              } while (puVar13 < puVar8 + uVar12);
            }
            *(undefined2 **)(param_1 + 0x390) = puVar8;
          }
        }
        *(undefined1 **)(puVar7 + 0xc) = local_res20;
        *(uint *)(puVar7 + 0x10) = local_res18[0];
        *(ushort **)(param_1 + 0x4d8) = puVar7;
        puVar10 = (undefined1 *)
                  FUN_18057ad10(uVar4,4,0,*(undefined2 *)(param_1 + 0x388),0,local_res8);
        *(undefined1 **)(param_1 + 0x3a0) = puVar10;
        if (local_res8[0] != 0) goto LAB_1805c6ad2;
        lVar5 = *(longlong *)(param_1 + 0x4d8);
        if ((lVar5 != 0) && (*(short *)(param_1 + 0x370) != 0)) {
          uVar9 = (uint)CONCAT11(**(undefined1 **)(lVar5 + 0x10),(*(undefined1 **)(lVar5 + 0x10))[1]
                                );
          if (uVar9 + *(ushort *)(param_1 + 0x388) <= (uint)*(ushort *)(lVar5 + 2)) {
            puVar1 = puVar10 + (ulonglong)*(ushort *)(param_1 + 0x388) * 4;
            puVar6 = (undefined1 *)((ulonglong)(uVar9 * 4) + *(longlong *)(lVar5 + 8));
            for (; puVar10 < puVar1; puVar10 = puVar10 + 4) {
              *puVar10 = *puVar6;
              puVar10[1] = puVar6[1];
              puVar10[2] = puVar6[2];
              puVar10[3] = puVar6[3];
              puVar6 = puVar6 + 4;
            }
            return 0;
          }
        }
      }
    }
  }
LAB_1805c6acb:
  local_res8[0] = 8;
LAB_1805c6ad2:
  FUN_180578860(param_2,&local_res20);
  FUN_18057abd0(uVar4,puVar7);
  *(undefined8 *)(param_1 + 0x4d8) = 0;
  return local_res8[0];
}



