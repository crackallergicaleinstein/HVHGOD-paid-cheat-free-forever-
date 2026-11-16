// FUN_1804cf3e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804cf3e0 */

void FUN_1804cf3e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
  lVar1 = DAT_180bb8ae8;
  iVar3 = *(int *)(DAT_180bb8ae8 + 0x28d0) + -1;
  if (*(int *)(DAT_180bb8ae8 + 0x28d0) == 0) {
    iVar3 = 0;
  }
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if (*(char *)(DAT_180bb8ae8 + 0x18) == '\0') {
    FUN_1804b1930(DAT_180bb8ae8 + 0x28d0,"[%05d] ");
  }
  else {
    FUN_1804b1930(DAT_180bb8ae8 + 0x28d0,"[%s] [%05d] ",DAT_180bb8ae8 + 0x18,
                  *(undefined4 *)(DAT_180bb8ae8 + 4));
  }
  FUN_1804b1960(lVar1 + 0x28d0,param_1,&local_res10);
  iVar4 = *(int *)(lVar1 + 0x28d0) + -1;
  if (*(int *)(lVar1 + 0x28d0) == 0) {
    iVar4 = 0;
  }
  puVar2 = &DAT_180bb8ac1;
  if (*(undefined **)(lVar1 + 0x28d8) != (undefined *)0x0) {
    puVar2 = *(undefined **)(lVar1 + 0x28d8);
  }
  FUN_1804b1a50(lVar1 + 0x28e0,puVar2,iVar3,iVar4);
  puVar2 = &DAT_180bb8ac1;
  if (*(undefined **)(lVar1 + 0x28d8) != (undefined *)0x0) {
    puVar2 = *(undefined **)(lVar1 + 0x28d8);
  }
  if ((*(uint *)(lVar1 + 0x28cc) & 0x100000) != 0) {
    FUN_1804aefa0(&DAT_1806bbe98,puVar2 + iVar3);
  }
  if ((*(uint *)(lVar1 + 0x28cc) & 0x200000) != 0) {
    OutputDebugStringA("[imgui] ");
    OutputDebugStringA(puVar2 + iVar3);
  }
  return;
}



