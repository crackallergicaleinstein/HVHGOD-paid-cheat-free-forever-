// FUN_1801df130 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801df130 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801df130(undefined8 param_1,undefined8 param_2,undefined8 *param_3,int *param_4,
                  undefined1 param_5)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  undefined8 *puVar3;
  undefined1 auStack_1d8 [40];
  undefined1 **local_1b0;
  undefined1 *local_1a8;
  undefined8 uStack_1a0;
  int local_198 [2];
  undefined1 local_190 [16];
  undefined8 local_180;
  ulonglong local_178;
  undefined **local_168;
  undefined1 *local_160;
  longlong local_158;
  undefined8 local_150;
  undefined8 *local_148;
  undefined1 local_140 [264];
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_1d8;
  if ((param_4[1] < 0) && (*param_4 < 1)) {
    local_1a8 = (undefined1 *)*param_3;
    uStack_1a0 = param_3[1];
    FUN_1801e03b0(local_1a8,param_2,&local_1a8,param_5);
  }
  else {
    local_180 = 0;
    local_178 = 0xf;
    local_190._1_15_ = SUB1615((undefined1  [16])0x0,1);
    auVar2[0xf] = 0;
    auVar2._0_15_ = local_190._1_15_;
    local_190 = auVar2 << 8;
    FUN_18063ab10(&local_168,0,0x128);
    local_160 = local_140;
    local_158 = 0;
    local_150 = 0x100;
    local_168 = std::
                _Fmt_iterator_buffer<std::back_insert_iterator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,char,std::_Fmt_buffer_traits>
                ::vftable;
    local_148 = (undefined8 *)local_190;
    local_1a8 = (undefined1 *)*param_3;
    uStack_1a0 = param_3[1];
    FUN_1801e03b0(local_198,&local_168,&local_1a8,param_5);
    local_168 = std::
                _Fmt_iterator_buffer<std::back_insert_iterator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,char,std::_Fmt_buffer_traits>
                ::vftable;
    if (local_158 != 0) {
      local_158 = 0;
      if ((ulonglong)local_148[3] < 0x10) {
        puVar3 = local_148;
        puVar1 = local_148;
      }
      else {
        puVar3 = (undefined8 *)*local_148;
        puVar1 = (undefined8 *)*local_148;
      }
      FUN_180141490(local_148,(longlong)puVar1 + (local_148[2] - (longlong)puVar3),local_140);
    }
    local_198[0] = param_4[1];
    local_1a8 = local_190;
    if (0xf < local_178) {
      local_1a8 = (undefined1 *)local_190._0_8_;
    }
    uStack_1a0 = local_180;
    uStack_1a0 = FUN_1801df990(&local_1a8,local_198);
    local_1a8 = local_190;
    local_1b0 = &local_1a8;
    FUN_1801e09d0(param_1,param_2,local_198[0],param_4);
    thunk_FUN_18015c010(local_190);
  }
}



