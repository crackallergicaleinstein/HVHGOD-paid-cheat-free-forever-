// FUN_180166df0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180166df0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180166df0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_198 [48];
  undefined1 local_168 [16];
  undefined8 local_158;
  int iStack_14c;
  longlong local_148 [2];
  byte local_138 [160];
  undefined **local_98 [12];
  longlong local_38;
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_1808d5f00 ^ (ulonglong)auStack_198;
  FUN_18063ab10(local_148,0,0x110);
  FUN_18015e690(local_148,param_1,0x24);
  if ((local_138[*(int *)(local_148[0] + 4)] & 6) == 0) {
    FUN_180176ec0(local_148,&local_38);
    local_30 = local_30 + local_38;
    if ((0 < local_30) && (local_30 <= param_2)) {
      FUN_1800f5630(param_3,local_30,0);
      local_168 = (undefined1  [16])0x0;
      local_158 = 0;
      FUN_180176fb0(local_148,local_168);
      puVar1 = param_3 + 2;
      if (0xf < (ulonglong)param_3[3]) {
        param_3 = (undefined8 *)*param_3;
      }
      FUN_1801771e0(local_148,param_3,*puVar1);
    }
  }
  *(undefined ***)((longlong)local_148 + (longlong)*(int *)(local_148[0] + 4)) =
       std::basic_ifstream<char,std::char_traits<char>_>::vftable;
  *(int *)((longlong)local_148 + (longlong)*(int *)(local_148[0] + 4) + -4) =
       *(int *)(local_148[0] + 4) + -0xb0;
  FUN_1800f63e0(local_138);
  *(undefined ***)((longlong)local_148 + (longlong)*(int *)(local_148[0] + 4)) =
       std::basic_istream<char,std::char_traits<char>_>::vftable;
  *(int *)((longlong)local_148 + (longlong)*(int *)(local_148[0] + 4) + -4) =
       *(int *)(local_148[0] + 4) + -0x18;
  local_98[0] = std::ios_base::vftable;
  std::ios_base::_Ios_base_dtor((ios_base *)local_98);
}



