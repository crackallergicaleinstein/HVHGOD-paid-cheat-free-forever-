// FUN_18014aae0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18014aae0 */

undefined8 * FUN_18014aae0(undefined8 *param_1)

{
  char *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  char *local_28;
  ulonglong uStack_20;
  
  FUN_180114410("class std::basic_string_view<char,struct std::char_traits<char> > __cdecl config::detail::enum_label<enum resources::audio::sound_type,(enum resources::audio::sound_type)0x35>(void)"
                ,0xb5,0xffffffffffffffff,">(void)",7);
  thunk_FUN_1805f7d20("class std::basic_string_view<char,struct std::char_traits<char> > __cdecl config::detail::enum_label<enum resources::audio::sound_type,(enum resources::audio::sound_type)0x35>(void)"
                      ,"(void)",0x2c);
  local_28 = "(enum resources::audio::sound_type)0x35>(void)";
  uStack_20 = 0x27;
  do {
    if (*local_28 != ' ') break;
    local_28 = local_28 + 1;
    uStack_20 = uStack_20 - 1;
  } while (uStack_20 != 0);
  if (((uStack_20 != 0) &&
      (pcVar1 = (char *)thunk_FUN_1805f7e70(local_28,local_28 + uStack_20,0x28),
      pcVar1 != local_28 + uStack_20)) && ((longlong)pcVar1 - (longlong)local_28 != -1)) {
    *param_1 = 0;
    param_1[1] = 0;
    return param_1;
  }
  lVar2 = FUN_180114410(local_28,uStack_20,0xffffffffffffffff,&DAT_1806c1090,2);
  if (lVar2 != -1) {
    uVar3 = lVar2 + 2;
    if (uStack_20 < uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_18015ac40();
    }
    uVar4 = uStack_20 - uVar3;
    local_28 = local_28 + uVar3;
    uStack_20 = 0xffffffffffffffff;
    if (uVar4 != 0xffffffffffffffff) {
      uStack_20 = uVar4;
    }
  }
  *param_1 = local_28;
  param_1[1] = uStack_20;
  return param_1;
}



