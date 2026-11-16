// FUN_18029c880 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18029c880 */

undefined8 * FUN_18029c880(undefined8 *param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  ULONGLONG UVar6;
  longlong lVar7;
  undefined *puVar8;
  ulonglong uVar9;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  uint uStack_2c;
  
  iVar4 = DAT_180c6e500;
  if (param_2 != 0) {
    uVar9 = 0xffffffffffffffff;
    if ((DAT_180c6e500 == 0) && (UVar6 = GetTickCount64(), DAT_180c6e4e8 <= UVar6)) {
      local_48 = &DAT_1808f4730;
      iVar4 = FUN_1805f68d0(&DAT_1808f4730);
      if (iVar4 != 0) goto LAB_18029cb53;
      if (DAT_1808f477c == 0x7fffffff) {
        DAT_1808f477c = 0x7ffffffe;
        goto LAB_18029cb68;
      }
      if ((DAT_180c6e500 == 0) && (DAT_180c6e4e8 <= UVar6)) {
        DAT_180c6e500 = FUN_1804174b0("C_BaseEntity",0x9d930423);
        if (DAT_180c6e500 == 0) {
          DAT_180c6e4e8 = UVar6 + 1000;
        }
        else {
          DAT_180c6e4e8 = 0xffffffffffffffff;
        }
      }
      iVar4 = DAT_180c6e500;
      FUN_1805f68fc(&DAT_1808f4730);
    }
    iVar5 = DAT_180c6e4f0;
    if ((DAT_180c6e4f0 == 0) && (UVar6 = GetTickCount64(), DAT_180c6e4f8 <= UVar6)) {
      local_48 = &DAT_1808f46e0;
      iVar5 = FUN_1805f68d0(&DAT_1808f46e0);
      if (iVar5 != 0) {
LAB_18029cb53:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1808f472c == 0x7fffffff) {
        DAT_1808f472c = 0x7ffffffe;
LAB_18029cb68:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      if ((DAT_180c6e4f0 == 0) && (DAT_180c6e4f8 <= UVar6)) {
        DAT_180c6e4f0 = FUN_1804174b0("CGameSceneNode",0xe8b4eae5);
        if (DAT_180c6e4f0 == 0) {
          uVar9 = UVar6 + 1000;
        }
        DAT_180c6e4f8 = uVar9;
      }
      iVar5 = DAT_180c6e4f0;
      FUN_1805f68fc(&DAT_1808f46e0);
    }
    if ((iVar4 != 0) && (iVar5 != 0)) {
      lVar7 = FUN_18017ea70();
      *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
      if (iVar4 + param_2 == 0) {
        bVar1 = false;
      }
      else {
        local_48 = (undefined *)0x0;
        cVar2 = FUN_1804514f0(&local_48,iVar4 + param_2,8);
        if (cVar2 == '\0') {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
      }
      puVar8 = local_48;
      lVar7 = FUN_18017ea70();
      if (*(int *)(lVar7 + 4) != 0) {
        *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
      }
      if ((bVar1) && (puVar8 != (undefined *)0x0)) {
        lVar7 = FUN_18017ea70();
        *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
        puVar8 = puVar8 + iVar5;
        if (puVar8 == (undefined *)0x0) {
          uStack_2c = uStack_2c & 0xffffff00;
          bVar1 = false;
        }
        else {
          local_48 = (undefined *)0x0;
          local_40 = 0;
          cVar2 = FUN_1804514f0(&local_48,puVar8,0xc);
          if (cVar2 == '\0') {
            uStack_2c = (uint)uStack_2c._1_3_ << 8;
            bVar1 = false;
          }
          else {
            local_38 = (undefined4)local_48;
            uStack_34 = local_48._4_4_;
            uStack_30 = local_40;
            uStack_2c = CONCAT31(uStack_2c._1_3_,1);
            bVar1 = true;
          }
        }
        lVar7 = FUN_18017ea70();
        if (*(int *)(lVar7 + 4) != 0) {
          *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
        }
        if ((((bVar1) && (sVar3 = thunk_FUN_180624430(local_38), sVar3 < 1)) &&
            (sVar3 = thunk_FUN_180624430(uStack_34), sVar3 < 1)) &&
           (sVar3 = thunk_FUN_180624430(uStack_30), sVar3 < 1)) {
          *param_1 = CONCAT44(uStack_34,local_38);
          param_1[1] = CONCAT44(uStack_2c,uStack_30);
          return param_1;
        }
      }
    }
  }
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  return param_1;
}



