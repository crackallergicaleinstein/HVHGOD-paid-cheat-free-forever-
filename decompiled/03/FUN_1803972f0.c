// FUN_1803972f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803972f0 */

undefined4 FUN_1803972f0(longlong param_1)

{
  bool bVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  ULONGLONG UVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined *puVar9;
  undefined *local_38 [2];
  
  uVar8 = 0xffffffffffffffff;
  iVar4 = DAT_180c71368;
  if (DAT_180c71368 == 0) {
    UVar6 = GetTickCount64();
    if (UVar6 < DAT_180c71360) {
      iVar4 = 0;
    }
    else {
      local_38[0] = &DAT_180903540;
      iVar4 = FUN_1805f68d0(&DAT_180903540);
      if (iVar4 != 0) goto LAB_180397558;
      if (DAT_18090358c == 0x7fffffff) {
        DAT_18090358c = 0x7ffffffe;
        goto LAB_18039754d;
      }
      if ((DAT_180c71368 == 0) && (DAT_180c71360 <= UVar6)) {
        DAT_180c71368 = FUN_1804174b0("C_BasePlayerPawn",0x51b23a93);
        if (DAT_180c71368 == 0) {
          DAT_180c71360 = UVar6 + 1000;
        }
        else {
          DAT_180c71360 = 0xffffffffffffffff;
        }
      }
      iVar4 = DAT_180c71368;
      FUN_1805f68fc(&DAT_180903540);
    }
  }
  iVar5 = DAT_180c71340;
  if (DAT_180c71340 == 0) {
    UVar6 = GetTickCount64();
    if (UVar6 < DAT_180c71348) {
      iVar5 = 0;
    }
    else {
      local_38[0] = &DAT_1809034a0;
      iVar5 = FUN_1805f68d0(&DAT_1809034a0);
      if (iVar5 != 0) {
LAB_180397558:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1809034ec == 0x7fffffff) {
        DAT_1809034ec = 0x7ffffffe;
LAB_18039754d:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      if ((DAT_180c71340 == 0) && (DAT_180c71348 <= UVar6)) {
        DAT_180c71340 = FUN_1804174b0("CPlayer_WeaponServices",0x940131c5);
        if (DAT_180c71340 == 0) {
          uVar8 = UVar6 + 1000;
        }
        DAT_180c71348 = uVar8;
      }
      iVar5 = DAT_180c71340;
      FUN_1805f68fc(&DAT_1809034a0);
    }
  }
  if ((param_1 != 0) && (iVar4 != 0)) {
    lVar7 = FUN_18017ea70();
    *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
    if (iVar4 + param_1 == 0) {
      bVar1 = false;
    }
    else {
      local_38[0] = (undefined *)0x0;
      cVar3 = FUN_1804514f0(local_38,iVar4 + param_1,8);
      if (cVar3 == '\0') {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
    }
    puVar9 = local_38[0];
    lVar7 = FUN_18017ea70();
    if (*(int *)(lVar7 + 4) != 0) {
      *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
    }
    if (!bVar1) {
      puVar9 = (undefined *)0x0;
    }
    if ((puVar9 != (undefined *)0x0) && (iVar5 != 0)) {
      lVar7 = FUN_18017ea70();
      *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
      if (puVar9 + iVar5 == (undefined *)0x0) {
        bVar1 = false;
      }
      else {
        local_38[0] = (undefined *)((ulonglong)local_38[0] & 0xffffffff00000000);
        cVar3 = FUN_1804514f0(local_38,puVar9 + iVar5,4);
        if (cVar3 == '\0') {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
      }
      uVar2 = local_38[0]._0_4_;
      lVar7 = FUN_18017ea70();
      if (*(int *)(lVar7 + 4) != 0) {
        *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
      }
      if (!bVar1) {
        return 0;
      }
      return uVar2;
    }
  }
  return 0;
}



