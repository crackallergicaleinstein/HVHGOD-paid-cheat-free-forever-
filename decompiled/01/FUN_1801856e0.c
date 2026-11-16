// FUN_1801856e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801856e0 */

ulonglong FUN_1801856e0(undefined8 *param_1)

{
  ulonglong uVar1;
  byte *in_RAX;
  byte *pbVar2;
  byte *pbVar3;
  
  uVar1 = param_1[1];
  if (((((uVar1 != 0) && (uVar1 < 0x201)) && (pbVar3 = (byte *)*param_1, *pbVar3 != 0x2f)) &&
      (((uVar1 < 2 ||
        (pbVar2 = (byte *)thunk_FUN_1805f9970(pbVar3,pbVar3 + uVar1,&DAT_1806be0f8,2),
        pbVar2 == pbVar3 + uVar1)) ||
       (in_RAX = pbVar2 + -(longlong)pbVar3, in_RAX == (byte *)0xffffffffffffffff)))) &&
     (in_RAX = (byte *)FUN_18010fae0(pbVar3,uVar1), in_RAX == (byte *)0xffffffffffffffff)) {
    in_RAX = pbVar3 + uVar1;
    while( true ) {
      if (pbVar3 == in_RAX) {
        return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
      }
      if (*pbVar3 < 0x20) break;
      pbVar3 = pbVar3 + 1;
    }
  }
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}



