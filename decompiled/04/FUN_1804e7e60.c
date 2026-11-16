// FUN_1804e7e60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804e7e60 */

void FUN_1804e7e60(longlong param_1,uint param_2)

{
  longlong lVar1;
  uint *puVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  
  lVar4 = *(longlong *)(param_1 + 0xa0);
  uVar6 = *(uint *)(*(longlong *)(lVar4 + 0x78) + (ulonglong)(param_2 & 0x7ffff) * 4);
  lVar1 = *(longlong *)(lVar4 + 0x68) + ((longlong)(int)(uVar6 << 0xc) >> 0xc) * 8;
  if (lVar1 != 0) {
    uVar6 = uVar6 & 0xbfffffff;
    puVar2 = (uint *)(*(longlong *)(lVar4 + 0x78) + (ulonglong)(param_2 & 0x7ffff) * 4);
    *puVar2 = uVar6;
    uVar5 = (*(uint *)(lVar4 + 0x90) ^ uVar6) & 0xfff00000 ^ *(uint *)(lVar4 + 0x90);
    uVar5 = (uVar6 + 0x100000 ^ uVar5) & 0x3ff00000 ^ uVar5;
    *puVar2 = uVar5;
    if ((uVar5 & 0x3ff00000) == 0) {
      *puVar2 = (uVar5 + 0x100000 ^ uVar5) & 0x3ff00000 ^ uVar5;
    }
    iVar3 = *(int *)(param_1 + 8);
    *(int *)(lVar4 + 0x9c) = *(int *)(lVar4 + 0x9c) + 1;
    *(uint *)(lVar4 + 0x90) = param_2 & 0x7ffff;
    *(int *)(lVar4 + 0xa0) =
         *(int *)(lVar4 + 0xa0) +
         ((uint)*(ushort *)(lVar1 + 4) + iVar3) * ((uint)*(ushort *)(lVar1 + 6) + iVar3);
    *(undefined4 *)(lVar1 + 4) = 0;
  }
  return;
}



