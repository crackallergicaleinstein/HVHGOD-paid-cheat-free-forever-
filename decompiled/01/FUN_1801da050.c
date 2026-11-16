// FUN_1801da050 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801da050 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801da050(longlong *param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  undefined1 auStack_1c8 [32];
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined1 local_198 [16];
  undefined ***local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined **local_168;
  undefined1 *local_160;
  longlong local_158;
  undefined8 local_150;
  longlong local_148;
  undefined1 local_140 [264];
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_1c8;
  FUN_18063ab10(&local_168,0,0x128);
  local_160 = local_140;
  local_158 = 0;
  local_150 = 0x100;
  local_168 = std::
              _Fmt_iterator_buffer<std::back_insert_iterator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,char,std::_Fmt_buffer_traits>
              ::vftable;
  local_1a8 = *param_3;
  uStack_1a0 = param_3[1];
  local_198 = (undefined1  [16])0x0;
  local_188 = &local_168;
  local_180 = *param_4;
  uStack_178 = param_4[1];
  pcVar4 = (char *)*param_3;
  pcVar5 = pcVar4 + param_3[1];
  local_148 = param_2;
  local_170 = param_5;
  while (pcVar4 != pcVar5) {
    pcVar2 = pcVar4;
    if (*pcVar4 != '{') {
      pcVar2 = (char *)thunk_FUN_1805f7e70(pcVar4,pcVar5,0x7b);
      while (pcVar3 = (char *)thunk_FUN_1805f7e70(pcVar4,pcVar2,0x7d), pcVar3 != pcVar2) {
        pcVar1 = pcVar3 + 1;
        if ((pcVar1 == pcVar2) || (*pcVar1 != '}')) {
                    /* WARNING: Subroutine does not return */
          FUN_1801e6400("Unmatched \'}\' in format string.");
        }
        FUN_1801da9b0(&local_1a8,pcVar4,pcVar1);
        pcVar4 = pcVar3 + 2;
      }
      FUN_1801da9b0(&local_1a8,pcVar4,pcVar2);
      if (pcVar2 == pcVar5) break;
    }
    pcVar4 = (char *)FUN_1801da5c0(pcVar2,pcVar5,&local_1a8);
  }
  FUN_1801da940(&local_168);
  *param_1 = local_148;
  local_168 = std::
              _Fmt_iterator_buffer<std::back_insert_iterator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,char,std::_Fmt_buffer_traits>
              ::vftable;
  if (local_158 != 0) {
    local_158 = 0;
    FUN_180141490(local_148,*(undefined8 *)(local_148 + 0x10),local_140);
  }
}



