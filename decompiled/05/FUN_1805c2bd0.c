// FUN_1805c2bd0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805c2bd0 */

int FUN_1805c2bd0(longlong param_1,longlong param_2)

{
  short *psVar1;
  ushort uVar2;
  int iVar3;
  ushort *puVar4;
  ushort *puVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int local_res10 [2];
  int local_res18 [2];
  undefined8 local_res20;
  
  uVar6 = *(undefined8 *)(param_2 + 0x30);
  psVar1 = (short *)(param_1 + 0x1d8);
  *(longlong *)(param_1 + 0x200) = param_2;
  puVar5 = (ushort *)0x0;
  puVar4 = (ushort *)0x0;
  local_res20 = uVar6;
  local_res10[0] = (**(code **)(param_1 + 0x2a0))(param_1,0x6e616d65,param_2,local_res18);
  if (local_res10[0] == 0) {
    iVar3 = FUN_1805780f0(param_2);
    local_res10[0] = FUN_180578280(param_2,&DAT_180684990,psVar1);
    if (local_res10[0] == 0) {
      uVar12 = local_res18[0] + iVar3;
      uVar13 = *(int *)(param_1 + 0x1dc) * 0xc + 6 + iVar3;
      if (uVar12 < uVar13) {
        local_res10[0] = 0x91;
      }
      else {
        if (*psVar1 == 1) {
          local_res10[0] = FUN_1805788b0(param_2,uVar13);
          if (local_res10[0] != 0) goto LAB_1805c2f1e;
          uVar2 = FUN_180578720(param_2,local_res10);
          *(uint *)(param_1 + 0x1f0) = (uint)uVar2;
          if (local_res10[0] != 0) goto LAB_1805c2f1e;
          uVar13 = uVar13 + (uint)uVar2 * 4 + 2;
          puVar4 = (ushort *)FUN_18057ac40(uVar6,0x10,0,uVar2,0,local_res10);
          if ((local_res10[0] != 0) ||
             (local_res10[0] = FUN_180577bf0(param_2,*(int *)(param_1 + 0x1f0) << 2),
             local_res10[0] != 0)) goto LAB_1805c2f1e;
          local_res10[0] = 0;
          if (puVar4 != (ushort *)0x0) {
            uVar8 = *(uint *)(param_1 + 0x1f0);
            if (puVar4 < puVar4 + (ulonglong)uVar8 * 8) {
              local_res10[0] = 0;
              puVar5 = puVar4;
              do {
                local_res10[0] = FUN_180578280(param_2,&DAT_1806849c8,puVar5);
                uVar7 = *(int *)(param_1 + 0x1e0) + *(int *)(puVar5 + 2) + iVar3;
                *(uint *)(puVar5 + 2) = uVar7;
                if ((uVar7 < uVar13) || (uVar12 < *puVar5 + uVar7)) {
                  *puVar5 = 0;
                }
                puVar5[4] = 0;
                puVar5[5] = 0;
                puVar5[6] = 0;
                puVar5[7] = 0;
                puVar5 = puVar5 + 8;
              } while (puVar5 < puVar4 + (ulonglong)uVar8 * 8);
            }
            uVar6 = local_res20;
          }
          *(ushort **)(param_1 + 0x1f8) = puVar4;
          FUN_180577d30(param_2);
          local_res10[0] = FUN_1805788b0(param_2,iVar3 + 6);
        }
        puVar5 = (ushort *)
                 FUN_18057ac40(uVar6,0x18,0,*(undefined4 *)(param_1 + 0x1dc),0,local_res10);
        puVar4 = (ushort *)0x0;
        if ((local_res10[0] == 0) &&
           (local_res10[0] = FUN_180577bf0(param_2,*(int *)(param_1 + 0x1dc) * 0xc),
           local_res10[0] == 0)) {
          iVar10 = *(int *)(param_1 + 0x1dc);
          iVar11 = 0;
          if (iVar10 != 0) {
            puVar9 = (uint *)(puVar5 + 6);
            local_res10[0] = 0;
            do {
              local_res10[0] = FUN_180578280(param_2,&DAT_1806849a8,puVar9 + -3);
              if ((local_res10[0] == 0) && ((ushort)puVar9[-1] != 0)) {
                uVar8 = *(int *)(param_1 + 0x1e0) + iVar3 + *puVar9;
                *puVar9 = uVar8;
                if (((uVar13 <= uVar8) && (uVar8 + (ushort)puVar9[-1] <= uVar12)) &&
                   (((*psVar1 != 1 || ((ushort)puVar9[-2] < 0x8000)) ||
                    ((uVar8 = (ushort)puVar9[-2] - 0x8000, uVar8 < *(uint *)(param_1 + 0x1f0) &&
                     (*(short *)(*(longlong *)(param_1 + 0x1f8) + (ulonglong)uVar8 * 0x10) != 0)))))
                   ) {
                  iVar11 = iVar11 + 1;
                  puVar9[1] = 0;
                  puVar9[2] = 0;
                  puVar9 = puVar9 + 6;
                }
              }
              iVar10 = iVar10 + -1;
            } while (iVar10 != 0);
          }
          uVar6 = FUN_18057ac40(local_res20,0x18,*(undefined4 *)(param_1 + 0x1dc),iVar11,puVar5,
                                local_res10);
          puVar5 = (ushort *)0x0;
          *(undefined8 *)(param_1 + 0x1e8) = uVar6;
          *(int *)(param_1 + 0x1dc) = iVar11;
          FUN_180577d30(param_2);
          *(undefined2 *)(param_1 + 0x1d0) = *(undefined2 *)(param_1 + 0x1dc);
          puVar4 = puVar5;
          uVar6 = local_res20;
        }
      }
    }
  }
LAB_1805c2f1e:
  FUN_18057abd0(uVar6,puVar5);
  FUN_18057abd0(uVar6,puVar4);
  return local_res10[0];
}



