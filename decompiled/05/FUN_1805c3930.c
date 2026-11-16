// FUN_1805c3930 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805c3930 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1805c3930(undefined8 param_1,longlong param_2,undefined8 param_3,uint param_4,int *param_5)

{
  ushort uVar1;
  short sVar2;
  short sVar3;
  longlong *plVar4;
  longlong lVar5;
  bool bVar6;
  bool bVar7;
  undefined4 uVar8;
  int iVar9;
  int *piVar10;
  undefined8 uVar11;
  uint uVar12;
  uint uVar13;
  int *piVar14;
  uint *puVar15;
  short sVar16;
  ulonglong uVar17;
  uint uVar18;
  undefined2 *puVar19;
  int *piVar20;
  longlong lVar21;
  bool bVar22;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  int *local_a0;
  int local_98;
  char local_94;
  uint local_90;
  uint local_8c;
  int local_88;
  longlong local_80;
  undefined4 local_78;
  undefined4 local_74;
  int local_70;
  longlong local_68;
  ushort local_60;
  ushort local_5e;
  int local_4c;
  ulonglong local_40;
  
  local_40 = DAT_1808d5f00 ^ (ulonglong)auStack_c8;
  lVar21 = *(longlong *)(param_2 + 0x2d0);
  bVar7 = false;
  bVar6 = false;
  bVar22 = false;
  local_94 = '\0';
  if (0 < (int)param_4) {
    uVar17 = (ulonglong)param_4;
    do {
      iVar9 = *param_5;
      if (iVar9 == 0x69677066) {
        bVar7 = true;
      }
      else if (iVar9 == 0x69677073) {
        local_94 = '\x01';
      }
      else {
        bVar22 = bVar6;
        if (iVar9 == 0x69736278) {
          bVar22 = true;
          bVar6 = true;
        }
      }
      param_5 = param_5 + 4;
      uVar17 = uVar17 - 1;
    } while (uVar17 != 0);
  }
  if (*(longlong *)(*(longlong *)(param_2 + 0xd0) + 0x50) == 0) {
    piVar14 = *(int **)(param_2 + 0xf8);
    piVar20 = piVar14 + (ulonglong)*(ushort *)(param_2 + 0xf4) * 4;
    for (piVar10 = piVar14; piVar10 < piVar20; piVar10 = piVar10 + 4) {
      if ((*piVar10 == 0x676c7966) && (piVar10[3] != 0)) goto LAB_1805c3a3c;
    }
    piVar10 = piVar14;
    if (piVar14 < piVar20) {
      do {
        if ((*piVar10 == 0x43464620) && (piVar10[3] != 0)) goto LAB_1805c3a3c;
        piVar10 = piVar10 + 4;
      } while (piVar10 < piVar20);
      for (; piVar14 < piVar20; piVar14 = piVar14 + 4) {
        if ((*piVar14 == 0x43464632) && (piVar14[3] != 0)) goto LAB_1805c3a3c;
      }
    }
    bVar6 = false;
  }
  else {
LAB_1805c3a3c:
    bVar6 = true;
  }
  local_68 = lVar21;
  local_8c = (**(code **)(param_2 + 0x2a0))(param_2,0x43424c43,param_1,0);
  local_88 = (**(code **)(param_2 + 0x2a0))(param_2,0x43424454,param_1,0);
  local_70 = (**(code **)(param_2 + 0x2a0))(param_2,0x45424c43,param_1,0);
  uVar8 = (**(code **)(param_2 + 0x2a0))(param_2,0x626c6f63,param_1,0);
  local_80 = CONCAT44(local_80._4_4_,uVar8);
  iVar9 = (**(code **)(param_2 + 0x2a0))(param_2,0x73626978,param_1,0);
  uVar18 = 0;
  local_90 = 0;
  if (!bVar22) {
    local_90 = (uint)(iVar9 == 0);
  }
  if ((bVar6) || (*(code **)(lVar21 + 0x90) == (code *)0x0)) {
    bVar22 = false;
LAB_1805c3b08:
    iVar9 = (**(code **)(lVar21 + 0x30))(param_2,param_1);
    if (iVar9 != 0) {
    }
  }
  else {
    local_98 = (**(code **)(lVar21 + 0x90))(param_2,param_1);
    bVar22 = local_98 == 0;
    if (local_98 != 0) goto LAB_1805c3b08;
    iVar9 = 0;
    if ((char)local_90 != '\0') goto LAB_1805c3b08;
  }
  local_98 = iVar9;
  if ((local_8c == 0) || (local_88 == 0)) {
    bVar6 = false;
  }
  if (0x3ff0 < (ushort)(*(short *)(param_2 + 0x112) - 0x10U)) {
  }
  local_98 = (**(code **)(lVar21 + 0x48))(param_2,param_1);
  local_98 = (**(code **)(lVar21 + 0x40))(param_2,param_1);
  local_98 = (**(code **)(lVar21 + 0x60))(param_2,param_1);
  local_98 = (**(code **)(lVar21 + 0x58))(param_2,param_1);
  local_88 = local_98;
  if (!bVar22) {
    local_98 = (**(code **)(lVar21 + 0x38))(param_2,param_1,0);
    if (local_98 == 0) {
      local_98 = (**(code **)(lVar21 + 200))(param_2,param_1,0,0);
      if ((char)local_98 == -0x72) {
        local_98 = 0x93;
        plVar4 = *(longlong **)(*(longlong *)(param_2 + 0xd0) + 0x50);
        if ((plVar4 != (longlong *)0x0) && (*(longlong *)(*plVar4 + 0x10) != 0)) {
          *(undefined2 *)(param_2 + 0x15a) = 0;
          local_98 = 0;
        }
      }
      if (local_98 != 0) {
      }
      iVar9 = 0;
    }
    else {
      if ((char)local_98 != -0x72) {
      }
      if (*(int *)(param_2 + 0xf0) == 0x74727565) {
        bVar6 = false;
        iVar9 = local_98;
      }
      else {
        iVar9 = 0x8f;
        plVar4 = *(longlong **)(*(longlong *)(param_2 + 0xd0) + 0x50);
        if (plVar4 == (longlong *)0x0) {
        }
        if (*(longlong *)(*plVar4 + 0x10) == 0) {
        }
        *(undefined2 *)(param_2 + 0x15a) = 0;
      }
      local_98 = 0;
    }
    local_98 = (**(code **)(lVar21 + 0x38))(param_2,param_1,1,iVar9);
    if ((local_98 == 0) &&
       (local_98 = (**(code **)(lVar21 + 200))(param_2,param_1,1,0), local_98 == 0)) {
      *(undefined1 *)(param_2 + 400) = 1;
    }
    else if ((char)local_98 != -0x72) {
    }
    local_98 = (**(code **)(lVar21 + 0x50))(param_2,param_1);
    if (local_98 != 0) {
      *(undefined2 *)(param_2 + 0x208) = 0xffff;
    }
  }
  if ((*(code **)(lVar21 + 0xd0) != (code *)0x0) &&
     ((((local_8c == 0 || (local_70 == 0)) || ((int)local_80 == 0)) || ((char)local_90 != '\0')))) {
    local_98 = (**(code **)(lVar21 + 0xd0))(param_2,param_1);
  }
  if (*(code **)(lVar21 + 0xf0) != (code *)0x0) {
    local_98 = (**(code **)(lVar21 + 0xf0))(param_2,param_1);
    local_98 = (**(code **)(lVar21 + 0xf8))(param_2,param_1);
  }
  if (*(code **)(lVar21 + 0x168) != (code *)0x0) {
    local_98 = (**(code **)(lVar21 + 0x168))(param_2,param_1);
  }
  local_98 = (**(code **)(lVar21 + 0x88))(param_2,param_1);
  local_98 = (**(code **)(lVar21 + 0x80))(param_2,param_1);
  local_98 = (**(code **)(lVar21 + 0x70))(param_2,param_1);
  plVar4 = (longlong *)(param_2 + 0x18);
  *(uint *)(param_2 + 0x10) = (uint)*(ushort *)(param_2 + 0x174);
  *plVar4 = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  if ((*(short *)(param_2 + 0x208) == -1) || ((*(ushort *)(param_2 + 0x248) & 0x100) == 0)) {
    local_98 = FUN_1805c4660(param_2,0x15,plVar4);
    if (local_98 != 0) {
    }
    iVar9 = 0;
    if (*plVar4 == 0) {
      if ((!bVar7) && (iVar9 = FUN_1805c4660(param_2,0x10,plVar4,0), iVar9 != 0)) {
      }
      local_98 = iVar9;
      iVar9 = local_98;
      if (*plVar4 == 0) {
        iVar9 = FUN_1805c4660(param_2,1,param_2 + 0x18,local_98);
        if (iVar9 != 0) {
        }
        iVar9 = 0;
      }
    }
    local_98 = iVar9;
    iVar9 = FUN_1805c4660(param_2,0x16,param_2 + 0x20,local_98);
    if (iVar9 != 0) {
    }
    local_98 = 0;
    if (*(longlong *)(param_2 + 0x20) == 0) goto LAB_1805c3e79;
  }
  else {
    if ((!bVar7) && (local_98 = FUN_1805c4660(param_2,0x10,plVar4), local_98 != 0)) {
    }
    if (*plVar4 == 0) {
      iVar9 = FUN_1805c4660(param_2,1,plVar4);
      if (iVar9 != 0) {
      }
      local_98 = 0;
    }
LAB_1805c3e79:
    if ((local_94 == '\0') && (local_98 = FUN_1805c4660(param_2,0x11,param_2 + 0x20), local_98 != 0)
       ) {
    }
    if ((*(longlong *)(param_2 + 0x20) == 0) &&
       (local_98 = FUN_1805c4660(param_2,2,param_2 + 0x20), local_98 != 0)) {
    }
  }
  uVar11 = FUN_18057ade0(*(undefined8 *)(param_2 + 0x98),*(undefined8 *)(param_2 + 0x20),&local_98);
  *(undefined8 *)(param_2 + 0x428) = uVar11;
  if (local_98 != 0) {
  }
  uVar12 = *(uint *)(param_2 + 8);
  if ((((*(int *)(param_2 + 0x474) == 2) || (*(int *)(param_2 + 0x474) == 3)) ||
      (*(longlong *)(param_2 + 0x4e0) != 0)) || (*(longlong *)(param_2 + 0x4e8) != 0)) {
    uVar12 = uVar12 | 0x4000;
  }
  if (bVar6) {
    if ((char)local_90 == '\0') {
      uVar12 = uVar12 | 1;
    }
    else {
      uVar12 = uVar12 | 0x20000;
    }
  }
  uVar13 = uVar12 | 0x18;
  if ((local_88 == 0) && (*(int *)(param_2 + 0x270) != 0x30000)) {
    uVar13 = uVar12 | 0x218;
  }
  uVar12 = uVar13 | 4;
  if (*(int *)(param_2 + 0x27c) == 0) {
    uVar12 = uVar13;
  }
  uVar13 = uVar12 | 0x20;
  if (*(char *)(param_2 + 400) == '\0') {
    uVar13 = uVar12;
  }
  uVar12 = uVar13 | 0x40;
  if (*(int *)(param_2 + 0x498) == 0) {
    uVar12 = uVar13;
  }
  uVar13 = uVar12 | 0x100;
  if ((*(uint *)(param_2 + 0x410) & 1) == 0) {
    uVar13 = uVar12;
  }
  *(uint *)(param_2 + 8) = uVar13;
  if ((bVar6) && (*(short *)(param_2 + 0x208) != -1)) {
    uVar1 = *(ushort *)(param_2 + 0x248);
    if ((uVar1 & 0x200) == 0) {
      uVar13 = (uint)((uVar1 & 1) != 0);
      uVar12 = uVar13 | 2;
      if ((*(byte *)(param_2 + 0x248) & 0x20) == 0) {
        uVar12 = uVar13;
      }
    }
    else {
      uVar12 = 3;
      if ((uVar1 & 0x20) == 0) {
        uVar12 = 1;
      }
    }
  }
  else {
    uVar12 = (*(ushort *)(param_2 + 300) & 1) * 2;
    if ((*(ushort *)(param_2 + 300) & 2) != 0) {
      uVar12 = uVar12 | 1;
    }
  }
  *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) | uVar12;
  FUN_1805cd520(param_2);
  bVar22 = false;
  iVar9 = 0;
  if (*(int *)(param_2 + 0x38) < 1) {
LAB_1805c4055:
    if ((*(uint *)(param_2 + 8) & 0x200) != 0) {
      local_74 = 0x10003;
      local_78 = 0x756e6963;
      local_80 = param_2;
      uVar12 = FUN_180573150(&DAT_180684e80,0,&local_80,0);
      if (((uVar12 != 0) && ((uVar12 & 0xff) != 0xa3)) && ((uVar12 & 0xff) != 7)) {
      }
      local_98 = 0;
    }
  }
  else {
    lVar21 = 0;
    do {
      puVar15 = &DAT_180685240;
      lVar5 = *(longlong *)(lVar21 + *(longlong *)(param_2 + 0x40));
      do {
        if ((*puVar15 == (uint)*(ushort *)(lVar5 + 0xc)) &&
           ((puVar15[1] == (uint)*(ushort *)(lVar5 + 0xe) || (puVar15[1] == 0xffffffff)))) {
          uVar12 = puVar15[2];
          *(uint *)(lVar5 + 8) = uVar12;
          if ((uVar12 == 0x756e6963) || (uVar12 == 0x73796d62)) {
            bVar22 = true;
          }
          goto LAB_1805c4043;
        }
        puVar15 = puVar15 + 3;
      } while (puVar15 < &DAT_1806852c4);
      *(undefined4 *)(lVar5 + 8) = 0;
LAB_1805c4043:
      iVar9 = iVar9 + 1;
      lVar21 = lVar21 + 8;
    } while (iVar9 < *(int *)(param_2 + 0x38));
    if (!bVar22) goto LAB_1805c4055;
  }
  uVar12 = *(uint *)(param_2 + 0x478);
  if (uVar12 != 0) {
    lVar21 = *(longlong *)(param_2 + 0x98);
    local_8c = (uint)*(ushort *)(param_2 + 0x112);
    local_90 = (uint)*(ushort *)(param_2 + 0x20a);
    if ((*(ushort *)(param_2 + 0x112) == 0) || (*(short *)(param_2 + 0x208) == -1)) {
      local_90 = 1;
      local_8c = 1;
    }
    local_a0 = &local_98;
    local_a8 = 0;
    local_80 = lVar21;
    uVar11 = FUN_18057ad10(lVar21,0x10,0,uVar12);
    *(undefined8 *)(param_2 + 0x30) = uVar11;
    if (local_98 != 0) {
    }
    local_a0 = &local_98;
    local_a8 = 0;
    lVar21 = FUN_18057ac40(lVar21,4,0,uVar12);
    if (local_98 != 0) {
    }
    uVar13 = 0;
    do {
      puVar19 = (undefined2 *)((ulonglong)uVar18 * 0x10 + *(longlong *)(param_2 + 0x30));
      local_98 = (**(code **)(local_68 + 0xe8))(param_2,uVar13,&local_60);
      if (local_98 == 0) {
        *puVar19 = (short)(local_4c >> 6);
        puVar19[1] = (short)((int)((uint)local_60 * (int)(short)local_90 + (local_8c >> 1 & 0x7fff))
                            / (int)(local_8c & 0xffff));
        *(uint *)(puVar19 + 4) = (uint)local_60 << 6;
        *(uint *)(puVar19 + 6) = (uint)local_5e << 6;
        *(uint *)(puVar19 + 2) = (uint)local_5e << 6;
        if ((local_60 != 0) && (local_5e != 0)) {
          *(uint *)(lVar21 + (ulonglong)uVar18 * 4) = uVar13;
          uVar18 = uVar18 + 1;
        }
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 < uVar12);
    local_a0 = &local_98;
    local_a8 = lVar21;
    uVar11 = FUN_18057ac40(local_80,4,uVar12,uVar18);
    if (uVar18 != 0) {
      *(undefined8 *)(param_2 + 0x480) = uVar11;
      *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 2;
      *(uint *)(param_2 + 0x28) = uVar18;
    }
  }
  uVar18 = *(uint *)(param_2 + 8);
  if ((uVar18 & 3) == 0) {
    uVar18 = uVar18 | 1;
    *(uint *)(param_2 + 8) = uVar18;
  }
  if ((uVar18 & 0x20001) == 0) {
  }
  *(int *)(param_2 + 0x58) = (int)*(short *)(param_2 + 0x124);
  *(int *)(param_2 + 0x5c) = (int)*(short *)(param_2 + 0x126);
  *(int *)(param_2 + 0x60) = (int)*(short *)(param_2 + 0x128);
  *(int *)(param_2 + 100) = (int)*(short *)(param_2 + 0x12a);
  *(undefined2 *)(param_2 + 0x68) = *(undefined2 *)(param_2 + 0x112);
  if ((*(short *)(param_2 + 0x208) == -1) || ((*(byte *)(param_2 + 0x248) & 0x80) == 0)) {
    sVar2 = *(short *)(param_2 + 0x13c);
    *(short *)(param_2 + 0x6a) = sVar2;
    sVar3 = *(short *)(param_2 + 0x13e);
    *(short *)(param_2 + 0x6c) = sVar3;
    sVar16 = (*(short *)(param_2 + 0x140) - sVar3) + sVar2;
    *(short *)(param_2 + 0x6e) = sVar16;
    if ((sVar2 != 0) || ((sVar3 != 0 || (*(short *)(param_2 + 0x208) == -1)))) goto LAB_1805c42d3;
    sVar16 = *(short *)(param_2 + 0x24e);
    if ((sVar16 != 0) || (*(short *)(param_2 + 0x250) != 0)) goto LAB_1805c42b3;
    *(short *)(param_2 + 0x6a) = *(short *)(param_2 + 0x254);
    *(short *)(param_2 + 0x6c) = -*(short *)(param_2 + 0x256);
    sVar16 = *(short *)(param_2 + 0x254) + *(short *)(param_2 + 0x256);
  }
  else {
    sVar16 = *(short *)(param_2 + 0x24e);
LAB_1805c42b3:
    *(short *)(param_2 + 0x6a) = sVar16;
    *(short *)(param_2 + 0x6c) = *(short *)(param_2 + 0x250);
    sVar16 = (*(short *)(param_2 + 0x252) - *(short *)(param_2 + 0x250)) + sVar16;
  }
  *(short *)(param_2 + 0x6e) = sVar16;
LAB_1805c42d3:
  *(undefined2 *)(param_2 + 0x70) = *(undefined2 *)(param_2 + 0x142);
  if (*(char *)(param_2 + 400) != '\0') {
    sVar16 = *(short *)(param_2 + 0x1a2);
  }
  *(short *)(param_2 + 0x72) = sVar16;
  *(short *)(param_2 + 0x76) = *(short *)(param_2 + 0x27a);
  *(short *)(param_2 + 0x74) = *(short *)(param_2 + 0x278) - *(short *)(param_2 + 0x27a) / 2;
}



