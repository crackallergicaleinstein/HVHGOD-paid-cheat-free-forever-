// FUN_1804f7a90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804f7a90 */

void FUN_1804f7a90(byte *param_1)

{
  byte *pbVar1;
  byte bVar2;
  longlong lVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  lVar3 = DAT_180bb8ae8;
  *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
  if (*(char *)(*(longlong *)(lVar3 + 0x14d0) + 0xd1) != '\0') {
    return;
  }
  pbVar4 = param_1;
  pbVar5 = param_1;
  if (param_1 != (byte *)0xffffffffffffffff) {
    while( true ) {
      bVar2 = *pbVar5;
      pbVar4 = (byte *)(ulonglong)bVar2;
      if (bVar2 == 0) break;
      pbVar1 = pbVar5 + 1;
      if (((bVar2 == 0x23) && (*pbVar1 == 0x23)) ||
         (pbVar5 = pbVar1, pbVar1 == (byte *)0xffffffffffffffff)) break;
    }
  }
  FUN_1804f7630(pbVar4,param_1,pbVar5,0);
  return;
}



