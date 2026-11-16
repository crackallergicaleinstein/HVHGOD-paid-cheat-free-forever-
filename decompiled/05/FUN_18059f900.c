// FUN_18059f900 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18059f900 */

int FUN_18059f900(uint *param_1,longlong param_2,uint param_3,longlong param_4,int param_5,
                 uint param_6)

{
  uint uVar1;
  ushort uVar2;
  undefined8 uVar3;
  byte bVar4;
  byte bVar5;
  short sVar6;
  ushort uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  uint uVar12;
  uint *puVar13;
  byte *pbVar14;
  uint uVar15;
  int iVar16;
  int local_res10 [2];
  
  uVar15 = 0;
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 8) == 0) {
    return 3;
  }
  if (param_6 < 2) {
    if (param_6 == 0) {
      lVar11 = 4;
      puVar13 = param_1 + 3;
      puVar10 = (undefined8 *)&DAT_180671a30;
      do {
        uVar3 = puVar10[1];
        *(undefined8 *)puVar13 = *puVar10;
        *(undefined8 *)(puVar13 + 2) = uVar3;
        uVar3 = puVar10[3];
        *(undefined8 *)(puVar13 + 4) = puVar10[2];
        *(undefined8 *)(puVar13 + 6) = uVar3;
        uVar3 = puVar10[5];
        *(undefined8 *)(puVar13 + 8) = puVar10[4];
        *(undefined8 *)(puVar13 + 10) = uVar3;
        uVar3 = puVar10[7];
        *(undefined8 *)(puVar13 + 0xc) = puVar10[6];
        *(undefined8 *)(puVar13 + 0xe) = uVar3;
        uVar3 = puVar10[9];
        *(undefined8 *)(puVar13 + 0x10) = puVar10[8];
        *(undefined8 *)(puVar13 + 0x12) = uVar3;
        uVar3 = puVar10[0xb];
        *(undefined8 *)(puVar13 + 0x14) = puVar10[10];
        *(undefined8 *)(puVar13 + 0x16) = uVar3;
        uVar15 = *(uint *)((longlong)puVar10 + 100);
        uVar9 = *(uint *)(puVar10 + 0xd);
        uVar12 = *(uint *)((longlong)puVar10 + 0x6c);
        puVar13[0x18] = *(uint *)(puVar10 + 0xc);
        puVar13[0x19] = uVar15;
        puVar13[0x1a] = uVar9;
        puVar13[0x1b] = uVar12;
        uVar15 = *(uint *)((longlong)puVar10 + 0x74);
        uVar9 = *(uint *)(puVar10 + 0xf);
        uVar12 = *(uint *)((longlong)puVar10 + 0x7c);
        puVar13[0x1c] = *(uint *)(puVar10 + 0xe);
        puVar13[0x1d] = uVar15;
        puVar13[0x1e] = uVar9;
        puVar13[0x1f] = uVar12;
        lVar11 = lVar11 + -1;
        puVar13 = puVar13 + 0x20;
        puVar10 = puVar10 + 0x10;
      } while (lVar11 != 0);
    }
    else {
      if (param_6 != 1) {
        return 3;
      }
      lVar11 = 4;
      puVar13 = param_1 + 3;
      puVar10 = (undefined8 *)&DAT_180671c30;
      do {
        uVar3 = puVar10[1];
        *(undefined8 *)puVar13 = *puVar10;
        *(undefined8 *)(puVar13 + 2) = uVar3;
        uVar3 = puVar10[3];
        *(undefined8 *)(puVar13 + 4) = puVar10[2];
        *(undefined8 *)(puVar13 + 6) = uVar3;
        uVar3 = puVar10[5];
        *(undefined8 *)(puVar13 + 8) = puVar10[4];
        *(undefined8 *)(puVar13 + 10) = uVar3;
        uVar3 = puVar10[7];
        *(undefined8 *)(puVar13 + 0xc) = puVar10[6];
        *(undefined8 *)(puVar13 + 0xe) = uVar3;
        uVar3 = puVar10[9];
        *(undefined8 *)(puVar13 + 0x10) = puVar10[8];
        *(undefined8 *)(puVar13 + 0x12) = uVar3;
        uVar3 = puVar10[0xb];
        *(undefined8 *)(puVar13 + 0x14) = puVar10[10];
        *(undefined8 *)(puVar13 + 0x16) = uVar3;
        uVar15 = *(uint *)((longlong)puVar10 + 100);
        uVar9 = *(uint *)(puVar10 + 0xd);
        uVar12 = *(uint *)((longlong)puVar10 + 0x6c);
        puVar13[0x18] = *(uint *)(puVar10 + 0xc);
        puVar13[0x19] = uVar15;
        puVar13[0x1a] = uVar9;
        puVar13[0x1b] = uVar12;
        uVar15 = *(uint *)((longlong)puVar10 + 0x74);
        uVar9 = *(uint *)(puVar10 + 0xf);
        uVar12 = *(uint *)((longlong)puVar10 + 0x7c);
        puVar13[0x1c] = *(uint *)(puVar10 + 0xe);
        puVar13[0x1d] = uVar15;
        puVar13[0x1e] = uVar9;
        puVar13[0x1f] = uVar12;
        lVar11 = lVar11 + -1;
        puVar13 = puVar13 + 0x20;
        puVar10 = puVar10 + 0x10;
      } while (lVar11 != 0);
    }
    puVar13 = param_1 + 3;
    param_1[1] = param_6;
    param_1[2] = 0;
    iVar16 = FUN_18059f470(param_2,param_3,*(undefined8 *)(param_4 + 0x30));
    if (iVar16 != 0) {
      return iVar16;
    }
    uVar15 = 0;
    do {
      uVar2 = (ushort)*puVar13;
      uVar7 = 0;
      if ((uVar2 != 0) && ((uint)uVar2 <= *(uint *)(param_2 + 0x18))) {
        uVar7 = *(ushort *)(*(longlong *)(param_2 + 0x10) + (ulonglong)uVar2 * 2);
      }
      uVar15 = uVar15 + 1;
      if (uVar7 == 0) {
        *(ushort *)(puVar13 + 0x80) = 0;
        *(ushort *)puVar13 = 0;
      }
      else {
        *(ushort *)(puVar13 + 0x80) = uVar7;
        param_1[2] = uVar15;
      }
      puVar13 = (uint *)((longlong)puVar13 + 2);
    } while (uVar15 < 0x100);
    return 0;
  }
  FUN_18063ab10(param_1 + 3,0,0x200);
  FUN_18063ab10(param_1 + 0x83,0,0x200);
  param_1[1] = param_5 + param_6;
  local_res10[0] = FUN_1805788b0(param_4);
  if (local_res10[0] != 0) {
    return local_res10[0];
  }
  bVar4 = FUN_180578210(param_4,local_res10);
  *param_1 = (uint)bVar4;
  if (local_res10[0] != 0) {
    return local_res10[0];
  }
  bVar4 = FUN_180578210(param_4,local_res10);
  if (local_res10[0] != 0) {
    return local_res10[0];
  }
  uVar9 = (uint)bVar4;
  if ((*param_1 & 0x7f) == 0) {
    param_1[2] = bVar4 + 1;
    local_res10[0] = FUN_180577bf0(param_4,bVar4);
    if (local_res10[0] != 0) {
      return local_res10[0];
    }
    pbVar14 = *(byte **)(param_4 + 0x38);
    uVar15 = 1;
    if (uVar9 != 0) {
      do {
        bVar4 = *pbVar14;
        pbVar14 = pbVar14 + 1;
        if (uVar15 < param_3) {
          *(short *)((longlong)param_1 + (ulonglong)bVar4 * 2 + 0x20c) = (short)uVar15;
          *(undefined2 *)((longlong)param_1 + (ulonglong)bVar4 * 2 + 0xc) =
               *(undefined2 *)(*(longlong *)(param_2 + 8) + (ulonglong)uVar15 * 2);
        }
        uVar15 = uVar15 + 1;
      } while (uVar15 <= uVar9);
    }
    FUN_180577d30(param_4);
  }
  else {
    if ((*param_1 & 0x7f) != 1) {
      return 3;
    }
    param_1[2] = 0;
    uVar12 = 1;
    if (uVar9 != 0) {
      do {
        bVar4 = FUN_180578210(param_4,local_res10);
        if (local_res10[0] != 0) {
          return local_res10[0];
        }
        bVar5 = FUN_180578210(param_4,local_res10);
        if (local_res10[0] != 0) {
          return local_res10[0];
        }
        uVar8 = bVar5 + 1;
        if (param_1[2] < uVar8) {
          param_1[2] = uVar8;
        }
        uVar8 = uVar8 + uVar12;
        if (uVar12 < uVar8) {
          iVar16 = bVar4 - uVar12;
          do {
            if (uVar12 < param_3) {
              uVar1 = iVar16 + uVar12;
              if (uVar1 < 0x100) {
                *(short *)((longlong)param_1 + (ulonglong)uVar1 * 2 + 0x20c) = (short)uVar12;
                *(undefined2 *)((longlong)param_1 + (ulonglong)uVar1 * 2 + 0xc) =
                     *(undefined2 *)(*(longlong *)(param_2 + 8) + (ulonglong)uVar12 * 2);
              }
            }
            uVar12 = uVar12 + 1;
          } while (uVar12 < uVar8);
        }
        uVar15 = uVar15 + 1;
        uVar12 = uVar8;
      } while (uVar15 < uVar9);
    }
    if (0x100 < param_1[2]) {
      param_1[2] = 0x100;
    }
  }
  if ((*param_1 & 0x80) == 0) {
    return local_res10[0];
  }
  bVar4 = FUN_180578210(param_4,local_res10);
  if (local_res10[0] != 0) {
    return local_res10[0];
  }
  uVar15 = 0;
  if (bVar4 == 0) {
    return 0;
  }
  do {
    bVar5 = FUN_180578210(param_4,local_res10);
    if (local_res10[0] != 0) {
      return local_res10[0];
    }
    sVar6 = FUN_180578720(param_4,local_res10);
    if (local_res10[0] != 0) {
      return local_res10[0];
    }
    *(short *)((longlong)param_1 + (ulonglong)bVar5 * 2 + 0xc) = sVar6;
    if (param_3 != 0) {
      uVar9 = 0;
      do {
        if (*(short *)(*(longlong *)(param_2 + 8) + (ulonglong)uVar9 * 2) == sVar6) {
          *(short *)((longlong)param_1 + (ulonglong)bVar5 * 2 + 0x20c) = (short)uVar9;
          break;
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < param_3);
    }
    uVar15 = uVar15 + 1;
    if (bVar4 <= uVar15) {
      return 0;
    }
  } while( true );
}



