// FUN_1801a7270 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801a7270 */

void FUN_1801a7270(longlong *param_1)

{
  longlong lVar1;
  DWORD dwMilliseconds;
  longlong lVar2;
  longlong local_res8;
  longlong local_res10;
  
  FUN_18017bf40(&local_res8);
  lVar1 = *param_1;
  lVar2 = local_res8;
  if ((lVar1 != 0) && (-1 < lVar1)) {
    lVar2 = 0x7fffffffffffffff;
    if (local_res8 < lVar1 * -1000000 + 0x7fffffffffffffff) {
      lVar2 = lVar1 * 1000000 + local_res8;
    }
  }
  while( true ) {
    FUN_18017bf40(&local_res8);
    if ((lVar2 == local_res8) || (lVar2 < local_res8)) break;
    local_res10 = lVar2 - local_res8;
    dwMilliseconds = FUN_18017b210(&local_res10);
    Sleep(dwMilliseconds);
  }
  return;
}



