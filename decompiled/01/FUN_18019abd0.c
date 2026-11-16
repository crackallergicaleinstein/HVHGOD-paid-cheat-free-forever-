// FUN_18019abd0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18019abd0 */

int FUN_18019abd0(longlong param_1)

{
  bool bVar1;
  int iVar2;
  char cVar3;
  ULONGLONG UVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined *puVar8;
  undefined *local_28 [2];
  
  if (param_1 != 0) {
    iVar6 = DAT_180bb8708;
    if (DAT_180bb8708 == 0) {
      UVar4 = GetTickCount64();
      if (UVar4 < DAT_180bb8700) {
        iVar6 = 0;
      }
      else {
        local_28[0] = &DAT_1808d9050;
        iVar6 = FUN_1805f68d0(&DAT_1808d9050);
        if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(5);
        }
        if (DAT_1808d909c == 0x7fffffff) {
          DAT_1808d909c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(6);
        }
        if ((DAT_180bb8708 == 0) && (DAT_180bb8700 <= UVar4)) {
          DAT_180bb8708 = FUN_1804174b0("CEntityInstance",0xa8a45978);
          if (DAT_180bb8708 == 0) {
            DAT_180bb8700 = UVar4 + 1000;
          }
          else {
            DAT_180bb8700 = 0xffffffffffffffff;
          }
        }
        iVar6 = DAT_180bb8708;
        FUN_1805f68fc(&DAT_1808d9050);
      }
    }
    lVar5 = FUN_18017ea70();
    *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + 1;
    if (iVar6 + param_1 == 0) {
      bVar1 = false;
    }
    else {
      local_28[0] = (undefined *)0x0;
      cVar3 = FUN_1804514f0(local_28,iVar6 + param_1,8);
      if (cVar3 == '\0') {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
    }
    puVar8 = local_28[0];
    lVar5 = FUN_18017ea70();
    if (*(int *)(lVar5 + 4) != 0) {
      *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + -1;
    }
    if (!bVar1) {
      puVar8 = (undefined *)0x0;
    }
    if (puVar8 != (undefined *)0x0) {
      lVar5 = FUN_18017ea70();
      *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + 1;
      if (puVar8 + 0x10 == (undefined *)0x0) {
        bVar1 = false;
      }
      else {
        local_28[0] = (undefined *)((ulonglong)local_28[0] & 0xffffffff00000000);
        cVar3 = FUN_1804514f0(local_28,puVar8 + 0x10,4);
        if (cVar3 == '\0') {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
      }
      iVar2 = (int)local_28[0];
      lVar5 = FUN_18017ea70();
      iVar6 = *(int *)(lVar5 + 4);
      if (iVar6 != 0) {
        iVar6 = iVar6 + -1;
        *(int *)(lVar5 + 4) = iVar6;
      }
      iVar7 = -1;
      if (bVar1) {
        iVar7 = iVar2;
      }
      if ((iVar7 != -1) && (lVar5 = FUN_1803d4150(iVar6,iVar7), lVar5 == param_1)) {
        return iVar7;
      }
    }
  }
  return 0;
}



