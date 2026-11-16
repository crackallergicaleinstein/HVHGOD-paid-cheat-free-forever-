// FUN_1805ad8f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805ad8f0 */

int FUN_1805ad8f0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  longlong lVar14;
  uint uVar15;
  int local_res10 [2];
  
  uVar1 = *(undefined8 *)(param_2 + 0x98);
  local_res10[0] = FUN_1805788b0(param_1,0);
  if ((local_res10[0] != 0) ||
     (local_res10[0] = FUN_180578280(param_1,&DAT_1806738e0), local_res10[0] != 0)) {
    return 1;
  }
  if ((*(int *)(param_2 + 0x138) != 0x70636601) ||
     ((uVar11 = *(uint *)(param_2 + 0x13c), uVar11 == 0 || (*(uint *)(param_1 + 8) < 0x10)))) {
    return 3;
  }
  uVar8 = *(uint *)(param_1 + 8) >> 4;
  if ((uVar8 < uVar11) || (9 < uVar11)) {
    uVar11 = 9;
    if (uVar8 < 9) {
      uVar11 = uVar8;
    }
    *(uint *)(param_2 + 0x13c) = uVar11;
  }
  uVar9 = FUN_18057ac40(uVar1,0x10,0,uVar11,0,local_res10);
  *(undefined8 *)(param_2 + 0x140) = uVar9;
  if (local_res10[0] == 0) {
    uVar8 = 0;
    uVar11 = 0;
    if (*(int *)(param_2 + 0x13c) != 0) {
      do {
        local_res10[0] = FUN_180578280(param_1,&DAT_1806738f0);
        if (local_res10[0] != 0) goto LAB_1805adaf1;
        uVar11 = *(uint *)(param_2 + 0x13c);
        uVar8 = uVar8 + 1;
        local_res10[0] = 0;
      } while (uVar8 < uVar11);
    }
    lVar14 = *(longlong *)(param_2 + 0x140);
    uVar8 = 0;
    if (uVar11 != 1) {
      do {
        bVar6 = false;
        uVar12 = 0;
        bVar7 = false;
        if (uVar11 - uVar8 != 1) {
          do {
            bVar6 = bVar7;
            uVar15 = (int)uVar12 + 1;
            puVar10 = (undefined8 *)(uVar12 * 0x10 + lVar14);
            puVar13 = (undefined8 *)((ulonglong)uVar15 * 0x10 + lVar14);
            if (*(uint *)((longlong)puVar13 + 0xc) < *(uint *)((longlong)puVar10 + 0xc)) {
              uVar9 = puVar10[1];
              bVar6 = true;
              uVar2 = *(undefined4 *)puVar13;
              uVar3 = *(undefined4 *)((longlong)puVar13 + 4);
              uVar4 = *(undefined4 *)(puVar13 + 1);
              uVar5 = *(undefined4 *)((longlong)puVar13 + 0xc);
              *puVar13 = *puVar10;
              puVar13[1] = uVar9;
              *(undefined4 *)puVar10 = uVar2;
              *(undefined4 *)((longlong)puVar10 + 4) = uVar3;
              *(undefined4 *)(puVar10 + 1) = uVar4;
              *(undefined4 *)((longlong)puVar10 + 0xc) = uVar5;
            }
            if ((*(uint *)((longlong)puVar13 + 0xc) < *(uint *)(puVar10 + 1)) ||
               (*(uint *)((longlong)puVar13 + 0xc) - *(uint *)(puVar10 + 1) <
                *(uint *)((longlong)puVar10 + 0xc))) {
              local_res10[0] = 9;
              goto LAB_1805adaf1;
            }
            uVar11 = *(uint *)(param_2 + 0x13c);
            uVar12 = (ulonglong)uVar15;
            bVar7 = bVar6;
          } while (uVar15 < (uVar11 - uVar8) - 1);
        }
      } while ((bVar6) && (uVar8 = uVar8 + 1, uVar8 < uVar11 - 1));
    }
    lVar14 = *(longlong *)(param_2 + 0x140);
    uVar15 = 0;
    uVar8 = *(uint *)(param_1 + 8);
    if (uVar11 != 1) {
      do {
        if ((uVar8 < *(uint *)(lVar14 + 8)) ||
           (uVar8 - *(uint *)(lVar14 + 8) < *(uint *)(lVar14 + 0xc))) goto LAB_1805adae9;
        lVar14 = lVar14 + 0x10;
        uVar15 = uVar15 + 1;
      } while (uVar15 < uVar11 - 1);
    }
    if (uVar8 < *(uint *)(lVar14 + 0xc)) {
LAB_1805adae9:
      local_res10[0] = 8;
LAB_1805adaf1:
      FUN_18057abd0(uVar1,*(undefined8 *)(param_2 + 0x140));
      *(undefined8 *)(param_2 + 0x140) = 0;
    }
    else {
      uVar8 = uVar8 - *(uint *)(lVar14 + 0xc);
      if (uVar8 < *(uint *)(lVar14 + 8)) {
        *(uint *)(lVar14 + 8) = uVar8;
      }
      local_res10[0] = 0;
    }
  }
  return local_res10[0];
}



