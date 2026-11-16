// FUN_1804e0320 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804e0320 */

void FUN_1804e0320(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,uint param_7)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  
  if ((param_7 & 0xff000000) != 0) {
    if ((param_2[1] == *(longlong *)(param_1 + 0x78)) && (*param_2 == *(longlong *)(param_1 + 0x70))
       ) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
      piVar1 = (int *)(param_1 + 0xb0);
      iVar6 = *(int *)(param_1 + 0xb4);
      if (*piVar1 == iVar6) {
        iVar7 = *piVar1 + 1;
        if (iVar6 == 0) {
          iVar6 = 8;
        }
        else {
          iVar6 = iVar6 / 2 + iVar6;
        }
        if (iVar7 < iVar6) {
          iVar7 = iVar6;
        }
        FUN_1804aec70(piVar1,iVar7);
      }
      lVar3 = *param_2;
      lVar4 = param_2[1];
      plVar2 = (longlong *)(*(longlong *)(param_1 + 0xb8) + (longlong)*piVar1 * 0x10);
      *plVar2 = lVar3;
      plVar2[1] = lVar4;
      *piVar1 = *piVar1 + 1;
      *(longlong *)(param_1 + 0x70) = lVar3;
      *(longlong *)(param_1 + 0x78) = lVar4;
      FUN_1804d92c0(param_1);
    }
    FUN_1804d9590(param_1,6,4);
    FUN_1804d97d0(param_1,param_3,param_4,param_5,param_6,param_7);
    if (bVar5) {
      FUN_1804d9530(param_1);
    }
  }
  return;
}



