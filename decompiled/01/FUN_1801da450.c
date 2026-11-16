// FUN_1801da450 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801da450 */

void FUN_1801da450(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  *param_1 = std::
             _Fmt_iterator_buffer<std::back_insert_iterator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,char,std::_Fmt_buffer_traits>
             ::vftable;
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    param_1[2] = 0;
    puVar2 = (undefined8 *)param_1[4];
    if ((ulonglong)puVar2[3] < 0x10) {
      puVar4 = puVar2;
      puVar3 = puVar2;
    }
    else {
      puVar4 = (undefined8 *)*puVar2;
      puVar3 = (undefined8 *)*puVar2;
    }
    FUN_180141490(puVar2,(longlong)puVar3 + (puVar2[2] - (longlong)puVar4),param_1 + 5,
                  (longlong)param_1 + (lVar1 - (longlong)(param_1 + 5)) + 0x28);
    param_1[4] = puVar2;
  }
  return;
}



