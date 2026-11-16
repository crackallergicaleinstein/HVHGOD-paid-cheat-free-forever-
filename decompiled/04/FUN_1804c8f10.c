// FUN_1804c8f10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804c8f10 */

void FUN_1804c8f10(undefined4 param_1,int param_2,undefined4 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = DAT_180bb8ae8;
  *(undefined4 *)(DAT_180bb8ae8 + 0x203c) = param_1;
  *(int *)(lVar3 + 0x204c) = param_2;
  FUN_1804c1dd0(param_3);
  lVar4 = DAT_180bb8ae8;
  *(undefined4 *)(*(longlong *)(lVar3 + 0x2040) + 0x408 + (longlong)param_2 * 4) = param_1;
  uVar2 = param_4[1];
  puVar1 = (undefined8 *)(*(longlong *)(lVar3 + 0x2040) + ((longlong)param_2 + 0x41) * 0x10);
  *puVar1 = *param_4;
  puVar1[1] = uVar2;
  *(undefined4 *)
   (*(longlong *)(*(longlong *)(lVar4 + 0x2040) + 0x3f0) + 0x430 +
   (longlong)*(int *)(lVar4 + 0x204c) * 8) = 0x7f7fffff;
  *(undefined4 *)
   (*(longlong *)(*(longlong *)(lVar4 + 0x2040) + 0x3f0) + 0x434 +
   (longlong)*(int *)(lVar4 + 0x204c) * 8) = 0x7f7fffff;
  return;
}



