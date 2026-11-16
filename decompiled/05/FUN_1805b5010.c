// FUN_1805b5010 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805b5010 */

int FUN_1805b5010(char *param_1,size_t param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = 0;
  lVar3 = 0;
  do {
    if (*(&PTR_s_Ascender_180674b10)[lVar3] == *param_1) {
      for (; iVar2 < 0x4a; iVar2 = iVar2 + 1) {
        if (*(&PTR_s_Ascender_180674b10)[lVar3] != *param_1) {
          return 0x4b;
        }
        iVar1 = strncmp((&PTR_s_Ascender_180674b10)[lVar3],param_1,param_2);
        if (iVar1 == 0) {
          return iVar2;
        }
        lVar3 = lVar3 + 1;
      }
    }
    iVar2 = iVar2 + 1;
    lVar3 = lVar3 + 1;
    if (0x49 < iVar2) {
      return 0x4b;
    }
  } while( true );
}



