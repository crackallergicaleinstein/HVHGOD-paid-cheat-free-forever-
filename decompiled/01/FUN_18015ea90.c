// FUN_18015ea90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18015ea90 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

ios_base * FUN_18015ea90(ios_base *param_1,ulonglong param_2)

{
  ios_base *piVar1;
  char *local_18;
  undefined8 local_10;
  
  piVar1 = param_1 + -0xb0;
  *(undefined ***)(param_1 + (longlong)*(int *)(*(longlong *)piVar1 + 4) + -0xb0) =
       std::basic_ifstream<char,std::char_traits<char>_>::vftable;
  *(int *)(param_1 + (longlong)*(int *)(*(longlong *)piVar1 + 4) + -0xb4) =
       *(int *)(*(longlong *)piVar1 + 4) + -0xb0;
  FUN_1800f63e0(param_1 + -0xa0);
  *(undefined ***)(param_1 + (longlong)*(int *)(*(longlong *)piVar1 + 4) + -0xb0) =
       std::basic_istream<char,std::char_traits<char>_>::vftable;
  *(int *)(param_1 + (longlong)*(int *)(*(longlong *)piVar1 + 4) + -0xb4) =
       *(int *)(*(longlong *)piVar1 + 4) + -0x18;
  *(undefined ***)param_1 = std::ios_base::vftable;
  std::ios_base::_Ios_base_dtor(param_1);
  if ((param_2 & 1) != 0) {
    if (DAT_180c7df30 == (undefined8 *)0x0) {
      local_18 = "tier0.dll:g_pMemAlloc";
      local_10 = 0x15;
      DAT_180c7df30 = (undefined8 *)FUN_180451750(&local_18);
    }
    (**(code **)(*(longlong *)*DAT_180c7df30 + 0x18))((longlong *)*DAT_180c7df30,piVar1);
  }
  return piVar1;
}



