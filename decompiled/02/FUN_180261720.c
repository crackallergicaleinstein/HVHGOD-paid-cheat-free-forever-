// FUN_180261720 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180261720 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180261720(undefined8 param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  uint uVar1;
  float fVar2;
  undefined1 auVar3 [16];
  char cVar4;
  short sVar5;
  int iVar6;
  undefined8 uVar7;
  ULONGLONG UVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  uint *puVar13;
  uint *puVar14;
  char *pcVar15;
  uint *puVar16;
  undefined8 local_58;
  int local_50;
  undefined8 local_48;
  undefined *local_40;
  
  lVar10 = *(longlong *)(param_3 + 0x90);
  local_58 = param_4;
  if ((lVar10 == 0) || (*(char *)(lVar10 + 0x23b8) == '\0')) {
    pcVar15 = "melee_record";
    goto LAB_180261b3d;
  }
  if ((((param_2 == 0) || (*param_4 == 0)) ||
      (sVar5 = thunk_FUN_180624430(*(undefined4 *)(param_3 + 0xc)), 0 < sVar5)) ||
     ((sVar5 = thunk_FUN_180624430(*(undefined4 *)(param_3 + 0x10)), 0 < sVar5 ||
      (sVar5 = thunk_FUN_180624430(*(undefined4 *)(param_3 + 0x14)), 0 < sVar5)))) {
    pcVar15 = "melee_context";
    goto LAB_180261b3d;
  }
  uVar7 = FUN_18026b840(*(float *)(lVar10 + 0x23b0) * 64.0);
  local_50 = *(int *)(param_2 + 0x30) + -1;
  puVar14 = (uint *)0x0;
  if ((-1 < local_50) &&
     (lVar10 = *(longlong *)(*(longlong *)(param_2 + 0x38) + (longlong)*(int *)(param_2 + 0x30) * 8)
     , lVar10 != 0)) {
    puVar14 = (uint *)(lVar10 + 0x10);
  }
  *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) | 1;
  puVar16 = (uint *)0x0;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    puVar16 = (uint *)(*(longlong *)(param_2 + 0x40) + 0x10);
  }
  iVar6 = DAT_180c64768;
  local_48 = uVar7;
  if (DAT_180c64768 == 0) {
    UVar8 = GetTickCount64();
    if (DAT_180c64770 <= UVar8) {
      local_40 = &DAT_1808ef040;
      iVar6 = FUN_1805f68d0(&DAT_1808ef040);
      if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1808ef08c == 0x7fffffff) {
        DAT_1808ef08c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      if ((DAT_180c64768 == 0) && (DAT_180c64770 <= UVar8)) {
        DAT_180c64768 = FUN_1804174b0("CBasePlayerController",0x9a8c76d);
        if (DAT_180c64768 == 0) {
          DAT_180c64770 = UVar8 + 1000;
        }
        else {
          DAT_180c64770 = 0xffffffffffffffff;
        }
      }
      iVar6 = DAT_180c64768;
      FUN_1805f68fc(&DAT_1808ef040);
      if (iVar6 != 0) goto LAB_1802618b9;
    }
    local_58._0_5_ = (uint5)(uint)local_58;
  }
  else {
LAB_1802618b9:
    lVar10 = *local_58;
    lVar9 = FUN_18017ea70();
    *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
    if (iVar6 + lVar10 == 0) {
LAB_1802618fb:
      local_58._0_5_ = (uint5)(uint)local_58;
    }
    else {
      local_58 = (longlong *)((ulonglong)local_58 & 0xffffffff00000000);
      cVar4 = FUN_1804514f0(&local_58,iVar6 + lVar10,4);
      if (cVar4 == '\0') goto LAB_1802618fb;
      local_58._0_5_ = CONCAT14(1,(uint)local_58);
    }
    lVar10 = FUN_18017ea70();
    if (*(int *)(lVar10 + 4) != 0) {
      *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
    }
  }
  if (puVar16 != (uint *)0x0) {
    lVar10 = 0;
    if (*(longlong *)(puVar16 + 0xc) != 0) {
      lVar10 = *(longlong *)(puVar16 + 0xc) + 0x10;
    }
    if ((lVar10 != 0) && (puVar14 != (uint *)0x0)) {
      lVar10 = 0;
      if (*(longlong *)(puVar14 + 2) != 0) {
        lVar10 = *(longlong *)(puVar14 + 2) + 0x10;
      }
      if ((lVar10 != 0) && ((char)((ulonglong)local_58 >> 0x20) != '\0')) {
        _DAT_180b8e622 = 1;
        DAT_180b8e624 = *(int *)(param_3 + 0x5c) == 1;
        DAT_180b8e628 = SUB84(local_58,0);
        *puVar14 = *puVar14 | 1;
        puVar13 = (uint *)0x0;
        if (*(longlong *)(puVar14 + 2) != 0) {
          puVar13 = (uint *)(*(longlong *)(puVar14 + 2) + 0x10);
        }
        if (puVar13 != (uint *)0x0) {
          uVar1 = *(uint *)(param_3 + 0xc);
          *puVar13 = *puVar13 | 1;
          puVar13[2] = uVar1;
          uVar1 = *(uint *)(param_3 + 0x10);
          *puVar13 = *puVar13 | 2;
          puVar13[3] = uVar1;
        }
        puVar14[0x14] = (uint)uVar7;
        uVar1 = *puVar14;
        uVar12 = uVar1 | 0x600;
        *puVar14 = uVar12;
        puVar14[0x15] = local_48._4_4_;
        if (*(char *)(param_3 + 0x7c) == '\0') {
          fVar2 = *(float *)(param_3 + 0x78) + *(float *)(param_3 + 0x70);
          auVar3 = vroundss_avx(ZEXT816(0),ZEXT416((uint)fVar2),1);
          puVar14[0x16] = *(int *)(param_3 + 0x74) + *(int *)(param_3 + 0x6c) + (int)auVar3._0_4_;
          uVar12 = uVar1 | 0x1e00;
          *puVar14 = uVar12;
          puVar14[0x17] = (uint)(fVar2 - (float)(int)auVar3._0_4_);
        }
        if ((uVar12 & 4) != 0) {
          *puVar14 = uVar12 | 4;
          puVar13 = (uint *)0x0;
          if (*(longlong *)(puVar14 + 6) != 0) {
            puVar13 = (uint *)(*(longlong *)(puVar14 + 6) + 0x10);
          }
          puVar13[3] = 0xffffffff;
          puVar13[4] = 0xffffffff;
          *puVar13 = *puVar13 | 7;
          puVar13[2] = 0;
        }
        if ((*puVar14 & 8) != 0) {
          *puVar14 = *puVar14 | 8;
          puVar13 = (uint *)0x0;
          if (*(longlong *)(puVar14 + 8) != 0) {
            puVar13 = (uint *)(*(longlong *)(puVar14 + 8) + 0x10);
          }
          puVar13[3] = 0xffffffff;
          puVar13[4] = 0xffffffff;
          *puVar13 = *puVar13 | 7;
          puVar13[2] = 0;
        }
        if ((*puVar14 & 2) != 0) {
          *puVar14 = *puVar14 | 2;
          puVar13 = (uint *)0x0;
          if (*(longlong *)(puVar14 + 4) != 0) {
            puVar13 = (uint *)(*(longlong *)(puVar14 + 4) + 0x10);
          }
          *puVar13 = *puVar13 | 1;
          puVar13[2] = 0;
        }
        iVar6 = *(int *)(param_3 + 0x5c);
        uVar11 = 1;
        if (iVar6 == 1) {
          uVar11 = 0x800;
        }
        *(ulonglong *)(param_2 + 0x60) = *(ulonglong *)(param_2 + 0x60) | uVar11;
        *(ulonglong *)(param_2 + 0x68) = *(ulonglong *)(param_2 + 0x68) | uVar11;
        *(ulonglong *)(param_2 + 0x70) = *(ulonglong *)(param_2 + 0x70) & ~uVar11;
        if (-1 < local_50) {
          if (iVar6 == 1) {
            *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) | 0x40;
            *(int *)(param_2 + 0x50) = local_50;
          }
          else {
            *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) | 0x20;
            *(int *)(param_2 + 0x4c) = local_50;
          }
        }
        *puVar16 = *puVar16 | 4;
        puVar14 = (uint *)0x0;
        if (*(longlong *)(puVar16 + 0xc) != 0) {
          puVar14 = (uint *)(*(longlong *)(puVar16 + 0xc) + 0x10);
        }
        if (puVar14 == (uint *)0x0) {
          return;
        }
        uVar1 = *(uint *)(param_3 + 0xc);
        *puVar14 = *puVar14 | 1;
        puVar14[2] = uVar1;
        uVar1 = *(uint *)(param_3 + 0x10);
        *puVar14 = *puVar14 | 2;
        puVar14[3] = uVar1;
        return;
      }
    }
  }
  pcVar15 = "melee_history";
LAB_180261b3d:
  FUN_180254480(&DAT_180b8e5b8,param_2,pcVar15);
  return;
}



