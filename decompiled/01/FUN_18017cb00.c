// FUN_18017cb00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18017cb00 */

void FUN_18017cb00(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  *param_1 = std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  if ((*(byte *)(param_1 + 0xe) & 1) != 0) {
    if (*(longlong *)param_1[8] == 0) {
      lVar2 = (longlong)*(int *)param_1[10] + *(longlong *)param_1[7];
    }
    else {
      lVar2 = (longlong)*(int *)param_1[0xb] + *(longlong *)param_1[8];
    }
    lVar1 = *(longlong *)param_1[3];
    if ((0xfff < (ulonglong)(lVar2 - lVar1)) && (0x1f < (lVar1 - *(longlong *)(lVar1 + -8)) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0();
  }
  *(undefined8 *)param_1[3] = 0;
  *(undefined8 *)param_1[7] = 0;
  *(undefined4 *)param_1[10] = 0;
  *(undefined8 *)param_1[4] = 0;
  *(undefined8 *)param_1[8] = 0;
  *(undefined4 *)param_1[0xb] = 0;
  param_1[0xd] = 0;
  *(uint *)(param_1 + 0xe) = *(uint *)(param_1 + 0xe) & 0xfffffffe;
  FUN_180159a90(param_1);
  return;
}



