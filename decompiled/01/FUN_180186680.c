// FUN_180186680 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180186680 */

DWORD FUN_180186680(longlong *param_1,LPCWSTR param_2)

{
  byte *pbVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  LPCWSTR pWVar5;
  ulonglong uVar6;
  DWORD local_28 [2];
  undefined1 local_20 [24];
  
  lVar2 = *param_1;
  pWVar5 = param_2;
  if (7 < *(ulonglong *)(param_2 + 0xc)) {
    pWVar5 = *(LPCWSTR *)param_2;
  }
  uVar4 = 0;
  uVar6 = 0xcbf29ce484222325;
  if (*(longlong *)(param_2 + 8) * 2 != 0) {
    do {
      pbVar1 = (byte *)((longlong)pWVar5 + uVar4);
      uVar4 = uVar4 + 1;
      uVar6 = (uVar6 ^ *pbVar1) * 0x100000001b3;
    } while (uVar4 < (ulonglong)(*(longlong *)(param_2 + 8) * 2));
  }
  lVar3 = FUN_1801ad830(lVar2,local_20,param_2,uVar6);
  lVar3 = *(longlong *)(lVar3 + 8);
  if (lVar3 == 0) {
    lVar3 = *(longlong *)(lVar2 + 8);
  }
  if (lVar3 != *(longlong *)(*param_1 + 8)) {
    return *(DWORD *)(lVar3 + 0x30);
  }
  pWVar5 = param_2;
  if (7 < *(ulonglong *)(param_2 + 0xc)) {
    pWVar5 = *(LPCWSTR *)param_2;
  }
  local_28[0] = GetFileAttributesW(pWVar5);
  FUN_1801a5ff0(*param_1,local_20,param_2,local_28);
  return local_28[0];
}



