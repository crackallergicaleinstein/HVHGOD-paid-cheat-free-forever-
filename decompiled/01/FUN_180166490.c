// FUN_180166490 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180166490 */

undefined1 (*) [16] FUN_180166490(undefined1 (*param_1) [16],byte *param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  *param_1 = (undefined1  [16])0x0;
  *(undefined8 *)param_1[1] = 0;
  *(undefined8 *)(param_1[1] + 8) = 0xf;
  (*param_1)[0] = 0;
  if (*(ulonglong *)(param_2 + 0x18) < 0x10) {
    pbVar4 = param_2;
  }
  else {
    pbVar4 = *(byte **)param_2;
  }
  pbVar3 = pbVar4 + *(longlong *)(param_2 + 0x10);
  for (; pbVar4 != pbVar3; pbVar4 = pbVar4 + 1) {
    bVar1 = *pbVar4;
    iVar2 = isalnum((uint)bVar1);
    if ((((iVar2 == 0) && (1 < (byte)(bVar1 - 0x2d))) && (bVar1 != 0x5f)) && (bVar1 != 0x7e)) {
      FUN_18015af80(param_1,0x25);
      FUN_18015af80(param_1,"0123456789ABCDEF"[bVar1 >> 4]);
      bVar1 = "0123456789ABCDEF"[bVar1 & 0xf];
    }
    FUN_18015af80(param_1,bVar1);
  }
  return param_1;
}



