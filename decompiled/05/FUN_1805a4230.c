// FUN_1805a4230 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805a4230 */

int FUN_1805a4230(longlong param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  int local_res8 [2];
  undefined4 local_res18 [4];
  undefined1 local_e8 [48];
  code *local_b8;
  undefined8 local_58;
  longlong local_50;
  undefined4 local_48;
  int local_44;
  uint local_40;
  
  uVar7 = *(undefined8 *)(param_1 + 0x98);
  FUN_18063ab10(local_e8,0,200);
  local_res8[0] =
       FUN_1805a4da0(local_e8,*(undefined8 *)(param_1 + 0xa0),uVar7,*(undefined8 *)(param_1 + 0xe0))
  ;
  if (((local_res8[0] == 0) &&
      (local_res8[0] = FUN_1805a4b90(param_1,local_e8,local_50,local_48), local_res8[0] == 0)) &&
     (-1 < param_2)) {
    puVar6 = (undefined8 *)FUN_18057aad0(uVar7,0x48,local_res8);
    *(undefined8 **)(param_1 + 0x1e8) = puVar6;
    if (local_res8[0] == 0) {
      uVar10 = 0;
      puVar4 = *(undefined8 **)(param_1 + 0xa0);
      if (local_40 == 0) {
        uVar7 = puVar4[1];
        *puVar6 = *puVar4;
        puVar6[1] = uVar7;
        uVar7 = puVar4[3];
        puVar6[2] = puVar4[2];
        puVar6[3] = uVar7;
        uVar7 = puVar4[5];
        puVar6[4] = puVar4[4];
        puVar6[5] = uVar7;
        uVar7 = puVar4[7];
        puVar6[6] = puVar4[6];
        puVar6[7] = uVar7;
        puVar6[8] = puVar4[8];
        *(int *)(param_1 + 0x1c0) = local_44;
      }
      else {
        if ((uint)(*(int *)(puVar4 + 1) - local_44) < local_40) {
          local_40 = *(int *)(puVar4 + 1) - local_44;
        }
        uVar7 = FUN_18057abe0(uVar7,local_40,local_res8);
        *(undefined8 *)(param_1 + 0x1e0) = uVar7;
        if ((local_res8[0] != 0) ||
           (local_res8[0] = FUN_1805a44f0(uVar7,local_40,local_44,param_1,local_res18),
           local_res8[0] != 0)) goto LAB_1805a44b9;
        FUN_1805780d0(*(undefined8 *)(param_1 + 0x1e8),*(undefined8 *)(param_1 + 0x1e0),
                      local_res18[0]);
        local_44 = 0;
        *(undefined4 *)(param_1 + 0x1c0) = 0;
      }
      uVar9 = *(uint *)(param_1 + 0x1a8);
      if (((uVar9 != 0) && (*(uint *)(param_1 + 0x1a4) < 5)) && (uVar9 < 5)) {
        uVar11 = *(int *)(*(longlong *)(param_1 + 0x1e8) + 8) - local_44;
        if (((*(uint *)(param_1 + 0x1a0) <= uVar11) && (*(uint *)(param_1 + 0x1ac) < 0x20000000)) &&
           ((uVar9 + *(uint *)(param_1 + 0x1a4)) * *(uint *)(param_1 + 0x1ac) <=
            uVar11 - *(uint *)(param_1 + 0x1a0))) {
          if (*(int *)(param_1 + 0x1b0) != 0) {
            do {
              lVar8 = uVar10 * 0xfc;
              lVar5 = *(longlong *)(param_1 + 0x1b8);
              iVar1 = *(int *)(lVar8 + 0x70 + lVar5);
              if ((1000 < iVar1) || (iVar1 < 0)) {
                *(undefined4 *)(lVar8 + 0x70 + lVar5) = 7;
              }
              iVar1 = *(int *)(lVar8 + 0x74 + lVar5);
              if ((1000 < iVar1) || (iVar1 < 0)) {
                *(undefined4 *)(lVar8 + 0x74 + lVar5) = 1;
              }
              uVar9 = *(uint *)(lVar8 + 0xf0 + lVar5);
              if (((((uVar9 != 0) && (*(int *)(lVar8 + 0xf8 + lVar5) == 0)) ||
                   (uVar2 = *(uint *)(lVar8 + 0xf8 + lVar5), 4 < uVar2)) ||
                  ((uVar3 = *(uint *)(lVar8 + 0xf4 + lVar5), uVar11 < uVar3 || (0x3fffffff < uVar9))
                  )) || (uVar11 - uVar3 < uVar2 * uVar9)) goto LAB_1805a44b2;
              uVar9 = (int)uVar10 + 1;
              uVar10 = (ulonglong)uVar9;
            } while (uVar9 < *(uint *)(param_1 + 0x1b0));
          }
          local_res8[0] = FUN_1805a51e0(param_1);
          goto LAB_1805a44b9;
        }
      }
LAB_1805a44b2:
      local_res8[0] = 3;
    }
  }
LAB_1805a44b9:
  if (local_50 != 0) {
    FUN_180578860(local_58,&local_50);
  }
  (*local_b8)(local_e8);
  return local_res8[0];
}



