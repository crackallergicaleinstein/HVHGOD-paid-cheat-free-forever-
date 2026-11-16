// FUN_18015eb80 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18015eb80 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

ios_base * FUN_18015eb80(ios_base *param_1,uint param_2)

{
  ios_base *piVar1;
  char *local_18;
  undefined8 local_10;
  
  piVar1 = param_1 + -0x18;
  *(undefined ***)(param_1 + (longlong)*(int *)(*(longlong *)piVar1 + 4) + -0x18) =
       std::basic_istream<char,std::char_traits<char>_>::vftable;
  *(int *)(param_1 + (longlong)*(int *)(*(longlong *)piVar1 + 4) + -0x1c) =
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



