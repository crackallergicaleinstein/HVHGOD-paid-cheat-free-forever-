// FUN_1803c8a30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803c8a30 */

undefined8 FUN_1803c8a30(undefined8 param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  ULONGLONG UVar6;
  undefined *puVar7;
  int iVar8;
  ulonglong uVar9;
  undefined *local_38 [2];
  
  lVar4 = FUN_1803d4150(param_1,(int)param_2[2]);
  if (lVar4 == param_2[1]) {
    lVar4 = *param_2;
    lVar5 = FUN_18017ea70();
    *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + 1;
    bVar1 = false;
    if (lVar4 + 0xc0 != 0) {
      local_38[0] = (undefined *)((ulonglong)local_38[0] & 0xffffffff00000000);
      cVar2 = FUN_1804514f0(local_38,lVar4 + 0xc0,4);
      if (cVar2 == '\0') {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
    }
    puVar7 = local_38[0];
    lVar4 = FUN_18017ea70();
    if (*(int *)(lVar4 + 4) != 0) {
      *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + -1;
    }
    iVar3 = 0;
    if (bVar1) {
      iVar3 = (int)puVar7;
    }
    if (iVar3 != (int)param_2[2]) {
      return 0;
    }
    uVar9 = 0xffffffffffffffff;
    iVar3 = DAT_180c71c68;
    if (DAT_180c71c68 == 0) {
      UVar6 = GetTickCount64();
      if (UVar6 < DAT_180c71c60) {
        iVar3 = 0;
      }
      else {
        local_38[0] = &DAT_1809b99e0;
        iVar3 = FUN_1805f68d0(&DAT_1809b99e0);
        if (iVar3 != 0) goto LAB_1803c8cd5;
        if (DAT_1809b9a2c == 0x7fffffff) {
          DAT_1809b9a2c = 0x7ffffffe;
          goto LAB_1803c8cea;
        }
        if ((DAT_180c71c68 == 0) && (DAT_180c71c60 <= UVar6)) {
          DAT_180c71c68 = FUN_1804174b0("CEntityInstance",0xa8a45978);
          if (DAT_180c71c68 == 0) {
            DAT_180c71c60 = UVar6 + 1000;
          }
          else {
            DAT_180c71c60 = 0xffffffffffffffff;
          }
        }
        iVar3 = DAT_180c71c68;
        FUN_1805f68fc(&DAT_1809b99e0);
      }
    }
    lVar4 = param_2[1];
    lVar5 = FUN_18017ea70();
    *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + 1;
    bVar1 = false;
    if (iVar3 + lVar4 != 0) {
      local_38[0] = (undefined *)0x0;
      cVar2 = FUN_1804514f0(local_38,iVar3 + lVar4,8);
      if (cVar2 == '\0') {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
    }
    puVar7 = local_38[0];
    lVar4 = FUN_18017ea70();
    if (*(int *)(lVar4 + 4) != 0) {
      *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + -1;
    }
    if ((bVar1) && (puVar7 != (undefined *)0x0)) {
      iVar3 = DAT_180c71c50;
      if (DAT_180c71c50 == 0) {
        UVar6 = GetTickCount64();
        if (UVar6 < DAT_180c71c58) {
          iVar3 = 0;
        }
        else {
          local_38[0] = &DAT_1809b9990;
          iVar3 = FUN_1805f68d0(&DAT_1809b9990);
          if (iVar3 != 0) {
LAB_1803c8cd5:
                    /* WARNING: Subroutine does not return */
            FUN_1805f6d44(5);
          }
          if (DAT_1809b99dc == 0x7fffffff) {
            DAT_1809b99dc = 0x7ffffffe;
LAB_1803c8cea:
                    /* WARNING: Subroutine does not return */
            FUN_1805f6d44(6);
          }
          if ((DAT_180c71c50 == 0) && (DAT_180c71c58 <= UVar6)) {
            DAT_180c71c50 = FUN_1804174b0("CEntityIdentity",0xbecfac7);
            if (DAT_180c71c50 == 0) {
              uVar9 = UVar6 + 1000;
            }
            DAT_180c71c58 = uVar9;
          }
          iVar3 = DAT_180c71c50;
          FUN_1805f68fc(&DAT_1809b9990);
        }
      }
      lVar4 = FUN_18017ea70();
      *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
      puVar7 = puVar7 + iVar3;
      bVar1 = false;
      if (puVar7 != (undefined *)0x0) {
        local_38[0] = (undefined *)((ulonglong)local_38[0] & 0xffffffff00000000);
        cVar2 = FUN_1804514f0(local_38,puVar7,4);
        if (cVar2 == '\0') {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
      }
      iVar3 = (int)local_38[0];
      lVar4 = FUN_18017ea70();
      if (*(int *)(lVar4 + 4) != 0) {
        *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + -1;
      }
      iVar8 = 0;
      if (bVar1) {
        iVar8 = iVar3;
      }
      if (iVar8 == *(int *)((longlong)param_2 + 0x14)) {
        return 1;
      }
    }
  }
  return 0;
}



