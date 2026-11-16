// FUN_1801973d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801973d0 */

undefined * FUN_1801973d0(longlong param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  ULONGLONG UVar4;
  longlong lVar5;
  undefined *puVar6;
  undefined *local_18 [2];
  
  iVar3 = DAT_180bb8778;
  if ((DAT_180bb8778 == 0) && (UVar4 = GetTickCount64(), DAT_180bb8770 <= UVar4)) {
    local_18[0] = &DAT_1808d91d0;
    iVar3 = FUN_1805f68d0(&DAT_1808d91d0);
    if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1808d921c == 0x7fffffff) {
      DAT_1808d921c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if ((DAT_180bb8778 == 0) && (DAT_180bb8770 <= UVar4)) {
      DAT_180bb8778 = FUN_1804174b0("CBasePlayerController",0xb22f805e);
      if (DAT_180bb8778 == 0) {
        DAT_180bb8770 = UVar4 + 1000;
      }
      else {
        DAT_180bb8770 = 0xffffffffffffffff;
      }
    }
    iVar3 = DAT_180bb8778;
    FUN_1805f68fc(&DAT_1808d91d0);
  }
  lVar5 = FUN_18017ea70();
  *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + 1;
  if (iVar3 + param_1 == 0) {
    bVar1 = false;
  }
  else {
    local_18[0] = (undefined *)0x0;
    cVar2 = FUN_1804514f0(local_18,iVar3 + param_1,8);
    if (cVar2 == '\0') {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
  }
  puVar6 = local_18[0];
  lVar5 = FUN_18017ea70();
  if (*(int *)(lVar5 + 4) != 0) {
    *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + -1;
  }
  if ((!bVar1) || ((undefined *)0x2540be3ff < puVar6 + -0x10fffff2587fc00)) {
    puVar6 = (undefined *)0x0;
  }
  return puVar6;
}



