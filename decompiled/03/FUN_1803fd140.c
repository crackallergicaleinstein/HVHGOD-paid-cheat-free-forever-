// FUN_1803fd140 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803fd140 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1803fd140(undefined8 *param_1)

{
  float *pfVar1;
  float *pfVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auVar5 [16];
  double dVar6;
  undefined1 uVar7;
  char cVar8;
  int iVar9;
  float *pfVar10;
  ulonglong *puVar11;
  undefined1 uVar12;
  float *pfVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  byte bVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  char cVar21;
  char cVar22;
  undefined1 uVar23;
  undefined4 uVar24;
  undefined8 uVar25;
  undefined1 uVar26;
  undefined4 uVar27;
  undefined **ppuVar28;
  byte bVar29;
  float fVar30;
  undefined1 auVar31 [16];
  undefined1 extraout_var [56];
  undefined1 extraout_var_00 [56];
  undefined1 extraout_var_01 [56];
  undefined1 extraout_var_02 [56];
  undefined1 extraout_var_03 [56];
  undefined1 extraout_var_04 [56];
  undefined1 extraout_var_05 [56];
  float fVar32;
  undefined1 auVar33 [64];
  undefined1 auVar34 [64];
  float fVar35;
  undefined1 auVar36 [64];
  undefined1 auVar37 [64];
  undefined1 auVar38 [64];
  float fVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [64];
  undefined1 auVar42 [64];
  undefined1 auVar43 [16];
  undefined1 auVar44 [64];
  undefined1 auVar45 [64];
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined1 auVar50 [64];
  undefined1 auVar51 [16];
  undefined1 auStack_b78 [32];
  undefined **local_b58;
  char *local_b50;
  double local_b48;
  double local_b40;
  double local_b38;
  double local_b30;
  undefined8 local_b28;
  double local_b20;
  double local_b18;
  double local_b10;
  double local_b08;
  double local_b00;
  double local_af8;
  double local_af0;
  double local_ae8;
  double local_ae0;
  double local_ad8;
  double local_ad0;
  double local_ac8;
  double local_ac0;
  double local_ab8;
  double local_ab0;
  undefined4 local_aa8;
  undefined4 local_aa0;
  undefined1 local_a98;
  undefined1 local_a97;
  undefined1 local_a96;
  float local_a94;
  float local_a90;
  float local_a8c;
  float local_a88;
  undefined4 uStack_a84;
  float local_a80;
  undefined8 local_a78;
  undefined4 local_a70;
  undefined4 local_a6c;
  undefined4 local_a68;
  char *local_a60;
  longlong local_a58 [2];
  float local_a48 [4];
  uint uStack_a38;
  float local_a34;
  uint local_a2c;
  float local_a24;
  uint local_a1c;
  float local_a14;
  uint uStack_a0c;
  undefined4 local_a08;
  uint uStack_a04;
  longlong local_a00;
  uint local_9f8;
  undefined4 uStack_9f4;
  char local_9f0;
  undefined4 uStack_9ec;
  undefined4 uStack_9e8;
  char cStack_9e4;
  undefined4 local_9e0;
  undefined4 uStack_9dc;
  longlong local_9d8;
  char local_9d0;
  undefined1 auStack_9cc [48];
  char local_99c;
  longlong local_998;
  int local_990;
  char local_98c;
  float local_988;
  float fStack_984;
  float local_980;
  char cStack_97c;
  float local_978;
  float fStack_974;
  float local_970;
  char cStack_96c;
  undefined4 local_968;
  undefined4 uStack_964;
  int local_960;
  char local_95c;
  undefined4 uStack_958;
  undefined4 uStack_954;
  int local_950;
  char cStack_94c;
  undefined4 local_948;
  undefined4 uStack_944;
  int local_940;
  char cStack_93c;
  undefined4 local_938;
  undefined4 uStack_934;
  longlong local_930;
  longlong local_928;
  char local_920;
  undefined1 local_918 [32];
  char local_8f8;
  undefined1 local_8f4 [48];
  char local_8c4;
  undefined1 local_8c0 [28];
  char local_8a4;
  char local_8a0;
  char local_89f;
  char cStack_89e;
  char cStack_89d;
  char cStack_89c;
  char cStack_89b;
  undefined1 auStack_898 [24];
  uint local_880;
  uint local_87c;
  float local_874;
  uint local_870;
  char local_868;
  undefined4 uStack_864;
  undefined4 uStack_860;
  longlong local_85c;
  char local_854;
  longlong local_850;
  longlong local_848;
  int local_840;
  char local_83c;
  int local_838;
  char local_834;
  undefined1 local_830 [40];
  char local_808;
  undefined1 local_804 [80];
  char local_7b4;
  longlong local_7b0;
  char local_7a8;
  undefined1 local_7a4 [40];
  char local_77c;
  undefined1 local_778 [80];
  char local_728;
  longlong local_724;
  char local_71c;
  longlong local_718;
  float local_710;
  char local_70c;
  undefined4 uStack_708;
  undefined4 uStack_704;
  float local_700;
  char local_6fc;
  int iStack_6f8;
  char local_6f4;
  undefined4 local_6f0;
  undefined4 uStack_6ec;
  char local_6e8;
  char local_6d8 [1536];
  ulonglong local_d8;
  
  local_d8 = DAT_1808d5f00 ^ (ulonglong)auStack_b78;
  if (*(char *)(param_1 + 0xd) == '\0') {
  }
  uVar25 = 0;
  local_a58[0] = 0;
  local_a60 = "PREDICTION_AUDIT_REPORT_CPU_STATUS";
  FUN_18017bf40(local_a58);
  FUN_1803fb440(param_1,local_a48);
  uVar20 = 1;
  if ((*(char *)(param_1 + 0x38) == '\0') || (local_8f8 == '\0')) {
    local_a68 = 0;
LAB_1803fd22f:
    local_a6c = 0;
  }
  else {
    iVar9 = memcmp(param_1 + 0x34,local_918,0x20);
    local_a68 = 1;
    if (iVar9 != 0) goto LAB_1803fd22f;
    local_a6c = 1;
    local_a68 = 1;
  }
  if ((*(char *)(param_1 + 0x7a) == '\0') || (local_6e8 == '\0')) {
    bVar29 = 0;
  }
  else {
    bVar29 = 1;
  }
  if (((*(char *)(param_1 + 0x7a) == '\0') || (local_6e8 == '\0')) ||
     (param_1[0x79] != CONCAT44(uStack_6ec,local_6f0))) {
    bVar16 = 0;
  }
  else {
    bVar16 = 1;
  }
  uVar27 = 0;
  if (local_6e8 != '\0') {
    uVar27 = uStack_6ec;
  }
  if (*(char *)(param_1 + 0xe7) == '\0') {
    local_a70 = 0;
  }
  else {
    local_a70 = *(undefined4 *)((longlong)param_1 + 0x734);
  }
  if (*(char *)(param_1 + 0x7a) == '\0') {
    local_a78 = (ulonglong)local_a78._4_4_ << 0x20;
  }
  else {
    local_a78 = CONCAT44(local_a78._4_4_,*(undefined4 *)((longlong)param_1 + 0x3cc));
  }
  if ((*(char *)((longlong)param_1 + 0x69) == '\0') ||
     (((*(char *)(param_1 + 0x7a) != '\0' && (*(char *)(param_1 + 0xe7) != '\0')) &&
      (param_1[0x79] == param_1[0xe6])))) {
    uVar24 = 0;
  }
  else {
    uVar24 = 1;
  }
  if ((bVar29 != 0) && (bVar16 == 0)) {
    uVar25 = 3;
  }
  FUN_18063ab10(local_6d8,0,0x600);
  local_b28 = (double)CONCAT44(local_b28._4_4_,uVar27);
  local_b30 = (double)CONCAT44(local_b30._4_4_,local_a70);
  local_b38 = (double)CONCAT44(local_b38._4_4_,(float)local_a78);
  local_b40 = (double)CONCAT44(local_b40._4_4_,(uint)bVar16);
  local_b48 = (double)CONCAT44(local_b48._4_4_,uVar24);
  local_b50 = (char *)CONCAT44(local_b50._4_4_,(uint)bVar29);
  local_b58 = (undefined **)param_1[0xc];
  FUN_18015ad60(local_6d8,0x600,0xffffffffffffffff,
                "command=%lld sampled=%d metadata_changed=%d metadata_restored=%d stamp_before=%u stamp_trial=%u stamp_after=%u custom_global_clock=0 native_scope_balancing=game"
               );
  local_b58 = &PTR_180700558;
  if (local_6d8[0] != '\0') {
    local_b58 = (undefined **)&DAT_1806bcfc0;
  }
  local_b50 = local_6d8;
  FUN_1800f6900(uVar25);
  bVar29 = *(byte *)((longlong)param_1 + 0x6d);
  pfVar1 = (float *)((longlong)param_1 + 0x7c);
  auVar50 = ZEXT464(0x7fc00000);
  pfVar2 = (float *)(param_1 + 0xe);
  if ((*(char *)pfVar1 == '\0') || (SUB41(local_a48[3],0) == '\0')) {
LAB_1803fd3e6:
    uVar27 = 0;
    if (*(char *)pfVar1 != '\0') goto LAB_1803fd3f0;
LAB_1803fd41d:
    auVar31 = auVar50._0_16_;
  }
  else {
    pfVar13 = local_a48;
    for (pfVar10 = pfVar2; pfVar10 != pfVar1; pfVar10 = pfVar10 + 1) {
      if (*pfVar10 != *pfVar13) goto LAB_1803fd3e6;
      pfVar13 = pfVar13 + 1;
    }
    uVar27 = 1;
LAB_1803fd3f0:
    if (SUB41(local_a48[3],0) == '\0') goto LAB_1803fd41d;
    auVar36._0_8_ =
         FUN_1806052cc(*pfVar2 - local_a48[0],*(float *)((longlong)param_1 + 0x74) - local_a48[1],
                       *(float *)(param_1 + 0xf) - local_a48[2]);
    auVar36._8_56_ = extraout_var;
    auVar31 = auVar36._0_16_;
  }
  auVar36 = ZEXT1664(auVar31);
  if ((*(char *)((longlong)param_1 + 0x7c) == '\0') ||
     (*(char *)((longlong)param_1 + 0x3e4) == '\0')) {
    auVar31 = auVar50._0_16_;
  }
  else {
    auVar33._0_8_ =
         FUN_1806052cc(*pfVar2 - *(float *)(param_1 + 0x7b),
                       *(float *)((longlong)param_1 + 0x74) - *(float *)((longlong)param_1 + 0x3dc),
                       *(float *)(param_1 + 0xf) - *(float *)(param_1 + 0x7c));
    auVar33._8_56_ = extraout_var_00;
    auVar31 = auVar33._0_16_;
  }
  auVar33 = ZEXT1664(auVar31);
  FUN_18063ab10(local_6d8,0,0x600);
  local_b18 = (double)auVar36._0_4_;
  local_b20 = (double)auVar33._0_4_;
  local_b08 = (double)CONCAT44(local_b08._4_4_,(uint)bVar29);
  local_b10 = (double)CONCAT44(local_b10._4_4_,uVar27);
  local_b28 = (double)(CONCAT44(local_b28._4_4_,local_a48[3]) & 0xffffffff000000ff);
  local_b30 = (double)CONCAT44(local_b30._4_4_,(uint)*(byte *)((longlong)param_1 + 0x3e4));
  local_b38 = (double)CONCAT44(local_b38._4_4_,(uint)*(byte *)pfVar1);
  local_b40 = (double)CONCAT44(local_b40._4_4_,(uint)*(byte *)((longlong)param_1 + 0x6c));
  local_b48 = (double)CONCAT44(local_b48._4_4_,(uint)*(byte *)((longlong)param_1 + 0x6b));
  local_b50 = (char *)CONCAT44(local_b50._4_4_,(uint)*(byte *)((longlong)param_1 + 0x6a));
  local_b58 = (undefined **)param_1[0xc];
  FUN_18015ad60(local_6d8,0x600,0xffffffffffffffff,
                "command=%lld completed=%d antiaim_enabled=%d contact_trial=%d cache_valid=(%d,%d,%d) trial_delta=%.4f after_rollback_delta=%.4f cache_restored=%d snapshot_cache_restore=%d graph_heap_writes=0"
               );
  local_b58 = &PTR_180700558;
  if (local_6d8[0] != '\0') {
    local_b58 = (undefined **)&DAT_1806bcfc0;
  }
  local_b50 = local_6d8;
  FUN_1800f6900(0);
  cVar8 = local_9f0;
  auVar31 = auVar50._0_16_;
  if (local_9f0 == '\0') {
    auVar36 = ZEXT1664(auVar31);
    auVar33 = ZEXT1664(auVar31);
  }
  else {
    auVar36 = ZEXT464(local_9f8);
    auVar33 = ZEXT464(uStack_a04);
  }
  if (*(char *)(param_1 + 0x86) == '\0') {
    auVar41 = ZEXT1664(auVar31);
    auVar44 = ZEXT1664(auVar31);
  }
  else {
    auVar41 = ZEXT464(*(uint *)(param_1 + 0x85));
    auVar44 = ZEXT464(*(uint *)((longlong)param_1 + 0x41c));
  }
  if (*(char *)(param_1 + 0x19) == '\0') {
    auVar34 = ZEXT1664(auVar31);
    auVar37 = ZEXT1664(auVar31);
  }
  else {
    auVar34 = ZEXT464(*(uint *)(param_1 + 0x18));
    auVar37 = ZEXT464(*(uint *)((longlong)param_1 + 0xb4));
  }
  if ((((*(char *)((longlong)param_1 + 300) == '\0') || (local_98c == '\0')) ||
      (param_1[0x24] != local_998)) || (*(int *)(param_1 + 0x25) != local_990)) {
    local_a78._0_4_ = 0.0;
  }
  else {
    local_a78._0_4_ = 1.4013e-45;
  }
  bVar29 = *(byte *)((longlong)param_1 + 0x69);
  if ((bVar29 == 0) ||
     (((*(char *)((longlong)param_1 + 300) != '\0' && (*(char *)((longlong)param_1 + 0x494) != '\0')
       ) && ((param_1[0x24] == param_1[0x91] &&
             (*(int *)(param_1 + 0x25) == *(int *)(param_1 + 0x92))))))) {
    local_a70 = 0;
  }
  else {
    local_a70 = 1;
  }
  cVar21 = *(char *)((longlong)param_1 + 0x11c);
  if ((cVar21 == '\0') || (local_99c == '\0')) {
LAB_1803fd657:
    local_a80 = 0.0;
  }
  else {
    iVar9 = memcmp((void *)((longlong)param_1 + 0xec),auStack_9cc,0x30);
    local_a80 = 1.4013e-45;
    if (iVar9 != 0) goto LAB_1803fd657;
  }
  if ((bVar29 == 0) ||
     (((cVar21 != '\0' && (*(char *)((longlong)param_1 + 0x484) != '\0')) &&
      (iVar9 = memcmp((void *)((longlong)param_1 + 0xec),(void *)((longlong)param_1 + 0x454),0x30),
      iVar9 == 0)))) {
    local_a8c = 0.0;
  }
  else {
    local_a8c = 1.4013e-45;
  }
  if (((*(char *)(param_1 + 0x1d) == '\0') || (local_9d0 == '\0')) ||
     ((param_1[0x1b] != CONCAT44(uStack_9dc,local_9e0) ||
      (local_a94 = 1.4013e-45, param_1[0x1c] != local_9d8)))) {
    local_a94 = 0.0;
  }
  if ((bVar29 == 0) ||
     (((*(char *)(param_1 + 0x1d) != '\0' && (*(char *)(param_1 + 0x8a) != '\0')) &&
      ((param_1[0x1b] == param_1[0x88] && (param_1[0x1c] == param_1[0x89])))))) {
    local_a90 = 0.0;
  }
  else {
    local_a90 = 1.4013e-45;
  }
  if (((*(char *)((longlong)param_1 + 0xd4) == '\0') || (cStack_9e4 == '\0')) ||
     (local_a88 = 1.4013e-45,
     *(longlong *)((longlong)param_1 + 0xcc) != CONCAT44(uStack_9e8,uStack_9ec))) {
    local_a88 = 0.0;
  }
  if ((bVar29 == 0) ||
     (((*(char *)((longlong)param_1 + 0xd4) != '\0' &&
       (*(char *)((longlong)param_1 + 0x43c) != '\0')) &&
      (*(longlong *)((longlong)param_1 + 0xcc) == *(longlong *)((longlong)param_1 + 0x434))))) {
    uVar27 = 0;
  }
  else {
    uVar27 = 1;
  }
  if (((*(char *)(param_1 + 0x19) == '\0') || (cVar8 == '\0')) ||
     ((param_1[0x16] != CONCAT44(uStack_a04,local_a08) ||
      ((param_1[0x17] != local_a00 || (uVar24 = 1, param_1[0x18] != CONCAT44(uStack_9f4,local_9f8)))
      )))) {
    uVar24 = 0;
  }
  if ((bVar29 == 0) ||
     ((((*(char *)(param_1 + 0x19) != '\0' && (*(char *)(param_1 + 0x86) != '\0')) &&
       (param_1[0x16] == param_1[0x83])) &&
      ((param_1[0x17] == param_1[0x84] && (param_1[0x18] == param_1[0x85])))))) {
    uVar19 = 0;
  }
  else {
    uVar19 = 1;
  }
  if (((*(char *)(param_1 + 0x19) == '\0') || (*(char *)((longlong)param_1 + 0xd4) == '\0')) ||
     ((((*(char *)(param_1 + 0x1d) == '\0' ||
        (((*(char *)((longlong)param_1 + 0x11c) == '\0' ||
          (*(char *)((longlong)param_1 + 300) == '\0')) || (local_9f0 == '\0')))) ||
       (((cStack_9e4 == '\0' || (local_9d0 == '\0')) || (local_99c == '\0')))) ||
      (uVar17 = 1, local_98c == '\0')))) {
    uVar17 = 0;
  }
  FUN_18063ab10(local_6d8,0,0x600);
  local_ac0 = (double)auVar36._0_4_;
  local_ac8 = (double)auVar33._0_4_;
  local_ad0 = (double)auVar41._0_4_;
  local_ad8 = (double)auVar44._0_4_;
  local_ae0 = (double)auVar34._0_4_;
  local_ae8 = (double)auVar37._0_4_;
  local_af0 = (double)CONCAT44(local_af0._4_4_,(float)local_a78);
  local_af8 = (double)CONCAT44(local_af8._4_4_,local_a70);
  local_b00 = (double)CONCAT44(local_b00._4_4_,local_a80);
  local_b08 = (double)CONCAT44(local_b08._4_4_,local_a8c);
  local_b10._0_4_ = local_a94;
  local_b18._0_4_ = local_a90;
  local_b20._0_4_ = local_a88;
  local_b50 = (char *)CONCAT44(local_b50._4_4_,(uint)*(byte *)((longlong)param_1 + 0x6c));
  local_b58 = (undefined **)param_1[0xc];
  local_b28._0_4_ = uVar27;
  local_b30._0_4_ = uVar24;
  local_b38._0_4_ = uVar19;
  local_b40._0_4_ = (uint)bVar29;
  local_b48._0_4_ = uVar17;
  FUN_18015ad60(local_6d8,0x600,0xffffffffffffffff,
                "command=%lld contact_trial=%d sampled=%d simulated_sampled=%d contexts_changed=%d contexts_restored=%d clocks_changed=%d clocks_restored=%d times_changed=%d times_restored=%d history_changed=%d history_restored=%d angular_velocity_changed=%d angular_velocity_restored=%d context_yaw_before=(%.3f,%.3f) context_yaw_trial=(%.3f,%.3f) context_yaw_restored=(%.3f,%.3f) phase=after_rollback heap_history_rollback=unverified server_ack=unverified"
               );
  local_b58 = &PTR_180700558;
  if (local_6d8[0] != '\0') {
    local_b58 = (undefined **)&DAT_1806bcfc0;
  }
  local_b50 = local_6d8;
  FUN_1800f6900(0);
  auVar36 = ZEXT464(0xbf800000);
  auVar31 = auVar36._0_16_;
  if ((local_6fc == '\0') || (local_70c == '\0')) {
    auVar33 = ZEXT1664(auVar31);
  }
  else {
    auVar33 = ZEXT464((uint)(local_700 - local_710));
  }
  if ((*(char *)((longlong)param_1 + 0x724) == '\0') ||
     (*(char *)((longlong)param_1 + 0x714) == '\0')) {
    auVar41 = ZEXT1664(auVar31);
  }
  else {
    auVar41 = ZEXT464((uint)(*(float *)(param_1 + 0xe4) - *(float *)(param_1 + 0xe2)));
  }
  if ((*(char *)((longlong)param_1 + 0x3bc) == '\0') ||
     (*(char *)((longlong)param_1 + 0x3ac) == '\0')) {
    auVar44 = ZEXT1664(auVar31);
  }
  else {
    auVar44 = ZEXT464((uint)(*(float *)(param_1 + 0x77) - *(float *)(param_1 + 0x75)));
  }
  if (((*(char *)((longlong)param_1 + 0x3c4) == '\0') || (local_6f4 == '\0')) ||
     (*(int *)(param_1 + 0x78) != iStack_6f8)) {
    local_a88 = 0.0;
  }
  else {
    local_a88 = 1.4013e-45;
  }
  if (((*(char *)((longlong)param_1 + 0x3bc) == '\0') || (local_6fc == '\0')) ||
     ((param_1[0x76] != CONCAT44(uStack_704,uStack_708) ||
      (local_a90 = 1.4013e-45, *(float *)(param_1 + 0x77) != local_700)))) {
    local_a90 = 0.0;
  }
  if (((*(char *)((longlong)param_1 + 0x3ac) == '\0') || (local_70c == '\0')) ||
     ((param_1[0x74] != local_718 ||
      (local_a94 = 1.4013e-45, *(float *)(param_1 + 0x75) != local_710)))) {
    local_a94 = 0.0;
  }
  bVar29 = *(byte *)((longlong)param_1 + 0x69);
  if ((bVar29 == 0) ||
     (((*(char *)((longlong)param_1 + 0x3c4) != '\0' &&
       (*(char *)((longlong)param_1 + 0x72c) != '\0')) &&
      (*(int *)(param_1 + 0x78) == *(int *)(param_1 + 0xe5))))) {
    uVar27 = 0;
    if (bVar29 != 0) goto LAB_1803fdaae;
LAB_1803fdade:
    uVar24 = 0;
    if (bVar29 != 0) goto LAB_1803fdae6;
LAB_1803fdb17:
    uVar19 = 0;
  }
  else {
    uVar27 = 1;
LAB_1803fdaae:
    if (((*(char *)((longlong)param_1 + 0x3bc) != '\0') &&
        (*(char *)((longlong)param_1 + 0x724) != '\0')) &&
       ((param_1[0x76] == param_1[0xe3] && (*(int *)(param_1 + 0x77) == *(int *)(param_1 + 0xe4)))))
    goto LAB_1803fdade;
    uVar24 = 1;
LAB_1803fdae6:
    if (((*(char *)((longlong)param_1 + 0x3ac) != '\0') &&
        (*(char *)((longlong)param_1 + 0x714) != '\0')) &&
       ((param_1[0x74] == param_1[0xe1] && (*(int *)(param_1 + 0x75) == *(int *)(param_1 + 0xe2)))))
    goto LAB_1803fdb17;
    uVar19 = 1;
  }
  if (((*(char *)((longlong)param_1 + 0x3ac) == '\0') ||
      (*(char *)((longlong)param_1 + 0x3bc) == '\0')) ||
     (uVar17 = 1, *(char *)((longlong)param_1 + 0x3c4) == '\0')) {
    uVar17 = 0;
  }
  FUN_18063ab10(local_6d8,0,0x600);
  local_af8 = (double)auVar33._0_4_;
  local_b00 = (double)auVar41._0_4_;
  local_b08 = (double)auVar44._0_4_;
  local_b10 = (double)CONCAT44(local_b10._4_4_,local_a88);
  local_b18 = (double)CONCAT44(local_b18._4_4_,local_a90);
  local_b20 = (double)CONCAT44(local_b20._4_4_,local_a94);
  local_b28 = (double)CONCAT44(local_b28._4_4_,uVar27);
  local_b30 = (double)CONCAT44(local_b30._4_4_,uVar24);
  local_b38 = (double)CONCAT44(local_b38._4_4_,uVar19);
  local_b40 = (double)CONCAT44(local_b40._4_4_,(uint)bVar29);
  local_b48 = (double)CONCAT44(local_b48._4_4_,uVar17);
  local_b50 = (char *)CONCAT44(local_b50._4_4_,(uint)*(byte *)((longlong)param_1 + 0x6c));
  local_b58 = (undefined **)param_1[0xc];
  FUN_18015ad60(local_6d8,0x600,0xffffffffffffffff,
                "command=%lld contact_trial=%d sampled=%d simulated_sampled=%d mins_changed=%d maxs_changed=%d radius_changed=%d mins_restored=%d maxs_restored=%d radius_restored=%d height_before=%.3f height_trial=%.3f height_restored=%.3f phase=after_rollback server_ack=unverified"
               );
  local_b58 = &PTR_180700558;
  if (local_6d8[0] != '\0') {
    local_b58 = (undefined **)&DAT_1806bcfc0;
  }
  local_b50 = local_6d8;
  FUN_1800f6900(0);
  if (((*(char *)(param_1 + 0x62) == '\0') || (local_7a8 == '\0')) ||
     (local_a98 = 1, param_1[0x61] != local_7b0)) {
    local_a98 = 0;
  }
  cVar8 = *(char *)((longlong)param_1 + 0x69);
  if ((cVar8 == '\0') ||
     (((*(char *)(param_1 + 0x62) != '\0' && (*(char *)(param_1 + 0xcf) != '\0')) &&
      (param_1[0x61] == param_1[0xce])))) {
    local_a97 = 0;
  }
  else {
    local_a97 = 1;
  }
  cVar21 = *(char *)((longlong)param_1 + 0x304);
  if ((cVar21 == '\0') || (local_7b4 == '\0')) {
LAB_1803fdc9d:
    local_a96 = 0;
  }
  else {
    iVar9 = memcmp((void *)((longlong)param_1 + 0x2b4),local_804,0x50);
    local_a96 = 1;
    if (iVar9 != 0) goto LAB_1803fdc9d;
  }
  if ((cVar8 == '\0') ||
     (((cVar21 != '\0' && (*(char *)((longlong)param_1 + 0x66c) != '\0')) &&
      (iVar9 = memcmp((void *)((longlong)param_1 + 0x2b4),(void *)((longlong)param_1 + 0x61c),0x50),
      iVar9 == 0)))) {
    uVar26 = 0;
  }
  else {
    uVar26 = 1;
  }
  cVar21 = *(char *)(param_1 + 0x56);
  if (((cVar21 == '\0') || (local_808 == '\0')) ||
     (iVar9 = memcmp(param_1 + 0x51,local_830,0x28), iVar9 != 0)) {
    uVar23 = 0;
  }
  else {
    uVar23 = 1;
  }
  if ((cVar8 == '\0') ||
     (((cVar21 != '\0' && (*(char *)(param_1 + 0xc3) != '\0')) &&
      (iVar9 = memcmp(param_1 + 0x51,param_1 + 0xbe,0x28), iVar9 == 0)))) {
    uVar12 = 0;
  }
  else {
    uVar12 = 1;
  }
  if (((*(char *)(param_1 + 0x56) == '\0') || (*(char *)((longlong)param_1 + 0x304) == '\0')) ||
     (*(char *)(param_1 + 0x62) == '\0')) {
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
  local_b20 = (double)CONCAT71(local_b20._1_7_,local_a98);
  local_b28 = (double)CONCAT71(local_b28._1_7_,local_a97);
  local_b30 = (double)CONCAT71(local_b30._1_7_,local_a96);
  local_b38 = (double)CONCAT71(local_b38._1_7_,uVar26);
  local_b40 = (double)CONCAT71(local_b40._1_7_,uVar23);
  local_b48 = (double)CONCAT71(local_b48._1_7_,uVar12);
  local_b50 = (char *)CONCAT71(local_b50._1_7_,uVar7);
  local_b58 = (undefined **)param_1[0xc];
  FUN_180414340(uVar12,local_a96,"PREDICTION_VELOCITY_TRANSACTION");
  if (((*(char *)((longlong)param_1 + 0x39c) == '\0') || (local_71c == '\0')) ||
     (local_a96 = 1, *(longlong *)((longlong)param_1 + 0x394) != local_724)) {
    local_a96 = 0;
  }
  cVar8 = *(char *)((longlong)param_1 + 0x69);
  if ((cVar8 == '\0') ||
     (((*(char *)((longlong)param_1 + 0x39c) != '\0' &&
       (*(char *)((longlong)param_1 + 0x704) != '\0')) &&
      (*(longlong *)((longlong)param_1 + 0x394) == *(longlong *)((longlong)param_1 + 0x6fc))))) {
    local_a97 = 0;
  }
  else {
    local_a97 = 1;
  }
  cVar21 = *(char *)(param_1 + 0x72);
  if ((cVar21 == '\0') || (local_728 == '\0')) {
LAB_1803fde3e:
    local_a98 = 0;
  }
  else {
    iVar9 = memcmp(param_1 + 0x68,local_778,0x50);
    local_a98 = 1;
    if (iVar9 != 0) goto LAB_1803fde3e;
  }
  if ((cVar8 == '\0') ||
     (((cVar21 != '\0' && (*(char *)(param_1 + 0xdf) != '\0')) &&
      (iVar9 = memcmp(param_1 + 0x68,param_1 + 0xd5,0x50), iVar9 == 0)))) {
    uVar26 = 0;
  }
  else {
    uVar26 = 1;
  }
  cVar21 = *(char *)((longlong)param_1 + 0x33c);
  if (((cVar21 == '\0') || (local_77c == '\0')) ||
     (iVar9 = memcmp((void *)((longlong)param_1 + 0x314),local_7a4,0x28), iVar9 != 0)) {
    uVar23 = 0;
  }
  else {
    uVar23 = 1;
  }
  if ((cVar8 == '\0') ||
     (((cVar21 != '\0' && (*(char *)((longlong)param_1 + 0x6a4) != '\0')) &&
      (iVar9 = memcmp((void *)((longlong)param_1 + 0x314),(void *)((longlong)param_1 + 0x67c),0x28),
      iVar9 == 0)))) {
    uVar12 = 0;
  }
  else {
    uVar12 = 1;
  }
  if (((*(char *)((longlong)param_1 + 0x33c) == '\0') || (*(char *)(param_1 + 0x72) == '\0')) ||
     (*(char *)((longlong)param_1 + 0x39c) == '\0')) {
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
  local_b20 = (double)CONCAT71(local_b20._1_7_,local_a96);
  local_b28 = (double)CONCAT71(local_b28._1_7_,local_a97);
  local_b30 = (double)CONCAT71(local_b30._1_7_,local_a98);
  local_b38 = (double)CONCAT71(local_b38._1_7_,uVar26);
  local_b40 = (double)CONCAT71(local_b40._1_7_,uVar23);
  local_b48 = (double)CONCAT71(local_b48._1_7_,uVar12);
  local_b50 = (char *)CONCAT71(local_b50._1_7_,uVar7);
  local_b58 = (undefined **)param_1[0xc];
  FUN_180414340(uVar12,local_a98,"PREDICTION_VIEW_OFFSET_TRANSACTION");
  auVar31 = auVar36._0_16_;
  if (((*(char *)((longlong)param_1 + 0x15c) == '\0') || (local_95c == '\0')) ||
     ((param_1[0x2a] != CONCAT44(uStack_964,local_968) || (*(int *)(param_1 + 0x2b) != local_960))))
  {
    uVar27 = 0;
  }
  else {
    uVar27 = 1;
  }
  if ((*(char *)((longlong)param_1 + 0x15c) == '\0') || (local_95c == '\0')) {
    uVar24 = 0;
  }
  else {
    uVar24 = 1;
  }
  pfVar1 = (float *)(param_1 + 0x28);
  cVar8 = *(char *)((longlong)param_1 + 0x14c);
  auVar33 = ZEXT864(0);
  if ((((cVar8 == '\0') || (cStack_96c == '\0')) ||
      (*(longlong *)pfVar1 != CONCAT44(fStack_974,local_978))) ||
     (*(float *)(param_1 + 0x29) != local_970)) {
    uVar19 = 0;
    if (cVar8 != '\0') goto LAB_1803fdfe7;
LAB_1803fe069:
    auVar36 = ZEXT1664(auVar31);
    if (cVar8 != '\0') goto LAB_1803fe079;
LAB_1803fe0db:
    auVar41 = ZEXT1664(auVar31);
  }
  else {
    uVar19 = 1;
LAB_1803fdfe7:
    if (cStack_96c == '\0') goto LAB_1803fe069;
    fStack_974 = *(float *)((longlong)param_1 + 0x144) - fStack_974;
    fVar30 = fStack_974 * fStack_974 + (*pfVar1 - local_978) * (*pfVar1 - local_978) +
             (*(float *)(param_1 + 0x29) - local_970) * (*(float *)(param_1 + 0x29) - local_970);
    if (fVar30 == 0.0) {
      auVar36 = ZEXT864(0);
    }
    else if (fVar30 < 0.0) {
      auVar41._0_8_ = FUN_18061e150(fVar30);
      auVar31 = auVar36._0_16_;
      auVar41._8_56_ = extraout_var_01;
      auVar36 = ZEXT1664(auVar41._0_16_);
    }
    else {
      auVar36 = ZEXT464((uint)SQRT(fVar30));
    }
LAB_1803fe079:
    if (*(char *)((longlong)param_1 + 0x4b4) == '\0') goto LAB_1803fe0db;
    fVar30 = *(float *)((longlong)param_1 + 0x144) - *(float *)((longlong)param_1 + 0x4ac);
    fVar30 = fVar30 * fVar30 +
             (*pfVar1 - *(float *)(param_1 + 0x95)) * (*pfVar1 - *(float *)(param_1 + 0x95)) +
             (*(float *)(param_1 + 0x29) - *(float *)(param_1 + 0x96)) *
             (*(float *)(param_1 + 0x29) - *(float *)(param_1 + 0x96));
    if (fVar30 == auVar33._0_4_) {
      auVar41 = ZEXT864(0);
    }
    else if (fVar30 < 0.0) {
      auVar44._0_8_ = FUN_18061e150(fVar30);
      auVar44._8_56_ = extraout_var_02;
      auVar41 = ZEXT1664(auVar44._0_16_);
    }
    else {
      auVar41 = ZEXT464((uint)SQRT(fVar30));
    }
  }
  if ((*(char *)((longlong)param_1 + 0x14c) == '\0') || (cStack_96c == '\0')) {
    uVar17 = 0;
  }
  else {
    uVar17 = 1;
  }
  FUN_18063ab10(local_6d8,0,0x600);
  local_b40 = (double)auVar36._0_4_;
  local_b48 = (double)auVar41._0_4_;
  local_b28 = (double)CONCAT44(local_b28._4_4_,uVar27);
  local_b30 = (double)CONCAT44(local_b30._4_4_,uVar24);
  local_b38 = (double)CONCAT44(local_b38._4_4_,uVar19);
  local_b50 = (char *)CONCAT44(local_b50._4_4_,uVar17);
  local_b58 = (undefined **)param_1[0xc];
  FUN_18015ad60(local_6d8,0x600,0xffffffffffffffff,
                "command=%lld wrapped_origin_valid=%d wrapped_trial_distance=%.4f wrapped_rollback_distance=%.4f wrapped_origin_restored=%d wrapped_rotation_valid=%d wrapped_rotation_restored=%d phase=after_rollback server_ack=unverified"
               );
  local_b58 = &PTR_180700558;
  if (local_6d8[0] != '\0') {
    local_b58 = (undefined **)&DAT_1806bcfc0;
  }
  local_b50 = local_6d8;
  FUN_1800f6900(0);
  cVar8 = *(char *)((longlong)param_1 + 0x214);
  if ((cVar8 == '\0') || (local_8a4 == '\0')) {
LAB_1803fe1cc:
    local_a88 = 0.0;
  }
  else {
    iVar9 = memcmp(param_1 + 0x3f,local_8c0,0x1c);
    local_a88 = 1.4013e-45;
    if (iVar9 != 0) goto LAB_1803fe1cc;
  }
  cVar21 = *(char *)((longlong)param_1 + 0x69);
  if ((cVar21 == '\0') ||
     (((cVar8 != '\0' && (*(char *)((longlong)param_1 + 0x57c) != '\0')) &&
      (iVar9 = memcmp(param_1 + 0x3f,param_1 + 0xac,0x1c), iVar9 == 0)))) {
    uVar27 = 0;
  }
  else {
    uVar27 = 1;
  }
  cVar8 = *(char *)((longlong)param_1 + 500);
  if (((cVar8 == '\0') || (local_8c4 == '\0')) ||
     (iVar9 = memcmp((void *)((longlong)param_1 + 0x1c4),local_8f4,0x30), iVar9 != 0)) {
    uVar24 = 0;
  }
  else {
    uVar24 = 1;
  }
  if ((cVar21 == '\0') ||
     (((cVar8 != '\0' && (*(char *)((longlong)param_1 + 0x55c) != '\0')) &&
      (iVar9 = memcmp((void *)((longlong)param_1 + 0x1c4),(void *)((longlong)param_1 + 0x52c),0x30),
      iVar9 == 0)))) {
    uVar19 = 0;
  }
  else {
    uVar19 = 1;
  }
  uVar17 = 0;
  if ((*(char *)((longlong)param_1 + 500) == '\0') ||
     (uVar18 = 1, *(char *)((longlong)param_1 + 0x214) == '\0')) {
    uVar18 = 0;
  }
  FUN_18063ab10(local_6d8,0,0x600);
  local_b30 = (double)CONCAT44(local_b30._4_4_,local_a88);
  local_b38 = (double)CONCAT44(local_b38._4_4_,uVar27);
  local_b40 = (double)CONCAT44(local_b40._4_4_,uVar24);
  local_b48 = (double)CONCAT44(local_b48._4_4_,uVar19);
  local_b50 = (char *)CONCAT44(local_b50._4_4_,uVar18);
  local_b58 = (undefined **)param_1[0xc];
  FUN_18015ad60(local_6d8,0x600,0xffffffffffffffff,
                "command=%lld sampled=%d transitions_changed=%d transitions_restored=%d yaw_changed=%d yaw_restored=%d server_ack=unverified"
               );
  local_b58 = &PTR_180700558;
  if (local_6d8[0] != '\0') {
    local_b58 = (undefined **)&DAT_1806bcfc0;
  }
  local_b50 = local_6d8;
  FUN_1800f6900(0);
  if (local_868 == '\0') {
    auVar36 = ZEXT1664(auVar50._0_16_);
    local_a88 = auVar50._0_4_;
  }
  else {
    auVar36 = ZEXT464(local_870);
    local_a88 = local_874;
  }
  if (*(char *)(param_1 + 0x4a) == '\0') {
    auVar41 = ZEXT1664(auVar50._0_16_);
  }
  else {
    auVar41 = ZEXT464(*(uint *)(param_1 + 0x49));
    auVar50 = ZEXT464(*(uint *)((longlong)param_1 + 0x244));
  }
  auVar31 = SUB6416(ZEXT464(0x7fc00000),0);
  if (local_868 == '\0') {
    auVar44 = ZEXT1664(auVar31);
    auVar34 = ZEXT1664(auVar31);
  }
  else {
    auVar44 = ZEXT464(local_87c);
    auVar34 = ZEXT464(local_880);
  }
  if (*(char *)(param_1 + 0xb7) == '\0') {
    auVar37 = ZEXT1664(auVar31);
    auVar38 = ZEXT1664(auVar31);
  }
  else {
    auVar37 = ZEXT464(*(uint *)((longlong)param_1 + 0x5a4));
    auVar38 = ZEXT464(*(uint *)(param_1 + 0xb4));
  }
  if (*(char *)(param_1 + 0x4a) == '\0') {
    auVar42 = ZEXT1664(auVar31);
    auVar45 = ZEXT1664(auVar31);
  }
  else {
    auVar45 = ZEXT464(*(uint *)(param_1 + 0x47));
    auVar42 = ZEXT464(*(uint *)((longlong)param_1 + 0x23c));
  }
  cVar8 = *(char *)((longlong)param_1 + 0x284);
  if (((cVar8 == '\0') || (local_834 == '\0')) ||
     (local_a90 = 1.4013e-45, *(int *)(param_1 + 0x50) != local_838)) {
    local_a90 = 0.0;
  }
  cVar21 = *(char *)((longlong)param_1 + 0x69);
  if ((cVar21 == '\0') ||
     (((cVar8 != '\0' && (*(char *)((longlong)param_1 + 0x5ec) != '\0')) &&
      (*(int *)(param_1 + 0x50) == *(int *)(param_1 + 0xbd))))) {
    local_a94 = 0.0;
  }
  else {
    local_a94 = 1.4013e-45;
  }
  if (((*(char *)((longlong)param_1 + 0x264) == '\0') || (local_854 == '\0')) ||
     ((((*(longlong *)((longlong)param_1 + 0x254) != CONCAT44(uStack_860,uStack_864) ||
        ((((((*(longlong *)((longlong)param_1 + 0x25c) != local_85c ||
             (*(char *)((longlong)param_1 + 0x27c) == '\0')) || (local_83c == '\0')) ||
           ((param_1[0x4d] != local_850 || (param_1[0x4e] != local_848)))) ||
          (*(int *)(param_1 + 0x4f) != local_840)) ||
         ((*(char *)((longlong)param_1 + 0x21b) == '\0' || (cStack_89d == '\0')))))) ||
       (*(char *)((longlong)param_1 + 0x21a) != cStack_89e)) ||
      (((*(char *)((longlong)param_1 + 0x21d) == '\0' || (cStack_89b == '\0')) ||
       (local_a8c = 1.4013e-45, *(char *)((longlong)param_1 + 0x21c) != cStack_89c)))))) {
    local_a8c = 0.0;
  }
  cVar22 = local_868;
  if (cVar21 == '\0') {
LAB_1803fe524:
    local_a80 = 0.0;
  }
  else {
    cVar8 = FUN_1803ff3d0(cVar8,param_1 + 0xe,param_1 + 0x7b);
    local_a80 = 1.4013e-45;
    if (cVar8 != '\0') goto LAB_1803fe524;
  }
  if (((*(char *)((longlong)param_1 + 0x219) == '\0') || (local_89f == '\0')) ||
     (local_a78._0_4_ = 1.4013e-45, *(char *)(param_1 + 0x43) != local_8a0)) {
    local_a78._0_4_ = 0.0;
  }
  if ((cVar21 == '\0') ||
     (((*(char *)((longlong)param_1 + 0x219) != '\0' &&
       (*(char *)((longlong)param_1 + 0x581) != '\0')) &&
      (*(char *)(param_1 + 0x43) == *(char *)(param_1 + 0xb0))))) {
    uVar27 = 0;
  }
  else {
    uVar27 = 1;
  }
  cVar8 = *(char *)(param_1 + 0x4a);
  if (((cVar8 != '\0') && (cVar22 != '\0')) &&
     (iVar9 = memcmp(param_1 + 0x44,auStack_898,0x30), iVar9 == 0)) {
    uVar17 = 1;
  }
  if ((*(char *)((longlong)param_1 + 0x69) == '\0') ||
     (((cVar8 != '\0' && (*(char *)(param_1 + 0xb7) != '\0')) &&
      (iVar9 = memcmp(param_1 + 0x44,param_1 + 0xb1,0x30), iVar9 == 0)))) {
    uVar24 = 0;
  }
  else {
    uVar24 = 1;
  }
  if (((*(char *)((longlong)param_1 + 0x219) == '\0') || (*(char *)(param_1 + 0x4a) == '\0')) ||
     (((*(char *)((longlong)param_1 + 0x264) == '\0' ||
       ((((*(char *)((longlong)param_1 + 0x27c) == '\0' ||
          (*(char *)((longlong)param_1 + 0x21b) == '\0')) ||
         (*(char *)((longlong)param_1 + 0x21d) == '\0')) ||
        ((*(char *)((longlong)param_1 + 0x284) == '\0' || (local_89f == '\0')))))) ||
      ((local_868 == '\0' ||
       (((local_854 == '\0' || (local_83c == '\0')) ||
        ((cStack_89d == '\0' || ((cStack_89b == '\0' || (local_834 == '\0')))))))))))) {
    uVar19 = 0;
  }
  else {
    uVar19 = 1;
  }
  FUN_18063ab10(local_6d8,0,0x600);
  local_ab0 = (double)auVar36._0_4_;
  local_ab8 = (double)local_a88;
  local_ac0 = (double)auVar41._0_4_;
  local_ac8 = (double)auVar50._0_4_;
  local_ad0 = (double)auVar44._0_4_;
  local_ad8 = (double)auVar34._0_4_;
  local_ae0 = (double)auVar37._0_4_;
  local_ae8 = (double)auVar38._0_4_;
  local_af0 = (double)auVar42._0_4_;
  local_af8 = (double)auVar45._0_4_;
  local_b00 = (double)CONCAT44(local_b00._4_4_,local_a90);
  local_b08 = (double)CONCAT44(local_b08._4_4_,local_a94);
  local_b10 = (double)CONCAT44(local_b10._4_4_,local_a8c);
  local_b18 = (double)CONCAT44(local_b18._4_4_,local_a80);
  local_b20 = (double)CONCAT44(local_b20._4_4_,(float)local_a78);
  local_b28 = (double)CONCAT44(local_b28._4_4_,uVar27);
  local_b30 = (double)CONCAT44(local_b30._4_4_,uVar17);
  local_b38 = (double)CONCAT44(local_b38._4_4_,uVar24);
  local_b40 = (double)CONCAT44(local_b40._4_4_,(uint)*(byte *)((longlong)param_1 + 0x69));
  local_b48 = (double)CONCAT44(local_b48._4_4_,uVar19);
  local_b50 = (char *)CONCAT44(local_b50._4_4_,(uint)*(byte *)((longlong)param_1 + 0x6c));
  local_b58 = (undefined **)param_1[0xc];
  FUN_18015ad60(local_6d8,0x600,0xffffffffffffffff,
                "command=%lld contact_trial=%d sampled=%d simulated_sampled=%d motion_changed=%d motion_restored=%d direction_changed=%d direction_restored=%d smoothing_changed=%d smoothing_restored=%d blend_changed=%d blend_restored=%d local_velocity_before=(%.3f,%.3f) local_velocity_trial=(%.3f,%.3f) local_velocity_restored=(%.3f,%.3f) previous_velocity_before=(%.3f,%.3f) previous_velocity_restored=(%.3f,%.3f) phase=after_rollback server_ack=unverified"
               );
  local_b58 = &PTR_180700558;
  if (local_6d8[0] != '\0') {
    local_b58 = (undefined **)&DAT_1806bcfc0;
  }
  local_b50 = local_6d8;
  FUN_1800f6900(0);
  auVar50 = ZEXT464(0x7fc00000);
  auVar31 = auVar50._0_16_;
  if (*(char *)((longlong)param_1 + 0x74c) == '\0') {
    auVar36 = ZEXT1664(auVar31);
    auVar41 = ZEXT1664(auVar31);
  }
  else {
    auVar36 = ZEXT464(*(uint *)((longlong)param_1 + 0x744));
    auVar41 = ZEXT464(*(uint *)(param_1 + 0xe8));
  }
  uVar27 = 0;
  if (*(char *)(param_1 + 0x33) == '\0') {
    local_a78 = 0;
  }
  else {
    local_a78 = param_1[0x30];
  }
  cVar8 = *(char *)((longlong)param_1 + 0x16c);
  if (cVar8 == '\0') {
    auVar44 = ZEXT1664(auVar31);
  }
  else {
    auVar50 = ZEXT464(*(uint *)(param_1 + 0x2c));
    auVar44 = ZEXT464(*(uint *)((longlong)param_1 + 0x164));
  }
  if ((((*(char *)(param_1 + 0x33) == '\0') || (local_920 == '\0')) ||
      (param_1[0x30] != CONCAT44(uStack_934,local_938))) ||
     ((param_1[0x31] != local_930 || (local_a88 = 1.4013e-45, param_1[0x32] != local_928)))) {
    local_a88 = 0.0;
  }
  if ((*(char *)(param_1 + 0x33) == '\0') || (local_a90 = 1.4013e-45, local_920 == '\0')) {
    local_a90 = 0.0;
  }
  if ((((*(char *)((longlong)param_1 + 0x17c) == '\0') || (cStack_93c == '\0')) ||
      (param_1[0x2e] != CONCAT44(uStack_944,local_948))) || (*(int *)(param_1 + 0x2f) != local_940))
  {
    local_a94 = 0.0;
    if (*(char *)((longlong)param_1 + 0x17c) != '\0') goto LAB_1803fe8c5;
LAB_1803fe941:
    auVar34 = ZEXT1664(SUB6416(ZEXT464(0xbf800000),0));
  }
  else {
    local_a94 = 1.4013e-45;
LAB_1803fe8c5:
    if (*(char *)((longlong)param_1 + 0x4e4) == '\0') goto LAB_1803fe941;
    fVar30 = *(float *)(param_1 + 0x2e) - *(float *)(param_1 + 0x9b);
    fVar48 = *(float *)((longlong)param_1 + 0x174) - *(float *)((longlong)param_1 + 0x4dc);
    fVar30 = fVar48 * fVar48 + fVar30 * fVar30 +
             (*(float *)(param_1 + 0x2f) - *(float *)(param_1 + 0x9c)) *
             (*(float *)(param_1 + 0x2f) - *(float *)(param_1 + 0x9c));
    if (fVar30 == auVar33._0_4_) {
      auVar34 = ZEXT864(0);
    }
    else if (fVar30 < 0.0) {
      auVar34._0_8_ = FUN_18061e150(fVar30);
      auVar34._8_56_ = extraout_var_03;
      auVar34 = ZEXT1664(auVar34._0_16_);
    }
    else {
      auVar34 = ZEXT464((uint)SQRT(fVar30));
    }
  }
  auVar37 = ZEXT464(0xbf800000);
  if ((*(char *)((longlong)param_1 + 0x17c) == '\0') || (local_a8c = 1.4013e-45, cStack_93c == '\0')
     ) {
    local_a8c = 0.0;
  }
  if (((*(char *)((longlong)param_1 + 0x16c) == '\0') || (cStack_94c == '\0')) ||
     ((param_1[0x2c] != CONCAT44(uStack_954,uStack_958) ||
      (uVar24 = 1, *(int *)(param_1 + 0x2d) != local_950)))) {
    uVar24 = 0;
  }
  if ((cVar8 == '\0') || (uVar19 = 1, cStack_94c == '\0')) {
    uVar19 = 0;
  }
  pfVar1 = (float *)(param_1 + 0x26);
  cVar8 = *(char *)((longlong)param_1 + 0x13c);
  if ((((cVar8 == '\0') || (cStack_97c == '\0')) ||
      (*(longlong *)pfVar1 != CONCAT44(fStack_984,local_988))) ||
     (*(float *)(param_1 + 0x27) != local_980)) {
    if (cVar8 != '\0') goto LAB_1803fe9ef;
LAB_1803fea71:
    auVar38 = ZEXT1664(auVar37._0_16_);
    if (cVar8 == '\0') goto LAB_1803feae1;
  }
  else {
    uVar27 = 1;
LAB_1803fe9ef:
    if (cStack_97c == '\0') goto LAB_1803fea71;
    fStack_984 = *(float *)((longlong)param_1 + 0x134) - fStack_984;
    fVar30 = fStack_984 * fStack_984 + (*pfVar1 - local_988) * (*pfVar1 - local_988) +
             (*(float *)(param_1 + 0x27) - local_980) * (*(float *)(param_1 + 0x27) - local_980);
    if (fVar30 == auVar33._0_4_) {
      auVar38 = ZEXT864(0);
    }
    else if (fVar30 < 0.0) {
      auVar38._0_8_ = FUN_18061e150(fVar30);
      auVar38._8_56_ = extraout_var_04;
      auVar38 = ZEXT1664(auVar38._0_16_);
    }
    else {
      auVar38 = ZEXT464((uint)SQRT(fVar30));
    }
  }
  if (*(char *)((longlong)param_1 + 0x4a4) != '\0') {
    fVar30 = *(float *)((longlong)param_1 + 0x134) - *(float *)((longlong)param_1 + 0x49c);
    fVar30 = fVar30 * fVar30 +
             (*pfVar1 - *(float *)(param_1 + 0x93)) * (*pfVar1 - *(float *)(param_1 + 0x93)) +
             (*(float *)(param_1 + 0x27) - *(float *)(param_1 + 0x94)) *
             (*(float *)(param_1 + 0x27) - *(float *)(param_1 + 0x94));
    if (fVar30 == auVar33._0_4_) {
      auVar37 = ZEXT864(0);
    }
    else if (fVar30 < 0.0) {
      auVar37._0_8_ = FUN_18061e150(fVar30);
      auVar37._8_56_ = extraout_var_05;
      auVar37 = ZEXT1664(auVar37._0_16_);
    }
    else {
      auVar37 = ZEXT464((uint)SQRT(fVar30));
    }
  }
LAB_1803feae1:
  if ((*(char *)((longlong)param_1 + 0x13c) == '\0') || (cStack_97c == '\0')) {
    uVar17 = 0;
  }
  else {
    uVar17 = 1;
  }
  FUN_18063ab10(local_6d8,0,0x600);
  local_ab0 = (double)auVar36._0_4_;
  local_ab8 = (double)auVar41._0_4_;
  local_ad0 = (double)auVar44._0_4_;
  local_ad8 = (double)auVar50._0_4_;
  local_af8 = (double)auVar34._0_4_;
  local_b28 = (double)auVar38._0_4_;
  local_b30 = (double)auVar37._0_4_;
  local_ac0 = (double)CONCAT44(local_ac0._4_4_,(uint)*(byte *)((longlong)param_1 + 0x74c));
  local_ac8 = (double)local_a78;
  local_ae0 = (double)CONCAT44(local_ae0._4_4_,local_a88);
  local_ae8 = (double)CONCAT44(local_ae8._4_4_,local_a90);
  local_af0 = (double)CONCAT44(local_af0._4_4_,local_a94);
  local_b00 = (double)CONCAT44(local_b00._4_4_,local_a8c);
  local_b08 = (double)CONCAT44(local_b08._4_4_,uVar24);
  local_b10 = (double)CONCAT44(local_b10._4_4_,uVar19);
  local_b18 = (double)CONCAT44(local_b18._4_4_,local_a6c);
  local_b20 = (double)CONCAT44(local_b20._4_4_,uVar27);
  local_b38 = (double)CONCAT44(local_b38._4_4_,uVar17);
  local_b40 = (double)CONCAT44(local_b40._4_4_,(uint)*(byte *)((longlong)param_1 + 0x69));
  local_b48 = (double)CONCAT44(local_b48._4_4_,(uint)*(byte *)((longlong)param_1 + 0x6a));
  local_b50 = (char *)*param_1;
  local_b58 = (undefined **)param_1[0xc];
  FUN_18015ad60(local_6d8,0x600,0xffffffffffffffff,
                "command=%lld pawn=0x%llx completed=%d simulated_sampled=%d origin_valid=%d trial_distance=%.4f rollback_distance=%.4f origin_restored=%d transform_restored=%d command_wish_valid=%d command_wish_restored=%d last_wish_valid=%d trial_wish_delta=%.4f last_wish_restored=%d buttons_valid=%d buttons_restored=%d stored_wish=(%.6f,%.6f) persistent_buttons=0x%llx native_initial_valid=%d native_initial_wish=(%.6f,%.6f) phase=after_rollback server_ack=unverified"
               );
  ppuVar28 = &PTR_180700558;
  local_b58 = &PTR_180700558;
  if (local_6d8[0] != '\0') {
    local_b58 = (undefined **)&DAT_1806bcfc0;
  }
  local_b50 = local_6d8;
  FUN_1800f6900(0);
  if (*(char *)((longlong)param_1 + 0x6b) == '\0') {
    FUN_18017bf40(&local_a88);
    uVar4 = CONCAT44(uStack_a84,local_a88);
    uVar15 = uVar4 - local_a58[0];
    puVar11 = (ulonglong *)FUN_1804167f0();
    local_b58 = (undefined **)(*puVar11 + 1);
    *puVar11 = (ulonglong)local_b58;
    uVar3 = puVar11[1];
    puVar11[1] = uVar3 + uVar15;
    local_b28 = (double)(puVar11[3] + (ulonglong)(999999 < uVar15));
    puVar11[3] = (ulonglong)local_b28;
    local_b20 = (double)(puVar11[4] + (ulonglong)(4999999 < uVar15));
    puVar11[4] = (ulonglong)local_b20;
    local_b18 = (double)(puVar11[5] + (ulonglong)(15999999 < uVar15));
    puVar11[5] = (ulonglong)local_b18;
    uVar14 = puVar11[2];
    if (puVar11[2] < uVar15) {
      puVar11[2] = uVar15;
      uVar14 = uVar15;
    }
    if ((uVar4 != puVar11[7]) && ((longlong)uVar4 < (longlong)puVar11[7])) {
    }
    local_b38 = (double)(longlong)(uVar4 - puVar11[6]) / 1000000.0;
    dVar6 = (double)(uVar3 + uVar15);
    local_b30 = 0.0;
    if (0.0 < local_b38) {
      local_b30 = (dVar6 / 1000.0) / local_b38;
    }
    local_b40 = dVar6 / 1000000.0;
    local_b48 = (double)uVar14 / 1000.0;
    local_b50 = (char *)((dVar6 / (double)local_b58) / 1000.0);
    FUN_1801af8a0(dVar6 / (double)local_b58,local_b50,local_a60);
    puVar11[2] = 0;
    puVar11[1] = 0;
    *puVar11 = 0;
    puVar11[5] = 0;
    puVar11[4] = 0;
    puVar11[3] = 0;
    puVar11[6] = uVar4;
  }
  else {
    auVar36 = ZEXT464((uint)local_a14);
    auVar50 = ZEXT464(0x43b40000);
    if ((*(char *)((longlong)param_1 + 0xac) == '\0') || ((char)uStack_a0c == '\0')) {
      local_a88 = 0.0;
    }
    else {
      local_a88 = (float)FUN_180615070(local_a14 - *(float *)((longlong)param_1 + 0xa4),
                                       auVar50._0_8_);
    }
    uVar25 = auVar50._0_8_;
    auVar41 = ZEXT464((uint)local_a24);
    if ((*(char *)((longlong)param_1 + 0x9c) == '\0') || ((char)local_a1c == '\0')) {
      local_a90 = 0.0;
    }
    else {
      local_a90 = (float)FUN_180615070(local_a24 - *(float *)((longlong)param_1 + 0x94),uVar25);
      uVar25 = auVar50._0_8_;
    }
    auVar40 = auVar41._0_16_;
    auVar31 = auVar36._0_16_;
    auVar50 = ZEXT464((uint)local_a34);
    auVar43 = ZEXT416((uint)local_a34);
    if ((*(char *)((longlong)param_1 + 0x8c) == '\0') || ((char)local_a2c == '\0')) {
      fVar30 = 0.0;
    }
    else {
      fVar30 = (float)FUN_180615070(local_a34 - *(float *)((longlong)param_1 + 0x84),uVar25);
      auVar40 = auVar41._0_16_;
      auVar31 = auVar36._0_16_;
      auVar43 = auVar50._0_16_;
    }
    auVar5 = vpcmpeqd_avx(ZEXT416(uStack_a0c & 0xff),SUB6416(ZEXT464(0),0));
    auVar51 = auVar33._0_16_;
    auVar31 = vblendvps_avx(auVar31,auVar51,auVar5);
    local_a94 = auVar31._0_4_;
    if (*(char *)((longlong)param_1 + 0x414) == '\0') {
      fVar48 = 0.0;
    }
    else {
      fVar48 = *(float *)((longlong)param_1 + 0x40c);
    }
    if (*(char *)((longlong)param_1 + 0xac) == '\0') {
      fVar32 = 0.0;
    }
    else {
      fVar32 = *(float *)((longlong)param_1 + 0xa4);
    }
    auVar31 = vpcmpeqd_avx(ZEXT416(local_a1c & 0xff),SUB6416(ZEXT464(0),0));
    auVar31 = vblendvps_avx(auVar40,auVar51,auVar31);
    local_a8c = auVar31._0_4_;
    if (*(char *)((longlong)param_1 + 0x404) == '\0') {
      fVar35 = 0.0;
    }
    else {
      fVar35 = *(float *)((longlong)param_1 + 0x3fc);
    }
    if (*(char *)((longlong)param_1 + 0x9c) == '\0') {
      fVar39 = 0.0;
    }
    else {
      fVar39 = *(float *)((longlong)param_1 + 0x94);
    }
    auVar31 = vpcmpeqd_avx(ZEXT416(local_a2c & 0xff),SUB6416(ZEXT464(0),0));
    auVar31 = vblendvps_avx(ZEXT416(uStack_a38),auVar51,auVar31);
    local_a80 = auVar31._0_4_;
    if (*(char *)((longlong)param_1 + 0x3f4) == '\0') {
      fVar46 = 0.0;
    }
    else {
      fVar46 = *(float *)(param_1 + 0x7d);
    }
    cVar8 = *(char *)((longlong)param_1 + 0x8c);
    if (cVar8 == '\0') {
      fVar47 = 0.0;
    }
    else {
      fVar47 = *(float *)(param_1 + 0x10);
    }
    auVar31 = vpcmpeqd_avx(ZEXT416(local_a2c & 0xff),SUB6416(ZEXT464(0),0));
    auVar31 = vblendvps_avx(auVar43,auVar51,auVar31);
    local_a78 = CONCAT44(local_a78._4_4_,auVar31._0_4_);
    if (*(char *)((longlong)param_1 + 0x3f4) == '\0') {
      fVar49 = 0.0;
    }
    else {
      fVar49 = *(float *)((longlong)param_1 + 0x3ec);
    }
    if (cVar8 != '\0') {
      auVar33 = ZEXT464(*(uint *)((longlong)param_1 + 0x84));
    }
    if ((*(char *)((longlong)param_1 + 0xac) == '\0') || (uVar27 = 1, (char)uStack_a0c == '\0')) {
      uVar27 = 0;
    }
    if ((*(char *)((longlong)param_1 + 0x9c) == '\0') || ((char)local_a1c == '\0')) {
      uVar24 = 0;
    }
    else {
      uVar24 = 1;
    }
    if ((cVar8 == '\0') || ((char)local_a2c == '\0')) {
      uVar20 = 0;
    }
    FUN_18063ab10(local_6d8,0,0x600);
    local_ab0 = (double)local_a88;
    local_ab8 = (double)local_a90;
    local_ac0 = (double)fVar30;
    local_ac8 = (double)local_a94;
    local_ad0 = (double)fVar48;
    local_ad8 = (double)fVar32;
    local_ae0 = (double)local_a8c;
    local_ae8 = (double)fVar35;
    local_af0 = (double)fVar39;
    local_af8 = (double)local_a80;
    local_b00 = (double)fVar46;
    local_b08 = (double)fVar47;
    local_b10 = (double)(float)local_a78;
    local_b18 = (double)fVar49;
    local_b20 = (double)auVar33._0_4_;
    local_aa0 = local_a6c;
    local_aa8 = local_a68;
    local_b28 = (double)CONCAT44(local_b28._4_4_,uVar27);
    local_b30 = (double)CONCAT44(local_b30._4_4_,uVar24);
    local_b38 = (double)CONCAT44(local_b38._4_4_,uVar20);
    local_b40 = (double)CONCAT44(local_b40._4_4_,(uint)*(byte *)((longlong)param_1 + 0x69));
    local_b48 = (double)CONCAT44(local_b48._4_4_,(uint)*(byte *)((longlong)param_1 + 0x6a));
    local_b50 = (char *)*param_1;
    local_b58 = (undefined **)param_1[0xc];
    FUN_18015ad60(local_6d8,0x600,0xffffffffffffffff,
                  "command=%lld pawn=0x%llx completed=%d simulated_sampled=%d eye_valid=%d rotation_valid=%d absolute_valid=%d eye_before=%.3f eye_simulated=%.3f eye_restored=%.3f eye_pitch_before=%.3f eye_pitch_simulated=%.3f eye_pitch_restored=%.3f rotation_before=%.3f rotation_simulated=%.3f rotation_restored=%.3f absolute_before=%.3f absolute_simulated=%.3f absolute_restored=%.3f eye_rollback_delta=%.3f rotation_rollback_delta=%.3f absolute_rollback_delta=%.3f transform_valid=%d transform_restored=%d sample_phase=after_transaction_rollback server_pose=unverified"
                 );
    if (local_6d8[0] != '\0') {
      ppuVar28 = (undefined **)&DAT_1806bcfc0;
    }
    local_b50 = local_6d8;
    local_b58 = ppuVar28;
    FUN_1800f6900(0);
    FUN_18017bf40(&local_a88);
    uVar4 = CONCAT44(uStack_a84,local_a88);
    uVar15 = uVar4 - local_a58[0];
    puVar11 = (ulonglong *)FUN_1804167f0();
    local_b58 = (undefined **)(*puVar11 + 1);
    *puVar11 = (ulonglong)local_b58;
    uVar3 = puVar11[1];
    puVar11[1] = uVar3 + uVar15;
    local_b28 = (double)(puVar11[3] + (ulonglong)(999999 < uVar15));
    puVar11[3] = (ulonglong)local_b28;
    local_b20 = (double)(puVar11[4] + (ulonglong)(4999999 < uVar15));
    puVar11[4] = (ulonglong)local_b20;
    local_b18 = (double)(puVar11[5] + (ulonglong)(15999999 < uVar15));
    puVar11[5] = (ulonglong)local_b18;
    uVar14 = puVar11[2];
    if (puVar11[2] < uVar15) {
      puVar11[2] = uVar15;
      uVar14 = uVar15;
    }
    if ((uVar4 != puVar11[7]) && ((longlong)uVar4 < (longlong)puVar11[7])) {
    }
    local_b38 = (double)(longlong)(uVar4 - puVar11[6]) / 1000000.0;
    dVar6 = (double)(uVar3 + uVar15);
    local_b30 = 0.0;
    if (0.0 < local_b38) {
      local_b30 = (dVar6 / 1000.0) / local_b38;
    }
    local_b40 = dVar6 / 1000000.0;
    local_b48 = (double)uVar14 / 1000.0;
    local_b50 = (char *)((dVar6 / (double)local_b58) / 1000.0);
    FUN_1801af8a0(dVar6 / (double)local_b58,local_b50,local_a60);
    puVar11[2] = 0;
    puVar11[1] = 0;
    *puVar11 = 0;
    puVar11[5] = 0;
    puVar11[4] = 0;
    puVar11[3] = 0;
    puVar11[6] = uVar4;
  }
  puVar11[7] = uVar4 + 5000000000;
}



