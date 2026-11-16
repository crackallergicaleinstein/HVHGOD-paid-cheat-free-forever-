// FUN_18028b770 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18028b770 */

void FUN_18028b770(longlong param_1)

{
  bool bVar1;
  ushort uVar2;
  char cVar3;
  longlong lVar4;
  ushort local_res8 [4];
  
  lVar4 = FUN_18017ea70();
  *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
  bVar1 = false;
  if (param_1 + 0x62 != 0) {
    local_res8[0] = 0;
    cVar3 = FUN_1804514f0(local_res8,param_1 + 0x62,2);
    if (cVar3 == '\0') {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
  }
  uVar2 = local_res8[0];
  lVar4 = FUN_18017ea70();
  if (*(int *)(lVar4 + 4) != 0) {
    *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + -1;
  }
  if ((bVar1) && ((uVar2 & 8) == 0)) {
    FUN_18028b3b0(param_1);
  }
  return;
}



