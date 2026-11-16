// FUN_180211200 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180211200 */

undefined8 * FUN_180211200(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = std::
             _Func_impl_no_alloc<`private:_void___cdecl_features::changer::econ_item_system::request_decode(std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64)___ptr64'::`2'::<lambda_2>,void>
             ::vftable;
  param_1[1] = *param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  if (param_2[2] != 0) {
    LOCK();
    piVar1 = (int *)(param_2[2] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  param_1[2] = param_2[1];
  param_1[3] = param_2[2];
  uVar2 = param_2[3];
  uVar3 = param_2[5];
  uVar4 = param_2[4];
  param_2[5] = 0;
  param_2[4] = 0;
  param_2[3] = 0;
  param_1[4] = uVar2;
  param_1[5] = uVar4;
  param_1[6] = uVar3;
  return param_1;
}



