// FUN_18030e6e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18030e6e0 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18030e6e0(undefined8 param_1,longlong param_2)

{
  undefined1 auVar1 [32];
  undefined4 uVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  longlong lVar8;
  undefined8 *puVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  int iVar13;
  int iVar14;
  undefined8 uVar15;
  byte *pbVar16;
  int *piVar17;
  longlong *plVar18;
  undefined1 (*pauVar19) [32];
  float *pfVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  undefined4 *puVar28;
  undefined1 (*pauVar29) [16];
  byte *pbVar30;
  float *pfVar31;
  int *piVar32;
  undefined8 *puVar33;
  ulonglong uVar34;
  longlong lVar35;
  byte bVar36;
  ulonglong uVar37;
  uint uVar38;
  char *pcVar39;
  undefined1 *puVar40;
  uint uVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  float fVar49;
  undefined1 auVar50 [64];
  undefined4 uVar51;
  undefined1 auVar52 [64];
  undefined1 auVar53 [64];
  undefined1 auVar54 [64];
  float fVar55;
  float fVar56;
  undefined1 auVar57 [64];
  float fVar58;
  undefined1 auVar59 [16];
  undefined1 auVar60 [64];
  float fVar61;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [64];
  undefined1 auStack_2af8 [32];
  char **local_2ad8;
  undefined8 **local_2ad0;
  undefined ***local_2ac8;
  char **local_2ac0;
  undefined ***local_2ab8;
  double *local_2ab0;
  double *local_2aa8;
  double *local_2aa0;
  double *local_2a98;
  char **local_2a90;
  undefined ***local_2a88;
  double *local_2a80;
  double *local_2a78;
  char **local_2a70;
  double *local_2a68;
  double *local_2a60;
  double *local_2a58;
  undefined8 *local_2a50;
  undefined8 *local_2a48;
  double *local_2a40;
  char **local_2a38;
  undefined1 *local_2a30;
  int *local_2a28;
  undefined1 *local_2a20;
  undefined1 *local_2a18;
  int *local_2a10;
  int *local_2a08;
  undefined1 *local_2a00;
  undefined1 *local_29f8;
  undefined1 *local_29f0;
  float *local_29e8;
  double *local_29e0;
  double *local_29d8;
  double *local_29d0;
  double *local_29c8;
  double *local_29c0;
  double *local_29b8;
  longlong *local_29b0;
  undefined1 *local_29a8;
  undefined1 **local_29a0;
  undefined8 *local_2998;
  double *local_2990;
  undefined1 *local_2988;
  undefined1 *local_2980;
  undefined8 local_2978;
  longlong lStack_2970;
  char *local_2968;
  double *pdStack_2960;
  char local_2958;
  byte local_2957;
  undefined1 local_2956;
  undefined1 local_2955;
  char local_2954;
  char local_2953;
  char local_2952;
  float local_2950;
  undefined1 local_294c;
  undefined1 local_294b;
  undefined1 local_294a;
  undefined1 local_2949;
  undefined1 local_2948 [16];
  undefined8 local_2938;
  undefined8 uStack_2930;
  ulonglong uStack_2928;
  undefined4 uStack_2920;
  undefined4 uStack_291c;
  undefined8 uStack_2918;
  undefined4 uStack_2910;
  undefined4 uStack_290c;
  undefined4 uStack_2908;
  undefined4 uStack_2904;
  undefined4 uStack_2900;
  undefined4 uStack_28fc;
  undefined8 local_28f8;
  uint uStack_28f0;
  undefined4 uStack_28ec;
  undefined4 uStack_28e8;
  undefined4 uStack_28e4;
  undefined4 uStack_28e0;
  undefined4 uStack_28dc;
  ulonglong local_28d8;
  undefined1 auStack_28d0 [16];
  ulonglong uStack_28c0;
  undefined8 local_28b8;
  undefined8 uStack_28b0;
  uint uStack_28a8;
  undefined4 uStack_28a4;
  undefined8 uStack_28a0;
  undefined4 local_2898;
  undefined4 uStack_2894;
  ulonglong uStack_2890;
  undefined1 *local_2888;
  undefined8 uStack_2880;
  undefined8 local_2878;
  undefined8 uStack_2870;
  undefined8 local_2868;
  undefined8 uStack_2860;
  undefined8 local_2858;
  undefined8 uStack_2850;
  undefined8 local_2848;
  undefined8 uStack_2840;
  undefined8 local_2838;
  undefined8 uStack_2830;
  undefined8 local_2828;
  undefined8 uStack_2820;
  undefined8 local_2818;
  undefined8 uStack_2810;
  undefined8 local_2808;
  undefined8 uStack_2800;
  undefined8 local_27f8;
  undefined8 uStack_27f0;
  undefined8 local_27e8;
  undefined8 uStack_27e0;
  undefined8 local_27d8;
  undefined8 uStack_27d0;
  undefined8 local_27c8;
  undefined8 uStack_27c0;
  undefined8 local_27b8;
  undefined8 uStack_27b0;
  undefined8 local_27a8;
  undefined8 uStack_27a0;
  undefined8 local_2798;
  undefined8 uStack_2790;
  undefined8 local_2788;
  undefined8 uStack_2780;
  undefined8 local_2778;
  undefined8 uStack_2770;
  undefined4 local_2768 [4];
  char *local_2758;
  double *pdStack_2750;
  char *pcStack_2748;
  undefined8 uStack_2740;
  ulonglong local_2738;
  undefined8 uStack_2730;
  undefined8 uStack_2728;
  undefined8 uStack_2720;
  undefined8 local_2718;
  undefined8 uStack_2710;
  undefined8 uStack_2708;
  undefined8 uStack_2700;
  undefined8 local_26f8;
  undefined8 uStack_26f0;
  float local_26e8;
  undefined4 local_26e4;
  float local_26e0;
  uint local_26dc;
  byte local_26d8 [8];
  undefined4 local_26d0;
  float local_26cc;
  float local_26c8 [3];
  int local_26bc [3];
  float local_26b0 [6];
  char local_2698 [256];
  undefined8 local_2598;
  undefined8 uStack_2590;
  undefined8 local_2588;
  undefined8 uStack_2580;
  undefined8 local_2578;
  undefined8 uStack_2570;
  undefined8 local_2568;
  undefined8 uStack_2560;
  undefined8 local_2558;
  undefined8 uStack_2550;
  undefined8 local_2548;
  undefined8 uStack_2540;
  undefined8 local_2538;
  undefined8 uStack_2530;
  undefined8 local_2528;
  undefined8 uStack_2520;
  undefined8 local_2518;
  undefined8 uStack_2510;
  undefined8 local_2508;
  undefined8 uStack_2500;
  undefined8 local_24f8;
  undefined8 uStack_24f0;
  undefined8 local_24e8;
  undefined8 uStack_24e0;
  undefined8 local_24d8;
  undefined8 uStack_24d0;
  undefined8 local_24c8;
  undefined8 uStack_24c0;
  undefined8 local_24b8;
  undefined8 uStack_24b0;
  undefined8 local_24a8;
  undefined8 uStack_24a0;
  char local_2498 [416];
  undefined8 local_22f8;
  undefined8 uStack_22f0;
  undefined8 local_22e8;
  undefined8 uStack_22e0;
  undefined8 local_22d8;
  undefined8 uStack_22d0;
  undefined8 local_22c8;
  undefined8 uStack_22c0;
  undefined8 local_22b8;
  undefined8 uStack_22b0;
  undefined8 local_22a8;
  undefined8 uStack_22a0;
  undefined8 local_2298;
  undefined8 uStack_2290;
  undefined8 local_2288;
  undefined8 uStack_2280;
  undefined8 local_2278;
  undefined8 uStack_2270;
  undefined8 local_2268;
  undefined8 uStack_2260;
  undefined8 local_2258;
  undefined8 uStack_2250;
  undefined8 local_2248;
  undefined8 uStack_2240;
  undefined8 local_2238;
  undefined8 uStack_2230;
  undefined8 local_2228;
  undefined8 uStack_2220;
  undefined8 local_2218;
  undefined8 uStack_2210;
  undefined8 local_2208;
  undefined8 uStack_2200;
  undefined8 local_21f8;
  undefined8 uStack_21f0;
  char local_21e8 [304];
  undefined8 local_20b8;
  undefined8 uStack_20b0;
  undefined8 local_20a8;
  undefined8 uStack_20a0;
  undefined8 local_2098;
  undefined8 uStack_2090;
  undefined8 local_2088;
  undefined8 uStack_2080;
  undefined8 local_2078;
  undefined8 uStack_2070;
  undefined8 local_2068;
  undefined8 uStack_2060;
  undefined8 local_2058;
  undefined8 uStack_2050;
  undefined8 local_2048;
  undefined8 uStack_2040;
  undefined8 local_2038;
  undefined8 uStack_2030;
  undefined8 local_2028;
  undefined8 uStack_2020;
  undefined8 local_2018;
  undefined8 uStack_2010;
  undefined8 local_2008;
  undefined8 uStack_2000;
  undefined8 local_1ff8;
  undefined8 uStack_1ff0;
  undefined8 local_1fe8;
  undefined8 uStack_1fe0;
  undefined8 local_1fd8;
  undefined8 uStack_1fd0;
  undefined8 local_1fc8;
  undefined8 uStack_1fc0;
  undefined8 local_1fb8;
  undefined8 uStack_1fb0;
  undefined8 local_1fa8;
  undefined8 uStack_1fa0;
  undefined8 local_1f98;
  undefined8 uStack_1f90;
  undefined8 local_1f88;
  undefined8 uStack_1f80;
  undefined8 local_1f78;
  undefined8 uStack_1f70;
  undefined8 local_1f68;
  undefined8 uStack_1f60;
  undefined8 local_1f58;
  undefined8 uStack_1f50;
  undefined8 local_1f48;
  undefined8 uStack_1f40;
  undefined8 local_1f38;
  undefined8 uStack_1f30;
  undefined8 local_1f28;
  undefined8 uStack_1f20;
  undefined8 local_1f18;
  undefined8 uStack_1f10;
  undefined8 local_1f08;
  undefined8 uStack_1f00;
  undefined8 local_1ef8;
  undefined8 uStack_1ef0;
  undefined8 local_1ee8;
  undefined8 uStack_1ee0;
  undefined8 local_1ed8;
  undefined8 uStack_1ed0;
  undefined8 local_1ec8;
  undefined8 uStack_1ec0;
  undefined8 local_1eb8;
  undefined8 uStack_1eb0;
  undefined8 local_1ea8;
  undefined8 uStack_1ea0;
  undefined8 local_1e98;
  undefined8 uStack_1e90;
  undefined8 local_1e88;
  undefined8 uStack_1e80;
  undefined8 local_1e78;
  undefined8 uStack_1e70;
  undefined8 local_1e68;
  undefined8 uStack_1e60;
  undefined8 local_1e58;
  undefined8 uStack_1e50;
  undefined8 local_1e48;
  undefined8 uStack_1e40;
  undefined8 local_1e38;
  undefined8 uStack_1e30;
  undefined8 local_1e28;
  undefined8 uStack_1e20;
  undefined8 local_1e18;
  undefined8 uStack_1e10;
  undefined8 local_1e08;
  undefined8 uStack_1e00;
  undefined8 local_1df8;
  undefined8 uStack_1df0;
  undefined8 local_1de8;
  undefined8 uStack_1de0;
  undefined **local_1dd8;
  double local_1dd0;
  double local_1dc8;
  char *local_1dc0;
  undefined8 *local_1db8;
  undefined **local_1db0;
  char *local_1da8;
  undefined **local_1da0;
  char *local_1d98;
  undefined **local_1d90;
  double local_1d88;
  double local_1d80;
  double local_1d78;
  char *local_1d70;
  undefined **local_1d68;
  undefined **local_1d60;
  double local_1d58;
  double local_1d50;
  double local_1d48;
  double local_1d40;
  char *local_1d38;
  undefined **local_1d30;
  char *local_1d28;
  undefined8 *local_1d20;
  char *local_1d18;
  char *local_1d10;
  double local_1d08;
  double local_1d00;
  double local_1cf8;
  undefined **local_1cf0;
  char *local_1ce8;
  double local_1ce0;
  double local_1cd8;
  double local_1cd0;
  double local_1cc8;
  undefined **local_1cc0;
  char *local_1cb8;
  undefined **local_1cb0;
  undefined8 *local_1ca8;
  double local_1ca0;
  double local_1c98;
  double local_1c90;
  undefined1 *local_1c88;
  double local_1c80;
  double local_1c78;
  double local_1c70;
  double local_1c68;
  double local_1c60;
  double local_1c58;
  double local_1c50;
  char *local_1c48;
  double local_1c40;
  double local_1c38;
  undefined **local_1c30;
  char *local_1c28;
  double local_1c20;
  double local_1c18;
  double local_1c10;
  double local_1c08;
  undefined8 local_1c00;
  float local_1bf8;
  char *local_1bf0;
  undefined8 *local_1be8;
  char *local_1be0;
  undefined8 local_1bd8;
  double local_1bd0;
  double local_1bc8;
  undefined **local_1bc0;
  undefined **local_1bb8;
  char *local_1bb0;
  double local_1ba8 [29];
  double *pdStack_1ac0;
  undefined8 local_1ab8;
  double *pdStack_1ab0;
  undefined8 local_1aa8;
  double *pdStack_1aa0;
  char *local_1a98;
  double *pdStack_1a90;
  undefined8 local_1a88;
  float local_1a80;
  undefined8 local_1a7c;
  float local_1a74;
  undefined8 local_1a70;
  float local_1a68;
  undefined1 local_1a60 [16];
  undefined1 local_1a50 [16];
  undefined1 local_1a40 [16];
  undefined1 local_1a30 [16];
  undefined1 local_1a20 [16];
  undefined1 local_1a10 [32];
  undefined1 local_19f0 [32];
  undefined1 local_19d0 [32];
  undefined1 local_19b0 [32];
  undefined1 local_1990 [16];
  undefined1 local_1980 [16];
  undefined1 local_1970 [16];
  undefined1 local_1960 [16];
  undefined1 local_1950 [24];
  undefined1 local_1938 [64];
  undefined1 local_18f8 [48];
  undefined1 local_18c8 [48];
  double local_1898 [14];
  undefined1 local_1828 [56];
  undefined1 local_17f0 [280];
  undefined1 local_16d8 [368];
  undefined1 local_1568 [1656];
  longlong local_ef0;
  float local_ee8 [2];
  undefined8 *local_ee0;
  float local_ed8;
  undefined8 uStack_ed4;
  undefined8 uStack_ecc;
  float fStack_ec4;
  float fStack_ec0;
  float fStack_ebc;
  undefined8 local_eb8;
  undefined8 uStack_eb0;
  float local_ea8;
  int local_ea0 [2];
  char *local_e98 [2];
  undefined1 local_e88 [16];
  undefined8 local_e78;
  longlong lStack_e70;
  undefined8 uStack_e68;
  undefined8 uStack_e60;
  undefined8 local_e58;
  ulonglong uStack_e50;
  longlong local_e48;
  longlong *local_e40;
  undefined8 local_e38;
  undefined8 uStack_e30;
  undefined8 uStack_e28;
  undefined8 uStack_e20;
  undefined8 local_e18;
  float fStack_e10;
  float fStack_e0c;
  float fStack_e08;
  float fStack_e04;
  float fStack_e00;
  float fStack_dfc;
  float local_df8;
  undefined8 local_df4;
  undefined2 local_dec;
  char *local_de8;
  longlong local_de0;
  undefined **local_dd8 [2];
  char local_dc8 [4];
  int local_dc4;
  char local_dc0 [4];
  float local_dbc;
  float local_db8;
  undefined4 local_db4;
  undefined1 local_db0;
  undefined **local_da8 [4];
  undefined8 *local_d88 [2];
  float local_d78;
  float fStack_d74;
  float fStack_d70;
  undefined4 uStack_d6c;
  undefined4 uStack_d68;
  undefined4 uStack_d64;
  undefined4 uStack_d60;
  undefined4 uStack_d5c;
  undefined4 uStack_d58;
  undefined4 uStack_d54;
  undefined4 uStack_d50;
  undefined4 uStack_d4c;
  undefined4 uStack_d48;
  undefined4 uStack_d44;
  undefined4 uStack_d40;
  undefined4 uStack_d3c;
  undefined4 local_d38;
  float fStack_d34;
  char cStack_d30;
  undefined1 uStack_d2f;
  undefined2 uStack_d2e;
  undefined4 uStack_d2c;
  undefined4 uStack_d28;
  undefined4 uStack_d24;
  undefined4 uStack_d20;
  undefined4 uStack_d1c;
  undefined4 uStack_d18;
  undefined4 uStack_d14;
  undefined4 uStack_d10;
  undefined4 uStack_d0c;
  undefined8 local_d08;
  longlong lStack_d00;
  undefined8 uStack_cf8;
  undefined8 uStack_cf0;
  undefined8 local_ce8;
  undefined8 uStack_ce0;
  uint local_cd8;
  float afStack_cd4 [6];
  int aiStack_cbc [5];
  double local_ca8 [33];
  int local_ba0;
  int local_b9c;
  int local_b98;
  undefined1 local_b94 [4];
  int local_b90;
  undefined1 local_b8c [8];
  int local_b84;
  int local_b80;
  undefined1 local_b7c [4];
  undefined1 local_b78 [4];
  undefined1 local_b74 [4];
  int local_b70;
  int local_b6c;
  char local_664;
  char local_663;
  char local_662;
  char local_661;
  char local_658 [8];
  undefined1 *local_650;
  bool local_648;
  bool local_647;
  char local_646 [6];
  undefined8 *local_640;
  char local_638;
  byte local_637 [3];
  float local_634;
  float local_630;
  int local_62c;
  float local_628;
  float local_624;
  int local_620 [2];
  undefined1 local_618 [4];
  undefined8 local_614;
  undefined8 uStack_60c;
  float local_604;
  float local_600;
  undefined1 local_5fc [8];
  float local_5f4;
  char local_5f0 [4];
  float local_5ec;
  undefined4 local_5e8;
  undefined4 local_5e4;
  undefined4 local_5e0;
  undefined4 local_5dc;
  undefined4 local_5d8;
  undefined4 local_5d4;
  undefined4 local_5d0 [2];
  undefined8 local_5c8;
  float local_5c0;
  uint local_5b8;
  float local_5b4;
  undefined4 local_5b0 [2];
  char local_5a8 [4];
  float local_5a4;
  float local_5a0;
  float local_59c;
  float local_598;
  undefined8 local_590;
  float local_588;
  int local_580;
  float local_57c;
  undefined8 **local_578;
  longlong *local_570;
  undefined1 *local_568;
  char *local_560;
  undefined1 **local_558;
  undefined2 local_550;
  char local_54e;
  undefined1 local_54d;
  float local_54c;
  float local_548;
  undefined4 local_544;
  float local_540;
  float local_53c;
  float local_538;
  undefined8 local_530;
  undefined1 auStack_528 [8];
  undefined1 auStack_520 [7];
  undefined1 auStack_519 [9];
  undefined8 local_510;
  undefined8 uStack_508;
  float local_500;
  float local_4fc;
  float local_4f8;
  undefined1 *local_4f0;
  undefined8 **local_4e8;
  int *local_4e0;
  undefined1 local_4d8 [4];
  undefined4 local_4d4;
  undefined4 local_4d0;
  undefined4 local_4cc;
  char local_4c8;
  float local_4c4;
  undefined1 local_4c0 [32];
  undefined8 local_4a0;
  undefined8 uStack_498;
  undefined8 local_490;
  float local_488;
  char *pcStack_484;
  undefined8 uStack_47c;
  float fStack_474;
  float fStack_470;
  float fStack_46c;
  undefined8 local_468;
  undefined8 uStack_460;
  float local_458;
  bool **local_450;
  float *local_448;
  undefined1 *local_440;
  float *local_438;
  undefined4 *local_430;
  bool *local_428;
  undefined1 *local_420;
  longlong **local_418;
  longlong *local_410;
  undefined8 *local_408;
  longlong *local_400;
  undefined8 **local_3f8;
  undefined8 *local_3f0;
  longlong *local_3e8;
  undefined1 *local_3e0;
  undefined1 *local_3d8;
  undefined1 **local_3d0;
  undefined1 **local_3c8;
  undefined8 **local_3c0;
  int *local_3b8;
  undefined1 **local_3b0;
  bool *local_3a8;
  undefined1 *local_3a0;
  float *local_398;
  undefined1 *local_390;
  undefined8 **local_388;
  undefined1 *local_380;
  bool *local_378;
  bool **local_370;
  float *local_368;
  longlong *local_360;
  undefined8 **local_358;
  undefined8 *local_350;
  float *local_348;
  undefined8 *local_340;
  undefined1 *local_338;
  undefined4 *local_330;
  float *local_328;
  bool *local_320;
  bool ***local_318;
  undefined1 *local_310;
  undefined1 *local_308;
  undefined1 *local_300;
  longlong *local_2f8;
  undefined8 **local_2f0;
  undefined8 *local_2e8;
  longlong **local_2e0;
  undefined8 *local_2d8;
  float *local_2d0;
  bool *local_2c8;
  undefined1 *local_2c0;
  bool *local_2b8;
  bool **local_2b0;
  longlong *local_2a8;
  undefined8 **local_2a0;
  undefined8 *local_298;
  float *local_290;
  undefined8 **local_288;
  undefined1 *local_278;
  undefined8 **local_270;
  byte *local_268;
  char *local_260;
  int *local_258;
  char **local_250;
  uint *local_248;
  char *local_240;
  int *local_238;
  float *local_230;
  float *local_228;
  undefined1 *local_220;
  undefined4 *local_218;
  undefined4 *local_210;
  float *local_208;
  undefined4 *local_200;
  undefined4 *local_1f8;
  undefined4 *local_1f0;
  float *local_1e8;
  undefined4 *local_1e0;
  undefined4 *local_1d8;
  bool *local_1d0;
  undefined1 local_1c8 [12];
  char *pcStack_1bc;
  undefined8 uStack_1b4;
  undefined4 uStack_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  char local_198;
  undefined7 uStack_197;
  undefined4 uStack_190;
  int iStack_18c;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168 [6];
  undefined1 local_138 [32];
  char local_118 [64];
  ulonglong local_d8;
  
  local_d8 = DAT_1808d5f00 ^ (ulonglong)auStack_2af8;
  if (param_2 == 0) {
    local_640 = (undefined8 *)0xffffffffffffffff;
  }
  else {
    local_640 = *(undefined8 **)(param_2 + 8);
  }
  local_646[0] = DAT_180cc8600;
  local_648 = DAT_180cc8668 == '\x01';
  local_637[1] = 0;
  DAT_180bbeabc = '\0';
  DAT_180bda180 = DAT_180bda180 + 1;
  pcVar39 = "SEARCH";
  local_ef0 = param_2;
  if (DAT_180cc8600 != '\0') {
    DAT_180bda188 = DAT_180bda188 + 1;
    if (DAT_180bbeabd == '\0') {
      DAT_180bbeabd = '\x01';
      DAT_180bbeabc = 1;
      local_26dc = (uint)DAT_180cc86e4;
      local_1d28 = (char *)(double)DAT_180cc86e0;
      local_1d20 = (undefined8 *)(double)DAT_180cc866c;
      local_2ad8 = (char **)0x1808028c8;
      if (DAT_180cc8668 == '\x01') {
        local_2ad8 = (char **)0x1808028b8;
      }
      local_2955 = 0;
      local_1ba8[0] = -2.4276482419246583e+131;
      local_1ba8[1] = -5.22308943443478e-153;
      local_1ba8[2] = -3.953739307045667e-219;
      local_1ba8[3] = 9.40312645103265e-259;
      local_1ba8[4] = -1.385566929773549e-120;
      local_1ba8[5] = 1.0511117445176366e-100;
      local_1ba8[6] = -167.4244464561419;
      local_1ba8[7] = -3.556985518663326e+302;
      local_1ba8[8] = -1.8874895726522932e-292;
      local_1ba8[9] = -8.352252075014592e+271;
      local_1ba8[10] = 1.9650860493281535e+109;
      local_1ba8[0xb] = 8.991407610715072e+192;
      local_1ba8[0xc] = -3.397329245786183e+202;
      local_1ba8[0xd] = 1.256394364812279e-131;
      local_1ba8[0xe] = -3.274053720118996e+157;
      local_1ba8[0xf] = 9.219521739633918e-27;
      local_1ba8[0x10] = -3.785023793442884e-206;
      local_1ba8[0x11] = -8.922102202732586e+28;
      local_1ba8[0x12] = -1.1134988385222154e-184;
      local_1ba8[0x13] = 3.0479808347199787e-230;
      local_1ba8[0x14] = -2.3351055037742689e-181;
      local_1ba8[0x15] = -2.2008689844990567e-222;
      local_1ba8[0x16] = 2.3235235783738836e+75;
      local_1ba8[0x17] = -1.6598802858345226e-72;
      local_1ba8[0x18] = 2.8065396463777433e-50;
      local_1ba8[0x19] = 1.1618937714270376e+132;
      local_1ba8[0x1a] = -1.1320105378298542e-119;
      local_650 = (undefined1 *)0x8edd3f5c2400c2c8;
      local_1ba8[0x1b] = -4.491507929222064e-237;
      builtin_strncpy(local_2498 + 0xc0,
                      "[pixelsurf] diagnostics active: first command with pixel surf enabled cmd={} record={} observe={} execution={} scan_fov={:.0f} pursue={} min_velocity={:.0f} modifiers={} (the command hook reaches pixel surf)\n"
                      ,0xd1);
      local_2498[0x191] = '\0';
      local_2498[0x192] = '\0';
      local_2498[0x193] = '\0';
      local_2498[0x194] = '\0';
      local_2498[0x195] = '\0';
      local_2498[0x196] = '\0';
      local_2498[0x197] = '\0';
      local_2498[0x198] = '\0';
      local_2498[0x199] = '\0';
      local_2498[0x19a] = '\0';
      local_2498[0x19b] = '\0';
      local_2498[0x19c] = '\0';
      local_2498[0x19d] = '\0';
      local_2498[0x19e] = '\0';
      local_2498[0x19f] = '\0';
      lVar35 = -1;
      do {
        lStack_2970 = lVar35 + 1;
        lVar8 = lVar35 + 0xc1;
        lVar35 = lStack_2970;
      } while (local_2498[lVar8] != '\0');
      local_2978 = local_2498 + 0xc0;
      local_2ab8 = (undefined ***)&local_26dc;
      local_2ac0 = &local_1d28;
      local_2ac8 = (undefined ***)&DAT_180cc8678;
      local_2ad0 = &local_1d20;
      FUN_180337e20(local_1898,&local_640,local_637 + 1,&local_2955);
      local_1ab8 = 8;
      pdStack_2960 = local_1898;
      local_2968 = &DAT_00000008;
      pdStack_1ab0 = pdStack_2960;
      uVar15 = FUN_1801d97f0(local_1a10,&local_2978,&local_2968);
      FUN_18030e280(uVar15);
      FUN_18015c010(local_1a10);
    }
    DAT_180bbeabc = '\0';
    if ((-1 < (longlong)local_640) &&
       ((((longlong)DAT_1808e3d18 < 0 || ((longlong)local_640 < (longlong)DAT_1808e3d18)) ||
        (0x7f < (longlong)local_640 - (longlong)DAT_1808e3d18)))) {
      local_26d8[4] = 0x26;
      local_26d8[5] = 0;
      local_26d8[6] = 0;
      local_26d8[7] = 0;
      local_26d8[0] = 0;
      local_26d8[1] = 0;
      local_26d8[2] = 0;
      local_26d8[3] = 0;
      pbVar30 = local_26d8;
      if (-1 < _DAT_180b8fc58) {
        pbVar30 = &DAT_180b8fc58;
      }
      pbVar16 = local_26d8 + 4;
      if (_DAT_180b8fc58 < 0x27) {
        pbVar16 = pbVar30;
      }
      uVar37 = (ulonglong)*pbVar16;
      if (0x26 < uVar37) {
        uVar37 = 0x26;
      }
      DAT_1808e3d18 = local_640;
      local_26d0 = FUN_180303a00();
      switch(DAT_180b8fc32) {
      case 0:
        local_1d18 = "SEARCH";
        break;
      case 1:
        local_1d18 = "APPROACH";
        break;
      case 2:
        local_1d18 = "ALIGN";
        break;
      case 3:
        local_1d18 = "ENTRY";
        break;
      case 4:
        local_1d18 = "HOLD";
        break;
      case 5:
        local_1d18 = "RECOVER";
        break;
      case 6:
        local_1d18 = "RELEASE";
        break;
      default:
        local_1d18 = "?";
      }
      local_2938 = 0xdb35e39b27e1c185;
      uStack_2930 = 0xa05181ee77d57a06;
      uStack_2928 = 0x929654b1461b7377;
      uStack_2920 = 0xbfef7110;
      uStack_291c = 0xa5cea54;
      uStack_2918 = 0xa70c9f7f916b7e19;
      uStack_2910 = 0xaa402c0a;
      uStack_290c = 0x2b2d6d82;
      uStack_2908 = 0x10bc010b;
      uStack_2904 = 0xc064ed95;
      uStack_2900 = 0x395f26c4;
      uStack_28fc = 0xfec09918;
      local_28f8 = 0x835e2313e2c48f8d;
      uStack_28f0 = 0x1a551f0e;
      uStack_28ec = 0xf863c326;
      uStack_28e8 = 0x2c25563f;
      uStack_28e4 = 0x56a0bc09;
      uStack_28e0 = 0xa9bdf38;
      uStack_28dc = 0x67ff882c;
      local_28d8 = 0xe9fbbd57d9292e61;
      auStack_28d0._8_8_ = 0xe0a313cd38802513;
      auStack_28d0._0_8_ = 0x24c1d5fafa9ec992;
      uStack_28c0 = 0x3a86d390ee208d6c;
      local_28b8 = 0x95484dcb29dcfd95;
      uStack_28b0 = 0xc5f2049e64fab916;
      uStack_28a8 = 0x60dada07;
      uStack_28a4 = 0x99be47e1;
      uStack_28a0 = 0x1047a904a2394520;
      local_2898 = 0x4f2ca929;
      uStack_2894 = 0x9a6f01af;
      uStack_2890 = 0x91e97532caa6fc1a;
      local_2888 = (undefined1 *)0x4f948c455ded471b;
      uStack_2880 = 0xb10776480ca86bd4;
      builtin_strncpy(local_2498,
                      "[pixelsurf-hb] cmd={} enabled_cmds={}/{} state={} scans={} empty_scans={} rays={} ray_hits={} traces_left={} log_lines={} chunks={} dropped={} last_reason={} budget_overruns={}\n"
                      ,0xb2);
      local_2498[0xb2] = '\0';
      local_2498[0xb3] = '\0';
      local_2498[0xb4] = '\0';
      local_2498[0xb5] = '\0';
      local_2498[0xb6] = '\0';
      local_2498[0xb7] = '\0';
      local_2498[0xb8] = '\0';
      local_2498[0xb9] = '\0';
      local_2498[0xba] = '\0';
      local_2498[0xbb] = '\0';
      local_2498[0xbc] = '\0';
      local_2498[0xbd] = '\0';
      local_2498[0xbe] = '\0';
      local_2498[0xbf] = '\0';
      lVar35 = -1;
      do {
        lStack_2970 = lVar35 + 1;
        lVar8 = lVar35 + 1;
        lVar35 = lStack_2970;
      } while (local_2498[lVar8] != '\0');
      local_2978 = local_2498;
      if (DAT_180bbeabc != '\0') {
        local_2a88 = (undefined ***)&DAT_180bda164;
        local_2a98 = (double *)&DAT_180bda178;
        local_2aa0 = (double *)&DAT_180bda174;
        local_2aa8 = (double *)&DAT_180bda170;
        local_2ab0 = (double *)&local_26d0;
        local_2ab8 = (undefined ***)&DAT_180bda1a8;
        local_2ac0 = (char **)&DAT_180bda1a0;
        local_2ac8 = (undefined ***)&DAT_180bda198;
        local_2ad0 = (undefined8 **)&DAT_180bda190;
        local_2ad8 = &local_1d18;
        local_2a90 = &PTR_DAT_180803050 + uVar37 * 2;
        FUN_180337be0(local_1ba8,&local_640,&DAT_180bda188,&DAT_180bda180);
        local_1ba8[0x1c] = 6.91691904177745e-323;
        pdStack_2960 = local_1ba8;
        local_2968 = (char *)0xe;
        pdStack_1ac0 = pdStack_2960;
        uVar15 = FUN_1801d97f0(local_19f0,&local_2978,&local_2968);
        FUN_18030e280(uVar15);
        FUN_18015c010(local_19f0);
      }
    }
  }
  uVar38 = uStack_28a8;
  local_2952 = (DAT_180cc86e4 - 1 & 0xfd) == 0;
  local_2953 = (byte)(DAT_180cc86e4 - 2) < 2;
  local_26c8[0] = 180.0;
  local_26cc = 1.0;
  pfVar31 = &local_26cc;
  if (1.0 <= DAT_180cc866c) {
    pfVar31 = &DAT_180cc866c;
  }
  pfVar20 = local_26c8;
  if (DAT_180cc866c <= 180.0) {
    pfVar20 = pfVar31;
  }
  fVar44 = *pfVar20;
  if (((uint)DAT_180cc86e0 & 0x7f800000) == 0x7f800000) {
    local_2978 = (char *)((ulonglong)local_2978._4_4_ << 0x20);
  }
  else {
    local_26c8[2] = 320.0;
    local_26c8[1] = 0.0;
    pfVar31 = local_26c8 + 1;
    if (0.0 <= DAT_180cc86e0) {
      pfVar31 = &DAT_180cc86e0;
    }
    pfVar20 = local_26c8 + 2;
    if (DAT_180cc86e0 <= 320.0) {
      pfVar20 = pfVar31;
    }
    local_2978 = (char *)CONCAT44(local_2978._4_4_,*pfVar20);
  }
  local_26bc[1] = 0x20;
  local_26bc[0] = 1;
  piVar32 = local_26bc;
  if (0 < DAT_180cc8670) {
    piVar32 = &DAT_180cc8670;
  }
  piVar17 = local_26bc + 1;
  if (DAT_180cc8670 < 0x21) {
    piVar17 = piVar32;
  }
  local_620[0] = *piVar17;
  DAT_180b8fc30 = 0;
  DAT_180b8fccc = 0;
  DAT_180b8fd1d = 0;
  local_2938 = local_2938 & 0xffffffffffffff00;
  uStack_2930 = 0;
  uStack_2928 = uStack_2928 & 0xffffff0000000000;
  uStack_2920 = 0;
  uStack_291c = 0;
  uStack_2918 = 0;
  uStack_2910 = 0;
  uStack_290c = 0;
  uStack_2908 = 0;
  uStack_2904 = 0;
  uStack_2900 = 0;
  uStack_28fc = 0;
  uVar41 = (uint)local_28f8;
  local_28f8 = CONCAT44(0xbf800000,uVar41 & 0xffffff00);
  uStack_28f0 = uStack_28f0 & 0xffffff00;
  uStack_28ec = 0;
  uStack_28e8 = 0;
  uStack_28e4 = 0;
  uStack_28e0 = 0xbf800000;
  uStack_28dc = 0xbf800000;
  local_28d8 = local_28d8 & 0xffff000000000000;
  auStack_28d0 = ZEXT816(0);
  uStack_28c0 = uStack_28c0 & 0xffffff0000000000;
  local_28b8 = 1;
  uStack_28b0 = 0;
  uStack_28a8 = uStack_28a8 & 0xffffff00;
  uStack_28a4 = 0;
  uStack_28a0 = 0;
  local_2898 = 0;
  uStack_2894 = 0;
  uStack_2890 = uStack_2890 & 0xffffffff00000000;
  puVar40 = &DAT_1806bba88;
  local_2888 = &DAT_1806bba88;
  uRam0000000180b8fd68 = 0;
  _DAT_180b8fd50 = local_2938;
  _DAT_180b8fd58 = (undefined8 *)0x0;
  uRam0000000180b8fd60 = uStack_2928;
  _DAT_180b8fd6c = 0.0;
  _DAT_180b8fd78 = 0;
  _DAT_180b8fd70 = 0.0;
  _DAT_180b8fd74 = 0.0;
  _DAT_180b8fd80 = 0;
  _DAT_180b8fd88 = 0;
  _DAT_180b8fd90 = local_28f8;
  _DAT_180b8fd98 = uStack_28f0;
  _DAT_180b8fd9c = 0;
  uRam0000000180b8fda0 = 0;
  _DAT_180b8fda4 = 0.0;
  _DAT_180b8fda8 = 0xbf800000bf800000;
  _DAT_180b8fdb0 = local_28d8;
  _DAT_180b8fdb8 = 0;
  _DAT_180b8fdc0 = 0;
  uRam0000000180b8fdc8 = uStack_28c0;
  _DAT_180b8fde0 = (ulonglong)uVar38 & 0xffffffffffffff00;
  _DAT_180b8fdd0 = 1;
  _DAT_180b8fdd8 = 0;
  _DAT_180b8fde8 = 0;
  _DAT_180b8fdf0 = 0;
  uRam0000000180b8fdf8 = uStack_2890;
  PTR_DAT_180b8fe00 = &DAT_1806bba88;
  local_637[0] = DAT_180b8fc32;
  local_658[0] = '\0';
  local_62c = 0;
  local_5e4 = 0;
  local_5dc = 0;
  local_5d8 = 0;
  local_628 = NAN;
  local_5b8 = 0;
  local_638 = '\0';
  local_5b0[0] = 0xbf800000;
  local_624 = -1.0;
  local_5e8 = 0;
  local_630 = 0.0;
  local_5b4 = 0.0;
  local_5e0 = 1;
  local_5d0[0] = 0;
  local_647 = false;
  local_de8 = "none";
  local_e88 = (undefined1  [16])0x0;
  local_e78 = 0;
  lStack_e70 = 0;
  uStack_e68 = 0;
  uStack_e60 = 0;
  local_e58 = 0;
  uStack_e50 = uStack_e50 & 0xffffffffffff0000;
  local_e48 = 0;
  local_e40 = (longlong *)0x0;
  local_e38 = (undefined **)0x444800003c800000;
  uStack_e30 = 0x41f0000041400000;
  uStack_e28 = 0x3f800000437a0000;
  uStack_e20 = 0x3f0000003f333333;
  local_e18 = 0x3f8000003f800000;
  fStack_e10 = 0.0;
  fStack_e0c = 0.0;
  fStack_e04 = 0.0;
  fStack_e08 = 0.0;
  fStack_e00 = 0.0;
  fStack_dfc = 0.0;
  local_df8 = 0.0;
  local_df4 = 0;
  local_dec = 0;
  local_d88[0] = (undefined8 *)0x0;
  local_650 = &DAT_180b8fc30;
  local_278 = &DAT_180b8fc30;
  local_270 = &local_640;
  local_268 = local_637;
  local_260 = local_646;
  local_258 = &local_62c;
  local_250 = &local_de8;
  local_248 = &local_5b8;
  local_240 = &local_638;
  local_238 = local_620;
  local_230 = &local_630;
  local_228 = &local_5b4;
  local_220 = local_e88;
  local_218 = local_5b0;
  local_210 = &local_5e8;
  local_208 = &local_624;
  local_200 = &local_5e4;
  local_1f8 = &local_5dc;
  local_1f0 = &local_5d8;
  local_1e8 = &local_628;
  local_1e0 = local_5d0;
  local_1d8 = &local_5e0;
  local_1d0 = &local_647;
  local_4f0 = &DAT_180b8fc30;
  local_4e8 = &local_640;
  local_4e0 = &local_62c;
  local_3d8 = &DAT_180b8fc30;
  local_3d0 = &local_4f0;
  local_3c8 = &local_650;
  local_3c0 = &local_640;
  local_3b8 = local_620;
  local_3b0 = &local_278;
  local_578 = local_d88;
  local_570 = &local_ef0;
  local_568 = &DAT_180b8fc30;
  local_560 = local_658;
  local_558 = &local_3d8;
  local_2950 = fVar44;
  if (((local_ef0 == 0) || (local_646[0] == '\0')) || (DAT_180b900c0 != '\0')) {
    DAT_180b8fc70 = 0;
    DAT_180b8fd20 = 0;
    DAT_180b8fcb0 = 0;
    DAT_180b8fcdc = 0;
    if (local_ef0 == 0) {
      uVar15 = 1;
    }
    else {
      uVar15 = CONCAT71(0x180b8fc,(local_646[0] != '\0') + '\x02');
    }
    FUN_180319500(&local_3d8,uVar15);
  }
  auVar50 = ZEXT864(0);
  auVar53 = ZEXT1664(SUB6416(ZEXT464(0x3f800000),0));
  auVar52 = ZEXT1664(SUB6416(ZEXT464(0xbf800000),0));
  FUN_180180d50(&DAT_180bb8890,&local_d08);
  *(uint *)(local_ef0 + 0x20) = *(uint *)(local_ef0 + 0x20) | 1;
  local_ee0 = (undefined8 *)0x0;
  if (*(longlong *)(local_ef0 + 0x40) != 0) {
    local_ee0 = (undefined8 *)(*(longlong *)(local_ef0 + 0x40) + 0x10);
  }
  if ((lStack_d00 == 0) || (local_ee0 == (undefined8 *)0x0)) {
    DAT_180b8fcb0 = 0;
    DAT_180b8fcdc = 0;
    FUN_18031a3a0(&local_578,CONCAT71((int7)((ulonglong)local_ee0 >> 8),(lStack_d00 != 0) + '\x04'),
                  0);
  }
  iVar13 = FUN_18031a440(&local_294b);
  uVar38 = *(uint *)(iVar13 + lStack_d00);
  iVar13 = FUN_18031a540(&local_294a);
  if ((uVar38 & 1) != 0) {
    FUN_18030e210();
    DAT_180b8fcb0 = 0;
    DAT_180b8fcdc = 0;
    if ((4 < (byte)(DAT_180b8fc32 - 1)) || (uVar15 = 0x21, DAT_180b8fc38 < 1)) {
      uVar15 = 6;
    }
    FUN_18031a3a0(&local_578,uVar15,0);
  }
  if ((*(char *)(iVar13 + lStack_d00) - 7U & 0xfd) == 0) {
    DAT_180b8fcb0 = 0;
    DAT_180b8fcdc = 0;
    FUN_18031a3a0(&local_578,7,0);
  }
  iVar13 = FUN_18031a640(&local_2949);
  local_de0 = *(longlong *)(iVar13 + lStack_d00);
  if (local_de0 == 0) {
    FUN_18031a3a0(&local_578,8,0);
  }
  plVar18 = (longlong *)FUN_1803032c0(lStack_d00);
  auVar59 = auVar52._0_16_;
  auVar48 = auVar53._0_16_;
  auVar47 = auVar50._0_16_;
  if ((char)plVar18[9] == '\0') {
    FUN_18031a3a0(&local_578,9,0);
  }
  local_e88._8_8_ = local_ee0;
  local_e88._0_8_ = local_ef0;
  local_e78 = local_d08;
  lStack_e70 = lStack_d00;
  uStack_e68 = uStack_cf8;
  uStack_e60 = uStack_cf0;
  local_e58 = local_ce8;
  uStack_e50 = uStack_ce0;
  local_e48 = local_de0;
  auVar46._8_8_ = 0;
  auVar46._0_8_ = DAT_180b8e118;
  local_df8 = DAT_180b8e120;
  fStack_e0c = (float)_DAT_180b8e13c;
  fStack_e08 = (float)((ulonglong)_DAT_180b8e13c >> 0x20);
  fStack_e04 = DAT_180b8e144;
  auVar46 = vshufps_avx(auVar46,auVar46,0x55);
  fStack_e00 = (float)DAT_180b8e118;
  fStack_dfc = (float)(DAT_180b8e118 >> 0x20);
  fVar45 = auVar46._0_4_ * auVar46._0_4_ + fStack_e00 * fStack_e00;
  local_e40 = plVar18;
  if (fVar45 == auVar50._0_4_) {
    local_630 = 0.0;
  }
  else if (fVar45 < 0.0) {
    auVar50 = ZEXT1664(auVar47);
    auVar53 = ZEXT1664(auVar48);
    auVar52 = ZEXT1664(auVar59);
    local_630 = (float)FUN_18061e150();
    auVar59 = auVar52._0_16_;
    auVar48 = auVar53._0_16_;
    auVar47 = auVar50._0_16_;
  }
  else {
    local_630 = SQRT(fVar45);
  }
  local_5b4 = local_df8;
  auVar50 = ZEXT1664(auVar47);
  auVar53 = ZEXT1664(auVar48);
  auVar52 = ZEXT1664(auVar59);
  cVar10 = FUN_18030ada0(&fStack_e0c);
  if ((cVar10 == '\0') || (cVar10 = FUN_18030ada0(&fStack_e00), cVar10 == '\0')) {
    FUN_18031a3a0(&local_578,10,1);
  }
  local_5fc._4_4_ = 0;
  local_5f4 = auVar50._0_4_;
  local_5f0[0] = 0;
  local_5ec = auVar52._0_4_;
  local_618[0] = 1;
  local_614 = CONCAT44(fStack_e08,fStack_e0c);
  uStack_60c = CONCAT44(fStack_e00,fStack_e04);
  local_604 = fStack_dfc;
  local_600 = local_df8;
  local_5fc._0_4_ = _DAT_180b8e114;
  iVar13 = FUN_18031a740(local_2948);
  local_5fc._4_4_ = *(undefined4 *)(iVar13 + lStack_d00);
  iVar13 = FUN_18031a840(&local_294c);
  local_5f4 = *(float *)(iVar13 + local_de0);
  local_5f0[0] = DAT_180b8e160;
  local_5ec = DAT_180b8e164;
  fVar55 = 0.5;
  local_647 = 0.5 < local_5f4;
  fVar45 = 0.01;
  if ((DAT_180b8fcdc != '\0') && (local_640 == (undefined8 *)(DAT_180b8fce0 + 1))) {
    _DAT_180b8fe10 = _DAT_180b8fe10 + 1;
    fVar44 = fStack_e00 - DAT_180b8fcf4;
    auVar52 = ZEXT464((uint)fVar44);
    fVar49 = fStack_dfc - DAT_180b8fcf8;
    auVar57 = ZEXT464((uint)fVar49);
    fVar56 = local_df8 - DAT_180b8fcfc;
    auVar54 = ZEXT464((uint)fVar56);
    fVar58 = fStack_e0c - DAT_180b8fce8;
    auVar60 = ZEXT464((uint)fVar58);
    fVar61 = fStack_e08 - DAT_180b8fcec;
    auVar65 = ZEXT464((uint)fVar61);
    fVar43 = fStack_e04 - DAT_180b8fcf0;
    local_2968 = (char *)CONCAT44(local_2968._4_4_,fVar43);
    local_e98[0] = (char *)0x0;
    local_2968._0_4_ = fVar43;
    if (((local_5fc._0_4_ ^ _DAT_180b8fd00) & 1) == 0) {
      if (0.01 < ABS(local_5f4 - DAT_180b8fd08)) {
        local_e98[0] = "duck";
        goto LAB_1803106f7;
      }
      fVar43 = 0.05;
      if (0.05 < ABS(fVar56)) {
        local_e98[0] = "velocity.z";
LAB_1803106e6:
        goto LAB_1803106ef;
      }
      if (0.05 < ABS(fVar44)) {
LAB_1803106df:
        local_e98[0] = "velocity.xy";
        goto LAB_1803106e6;
      }
      fVar42 = (float)FUN_1801c7700(fVar49);
      fVar44 = auVar52._0_4_;
      fVar49 = auVar57._0_4_;
      fVar56 = auVar54._0_4_;
      fVar58 = auVar60._0_4_;
      fVar61 = auVar65._0_4_;
      if (fVar43 < fVar42) goto LAB_1803106df;
      fVar43 = (float)FUN_1801c7700((ulonglong)local_2968 & 0xffffffff);
      fVar44 = auVar52._0_4_;
      fVar49 = auVar57._0_4_;
      fVar56 = auVar54._0_4_;
      fVar58 = auVar60._0_4_;
      fVar61 = auVar65._0_4_;
      fVar42 = 0.02;
      if (0.02 < fVar43) {
        local_e98[0] = "origin.z";
        goto LAB_1803106e6;
      }
      fVar43 = (float)FUN_1801c7700(auVar60._0_8_);
      fVar44 = auVar52._0_4_;
      fVar49 = auVar57._0_4_;
      fVar56 = auVar54._0_4_;
      fVar58 = auVar60._0_4_;
      fVar61 = auVar65._0_4_;
      if (fVar42 < fVar43) {
LAB_1803106d6:
        local_e98[0] = "origin.xy";
        goto LAB_1803106e6;
      }
      fVar43 = (float)FUN_1801c7700(auVar65._0_8_);
      fVar44 = auVar52._0_4_;
      fVar49 = auVar57._0_4_;
      fVar56 = auVar54._0_4_;
      fVar58 = auVar60._0_4_;
      fVar61 = auVar65._0_4_;
      if (fVar42 < fVar43) goto LAB_1803106d6;
      if (local_e98[0] != (char *)0x0) {
        goto LAB_1803106f7;
      }
      _DAT_180b8fe14 = _DAT_180b8fe14 + 1;
    }
    else {
      local_e98[0] = "ground-flag";
LAB_1803106ef:
LAB_1803106f7:
      switch(DAT_180b8fc32) {
      case 0:
        break;
      case 1:
        pcVar39 = "APPROACH";
        break;
      case 2:
        pcVar39 = "ALIGN";
        break;
      case 3:
        pcVar39 = "ENTRY";
        break;
      case 4:
        pcVar39 = "HOLD";
        break;
      case 5:
        pcVar39 = "RECOVER";
        break;
      case 6:
        pcVar39 = "RELEASE";
        break;
      default:
        pcVar39 = "?";
      }
      local_1d10 = pcVar39;
      local_1d08 = (double)local_5ec;
      local_1d00 = (double)local_5f4;
      local_1cf8 = (double)DAT_180b8fd08;
      local_1cf0 = (undefined **)(double)local_df8;
      local_1ce8 = (char *)(double)fStack_dfc;
      local_1ce0 = (double)fStack_e00;
      local_1cd8 = (double)DAT_180b8fcfc;
      local_1cd0 = (double)DAT_180b8fcf8;
      local_1cc8 = (double)DAT_180b8fcf4;
      local_1cc0 = (undefined **)(double)local_2968._0_4_;
      local_1cb8 = (char *)(double)fVar61;
      local_1cb0 = (undefined **)(double)fVar58;
      local_1ca8 = (undefined8 *)(double)fVar56;
      local_1ca0 = (double)fVar49;
      local_1c98 = (double)fVar44;
      local_2938 = 0xdb35e39b27e1c185;
      uStack_2930 = 0xa05181ee77d57a06;
      uStack_2928 = 0x929654b1461b7377;
      uStack_2920 = 0xbfef7110;
      uStack_291c = 0xa5cea54;
      uStack_2918 = 0xa70c9f7f916b7e19;
      uStack_2910 = 0xaa402c0a;
      uStack_290c = 0x2b2d6d82;
      uStack_2908 = 0x10bc010b;
      uStack_2904 = 0xc064ed95;
      uStack_2900 = 0x395f26c4;
      uStack_28fc = 0xfec09918;
      local_28f8 = 0x835e2313e2c48f8d;
      uStack_28f0 = 0x1a551f0e;
      uStack_28ec = 0xf863c326;
      uStack_28e8 = 0x2c25563f;
      uStack_28e4 = 0x56a0bc09;
      uStack_28e0 = 0xa9bdf38;
      uStack_28dc = 0x67ff882c;
      local_28d8 = 0xe9fbbd57d9292e61;
      auStack_28d0._8_8_ = 0xe0a313cd38802513;
      auStack_28d0._0_8_ = 0x24c1d5fafa9ec992;
      uStack_28c0 = 0x3a86d390ee208d6c;
      local_28b8 = 0x95484dcb29dcfd95;
      uStack_28b0 = 0xc5f2049e64fab916;
      uStack_28a8 = 0x60dada07;
      uStack_28a4 = 0x99be47e1;
      uStack_28a0 = 0x1047a904a2394520;
      local_2898 = 0x4f2ca929;
      uStack_2894 = 0x9a6f01af;
      uStack_2890 = 0x91e97532caa6fc1a;
      local_2888 = (undefined1 *)0x4f948c455ded471b;
      uStack_2880 = 0xb10776480ca86bd4;
      local_2878 = 0x35a5004309b1b61d;
      uStack_2870 = 0x5b5a30d674a48d9e;
      local_2868 = 0xa73d3b392572a64f;
      uStack_2860 = 0x8edd3f5c2400c2c8;
      local_2858 = 0xefe67c07e4e44b71;
      uStack_2850 = 0xf3b0b42a9dc4e322;
      local_2848 = 0x617eb6fd00a53ba3;
      uStack_2840 = 0x2de935c0128ee4fc;
      local_2838 = 0x478f2afbac69aaa5;
      uStack_2830 = 0xcbdcc34e14e75ba6;
      local_2828 = 0xfcb4b591bb2a4897;
      uStack_2820 = 0xed8a82b4c2a70f30;
      local_2818 = 0xfd656f5fa97c17b9;
      uStack_2810 = 0x4883c462eb7a3faa;
      builtin_strncpy(local_21e8,
                      "[pixelsurf-div] cmd={} first={} d_vel=({:.4f},{:.4f},{:.4f}) d_origin=({:.4f},{:.4f},{:.4f}) pred_vel=({:.3f},{:.3f},{:.3f}) real_vel=({:.3f},{:.3f},{:.3f}) pred_flags={:#x} real_flags={:#x} pred_ground={:#x} real_ground={:#x} pred_duck={:.2f} real_duck={:.2f} pred_surf={} real_surf={}/{:.1f} state={}\n"
                      ,0x130);
      pdStack_2960 = (double *)0xffffffffffffffff;
      do {
        pdStack_2960 = (double *)((longlong)pdStack_2960 + 1);
      } while (local_21e8[(longlong)pdStack_2960] != '\0');
      local_2968 = local_21e8;
      if (DAT_180bbeabc != '\0') {
        local_2a38 = &local_1d10;
        local_2a40 = &local_1d08;
        local_2a48 = (undefined8 *)local_5f0;
        local_2a50 = (undefined8 *)&DAT_180b8fd0c;
        local_2a58 = &local_1d00;
        local_2a60 = &local_1cf8;
        local_2a68 = (double *)(local_5fc + 4);
        local_2a70 = (char **)&DAT_180b8fd04;
        local_2a78 = (double *)local_5fc;
        local_2a80 = (double *)&DAT_180b8fd00;
        local_2a88 = &local_1cf0;
        local_2a90 = &local_1ce8;
        local_2a98 = &local_1ce0;
        local_2aa0 = &local_1cd8;
        local_2aa8 = &local_1cd0;
        local_2ab0 = &local_1cc8;
        local_2ab8 = &local_1cc0;
        local_2ac0 = &local_1cb8;
        local_2ac8 = &local_1cb0;
        local_2ad0 = &local_1ca8;
        local_2ad8 = (char **)&local_1ca0;
        pdStack_2750 = (double *)FUN_1803307d0(local_16d8,&local_640,local_e98,&local_1c98);
        local_1aa8 = 0x18;
        local_2758 = &DAT_00000018;
        pdStack_1aa0 = pdStack_2750;
        uVar15 = FUN_1801d97f0(local_19d0,&local_2968,&local_2758);
        FUN_18030e280(uVar15);
        FUN_18015c010(local_19d0);
      }
    }
    auVar52 = ZEXT464(0xbf800000);
    fVar44 = local_2950;
  }
  DAT_180b8fcdc = 0;
  local_2950 = auVar50._0_4_;
  local_2957 = 0;
  if ((DAT_180b8fcb0 != '\0') && (local_640 == (undefined8 *)((longlong)DAT_180b8fcb8 + 1))) {
    local_2950 = fStack_e04 - DAT_180b8fcc8;
    local_2957 = 1;
  }
  DAT_180b8fcb0 = 1;
  DAT_180b8fcb8 = local_640;
  _DAT_180b8fcc0 = CONCAT44(fStack_e08,fStack_e0c);
  DAT_180b8fcc8 = fStack_e04;
  local_4d8[0] = DAT_180b8fc98;
  local_4d4 = DAT_180b8fca4;
  local_4d0 = DAT_180b8fc9c;
  local_4cc = DAT_180b8fca0;
  local_4c8 = DAT_180b8fc8c;
  local_4c4 = DAT_180b8fc90;
  local_2ad8 = (char **)local_4d8;
  pauVar19 = (undefined1 (*) [32])FUN_18030dbd0(local_18f8,lStack_d00,local_de0,DAT_180b8e154);
  auVar1 = *pauVar19;
  local_2738 = *(ulonglong *)pauVar19[1];
  auVar48._8_8_ = 0;
  auVar48._0_8_ = local_2738;
  fStack_e10 = *(float *)(pauVar19[1] + 8);
  auVar47 = auVar1._0_16_;
  uVar51 = vextractps_avx(auVar47,1);
  local_e38 = (undefined **)CONCAT44(uVar51,auVar1._0_4_);
  uVar51 = vextractps_avx(auVar47,2);
  uVar2 = vextractps_avx(auVar47,3);
  uStack_e30 = CONCAT44(uVar2,uVar51);
  auVar47 = auVar1._16_16_;
  uVar51 = vextractps_avx(auVar47,1);
  uStack_e28 = CONCAT44(uVar51,auVar1._16_4_);
  uVar51 = vextractps_avx(auVar47,2);
  uVar2 = vextractps_avx(auVar47,3);
  uStack_e20 = CONCAT44(uVar2,uVar51);
  auVar47 = vshufps_avx(auVar48,auVar48,0x55);
  local_e18 = CONCAT44(auVar47._0_4_,(int)local_2738);
  auVar50 = ZEXT1664(auVar50._0_16_);
  auVar53 = ZEXT1664(auVar53._0_16_);
  auVar52 = ZEXT1664(auVar52._0_16_);
  cVar10 = FUN_1803080a0(&local_e38);
  if (cVar10 == '\0') {
    FUN_18031a3a0(&local_578,0xb,1);
  }
  if (local_630 < (float)local_2978) {
    FUN_18031a3a0(&local_578,0xc,1);
  }
  auVar54 = ZEXT464((uint)DAT_180b0dfc8._4_4_);
  fVar49 = local_630;
  if (local_630 <= fVar45) {
    local_ee8[0] = DAT_180b0dfc8._4_4_;
    local_57c = DAT_180b0dfc8._4_4_;
  }
  else {
    local_57c = (float)FUN_180636c80(fStack_dfc,fStack_e00);
    local_57c = local_57c * 57.295776;
    local_ee8[0] = auVar54._0_4_;
  }
  fVar45 = 40.0;
  if ((DAT_180cc8678 != '\0') && (40.0 <= fVar49)) {
    local_ee8[0] = local_57c;
  }
  FUN_18030adf0(local_168,local_ef0,local_ee0);
  pauVar19 = (undefined1 (*) [32])FUN_18030b1e0(local_18c8,local_168);
  auVar59 = auVar52._0_16_;
  auVar48 = auVar53._0_16_;
  auVar47 = auVar50._0_16_;
  auVar1 = *pauVar19;
  local_1c8 = auVar1._0_12_;
  pcStack_1bc = auVar1._12_8_;
  uStack_1b4 = auVar1._20_8_;
  uStack_1ac = auVar1._28_4_;
  uStack_19c = *(undefined4 *)(pauVar19[1] + 0xc);
  local_1a8 = *(undefined4 *)pauVar19[1];
  uStack_1a4 = *(undefined4 *)(pauVar19[1] + 4);
  uStack_1a0 = *(undefined4 *)(pauVar19[1] + 8);
  local_d88[0] = local_168;
  local_5e0 = uStack_19c;
  _DAT_180b8fdd8 = vextractps_avx(auVar1._0_16_,1);
  _DAT_180b8fdd0 = CONCAT44(auVar1._0_4_,uStack_19c);
  local_400 = &local_ef0;
  local_3f8 = &local_ee0;
  local_3f0 = local_168;
  local_3e8 = &local_de0;
  local_3e0 = &DAT_180b8fc30;
  local_428 = &local_648;
  local_420 = local_e88;
  local_418 = &local_400;
  local_410 = &local_ef0;
  local_408 = &local_d08;
  local_2c8 = &local_648;
  local_2c0 = local_e88;
  local_2b8 = &local_647;
  local_2b0 = &local_428;
  local_2a8 = &local_ef0;
  local_2a0 = &local_ee0;
  local_298 = local_168;
  local_290 = local_ee8;
  local_288 = &local_640;
  local_3a8 = &local_648;
  local_3a0 = &DAT_180b8fc30;
  local_398 = &local_630;
  local_390 = local_1c8;
  local_388 = &local_640;
  local_380 = local_e88;
  local_378 = &local_647;
  local_370 = &local_428;
  local_368 = &local_57c;
  local_360 = &local_ef0;
  local_358 = &local_ee0;
  local_350 = local_168;
  if (local_df8 - (float)local_e38 * local_e38._4_4_ * uStack_e20._4_4_ < -160.0) {
    if ((4 < (byte)(DAT_180b8fc32 - 1)) || (uVar15 = 0x1f, DAT_180b8fc38 < 1)) {
      uVar15 = 0x15;
    }
    FUN_18031a3a0(&local_578,uVar15,1);
    goto LAB_1803180a4;
  }
  local_26b0[2] = 64.0;
  local_26b0[0] = 24.0;
  local_26e0 = (float)local_e38 * local_630 * 6.0 + 16.0;
  pfVar31 = local_26b0;
  if (24.0 <= local_26e0) {
    pfVar31 = &local_26e0;
  }
  pfVar20 = local_26b0 + 2;
  if (local_26e0 <= 64.0) {
    pfVar20 = pfVar31;
  }
  fVar49 = *pfVar20;
  auVar46 = vmaxss_avx(SUB6416(ZEXT464(0x40a00000),0),ZEXT416((uint)(fVar44 * fVar55)));
  local_ed8 = (float)((uint)local_ed8 & 0xffffff00);
  uStack_ed4 = (char *)0x0;
  uStack_ecc = 0x3f800000;
  fStack_ec4 = auVar50._0_4_;
  fVar56 = 1e+09;
  fStack_ec0 = 1e+09;
  fStack_ebc = 0.0;
  local_eb8 = 0x3f800000;
  uStack_eb0 = 0;
  local_ea8 = (float)((uint)local_ea8 & 0xffffff00);
  cVar10 = '\0';
  fVar44 = 0.995;
  cVar11 = '\0';
  if (DAT_180b8fc70 != '\0') {
    auVar50 = ZEXT1664(auVar46);
    fVar44 = 0.995;
    auVar53 = ZEXT1664(auVar47);
    auVar52 = ZEXT1664(auVar48);
    fVar56 = 1e+09;
    auVar54 = ZEXT1664(auVar59);
    puVar21 = (undefined8 *)FUN_180308260(local_1a60);
    local_590 = *puVar21;
    local_588 = *(float *)(puVar21 + 1);
    local_26e8 = fVar49 * fVar55;
    pfVar31 = &local_26e8;
    if (fVar49 * fVar55 <= 8.0) {
      pfVar31 = (float *)&DAT_180701d9c;
    }
    local_2ad8 = (char **)CONCAT44(local_2ad8._4_4_,*pfVar31);
    puVar21 = (undefined8 *)FUN_18030c180(local_17f0,local_e88,&fStack_e0c,&local_590);
    auVar59 = auVar54._0_16_;
    auVar48 = auVar52._0_16_;
    auVar47 = auVar53._0_16_;
    auVar46 = auVar50._0_16_;
    lVar35 = 2;
    puVar9 = &local_2938;
    do {
      puVar33 = puVar9;
      puVar22 = puVar21;
      uVar15 = puVar22[1];
      uVar5 = puVar22[2];
      uVar6 = puVar22[3];
      *puVar33 = *puVar22;
      puVar33[1] = uVar15;
      puVar33[2] = uVar5;
      puVar33[3] = uVar6;
      uVar15 = puVar22[5];
      uVar5 = puVar22[6];
      uVar6 = puVar22[7];
      puVar33[4] = puVar22[4];
      puVar33[5] = uVar15;
      puVar33[6] = uVar5;
      puVar33[7] = uVar6;
      uVar15 = puVar22[9];
      uVar5 = puVar22[10];
      uVar6 = puVar22[0xb];
      puVar33[8] = puVar22[8];
      puVar33[9] = uVar15;
      puVar33[10] = uVar5;
      puVar33[0xb] = uVar6;
      uVar15 = puVar22[0xd];
      puVar33[0xc] = puVar22[0xc];
      puVar33[0xd] = uVar15;
      uVar15 = puVar22[0xf];
      puVar33[0xe] = puVar22[0xe];
      puVar33[0xf] = uVar15;
      lVar35 = lVar35 + -1;
      puVar21 = puVar22 + 0x10;
      puVar9 = puVar33 + 0x10;
    } while (lVar35 != 0);
    uVar15 = puVar22[0x11];
    puVar33[0x10] = puVar22[0x10];
    puVar33[0x11] = uVar15;
    puVar33[0x12] = puVar22[0x12];
    if ((char)local_2938 != '\0') {
      auVar50 = ZEXT1664(auVar46);
      auVar53 = ZEXT1664(auVar47);
      auVar52 = ZEXT1664(auVar48);
      auVar54 = ZEXT1664(auVar59);
      puVar21 = (undefined8 *)FUN_180308260(local_1a50);
      auVar59 = auVar54._0_16_;
      auVar48 = auVar52._0_16_;
      auVar47 = auVar53._0_16_;
      auVar46 = auVar50._0_16_;
      pcVar39 = (char *)*puVar21;
      local_5c0 = *(float *)(puVar21 + 1);
      local_5c8._4_4_ = (float)((ulonglong)pcVar39 >> 0x20);
      fVar58 = local_590._4_4_ * local_5c8._4_4_;
      local_5c8._0_4_ = SUB84(pcVar39,0);
      fVar61 = (float)local_590 * (float)local_5c8;
      local_5c8 = pcVar39;
      if (fVar44 < fVar58 + fVar61 + local_5c0 * local_588) {
        cVar11 = FUN_180308330(&local_5c8,&local_e38);
        auVar59 = auVar54._0_16_;
        auVar48 = auVar52._0_16_;
        auVar47 = auVar53._0_16_;
        auVar46 = auVar50._0_16_;
        if (cVar11 == '\x03') {
          local_ed8 = (float)CONCAT31(local_ed8._1_3_,1);
          uStack_ed4 = local_5c8;
          uStack_ecc = CONCAT44(local_2938._4_4_,local_5c0);
          local_eb8 = CONCAT44(local_eb8._4_4_,(undefined4)uStack_2930);
          uVar15 = FUN_18030c4c0(&local_5c8,local_ee8[0]);
          fStack_ec4 = (float)uVar15;
          fStack_ec0 = (float)FUN_18030c6d0(uStack_ecc._4_4_,uVar15);
          auVar59 = auVar54._0_16_;
          auVar48 = auVar52._0_16_;
          auVar47 = auVar53._0_16_;
          auVar46 = auVar50._0_16_;
          fStack_ebc = 2.8026e-45;
          DAT_180b8fc80 = 0;
        }
      }
    }
    cVar11 = local_ed8._0_1_;
    if ((local_ed8._0_1_ == '\0') && (DAT_180b8fc80 = DAT_180b8fc80 + 1, 1 < DAT_180b8fc80)) {
      DAT_180b8fc70 = '\0';
    }
  }
  cVar12 = (byte)(DAT_180b8fc32 - 1) < 5;
  auVar62 = SUB6416(ZEXT464(0x40000000),0);
  local_2954 = cVar12;
  if (cVar11 == '\0') {
LAB_180311f80:
    if ((char)local_dec == '\0') {
      local_2958 = '\x01';
      DAT_180b8fc88 = 6;
      local_2ad8 = (char **)CONCAT44(local_2ad8._4_4_,auVar46._0_4_);
      auVar50 = ZEXT1664(auVar46);
      auVar53 = ZEXT1664(auVar47);
      auVar52 = ZEXT1664(auVar48);
      auVar54 = ZEXT1664(auVar59);
      auVar57 = ZEXT1664(auVar62);
      uVar15 = FUN_18030c820(local_1568,local_e88);
      FUN_18063aed0(&local_cd8,uVar15,0x678);
      pfVar31 = (float *)FUN_18030c5b0(&local_cd8);
      DAT_180bda190 = DAT_180bda190 + 1;
      DAT_180bda1a0 = DAT_180bda1a0 + local_b9c;
      DAT_180bda1a8 = DAT_180bda1a8 + local_b98;
      if (pfVar31 == (float *)0x0) {
        DAT_180bda198 = DAT_180bda198 + 1;
      }
      uVar37 = 0;
      if (0 < (int)local_b8c._4_4_) {
        uVar37 = 0x1000;
      }
      uVar23 = 0;
      if (0 < (int)local_b8c._0_4_) {
        uVar23 = 0x800;
      }
      uVar24 = 0;
      if (0 < local_b90) {
        uVar24 = 0x400;
      }
      uVar25 = 0;
      if (0 < local_b80) {
        uVar25 = 0x200;
      }
      uVar26 = 0;
      if (0 < local_b84) {
        uVar26 = 0x100;
      }
      uVar27 = (ulonglong)local_ba0;
      if (pfVar31 == (float *)0x0) {
        uVar34 = 0;
      }
      else {
        iVar13 = thunk_FUN_18060eb80(pfVar31[3] * 20.0);
        uVar34 = (longlong)iVar13 << 0x10;
      }
      local_580 = local_b6c - local_b70;
      local_1c90 = (double)local_5ec;
      if (pfVar31 != (float *)0x0) {
        puVar40 = &DAT_180802abc;
      }
      if ((*local_e40 == lStack_e70) && (local_e40[1] == local_e48)) {
        local_2956 = 0;
      }
      else {
        local_2956 = 1;
      }
      plVar18 = local_e40 + 2;
      local_1c80 = (double)*(float *)((longlong)local_e40 + 0x2c);
      local_1c78 = (double)*(float *)(local_e40 + 5);
      local_1c70 = (double)*(float *)((longlong)local_e40 + 0x24);
      local_1c68 = (double)*(float *)(local_e40 + 4);
      local_1c60 = (double)*(float *)((longlong)local_e40 + 0x1c);
      local_1c58 = (double)*(float *)(local_e40 + 3);
      local_1c88 = puVar40;
      local_26e4 = FUN_180303a00();
      local_1c50 = (double)auVar50._0_4_;
      if ((DAT_180cc8678 == '\0') || (local_1c48 = "velocity", local_630 < fVar45)) {
        local_1c48 = "view";
      }
      local_1c40 = (double)local_ee8[0];
      local_1c38 = (double)fVar49;
      local_1c30 = (undefined **)(double)local_630;
      local_1c28 = (char *)(double)local_df8;
      local_1c20 = (double)fStack_dfc;
      local_1c18 = (double)fStack_e00;
      local_1c10 = (double)fStack_e04;
      local_1c08 = (double)fStack_e08;
      local_1bc0 = (undefined **)(double)fStack_e0c;
      local_2938 = 0xdb35e39b27e1c185;
      uStack_2930 = 0xa05181ee77d57a06;
      uStack_2928 = 0x929654b1461b7377;
      uStack_2920 = 0xbfef7110;
      uStack_291c = 0xa5cea54;
      uStack_2918 = 0xa70c9f7f916b7e19;
      uStack_2910 = 0xaa402c0a;
      uStack_290c = 0x2b2d6d82;
      uStack_2908 = 0x10bc010b;
      uStack_2904 = 0xc064ed95;
      uStack_2900 = 0x395f26c4;
      uStack_28fc = 0xfec09918;
      local_28f8 = 0x835e2313e2c48f8d;
      uStack_28f0 = 0x1a551f0e;
      uStack_28ec = 0xf863c326;
      uStack_28e8 = 0x2c25563f;
      uStack_28e4 = 0x56a0bc09;
      uStack_28e0 = 0xa9bdf38;
      uStack_28dc = 0x67ff882c;
      local_28d8 = 0xe9fbbd57d9292e61;
      auStack_28d0._8_8_ = 0xe0a313cd38802513;
      auStack_28d0._0_8_ = 0x24c1d5fafa9ec992;
      uStack_28c0 = 0x3a86d390ee208d6c;
      local_28b8 = 0x95484dcb29dcfd95;
      uStack_28b0 = 0xc5f2049e64fab916;
      uStack_28a8 = 0x60dada07;
      uStack_28a4 = 0x99be47e1;
      uStack_28a0 = 0x1047a904a2394520;
      local_2898 = 0x4f2ca929;
      uStack_2894 = 0x9a6f01af;
      uStack_2890 = 0x91e97532caa6fc1a;
      local_2888 = (undefined1 *)0x4f948c455ded471b;
      uStack_2880 = 0xb10776480ca86bd4;
      local_2878 = 0x35a5004309b1b61d;
      uStack_2870 = 0x5b5a30d674a48d9e;
      local_2868 = 0xa73d3b392572a64f;
      uStack_2860 = 0x8edd3f5c2400c2c8;
      local_2858 = 0xefe67c07e4e44b71;
      uStack_2850 = 0xf3b0b42a9dc4e322;
      local_2848 = 0x617eb6fd00a53ba3;
      uStack_2840 = 0x2de935c0128ee4fc;
      local_2838 = 0x478f2afbac69aaa5;
      uStack_2830 = 0xcbdcc34e14e75ba6;
      local_2828 = 0xfcb4b591bb2a4897;
      uStack_2820 = 0xed8a82b4c2a70f30;
      local_2818 = 0xfd656f5fa97c17b9;
      uStack_2810 = 0x4883c462eb7a3faa;
      local_2808 = 0x1db6975e079f42b;
      uStack_2800 = 0x8f8784786e324e64;
      local_27f8 = 0xb680a373d1d6ccad;
      uStack_27f0 = 0xda10e0628380eae;
      local_27e8 = 0xad27f9e9312dc35f;
      uStack_27e0 = 0x6c20190c997e96d8;
      local_27d8 = 0x4082fb37de319b81;
      uStack_27d0 = 0x6cc6aa5ad1b352b2;
      local_27c8 = 0x13c5942d27926233;
      uStack_27c0 = 0x54c6ecf04a09160c;
      local_27b8 = 0xd6bec9abf99af0b5;
      uStack_27b0 = 0x59cf2d7ec27f4fb6;
      local_27a8 = 0xf01717c178eb73a7;
      uStack_27a0 = 0x3dd982e468f694c0;
      local_2798 = 0x48d628fc43b7e49;
      uStack_2790 = 0xfacaa192f5bf653a;
      local_2788 = 0xbbedd3a5e275303b;
      uStack_2780 = 0x908615287216b474;
      local_2778 = 0x68c780a3f8c3f33d;
      local_2978 = (char *)0x49611936b9402b3e;
      uStack_2770 = 0x49611936b9402b3e;
      local_1fa8 = 0x75736c657869705b;
      uStack_1fa0 = 0x5d6e6163732d6672;
      local_1f98 = 0x207d7b3d646d6320;
      uStack_1f90 = 0x207d7b3d6e207d7b;
      local_1f88 = 0x283d6e696769726f;
      uStack_1f80 = 0x7b2c7d66312e3a7b;
      local_1f78 = 0x3a7b2c7d66312e3a;
      uStack_1f70 = 0x657620297d66312e;
      local_1f68 = 0x66312e3a7b283d6c;
      uStack_1f60 = 0x7d66312e3a7b2c7d;
      local_1f58 = 0x297d66312e3a7b2c;
      uStack_1f50 = 0x7b3d646565707320;
      local_1f48 = 0x6572207d66312e3a;
      uStack_1f40 = 0x312e3a7b3d686361;
      local_1f38 = 0x795f666572207d66;
      uStack_1f30 = 0x66312e3a7b3d7761;
      local_1f28 = 0x6f6620297d7b287d;
      uStack_1f20 = 0x7b3d666c61685f76;
      local_1f18 = 0x6172207d66312e3a;
      uStack_1f10 = 0x7274207d7b3d7379;
      local_1f08 = 0x2f7d7b3d73656361;
      uStack_1f00 = 0x3d7466656c207d7b;
      local_1ef8 = 0x6567647562207d7b;
      uStack_1ef0 = 0x7d7b3d74756f5f74;
      local_1ee8 = 0x7d7b3d7374696820;
      uStack_1ee0 = 0x7d7b3d7373696d20;
      local_1ed8 = 0x7b3d64696c6f7320;
      uStack_1ed0 = 0x62616b6c6177207d;
      local_1ec8 = 0x6177207d7b3d656c;
      uStack_1ec0 = 0x7573207d7b3d6c6c;
      local_1eb8 = 0x7b3d656c62616672;
      uStack_1eb0 = 0x7d7b3d726166207d;
      local_1ea8 = 0x6564697374756f20;
      uStack_1ea0 = 0x207d7b3d766f665f;
      local_1e98 = 0x697473696c6c6162;
      uStack_1e90 = 0x207d7b2f7d7b3d63;
      local_1e88 = 0x3d64656b63617274;
      uStack_1e80 = 0x3d6c6c7568207d7b;
      local_1e78 = 0x2c7d66302e3a7b28;
      uStack_1e70 = 0x7b2c7d66302e3a7b;
      local_1e68 = 0x2e2e297d66302e3a;
      uStack_1e60 = 0x2c7d66302e3a7b28;
      local_1e58 = 0x7b2c7d66302e3a7b;
      uStack_1e50 = 0x6d20297d66302e3a;
      local_1e48 = 0x78233a7b3d6b7361;
      uStack_1e40 = 0x5f656c617473207d;
      local_1e38 = 0x62207d7b3d787463;
      uStack_1e30 = 0x65207d7b3d747365;
      local_1e28 = 0x75735f656e69676e;
      uStack_1e20 = 0x7d7b3d676e696672;
      local_1e18 = 0x735f736b63697420;
      uStack_1e10 = 0x7275735f65636e69;
      local_1e08 = 0x7d66312e3a7b3d66;
      uStack_1e00 = 0x5f646e756f726720;
      local_1df8 = 0x78233a7b3d746e65;
      uStack_1df0 = 0x3d7367616c66207d;
      local_1de8 = 0xa7d78233a7b;
      uStack_1de0 = 0;
      puVar21 = (undefined8 *)FUN_18015b110(local_1990,&local_1fa8);
      local_2758 = (char *)*puVar21;
      pdStack_2750 = (double *)puVar21[1];
      local_2ac8 = (undefined ***)0x180802a68;
      if (local_ba0 != 0) {
        local_2ac8 = (undefined ***)0x180802a58;
      }
      local_2980 = local_5fc;
      local_2988 = local_5fc + 4;
      local_2990 = &local_1c90;
      local_2998 = (undefined8 *)local_5f0;
      local_29a0 = &local_1c88;
      local_29a8 = &local_2956;
      local_29b8 = &local_1c80;
      local_29c0 = &local_1c78;
      local_29c8 = &local_1c70;
      local_29d0 = &local_1c68;
      local_29d8 = &local_1c60;
      local_29e0 = &local_1c58;
      local_29e8 = &local_ed8;
      local_29f0 = local_b78;
      local_29f8 = local_b74;
      local_2a00 = local_b7c;
      local_2a08 = &local_b80;
      local_2a10 = &local_b84;
      local_2a18 = local_b8c + 4;
      local_2a20 = local_b8c;
      local_2a28 = &local_b90;
      local_2a30 = local_b94;
      local_2a38 = (char **)&local_b98;
      local_2a40 = (double *)&local_dec;
      local_2a48 = (undefined8 *)&local_26e4;
      local_2a50 = &local_df4;
      local_2a58 = (double *)&local_580;
      local_2a60 = (double *)&local_b9c;
      local_2a68 = &local_1c50;
      local_2a70 = &local_1c48;
      local_2a78 = &local_1c40;
      local_2a80 = &local_1c38;
      local_2a88 = &local_1c30;
      local_2a90 = &local_1c28;
      local_2a98 = &local_1c20;
      local_2aa0 = &local_1c18;
      local_2aa8 = &local_1c10;
      local_2ab0 = &local_1c08;
      local_2ab8 = &local_1bc0;
      local_2ac0 = (char **)&local_ba0;
      local_2ad0 = &local_640;
      local_2ad8 = &local_2758;
      local_29b0 = plVar18;
      FUN_180330d80(0,uVar37 | uVar23 | uVar24 | uVar25 | uVar26 | uVar27 | uVar34,local_640,0x40);
      if ((pfVar31 == (float *)0x0) && (local_5f0[0] != '\0')) {
        local_1d30 = (undefined **)(double)fStack_e04;
        local_1d38 = (char *)(double)fStack_e08;
        local_1d40 = (double)fStack_e0c;
        local_1d48 = (double)local_df8;
        local_1d50 = (double)fStack_dfc;
        local_1d58 = (double)fStack_e00;
        local_1d60 = (undefined **)(double)local_5ec;
        local_2938 = 0xdb35e39b27e1c185;
        uStack_2930 = 0xa05181ee77d57a06;
        uStack_2928 = 0x929654b1461b7377;
        uStack_2920 = 0xbfef7110;
        uStack_291c = 0xa5cea54;
        uStack_2918 = 0xa70c9f7f916b7e19;
        uStack_2910 = 0xaa402c0a;
        uStack_290c = 0x2b2d6d82;
        uStack_2908 = 0x10bc010b;
        uStack_2904 = 0xc064ed95;
        uStack_2900 = 0x395f26c4;
        uStack_28fc = 0xfec09918;
        local_28f8 = 0x835e2313e2c48f8d;
        uStack_28f0 = 0x1a551f0e;
        uStack_28ec = 0xf863c326;
        uStack_28e8 = 0x2c25563f;
        uStack_28e4 = 0x56a0bc09;
        uStack_28e0 = 0xa9bdf38;
        uStack_28dc = 0x67ff882c;
        local_28d8 = 0xe9fbbd57d9292e61;
        auStack_28d0._8_8_ = 0xe0a313cd38802513;
        auStack_28d0._0_8_ = 0x24c1d5fafa9ec992;
        uStack_28c0 = 0x3a86d390ee208d6c;
        local_28b8 = 0x95484dcb29dcfd95;
        uStack_28b0 = 0xc5f2049e64fab916;
        uStack_28a8 = 0x60dada07;
        uStack_28a4 = 0x99be47e1;
        uStack_28a0 = 0x1047a904a2394520;
        local_2898 = 0x4f2ca929;
        uStack_2894 = 0x9a6f01af;
        uStack_2890 = 0x91e97532caa6fc1a;
        local_2888 = (undefined1 *)0x4f948c455ded471b;
        uStack_2880 = 0xb10776480ca86bd4;
        local_2878 = 0x35a5004309b1b61d;
        uStack_2870 = 0x5b5a30d674a48d9e;
        local_2868 = 0xa73d3b392572a64f;
        uStack_2860 = 0x8edd3f5c2400c2c8;
        local_2858 = 0xefe67c07e4e44b71;
        uStack_2850 = 0xf3b0b42a9dc4e322;
        local_2848 = 0x617eb6fd00a53ba3;
        uStack_2840 = 0x2de935c0128ee4fc;
        local_2838 = 0x478f2afbac69aaa5;
        local_2978 = (char *)0xcbdcc34e14e75ba6;
        uStack_2830 = 0xcbdcc34e14e75ba6;
        local_20b8 = 0x75736c657869705b;
        uStack_20b0 = 0x5d6e6163732d6672;
        local_20a8 = 0x49474e4520212120;
        uStack_20a0 = 0x524f50455220454e;
        local_2098 = 0x4946525553205354;
        uStack_2090 = 0x5f7361772820474e;
        local_2088 = 0x3d676e6966727573;
        uStack_2080 = 0x736b636974207d7b;
        local_2078 = 0x7b3d65636e69735f;
        uStack_2070 = 0x4220297d66312e3a;
        local_2068 = 0x5320454854205455;
        uStack_2060 = 0x4e554f46204e4143;
        local_2058 = 0x525553204f4e2044;
        uStack_2050 = 0x4c5020454c424146;
        local_2048 = 0x6c6177203a454e41;
        uStack_2040 = 0x6177207d7b3d736c;
        local_2038 = 0x7b3d656c62616b6c;
        uStack_2030 = 0x20656874202d207d;
        local_2028 = 0x7327656e69676e65;
        uStack_2020 = 0x746361746e6f6320;
        local_2018 = 0x6920656e616c7020;
        uStack_2010 = 0x687720746f6e2073;
        local_2008 = 0x6820656874207461;
        uStack_2000 = 0x65657773206c6c75;
        local_1ff8 = 0x7275746572207370;
        uStack_1ff0 = 0x283d6c6576203b6e;
        local_1fe8 = 0x7b2c7d66322e3a7b;
        uStack_1fe0 = 0x3a7b2c7d66322e3a;
        local_1fd8 = 0x726f20297d66322e;
        uStack_1fd0 = 0x3a7b283d6e696769;
        local_1fc8 = 0x2e3a7b2c7d66332e;
        uStack_1fc0 = 0x332e3a7b2c7d6633;
        local_1fb8 = 0xa297d66;
        uStack_1fb0 = 0;
        puVar21 = (undefined8 *)FUN_18015b110(local_1980,&local_20b8);
        local_2758 = (char *)*puVar21;
        pdStack_2750 = (double *)puVar21[1];
        local_2a88 = &local_1d30;
        local_2a90 = &local_1d38;
        local_2a98 = &local_1d40;
        local_2aa0 = &local_1d48;
        local_2aa8 = &local_1d50;
        local_2ab0 = &local_1d58;
        local_2ab8 = (undefined ***)local_b8c;
        local_2ac0 = (char **)(local_b8c + 4);
        local_2ac8 = &local_1d60;
        local_2ad0 = (undefined8 **)local_5f0;
        local_2ad8 = &local_2758;
        FUN_1803313a0(9,0,local_640,0x40);
      }
      local_ea0[0] = 0;
      if (0 < local_ba0) {
        local_2968 = local_2698;
        fVar45 = 1000.0;
        do {
          puVar21 = local_640;
          lVar35 = (longlong)local_ea0[0];
          local_1d68 = &PTR_180700558;
          if (pfVar31 == afStack_cd4 + lVar35 * 0xd + -1) {
            local_1d68 = (undefined **)" <- selected";
          }
          if (aiStack_cbc[lVar35 * 0xd] == 0) {
            local_1d70 = "fan";
          }
          else {
            local_1d70 = "tracked";
            if (aiStack_cbc[lVar35 * 0xd] == 1) {
              local_1d70 = "ballistic";
            }
          }
          local_1d78 = (double)afStack_cd4[lVar35 * 0xd + 5];
          local_1d80 = (double)afStack_cd4[lVar35 * 0xd + 4];
          local_1d88 = (double)afStack_cd4[lVar35 * 0xd + 3];
          local_1d90 = (undefined **)(double)afStack_cd4[lVar35 * 0xd + 2];
          local_1d98 = (char *)(double)afStack_cd4[lVar35 * 0xd + 1];
          local_1da0 = (undefined **)(double)afStack_cd4[lVar35 * 0xd];
          local_2938 = 0xdb35e39b27e1c185;
          uStack_2930 = 0xa05181ee77d57a06;
          uStack_2928 = 0x929654b1461b7377;
          uStack_2920 = 0xbfef7110;
          uStack_291c = 0xa5cea54;
          uStack_2918 = 0xa70c9f7f916b7e19;
          uStack_2910 = 0xaa402c0a;
          uStack_290c = 0x2b2d6d82;
          uStack_2908 = 0x10bc010b;
          uStack_2904 = 0xc064ed95;
          uStack_2900 = 0x395f26c4;
          uStack_28fc = 0xfec09918;
          local_28f8 = 0x835e2313e2c48f8d;
          uStack_28f0 = 0x1a551f0e;
          uStack_28ec = 0xf863c326;
          uStack_28e8 = 0x2c25563f;
          uStack_28e4 = 0x56a0bc09;
          uStack_28e0 = 0xa9bdf38;
          uStack_28dc = 0x67ff882c;
          local_28d8 = 0xe9fbbd57d9292e61;
          auStack_28d0._8_8_ = 0xe0a313cd38802513;
          auStack_28d0._0_8_ = 0x24c1d5fafa9ec992;
          local_2978 = (char *)0x3a86d390ee208d6c;
          uStack_28c0 = 0x3a86d390ee208d6c;
          builtin_strncpy(local_2698,
                          "[pixelsurf-scan]   candidate {}: n=({:.3f},{:.3f},{:.3f}) gap={:.3f} align={:.1f} outside_fov={} score={:.2f} via={}{}\n"
                          ,0x78);
          local_2698[0x78] = '\0';
          local_2698[0x79] = '\0';
          local_2698[0x7a] = '\0';
          local_2698[0x7b] = '\0';
          local_2698[0x7c] = '\0';
          local_2698[0x7d] = '\0';
          local_2698[0x7e] = '\0';
          local_2698[0x7f] = '\0';
          pdStack_2960 = (double *)0xffffffffffffffff;
          do {
            pdStack_2960 = (double *)((longlong)pdStack_2960 + 1);
          } while (local_2698[(longlong)pdStack_2960] != '\0');
          iVar13 = FUN_18060eb80(fVar45 * afStack_cd4[lVar35 * 0xd + 2]);
          iVar14 = FUN_18060eb80(fVar45 * afStack_cd4[lVar35 * 0xd]);
          local_2758 = local_2968;
          pdStack_2750 = pdStack_2960;
          local_2aa0 = (double *)((longlong)local_ca8 + lVar35 * 0x34);
          local_2a88 = &local_1d68;
          local_2a90 = &local_1d70;
          local_2a98 = &local_1d78;
          local_2aa8 = &local_1d80;
          local_2ab0 = &local_1d88;
          local_2ab8 = &local_1d90;
          local_2ac0 = &local_1d98;
          local_2ac8 = &local_1da0;
          local_2ad0 = (undefined8 **)local_ea0;
          local_2ad8 = &local_2758;
          FUN_180331820((longlong)local_ea0[0] + 1,
                        (longlong)aiStack_cbc[lVar35 * 0xd] << 0x32 ^
                        (longlong)iVar14 << 0x14 ^ (longlong)iVar13,puVar21,0x40);
          local_ea0[0] = local_ea0[0] + 1;
        } while (local_ea0[0] < local_ba0);
        cVar12 = local_2954;
      }
      if (pfVar31 == (float *)0x0) {
        local_2ad0 = (undefined8 **)FUN_18030e510(local_19b0,&local_cd8);
        local_2938 = 0xdb35e39b27e1c185;
        uStack_2930 = 0xa05181ee77d57a06;
        uStack_2928 = 0x929654b1461b7377;
        uStack_2920 = 0xbfef7110;
        uStack_291c = 0xa5cea54;
        uStack_2918 = 0xa70c9f7f916b7e19;
        uStack_2910 = 0xaa402c0a;
        uStack_290c = 0x2b2d6d82;
        uStack_2908 = 0x10bc010b;
        uStack_2904 = 0xc064ed95;
        uStack_2900 = 0x395f26c4;
        uStack_28fc = 0xfec09918;
        local_28f8 = 0x835e2313e2c48f8d;
        uStack_28f0 = 0x1a551f0e;
        uStack_28ec = 0xf863c326;
        uStack_28e8 = 0x2c25563f;
        uStack_28e4 = 0x56a0bc09;
        uStack_28e0 = 0xa9bdf38;
        uStack_28dc = 0x67ff882c;
        local_28d8 = 0xe9fbbd57d9292e61;
        auStack_28d0._8_8_ = 0xe0a313cd38802513;
        auStack_28d0._0_8_ = 0x24c1d5fafa9ec992;
        local_2978 = (char *)0x3a86d390ee208d6c;
        uStack_28c0 = 0x3a86d390ee208d6c;
        builtin_strncpy(local_2698 + 0x80,
                        "[pixelsurf-scan]   rays (pitch/azimuth:verdict fraction normal.z gap alignment; rays that hit nothing are omitted): {}\n"
                        ,0x78);
        local_2698[0xf8] = '\0';
        local_2698[0xf9] = '\0';
        local_2698[0xfa] = '\0';
        local_2698[0xfb] = '\0';
        local_2698[0xfc] = '\0';
        local_2698[0xfd] = '\0';
        local_2698[0xfe] = '\0';
        local_2698[0xff] = '\0';
        local_2758 = local_2698 + 0x80;
        local_1a98 = local_2758;
        pdStack_2750 = (double *)0xffffffffffffffff;
        do {
          pdStack_2750 = (double *)((longlong)pdStack_2750 + 1);
        } while ((local_2698 + 0x80)[(longlong)pdStack_2750] != '\0');
        local_2ad8 = &local_2758;
        pdStack_1a90 = pdStack_2750;
        FUN_180331cb0(8,0,local_640,0x200);
        FUN_18015c010(local_19b0);
      }
      auVar62 = auVar57._0_16_;
      auVar59 = auVar54._0_16_;
      auVar48 = auVar52._0_16_;
      auVar47 = auVar53._0_16_;
      fVar45 = (float)((uint)local_ed8 & 0xff);
      if (local_ed8._0_1_ == '\0') {
        local_488 = (float)((uint)local_488 & 0xffffff00);
        pcStack_484 = (char *)0x0;
        uStack_47c = 0x3f800000;
        fStack_474 = auVar53._0_4_;
        fStack_46c = 0.0;
        local_468 = 0x3f800000;
        uStack_460 = 0;
        local_458 = (float)((uint)local_458 & 0xffffff00);
        local_dd8[0] = &PTR_180700558;
        fStack_470 = fVar56;
        if (pfVar31 == (float *)0x0) {
          if (cVar12 == '\0') {
            cVar10 = FUN_18031ac30(&local_2c8,&local_488,local_dd8);
            auVar62 = auVar57._0_16_;
            auVar59 = auVar54._0_16_;
            auVar48 = auVar52._0_16_;
            auVar47 = auVar53._0_16_;
            if (cVar10 != '\0') {
              local_ed8 = local_488;
              uStack_ed4 = pcStack_484;
              uStack_ecc = uStack_47c;
              fStack_ec4 = fStack_474;
              fStack_ec0 = fStack_470;
              fStack_ebc = fStack_46c;
              local_eb8 = local_468;
              uStack_eb0 = uStack_460;
              local_ea8 = local_458;
              DAT_180b8fc84 = DAT_180b8fc84 + 1;
              fVar45 = local_488;
              goto LAB_180315dda;
            }
          }
          if (((local_648 != false) && (cVar12 == '\0')) && (*(char *)local_dd8[0] != '\0')) {
            local_2758 = (char *)0xdb35e39b27e1c185;
            pdStack_2750 = (double *)0xa05181ee77d57a06;
            pcStack_2748 = (char *)0x929654b1461b7377;
            uStack_2740 = 0xa5cea54bfef7110;
            local_2738 = 0xa70c9f7f916b7e19;
            uStack_2730 = 0x2b2d6d82aa402c0a;
            uStack_2728 = 0xc064ed9510bc010b;
            uStack_2720 = 0xfec09918395f26c4;
            local_2718 = 0x835e2313e2c48f8d;
            local_2978 = (char *)0xf863c3261a551f0e;
            uStack_2710 = 0xf863c3261a551f0e;
            local_2548 = 0x75736c657869705b;
            uStack_2540 = 0x65626f72702d6672;
            local_2538 = 0x7d7b3d646d63205d;
            uStack_2530 = 0x746e6f63206f6e20;
            local_2528 = 0x6e616c7020746361;
            uStack_2520 = 0x74206d6f72662065;
            local_2518 = 0x6e69676e65206568;
            uStack_2510 = 0x7265687469652065;
            local_2508 = 0xa297d7b2820;
            uStack_2500 = 0;
            puVar21 = (undefined8 *)FUN_18015b110(local_1970,&local_2548);
            local_2758 = (char *)*puVar21;
            pdStack_2750 = (double *)puVar21[1];
            local_2ac8 = local_dd8;
            local_2ad0 = &local_640;
            local_2ad8 = &local_2758;
            FUN_180331fd0(0xb,0,local_640,0x80);
          }
          DAT_180b8fc70 = '\0';
          if ((char)local_dec == '\0') {
            if (local_662 == '\0') {
              if (local_661 == '\0') {
                if ((local_664 == '\0') || (local_663 != '\0')) {
                  cVar10 = '\r';
                  if (local_663 != '\0') {
                    cVar10 = '\x0f';
                  }
                }
                else {
                  cVar10 = '\x0e';
                }
              }
              else {
                cVar10 = '\x11';
              }
            }
            else {
              cVar10 = '\x10';
            }
          }
          else {
            cVar10 = '\x13';
          }
          local_de8 = "scan";
          FUN_18031bd00(&local_3a8,0);
          cVar11 = cVar10;
          if (cVar12 != '\0') {
            cVar11 = '\x12';
          }
          FUN_18031a3a0(&local_578,cVar11,0);
          local_658[0] = cVar10;
          goto LAB_1803180a4;
        }
LAB_18031520d:
        local_ed8 = *pfVar31;
        uStack_ed4 = *(char **)(pfVar31 + 1);
        uStack_ecc = *(undefined8 *)(pfVar31 + 3);
        fStack_ec4 = pfVar31[5];
        fStack_ec0 = pfVar31[6];
        fStack_ebc = pfVar31[7];
        local_eb8 = *(undefined8 *)(pfVar31 + 8);
        uStack_eb0 = *(undefined8 *)(pfVar31 + 10);
        local_ea8 = pfVar31[0xc];
        DAT_180b8fc84 = DAT_180b8fc84 + 1;
        fVar45 = local_ed8;
      }
      else if ((pfVar31 != (float *)0x0) && (auVar57._0_4_ + pfVar31[6] < fStack_ec0)) {
        fVar45 = (float)FUN_180307ff0(pfVar31 + 1,&uStack_ed4);
        auVar62 = auVar57._0_16_;
        auVar59 = auVar54._0_16_;
        auVar48 = auVar52._0_16_;
        auVar47 = auVar53._0_16_;
        if (fVar45 < fVar44) {
          local_1da8 = (char *)(double)pfVar31[6];
          local_1db0 = (undefined **)(double)pfVar31[4];
          local_1db8 = (undefined8 *)(double)pfVar31[3];
          local_1dc0 = (char *)(double)fStack_ec0;
          local_1dc8 = (double)uStack_ecc._4_4_;
          local_1dd0 = (double)(float)uStack_ecc;
          local_2938 = 0xdb35e39b27e1c185;
          uStack_2930 = 0xa05181ee77d57a06;
          uStack_2928 = 0x929654b1461b7377;
          uStack_2920 = 0xbfef7110;
          uStack_291c = 0xa5cea54;
          uStack_2918 = 0xa70c9f7f916b7e19;
          uStack_2910 = 0xaa402c0a;
          uStack_290c = 0x2b2d6d82;
          uStack_2908 = 0x10bc010b;
          uStack_2904 = 0xc064ed95;
          uStack_2900 = 0x395f26c4;
          uStack_28fc = 0xfec09918;
          local_28f8 = 0x835e2313e2c48f8d;
          uStack_28f0 = 0x1a551f0e;
          uStack_28ec = 0xf863c326;
          uStack_28e8 = 0x2c25563f;
          uStack_28e4 = 0x56a0bc09;
          uStack_28e0 = 0xa9bdf38;
          uStack_28dc = 0x67ff882c;
          local_28d8 = 0xe9fbbd57d9292e61;
          auStack_28d0._8_8_ = 0xe0a313cd38802513;
          auStack_28d0._0_8_ = 0x24c1d5fafa9ec992;
          uStack_28c0 = 0x3a86d390ee208d6c;
          local_28b8 = 0x95484dcb29dcfd95;
          local_2978 = (char *)0xc5f2049e64fab916;
          uStack_28b0 = 0xc5f2049e64fab916;
          local_2278 = 0x75736c657869705b;
          uStack_2270 = 0x6e616c70205d6672;
          local_2268 = 0x6863746977732065;
          uStack_2260 = 0x207d7b3d646d6320;
          local_2258 = 0x7b3d7a6e5f646c6f;
          uStack_2250 = 0x6c6f207d66332e3a;
          local_2248 = 0x3a7b3d7061675f64;
          uStack_2240 = 0x646c6f207d66332e;
          local_2238 = 0x7b3d65726f63735f;
          uStack_2230 = 0x656e207d66322e3a;
          local_2228 = 0x2e3a7b3d7a6e5f77;
          uStack_2220 = 0x5f77656e207d6633;
          local_2218 = 0x332e3a7b3d706167;
          uStack_2210 = 0x735f77656e207d66;
          local_2208 = 0x2e3a7b3d65726f63;
          uStack_2200 = 0x3d616976207d6632;
          local_21f8 = 0xa7d7b;
          uStack_21f0 = 0;
          puVar21 = (undefined8 *)FUN_18015b110(local_1960,&local_2278);
          local_2758 = (char *)*puVar21;
          pdStack_2750 = (double *)puVar21[1];
          local_2ab8 = (undefined ***)(pfVar31 + 7);
          local_2ac0 = &local_1da8;
          local_2ac8 = &local_1db0;
          local_2ad0 = &local_1db8;
          local_2ad8 = &local_1dc0;
          FUN_180332340(&local_2758,&local_640,&local_1dd0,&local_1dc8);
          auVar62 = auVar57._0_16_;
          auVar59 = auVar54._0_16_;
          auVar48 = auVar52._0_16_;
          auVar47 = auVar53._0_16_;
          goto LAB_18031520d;
        }
        fVar45 = (float)((uint)local_ed8 & 0xff);
      }
LAB_180315dda:
      cVar11 = SUB41(fVar45,0);
      cVar10 = local_2958;
    }
  }
  else if (!(bool)cVar12) {
    DAT_180b8fc88 = DAT_180b8fc88 + -1;
    if (DAT_180b8fc88 < 1) goto LAB_180311f80;
  }
  uVar38 = 2;
  pcVar39 = "tracked";
  if (cVar11 == '\0') {
    FUN_18031a3a0(&local_578,0x13,1);
    goto LAB_1803180a4;
  }
  auVar50 = ZEXT1664(auVar47);
  auVar53 = ZEXT1664(auVar48);
  auVar52 = ZEXT1664(auVar59);
  auVar54 = ZEXT1664(auVar62);
  FUN_18031bd00(&local_3a8,&uStack_ed4);
  DAT_180b8fc70 = '\x01';
  auVar47 = vunpcklps_avx(ZEXT416((uint)(float)uStack_ed4),ZEXT416((uint)uStack_ed4._4_4_));
  _DAT_180b8fc74 = auVar47._0_8_;
  DAT_180b8fc7c = (float)uStack_ecc;
  local_5b0[0] = uStack_ecc._4_4_;
  local_624 = fStack_ec4;
  local_5e8 = (float)uStack_ecc;
  if (cVar10 != '\0') {
    pcVar39 = "scan";
  }
  local_de8 = pcVar39;
  FUN_18030c450(&local_500,local_e88,&uStack_ed4);
  local_eb8 = CONCAT44((local_500 + fStack_e0c) - uStack_ecc._4_4_ * (float)uStack_ed4,
                       (undefined4)local_eb8);
  uStack_eb0 = CONCAT44((local_4f8 + fStack_e04) - uStack_ecc._4_4_ * (float)uStack_ecc,
                        (local_4fc + fStack_e08) - uStack_ecc._4_4_ * uStack_ed4._4_4_);
  fVar44 = (float)FUN_180636c80();
  fVar44 = (float)FUN_180308020(fVar44 * 57.295776 + 90.0);
  auVar60 = ZEXT464(0x3c8efa35);
  auVar57 = ZEXT464((uint)(fVar44 * 0.017453292));
  fVar44 = (float)FUN_180638e00(fVar44 * 0.017453292);
  fVar44 = fVar44 * 28.0;
  fVar45 = (float)FUN_180637540(auVar57._0_8_);
  local_53c = auVar50._0_4_;
  DAT_180b8fd30 = uStack_eb0._4_4_ - local_53c;
  auVar47 = vunpcklps_avx(ZEXT416((uint)(local_eb8._4_4_ - fVar45 * 28.0)),
                          ZEXT416((uint)((float)uStack_eb0 - fVar44)));
  _DAT_180b8fd28 = auVar47._0_8_;
  DAT_180b8fd3c = uStack_eb0._4_4_ + local_53c;
  auVar47 = vunpcklps_avx(ZEXT416((uint)(fVar45 * 28.0 + local_eb8._4_4_)),
                          ZEXT416((uint)((float)uStack_eb0 + fVar44)));
  _DAT_180b8fd34 = auVar47._0_8_;
  _DAT_180b8fd48 = (float)uStack_ecc * 12.0 + uStack_eb0._4_4_;
  auVar47 = vunpcklps_avx(ZEXT416((uint)((float)uStack_ed4 * 12.0 + local_eb8._4_4_)),
                          ZEXT416((uint)(uStack_ed4._4_4_ * 12.0 + (float)uStack_eb0)));
  _DAT_180b8fd40 = auVar47._0_8_;
  DAT_180b8fd20 = 1;
  _DAT_180b8fd50 = _DAT_180b8fd50 & 0xffffffffffffff00;
  _DAT_180b8fd58 = local_640;
  _DAT_180b8fd6c = fStack_e0c;
  _DAT_180b8fd70 = fStack_e08;
  _DAT_180b8fd74 = fStack_e04;
  _DAT_180b8fd78 = CONCAT44(fStack_dfc,fStack_e00);
  _DAT_180b8fd80 = CONCAT44(local_5fc._0_4_,local_df8);
  _DAT_180b8fd88 = CONCAT44(local_5f4,local_5fc._4_4_);
  _DAT_180b8fd90 = CONCAT71(DAT_180b8fd90_1,local_5f0[0]);
  _DAT_180b8fd90 = CONCAT44(local_5ec,_DAT_180b8fd90);
  _DAT_180b8fd98 = CONCAT31(DAT_180b8fd98_1,1);
  auVar47 = vunpcklps_avx(ZEXT416((uint)(float)uStack_ed4),ZEXT416((uint)uStack_ed4._4_4_));
  _DAT_180b8fd9c = auVar47._0_4_;
  uRam0000000180b8fda0 = auVar47._4_4_;
  _DAT_180b8fda4 = (float)uStack_ecc;
  _DAT_180b8fda8 = CONCAT44((undefined4)local_eb8,uStack_ecc._4_4_);
  _DAT_180b8fdb0 = CONCAT44(_DAT_180b8fdb4,DAT_180b8fc84);
  local_598 = auVar53._0_4_;
  fVar44 = DAT_180b8fc90;
  if (DAT_180b8fc8c == '\0') {
    fVar44 = fStack_e10 - local_e38._4_4_ * (float)local_e38 * (local_598 - uStack_e20._4_4_);
  }
  _DAT_180b8fdd8 = CONCAT44(fVar44,_DAT_180b8fdd8);
  _DAT_180b8fde0 = CONCAT71(DAT_180b8fde0_1,DAT_180b8fc8c);
  _DAT_180b8fde0 = CONCAT44(local_e38._4_4_,_DAT_180b8fde0);
  _DAT_180b8fde8 = CONCAT44((float)local_e18,uStack_e20._4_4_);
  _DAT_180b8fdf0 = CONCAT44((float)local_e38,(int)uStack_e28);
  local_5a8[0] = DAT_180b8fc8c;
  local_5a4 = DAT_180b8fc90;
  local_59c = local_e38._4_4_ * (float)local_e38 * fVar55;
  fVar44 = 0.16;
  auVar57 = ZEXT464(0x3e800000);
  auVar47 = vmaxss_avx(ZEXT416((uint)(local_59c * 0.16)),auVar57._0_16_);
  local_5a0 = auVar47._0_4_;
  local_59c = local_59c * -3.5;
  local_54d = 0;
  local_550 = 0x101;
  auVar47 = vpcmpeqd_avx(ZEXT116(local_2957),SUB6416(ZEXT464(0),0));
  auVar47 = vblendvps_avx(ZEXT416((uint)local_2950),auVar50._0_16_,auVar47);
  local_544 = auVar47._0_4_;
  local_540 = local_df8;
  local_54c = uStack_ecc._4_4_;
  local_54e = uStack_ecc._4_4_ <= 0.125;
  local_1a88 = _DAT_180b8fd40;
  local_1a80 = _DAT_180b8fd48;
  local_1a7c = _DAT_180b8fd28;
  local_1a74 = DAT_180b8fd30;
  local_1a70 = _DAT_180b8fd34;
  local_1a68 = DAT_180b8fd3c;
  local_548 = local_598;
  local_538 = local_53c;
  cVar10 = FUN_18030db60(&local_550,local_5a8,auVar50._0_8_);
  auVar63 = auVar54._0_16_;
  auVar62 = auVar52._0_16_;
  auVar46 = auVar60._0_16_;
  auVar59 = auVar53._0_16_;
  auVar47 = auVar57._0_16_;
  auVar48 = auVar50._0_16_;
  if (cVar10 == '\0') {
    if ((cVar12 != '\0') && (0 < DAT_180b8fc38)) {
      if (local_54e == '\0') {
LAB_180316427:
        local_658[0] = ' ';
      }
      else {
        if (local_5a8[0] != '\0') {
          fVar45 = (float)FUN_1801c7700(local_540 - local_5a4);
          auVar63 = auVar54._0_16_;
          auVar62 = auVar52._0_16_;
          auVar46 = auVar60._0_16_;
          auVar59 = auVar53._0_16_;
          auVar47 = auVar57._0_16_;
          auVar48 = auVar50._0_16_;
          if (fVar45 <= local_5a0) goto LAB_180316427;
        }
        local_658[0] = '\x1f';
      }
    }
    DAT_180b8fc38 = 0;
  }
  else {
    if ((1 < DAT_180b8fc38) &&
       (fVar45 = (float)FUN_1801c7700(local_df8 - DAT_180b8fc94), fVar45 <= fVar55)) {
      if (DAT_180b8fc8c == '\0') {
        DAT_180b8fc90 = local_df8;
      }
      else {
        DAT_180b8fc90 = local_df8 * 0.3 + DAT_180b8fc90 * 0.7;
      }
      DAT_180b8fc8c = '\x01';
      local_5a8[0] = '\x01';
      local_5a4 = DAT_180b8fc90;
    }
    auVar63 = auVar54._0_16_;
    auVar62 = auVar52._0_16_;
    auVar46 = auVar60._0_16_;
    auVar59 = auVar53._0_16_;
    auVar47 = auVar57._0_16_;
    auVar48 = auVar50._0_16_;
    DAT_180b8fc94 = local_df8;
    DAT_180b8fc38 = DAT_180b8fc38 + 1;
    if (DAT_180b8fc3c < DAT_180b8fc38) {
      DAT_180b8fc3c = DAT_180b8fc38;
    }
    if ((local_620[0] <= DAT_180b8fc38) && (DAT_180b8fc33 == '\0')) {
      DAT_180b8fc33 = '\x01';
      FUN_18030e480();
      FUN_180318220(&local_650,0x26);
      auVar63 = auVar54._0_16_;
      auVar62 = auVar52._0_16_;
      auVar46 = auVar60._0_16_;
      auVar59 = auVar53._0_16_;
      auVar47 = auVar57._0_16_;
      auVar48 = auVar50._0_16_;
    }
  }
  cVar11 = local_2953;
  local_d78 = fStack_e00;
  fStack_d74 = fStack_dfc;
  fStack_d70 = local_df8;
  auVar64 = vmaxss_avx(auVar48,ZEXT416((uint)uStack_ecc._4_4_));
  uStack_d6c = auVar64._0_4_;
  uStack_d68 = (float)uStack_ed4;
  uStack_d64 = uStack_ed4._4_4_;
  uStack_d60 = (float)uStack_ecc;
  uStack_d5c = SUB84(local_e38,0);
  uStack_d58 = (undefined4)((ulonglong)local_e38 >> 0x20);
  uStack_d54 = (undefined4)uStack_e30;
  uStack_d50 = (undefined4)((ulonglong)uStack_e30 >> 0x20);
  uStack_d4c = (undefined4)uStack_e28;
  uStack_d48 = (undefined4)((ulonglong)uStack_e28 >> 0x20);
  uStack_d44 = (undefined4)uStack_e20;
  uStack_d40 = (undefined4)((ulonglong)uStack_e20 >> 0x20);
  uStack_d3c = (float)local_e18;
  local_d38 = local_e18._4_4_;
  fStack_d34 = fStack_e10;
  cStack_d30 = local_2953;
  uStack_d2f = DAT_180cc86e8;
  uStack_d2c = SUB84(pcStack_1bc,0);
  uStack_d28 = (undefined4)((ulonglong)pcStack_1bc >> 0x20);
  uStack_d24 = (undefined4)uStack_1b4;
  uStack_d20 = (undefined4)((ulonglong)uStack_1b4 >> 0x20);
  uStack_d1c = uStack_1ac;
  uStack_d18 = local_1a8;
  uStack_d14 = uStack_1a4;
  uStack_d10 = uStack_1a0;
  uStack_d0c = uStack_19c;
  local_2758 = (char *)CONCAT44(fStack_dfc,fStack_e00);
  pdStack_2750 = (double *)CONCAT44(uStack_d6c,local_df8);
  uStack_2740 = CONCAT44(uStack_d5c,(float)uStack_ecc);
  pcStack_2748 = uStack_ed4;
  local_2738 = CONCAT44(uStack_d54,uStack_d58);
  uStack_2730 = CONCAT44(uStack_d4c,uStack_d50);
  uStack_2728 = CONCAT44(uStack_d44,uStack_d48);
  uStack_2720 = CONCAT44((float)local_e18,uStack_d40);
  local_2718 = CONCAT44(fStack_e10,local_e18._4_4_);
  uStack_2710 = CONCAT44(uStack_d2c,CONCAT22(uStack_d2e,CONCAT11(DAT_180cc86e8,local_2953)));
  uStack_2708 = CONCAT44(uStack_d24,uStack_d28);
  uStack_2700 = CONCAT44(uStack_1ac,uStack_d20);
  local_26f8 = CONCAT44(uStack_1a4,local_1a8);
  uStack_26f0 = CONCAT44(uStack_19c,uStack_1a0);
  auVar50 = ZEXT1664(auVar47);
  auVar53 = ZEXT1664(auVar48);
  auVar52 = ZEXT1664(auVar59);
  auVar54 = ZEXT1664(auVar46);
  auVar57 = ZEXT1664(auVar62);
  auVar60 = ZEXT1664(auVar63);
  pauVar19 = (undefined1 (*) [32])FUN_180309ad0(local_1828,&local_2758,5);
  auVar62 = auVar54._0_16_;
  auVar46 = auVar52._0_16_;
  auVar59 = auVar53._0_16_;
  auVar63 = auVar57._0_16_;
  auVar64 = auVar60._0_16_;
  local_4c0 = *pauVar19;
  local_4a0 = *(undefined8 *)pauVar19[1];
  uStack_498 = *(undefined8 *)(pauVar19[1] + 8);
  local_490 = *(char **)(pauVar19[1] + 0x10);
  local_62c = (int)local_490;
  auVar47 = local_4c0._0_16_;
  auVar48 = vshufps_avx(auVar47,auVar47,0x55);
  local_5e4 = auVar48._0_4_;
  local_5dc = vextractps_avx(auVar47,3);
  local_5d8 = vextractps_avx(auVar47,2);
  auVar47 = vmaxss_avx(ZEXT416((uint)(local_e38._4_4_ * (float)local_e38 * fVar55 * fVar44)),
                       auVar50._0_16_);
  local_5d4 = auVar47._0_4_;
  if (DAT_180b8fc8c == '\0') {
    local_634 = fStack_e10 - (auVar52._0_4_ - uStack_e20._4_4_) * local_e38._4_4_ * (float)local_e38
    ;
  }
  else {
    local_634 = DAT_180b8fc90;
  }
  local_450 = &local_428;
  local_448 = &local_634;
  local_440 = local_e88;
  local_438 = &local_ed8;
  local_430 = &local_5d4;
  local_348 = &local_634;
  local_340 = (undefined8 *)local_5a8;
  local_338 = &DAT_180b8fc30;
  local_330 = &local_5d4;
  local_328 = &local_d78;
  local_320 = &local_648;
  local_318 = &local_450;
  local_310 = local_618;
  local_308 = local_4c0;
  local_300 = local_e88;
  local_2f8 = &local_ef0;
  local_2f0 = &local_ee0;
  local_2e8 = local_168;
  local_2e0 = &local_400;
  local_2d8 = &local_d08;
  local_2d0 = &local_ed8;
  if (cVar10 == '\0') {
    if ((byte)(DAT_180b8fc32 - 3) < 2) {
      pcVar39 = "ride lost";
      if (DAT_180b8fc32 == 3) {
        pcVar39 = "entry did not hold";
      }
      auVar50 = ZEXT1664(auVar59);
      auVar53 = ZEXT1664(auVar46);
      auVar52 = ZEXT1664(auVar62);
      auVar54 = ZEXT1664(auVar63);
      auVar57 = ZEXT1664(auVar64);
      FUN_1803190b0(&local_4f0,5,pcVar39);
      auVar62 = auVar52._0_16_;
      auVar46 = auVar53._0_16_;
      auVar59 = auVar50._0_16_;
      auVar63 = auVar54._0_16_;
      auVar64 = auVar57._0_16_;
      DAT_180b8fc40 = 0;
      auVar48 = ZEXT416((uint)local_4c0._4_4_);
      if (local_658[0] == '\0') {
        local_658[0] = ' ';
      }
    }
  }
  else if (((byte)(DAT_180b8fc32 - 1) < 3) || (DAT_180b8fc32 == 5)) {
    auVar50 = ZEXT1664(auVar59);
    auVar53 = ZEXT1664(auVar46);
    auVar52 = ZEXT1664(auVar62);
    auVar54 = ZEXT1664(auVar63);
    auVar57 = ZEXT1664(auVar64);
    FUN_1803190b0(&local_4f0,4,"engine: stationary contact");
    auVar62 = auVar52._0_16_;
    auVar46 = auVar53._0_16_;
    auVar59 = auVar50._0_16_;
    auVar63 = auVar54._0_16_;
    auVar64 = auVar57._0_16_;
    auVar48 = ZEXT416((uint)local_4c0._4_4_);
  }
  if ((DAT_180b8fc32 == 5) && (DAT_180b8fc40 = DAT_180b8fc40 + 1, 6 < DAT_180b8fc40)) {
    cVar10 = ' ';
    if (local_658[0] != '\0') {
      cVar10 = local_658[0];
    }
    FUN_18031a3a0(&local_578,cVar10,1);
    goto LAB_1803180a4;
  }
  bVar3 = (byte)(DAT_180b8fc32 - 1) < 5;
  if (cVar10 == '\0') {
    uVar41 = (int)local_490 - 1;
    auVar50 = ZEXT1664(auVar59);
    auVar53 = ZEXT1664(auVar46);
    auVar52 = ZEXT1664(auVar62);
    fVar44 = (float)FUN_180308090(&local_e38);
    if ((auVar50._0_4_ <= fStack_d70 - fVar44) || (fStack_d70 <= -80.0)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (((local_2952 == '\0') || (local_648 == false)) || (!bVar7)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (!bVar3) {
      if ((4 < uVar41) && (!bVar7)) {
        cVar10 = '\x16';
        if (local_490._4_1_ != '\0') {
          cVar10 = local_490._4_1_;
        }
        if (cVar11 == '\0') {
          if (cVar10 == '\x14') {
            cVar10 = '\x18';
          }
        }
        if ((byte)(local_658[0] - 0x1fU) < 2) {
          cVar10 = local_658[0];
        }
        FUN_18031a3a0(&local_578,cVar10,1);
        goto LAB_1803180a4;
      }
      if (0 < DAT_180b8fc44) {
        DAT_180b8fc44 = DAT_180b8fc44 + -1;
        FUN_18031a3a0(&local_578,0x1d,1);
        goto LAB_1803180a4;
      }
    }
    local_dc8[0] = '\0';
    local_dc4 = 0;
    local_dc0[0] = '\0';
    local_dbc = auVar50._0_4_;
    local_db8 = (float)FUN_1802f49e0();
    local_db4 = 0;
    local_db0 = 0x1d;
    FUN_18015b0f0(local_da8);
    if ((uVar41 < 5) || (bVar3)) {
      local_26bc[2] = (int)local_490 + 3;
      local_26b0[1] = 1.12104e-44;
      uVar15 = FUN_18015a9b0(local_26b0 + 1,local_26bc + 2);
      local_2768[0] = 4;
      puVar28 = (undefined4 *)FUN_18015ab00(local_2768,uVar15);
      local_2ad8 = (char **)CONCAT44(local_2ad8._4_4_,auVar50._0_4_);
      uVar15 = FUN_18031d150(&local_348,local_1938,*puVar28,0xffffffff);
      FUN_18031dd10(local_dc8,uVar15);
      FUN_180182930(local_1938);
    }
    if (local_dc8[0] == '\0') {
      if ((bVar7) && (!bVar3)) {
        bVar36 = local_647;
        if (DAT_180b8fd1e != '\0') {
          bVar36 = DAT_180b8fd1f;
        }
        auVar47 = vpcmpeqd_avx(ZEXT116(bVar36),SUB6416(ZEXT464(0),0));
        auVar47 = vblendvps_avx(SUB6416(ZEXT464(0xc1900000),0),SUB6416(ZEXT464(0x41900000),0),
                                auVar47);
        local_2ad8 = (char **)CONCAT44(local_2ad8._4_4_,auVar47._0_4_ * (float)uStack_ecc);
        FUN_18031d150(&local_348,local_118,4,bVar36 == 0);
        if (local_118[0] == '\0') {
          cVar11 = FUN_18015b140(local_da8);
          if (cVar11 != '\0') {
            FUN_18031ddb0(local_dc8,local_118);
          }
        }
        else {
          FUN_18031ddb0(local_dc8,local_118);
          DAT_180b8fd1e = '\x01';
          DAT_180b8fd1f = bVar36 == 0;
        }
        FUN_180182930(local_118);
        if (local_dc8[0] != '\0') goto LAB_180317846;
      }
      cVar10 = FUN_18015b140(local_da8);
      if (cVar10 == '\0') {
        if ((((bVar3) || ((longlong)DAT_180b8fc50 < 0)) ||
            ((longlong)local_640 < (longlong)DAT_180b8fc50)) ||
           (7 < (longlong)local_640 - (longlong)DAT_180b8fc50)) {
          DAT_180b8fc50 = local_640;
          uVar15 = FUN_180308b70(local_db0);
          local_1bd8 = FUN_18030e660(DAT_180b8fc32);
          local_2758 = (char *)0xdb35e39b27e1c185;
          pdStack_2750 = (double *)0xa05181ee77d57a06;
          pcStack_2748 = (char *)0x929654b1461b7377;
          uStack_2740 = 0xa5cea54bfef7110;
          local_2738 = 0xa70c9f7f916b7e19;
          uStack_2730 = 0x2b2d6d82aa402c0a;
          uStack_2728 = 0xc064ed9510bc010b;
          uStack_2720 = 0xfec09918395f26c4;
          local_2718 = 0x835e2313e2c48f8d;
          local_2978 = (char *)0xf863c3261a551f0e;
          uStack_2710 = 0xf863c3261a551f0e;
          local_2598 = 0x75736c657869705b;
          uStack_2590 = 0x666f6f72702d6672;
          local_2588 = 0x7d7b3d646d63205d;
          uStack_2580 = 0x7b3d657461747320;
          local_2578 = 0x44454c494146207d;
          uStack_2570 = 0x207d7b3d79687720;
          local_2568 = 0x5f6e6f7a69726f68;
          uStack_2560 = 0x65207d7b3d617465;
          local_2558 = 0x207d7b3d736c6176;
          uStack_2550 = 0xa7d7b203a3a;
          puVar21 = (undefined8 *)FUN_18015b110(local_1a30,&local_2598);
          local_2758 = (char *)*puVar21;
          pdStack_2750 = (double *)puVar21[1];
          local_2ac8 = local_da8;
          local_2ad0 = (undefined8 **)&local_db4;
          local_2ad8 = (char **)&local_490;
          FUN_180332a80(&local_2758,&local_640,&local_1bd8,uVar15);
          goto LAB_1803177eb;
        }
LAB_1803177f0:
        if (uVar41 < 5) {
          DAT_180b8fc44 = 1;
        }
      }
      else {
LAB_1803177eb:
        if (!bVar3) goto LAB_1803177f0;
      }
      local_de8 = "proof";
      FUN_18031a3a0(&local_578,local_db0,1);
      FUN_180182930(local_dc8);
      goto LAB_1803180a4;
    }
    if (!bVar3) {
LAB_180317846:
      if (DAT_180b8fd1e == '\0') {
        local_1be0 = "player";
      }
      else {
        local_1be0 = "stand";
        if (DAT_180b8fd1f != 0) {
          local_1be0 = "duck";
        }
      }
      local_1be8 = (undefined8 *)(double)local_db8;
      local_1bf0 = (char *)(double)local_dbc;
      local_2758 = (char *)0xdb35e39b27e1c185;
      pdStack_2750 = (double *)0xa05181ee77d57a06;
      pcStack_2748 = (char *)0x929654b1461b7377;
      uStack_2740 = 0xa5cea54bfef7110;
      local_2738 = 0xa70c9f7f916b7e19;
      uStack_2730 = 0x2b2d6d82aa402c0a;
      uStack_2728 = 0xc064ed9510bc010b;
      uStack_2720 = 0xfec09918395f26c4;
      local_2718 = 0x835e2313e2c48f8d;
      uStack_2710 = 0xf863c3261a551f0e;
      uStack_2708 = 0x56a0bc092c25563f;
      local_2978 = (char *)0x67ff882c0a9bdf38;
      uStack_2700 = 0x67ff882c0a9bdf38;
      local_24f8 = 0x75736c657869705b;
      uStack_24f0 = 0x666f6f72702d6672;
      local_24e8 = 0x7d7b3d646d63205d;
      uStack_24e0 = 0x70657473204b4f20;
      local_24d8 = 0x68736977207d7b3d;
      uStack_24d0 = 0x3d776179207d7b3d;
      local_24c8 = 0x65207d66332e3a7b;
      uStack_24c0 = 0x66332e3a7b3d7272;
      local_24b8 = 0x3d736c617665207d;
      uStack_24b0 = 0x636e617473207d7b;
      local_24a8 = 0x203a3a207d7b3d65;
      uStack_24a0 = 0xa7d7b;
      puVar21 = (undefined8 *)FUN_18015b110(local_1a20,&local_24f8);
      local_2758 = (char *)*puVar21;
      pdStack_2750 = (double *)puVar21[1];
      local_2ab8 = local_da8;
      local_2ac0 = &local_1be0;
      local_2ac8 = (undefined ***)&local_db4;
      local_2ad0 = &local_1be8;
      local_2ad8 = &local_1bf0;
      FUN_180332c40(&local_2758,&local_640,&local_dc4,local_dc0);
    }
    cVar11 = local_dc0[0];
    auVar54 = ZEXT464((uint)local_dbc);
    local_de8 = "proven";
    local_628 = local_db8;
    _DAT_180b8fc48 = _DAT_180b8fc48 + 1;
    if (local_dc4 < 2) {
      cVar12 = '\x03';
    }
    else {
      cVar12 = (10.0 < local_624) + '\x01';
    }
    pcVar39 = "engine reaches a stationary contact within the horizon";
    if (local_dc4 < 2) {
      pcVar39 = "engine reaches a stationary contact this command";
    }
    FUN_1803190b0(&local_4f0,cVar12,pcVar39);
    if (1 < local_dc4) {
      local_62c = local_dc4;
    }
    FUN_180182930(local_dc8);
    auVar62 = auVar52._0_16_;
    auVar46 = auVar53._0_16_;
    auVar59 = auVar50._0_16_;
    auVar47 = auVar54._0_16_;
  }
  else {
    if (!bVar3) {
      auVar50 = ZEXT1664(auVar59);
      auVar53 = ZEXT1664(auVar46);
      auVar52 = ZEXT1664(auVar62);
      auVar54 = ZEXT1664(auVar63);
      auVar57 = ZEXT1664(auVar64);
      FUN_1803190b0(&local_4f0,4,"engine: ride in progress, taking over");
      auVar62 = auVar52._0_16_;
      auVar46 = auVar53._0_16_;
      auVar59 = auVar50._0_16_;
      auVar63 = auVar54._0_16_;
      auVar64 = auVar57._0_16_;
      auVar48 = ZEXT416((uint)local_4c0._4_4_);
    }
    local_de8 = "hold";
    cVar11 = '\x01';
    if ((local_4c0[0] == 1) && (cVar11 = local_4c0[1], local_4c0[1] != '\0')) {
      auVar47 = auVar48;
    }
    else {
      auVar47 = ZEXT416(DAT_180b8fcd8);
    }
    auVar4 = vpcmpeqd_avx(ZEXT116(local_4c0[0]),SUB6416(ZEXT464(1),0));
    auVar64 = vblendvps_avx(auVar64,ZEXT416((uint)local_4c0._16_4_),auVar4);
    if (local_648 == false) {
      if (local_4c0[0] == 1) {
        cVar11 = local_4c0[1];
        auVar47 = auVar48;
      }
      goto LAB_180317d9f;
    }
    local_2ab8 = (undefined ***)CONCAT44(local_2ab8._4_4_,auVar59._0_4_);
    local_2ac0 = (char **)local_5a8;
    local_2ac8 = (undefined ***)CONCAT71(local_2ac8._1_7_,1);
    local_2ad0 = (undefined8 **)CONCAT44(local_2ad0._4_4_,0xffffffff);
    local_2ad8 = (char **)CONCAT44(local_2ad8._4_4_,auVar64._0_4_);
    auVar50 = ZEXT1664(auVar47);
    auVar53 = ZEXT1664(auVar64);
    auVar52 = ZEXT1664(auVar59);
    auVar54 = ZEXT1664(auVar46);
    auVar57 = ZEXT1664(auVar62);
    auVar60 = ZEXT1664(auVar63);
    FUN_18031cbd0(&local_450,&local_530,local_618);
    fVar44 = local_634;
    auVar62 = auVar60._0_16_;
    auVar46 = auVar57._0_16_;
    auVar59 = auVar54._0_16_;
    auVar48 = auVar52._0_16_;
    auVar47 = auVar50._0_16_;
    uVar51 = auVar53._0_4_;
    if (((char)local_530 == '\0') && (DAT_180b8fc8c == '\0')) {
      local_634 = local_df8;
      if (local_530._4_4_ == auVar52._0_4_) {
LAB_1803169ee:
        uVar37 = auVar50._0_8_;
      }
      else {
        cVar12 = FUN_1800e7540((ulonglong)auStack_528 & 0xffffffff);
        uVar51 = auVar53._0_4_;
        if (cVar12 == '\0') goto LAB_1803169ee;
        uVar37 = local_530 >> 0x20;
      }
      local_2ab8 = (undefined ***)CONCAT44(local_2ab8._4_4_,auVar52._0_4_);
      local_2ac0 = (char **)local_5a8;
      local_2ac8 = (undefined ***)((ulonglong)local_2ac8 & 0xffffffffffffff00);
      local_2ad0 = (undefined8 **)CONCAT44(local_2ad0._4_4_,0xffffffff);
      local_2ad8 = (char **)CONCAT44(local_2ad8._4_4_,uVar51);
      FUN_18031cbd0(&local_450,&local_198,local_618,uVar37);
      auVar62 = auVar60._0_16_;
      auVar46 = auVar57._0_16_;
      auVar59 = auVar54._0_16_;
      auVar48 = auVar52._0_16_;
      auVar47 = auVar50._0_16_;
      iStack_18c = iStack_18c + auStack_528._4_4_;
      local_634 = fVar44;
      if (local_198 == '\0') {
        cVar12 = FUN_1800e7540((ulonglong)auStack_528 & 0xffffffff);
        auVar62 = auVar60._0_16_;
        auVar46 = auVar57._0_16_;
        auVar59 = auVar54._0_16_;
        auVar48 = auVar52._0_16_;
        auVar47 = auVar50._0_16_;
        if (cVar12 != '\0') goto LAB_180316a8c;
      }
      local_530 = CONCAT71(uStack_197,local_198);
      auStack_528 = (undefined1  [8])CONCAT44(iStack_18c,uStack_190);
      _auStack_520 = uStack_188;
      auStack_519._1_8_ = uStack_180;
      local_510 = local_178;
      uStack_508 = uStack_170;
    }
LAB_180316a8c:
    local_5d0[0] = auStack_528._4_4_;
    auVar50 = ZEXT1664(auVar47);
    auVar53 = ZEXT1664(auVar48);
    auVar52 = ZEXT1664(auVar59);
    auVar54 = ZEXT1664(auVar46);
    auVar57 = ZEXT1664(auVar62);
    cVar12 = FUN_1800e7540();
    auVar62 = auVar54._0_16_;
    auVar46 = auVar52._0_16_;
    auVar59 = auVar53._0_16_;
    if (cVar12 != '\0') {
      auVar50 = ZEXT464((uint)local_530._4_4_);
      cVar11 = '\x01';
      local_628 = (float)auStack_528._0_4_;
    }
    auVar47 = auVar50._0_16_;
    if ((char)local_530 == '\0') {
      local_658[0] = '\x1f';
      auVar47 = vcmpss_avx(ZEXT416((uint)auStack_519._1_4_),ZEXT416(0x4cbebc20),1);
      auVar47 = vblendvps_avx(auVar57._0_16_,ZEXT416((uint)auStack_519._1_4_),auVar47);
      local_1dd8 = (undefined **)(double)auVar47._0_4_;
      local_1bb0 = (char *)(double)local_510._4_4_;
      local_1bb8 = (undefined **)(double)(float)local_510;
      local_1bc8 = (double)(float)auStack_528._0_4_;
      local_1bd0 = (double)local_530._4_4_;
      local_2938 = 0xdb35e39b27e1c185;
      uStack_2930 = 0xa05181ee77d57a06;
      uStack_2928 = 0x929654b1461b7377;
      uStack_2920 = 0xbfef7110;
      uStack_291c = 0xa5cea54;
      uStack_2918 = 0xa70c9f7f916b7e19;
      uStack_2910 = 0xaa402c0a;
      uStack_290c = 0x2b2d6d82;
      uStack_2908 = 0x10bc010b;
      uStack_2904 = 0xc064ed95;
      uStack_2900 = 0x395f26c4;
      uStack_28fc = 0xfec09918;
      local_28f8 = 0x835e2313e2c48f8d;
      uStack_28f0 = 0x1a551f0e;
      uStack_28ec = 0xf863c326;
      uStack_28e8 = 0x2c25563f;
      uStack_28e4 = 0x56a0bc09;
      uStack_28e0 = 0xa9bdf38;
      uStack_28dc = 0x67ff882c;
      local_28d8 = 0xe9fbbd57d9292e61;
      auStack_28d0._8_8_ = 0xe0a313cd38802513;
      auStack_28d0._0_8_ = 0x24c1d5fafa9ec992;
      local_2978 = (char *)0x3a86d390ee208d6c;
      uStack_28c0 = 0x3a86d390ee208d6c;
      local_22f8 = 0x75736c657869705b;
      uStack_22f0 = 0x646c6f68205d6672;
      local_22e8 = 0x65766c6f736e7520;
      uStack_22e0 = 0x7d7b3d646d632064;
      local_22d8 = 0x61795f7473656220;
      uStack_22d0 = 0x7d66332e3a7b3d77;
      local_22c8 = 0x2e3a7b3d72726520;
      uStack_22c0 = 0x6c617665207d6633;
      local_22b8 = 0x6e6f63207d7b3d73;
      uStack_22b0 = 0x207d7b3d74636174;
      local_22a8 = 0x66332e3a7b3d7a64;
      uStack_22a0 = 0x2e3a7b3d7a76207d;
      local_2298 = 0x3d706167207d6633;
      uStack_2290 = 0x63207d66342e3a7b;
      local_2288 = 0xa7d7b3d70696c;
      uStack_2280 = 0;
      puVar21 = (undefined8 *)FUN_18015b110(local_1a40,&local_22f8);
      local_2758 = (char *)*puVar21;
      pdStack_2750 = (double *)puVar21[1];
      local_2ab0 = (double *)auStack_519;
      local_2ab8 = &local_1dd8;
      local_2ac0 = &local_1bb0;
      local_2ac8 = &local_1bb8;
      local_2ad0 = (undefined8 **)(auStack_520 + 6);
      local_2ad8 = (char **)(auStack_528 + 4);
      FUN_180332e50(&local_2758,&local_640,&local_1bd0,&local_1bc8);
      auVar62 = auVar54._0_16_;
      auVar46 = auVar52._0_16_;
      auVar59 = auVar53._0_16_;
      auVar47 = auVar50._0_16_;
    }
  }
LAB_180317d9f:
  DAT_180b8fc30 = 1;
  _DAT_180b8fc34 = _DAT_180b8fc34 + 1;
  if (local_658[0] == '\0') {
    if (cVar10 == '\0') {
      local_658[0] = (DAT_180b8fc32 == 3) + '#';
    }
    else {
      local_658[0] = '%';
    }
  }
  auVar50 = ZEXT1664(auVar47);
  auVar53 = ZEXT1664(auVar59);
  auVar52 = ZEXT1664(auVar46);
  auVar54 = ZEXT1664(auVar62);
  FUN_18030afc0(local_ef0,local_ee0,local_168);
  FUN_18030b660(local_ef0,local_de0,cVar11,auVar50._0_8_);
  if (DAT_180b8fd1e != '\0') {
    FUN_18030b110(local_ef0,local_ee0,DAT_180b8fd1f);
  }
  DAT_180b8fccc = 1;
  DAT_180b8fcd0 = auVar50._0_4_;
  DAT_180b8fcd5 = DAT_180b8fd1f;
  DAT_180b8fd1d = 1;
  lVar35 = local_ee0[6];
  if ((lVar35 == 0) || (lVar35 == -0x10)) {
    DAT_180b8fd10 = auVar53._0_4_;
  }
  else {
    DAT_180b8fd10 = *(undefined4 *)(lVar35 + 0x1c);
  }
  DAT_180b8fd14 = *(undefined4 *)(local_ee0 + 9);
  DAT_180b8fd18 = *(undefined4 *)((longlong)local_ee0 + 0x4c);
  DAT_180b8fd1c = *(byte *)(local_ef0 + 0x60) >> 2 & 1;
  auVar47 = vunpcklps_avx(ZEXT416((uint)fStack_e00),ZEXT416((uint)fStack_dfc));
  local_1c00 = auVar47._0_8_;
  local_1bf8 = local_df8;
  local_2ac0 = &pcStack_1bc;
  local_2ac8 = (undefined ***)&local_e38;
  local_2ad0 = (undefined8 **)CONCAT44(local_2ad0._4_4_,uStack_d6c);
  local_2ad8 = (char **)&uStack_ed4;
  DAT_180b8fccd = cVar11;
  DAT_180b8fcd4 = DAT_180b8fd1e;
  DAT_180b8fcd6 = cVar11;
  DAT_180b8fcd8 = DAT_180b8fcd0;
  local_638 = cVar11;
  local_5b8 = DAT_180b8fcd0;
  pauVar29 = (undefined1 (*) [16])FUN_180308540(local_1950,&local_1c00,cVar11,auVar50._0_8_);
  uVar37 = _DAT_180b8fdb0;
  fVar55 = auVar53._0_4_;
  auVar47._8_8_ = 0;
  auVar47._0_8_ = *(ulonglong *)pauVar29[1];
  DAT_180b8fdb0_4._2_2_ = SUB82(uVar37,6);
  _DAT_180b8fdb0 = CONCAT15(SUB161(*pauVar29,0xc),CONCAT14(1,_DAT_180b8fdb0));
  auVar47 = vshufps_avx(auVar47,auVar47,0x55);
  _DAT_180b8fdb8 = CONCAT44(auVar47._0_4_,SUB164(*pauVar29,8));
  fVar44 = (auVar52._0_4_ - uStack_e20._4_4_) * (float)local_e38 * local_e38._4_4_ +
           (float)local_e38 * local_e38._4_4_ * uStack_e20._4_4_;
  fVar45 = auVar50._0_4_ * auVar54._0_4_;
  auVar50 = ZEXT464((uint)fVar45);
  _DAT_180b8fdc4 = fVar44;
  if (cVar11 != '\0') {
    auVar47 = vminss_avx(ZEXT416(uStack_e30._4_4_),ZEXT416((uint)(float)uStack_e28));
    auVar52 = ZEXT1664(auVar47);
    fVar49 = (float)uStack_e28;
    fVar56 = (float)local_e38;
    fVar44 = (float)FUN_180638e00(fVar45);
    fVar44 = fVar44 * fStack_dfc;
    fVar45 = (float)FUN_180637540(auVar50._0_8_);
    fVar44 = auVar52._0_4_ - (fVar44 + fVar45 * fStack_e00);
    fVar55 = auVar53._0_4_;
    if (fVar55 < fVar44) {
      auVar47 = vminss_avx(ZEXT416((uint)(fVar49 * (float)uStack_e30 * fVar56 * uStack_e28._4_4_)),
                           ZEXT416((uint)fVar44));
      fVar55 = auVar47._0_4_;
    }
    fVar55 = fVar55 * (float)local_e18;
  }
  _DAT_180b8fdc0 = CONCAT44(_DAT_180b8fdc4,fVar55);
  if (cVar10 == '\0') {
    uVar38 = (uint)(DAT_180b8fc32 == 3);
  }
  if ((local_dec._1_1_ != '\0') && (local_658[0] == '#')) {
    local_658[0] = '\x1a';
  }
  DAT_180b8fd24 = uVar38;
  FUN_180318260(&local_278);
LAB_1803180a4:
  FUN_1801b3590(local_138);
}



