// FUN_180211e10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180211e10 */

undefined8 *
FUN_180211e10(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  *param_2 = std::
             _Func_impl_no_alloc<`private:_void___cdecl_features::changer::econ_item_system::request_decode(std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64)___ptr64'::`2'::<lambda_2>,void>
             ::vftable;
  puVar5 = param_2 + 1;
  *puVar5 = *(undefined8 *)(param_1 + 8);
  param_2[2] = 0;
  param_2[3] = 0;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0x18) + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  uVar3 = *(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20);
  if (uVar3 != 0) {
    if (0x7fffffffffffffff < uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_1801136f0();
    }
    lVar2 = FUN_18015bca0(uVar3);
    param_2[4] = lVar2;
    param_2[5] = lVar2;
    param_2[6] = lVar2 + uVar3;
    lVar2 = param_2[4];
    lVar4 = *(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20);
    FUN_18063aed0(lVar2,*(longlong *)(param_1 + 0x20),lVar4,param_4,puVar5);
    param_2[5] = lVar4 + lVar2;
  }
  return param_2;
}



