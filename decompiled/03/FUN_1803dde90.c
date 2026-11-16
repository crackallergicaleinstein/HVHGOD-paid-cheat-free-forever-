// FUN_1803dde90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803dde90 */

ulonglong FUN_1803dde90(undefined8 *param_1,longlong param_2)

{
  byte bVar1;
  ulonglong uVar2;
  char *pcVar3;
  ulonglong in_RAX;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  
  uVar2 = param_1[1];
  if (((0x18 < uVar2) && (uVar2 < 0x35)) && (pcVar3 = (char *)*param_1, *pcVar3 == '\x1a')) {
    uVar10 = 0;
    uVar4 = 2;
    uVar6 = 0;
    do {
      in_RAX = uVar4;
      if ((uVar2 <= uVar4) ||
         (in_RAX = uVar4 + 1, pcVar3[uVar4] != (char)(((char)uVar6 + '\x01') * '\b')))
      goto LAB_1803ddf29;
      uVar7 = 0;
      uVar9 = 0;
      uVar5 = uVar4 + 1;
      while( true ) {
        in_RAX = uVar5;
        if (uVar5 == uVar2) goto LAB_1803ddf29;
        bVar1 = pcVar3[uVar5];
        uVar4 = uVar5 + 1;
        iVar8 = (int)uVar9;
        in_RAX = uVar4;
        if ((iVar8 == 0x3f) && (1 < bVar1)) goto LAB_1803ddf29;
        uVar7 = uVar7 | (ulonglong)(bVar1 & 0x7f) << (uVar9 & 0x3f);
        if (-1 < (char)bVar1) break;
        uVar9 = (ulonglong)(iVar8 + 7U);
        uVar5 = uVar4;
        if (0x3f < iVar8 + 7U) goto LAB_1803ddf29;
      }
      if (((iVar8 != 0) && (bVar1 == 0)) ||
         (uVar7 != *(ulonglong *)(param_2 + (ulonglong)uVar6 * 8))) goto LAB_1803ddf29;
      uVar6 = uVar6 + 1;
    } while (uVar6 < 3);
    if (((uVar5 - 1 == (ulonglong)(byte)pcVar3[1]) && (uVar4 < uVar2)) &&
       ((uVar7 = uVar5 + 2, in_RAX = uVar7, pcVar3[uVar4] == '\"' &&
        ((uVar7 < uVar2 && (uVar5 = uVar5 + 3, in_RAX = uVar5, pcVar3[uVar7] == '\x0f')))))) {
      while ((in_RAX = uVar5, uVar5 < uVar2 &&
             (((in_RAX = uVar5 + 1, pcVar3[uVar5] == (byte)(((char)uVar10 + '\x01') * '\b' | 5U) &&
               (3 < uVar2 - in_RAX)) &&
              (*(int *)(pcVar3 + in_RAX) == *(int *)((ulonglong)uVar10 * 4 + 0x18 + param_2)))))) {
        uVar5 = uVar5 + 5;
        uVar10 = uVar10 + 1;
        if (2 < uVar10) {
          return CONCAT71((int7)(uVar5 >> 8),uVar5 == uVar2);
        }
      }
    }
  }
LAB_1803ddf29:
  return in_RAX & 0xffffffffffffff00;
}



