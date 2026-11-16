// FUN_18063ba20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18063ba20 */

ulonglong * FUN_18063ba20(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  char cVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  longlong lVar5;
  
  for (puVar3 = param_1; ((ulonglong)puVar3 & 7) != 0; puVar3 = (ulonglong *)((longlong)puVar3 + 1))
  {
    if ((char)*puVar3 == '\0') goto LAB_18063bac3;
  }
  while( true ) {
    do {
      puVar4 = puVar3;
      uVar1 = *puVar4;
      puVar3 = puVar4 + 1;
    } while (((uVar1 ^ 0xffffffffffffffff ^ uVar1 + 0x7efefefefefefeff) & 0x8101010101010100) == 0);
    puVar3 = puVar4;
    if ((((((char)uVar1 == '\0') ||
          (puVar3 = (ulonglong *)((longlong)puVar4 + 1), (char)(uVar1 >> 8) == '\0')) ||
         (puVar3 = (ulonglong *)((longlong)puVar4 + 2), (char)(uVar1 >> 0x10) == '\0')) ||
        ((puVar3 = (ulonglong *)((longlong)puVar4 + 3), (char)(uVar1 >> 0x18) == '\0' ||
         (puVar3 = (ulonglong *)((longlong)puVar4 + 4), (char)(uVar1 >> 0x20) == '\0')))) ||
       ((puVar3 = (ulonglong *)((longlong)puVar4 + 5), (char)(uVar1 >> 0x28) == '\0' ||
        ((puVar3 = (ulonglong *)((longlong)puVar4 + 6), (char)(uVar1 >> 0x30) == '\0' ||
         (puVar3 = (ulonglong *)((longlong)puVar4 + 7), (char)(uVar1 >> 0x38) == '\0')))))) break;
    puVar3 = puVar4 + 1;
  }
LAB_18063bac3:
  lVar5 = (longlong)puVar3 - (longlong)param_2;
  while( true ) {
    if (((ulonglong)param_2 & 7) == 0) {
      while( true ) {
        while (uVar1 = *param_2,
              ((uVar1 ^ 0xffffffffffffffff ^ uVar1 + 0x7efefefefefefeff) & 0x8101010101010100) == 0)
        {
          *(ulonglong *)((longlong)param_2 + lVar5) = uVar1;
          param_2 = param_2 + 1;
        }
        *(char *)((longlong)param_2 + lVar5) = (char)uVar1;
        if (((((char)uVar1 == '\0') ||
             (cVar2 = (char)(uVar1 >> 8), *(char *)((longlong)param_2 + lVar5 + 1) = cVar2,
             cVar2 == '\0')) ||
            (cVar2 = (char)(uVar1 >> 0x10), *(char *)((longlong)param_2 + lVar5 + 2) = cVar2,
            cVar2 == '\0')) ||
           (((cVar2 = (char)(uVar1 >> 0x18), *(char *)((longlong)param_2 + lVar5 + 3) = cVar2,
             cVar2 == '\0' ||
             (cVar2 = (char)(uVar1 >> 0x20), *(char *)((longlong)param_2 + lVar5 + 4) = cVar2,
             cVar2 == '\0')) ||
            ((cVar2 = (char)(uVar1 >> 0x28), *(char *)((longlong)param_2 + lVar5 + 5) = cVar2,
             cVar2 == '\0' ||
             ((cVar2 = (char)(uVar1 >> 0x30), *(char *)((longlong)param_2 + lVar5 + 6) = cVar2,
              cVar2 == '\0' ||
              (cVar2 = (char)(uVar1 >> 0x38), *(char *)((longlong)param_2 + lVar5 + 7) = cVar2,
              cVar2 == '\0')))))))) break;
        param_2 = param_2 + 1;
      }
      return param_1;
    }
    uVar1 = *param_2;
    *(char *)((longlong)param_2 + lVar5) = (char)uVar1;
    if ((char)uVar1 == '\0') break;
    param_2 = (ulonglong *)((longlong)param_2 + 1);
  }
  return param_1;
}



