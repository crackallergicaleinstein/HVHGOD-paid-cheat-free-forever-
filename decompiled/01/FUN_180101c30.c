// FUN_180101c30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180101c30 */

undefined8 * FUN_180101c30(undefined8 *param_1)

{
  ulonglong uVar1;
  int *piVar2;
  char cVar3;
  char *pcVar4;
  longlong lVar5;
  char **ppcVar6;
  undefined8 *puVar7;
  undefined8 **ppuVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  char *pcVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  char *local_4b8;
  longlong lStack_4b0;
  undefined4 local_4a8;
  char *local_498;
  undefined8 *puStack_490;
  undefined8 *local_488 [2];
  undefined1 local_478 [16];
  undefined1 local_468 [16];
  undefined1 local_458 [16];
  undefined1 local_448 [16];
  undefined1 local_438 [16];
  char *local_428;
  ulonglong local_420;
  char *local_418;
  ulonglong local_410;
  char *local_408;
  ulonglong local_400;
  char *local_3f8;
  ulonglong local_3f0;
  char *local_3e8;
  ulonglong local_3e0;
  char *local_3d8;
  ulonglong local_3d0;
  char *local_3c8;
  ulonglong local_3c0;
  char *local_3b8;
  ulonglong local_3b0;
  char *local_3a8;
  ulonglong local_3a0;
  char *local_398;
  ulonglong local_390;
  char *local_388;
  ulonglong local_380;
  char *local_378;
  ulonglong local_370;
  char *local_368;
  ulonglong local_360;
  char *local_358;
  ulonglong local_350;
  char *local_348;
  ulonglong local_340;
  char *local_338;
  ulonglong local_330;
  char *local_328;
  ulonglong local_320;
  char *local_318;
  ulonglong local_310;
  char *local_308;
  ulonglong local_300;
  char *local_2f8;
  ulonglong local_2f0;
  char *local_2e8;
  ulonglong local_2e0;
  char *local_2d8;
  ulonglong local_2d0;
  char *local_2c8;
  ulonglong local_2c0;
  char *local_2b8;
  ulonglong local_2b0;
  char *local_2a8;
  ulonglong local_2a0;
  char *local_298;
  ulonglong local_290;
  char *local_288;
  ulonglong local_280;
  char *local_278;
  ulonglong local_270;
  char *local_268;
  ulonglong local_260;
  char *local_258;
  ulonglong local_250;
  char *local_248;
  ulonglong local_240;
  char *local_238;
  ulonglong local_230;
  char *local_228;
  ulonglong local_220;
  char *local_218;
  ulonglong local_210;
  char *local_208;
  ulonglong local_200;
  char *local_1f8;
  ulonglong local_1f0;
  char *local_1e8;
  ulonglong local_1e0;
  char *local_1d8;
  ulonglong local_1d0;
  char *local_1c8;
  ulonglong local_1c0;
  char *local_1b8;
  ulonglong local_1b0;
  char *local_1a8;
  ulonglong local_1a0;
  char *local_198;
  ulonglong local_190;
  char *local_188;
  ulonglong local_180;
  char *local_178;
  ulonglong local_170;
  char *local_168;
  char *pcStack_160;
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined8 *local_88 [2];
  char *local_78;
  longlong lStack_70;
  char *local_68;
  undefined8 *puStack_60;
  undefined1 local_58 [16];
  undefined1 local_48 [32];
  
  local_4a8 = 0;
  local_88[0] = param_1;
  FUN_180118fe0(local_488);
  FUN_180119110(local_478);
  FUN_180119240(local_468);
  FUN_180119370(local_458);
  FUN_1801194a0(local_448);
  FUN_1801195d0(local_438);
  FUN_180114410("class std::basic_string_view<char,struct std::char_traits<char> > __cdecl config::detail::enum_label<enum settings::esp::player::overlay::ammo_bar::position_type,(enum settings::esp::player::overlay::ammo_bar::position_type)0x6>(void)"
                ,0xea,0xffffffffffffffff,">(void)",7);
  thunk_FUN_1805f7d20("class std::basic_string_view<char,struct std::char_traits<char> > __cdecl config::detail::enum_label<enum settings::esp::player::overlay::ammo_bar::position_type,(enum settings::esp::player::overlay::ammo_bar::position_type)0x6>(void)"
                      ,"(void)",0x2c);
  pcVar11 = "(enum settings::esp::player::overlay::ammo_bar::position_type)0x6>(void)";
  uVar12 = 0x41;
  uVar9 = 0x41;
  do {
    if (*pcVar11 != ' ') break;
    pcVar11 = pcVar11 + 1;
    uVar9 = uVar9 - 1;
  } while (uVar9 != 0);
  if (((uVar9 == 0) ||
      (pcVar4 = (char *)thunk_FUN_1805f7e70(pcVar11,pcVar11 + uVar9,0x28), pcVar4 == pcVar11 + uVar9
      )) || ((longlong)pcVar4 - (longlong)pcVar11 == -1)) {
    lVar5 = FUN_180114410(pcVar11,uVar9,0xffffffffffffffff,&DAT_1806c1090,2);
    uVar10 = uVar9;
    if (lVar5 != -1) {
      uVar1 = lVar5 + 2;
      if (uVar9 < uVar1) goto LAB_1801046b2;
      pcVar11 = pcVar11 + uVar1;
      uVar10 = 0xffffffffffffffff;
      if (uVar9 - uVar1 != 0xffffffffffffffff) {
        uVar10 = uVar9 - uVar1;
      }
    }
    local_428 = pcVar11;
    local_420 = uVar10;
  }
  else {
    local_428 = (char *)0x0;
    local_420 = 0;
  }
  FUN_180114410("class std::basic_string_view<char,struct std::char_traits<char> > __cdecl config::detail::enum_label<enum settings::esp::player::overlay::ammo_bar::position_type,(enum settings::esp::player::overlay::ammo_bar::position_type)0x7>(void)"
                ,0xea,0xffffffffffffffff,">(void)",7);
  thunk_FUN_1805f7d20("class std::basic_string_view<char,struct std::char_traits<char> > __cdecl config::detail::enum_label<enum settings::esp::player::overlay::ammo_bar::position_type,(enum settings::esp::player::overlay::ammo_bar::position_type)0x7>(void)"
                      ,"(void)",0x2c);
  pcVar11 = "(enum settings::esp::player::overlay::ammo_bar::position_type)0x7>(void)";
  uVar9 = 0x41;
  do {
    if (*pcVar11 != ' ') break;
    pcVar11 = pcVar11 + 1;
    uVar9 = uVar9 - 1;
  } while (uVar9 != 0);
  if (((uVar9 == 0) ||
      (pcVar4 = (char *)thunk_FUN_1805f7e70(pcVar11,pcVar11 + uVar9,0x28), pcVar4 == pcVar11 + uVar9
      )) || ((longlong)pcVar4 - (longlong)pcVar11 == -1)) {
    lVar5 = FUN_180114410(pcVar11,uVar9,0xffffffffffffffff,&DAT_1806c1090,2);
    uVar10 = uVar9;
    if (lVar5 != -1) {
      uVar1 = lVar5 + 2;
      if (uVar9 < uVar1) goto LAB_1801046b2;
      pcVar11 = pcVar11 + uVar1;
      uVar10 = 0xffffffffffffffff;
      if (uVar9 - uVar1 != 0xffffffffffffffff) {
        uVar10 = uVar9 - uVar1;
      }
    }
    local_418 = pcVar11;
    local_410 = uVar10;
  }
  else {
    local_418 = (char *)0x0;
    local_410 = 0;
  }
  FUN_180114410("class std::basic_string_view<char,struct std::char_traits<char> > __cdecl config::detail::enum_label<enum settings::esp::player::overlay::ammo_bar::position_type,(enum settings::esp::player::overlay::ammo_bar::position_type)0x8>(void)"
                ,0xea,0xffffffffffffffff,">(void)",7);
  thunk_FUN_1805f7d20("class std::basic_string_view<char,struct std::char_traits<char> > __cdecl config::detail::enum_label<enum settings::esp::player::overlay::ammo_bar::position_type,(enum settings::esp::player::overlay::ammo_bar::position_type)0x8>(void)"
                      ,"(void)",0x2c);
  pcVar11 = "(enum settings::esp::player::overlay::ammo_bar::position_type)0x8>(void)";
  uVar9 = 0x41;
  do {
    if (*pcVar11 != ' ') break;
    pcVar11 = pcVar11 + 1;
    uVar9 = uVar9 - 1;
  } while (uVar9 != 0);
  if (((uVar9 == 0) ||
      (pcVar4 = (char *)thunk_FUN_1805f7e70(pcVar11,pcVar11 + uVar9,0x28), pcVar4 == pcVar11 + uVar9
      )) || ((longlong)pcVar4 - (longlong)pcVar11 == -1)) {
    lVar5 = FUN_180114410(pcVar11,uVar9,0xffffffffffffffff,&DAT_1806c1090,2);
    uVar10 = uVar9;
    if (lVar5 != -1) {
      uVar1 = lVar5 + 2;
      if (uVar9 < uVar1) goto LAB_1801046b2;
      pcVar11 = pcVar11 + uVar1;
      uVar10 = 0xffffffffffffffff;
      if (uVar9 - uVar1 != 0xffffffffffffffff) {
        uVar10 = uVar9 - uVar1;
      }
    }
    local_408 = pcVar11;
    local_400 = uVar10;
  }
  else {
    local_408 = (char *)0x0;
    local_400 = 0;
  }
  FUN_180114410("class std::basic_string_view<char,struct std::char_traits<char> > __cdecl config::detail::enum_label<enum settings::esp::player::overlay::ammo_bar::position_type,(enum settings::esp::player::overlay::ammo_bar::position_type)0x9>(void)"
                ,0xea,0xffffffffffffffff,">(void)",7);
  thunk_FUN_1805f7d20("class std::basic_string_view<char,struct std::char_traits<char> > __cdecl config::detail::enum_label<enum settings::esp::player::overlay::ammo_bar::position_type,(enum settings::esp::player::overlay::ammo_bar::position_type)0x9>(void)"
                      ,"(void)",0x2c);
  pcVar11 = "(enum settings::esp::player::overlay::ammo_bar::position_type)0x9>(void)";
  uVar9 = 0x41;
  do {
    if (*pcVar11 != ' ') break;
    pcVar11 = pcVar11 + 1;
    uVar9 = uVar9 - 1;
  } while (uVar9 != 0);
  if (((uVar9 == 0) ||
      (pcVar4 = (char *)thunk_FUN_1805f7e70(pcVar11,pcVar11 + uVar9,0x28), pcVar4 == pcVar11 + uVar9
      )) || ((longlong)pcVar4 - (longlong)pcVar11 == -1)) {
    lVar5 = FUN_180114410(pcVar11,uVar9,0xffffffffffffffff,&DAT_1806c1090,2);
    uVar10 = uVar9;
    if (lVar5 != -1) {
      uVar1 = lVar5 + 2;
      if (uVar9 < uVar1) goto LAB_1801046b2;
      pcVar11 = pcVar11 + uVar1;
      uVar10 = 0xffffffffffffffff;
      if (uVar9 - uVar1 != 0xffffffffffffffff) {
        uVar10 = uVar9 - uVar1;
      }
    }
    local_3f8 = pcVar11;
    local_3f0 = uVar10;
  }
  else {
    local_3f8 = (char *)0x0;
    local_3f0 = 0;
  }
  FUN_180114410("class std::basic_string_view<char,struct std::char_traits<char> > __cdecl config::detail::enum_label<enum settings::esp::player::overlay::ammo_bar::position_type,(enum settings::esp::player::overlay::ammo_bar::position_type)0xa>(void)"
                ,0xea,0xffffffffffffffff,">(void)",7);
  thunk_FUN_1805f7d20("class std::basic_string_view<char,struct std::char_traits<char> > __cdecl config::detail::enum_label<enum settings::esp::player::overlay::ammo_bar::position_type,(enum settings::esp::player::overlay::ammo_bar::position_type)0xa>(void)"
                      ,"(void)",0x2c);
  pcVar11 = "(enum settings::esp::player::overlay::ammo_bar::position_type)0xa>(void)";
  uVar9 = 0x41;
  do {
    if (*pcVar11 != ' ') break;
    pcVar11 = pcVar11 + 1;
    uVar9 = uVar9 - 1;
  } while (uVar9 != 0);
  if (((uVar9 == 0) ||
      (pcVar4 = (char *)thunk_FUN_1805f7e70(pcVar11,pcVar11 + uVar9,0x28), pcVar4 == pcVar11 + uVar9
      )) || ((longlong)pcVar4 - (longlong)pcVar11 == -1)) {
    lVar5 = FUN_180114410(pcVar11,uVar9,0xffffffffffffffff,&DAT_1806c1090,2);
    uVar10 = uVar9;
    if (lVar5 != -1) {
      uVar1 = lVar5 + 2;
      if (uVar9 < uVar1) goto LAB_1801046b2;
      pcVar11 = pcVar11 + uVar1;
      uVar10 = 0xffffffffffffffff;
      if (uVar9 - uVar1 != 0xffffffffffffffff) {
        uVar10 = uVar9 - uVar1;
      }
    }
    local_3e8 = pcVar11;
    local_3e0 = uVar10;
  }
  else {
    local_3e8 = (char *)0x0;
    local_3e0 = 0;
  }
  FUN_180114410("class std::basic_string_view<char,struct std::char_traits<char> > __cdecl config::detail::enum_label<enum settings::esp::player::overlay::ammo_bar::position_type,(enum settings::esp::player::overlay::ammo_bar::position_type)0xb>(void)"
                ,0xea,0xffffffffffffffff,">(void)",7);
  thunk_FUN_1805f7d20("class std::basic_string_view<char,struct std::char_traits<char> > __cdecl config::detail::enum_label<enum settings::esp::player::overlay::ammo_bar::position_type,(enum settings::esp::player::overlay::ammo_bar::position_type)0xb>(void)"
                      ,"(void)",0x2c);
  pcVar11 = "(enum settings::esp::player::overlay::ammo_bar::position_type)0xb>(void)";
  uVar9 = 0x41;
  do {
    if (*pcVar11 != ' ') break;
    pcVar11 = pcVar11 + 1;
    uVar9 = uVar9 - 1;
  } while (uVar9 != 0);
  if (((uVar9 == 0) ||
      (pcVar4 = (char *)thunk_FUN_1805f7e70(pcVar11,pcVar11 + uVar9,0x28), pcVar4 == pcVar11 + uVar9
      )) || ((longlong)pcVar4 - (longlong)pcVar11 == -1)) {
    lVar5 = FUN_180114410(pcVar11,uVar9,0xffffffffffffffff,&DAT_1806c1090,2);
    uVar10 = uVar9;
    if (lVar5 != -1) {
      uVar1 = lVar5 + 2;
      if (uVar9 < uVar1) goto LAB_1801046b2;
      pcVar11 = pcVar11 + uVar1;
      uVar10 = 0xffffffffffffffff;
      if (uVar9 - uVar1 != 0xffffffffffffffff) {
        uVar10 = uVar9 - uVar1;
      }
    }
    local_3d8 = pcVar11;
    local_3d0 = uVar10;
  }
  else {
    local_3d8 = (char *)0x0;
    local_3d0 = 0;
  }
  FUN_180114410("class std::basic_string_view<char,struct std::char_traits<char> > __cdecl config::detail::enum_label<enum settings::esp::player::overlay::ammo_bar::position_type,(enum settings::esp::player::overlay::ammo_bar::position_type)0xc>(void)"
                ,0xea,0xffffffffffffffff,">(void)",7);
  thunk_FUN_1805f7d20("class std::basic_string_view<char,struct std::char_traits<char> > __cdecl config::detail::enum_label<enum settings::esp::player::overlay::ammo_bar::position_type,(enum settings::esp::player::overlay::ammo_bar::position_type)0xc>(void)"
                      ,"(void)",0x2c);
  pcVar11 = "(enum settings::esp::player::overlay::ammo_bar::position_type)0xc>(void)";
  uVar9 = 0x41;
  do {
    if (*pcVar11 != ' ') break;
    pcVar11 = pcVar11 + 1;
    uVar9 = uVar9 - 1;
  } while (uVar9 != 0);
  if (((uVar9 == 0) ||
      (pcVar4 = (char *)thunk_FUN_1805f7e70(pcVar11,pcVar11 + uVar9,0x28), pcVar4 == pcVar11 + uVar9
      )) || ((longlong)pcVar4 - (longlong)pcVar11 == -1)) {
    lVar5 = FUN_180114410(pcVar11,uVar9,0xffffffffffffffff,&DAT_1806c1090,2);
    uVar10 = uVar9;
    if (lVar5 != -1) {
      uVar1 = lVar5 + 2;
      if (uVar9 < uVar1) goto LAB_1801046b2;
      pcVar11 = pcVar11 + uVar1;
      uVar10 = 0xffffffffffffffff;
      if (uVar9 - uVar1 != 0xffffffffffffffff) {
        uVar10 = uVar9 - uVar1;
      }
    }
    local_3c8 = pcVar11;
    local_3c0 = uVar10;
  }
  else {
    local_3c8 = (char *)0x0;
    local_3c0 = 0;
  }
  FUN_180114410("class std::basic_string_view<char,struct std::char_traits<char> > __cdecl config::detail::enum_label<enum settings::esp::player::overlay::ammo_bar::position_type,(enum settings::esp::player::overlay::ammo_bar::position_type)0xd>(void)"
                ,0xea,0xffffffffffffffff,">(void)",7);
  thunk_FUN_1805f7d20("class std::basic_string_view<char,struct std::char_traits<char> > __cdecl config::detail::enum_label<enum settings::esp::player::overlay::ammo_bar::position_type,(enum settings::esp::player::overlay::ammo_bar::position_type)0xd>(void)"
                      ,"(void)",0x2c);
  pcVar11 = "(enum settings::esp::player::overlay::ammo_bar::position_type)0xd>(void)";
  uVar9 = 0x41;
  do {
    if (*pcVar11 != ' ') break;
    pcVar11 = pcVar11 + 1;
    uVar9 = uVar9 - 1;
  } while (uVar9 != 0);
  if (((uVar9 == 0) ||
      (pcVar4 = (char *)thunk_FUN_1805f7e70(pcVar11,pcVar11 + uVar9,0x28), pcVar4 == pcVar11 + uVar9
      )) || ((longlong)pcVar4 - (longlong)pcVar11 == -1)) {
    lVar5 = FUN_180114410(pcVar11,uVar9,0xffffffffffffffff,&DAT_1806c1090,2);
    uVar10 = uVar9;
    if (lVar5 != -1) {
      uVar1 = lVar5 + 2;
      if (uVar9 < uVar1) goto LAB_1801046b2;
      pcVar11 = pcVar11 + uVar1;
      uVar10 = 0xffffffffffffffff;
      if (uVar9 - uVar1 != 0xffffffffffffffff) {
        uVar10 = uVar9 - uVar1;
      }
    }
    local_3b8 = pcVar11;
    local_3b0 = uVar10;
  }
  else {
    local_3b8 = (char *)0x0;
    local_3b0 = 0;
  }
  FUN_180114410("class std::basic_string_view<char,struct std::char_traits<char> > __cdecl config::detail::enum_label<enum settings::esp::player::overlay::ammo_bar::position_type,(enum settings::esp::player::overlay::ammo_bar::position_type)0xe>(void)"
                ,0xea,0xffffffffffffffff,">(void)",7);
  thunk_FUN_1805f7d20("class std::basic_string_view<char,struct std::char_traits<char> > __cdecl config::detail::enum_label<enum settings::esp::player::overlay::ammo_bar::position_type,(enum settings::esp::player::overlay::ammo_bar::position_type)0xe>(void)"
                      ,"(void)",0x2c);
  pcVar11 = "(enum settings::esp::player::overlay::ammo_bar::position_type)0xe>(void)";
  uVar9 = 0x41;
  do {
    if (*pcVar11 != ' ') break;
    pcVar11 = pcVar11 + 1;
    uVar9 = uVar9 - 1;
  } while (uVar9 != 0);
  if (((uVar9 == 0) ||
      (pcVar4 = (char *)thunk_FUN_1805f7e70(pcVar11,pcVar11 + uVar9,0x28), pcVar4 == pcVar11 + uVar9
      )) || ((longlong)pcVar4 - (longlong)pcVar11 == -1)) {
    lVar5 = FUN_180114410(pcVar11,uVar9,0xffffffffffffffff,&DAT_1806c1090,2);
    uVar10 = uVar9;
    if (lVar5 != -1) {
      uVar1 = lVar5 + 2;
      if (uVar9 < uVar1) goto LAB_1801046b2;
      pcVar11 = pcVar11 + uVar1;
      uVar10 = 0xffffffffffffffff;
      if (uVar9 - uVar1 != 0xffffffffffffffff) {
        uVar10 = uVar9 - uVar1;
      }
    }
    local_3a8 = pcVar11;
    local_3a0 = uVar10;
  }
  else {
    local_3a8 = (char *)0x0;
    local_3a0 = 0;
  }
  FUN_180114410("class std::basic_string_view<char,struct std::char_traits<char> > __cdecl config::detail::enum_label<enum settings::esp::player::overlay::ammo_bar::position_type,(enum settings::esp::player::overlay::ammo_bar::position_type)0xf>(void)"
                ,0xea,0xffffffffffffffff,">(void)",7);
  thunk_FUN_1805f7d20("class std::basic_string_view<char,struct std::char_traits<char> > __cdecl config::detail::enum_label<enum settings::esp::player::overlay::ammo_bar::position_type,(enum settings::esp::player::overlay::ammo_bar::position_type)0xf>(void)"
                      ,"(void)",0x2c);
  pcVar11 = "(enum settings::esp::player::overlay::ammo_bar::position_type)0xf>(void)";
  do {
    if (*pcVar11 != ' ') break;
    pcVar11 = pcVar11 + 1;
    uVar12 = uVar12 - 1;
  } while (uVar12 != 0);
  if (((uVar12 == 0) ||
      (pcVar4 = (char *)thunk_FUN_1805f7e70(pcVar11,pcVar11 + uVar12,0x28),
      pcVar4 == pcVar11 + uVar12)) || ((longlong)pcVar4 - (longlong)pcVar11 == -1)) {
    lVar5 = FUN_180114410(pcVar11,uVar12,0xffffffffffffffff,&DAT_1806c1090,2);
    uVar9 = uVar12;
    if (lVar5 != -1) {
      uVar10 = lVar5 + 2;
      if (uVar12 < uVar10) goto LAB_1801046b2;
      pcVar11 = pcVar11 + uVar10;
      uVar9 = 0xffffffffffffffff;
      if (uVar12 - uVar10 != 0xffffffffffffffff) {
        uVar9 = uVar12 - uVar10;
      }
    }
    local_398 = pcVar11;
    local_390 = uVar9;
  }
  else {
    local_398 = (char *)0x0;
    local_390 = 0;
  }
  FUN_180114410("class std::basic_string_view<char,struct std::char_traits<char> > __cdecl config::detail::enum_label<enum settings::esp::player::overlay::ammo_bar::position_type,(enum settings::esp::player::overlay::ammo_bar::position_type)0x10>(void)"
                ,0xeb,0xffffffffffffffff,">(void)",7);
  thunk_FUN_1805f7d20("class std::basic_string_view<char,struct std::char_traits<char> > __cdecl config::detail::enum_label<enum settings::esp::player::overlay::ammo_bar::position_type,(enum settings::esp::player::overlay::ammo_bar::position_type)0x10>(void)"
                      ,"(void)",0x2c);
  pcVar11 = "(enum settings::esp::player::overlay::ammo_bar::position_type)0x10>(void)";
  uVar9 = 0x42;
  do {
    if (*pcVar11 != ' ') break;
    pcVar11 = pcVar11 + 1;
    uVar9 = uVar9 - 1;
  } while (uVar9 != 0);
  if (((uVar9 == 0) ||
      (pcVar4 = (char *)thunk_FUN_1805f7e70(pcVar11,pcVar11 + uVar9,0x28), pcVar4 == pcVar11 + uVar9
      )) || ((longlong)pcVar4 - (longlong)pcVar11 == -1)) {
    lVar5 = FUN_180114410(pcVar11,uVar9,0xffffffffffffffff,&DAT_1806c1090,2);
    uVar12 = uVar9;
    if (lVar5 != -1) {
      uVar10 = lVar5 + 2;
      if (uVar9 < uVar10) goto LAB_1801046b2;
      pcVar11 = pcVar11 + uVar10;
      uVar12 = 0xffffffffffffffff;
      if (uVar9 - uVar10 != 0xffffffffffffffff) {
        uVar12 = uVar9 - uVar10;
      }
    }
    local_388 = pcVar11;
    local_380 = uVar12;
  }
  else {
    local_388 = (char *)0x0;
    local_380 = 0;
  }
  FUN_180114410("class std::basic_string_view<char,struct std::char_traits<char> > __cdecl config::detail::enum_label<enum settings::esp::player::overlay::ammo_bar::position_type,(enum settings::esp::player::overlay::ammo_bar::position_type)0x11>(void)"
                ,0xeb,0xffffffffffffffff,">(void)",7);
  thunk_FUN_1805f7d20("class std::basic_string_view<char,struct std::char_traits<char> > __cdecl config::detail::enum_label<enum settings::esp::player::overlay::ammo_bar::position_type,(enum settings::esp::player::overlay::ammo_bar::position_type)0x11>(void)"
                      ,"(void)",0x2c);
  pcVar11 = "(enum settings::esp::player::overlay::ammo_bar::position_type)0x11>(void)";
  uVar9 = 0x42;
  do {
    if (*pcVar11 != ' ') break;
    pcVar11 = pcVar11 + 1;
    uVar9 = uVar9 - 1;
  } while (uVar9 != 0);
  if (((uVar9 == 0) ||
      (pcVar4 = (char *)thunk_FUN_1805f7e70(pcVar11,pcVar11 + uVar9,0x28), pcVar4 == pcVar11 + uVar9
      )) || ((longlong)pcVar4 - (longlong)pcVar11 == -1)) {
    lVar5 = FUN_180114410(pcVar11,uVar9,0xffffffffffffffff,&DAT_1806c1090,2);
    uVar12 = uVar9;
    if (lVar5 != -1) {
      uVar10 = lVar5 + 2;
      if (uVar9 < uVar10) goto LAB_1801046b2;
      pcVar11 = pcVar11 + uVar10;
      uVar12 = 0xffffffffffffffff;
      if (uVar9 - uVar10 != 0xffffffffffffffff) {
        uVar12 = uVar9 - uVar10;
      }
    }
    local_378 = pcVar11;
    local_370 = uVar12;
  }
  else {
    local_378 = (char *)0x0;
    local_370 = 0;
  }
  FUN_180114410("class std::basic_string_view<char,struct std::char_traits<char> > __cdecl config::detail::enum_label<enum settings::esp::player::overlay::ammo_bar::position_type,(enum settings::esp::player::overlay::ammo_bar::position_type)0x12>(void)"
                ,0xeb,0xffffffffffffffff,">(void)",7);
  thunk_FUN_1805f7d20("class std::basic_string_view<char,struct std::char_traits<char> > __cdecl config::detail::enum_label<enum settings::esp::player::overlay::ammo_bar::position_type,(enum settings::esp::player::overlay::ammo_bar::position_type)0x12>(void)"
                      ,"(void)",0x2c);
  pcVar11 = "(enum settings::esp::player::overlay::ammo_bar::position_type)0x12>(void)";
  uVar9 = 0x42;
  do {
    if (*pcVar11 != ' ') break;
    pcVar11 = pcVar11 + 1;
    uVar9 = uVar9 - 1;
  } while (uVar9 != 0);
  if (((uVar9 == 0) ||
      (pcVar4 = (char *)thunk_FUN_1805f7e70(pcVar11,pcVar11 + uVar9,0x28), pcVar4 == pcVar11 + uVar9
      )) || ((longlong)pcVar4 - (longlong)pcVar11 == -1)) {
    lVar5 = FUN_180114410(pcVar11,uVar9,0xffffffffffffffff,&DAT_1806c1090,2);
    uVar12 = uVar9;
    if (lVar5 != -1) {
      uVar10 = lVar5 + 2;
      if (uVar9 < uVar10) goto LAB_1801046b2;
      pcVar11 = pcVar11 + uVar10;
      uVar12 = 0xffffffffffffffff;
      if (uVar9 - uVar10 != 0xffffffffffffffff) {
        uVar12 = uVar9 - uVar10;
      }
    }
    local_368 = pcVar11;
    local_360 = uVar12;
  }
  else {
    local_368 = (char *)0x0;
    local_360 = 0;
  }
  FUN_180114410("class std::basic_string_view<char,struct std::char_traits<char> > __cdecl config::detail::enum_label<enum settings::esp::player::overlay::ammo_bar::position_type,(enum settings::esp::player::overlay::ammo_bar::position_type)0x13>(void)"
                ,0xeb,0xffffffffffffffff,">(void)",7);
  thunk_FUN_1805f7d20("class std::basic_string_view<char,struct std::char_traits<char> > __cdecl config::detail::enum_label<enum settings::esp::player::overlay::ammo_bar::position_type,(enum settings::esp::player::overlay::ammo_bar::position_type)0x13>(void)"
                      ,"(void)",0x2c);
  pcVar11 = "(enum settings::esp::player::overlay::ammo_bar::position_type)0x13>(void)";
  uVar9 = 0x42;
  do {
    if (*pcVar11 != ' ') break;
    pcVar11 = pcVar11 + 1;
    uVar9 = uVar9 - 1;
  } while (uVar9 != 0);
  if (((uVar9 == 0) ||
      (pcVar4 = (char *)thunk_FUN_1805f7e70(pcVar11,pcVar11 + uVar9,0x28), pcVar4 == pcVar11 + uVar9
      )) || ((longlong)pcVar4 - (longlong)pcVar11 == -1)) {
    lVar5 = FUN_180114410(pcVar11,uVar9,0xffffffffffffffff,&DAT_1806c1090,2);
    uVar12 = uVar9;
    if (lVar5 != -1) {
      uVar10 = lVar5 + 2;
      if (uVar9 < uVar10) goto LAB_1801046b2;
      pcVar11 = pcVar11 + uVar10;
      uVar12 = 0xffffffffffffffff;
      if (uVar9 - uVar10 != 0xffffffffffffffff) {
        uVar12 = uVar9 - uVar10;
      }
    }
    local_358 = pcVar11;
    local_350 = uVar12;
  }
  else {
    local_358 = (char *)0x0;
    local_350 = 0;
  }
  FUN_180114410("class std::basic_string_view<char,struct std::char_traits<char> > __cdecl config::detail::enum_label<enum settings::esp::player::overlay::ammo_bar::position_type,(enum settings::esp::player::overlay::ammo_bar::position_type)0x14>(void)"
                ,0xeb,0xffffffffffffffff,">(void)",7);
  thunk_FUN_1805f7d20("class std::basic_string_view<char,struct std::char_traits<char> > __cdecl config::detail::enum_label<enum settings::esp::player::overlay::ammo_bar::position_type,(enum settings::esp::player::overlay::ammo_bar::position_type)0x14>(void)"
                      ,"(void)",0x2c);
  pcVar11 = "(enum settings::esp::player::overlay::ammo_bar::position_type)0x14>(void)";
  uVar9 = 0x42;
  do {
    if (*pcVar11 != ' ') break;
    pcVar11 = pcVar11 + 1;
    uVar9 = uVar9 - 1;
  } while (uVar9 != 0);
  if (((uVar9 == 0) ||
      (pcVar4 = (char *)thunk_FUN_1805f7e70(pcVar11,pcVar11 + uVar9,0x28), pcVar4 == pcVar11 + uVar9
      )) || ((longlong)pcVar4 - (longlong)pcVar11 == -1)) {
    lVar5 = FUN_180114410(pcVar11,uVar9,0xffffffffffffffff,&DAT_1806c1090,2);
    uVar12 = uVar9;
    if (lVar5 != -1) {
      uVar10 = lVar5 + 2;
      if (uVar9 < uVar10) goto LAB_1801046b2;
      pcVar11 = pcVar11 + uVar10;
      uVar12 = 0xffffffffffffffff;
      if (uVar9 - uVar10 != 0xffffffffffffffff) {
        uVar12 = uVar9 - uVar10;
      }
    }
    local_348 = pcVar11;
    local_340 = uVar12;
  }
  else {
    local_348 = (char *)0x0;
    local_340 = 0;
  }
  FUN_180114410("class std::basic_string_view<char,struct std::char_traits<char> > __cdecl config::detail::enum_label<enum settings::esp::player::overlay::ammo_bar::position_type,(enum settings::esp::player::overlay::ammo_bar::position_type)0x15>(void)"
                ,0xeb,0xffffffffffffffff,">(void)",7);
  thunk_FUN_1805f7d20("class std::basic_string_view<char,struct std::char_traits<char> > __cdecl config::detail::enum_label<enum settings::esp::player::overlay::ammo_bar::position_type,(enum settings::esp::player::overlay::ammo_bar::position_type)0x15>(void)"
                      ,"(void)",0x2c);
  pcVar11 = "(enum settings::esp::player::overlay::ammo_bar::position_type)0x15>(void)";
  uVar9 = 0x42;
  do {
    if (*pcVar11 != ' ') break;
    pcVar11 = pcVar11 + 1;
    uVar9 = uVar9 - 1;
  } while (uVar9 != 0);
  if (((uVar9 == 0) ||
      (pcVar4 = (char *)thunk_FUN_1805f7e70(pcVar11,pcVar11 + uVar9,0x28), pcVar4 == pcVar11 + uVar9
      )) || ((longlong)pcVar4 - (longlong)pcVar11 == -1)) {
    lVar5 = FUN_180114410(pcVar11,uVar9,0xffffffffffffffff,&DAT_1806c1090,2);
    uVar12 = uVar9;
    if (lVar5 != -1) {
      uVar10 = lVar5 + 2;
      if (uVar9 < uVar10) goto LAB_1801046b2;
      pcVar11 = pcVar11 + uVar10;
      uVar12 = 0xffffffffffffffff;
      if (uVar9 - uVar10 != 0xffffffffffffffff) {
        uVar12 = uVar9 - uVar10;
      }
    }
    local_338 = pcVar11;
    local_330 = uVar12;
  }
  else {
    local_338 = (char *)0x0;
    local_330 = 0;
  }
  FUN_180114410("class std::basic_string_view<char,struct std::char_traits<char> > __cdecl config::detail::enum_label<enum settings::esp::player::overlay::ammo_bar::position_type,(enum settings::esp::player::overlay::ammo_bar::position_type)0x16>(void)"
                ,0xeb,0xffffffffffffffff,">(void)",7);
  thunk_FUN_1805f7d20("class std::basic_string_view<char,struct std::char_traits<char> > __cdecl config::detail::enum_label<enum settings::esp::player::overlay::ammo_bar::position_type,(enum settings::esp::player::overlay::ammo_bar::position_type)0x16>(void)"
                      ,"(void)",0x2c);
  pcVar11 = "(enum settings::esp::player::overlay::ammo_bar::position_type)0x16>(void)";
  uVar9 = 0x42;
  do {
    if (*pcVar11 != ' ') break;
    pcVar11 = pcVar11 + 1;
    uVar9 = uVar9 - 1;
  } while (uVar9 != 0);
  if (((uVar9 == 0) ||
      (pcVar4 = (char *)thunk_FUN_1805f7e70(pcVar11,pcVar11 + uVar9,0x28), pcVar4 == pcVar11 + uVar9
      )) || ((longlong)pcVar4 - (longlong)pcVar11 == -1)) {
    lVar5 = FUN_180114410(pcVar11,uVar9,0xffffffffffffffff,&DAT_1806c1090,2);
    uVar12 = uVar9;
    if (lVar5 != -1) {
      uVar10 = lVar5 + 2;
      if (uVar9 < uVar10) goto LAB_1801046b2;
      pcVar11 = pcVar11 + uVar10;
      uVar12 = 0xffffffffffffffff;
      if (uVar9 - uVar10 != 0xffffffffffffffff) {
        uVar12 = uVar9 - uVar10;
      }
    }
    local_328 = pcVar11;
    local_320 = uVar12;
  }
  else {
    local_328 = (char *)0x0;
    local_320 = 0;
  }
  FUN_180114410("class std::basic_string_view<char,struct std::char_traits<char> > __cdecl config::detail::enum_label<enum settings::esp::player::overlay::ammo_bar::position_type,(enum settings::esp::player::overlay::ammo_bar::position_type)0x17>(void)"
                ,0xeb,0xffffffffffffffff,">(void)",7);
  thunk_FUN_1805f7d20("class std::basic_string_view<char,struct std::char_traits<char> > __cdecl config::detail::enum_label<enum settings::esp::player::overlay::ammo_bar::position_type,(enum settings::esp::player::overlay::ammo_bar::position_type)0x17>(void)"
                      ,"(void)",0x2c);
  pcVar11 = "(enum settings::esp::player::overlay::ammo_bar::position_type)0x17>(void)";
  uVar9 = 0x42;
  do {
    if (*pcVar11 != ' ') break;
    pcVar11 = pcVar11 + 1;
    uVar9 = uVar9 - 1;
  } while (uVar9 != 0);
  if (((uVar9 == 0) ||
      (pcVar4 = (char *)thunk_FUN_1805f7e70(pcVar11,pcVar11 + uVar9,0x28), pcVar4 == pcVar11 + uVar9
      )) || ((longlong)pcVar4 - (longlong)pcVar11 == -1)) {
    lVar5 = FUN_180114410(pcVar11,uVar9,0xffffffffffffffff,&DAT_1806c1090,2);
    uVar12 = uVar9;
    if (lVar5 != -1) {
      uVar10 = lVar5 + 2;
      if (uVar9 < uVar10) goto LAB_1801046b2;
      pcVar11 = pcVar11 + uVar10;
      uVar12 = 0xffffffffffffffff;
      if (uVar9 - uVar10 != 0xffffffffffffffff) {
        uVar12 = uVar9 - uVar10;
      }
    }
    local_318 = pcVar11;
    local_310 = uVar12;
  }
  else {
    local_318 = (char *)0x0;
    local_310 = 0;
  }
  FUN_180114410("class std::basic_string_view<char,struct std::char_traits<char> > __cdecl config::detail::enum_label<enum settings::esp::player::overlay::ammo_bar::position_type,(enum settings::esp::player::overlay::ammo_bar::position_type)0x18>(void)"
                ,0xeb,0xffffffffffffffff,">(void)",7);
  thunk_FUN_1805f7d20("class std::basic_string_view<char,struct std::char_traits<char> > __cdecl config::detail::enum_label<enum settings::esp::player::overlay::ammo_bar::position_type,(enum settings::esp::player::overlay::ammo_bar::position_type)0x18>(void)"
                      ,"(void)",0x2c);
  pcVar11 = "(enum settings::esp::player::overlay::ammo_bar::position_type)0x18>(void)";
  uVar9 = 0x42;
  do {
    if (*pcVar11 != ' ') break;
    pcVar11 = pcVar11 + 1;
    uVar9 = uVar9 - 1;
  } while (uVar9 != 0);
  if (((uVar9 == 0) ||
      (pcVar4 = (char *)thunk_FUN_1805f7e70(pcVar11,pcVar11 + uVar9,0x28), pcVar4 == pcVar11 + uVar9
      )) || ((longlong)pcVar4 - (longlong)pcVar11 == -1)) {
    lVar5 = FUN_180114410(pcVar11,uVar9,0xffffffffffffffff,&DAT_1806c1090,2);
    uVar12 = uVar9;
    if (lVar5 != -1) {
      uVar10 = lVar5 + 2;
      if (uVar9 < uVar10) goto LAB_1801046b2;
      pcVar11 = pcVar11 + uVar10;
      uVar12 = 0xffffffffffffffff;
      if (uVar9 - uVar10 != 0xffffffffffffffff) {
        uVar12 = uVar9 - uVar10;
      }
    }
    local_308 = pcVar11;
    local_300 = uVar12;
  }
  else {
    local_308 = (char *)0x0;
    local_300 = 0;
  }
  FUN_180114410("class std::basic_string_view<char,struct std::char_traits<char> > __cdecl config::detail::enum_label<enum settings::esp::player::overlay::ammo_bar::position_type,(enum settings::esp::player::overlay::ammo_bar::position_type)0x19>(void)"
                ,0xeb,0xffffffffffffffff,">(void)",7);
  thunk_FUN_1805f7d20("class std::basic_string_view<char,struct std::char_traits<char> > __cdecl config::detail::enum_label<enum settings::esp::player::overlay::ammo_bar::position_type,(enum settings::esp::player::overlay::ammo_bar::position_type)0x19>(void)"
                      ,"(void)",0x2c);
  pcVar11 = "(enum settings::esp::player::overlay::ammo_bar::position_type)0x19>(void)";
  uVar9 = 0x42;
  do {
    if (*pcVar11 != ' ') break;
    pcVar11 = pcVar11 + 1;
    uVar9 = uVar9 - 1;
  } while (uVar9 != 0);
  if (((uVar9 == 0) ||
      (pcVar4 = (char *)thunk_FUN_1805f7e70(pcVar11,pcVar11 + uVar9,0x28), pcVar4 == pcVar11 + uVar9
      )) || ((longlong)pcVar4 - (longlong)pcVar11 == -1)) {
    lVar5 = FUN_180114410(pcVar11,uVar9,0xffffffffffffffff,&DAT_1806c1090,2);
    uVar12 = uVar9;
    if (lVar5 != -1) {
      uVar10 = lVar5 + 2;
      if (uVar9 < uVar10) goto LAB_1801046b2;
      pcVar11 = pcVar11 + uVar10;
      uVar12 = 0xffffffffffffffff;
      if (uVar9 - uVar10 != 0xffffffffffffffff) {
        uVar12 = uVar9 - uVar10;
      }
    }
    local_2f8 = pcVar11;
    local_2f0 = uVar12;
  }
  else {
    local_2f8 = (char *)0x0;
    local_2f0 = 0;
  }
  FUN_180114410("class std::basic_string_view<char,struct std::char_traits<char> > __cdecl config::detail::enum_label<enum settings::esp::player::overlay::ammo_bar::position_type,(enum settings::esp::player::overlay::ammo_bar::position_type)0x1a>(void)"
                ,0xeb,0xffffffffffffffff,">(void)",7);
  thunk_FUN_1805f7d20("class std::basic_string_view<char,struct std::char_traits<char> > __cdecl config::detail::enum_label<enum settings::esp::player::overlay::ammo_bar::position_type,(enum settings::esp::player::overlay::ammo_bar::position_type)0x1a>(void)"
                      ,"(void)",0x2c);
  pcVar11 = "(enum settings::esp::player::overlay::ammo_bar::position_type)0x1a>(void)";
  uVar9 = 0x42;
  do {
    if (*pcVar11 != ' ') break;
    pcVar11 = pcVar11 + 1;
    uVar9 = uVar9 - 1;
  } while (uVar9 != 0);
  if (((uVar9 == 0) ||
      (pcVar4 = (char *)thunk_FUN_1805f7e70(pcVar11,pcVar11 + uVar9,0x28), pcVar4 == pcVar11 + uVar9
      )) || ((longlong)pcVar4 - (longlong)pcVar11 == -1)) {
    lVar5 = FUN_180114410(pcVar11,uVar9,0xffffffffffffffff,&DAT_1806c1090,2);
    uVar12 = uVar9;
    if (lVar5 != -1) {
      uVar10 = lVar5 + 2;
      if (uVar9 < uVar10) goto LAB_1801046b2;
      pcVar11 = pcVar11 + uVar10;
      uVar12 = 0xffffffffffffffff;
      if (uVar9 - uVar10 != 0xffffffffffffffff) {
        uVar12 = uVar9 - uVar10;
      }
    }
    local_2e8 = pcVar11;
    local_2e0 = uVar12;
  }
  else {
    local_2e8 = (char *)0x0;
    local_2e0 = 0;
  }
  FUN_180114410("class std::basic_string_view<char,struct std::char_traits<char> > __cdecl config::detail::enum_label<enum settings::esp::player::overlay::ammo_bar::position_type,(enum settings::esp::player::overlay::ammo_bar::position_type)0x1b>(void)"
                ,0xeb,0xffffffffffffffff,">(void)",7);
  thunk_FUN_1805f7d20("class std::basic_string_view<char,struct std::char_traits<char> > __cdecl config::detail::enum_label<enum settings::esp::player::overlay::ammo_bar::position_type,(enum settings::esp::player::overlay::ammo_bar::position_type)0x1b>(void)"
                      ,"(void)",0x2c);
  pcVar11 = "(enum settings::esp::player::overlay::ammo_bar::position_type)0x1b>(void)";
  uVar9 = 0x42;
  do {
    if (*pcVar11 != ' ') break;
    pcVar11 = pcVar11 + 1;
    uVar9 = uVar9 - 1;
  } while (uVar9 != 0);
  if (((uVar9 == 0) ||
      (pcVar4 = (char *)thunk_FUN_1805f7e70(pcVar11,pcVar11 + uVar9,0x28), pcVar4 == pcVar11 + uVar9
      )) || ((longlong)pcVar4 - (longlong)pcVar11 == -1)) {
    lVar5 = FUN_180114410(pcVar11,uVar9,0xffffffffffffffff,&DAT_1806c1090,2);
    uVar12 = uVar9;
    if (lVar5 != -1) {
      uVar10 = lVar5 + 2;
      if (uVar9 < uVar10) goto LAB_1801046b2;
      pcVar11 = pcVar11 + uVar10;
      uVar12 = 0xffffffffffffffff;
      if (uVar9 - uVar10 != 0xffffffffffffffff) {
        uVar12 = uVar9 - uVar10;
      }
    }
    local_2d8 = pcVar11;
    local_2d0 = uVar12;
  }
  else {
    local_2d8 = (char *)0x0;
    local_2d0 = 0;
  }
  FUN_180114410("class std::basic_string_view<char,struct std::char_traits<char> > __cdecl config::detail::enum_label<enum settings::esp::player::overlay::ammo_bar::position_type,(enum settings::esp::player::overlay::ammo_bar::position_type)0x1c>(void)"
                ,0xeb,0xffffffffffffffff,">(void)",7);
  thunk_FUN_1805f7d20("class std::basic_string_view<char,struct std::char_traits<char> > __cdecl config::detail::enum_label<enum settings::esp::player::overlay::ammo_bar::position_type,(enum settings::esp::player::overlay::ammo_bar::position_type)0x1c>(void)"
                      ,"(void)",0x2c);
  pcVar11 = "(enum settings::esp::player::overlay::ammo_bar::position_type)0x1c>(void)";
  uVar9 = 0x42;
  do {
    if (*pcVar11 != ' ') break;
    pcVar11 = pcVar11 + 1;
    uVar9 = uVar9 - 1;
  } while (uVar9 != 0);
  if (((uVar9 == 0) ||
      (pcVar4 = (char *)thunk_FUN_1805f7e70(pcVar11,pcVar11 + uVar9,0x28), pcVar4 == pcVar11 + uVar9
      )) || ((longlong)pcVar4 - (longlong)pcVar11 == -1)) {
    lVar5 = FUN_180114410(pcVar11,uVar9,0xffffffffffffffff,&DAT_1806c1090,2);
    uVar12 = uVar9;
    if (lVar5 != -1) {
      uVar10 = lVar5 + 2;
      if (uVar9 < uVar10) goto LAB_1801046b2;
      pcVar11 = pcVar11 + uVar10;
      uVar12 = 0xffffffffffffffff;
      if (uVar9 - uVar10 != 0xffffffffffffffff) {
        uVar12 = uVar9 - uVar10;
      }
    }
    local_2c8 = pcVar11;
    local_2c0 = uVar12;
  }
  else {
    local_2c8 = (char *)0x0;
    local_2c0 = 0;
  }
  FUN_180114410("class std::basic_string_view<char,struct std::char_traits<char> > __cdecl config::detail::enum_label<enum settings::esp::player::overlay::ammo_bar::position_type,(enum settings::esp::player::overlay::ammo_bar::position_type)0x1d>(void)"
                ,0xeb,0xffffffffffffffff,">(void)",7);
  thunk_FUN_1805f7d20("class std::basic_string_view<char,struct std::char_traits<char> > __cdecl config::detail::enum_label<enum settings::esp::player::overlay::ammo_bar::position_type,(enum settings::esp::player::overlay::ammo_bar::position_type)0x1d>(void)"
                      ,"(void)",0x2c);
  pcVar11 = "(enum settings::esp::player::overlay::ammo_bar::position_type)0x1d>(void)";
  uVar9 = 0x42;
  do {
    if (*pcVar11 != ' ') break;
    pcVar11 = pcVar11 + 1;
    uVar9 = uVar9 - 1;
  } while (uVar9 != 0);
  if (((uVar9 == 0) ||
      (pcVar4 = (char *)thunk_FUN_1805f7e70(pcVar11,pcVar11 + uVar9,0x28), pcVar4 == pcVar11 + uVar9
      )) || ((longlong)pcVar4 - (longlong)pcVar11 == -1)) {
    lVar5 = FUN_180114410(pcVar11,uVar9,0xffffffffffffffff,&DAT_1806c1090,2);
    uVar12 = uVar9;
    if (lVar5 != -1) {
      uVar10 = lVar5 + 2;
      if (uVar9 < uVar10) goto LAB_1801046b2;
      pcVar11 = pcVar11 + uVar10;
      uVar12 = 0xffffffffffffffff;
      if (uVar9 - uVar10 != 0xffffffffffffffff) {
        uVar12 = uVar9 - uVar10;
      }
    }
    local_2b8 = pcVar11;
    local_2b0 = uVar12;
  }
  else {
    local_2b8 = (char *)0x0;
    local_2b0 = 0;
  }
  FUN_180114410("class std::basic_string_view<char,struct std::char_traits<char> > __cdecl config::detail::enum_label<enum settings::esp::player::overlay::ammo_bar::position_type,(enum settings::esp::player::overlay::ammo_bar::position_type)0x1e>(void)"
                ,0xeb,0xffffffffffffffff,">(void)",7);
  thunk_FUN_1805f7d20("class std::basic_string_view<char,struct std::char_traits<char> > __cdecl config::detail::enum_label<enum settings::esp::player::overlay::ammo_bar::position_type,(enum settings::esp::player::overlay::ammo_bar::position_type)0x1e>(void)"
                      ,"(void)",0x2c);
  pcVar11 = "(enum settings::esp::player::overlay::ammo_bar::position_type)0x1e>(void)";
  uVar9 = 0x42;
  do {
    if (*pcVar11 != ' ') break;
    pcVar11 = pcVar11 + 1;
    uVar9 = uVar9 - 1;
  } while (uVar9 != 0);
  if (((uVar9 == 0) ||
      (pcVar4 = (char *)thunk_FUN_1805f7e70(pcVar11,pcVar11 + uVar9,0x28), pcVar4 == pcVar11 + uVar9
      )) || ((longlong)pcVar4 - (longlong)pcVar11 == -1)) {
    lVar5 = FUN_180114410(pcVar11,uVar9,0xffffffffffffffff,&DAT_1806c1090,2);
    uVar12 = uVar9;
    if (lVar5 != -1) {
      uVar10 = lVar5 + 2;
      if (uVar9 < uVar10) goto LAB_1801046b2;
      pcVar11 = pcVar11 + uVar10;
      uVar12 = 0xffffffffffffffff;
      if (uVar9 - uVar10 != 0xffffffffffffffff) {
        uVar12 = uVar9 - uVar10;
      }
    }
    local_2a8 = pcVar11;
    local_2a0 = uVar12;
  }
  else {
    local_2a8 = (char *)0x0;
    local_2a0 = 0;
  }
  FUN_180114410("class std::basic_string_view<char,struct std::char_traits<char> > __cdecl config::detail::enum_label<enum settings::esp::player::overlay::ammo_bar::position_type,(enum settings::esp::player::overlay::ammo_bar::position_type)0x1f>(void)"
                ,0xeb,0xffffffffffffffff,">(void)",7);
  thunk_FUN_1805f7d20("class std::basic_string_view<char,struct std::char_traits<char> > __cdecl config::detail::enum_label<enum settings::esp::player::overlay::ammo_bar::position_type,(enum settings::esp::player::overlay::ammo_bar::position_type)0x1f>(void)"
                      ,"(void)",0x2c);
  pcVar11 = "(enum settings::esp::player::overlay::ammo_bar::position_type)0x1f>(void)";
  uVar9 = 0x42;
  do {
    if (*pcVar11 != ' ') break;
    pcVar11 = pcVar11 + 1;
    uVar9 = uVar9 - 1;
  } while (uVar9 != 0);
  if (((uVar9 == 0) ||
      (pcVar4 = (char *)thunk_FUN_1805f7e70(pcVar11,pcVar11 + uVar9,0x28), pcVar4 == pcVar11 + uVar9
      )) || ((longlong)pcVar4 - (longlong)pcVar11 == -1)) {
    lVar5 = FUN_180114410(pcVar11,uVar9,0xffffffffffffffff,&DAT_1806c1090,2);
    uVar12 = uVar9;
    if (lVar5 != -1) {
      uVar10 = lVar5 + 2;
      if (uVar9 < uVar10) goto LAB_1801046b2;
      pcVar11 = pcVar11 + uVar10;
      uVar12 = 0xffffffffffffffff;
      if (uVar9 - uVar10 != 0xffffffffffffffff) {
        uVar12 = uVar9 - uVar10;
      }
    }
    local_298 = pcVar11;
    local_290 = uVar12;
  }
  else {
    local_298 = (char *)0x0;
    local_290 = 0;
  }
  FUN_180114410("class std::basic_string_view<char,struct std::char_traits<char> > __cdecl config::detail::enum_label<enum settings::esp::player::overlay::ammo_bar::position_type,(enum settings::esp::player::overlay::ammo_bar::position_type)0x20>(void)"
                ,0xeb,0xffffffffffffffff,">(void)",7);
  thunk_FUN_1805f7d20("class std::basic_string_view<char,struct std::char_traits<char> > __cdecl config::detail::enum_label<enum settings::esp::player::overlay::ammo_bar::position_type,(enum settings::esp::player::overlay::ammo_bar::position_type)0x20>(void)"
                      ,"(void)",0x2c);
  pcVar11 = "(enum settings::esp::player::overlay::ammo_bar::position_type)0x20>(void)";
  uVar9 = 0x42;
  do {
    if (*pcVar11 != ' ') break;
    pcVar11 = pcVar11 + 1;
    uVar9 = uVar9 - 1;
  } while (uVar9 != 0);
  if (((uVar9 == 0) ||
      (pcVar4 = (char *)thunk_FUN_1805f7e70(pcVar11,pcVar11 + uVar9,0x28), pcVar4 == pcVar11 + uVar9
      )) || ((longlong)pcVar4 - (longlong)pcVar11 == -1)) {
    lVar5 = FUN_180114410(pcVar11,uVar9,0xffffffffffffffff,&DAT_1806c1090,2);
    uVar12 = uVar9;
    if (lVar5 != -1) {
      uVar10 = lVar5 + 2;
      if (uVar9 < uVar10) goto LAB_1801046b2;
      pcVar11 = pcVar11 + uVar10;
      uVar12 = 0xffffffffffffffff;
      if (uVar9 - uVar10 != 0xffffffffffffffff) {
        uVar12 = uVar9 - uVar10;
      }
    }
    local_288 = pcVar11;
    local_280 = uVar12;
  }
  else {
    local_288 = (char *)0x0;
    local_280 = 0;
  }
  FUN_180114410("class std::basic_string_view<char,struct std::char_traits<char> > __cdecl config::detail::enum_label<enum settings::esp::player::overlay::ammo_bar::position_type,(enum settings::esp::player::overlay::ammo_bar::position_type)0x21>(void)"
                ,0xeb,0xffffffffffffffff,">(void)",7);
  thunk_FUN_1805f7d20("class std::basic_string_view<char,struct std::char_traits<char> > __cdecl config::detail::enum_label<enum settings::esp::player::overlay::ammo_bar::position_type,(enum settings::esp::player::overlay::ammo_bar::position_type)0x21>(void)"
                      ,"(void)",0x2c);
  pcVar11 = "(enum settings::esp::player::overlay::ammo_bar::position_type)0x21>(void)";
  uVar9 = 0x42;
  do {
    if (*pcVar11 != ' ') break;
    pcVar11 = pcVar11 + 1;
    uVar9 = uVar9 - 1;
  } while (uVar9 != 0);
  if (((uVar9 == 0) ||
      (pcVar4 = (char *)thunk_FUN_1805f7e70(pcVar11,pcVar11 + uVar9,0x28), pcVar4 == pcVar11 + uVar9
      )) || ((longlong)pcVar4 - (longlong)pcVar11 == -1)) {
    lVar5 = FUN_180114410(pcVar11,uVar9,0xffffffffffffffff,&DAT_1806c1090,2);
    uVar12 = uVar9;
    if (lVar5 != -1) {
      uVar10 = lVar5 + 2;
      if (uVar9 < uVar10) goto LAB_1801046b2;
      pcVar11 = pcVar11 + uVar10;
      uVar12 = 0xffffffffffffffff;
      if (uVar9 - uVar10 != 0xffffffffffffffff) {
        uVar12 = uVar9 - uVar10;
      }
    }
    local_278 = pcVar11;
    local_270 = uVar12;
  }
  else {
    local_278 = (char *)0x0;
    local_270 = 0;
  }
  FUN_180114410("class std::basic_string_view<char,struct std::char_traits<char> > __cdecl config::detail::enum_label<enum settings::esp::player::overlay::ammo_bar::position_type,(enum settings::esp::player::overlay::ammo_bar::position_type)0x22>(void)"
                ,0xeb,0xffffffffffffffff,">(void)",7);
  thunk_FUN_1805f7d20("class std::basic_string_view<char,struct std::char_traits<char> > __cdecl config::detail::enum_label<enum settings::esp::player::overlay::ammo_bar::position_type,(enum settings::esp::player::overlay::ammo_bar::position_type)0x22>(void)"
                      ,"(void)",0x2c);
  pcVar11 = "(enum settings::esp::player::overlay::ammo_bar::position_type)0x22>(void)";
  uVar9 = 0x42;
  do {
    if (*pcVar11 != ' ') break;
    pcVar11 = pcVar11 + 1;
    uVar9 = uVar9 - 1;
  } while (uVar9 != 0);
  if (((uVar9 == 0) ||
      (pcVar4 = (char *)thunk_FUN_1805f7e70(pcVar11,pcVar11 + uVar9,0x28), pcVar4 == pcVar11 + uVar9
      )) || ((longlong)pcVar4 - (longlong)pcVar11 == -1)) {
    lVar5 = FUN_180114410(pcVar11,uVar9,0xffffffffffffffff,&DAT_1806c1090,2);
    uVar12 = uVar9;
    if (lVar5 != -1) {
      uVar10 = lVar5 + 2;
      if (uVar9 < uVar10) goto LAB_1801046b2;
      pcVar11 = pcVar11 + uVar10;
      uVar12 = 0xffffffffffffffff;
      if (uVar9 - uVar10 != 0xffffffffffffffff) {
        uVar12 = uVar9 - uVar10;
      }
    }
    local_268 = pcVar11;
    local_260 = uVar12;
  }
  else {
    local_268 = (char *)0x0;
    local_260 = 0;
  }
  FUN_180114410("class std::basic_string_view<char,struct std::char_traits<char> > __cdecl config::detail::enum_label<enum settings::esp::player::overlay::ammo_bar::position_type,(enum settings::esp::player::overlay::ammo_bar::position_type)0x23>(void)"
                ,0xeb,0xffffffffffffffff,">(void)",7);
  thunk_FUN_1805f7d20("class std::basic_string_view<char,struct std::char_traits<char> > __cdecl config::detail::enum_label<enum settings::esp::player::overlay::ammo_bar::position_type,(enum settings::esp::player::overlay::ammo_bar::position_type)0x23>(void)"
                      ,"(void)",0x2c);
  pcVar11 = "(enum settings::esp::player::overlay::ammo_bar::position_type)0x23>(void)";
  uVar9 = 0x42;
  do {
    if (*pcVar11 != ' ') break;
    pcVar11 = pcVar11 + 1;
    uVar9 = uVar9 - 1;
  } while (uVar9 != 0);
  if (((uVar9 == 0) ||
      (pcVar4 = (char *)thunk_FUN_1805f7e70(pcVar11,pcVar11 + uVar9,0x28), pcVar4 == pcVar11 + uVar9
      )) || ((longlong)pcVar4 - (longlong)pcVar11 == -1)) {
    lVar5 = FUN_180114410(pcVar11,uVar9,0xffffffffffffffff,&DAT_1806c1090,2);
    uVar12 = uVar9;
    if (lVar5 != -1) {
      uVar10 = lVar5 + 2;
      if (uVar9 < uVar10) goto LAB_1801046b2;
      pcVar11 = pcVar11 + uVar10;
      uVar12 = 0xffffffffffffffff;
      if (uVar9 - uVar10 != 0xffffffffffffffff) {
        uVar12 = uVar9 - uVar10;
      }
    }
    local_258 = pcVar11;
    local_250 = uVar12;
  }
  else {
    local_258 = (char *)0x0;
    local_250 = 0;
  }
  FUN_180114410("class std::basic_string_view<char,struct std::char_traits<char> > __cdecl config::detail::enum_label<enum settings::esp::player::overlay::ammo_bar::position_type,(enum settings::esp::player::overlay::ammo_bar::position_type)0x24>(void)"
                ,0xeb,0xffffffffffffffff,">(void)",7);
  thunk_FUN_1805f7d20("class std::basic_string_view<char,struct std::char_traits<char> > __cdecl config::detail::enum_label<enum settings::esp::player::overlay::ammo_bar::position_type,(enum settings::esp::player::overlay::ammo_bar::position_type)0x24>(void)"
                      ,"(void)",0x2c);
  pcVar11 = "(enum settings::esp::player::overlay::ammo_bar::position_type)0x24>(void)";
  uVar9 = 0x42;
  do {
    if (*pcVar11 != ' ') break;
    pcVar11 = pcVar11 + 1;
    uVar9 = uVar9 - 1;
  } while (uVar9 != 0);
  if (((uVar9 == 0) ||
      (pcVar4 = (char *)thunk_FUN_1805f7e70(pcVar11,pcVar11 + uVar9,0x28), pcVar4 == pcVar11 + uVar9
      )) || ((longlong)pcVar4 - (longlong)pcVar11 == -1)) {
    lVar5 = FUN_180114410(pcVar11,uVar9,0xffffffffffffffff,&DAT_1806c1090,2);
    uVar12 = uVar9;
    if (lVar5 != -1) {
      uVar10 = lVar5 + 2;
      if (uVar9 < uVar10) goto LAB_1801046b2;
      pcVar11 = pcVar11 + uVar10;
      uVar12 = 0xffffffffffffffff;
      if (uVar9 - uVar10 != 0xffffffffffffffff) {
        uVar12 = uVar9 - uVar10;
      }
    }
    local_248 = pcVar11;
    local_240 = uVar12;
  }
  else {
    local_248 = (char *)0x0;
    local_240 = 0;
  }
  FUN_180114410("class std::basic_string_view<char,struct std::char_traits<char> > __cdecl config::detail::enum_label<enum settings::esp::player::overlay::ammo_bar::position_type,(enum settings::esp::player::overlay::ammo_bar::position_type)0x25>(void)"
                ,0xeb,0xffffffffffffffff,">(void)",7);
  thunk_FUN_1805f7d20("class std::basic_string_view<char,struct std::char_traits<char> > __cdecl config::detail::enum_label<enum settings::esp::player::overlay::ammo_bar::position_type,(enum settings::esp::player::overlay::ammo_bar::position_type)0x25>(void)"
                      ,"(void)",0x2c);
  pcVar11 = "(enum settings::esp::player::overlay::ammo_bar::position_type)0x25>(void)";
  uVar9 = 0x42;
  do {
    if (*pcVar11 != ' ') break;
    pcVar11 = pcVar11 + 1;
    uVar9 = uVar9 - 1;
  } while (uVar9 != 0);
  if (((uVar9 == 0) ||
      (pcVar4 = (char *)thunk_FUN_1805f7e70(pcVar11,pcVar11 + uVar9,0x28), pcVar4 == pcVar11 + uVar9
      )) || ((longlong)pcVar4 - (longlong)pcVar11 == -1)) {
    lVar5 = FUN_180114410(pcVar11,uVar9,0xffffffffffffffff,&DAT_1806c1090,2);
    uVar12 = uVar9;
    if (lVar5 != -1) {
      uVar10 = lVar5 + 2;
      if (uVar9 < uVar10) goto LAB_1801046b2;
      pcVar11 = pcVar11 + uVar10;
      uVar12 = 0xffffffffffffffff;
      if (uVar9 - uVar10 != 0xffffffffffffffff) {
        uVar12 = uVar9 - uVar10;
      }
    }
    local_238 = pcVar11;
    local_230 = uVar12;
  }
  else {
    local_238 = (char *)0x0;
    local_230 = 0;
  }
  FUN_180114410("class std::basic_string_view<char,struct std::char_traits<char> > __cdecl config::detail::enum_label<enum settings::esp::player::overlay::ammo_bar::position_type,(enum settings::esp::player::overlay::ammo_bar::position_type)0x26>(void)"
                ,0xeb,0xffffffffffffffff,">(void)",7);
  thunk_FUN_1805f7d20("class std::basic_string_view<char,struct std::char_traits<char> > __cdecl config::detail::enum_label<enum settings::esp::player::overlay::ammo_bar::position_type,(enum settings::esp::player::overlay::ammo_bar::position_type)0x26>(void)"
                      ,"(void)",0x2c);
  pcVar11 = "(enum settings::esp::player::overlay::ammo_bar::position_type)0x26>(void)";
  uVar9 = 0x42;
  do {
    if (*pcVar11 != ' ') break;
    pcVar11 = pcVar11 + 1;
    uVar9 = uVar9 - 1;
  } while (uVar9 != 0);
  if (((uVar9 == 0) ||
      (pcVar4 = (char *)thunk_FUN_1805f7e70(pcVar11,pcVar11 + uVar9,0x28), pcVar4 == pcVar11 + uVar9
      )) || ((longlong)pcVar4 - (longlong)pcVar11 == -1)) {
    lVar5 = FUN_180114410(pcVar11,uVar9,0xffffffffffffffff,&DAT_1806c1090,2);
    uVar12 = uVar9;
    if (lVar5 != -1) {
      uVar10 = lVar5 + 2;
      if (uVar9 < uVar10) goto LAB_1801046b2;
      pcVar11 = pcVar11 + uVar10;
      uVar12 = 0xffffffffffffffff;
      if (uVar9 - uVar10 != 0xffffffffffffffff) {
        uVar12 = uVar9 - uVar10;
      }
    }
    local_228 = pcVar11;
    local_220 = uVar12;
  }
  else {
    local_228 = (char *)0x0;
    local_220 = 0;
  }
  FUN_180114410("class std::basic_string_view<char,struct std::char_traits<char> > __cdecl config::detail::enum_label<enum settings::esp::player::overlay::ammo_bar::position_type,(enum settings::esp::player::overlay::ammo_bar::position_type)0x27>(void)"
                ,0xeb,0xffffffffffffffff,">(void)",7);
  thunk_FUN_1805f7d20("class std::basic_string_view<char,struct std::char_traits<char> > __cdecl config::detail::enum_label<enum settings::esp::player::overlay::ammo_bar::position_type,(enum settings::esp::player::overlay::ammo_bar::position_type)0x27>(void)"
                      ,"(void)",0x2c);
  pcVar11 = "(enum settings::esp::player::overlay::ammo_bar::position_type)0x27>(void)";
  uVar9 = 0x42;
  do {
    if (*pcVar11 != ' ') break;
    pcVar11 = pcVar11 + 1;
    uVar9 = uVar9 - 1;
  } while (uVar9 != 0);
  if (((uVar9 == 0) ||
      (pcVar4 = (char *)thunk_FUN_1805f7e70(pcVar11,pcVar11 + uVar9,0x28), pcVar4 == pcVar11 + uVar9
      )) || ((longlong)pcVar4 - (longlong)pcVar11 == -1)) {
    lVar5 = FUN_180114410(pcVar11,uVar9,0xffffffffffffffff,&DAT_1806c1090,2);
    uVar12 = uVar9;
    if (lVar5 != -1) {
      uVar10 = lVar5 + 2;
      if (uVar9 < uVar10) goto LAB_1801046b2;
      pcVar11 = pcVar11 + uVar10;
      uVar12 = 0xffffffffffffffff;
      if (uVar9 - uVar10 != 0xffffffffffffffff) {
        uVar12 = uVar9 - uVar10;
      }
    }
    local_218 = pcVar11;
    local_210 = uVar12;
  }
  else {
    local_218 = (char *)0x0;
    local_210 = 0;
  }
  FUN_180114410("class std::basic_string_view<char,struct std::char_traits<char> > __cdecl config::detail::enum_label<enum settings::esp::player::overlay::ammo_bar::position_type,(enum settings::esp::player::overlay::ammo_bar::position_type)0x28>(void)"
                ,0xeb,0xffffffffffffffff,">(void)",7);
  thunk_FUN_1805f7d20("class std::basic_string_view<char,struct std::char_traits<char> > __cdecl config::detail::enum_label<enum settings::esp::player::overlay::ammo_bar::position_type,(enum settings::esp::player::overlay::ammo_bar::position_type)0x28>(void)"
                      ,"(void)",0x2c);
  pcVar11 = "(enum settings::esp::player::overlay::ammo_bar::position_type)0x28>(void)";
  uVar9 = 0x42;
  do {
    if (*pcVar11 != ' ') break;
    pcVar11 = pcVar11 + 1;
    uVar9 = uVar9 - 1;
  } while (uVar9 != 0);
  if (((uVar9 == 0) ||
      (pcVar4 = (char *)thunk_FUN_1805f7e70(pcVar11,pcVar11 + uVar9,0x28), pcVar4 == pcVar11 + uVar9
      )) || ((longlong)pcVar4 - (longlong)pcVar11 == -1)) {
    lVar5 = FUN_180114410(pcVar11,uVar9,0xffffffffffffffff,&DAT_1806c1090,2);
    uVar12 = uVar9;
    if (lVar5 != -1) {
      uVar10 = lVar5 + 2;
      if (uVar9 < uVar10) goto LAB_1801046b2;
      pcVar11 = pcVar11 + uVar10;
      uVar12 = 0xffffffffffffffff;
      if (uVar9 - uVar10 != 0xffffffffffffffff) {
        uVar12 = uVar9 - uVar10;
      }
    }
    local_208 = pcVar11;
    local_200 = uVar12;
  }
  else {
    local_208 = (char *)0x0;
    local_200 = 0;
  }
  FUN_180114410("class std::basic_string_view<char,struct std::char_traits<char> > __cdecl config::detail::enum_label<enum settings::esp::player::overlay::ammo_bar::position_type,(enum settings::esp::player::overlay::ammo_bar::position_type)0x29>(void)"
                ,0xeb,0xffffffffffffffff,">(void)",7);
  thunk_FUN_1805f7d20("class std::basic_string_view<char,struct std::char_traits<char> > __cdecl config::detail::enum_label<enum settings::esp::player::overlay::ammo_bar::position_type,(enum settings::esp::player::overlay::ammo_bar::position_type)0x29>(void)"
                      ,"(void)",0x2c);
  pcVar11 = "(enum settings::esp::player::overlay::ammo_bar::position_type)0x29>(void)";
  uVar9 = 0x42;
  do {
    if (*pcVar11 != ' ') break;
    pcVar11 = pcVar11 + 1;
    uVar9 = uVar9 - 1;
  } while (uVar9 != 0);
  if (((uVar9 == 0) ||
      (pcVar4 = (char *)thunk_FUN_1805f7e70(pcVar11,pcVar11 + uVar9,0x28), pcVar4 == pcVar11 + uVar9
      )) || ((longlong)pcVar4 - (longlong)pcVar11 == -1)) {
    lVar5 = FUN_180114410(pcVar11,uVar9,0xffffffffffffffff,&DAT_1806c1090,2);
    uVar12 = uVar9;
    if (lVar5 != -1) {
      uVar10 = lVar5 + 2;
      if (uVar9 < uVar10) goto LAB_1801046b2;
      pcVar11 = pcVar11 + uVar10;
      uVar12 = 0xffffffffffffffff;
      if (uVar9 - uVar10 != 0xffffffffffffffff) {
        uVar12 = uVar9 - uVar10;
      }
    }
    local_1f8 = pcVar11;
    local_1f0 = uVar12;
  }
  else {
    local_1f8 = (char *)0x0;
    local_1f0 = 0;
  }
  FUN_180114410("class std::basic_string_view<char,struct std::char_traits<char> > __cdecl config::detail::enum_label<enum settings::esp::player::overlay::ammo_bar::position_type,(enum settings::esp::player::overlay::ammo_bar::position_type)0x2a>(void)"
                ,0xeb,0xffffffffffffffff,">(void)",7);
  thunk_FUN_1805f7d20("class std::basic_string_view<char,struct std::char_traits<char> > __cdecl config::detail::enum_label<enum settings::esp::player::overlay::ammo_bar::position_type,(enum settings::esp::player::overlay::ammo_bar::position_type)0x2a>(void)"
                      ,"(void)",0x2c);
  pcVar11 = "(enum settings::esp::player::overlay::ammo_bar::position_type)0x2a>(void)";
  uVar9 = 0x42;
  do {
    if (*pcVar11 != ' ') break;
    pcVar11 = pcVar11 + 1;
    uVar9 = uVar9 - 1;
  } while (uVar9 != 0);
  if (((uVar9 == 0) ||
      (pcVar4 = (char *)thunk_FUN_1805f7e70(pcVar11,pcVar11 + uVar9,0x28), pcVar4 == pcVar11 + uVar9
      )) || ((longlong)pcVar4 - (longlong)pcVar11 == -1)) {
    lVar5 = FUN_180114410(pcVar11,uVar9,0xffffffffffffffff,&DAT_1806c1090,2);
    uVar12 = uVar9;
    if (lVar5 != -1) {
      uVar10 = lVar5 + 2;
      if (uVar9 < uVar10) goto LAB_1801046b2;
      pcVar11 = pcVar11 + uVar10;
      uVar12 = 0xffffffffffffffff;
      if (uVar9 - uVar10 != 0xffffffffffffffff) {
        uVar12 = uVar9 - uVar10;
      }
    }
    local_1e8 = pcVar11;
    local_1e0 = uVar12;
  }
  else {
    local_1e8 = (char *)0x0;
    local_1e0 = 0;
  }
  FUN_180114410("class std::basic_string_view<char,struct std::char_traits<char> > __cdecl config::detail::enum_label<enum settings::esp::player::overlay::ammo_bar::position_type,(enum settings::esp::player::overlay::ammo_bar::position_type)0x2b>(void)"
                ,0xeb,0xffffffffffffffff,">(void)",7);
  thunk_FUN_1805f7d20("class std::basic_string_view<char,struct std::char_traits<char> > __cdecl config::detail::enum_label<enum settings::esp::player::overlay::ammo_bar::position_type,(enum settings::esp::player::overlay::ammo_bar::position_type)0x2b>(void)"
                      ,"(void)",0x2c);
  pcVar11 = "(enum settings::esp::player::overlay::ammo_bar::position_type)0x2b>(void)";
  uVar9 = 0x42;
  do {
    if (*pcVar11 != ' ') break;
    pcVar11 = pcVar11 + 1;
    uVar9 = uVar9 - 1;
  } while (uVar9 != 0);
  if (((uVar9 == 0) ||
      (pcVar4 = (char *)thunk_FUN_1805f7e70(pcVar11,pcVar11 + uVar9,0x28), pcVar4 == pcVar11 + uVar9
      )) || ((longlong)pcVar4 - (longlong)pcVar11 == -1)) {
    lVar5 = FUN_180114410(pcVar11,uVar9,0xffffffffffffffff,&DAT_1806c1090,2);
    uVar12 = uVar9;
    if (lVar5 != -1) {
      uVar10 = lVar5 + 2;
      if (uVar9 < uVar10) goto LAB_1801046b2;
      pcVar11 = pcVar11 + uVar10;
      uVar12 = 0xffffffffffffffff;
      if (uVar9 - uVar10 != 0xffffffffffffffff) {
        uVar12 = uVar9 - uVar10;
      }
    }
    local_1d8 = pcVar11;
    local_1d0 = uVar12;
  }
  else {
    local_1d8 = (char *)0x0;
    local_1d0 = 0;
  }
  FUN_180114410("class std::basic_string_view<char,struct std::char_traits<char> > __cdecl config::detail::enum_label<enum settings::esp::player::overlay::ammo_bar::position_type,(enum settings::esp::player::overlay::ammo_bar::position_type)0x2c>(void)"
                ,0xeb,0xffffffffffffffff,">(void)",7);
  thunk_FUN_1805f7d20("class std::basic_string_view<char,struct std::char_traits<char> > __cdecl config::detail::enum_label<enum settings::esp::player::overlay::ammo_bar::position_type,(enum settings::esp::player::overlay::ammo_bar::position_type)0x2c>(void)"
                      ,"(void)",0x2c);
  pcVar11 = "(enum settings::esp::player::overlay::ammo_bar::position_type)0x2c>(void)";
  uVar9 = 0x42;
  do {
    if (*pcVar11 != ' ') break;
    pcVar11 = pcVar11 + 1;
    uVar9 = uVar9 - 1;
  } while (uVar9 != 0);
  if (((uVar9 == 0) ||
      (pcVar4 = (char *)thunk_FUN_1805f7e70(pcVar11,pcVar11 + uVar9,0x28), pcVar4 == pcVar11 + uVar9
      )) || ((longlong)pcVar4 - (longlong)pcVar11 == -1)) {
    lVar5 = FUN_180114410(pcVar11,uVar9,0xffffffffffffffff,&DAT_1806c1090,2);
    uVar12 = uVar9;
    if (lVar5 != -1) {
      uVar10 = lVar5 + 2;
      if (uVar9 < uVar10) goto LAB_1801046b2;
      pcVar11 = pcVar11 + uVar10;
      uVar12 = 0xffffffffffffffff;
      if (uVar9 - uVar10 != 0xffffffffffffffff) {
        uVar12 = uVar9 - uVar10;
      }
    }
    local_1c8 = pcVar11;
    local_1c0 = uVar12;
  }
  else {
    local_1c8 = (char *)0x0;
    local_1c0 = 0;
  }
  FUN_180114410("class std::basic_string_view<char,struct std::char_traits<char> > __cdecl config::detail::enum_label<enum settings::esp::player::overlay::ammo_bar::position_type,(enum settings::esp::player::overlay::ammo_bar::position_type)0x2d>(void)"
                ,0xeb,0xffffffffffffffff,">(void)",7);
  thunk_FUN_1805f7d20("class std::basic_string_view<char,struct std::char_traits<char> > __cdecl config::detail::enum_label<enum settings::esp::player::overlay::ammo_bar::position_type,(enum settings::esp::player::overlay::ammo_bar::position_type)0x2d>(void)"
                      ,"(void)",0x2c);
  pcVar11 = "(enum settings::esp::player::overlay::ammo_bar::position_type)0x2d>(void)";
  uVar9 = 0x42;
  do {
    if (*pcVar11 != ' ') break;
    pcVar11 = pcVar11 + 1;
    uVar9 = uVar9 - 1;
  } while (uVar9 != 0);
  if (((uVar9 == 0) ||
      (pcVar4 = (char *)thunk_FUN_1805f7e70(pcVar11,pcVar11 + uVar9,0x28), pcVar4 == pcVar11 + uVar9
      )) || ((longlong)pcVar4 - (longlong)pcVar11 == -1)) {
    lVar5 = FUN_180114410(pcVar11,uVar9,0xffffffffffffffff,&DAT_1806c1090,2);
    uVar12 = uVar9;
    if (lVar5 != -1) {
      uVar10 = lVar5 + 2;
      if (uVar9 < uVar10) goto LAB_1801046b2;
      pcVar11 = pcVar11 + uVar10;
      uVar12 = 0xffffffffffffffff;
      if (uVar9 - uVar10 != 0xffffffffffffffff) {
        uVar12 = uVar9 - uVar10;
      }
    }
    local_1b8 = pcVar11;
    local_1b0 = uVar12;
  }
  else {
    local_1b8 = (char *)0x0;
    local_1b0 = 0;
  }
  FUN_180114410("class std::basic_string_view<char,struct std::char_traits<char> > __cdecl config::detail::enum_label<enum settings::esp::player::overlay::ammo_bar::position_type,(enum settings::esp::player::overlay::ammo_bar::position_type)0x2e>(void)"
                ,0xeb,0xffffffffffffffff,">(void)",7);
  thunk_FUN_1805f7d20("class std::basic_string_view<char,struct std::char_traits<char> > __cdecl config::detail::enum_label<enum settings::esp::player::overlay::ammo_bar::position_type,(enum settings::esp::player::overlay::ammo_bar::position_type)0x2e>(void)"
                      ,"(void)",0x2c);
  pcVar11 = "(enum settings::esp::player::overlay::ammo_bar::position_type)0x2e>(void)";
  uVar9 = 0x42;
  do {
    if (*pcVar11 != ' ') break;
    pcVar11 = pcVar11 + 1;
    uVar9 = uVar9 - 1;
  } while (uVar9 != 0);
  if (((uVar9 == 0) ||
      (pcVar4 = (char *)thunk_FUN_1805f7e70(pcVar11,pcVar11 + uVar9,0x28), pcVar4 == pcVar11 + uVar9
      )) || ((longlong)pcVar4 - (longlong)pcVar11 == -1)) {
    lVar5 = FUN_180114410(pcVar11,uVar9,0xffffffffffffffff,&DAT_1806c1090,2);
    uVar12 = uVar9;
    if (lVar5 != -1) {
      uVar10 = lVar5 + 2;
      if (uVar9 < uVar10) goto LAB_1801046b2;
      pcVar11 = pcVar11 + uVar10;
      uVar12 = 0xffffffffffffffff;
      if (uVar9 - uVar10 != 0xffffffffffffffff) {
        uVar12 = uVar9 - uVar10;
      }
    }
    local_1a8 = pcVar11;
    local_1a0 = uVar12;
  }
  else {
    local_1a8 = (char *)0x0;
    local_1a0 = 0;
  }
  FUN_180114410("class std::basic_string_view<char,struct std::char_traits<char> > __cdecl config::detail::enum_label<enum settings::esp::player::overlay::ammo_bar::position_type,(enum settings::esp::player::overlay::ammo_bar::position_type)0x2f>(void)"
                ,0xeb,0xffffffffffffffff,">(void)",7);
  thunk_FUN_1805f7d20("class std::basic_string_view<char,struct std::char_traits<char> > __cdecl config::detail::enum_label<enum settings::esp::player::overlay::ammo_bar::position_type,(enum settings::esp::player::overlay::ammo_bar::position_type)0x2f>(void)"
                      ,"(void)",0x2c);
  pcVar11 = "(enum settings::esp::player::overlay::ammo_bar::position_type)0x2f>(void)";
  uVar9 = 0x42;
  do {
    if (*pcVar11 != ' ') break;
    pcVar11 = pcVar11 + 1;
    uVar9 = uVar9 - 1;
  } while (uVar9 != 0);
  if (((uVar9 == 0) ||
      (pcVar4 = (char *)thunk_FUN_1805f7e70(pcVar11,pcVar11 + uVar9,0x28), pcVar4 == pcVar11 + uVar9
      )) || ((longlong)pcVar4 - (longlong)pcVar11 == -1)) {
    lVar5 = FUN_180114410(pcVar11,uVar9,0xffffffffffffffff,&DAT_1806c1090,2);
    uVar12 = uVar9;
    if (lVar5 != -1) {
      uVar10 = lVar5 + 2;
      if (uVar9 < uVar10) goto LAB_1801046b2;
      pcVar11 = pcVar11 + uVar10;
      uVar12 = 0xffffffffffffffff;
      if (uVar9 - uVar10 != 0xffffffffffffffff) {
        uVar12 = uVar9 - uVar10;
      }
    }
    local_198 = pcVar11;
    local_190 = uVar12;
  }
  else {
    local_198 = (char *)0x0;
    local_190 = 0;
  }
  FUN_180114410("class std::basic_string_view<char,struct std::char_traits<char> > __cdecl config::detail::enum_label<enum settings::esp::player::overlay::ammo_bar::position_type,(enum settings::esp::player::overlay::ammo_bar::position_type)0x30>(void)"
                ,0xeb,0xffffffffffffffff,">(void)",7);
  thunk_FUN_1805f7d20("class std::basic_string_view<char,struct std::char_traits<char> > __cdecl config::detail::enum_label<enum settings::esp::player::overlay::ammo_bar::position_type,(enum settings::esp::player::overlay::ammo_bar::position_type)0x30>(void)"
                      ,"(void)",0x2c);
  pcVar11 = "(enum settings::esp::player::overlay::ammo_bar::position_type)0x30>(void)";
  uVar9 = 0x42;
  do {
    if (*pcVar11 != ' ') break;
    pcVar11 = pcVar11 + 1;
    uVar9 = uVar9 - 1;
  } while (uVar9 != 0);
  if (((uVar9 == 0) ||
      (pcVar4 = (char *)thunk_FUN_1805f7e70(pcVar11,pcVar11 + uVar9,0x28), pcVar4 == pcVar11 + uVar9
      )) || ((longlong)pcVar4 - (longlong)pcVar11 == -1)) {
    lVar5 = FUN_180114410(pcVar11,uVar9,0xffffffffffffffff,&DAT_1806c1090,2);
    uVar12 = uVar9;
    if (lVar5 != -1) {
      uVar10 = lVar5 + 2;
      if (uVar9 < uVar10) goto LAB_1801046b2;
      pcVar11 = pcVar11 + uVar10;
      uVar12 = 0xffffffffffffffff;
      if (uVar9 - uVar10 != 0xffffffffffffffff) {
        uVar12 = uVar9 - uVar10;
      }
    }
    local_188 = pcVar11;
    local_180 = uVar12;
  }
  else {
    local_188 = (char *)0x0;
    local_180 = 0;
  }
  FUN_180114410("class std::basic_string_view<char,struct std::char_traits<char> > __cdecl config::detail::enum_label<enum settings::esp::player::overlay::ammo_bar::position_type,(enum settings::esp::player::overlay::ammo_bar::position_type)0x31>(void)"
                ,0xeb,0xffffffffffffffff,">(void)",7);
  thunk_FUN_1805f7d20("class std::basic_string_view<char,struct std::char_traits<char> > __cdecl config::detail::enum_label<enum settings::esp::player::overlay::ammo_bar::position_type,(enum settings::esp::player::overlay::ammo_bar::position_type)0x31>(void)"
                      ,"(void)",0x2c);
  pcVar11 = "(enum settings::esp::player::overlay::ammo_bar::position_type)0x31>(void)";
  uVar9 = 0x42;
  do {
    if (*pcVar11 != ' ') break;
    pcVar11 = pcVar11 + 1;
    uVar9 = uVar9 - 1;
  } while (uVar9 != 0);
  if (((uVar9 == 0) ||
      (pcVar4 = (char *)thunk_FUN_1805f7e70(pcVar11,pcVar11 + uVar9,0x28), pcVar4 == pcVar11 + uVar9
      )) || ((longlong)pcVar4 - (longlong)pcVar11 == -1)) {
    lVar5 = FUN_180114410(pcVar11,uVar9,0xffffffffffffffff,&DAT_1806c1090,2);
    local_170 = uVar9;
    if (lVar5 != -1) {
      uVar12 = lVar5 + 2;
      if (uVar9 < uVar12) {
LAB_1801046b2:
                    /* WARNING: Subroutine does not return */
        FUN_18015ac40();
      }
      pcVar11 = pcVar11 + uVar12;
      local_170 = 0xffffffffffffffff;
      if (uVar9 - uVar12 != 0xffffffffffffffff) {
        local_170 = uVar9 - uVar12;
      }
    }
    local_178 = pcVar11;
  }
  else {
    local_178 = (char *)0x0;
    local_170 = 0;
  }
  local_498 = 
  "class std::basic_string_view<char,struct std::char_traits<char> > __cdecl config::detail::enum_label<enum settings::esp::player::overlay::ammo_bar::position_type,(enum settings::esp::player::overlay::ammo_bar::position_type)0x32>(void)"
  ;
  puStack_490 = (undefined8 *)0xeb;
  FUN_180114410("class std::basic_string_view<char,struct std::char_traits<char> > __cdecl config::detail::enum_label<enum settings::esp::player::overlay::ammo_bar::position_type,(enum settings::esp::player::overlay::ammo_bar::position_type)0x32>(void)"
                ,0xeb,0xffffffffffffffff,">(void)",7);
  thunk_FUN_1805f7d20("class std::basic_string_view<char,struct std::char_traits<char> > __cdecl config::detail::enum_label<enum settings::esp::player::overlay::ammo_bar::position_type,(enum settings::esp::player::overlay::ammo_bar::position_type)0x32>(void)"
                      ,"(void)",0x2c);
  FUN_18015aca0(&local_4b8,0x10);
  FUN_18015ac60(&local_498,&local_4b8,0xa2,0x42);
  if (lStack_4b0 != 0) {
    do {
      if (*local_4b8 != ' ') break;
      local_4b8 = local_4b8 + 1;
      lStack_4b0 = lStack_4b0 + -1;
    } while (lStack_4b0 != 0);
  }
  lVar5 = FUN_1800f57d0(&local_4b8,0x28,0);
  if (lVar5 == -1) {
    lVar5 = FUN_1801143d0(&local_4b8,&DAT_1806c1090,0xffffffffffffffff);
    if (lVar5 == -1) {
      local_78 = local_4b8;
      lStack_70 = lStack_4b0;
      ppcVar6 = &local_78;
    }
    else {
      ppcVar6 = (char **)FUN_18015ac60(&local_4b8,local_58,lVar5 + 2,0xffffffffffffffff);
    }
    local_168 = *ppcVar6;
    pcStack_160 = ppcVar6[1];
  }
  else {
    local_168 = (char *)0x0;
    pcStack_160 = (char *)0x0;
  }
  FUN_180119700(local_158);
  FUN_180119830(local_148);
  FUN_180119960(local_138);
  FUN_180119a90(local_128);
  FUN_180119bc0(local_118);
  FUN_180119cf0(local_108);
  FUN_180119e20(local_f8);
  FUN_180119f50(local_e8);
  FUN_18011a080(local_d8);
  FUN_18011a1b0(local_c8);
  FUN_18011a2e0(local_b8);
  FUN_18011a410(local_a8);
  FUN_18011a540(local_98);
  FUN_180113f10(param_1);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_4a8 = 1;
  ppuVar8 = local_488;
  do {
    pcVar11 = (char *)*ppuVar8;
    puVar13 = ppuVar8[1];
    local_68 = pcVar11;
    puStack_60 = puVar13;
    if (ppuVar8[1] == (undefined8 *)0x0) {
      return param_1;
    }
    piVar2 = (int *)*ppuVar8;
    if (ppuVar8[1] == (undefined8 *)0x5) {
      if ((*piVar2 == 0x6e756f63) && ((char)piVar2[1] == 't')) {
        return param_1;
      }
      if (((ppuVar8[1] == (undefined8 *)0x5) && (*piVar2 == 0x6e756f43)) && ((char)piVar2[1] == 't')
         ) {
        return param_1;
      }
    }
    puVar7 = (undefined8 *)FUN_18015b110(local_48,"COUNT");
    local_4b8 = (char *)*puVar7;
    lStack_4b0 = puVar7[1];
    local_498 = pcVar11;
    puStack_490 = puVar13;
    cVar3 = FUN_18015a610(&local_498,&local_4b8);
    if (cVar3 != '\0') {
      return param_1;
    }
    FUN_1801159f0(param_1,&local_68);
    ppuVar8 = ppuVar8 + 2;
    if (ppuVar8 == local_88) {
      return param_1;
    }
  } while( true );
}



