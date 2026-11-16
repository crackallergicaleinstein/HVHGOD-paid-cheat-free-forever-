// FUN_18052eab0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18052eab0 */

undefined8 FUN_18052eab0(void)

{
  short sVar1;
  char cVar2;
  longlong lVar3;
  undefined4 *puVar4;
  
  if ((-1 < (int)DAT_180c62f50[9]) && (DAT_1808e6670 != '\0')) {
    lVar3 = *(longlong *)(*DAT_180c62f50 + (longlong)(int)DAT_180c62f50[3] * 8);
    if (DAT_180b909b0 != 0) {
      sVar1 = *(short *)(lVar3 + 0x4970 +
                        ((longlong)*(int *)(lVar3 + 0x4968) * 0x15 + (longlong)(int)DAT_180c62f50[9]
                        ) * 4);
      if (-1 < sVar1) {
        lVar3 = *(longlong *)(DAT_180b909b0 + 0x60) - *(longlong *)(DAT_180b909b0 + 0x58);
        if (((int)sVar1 < (int)(lVar3 / 0x68)) &&
           (puVar4 = (undefined4 *)((longlong)sVar1 * 0x68 + *(longlong *)(DAT_180b909b0 + 0x58)),
           puVar4 != (undefined4 *)0x0)) {
          cVar2 = FUN_1803f5170(lVar3,*puVar4,puVar4[1]);
          if (cVar2 != '\0') {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}



