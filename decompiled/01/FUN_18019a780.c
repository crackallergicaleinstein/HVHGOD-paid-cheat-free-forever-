// FUN_18019a780 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18019a780 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

longlong * FUN_18019a780(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  ULONGLONG UVar8;
  longlong lVar9;
  undefined *puVar10;
  longlong lVar11;
  undefined *puVar12;
  longlong *plVar13;
  ulonglong uVar14;
  undefined *local_78;
  undefined1 local_70 [32];
  undefined8 local_50;
  int local_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  *param_1 = 0;
  param_1[1] = 0;
  plVar13 = param_1 + 2;
  FUN_18063ab10(plVar13,0,0x200);
  *(undefined4 *)(param_1 + 0x42) = 0;
  *(undefined1 *)((longlong)param_1 + 0x214) = 0;
  piVar7 = (int *)FUN_180184240(local_70,param_2);
  local_48 = *piVar7;
  iStack_44 = piVar7[1];
  iStack_40 = piVar7[2];
  iStack_3c = piVar7[3];
  iVar2 = piVar7[4];
  iStack_34 = piVar7[5];
  iStack_30 = piVar7[6];
  iStack_2c = piVar7[7];
  uVar1 = *(undefined8 *)(piVar7 + 8);
  local_50._1_1_ = (char)((ulonglong)uVar1 >> 8);
  if (((local_50._1_1_ != '\0') && (local_48 == 0)) && (iVar2 - 1U < 0x40)) {
    uVar14 = 0xffffffffffffffff;
    iVar5 = DAT_180bb8738;
    local_50 = uVar1;
    iStack_38 = iVar2;
    if (DAT_180bb8738 == 0) {
      UVar8 = GetTickCount64();
      if (UVar8 < DAT_180bb8730) {
        iVar5 = 0;
      }
      else {
        local_78 = &DAT_1808d9140;
        iVar5 = FUN_1805f68d0(&DAT_1808d9140);
        if (iVar5 != 0) goto LAB_18019abb9;
        if (DAT_1808d918c == 0x7fffffff) {
          DAT_1808d918c = 0x7ffffffe;
          goto LAB_18019abae;
        }
        if ((DAT_180bb8738 == 0) && (DAT_180bb8730 <= UVar8)) {
          DAT_180bb8738 = FUN_1804174b0("C_BaseEntity",0x9d930423);
          if (DAT_180bb8738 == 0) {
            DAT_180bb8730 = UVar8 + 1000;
          }
          else {
            DAT_180bb8730 = 0xffffffffffffffff;
          }
        }
        iVar5 = DAT_180bb8738;
        FUN_1805f68fc(&DAT_1808d9140);
      }
    }
    lVar9 = FUN_18017ea70();
    *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
    bVar3 = false;
    if (iVar5 + param_2 != 0) {
      local_78 = (undefined *)0x0;
      cVar4 = FUN_1804514f0(&local_78,iVar5 + param_2,8);
      if (cVar4 == '\0') {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
    }
    puVar12 = local_78;
    lVar9 = FUN_18017ea70();
    if (*(int *)(lVar9 + 4) != 0) {
      *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
    }
    puVar10 = (undefined *)0x0;
    if (bVar3) {
      puVar10 = puVar12;
    }
    *param_1 = (longlong)puVar10;
    iVar5 = DAT_180bb8728;
    if (DAT_180bb8728 == 0) {
      UVar8 = GetTickCount64();
      if (UVar8 < DAT_180bb8720) {
        iVar5 = 0;
      }
      else {
        local_78 = &DAT_1808d90f0;
        iVar5 = FUN_1805f68d0(&DAT_1808d90f0);
        if (iVar5 != 0) goto LAB_18019abb9;
        if (DAT_1808d913c == 0x7fffffff) {
          DAT_1808d913c = 0x7ffffffe;
          goto LAB_18019abae;
        }
        if ((DAT_180bb8728 == 0) && (DAT_180bb8720 <= UVar8)) {
          DAT_180bb8728 = FUN_1804174b0("CSkeletonInstance",0x52ac8c4f);
          if (DAT_180bb8728 == 0) {
            DAT_180bb8720 = UVar8 + 1000;
          }
          else {
            DAT_180bb8720 = 0xffffffffffffffff;
          }
        }
        iVar5 = DAT_180bb8728;
        FUN_1805f68fc(&DAT_1808d90f0);
      }
    }
    iVar6 = DAT_180bb8718;
    if (DAT_180bb8718 == 0) {
      UVar8 = GetTickCount64();
      if (UVar8 < DAT_180bb8710) {
        iVar6 = 0;
      }
      else {
        local_78 = &DAT_1808d90a0;
        iVar6 = FUN_1805f68d0(&DAT_1808d90a0);
        if (iVar6 != 0) {
LAB_18019abb9:
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(5);
        }
        if (DAT_1808d90ec == 0x7fffffff) {
          DAT_1808d90ec = 0x7ffffffe;
LAB_18019abae:
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(6);
        }
        if ((DAT_180bb8718 == 0) && (DAT_180bb8710 <= UVar8)) {
          DAT_180bb8718 = FUN_1804174b0("CModelState",0xe100c814);
          if (DAT_180bb8718 == 0) {
            uVar14 = UVar8 + 1000;
          }
          DAT_180bb8710 = uVar14;
        }
        iVar6 = DAT_180bb8718;
        FUN_1805f68fc(&DAT_1808d90a0);
      }
    }
    puVar12 = (undefined *)0x0;
    if (*param_1 != 0) {
      lVar11 = (longlong)(iVar6 + iVar5) + *param_1;
      lVar9 = FUN_18017ea70();
      *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
      bVar3 = false;
      if (lVar11 != 0) {
        local_78 = (undefined *)0x0;
        cVar4 = FUN_1804514f0(&local_78,lVar11,8);
        if (cVar4 == '\0') {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
      }
      puVar10 = local_78;
      lVar9 = FUN_18017ea70();
      if (*(int *)(lVar9 + 4) != 0) {
        *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
      }
      if (bVar3) {
        puVar12 = puVar10;
      }
    }
    param_1[1] = (longlong)puVar12;
    *(int *)(param_1 + 0x42) = iVar2;
    if ((*param_1 != 0) && (puVar12 != (undefined *)0x0)) {
      lVar9 = FUN_18017ea70();
      *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
      cVar4 = FUN_1804514f0(plVar13,CONCAT44(iStack_2c,iStack_30),(longlong)iVar2 << 3);
      lVar9 = FUN_18017ea70();
      if (*(int *)(lVar9 + 4) != 0) {
        *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
      }
      if (cVar4 != '\0') {
        *(undefined1 *)((longlong)param_1 + 0x214) = 1;
        uVar14 = (ulonglong)*(uint *)(param_1 + 0x42);
        if ((int)*(uint *)(param_1 + 0x42) < 1) {
          return param_1;
        }
        do {
          if (*plVar13 == 0) {
            *(undefined1 *)((longlong)param_1 + 0x214) = 0;
          }
          plVar13 = plVar13 + 1;
          uVar14 = uVar14 - 1;
        } while (uVar14 != 0);
        return param_1;
      }
    }
    *(undefined1 *)((longlong)param_1 + 0x214) = 0;
  }
  return param_1;
}



