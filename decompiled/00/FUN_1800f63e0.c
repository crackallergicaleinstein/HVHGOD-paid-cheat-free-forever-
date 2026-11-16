// FUN_1800f63e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800f63e0 */

void FUN_1800f63e0(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  *param_1 = std::basic_filebuf<char,std::char_traits<char>_>::vftable;
  if ((param_1[0x10] != 0) && (*(undefined8 **)param_1[3] == param_1 + 0xe)) {
    uVar1 = param_1[0x12];
    lVar2 = param_1[0x11];
    *(longlong *)param_1[3] = lVar2;
    *(longlong *)param_1[7] = lVar2;
    *(int *)param_1[10] = (int)uVar1 - (int)lVar2;
  }
  if (*(char *)((longlong)param_1 + 0x7c) != '\0') {
    FUN_180113da0(param_1);
  }
  FUN_180159a90(param_1);
  return;
}



