// FUN_1804f2950 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804f2950 */

void FUN_1804f2950(longlong param_1,undefined4 *param_2,uint param_3)

{
  byte bVar1;
  bool bVar2;
  
  *(byte *)(param_1 + 0x71) = *(byte *)(param_1 + 0x71) | 4;
  bVar1 = *(byte *)((longlong)param_2 + 0xe);
  *(byte *)((longlong)param_2 + 0xe) = bVar1 | 0x20;
  if ((param_3 & 1) != 0) {
    if ((bVar1 & 0x10) == 0) {
      *(undefined4 *)(param_1 + 0x10) = *param_2;
    }
    else {
      *(undefined4 *)(param_1 + 0x1c) = *param_2;
    }
    *(byte *)(param_1 + 0x73) = *(byte *)(param_1 + 0x73) & 0xf0;
  }
  *(undefined2 *)(param_1 + 0x5a) =
       *(undefined2 *)(((ulonglong)(param_3 & 2) | 8) + (longlong)param_2);
  if (((param_3 & 4) != 0) &&
     (bVar1 = *(char *)((longlong)param_2 + 0xe) << 4, (bVar1 & 0xc0) != 0xc0)) {
    bVar2 = (bVar1 & 0xc0) == 0x40;
    *(bool *)(param_1 + 0x6c) = bVar2;
    *(bool *)(param_1 + 0x6b) = bVar2;
  }
  *(undefined2 *)(param_1 + 0x62) = *(undefined2 *)(param_2 + 3);
  *(byte *)(param_1 + 0x74) =
       *(byte *)(param_1 + 0x74) ^
       (*(byte *)(param_1 + 0x74) ^ *(byte *)((longlong)param_2 + 0xe)) & 3;
  return;
}



