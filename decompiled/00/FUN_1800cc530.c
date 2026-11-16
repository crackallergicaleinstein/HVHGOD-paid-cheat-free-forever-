// FUN_1800cc530 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800cc530 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800cc530(longlong param_1,byte *param_2,char *param_3)

{
  byte bVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  int iVar8;
  longlong *plVar9;
  char *pcVar10;
  undefined8 uVar11;
  int *piVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte bVar16;
  byte *pbVar17;
  byte *unaff_R12;
  longlong lVar18;
  undefined1 auVar19 [16];
  undefined1 in_ZMM6 [64];
  undefined1 auVar20 [64];
  undefined1 auVar21 [16];
  undefined1 in_ZMM7 [64];
  undefined1 auVar22 [64];
  undefined1 auVar23 [16];
  undefined1 in_ZMM8 [64];
  undefined1 auVar24 [64];
  undefined1 auVar25 [16];
  undefined1 in_ZMM9 [64];
  undefined1 auVar26 [64];
  undefined1 auVar27 [16];
  undefined1 auVar28 [64];
  undefined1 auVar29 [16];
  undefined1 auVar30 [64];
  undefined1 auStack_d98 [48];
  undefined1 local_d68;
  undefined2 local_d64 [2];
  ulonglong local_d60;
  byte *local_d58;
  undefined8 local_d50;
  uint local_d48 [2];
  longlong local_d40;
  undefined1 local_d38 [16];
  undefined1 local_d28 [16];
  undefined1 local_d18 [16];
  undefined1 local_d08 [56];
  undefined1 local_cd0 [56];
  undefined1 local_c98 [56];
  undefined1 local_c60 [56];
  undefined1 local_c28 [56];
  undefined1 local_bf0 [56];
  undefined1 local_bb8 [56];
  undefined1 local_b80 [168];
  undefined1 local_ad8 [56];
  undefined1 local_aa0 [56];
  undefined1 local_a68 [56];
  undefined1 local_a30 [56];
  undefined1 local_9f8 [56];
  undefined1 local_9c0 [56];
  undefined1 local_988 [56];
  undefined1 local_950 [56];
  undefined1 local_918 [56];
  undefined1 local_8e0 [56];
  undefined1 local_8a8 [56];
  undefined1 local_870 [56];
  undefined1 local_838 [56];
  undefined1 local_800 [56];
  undefined1 local_7c8 [56];
  undefined1 local_790 [56];
  undefined1 local_758 [56];
  undefined1 local_720;
  undefined7 uStack_71f;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  byte *local_700;
  longlong lStack_6f8;
  byte *pbStack_6f0;
  byte *pbStack_6e8;
  byte *local_6e0;
  longlong lStack_6d8;
  byte *pbStack_6d0;
  longlong lStack_6c8;
  byte *local_6c0;
  longlong lStack_6b8;
  byte *pbStack_6b0;
  longlong lStack_6a8;
  undefined4 local_698;
  undefined4 local_694;
  undefined4 local_690;
  undefined1 local_68c;
  undefined4 local_688;
  undefined1 local_680 [32];
  undefined1 local_660;
  undefined8 local_65c;
  undefined4 local_654;
  longlong local_650;
  undefined1 auStack_648 [16];
  undefined8 uStack_638;
  undefined8 local_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  longlong lStack_618;
  undefined8 local_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined1 auStack_5f8 [16];
  undefined8 uStack_5e8;
  longlong lStack_5e0;
  undefined1 auStack_5d8 [16];
  undefined4 local_5c8;
  undefined8 local_5c4;
  uint local_5bc;
  uint local_5b8;
  uint local_5b4;
  undefined1 local_5b0;
  undefined4 local_5ac;
  ulonglong local_98;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  
  local_38 = in_ZMM6._0_16_;
  local_48 = in_ZMM7._0_16_;
  local_58 = in_ZMM8._0_16_;
  local_68 = in_ZMM9._0_16_;
  local_98 = DAT_1808d5f00 ^ (ulonglong)auStack_d98;
  local_d38._8_8_ = 0;
  local_d38._0_8_ = (PSRWLOCK)(param_1 + 0xd0);
  local_d58 = param_2;
  local_d40 = param_1;
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0xd0));
  local_d38[8] = 1;
  LOCK();
  *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 1;
  UNLOCK();
  local_d50 = param_1 + 0x10;
  FUN_1800f0240();
  auVar25 = in_ZMM9._0_16_;
  auVar23 = in_ZMM8._0_16_;
  auVar21 = in_ZMM7._0_16_;
  auVar19 = in_ZMM6._0_16_;
  pbVar17 = (byte *)(param_1 + 0xd0);
  for (pbVar15 = (byte *)(param_1 + 0x50); pbVar15 != pbVar17; pbVar15 = pbVar15 + 0x40) {
                    /* WARNING: Read-only address (ram,0x00018086d370) is written */
                    /* WARNING: Read-only address (ram,0x00018086d3c0) is written */
                    /* WARNING: Read-only address (ram,0x00018086d450) is written */
    FUN_1800f0240(pbVar15);
    auVar25 = in_ZMM9._0_16_;
    auVar23 = in_ZMM8._0_16_;
    auVar21 = in_ZMM7._0_16_;
    auVar19 = in_ZMM6._0_16_;
  }
                    /* WARNING: Read-only address (ram,0x00018086d370) is written */
                    /* WARNING: Read-only address (ram,0x00018086d3c0) is written */
                    /* WARNING: Read-only address (ram,0x00018086d450) is written */
  if (*param_2 == 1) {
    local_700 = (byte *)0x0;
    lStack_6f8 = 0;
    pbStack_6f0 = (byte *)0x0;
    pbStack_6e8 = (byte *)0x0;
    auVar20 = ZEXT1664(auVar19);
    auVar22 = ZEXT1664(auVar21);
    auVar24 = ZEXT1664(auVar23);
    auVar26 = ZEXT1664(auVar25);
    FUN_1800f3f60(param_2,&local_700);
    lVar18 = -0x8000000000000000;
    auVar30 = ZEXT1664(_DAT_18086d450);
    auVar28 = ZEXT464(0x3c23d70a);
LAB_1800cc630:
    auVar29 = auVar30._0_16_;
    auVar27 = auVar28._0_16_;
    auVar25 = auVar26._0_16_;
    auVar23 = auVar24._0_16_;
    auVar21 = auVar22._0_16_;
    auVar19 = auVar20._0_16_;
    bVar16 = 0;
    lStack_6d8 = 0;
    pbStack_6d0 = (byte *)0x0;
    lStack_6c8 = -0x8000000000000000;
    bVar1 = *param_2;
    pbVar14 = (byte *)(ulonglong)bVar1;
    pbVar13 = pbVar17;
    local_6e0 = param_2;
    switch(bVar1) {
    case 0:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(bVar1) {
      default:
        goto switchD_1800cc671_default;
      case 1:
        goto switchD_1800cc671_caseD_1;
      case 2:
        goto switchD_1800cc671_caseD_2;
      case 10:
      case 0xd:
      case 0xe:
      case 0xf:
      case 0x10:
      case 0x11:
      case 0x12:
      case 0x13:
        goto switchD_1800ccc37_caseD_0;
      case 0xb:
      case 0x15:
        goto switchD_1800ccc37_caseD_1;
      case 0xc:
      case 0x16:
        goto switchD_1800ccc37_caseD_2;
      case 0x14:
      case 0x17:
      case 0x18:
      case 0x19:
      case 0x1a:
      case 0x1b:
      case 0x1c:
      case 0x1d:
        goto switchD_1800ccc37_default;
      case 0x1e:
      case 0x21:
      case 0x22:
      case 0x23:
      case 0x24:
      case 0x25:
      case 0x26:
      case 0x27:
        goto switchD_1800ccd0c_caseD_0;
      case 0x1f:
        goto switchD_1800ccd0c_caseD_1;
      case 0x20:
        goto switchD_1800ccd0c_caseD_2;
      case 0x28:
      case 0x2b:
      case 0x2c:
      case 0x2d:
      case 0x2e:
      case 0x2f:
      case 0x30:
      case 0x31:
        goto switchD_1800ccd73_caseD_0;
      case 0x29:
        goto switchD_1800ccd73_caseD_1;
      case 0x2a:
        goto switchD_1800ccd73_caseD_2;
      case 0x32:
      case 0x35:
      case 0x36:
      case 0x37:
      case 0x38:
      case 0x39:
      case 0x3a:
      case 0x3b:
        goto switchD_1800ccde1_caseD_0;
      case 0x33:
      case 0x3d:
        goto switchD_1800ccde1_caseD_1;
      case 0x34:
      case 0x3e:
        goto switchD_1800ccde1_caseD_2;
      case 0x3c:
      case 0x3f:
      case 0x40:
      case 0x41:
      case 0x42:
      case 0x43:
      case 0x44:
      case 0x45:
        goto switchD_1800ccde1_default;
      case 0x46:
      case 0x49:
      case 0x4a:
      case 0x4b:
      case 0x4c:
      case 0x4d:
      case 0x4e:
      case 0x4f:
        goto switchD_1800cce57_caseD_0;
      case 0x47:
        goto switchD_1800cce57_caseD_1;
      case 0x48:
        goto switchD_1800cce57_caseD_2;
      case 0x50:
      case 0x53:
      case 0x54:
      case 0x55:
      case 0x56:
      case 0x57:
      case 0x58:
      case 0x59:
        goto switchD_1800ccedc_caseD_0;
      case 0x51:
      case 0x5b:
        goto switchD_1800ccedc_caseD_1;
      case 0x52:
      case 0x5c:
        goto switchD_1800ccedc_caseD_2;
      case 0x5a:
        goto switchD_1800cc67e_caseD_5a;
      case 0x5d:
      case 0x5e:
      case 0x5f:
      case 0x60:
      case 0x61:
      case 0x62:
      case 99:
        goto switchD_1800ccedc_default;
      case 100:
      case 0x67:
      case 0x68:
      case 0x69:
      case 0x6a:
      case 0x6b:
      case 0x6c:
      case 0x6d:
        goto switchD_1800ccf39_caseD_0;
      case 0x65:
        goto switchD_1800ccf39_caseD_1;
      case 0x66:
        goto switchD_1800ccf39_caseD_2;
      case 0x6e:
      case 0x71:
      case 0x72:
      case 0x73:
      case 0x74:
      case 0x75:
      case 0x76:
      case 0x77:
        goto switchD_1800ccfa7_caseD_0;
      case 0x6f:
      case 0x79:
        goto switchD_1800ccfa7_caseD_1;
      case 0x70:
      case 0x7a:
        goto switchD_1800ccfa7_caseD_2;
      case 0x78:
      case 0x7b:
      case 0x7c:
      case 0x7d:
      case 0x7e:
      case 0x7f:
      case 0x80:
      case 0x81:
        goto switchD_1800ccfa7_default;
      case 0x82:
      case 0x85:
      case 0x86:
      case 0x87:
      case 0x88:
      case 0x89:
      case 0x8a:
      case 0x8b:
        goto switchD_1800cd093_caseD_0;
      case 0x83:
        goto switchD_1800cd093_caseD_1;
      case 0x84:
        goto switchD_1800cd093_caseD_2;
      case 0x8c:
      case 0x8f:
      case 0x90:
      case 0x91:
      case 0x92:
      case 0x93:
      case 0x94:
      case 0x95:
        goto switchD_1800cd103_caseD_0;
      case 0x8d:
        goto switchD_1800cd103_caseD_1;
      case 0x8e:
        goto switchD_1800cd103_caseD_2;
      case 0x96:
      case 0x99:
      case 0x9a:
      case 0x9b:
      case 0x9c:
      case 0x9d:
      case 0x9e:
      case 0x9f:
        goto switchD_1800cd14f_caseD_0;
      case 0x97:
        goto switchD_1800cd14f_caseD_1;
      case 0x98:
        goto switchD_1800cd14f_caseD_2;
      case 0xa0:
      case 0xa3:
      case 0xa4:
      case 0xa5:
      case 0xa6:
      case 0xa7:
      case 0xa8:
      case 0xa9:
        goto switchD_1800cd197_caseD_0;
      case 0xa1:
        goto switchD_1800cd197_caseD_1;
      case 0xa2:
        goto switchD_1800cd197_caseD_2;
      case 0xaa:
      case 0xad:
      case 0xae:
      case 0xaf:
      case 0xb0:
      case 0xb1:
      case 0xb2:
      case 0xb3:
        goto switchD_1800cd1d9_caseD_0;
      case 0xab:
        goto switchD_1800cd1d9_caseD_1;
      case 0xac:
        goto switchD_1800cd1d9_caseD_2;
      case 0xb4:
      case 0xb7:
      case 0xb8:
      case 0xb9:
      case 0xba:
      case 0xbb:
      case 0xbc:
      case 0xbd:
        goto switchD_1800cd221_caseD_0;
      case 0xb5:
        goto switchD_1800cd221_caseD_1;
      case 0xb6:
        goto switchD_1800cd221_caseD_2;
      case 0xbe:
      case 0xc1:
      case 0xc2:
      case 0xc3:
      case 0xc4:
      case 0xc5:
      case 0xc6:
      case 199:
        goto switchD_1800cd41f_caseD_0;
      case 0xbf:
        goto switchD_1800cd41f_caseD_1;
      case 0xc0:
        goto switchD_1800cd41f_caseD_2;
      case 200:
        goto switchD_1800cd455_caseD_0;
      case 0xc9:
        goto switchD_1800cd455_caseD_1;
      case 0xca:
        goto switchD_1800cd455_caseD_2;
      case 0xcb:
      case 0xcc:
      case 0xcd:
      case 0xce:
      case 0xcf:
      case 0xd0:
      case 0xd1:
        goto switchD_1800cd455_caseD_3;
      case 0xd2:
      case 0xd5:
      case 0xd6:
      case 0xd7:
      case 0xd8:
      case 0xd9:
      case 0xda:
      case 0xdb:
        goto switchD_1800cd4ef_caseD_0;
      case 0xd3:
        goto switchD_1800cd4ef_caseD_1;
      case 0xd4:
        goto switchD_1800cd4ef_caseD_2;
      case 0xdc:
        goto switchD_1800cd52c_caseD_0;
      case 0xdd:
        goto switchD_1800cd52c_caseD_1;
      case 0xde:
        goto switchD_1800cd52c_caseD_2;
      case 0xdf:
      case 0xe0:
      case 0xe1:
      case 0xe2:
      case 0xe3:
      case 0xe4:
      case 0xe5:
        goto switchD_1800cd52c_caseD_3;
      case 0xe6:
      case 0xe9:
      case 0xea:
      case 0xeb:
      case 0xec:
      case 0xed:
      case 0xee:
      case 0xef:
        goto switchD_1800cd5c1_caseD_0;
      case 0xe7:
        goto switchD_1800cd5c1_caseD_1;
      case 0xe8:
        goto switchD_1800cd5c1_caseD_2;
      case 0xf0:
        goto switchD_1800cd603_caseD_0;
      case 0xf1:
        goto switchD_1800cd603_caseD_1;
      case 0xf2:
        goto switchD_1800cd603_caseD_2;
      case 0xf3:
      case 0xf4:
      case 0xf5:
      case 0xf6:
      case 0xf7:
      case 0xf8:
      case 0xf9:
        goto switchD_1800cd603_caseD_3;
      }
    case 1:
switchD_1800cc671_caseD_1:
      lStack_6d8 = **(longlong **)(param_2 + 8);
      break;
    case 2:
switchD_1800cc671_caseD_2:
      pbStack_6d0 = *(byte **)(*(longlong *)(param_2 + 8) + 8);
      break;
    default:
switchD_1800cc671_default:
      lStack_6c8 = 1;
    }
    cVar5 = FUN_1800e6ca0(&local_700,&local_6e0);
    if (cVar5 == '\0') goto code_r0x0001800cc6cc;
    local_6e0 = (byte *)0x0;
    lStack_6d8 = 0;
    pbStack_6d0 = (byte *)0x0;
    lStack_6c8 = 0;
    param_3 = "_teams";
    auVar20 = ZEXT1664(auVar20._0_16_);
    auVar22 = ZEXT1664(auVar22._0_16_);
    auVar24 = ZEXT1664(auVar24._0_16_);
    auVar26 = ZEXT1664(auVar26._0_16_);
    auVar28 = ZEXT1664(auVar28._0_16_);
    auVar30 = ZEXT1664(auVar30._0_16_);
    FUN_1800e6b50(param_2,&local_6e0);
    lStack_6b8 = 0;
    pbStack_6b0 = (byte *)0x0;
    lStack_6a8 = -0x8000000000000000;
    pbVar14 = (byte *)(ulonglong)*param_2;
    local_6c0 = param_2;
    switch(*param_2) {
    case 0:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
switchD_1800ccc37_caseD_0:
      auVar29 = auVar30._0_16_;
      auVar27 = auVar28._0_16_;
      auVar25 = auVar26._0_16_;
      auVar23 = auVar24._0_16_;
      auVar21 = auVar22._0_16_;
      auVar19 = auVar20._0_16_;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(pbVar14) {
      default:
        goto switchD_1800ccc37_default;
      case (byte *)0x1:
        goto switchD_1800ccc37_caseD_1;
      case (byte *)0x2:
        goto switchD_1800ccc37_caseD_2;
      case (byte *)0xa:
      case (byte *)0xd:
      case (byte *)0xe:
      case (byte *)0xf:
      case (byte *)0x10:
      case (byte *)0x11:
      case (byte *)0x12:
      case (byte *)0x13:
        goto switchD_1800ccd0c_caseD_0;
      case (byte *)0xb:
        goto switchD_1800ccd0c_caseD_1;
      case (byte *)0xc:
        goto switchD_1800ccd0c_caseD_2;
      case (byte *)0x14:
      case (byte *)0x17:
      case (byte *)0x18:
      case (byte *)0x19:
      case (byte *)0x1a:
      case (byte *)0x1b:
      case (byte *)0x1c:
      case (byte *)0x1d:
        goto switchD_1800ccd73_caseD_0;
      case (byte *)0x15:
        goto switchD_1800ccd73_caseD_1;
      case (byte *)0x16:
        goto switchD_1800ccd73_caseD_2;
      case (byte *)0x1e:
      case (byte *)0x21:
      case (byte *)0x22:
      case (byte *)0x23:
      case (byte *)0x24:
      case (byte *)0x25:
      case (byte *)0x26:
      case (byte *)0x27:
        goto switchD_1800ccde1_caseD_0;
      case (byte *)0x1f:
      case (byte *)0x29:
        goto switchD_1800ccde1_caseD_1;
      case (byte *)0x20:
      case (byte *)0x2a:
        goto switchD_1800ccde1_caseD_2;
      case (byte *)0x28:
      case (byte *)0x2b:
      case (byte *)0x2c:
      case (byte *)0x2d:
      case (byte *)0x2e:
      case (byte *)0x2f:
      case (byte *)0x30:
      case (byte *)0x31:
        goto switchD_1800ccde1_default;
      case (byte *)0x32:
      case (byte *)0x35:
      case (byte *)0x36:
      case (byte *)0x37:
      case (byte *)0x38:
      case (byte *)0x39:
      case (byte *)0x3a:
      case (byte *)0x3b:
        goto switchD_1800cce57_caseD_0;
      case (byte *)0x33:
        goto switchD_1800cce57_caseD_1;
      case (byte *)0x34:
        goto switchD_1800cce57_caseD_2;
      case (byte *)0x3c:
      case (byte *)0x3f:
      case (byte *)0x40:
      case (byte *)0x41:
      case (byte *)0x42:
      case (byte *)0x43:
      case (byte *)0x44:
      case (byte *)0x45:
        goto switchD_1800ccedc_caseD_0;
      case (byte *)0x3d:
      case (byte *)0x47:
        goto switchD_1800ccedc_caseD_1;
      case (byte *)0x3e:
      case (byte *)0x48:
        goto switchD_1800ccedc_caseD_2;
      case (byte *)0x46:
        goto switchD_1800cc67e_caseD_5a;
      case (byte *)0x49:
      case (byte *)0x4a:
      case (byte *)0x4b:
      case (byte *)0x4c:
      case (byte *)0x4d:
      case (byte *)0x4e:
      case (byte *)0x4f:
        goto switchD_1800ccedc_default;
      case (byte *)0x50:
      case (byte *)0x53:
      case (byte *)0x54:
      case (byte *)0x55:
      case (byte *)0x56:
      case (byte *)0x57:
      case (byte *)0x58:
      case (byte *)0x59:
        goto switchD_1800ccf39_caseD_0;
      case (byte *)0x51:
        goto switchD_1800ccf39_caseD_1;
      case (byte *)0x52:
        goto switchD_1800ccf39_caseD_2;
      case (byte *)0x5a:
      case (byte *)0x5d:
      case (byte *)0x5e:
      case (byte *)0x5f:
      case (byte *)0x60:
      case (byte *)0x61:
      case (byte *)0x62:
      case (byte *)0x63:
        goto switchD_1800ccfa7_caseD_0;
      case (byte *)0x5b:
      case (byte *)0x65:
        goto switchD_1800ccfa7_caseD_1;
      case (byte *)0x5c:
      case (byte *)0x66:
        goto switchD_1800ccfa7_caseD_2;
      case (byte *)0x64:
      case (byte *)0x67:
      case (byte *)0x68:
      case (byte *)0x69:
      case (byte *)0x6a:
      case (byte *)0x6b:
      case (byte *)0x6c:
      case (byte *)0x6d:
        goto switchD_1800ccfa7_default;
      case (byte *)0x6e:
      case (byte *)0x71:
      case (byte *)0x72:
      case (byte *)0x73:
      case (byte *)0x74:
      case (byte *)0x75:
      case (byte *)0x76:
      case (byte *)0x77:
        goto switchD_1800cd093_caseD_0;
      case (byte *)0x6f:
        goto switchD_1800cd093_caseD_1;
      case (byte *)0x70:
        goto switchD_1800cd093_caseD_2;
      case (byte *)0x78:
      case (byte *)0x7b:
      case (byte *)0x7c:
      case (byte *)0x7d:
      case (byte *)0x7e:
      case (byte *)0x7f:
      case (byte *)0x80:
      case (byte *)0x81:
        goto switchD_1800cd103_caseD_0;
      case (byte *)0x79:
        goto switchD_1800cd103_caseD_1;
      case (byte *)0x7a:
        goto switchD_1800cd103_caseD_2;
      case (byte *)0x82:
      case (byte *)0x85:
      case (byte *)0x86:
      case (byte *)0x87:
      case (byte *)0x88:
      case (byte *)0x89:
      case (byte *)0x8a:
      case (byte *)0x8b:
        goto switchD_1800cd14f_caseD_0;
      case (byte *)0x83:
        goto switchD_1800cd14f_caseD_1;
      case (byte *)0x84:
        goto switchD_1800cd14f_caseD_2;
      case (byte *)0x8c:
      case (byte *)0x8f:
      case (byte *)0x90:
      case (byte *)0x91:
      case (byte *)0x92:
      case (byte *)0x93:
      case (byte *)0x94:
      case (byte *)0x95:
        goto switchD_1800cd197_caseD_0;
      case (byte *)0x8d:
        goto switchD_1800cd197_caseD_1;
      case (byte *)0x8e:
        goto switchD_1800cd197_caseD_2;
      case (byte *)0x96:
      case (byte *)0x99:
      case (byte *)0x9a:
      case (byte *)0x9b:
      case (byte *)0x9c:
      case (byte *)0x9d:
      case (byte *)0x9e:
      case (byte *)0x9f:
        goto switchD_1800cd1d9_caseD_0;
      case (byte *)0x97:
        goto switchD_1800cd1d9_caseD_1;
      case (byte *)0x98:
        goto switchD_1800cd1d9_caseD_2;
      case (byte *)0xa0:
      case (byte *)0xa3:
      case (byte *)0xa4:
      case (byte *)0xa5:
      case (byte *)0xa6:
      case (byte *)0xa7:
      case (byte *)0xa8:
      case (byte *)0xa9:
        goto switchD_1800cd221_caseD_0;
      case (byte *)0xa1:
        goto switchD_1800cd221_caseD_1;
      case (byte *)0xa2:
        goto switchD_1800cd221_caseD_2;
      case (byte *)0xaa:
      case (byte *)0xad:
      case (byte *)0xae:
      case (byte *)0xaf:
      case (byte *)0xb0:
      case (byte *)0xb1:
      case (byte *)0xb2:
      case (byte *)0xb3:
        goto switchD_1800cd41f_caseD_0;
      case (byte *)0xab:
        goto switchD_1800cd41f_caseD_1;
      case (byte *)0xac:
        goto switchD_1800cd41f_caseD_2;
      case (byte *)0xb4:
        goto switchD_1800cd455_caseD_0;
      case (byte *)0xb5:
        goto switchD_1800cd455_caseD_1;
      case (byte *)0xb6:
        goto switchD_1800cd455_caseD_2;
      case (byte *)0xb7:
      case (byte *)0xb8:
      case (byte *)0xb9:
      case (byte *)0xba:
      case (byte *)0xbb:
      case (byte *)0xbc:
      case (byte *)0xbd:
        goto switchD_1800cd455_caseD_3;
      case (byte *)0xbe:
      case (byte *)0xc1:
      case (byte *)0xc2:
      case (byte *)0xc3:
      case (byte *)0xc4:
      case (byte *)0xc5:
      case (byte *)0xc6:
      case (byte *)0xc7:
        goto switchD_1800cd4ef_caseD_0;
      case (byte *)0xbf:
        goto switchD_1800cd4ef_caseD_1;
      case (byte *)0xc0:
        goto switchD_1800cd4ef_caseD_2;
      case (byte *)0xc8:
        goto switchD_1800cd52c_caseD_0;
      case (byte *)0xc9:
        goto switchD_1800cd52c_caseD_1;
      case (byte *)0xca:
        goto switchD_1800cd52c_caseD_2;
      case (byte *)0xcb:
      case (byte *)0xcc:
      case (byte *)0xcd:
      case (byte *)0xce:
      case (byte *)0xcf:
      case (byte *)0xd0:
      case (byte *)0xd1:
        goto switchD_1800cd52c_caseD_3;
      case (byte *)0xd2:
      case (byte *)0xd5:
      case (byte *)0xd6:
      case (byte *)0xd7:
      case (byte *)0xd8:
      case (byte *)0xd9:
      case (byte *)0xda:
      case (byte *)0xdb:
        goto switchD_1800cd5c1_caseD_0;
      case (byte *)0xd3:
        goto switchD_1800cd5c1_caseD_1;
      case (byte *)0xd4:
        goto switchD_1800cd5c1_caseD_2;
      case (byte *)0xdc:
        goto switchD_1800cd603_caseD_0;
      case (byte *)0xdd:
        goto switchD_1800cd603_caseD_1;
      case (byte *)0xde:
        goto switchD_1800cd603_caseD_2;
      case (byte *)0xdf:
      case (byte *)0xe0:
      case (byte *)0xe1:
      case (byte *)0xe2:
      case (byte *)0xe3:
      case (byte *)0xe4:
      case (byte *)0xe5:
        goto switchD_1800cd603_caseD_3;
      }
    case 1:
switchD_1800ccc37_caseD_1:
      lStack_6b8 = **(longlong **)(param_2 + 8);
      break;
    case 2:
switchD_1800ccc37_caseD_2:
      pbStack_6b0 = *(byte **)(*(longlong *)(param_2 + 8) + 8);
      break;
    default:
switchD_1800ccc37_default:
      lStack_6a8 = 1;
    }
    cVar5 = FUN_1800e6ca0(&local_6e0,&local_6c0);
    if ((cVar5 != '\0') || (pcVar10 = (char *)FUN_1800f34a0(&local_6e0), *pcVar10 != '\x01'))
    goto LAB_1800cd6fc;
    pbVar17 = (byte *)0x2;
    param_2 = &DAT_1806bdfcc;
    auVar22 = ZEXT1664(_DAT_18086d370);
    auVar26 = ZEXT1664(_DAT_18086d3c0);
    auVar20 = ZEXT864(0);
    auVar24 = ZEXT464(0x3f800000);
    goto LAB_1800cccd0;
  }
LAB_1800cd6fc:
  ReleaseSRWLockExclusive((PSRWLOCK)local_d38._0_8_);
code_r0x0001800cc6cc:
  if (*local_700 != 1) {
    FUN_18015bae0(&local_720,"cannot use key() for non-object iterators");
    FUN_1800f6e80(local_ad8,0xcf,&local_720);
                    /* WARNING: Subroutine does not return */
    FUN_180606630(local_ad8,&DAT_1808d0fe8);
  }
  piVar12 = (int *)(lStack_6f8 + 0x20);
  if (0xf < *(ulonglong *)(lStack_6f8 + 0x38)) {
    piVar12 = *(int **)piVar12;
  }
  if (((*(longlong *)(lStack_6f8 + 0x30) == 6) && (*piVar12 == 0x6165745f)) &&
     ((short)piVar12[1] == 0x736d)) {
    FUN_1800f33e0(&local_700);
  }
  else {
    if (*local_700 != 1) {
      FUN_18015bae0(&local_720,"cannot use key() for non-object iterators");
      FUN_1800f6e80(local_b80,0xcf,&local_720);
                    /* WARNING: Subroutine does not return */
      FUN_180606630(local_b80,&DAT_1808d0fe8);
    }
    local_d64[0] = FUN_18015a650();
    plVar9 = (longlong *)FUN_1800f9910(local_d50,local_d18,local_d64);
    lVar2 = *plVar9;
    pcVar10 = (char *)FUN_1800f3560(&local_700);
    if (*pcVar10 != '\x01') {
      local_d60 = FUN_180112a50(pcVar10);
      uVar11 = FUN_1800f6bd0(&local_720,"cannot use value() with ",&local_d60);
      FUN_1800f6ca0(local_bb8,0x132,uVar11);
                    /* WARNING: Subroutine does not return */
      FUN_180606630(local_bb8,&DAT_1808d1050);
    }
    local_720 = 0;
    uStack_71f = 0;
    uStack_718 = 0;
    uStack_710 = 0;
    uStack_708 = 0;
    auVar20 = ZEXT1664(auVar20._0_16_);
    auVar22 = ZEXT1664(auVar22._0_16_);
    auVar24 = ZEXT1664(auVar24._0_16_);
    auVar26 = ZEXT1664(auVar26._0_16_);
    auVar28 = ZEXT1664(auVar28._0_16_);
    auVar30 = ZEXT1664(auVar30._0_16_);
    FUN_1800e6b50(pcVar10,&local_720,&DAT_1806bdfc0);
    uVar11 = FUN_1800f3e20(pcVar10,&local_6e0);
    cVar5 = FUN_1800e6ca0(&local_720,uVar11);
    if (cVar5 == '\0') {
      uVar11 = FUN_1800f34a0(&local_720);
      uVar7 = FUN_1800e62a0(uVar11);
    }
    else {
      uVar7 = 0;
    }
    *(undefined4 *)(lVar2 + 0x18) = uVar7;
    uVar11 = FUN_1800f3560(&local_700);
    local_d60 = CONCAT44(local_d60._4_4_,auVar28._0_4_);
    uVar7 = FUN_1800e9950(uVar11,&DAT_1806bdfc4,&local_d60);
    *(undefined4 *)(lVar2 + 0x1c) = uVar7;
    pcVar10 = (char *)FUN_1800f3560(&local_700);
    if (*pcVar10 != '\x01') {
      local_d60 = FUN_180112a50(pcVar10);
      uVar11 = FUN_1800f6bd0(&local_720,"cannot use value() with ",&local_d60);
      FUN_1800f6ca0(local_bf0,0x132,uVar11);
                    /* WARNING: Subroutine does not return */
      FUN_180606630(local_bf0,&DAT_1808d1050);
    }
    local_720 = 0;
    uStack_71f = 0;
    uStack_718 = 0;
    uStack_710 = 0;
    uStack_708 = 0;
    auVar20 = ZEXT1664(auVar20._0_16_);
    auVar22 = ZEXT1664(auVar22._0_16_);
    auVar24 = ZEXT1664(auVar24._0_16_);
    auVar26 = ZEXT1664(auVar26._0_16_);
    auVar28 = ZEXT1664(auVar28._0_16_);
    auVar30 = ZEXT1664(auVar30._0_16_);
    FUN_1800e6b50(pcVar10,&local_720,&DAT_1806bdfc8);
    uVar11 = FUN_1800f3e20(pcVar10,&local_6e0);
    cVar5 = FUN_1800e6ca0(&local_720,uVar11);
    if (cVar5 == '\0') {
      uVar11 = FUN_1800f34a0(&local_720);
      uVar7 = FUN_1800e62a0(uVar11);
    }
    else {
      uVar7 = 0;
    }
    *(undefined4 *)(lVar2 + 0x20) = uVar7;
    uVar11 = FUN_1800f3560(&local_700);
    local_d68 = 0;
    uVar6 = FUN_1800e9c30(uVar11);
    *(undefined1 *)(lVar2 + 0x24) = uVar6;
    pcVar10 = (char *)FUN_1800f3560(&local_700);
    if (*pcVar10 != '\x01') {
      local_d60 = FUN_180112a50(pcVar10);
      uVar11 = FUN_1800f6bd0(&local_720,"cannot use value() with ",&local_d60);
      FUN_1800f6ca0(local_c28,0x132,uVar11);
                    /* WARNING: Subroutine does not return */
      FUN_180606630(local_c28,&DAT_1808d1050);
    }
    local_720 = 0;
    uStack_71f = 0;
    uStack_718 = 0;
    uStack_710 = 0;
    uStack_708 = 0;
    param_3 = "count";
    auVar20 = ZEXT1664(auVar20._0_16_);
    auVar22 = ZEXT1664(auVar22._0_16_);
    auVar24 = ZEXT1664(auVar24._0_16_);
    auVar26 = ZEXT1664(auVar26._0_16_);
    auVar28 = ZEXT1664(auVar28._0_16_);
    auVar30 = ZEXT1664(auVar30._0_16_);
    FUN_1800e6b50(pcVar10,&local_720);
    uVar11 = FUN_1800f3e20(pcVar10,&local_6e0);
    cVar5 = FUN_1800e6ca0(&local_720,uVar11);
    if (cVar5 == '\0') {
      uVar11 = FUN_1800f34a0(&local_720);
      uVar7 = FUN_1800e62a0(uVar11);
    }
    else {
      uVar7 = 0;
    }
    *(undefined4 *)(lVar2 + 0x28) = uVar7;
    uVar11 = FUN_1800f3560(&local_700);
    uStack_71f = 0;
    uStack_718 = 0;
    uStack_710 = auVar30._0_8_;
    uStack_708 = auVar30._8_8_;
    local_720 = 0;
    pbVar15 = (byte *)FUN_1800e9d60(uVar11,&local_6e0);
    auVar29 = auVar30._0_16_;
    auVar27 = auVar28._0_16_;
    auVar25 = auVar26._0_16_;
    auVar23 = auVar24._0_16_;
    auVar21 = auVar22._0_16_;
    auVar19 = auVar20._0_16_;
    pbVar17 = (byte *)(lVar2 + 0x30);
    if (pbVar17 != pbVar15) {
      FUN_18015c010(pbVar17);
      auVar29 = auVar30._0_16_;
      auVar27 = auVar28._0_16_;
      auVar25 = auVar26._0_16_;
      auVar23 = auVar24._0_16_;
      auVar21 = auVar22._0_16_;
      auVar19 = auVar20._0_16_;
      uVar11 = *(undefined8 *)(pbVar15 + 8);
      uVar3 = *(undefined8 *)(pbVar15 + 0x10);
      uVar4 = *(undefined8 *)(pbVar15 + 0x18);
      *(undefined8 *)pbVar17 = *(undefined8 *)pbVar15;
      *(undefined8 *)(lVar2 + 0x38) = uVar11;
      *(undefined8 *)(lVar2 + 0x40) = uVar3;
      *(undefined8 *)(lVar2 + 0x48) = uVar4;
      pbVar15[0x10] = 0;
      pbVar15[0x11] = 0;
      pbVar15[0x12] = 0;
      pbVar15[0x13] = 0;
      pbVar15[0x14] = 0;
      pbVar15[0x15] = 0;
      pbVar15[0x16] = 0;
      pbVar15[0x17] = 0;
      pbVar15[0x18] = 0xf;
      pbVar15[0x19] = 0;
      pbVar15[0x1a] = 0;
      pbVar15[0x1b] = 0;
      pbVar15[0x1c] = 0;
      pbVar15[0x1d] = 0;
      pbVar15[0x1e] = 0;
      pbVar15[0x1f] = 0;
      *pbVar15 = 0;
    }
    auVar20 = ZEXT1664(auVar19);
    auVar22 = ZEXT1664(auVar21);
    auVar24 = ZEXT1664(auVar23);
    auVar26 = ZEXT1664(auVar25);
    auVar28 = ZEXT1664(auVar27);
    auVar30 = ZEXT1664(auVar29);
    FUN_18015c010(&local_6e0);
    FUN_18015c010(&local_720);
    FUN_1800cb400(lVar2 + 0x18);
    uVar11 = FUN_1800f34a0(&local_700);
    cVar5 = FUN_1800e9e90(uVar11);
    if (cVar5 != '\0') {
      uVar11 = FUN_1800f3560(&local_700);
      local_720 = 0;
      uStack_71f = 0;
      uStack_718 = 0;
      uStack_710 = 0;
      uStack_708 = 0;
      param_3 = (char *)0xa;
      FUN_18015ba30(&local_720,"appearance");
      pbVar15 = (byte *)FUN_180113610(uVar11,&local_720);
      FUN_18015c010(&local_720);
      FUN_1800c9c00(lVar2 + 0x50,pbVar15);
    }
    pcVar10 = (char *)FUN_1800f34a0(&local_700);
    if (*pcVar10 == '\x01') {
      pbVar15 = *(byte **)(pcVar10 + 8);
      param_3 = "stickers";
      plVar9 = (longlong *)FUN_1800f6de0(pbVar15,local_d48);
      if (*plVar9 != *(longlong *)pbVar15) {
        uVar11 = FUN_1800f3560(&local_700);
        local_720 = 0;
        uStack_71f = 0;
        uStack_718 = 0;
        uStack_710 = 0;
        uStack_708 = 0;
        param_3 = &DAT_00000008;
        FUN_18015ba30(&local_720,"stickers");
        pbVar15 = (byte *)FUN_180113610(uVar11,&local_720);
        FUN_18015c010(&local_720);
        FUN_1800ca690(lVar2 + 0x60,pbVar15);
      }
    }
    pcVar10 = (char *)FUN_1800f34a0(&local_700);
    if (*pcVar10 == '\x01') {
      pbVar15 = *(byte **)(pcVar10 + 8);
      param_3 = "charm";
      plVar9 = (longlong *)FUN_1800f6de0(pbVar15,local_d28);
      if (*plVar9 != *(longlong *)pbVar15) {
        uVar11 = FUN_1800f3560(&local_700);
        local_720 = 0;
        uStack_71f = 0;
        uStack_718 = 0;
        uStack_710 = 0;
        uStack_708 = 0;
        param_3 = (char *)0x5;
        FUN_18015ba30(&local_720,"charm");
        pbVar15 = (byte *)FUN_180113610(uVar11,&local_720);
        FUN_18015c010(&local_720);
        FUN_1800cb250(lVar2 + 0xec,pbVar15);
      }
    }
    FUN_1800f33e0(&local_700);
  }
  goto LAB_1800cc630;
LAB_1800cccd0:
  auVar29 = auVar30._0_16_;
  auVar27 = auVar28._0_16_;
  auVar25 = auVar26._0_16_;
  auVar23 = auVar24._0_16_;
  auVar21 = auVar22._0_16_;
  auVar19 = auVar20._0_16_;
  local_d48[0] = (uint)pbVar17;
  local_d60 = CONCAT44(local_d60._4_4_,local_d48[0]);
  if (3 < (int)local_d48[0]) goto LAB_1800cd6fc;
  local_6c0 = (byte *)0x0;
  lStack_6b8 = 0;
  pbStack_6b0 = (byte *)0x0;
  lStack_6a8 = 0;
  pbVar15 = local_6e0;
  unaff_R12 = pbVar17;
  switch(*local_6e0) {
  default:
switchD_1800ccd0c_caseD_0:
    if (lStack_6c8 != 0) {
      FUN_18015bae0(&local_720,"cannot get value");
      FUN_1800f6e80(local_c60,0xd6,&local_720);
                    /* WARNING: Subroutine does not return */
      FUN_180606630(local_c60,&DAT_1808d0fe8);
    }
    pbVar13 = pbVar15;
    break;
  case 1:
switchD_1800ccd0c_caseD_1:
    pbVar13 = (byte *)(lStack_6d8 + 0x40);
    break;
  case 2:
switchD_1800ccd0c_caseD_2:
    pbVar13 = pbStack_6d0;
  }
  local_d58 = &DAT_1806be004;
  if ((int)pbVar17 == 2) {
    local_d58 = param_2;
  }
  auVar20 = ZEXT1664(auVar19);
  auVar22 = ZEXT1664(auVar21);
  auVar24 = ZEXT1664(auVar23);
  auVar26 = ZEXT1664(auVar25);
  auVar28 = ZEXT1664(auVar27);
  auVar30 = ZEXT1664(auVar29);
  FUN_1800ea030(pbVar13,&local_6c0,&local_d58);
  switch(*pbVar15) {
  default:
switchD_1800ccd73_caseD_0:
    if (lStack_6c8 != 0) {
      FUN_18015bae0(&local_720,"cannot get value");
      FUN_1800f6e80(local_c98,0xd6,&local_720);
                    /* WARNING: Subroutine does not return */
      FUN_180606630(local_c98,&DAT_1808d0fe8);
    }
    pbVar14 = pbVar15;
    break;
  case 1:
switchD_1800ccd73_caseD_1:
    pbVar14 = (byte *)(lStack_6d8 + 0x40);
    break;
  case 2:
switchD_1800ccd73_caseD_2:
    pbVar14 = pbStack_6d0;
  }
  lStack_6f8 = 0;
  pbStack_6f0 = (byte *)0x0;
  pbStack_6e8 = &DAT_8000000000000000;
  param_3 = (char *)(ulonglong)*pbVar14;
  local_700 = pbVar14;
  switch(*pbVar14) {
  case 0:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
switchD_1800ccde1_caseD_0:
    bVar16 = 0;
    lVar18 = -0x8000000000000000;
    pbVar13 = pbVar17;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
    switch((ulonglong)(&switchD_1800ccdee::switchdataD_1800cdf38)[(longlong)param_3] + 0x180000000)
    {
    case 0x1800ccdf0:
      goto switchD_1800ccde1_caseD_1;
    case 0x1800cce01:
      goto switchD_1800ccde1_caseD_2;
    default:
      goto switchD_1800ccde1_default;
    case 0x1800cce59:
      goto switchD_1800cce57_caseD_1;
    case 0x1800cce67:
      goto switchD_1800cce57_caseD_2;
    case 0x1800cce71:
      goto switchD_1800cce57_caseD_0;
    case 0x1800ccede:
      goto switchD_1800ccedc_caseD_0;
    case 0x1800cceeb:
      goto switchD_1800cc67e_caseD_5a;
    case 0x1800ccef9:
      goto switchD_1800ccedc_caseD_1;
    case 0x1800ccf0d:
      goto switchD_1800ccedc_caseD_2;
    case 0x1800ccf1e:
      goto switchD_1800ccedc_default;
    case 0x1800ccf3b:
      goto switchD_1800ccf39_caseD_1;
    case 0x1800ccf49:
      goto switchD_1800ccf39_caseD_2;
    case 0x1800ccf53:
      goto switchD_1800ccf39_caseD_0;
    case 0x1800ccfa9:
      goto switchD_1800ccfa7_caseD_0;
    case 0x1800ccfb6:
      goto switchD_1800ccfa7_caseD_1;
    case 0x1800ccfc7:
      goto switchD_1800ccfa7_caseD_2;
    case 0x1800ccfd9:
      goto switchD_1800ccfa7_default;
    case 0x1800cd095:
      goto switchD_1800cd093_caseD_1;
    case 0x1800cd0a3:
      goto switchD_1800cd093_caseD_2;
    case 0x1800cd0b8:
      goto switchD_1800cd093_caseD_0;
    case 0x1800cd105:
      goto switchD_1800cd103_caseD_1;
    case 0x1800cd10b:
      goto switchD_1800cd103_caseD_2;
    case 0x1800cd110:
      goto switchD_1800cd103_caseD_0;
    case 0x1800cd151:
      goto switchD_1800cd14f_caseD_1;
    case 0x1800cd157:
      goto switchD_1800cd14f_caseD_2;
    case 0x1800cd15c:
      goto switchD_1800cd14f_caseD_0;
    case 0x1800cd199:
      goto switchD_1800cd197_caseD_1;
    case 0x1800cd19f:
      goto switchD_1800cd197_caseD_2;
    case 0x1800cd1a4:
      goto switchD_1800cd197_caseD_0;
    case 0x1800cd1db:
      goto switchD_1800cd1d9_caseD_1;
    case 0x1800cd1e1:
      goto switchD_1800cd1d9_caseD_2;
    case 0x1800cd1e6:
      goto switchD_1800cd1d9_caseD_0;
    case 0x1800cd223:
      goto switchD_1800cd221_caseD_1;
    case 0x1800cd229:
      goto switchD_1800cd221_caseD_2;
    case 0x1800cd22e:
      goto switchD_1800cd221_caseD_0;
    case 0x1800cd421:
      goto switchD_1800cd41f_caseD_1;
    case 0x1800cd427:
      goto switchD_1800cd41f_caseD_2;
    case 0x1800cd42c:
      goto switchD_1800cd41f_caseD_0;
    case 0x1800cd457:
      goto switchD_1800cd455_caseD_1;
    case 0x1800cd462:
      goto switchD_1800cd455_caseD_2;
    case 0x1800cd467:
      goto switchD_1800cd455_caseD_3;
    case 0x1800cd4f1:
      goto switchD_1800cd4ef_caseD_1;
    case 0x1800cd4f7:
      goto switchD_1800cd4ef_caseD_2;
    case 0x1800cd4fc:
      goto switchD_1800cd4ef_caseD_0;
    case 0x1800cd52e:
      goto switchD_1800cd52c_caseD_1;
    case 0x1800cd539:
      goto switchD_1800cd52c_caseD_2;
    case 0x1800cd53e:
      goto switchD_1800cd52c_caseD_3;
    case 0x1800cd5c3:
      goto switchD_1800cd5c1_caseD_1;
    case 0x1800cd5ce:
      goto switchD_1800cd5c1_caseD_2;
    case 0x1800cd5d3:
      goto switchD_1800cd5c1_caseD_0;
    case 0x1800cd605:
      goto switchD_1800cd603_caseD_1;
    case 0x1800cd610:
      goto switchD_1800cd603_caseD_3;
    case 0x1800cd61c:
      goto switchD_1800cd603_caseD_2;
    case 0x1800cd8ca:
      goto switchD_1800cd455_caseD_0;
    case 0x1800cd952:
      goto switchD_1800cd52c_caseD_0;
    case 0x1800cd9da:
      goto switchD_1800cd603_caseD_0;
    }
  case 1:
switchD_1800ccde1_caseD_1:
    lStack_6f8 = **(longlong **)(pbVar14 + 8);
    break;
  case 2:
switchD_1800ccde1_caseD_2:
    pbStack_6f0 = *(byte **)(*(longlong *)(pbVar14 + 8) + 8);
    break;
  default:
switchD_1800ccde1_default:
    pbStack_6e8 = (byte *)0x1;
  }
  cVar5 = FUN_1800e6ca0(&local_6c0,&local_700);
  if (cVar5 == '\0') {
    pbVar15 = local_6c0;
    switch(*local_6c0) {
    default:
switchD_1800cce57_caseD_0:
      if (lStack_6a8 != 0) {
        FUN_18015bae0(&local_720,"cannot get value");
        FUN_1800f6e80(local_cd0,0xd6,&local_720);
                    /* WARNING: Subroutine does not return */
        FUN_180606630(local_cd0,&DAT_1808d0fe8);
      }
      pbVar13 = pbVar15;
      break;
    case 1:
switchD_1800cce57_caseD_1:
      pbVar13 = (byte *)(lStack_6b8 + 0x40);
      break;
    case 2:
switchD_1800cce57_caseD_2:
      pbVar13 = pbStack_6b0;
    }
    if (*pbVar13 != 1) goto LAB_1800cd6f5;
    param_3 = (char *)FUN_1800f34a0(&local_6c0);
    lStack_6f8 = 0;
    pbStack_6f0 = (byte *)0x0;
    pbStack_6e8 = &DAT_8000000000000000;
    pbVar14 = (byte *)(ulonglong)(byte)*param_3;
    local_700 = (byte *)param_3;
    switch(*param_3) {
    case '\0':
    case '\x03':
    case '\x04':
    case '\x05':
    case '\x06':
    case '\a':
    case '\b':
    case '\t':
      goto switchD_1800ccedc_caseD_0;
    case '\x01':
switchD_1800ccedc_caseD_1:
      lStack_6f8 = *(longlong *)**(undefined8 **)(param_3 + 8);
LAB_1800ccf26:
      do {
        switch(*pbVar15) {
        default:
switchD_1800ccf39_caseD_0:
          if (lStack_6a8 != 0) {
            FUN_18015bae0(&local_720,"cannot get value");
            FUN_1800f6e80(local_d08,0xd6,&local_720);
                    /* WARNING: Subroutine does not return */
            FUN_180606630(local_d08,&DAT_1808d0fe8);
          }
          pbVar14 = pbVar15;
          break;
        case 1:
switchD_1800ccf39_caseD_1:
          pbVar14 = (byte *)(lStack_6b8 + 0x40);
          break;
        case 2:
switchD_1800ccf39_caseD_2:
          pbVar14 = pbStack_6b0;
        }
        local_720 = SUB81(pbVar14,0);
        uStack_71f = (undefined7)((ulonglong)pbVar14 >> 8);
        uStack_718 = 0;
        uStack_710 = 0;
        uStack_708 = 0x8000000000000000;
        param_3 = (char *)(ulonglong)*pbVar14;
        switch(*pbVar14) {
        case 0:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
switchD_1800ccfa7_caseD_0:
          bVar16 = 0;
          lVar18 = -0x8000000000000000;
          pbVar13 = pbVar17;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
          switch((ulonglong)(&switchD_1800ccfb4::switchdataD_1800ce028)[(longlong)param_3] +
                 0x180000000) {
          case 0x1800ccfb6:
            goto switchD_1800ccfa7_caseD_1;
          case 0x1800ccfc7:
            goto switchD_1800ccfa7_caseD_2;
          default:
            goto switchD_1800ccfa7_default;
          case 0x1800cd095:
            goto switchD_1800cd093_caseD_1;
          case 0x1800cd0a3:
            goto switchD_1800cd093_caseD_2;
          case 0x1800cd0b8:
            goto switchD_1800cd093_caseD_0;
          case 0x1800cd105:
            goto switchD_1800cd103_caseD_1;
          case 0x1800cd10b:
            goto switchD_1800cd103_caseD_2;
          case 0x1800cd110:
            goto switchD_1800cd103_caseD_0;
          case 0x1800cd151:
            goto switchD_1800cd14f_caseD_1;
          case 0x1800cd157:
            goto switchD_1800cd14f_caseD_2;
          case 0x1800cd15c:
            goto switchD_1800cd14f_caseD_0;
          case 0x1800cd199:
            goto switchD_1800cd197_caseD_1;
          case 0x1800cd19f:
            goto switchD_1800cd197_caseD_2;
          case 0x1800cd1a4:
            goto switchD_1800cd197_caseD_0;
          case 0x1800cd1db:
            goto switchD_1800cd1d9_caseD_1;
          case 0x1800cd1e1:
            goto switchD_1800cd1d9_caseD_2;
          case 0x1800cd1e6:
            goto switchD_1800cd1d9_caseD_0;
          case 0x1800cd223:
            goto switchD_1800cd221_caseD_1;
          case 0x1800cd229:
            goto switchD_1800cd221_caseD_2;
          case 0x1800cd22e:
            goto switchD_1800cd221_caseD_0;
          case 0x1800cd421:
            goto switchD_1800cd41f_caseD_1;
          case 0x1800cd427:
            goto switchD_1800cd41f_caseD_2;
          case 0x1800cd42c:
            goto switchD_1800cd41f_caseD_0;
          case 0x1800cd457:
            goto switchD_1800cd455_caseD_1;
          case 0x1800cd462:
            goto switchD_1800cd455_caseD_2;
          case 0x1800cd467:
            goto switchD_1800cd455_caseD_3;
          case 0x1800cd4f1:
            goto switchD_1800cd4ef_caseD_1;
          case 0x1800cd4f7:
            goto switchD_1800cd4ef_caseD_2;
          case 0x1800cd4fc:
            goto switchD_1800cd4ef_caseD_0;
          case 0x1800cd52e:
            goto switchD_1800cd52c_caseD_1;
          case 0x1800cd539:
            goto switchD_1800cd52c_caseD_2;
          case 0x1800cd53e:
            goto switchD_1800cd52c_caseD_3;
          case 0x1800cd5c3:
            goto switchD_1800cd5c1_caseD_1;
          case 0x1800cd5ce:
            goto switchD_1800cd5c1_caseD_2;
          case 0x1800cd5d3:
            goto switchD_1800cd5c1_caseD_0;
          case 0x1800cd605:
            goto switchD_1800cd603_caseD_1;
          case 0x1800cd610:
            goto switchD_1800cd603_caseD_3;
          case 0x1800cd61c:
            goto switchD_1800cd603_caseD_2;
          case 0x1800cd8ca:
            goto switchD_1800cd455_caseD_0;
          case 0x1800cd952:
            goto switchD_1800cd52c_caseD_0;
          case 0x1800cd9da:
            goto switchD_1800cd603_caseD_0;
          }
        case 1:
switchD_1800ccfa7_caseD_1:
          uStack_718 = **(undefined8 **)(pbVar14 + 8);
          break;
        case 2:
switchD_1800ccfa7_caseD_2:
          uStack_710 = *(undefined8 *)(*(longlong *)(pbVar14 + 8) + 8);
          break;
        default:
switchD_1800ccfa7_default:
          uStack_708 = 1;
        }
        cVar5 = FUN_1800e6ca0(&local_700,&local_720);
        pbVar17 = local_700;
        if (cVar5 != '\0') goto LAB_1800cd6f1;
        if (*local_700 != 1) {
          FUN_18015bae0(&local_720,"cannot use key() for non-object iterators");
          FUN_1800f6e80(local_758,0xcf,&local_720);
                    /* WARNING: Subroutine does not return */
          FUN_180606630(local_758,&DAT_1808d0fe8);
        }
        param_2 = (byte *)(lStack_6f8 + 0x20);
        local_d58 = param_2;
        iVar8 = FUN_18015a650(param_2);
        if ((iVar8 - 1U < 0x7fff) &&
           (pcVar10 = (char *)FUN_1800f34a0(&local_700), *pcVar10 == '\x01')) {
          local_d64[0] = (short)iVar8;
          plVar9 = (longlong *)
                   FUN_1800f9910((longlong)(int)unaff_R12 * 0x40 + local_d40 + -0x30,local_d18,
                                 local_d64);
          lVar18 = *plVar9;
          pbVar13 = pbVar17;
          switch(*pbVar17) {
          default:
switchD_1800cd093_caseD_0:
            if (pbStack_6e8 != (byte *)0x0) {
              FUN_18015bae0(&local_720,"cannot get value");
              FUN_1800f6e80(local_790,0xd6,&local_720);
                    /* WARNING: Subroutine does not return */
              FUN_180606630(local_790,&DAT_1808d0fe8);
            }
            pbVar17 = pbVar13;
            break;
          case 1:
switchD_1800cd093_caseD_1:
            pbVar13 = param_2 + 0x20;
            break;
          case 2:
switchD_1800cd093_caseD_2:
            pbVar13 = pbStack_6f0;
            goto LAB_1800cd0d4;
          }
LAB_1800cd0d4:
          pbVar15 = pbStack_6e8;
          unaff_R12 = pbStack_6f0;
          local_d50 = (ulonglong)local_d50._4_4_ << 0x20;
          local_698 = FUN_1800e63a0(pbVar13,&DAT_1806bdfc0,&local_d50);
          pbVar13 = pbVar17;
          switch(*pbVar17) {
          default:
switchD_1800cd103_caseD_0:
            if (pbVar15 != (byte *)0x0) {
              FUN_18015bae0(&local_720,"cannot get value");
              FUN_1800f6e80(local_7c8,0xd6,&local_720);
                    /* WARNING: Subroutine does not return */
              FUN_180606630(local_7c8,&DAT_1808d0fe8);
            }
            pbVar15 = (byte *)0x0;
            pbVar17 = pbVar13;
            break;
          case 1:
switchD_1800cd103_caseD_1:
            pbVar13 = param_2 + 0x20;
            break;
          case 2:
switchD_1800cd103_caseD_2:
            pbVar13 = unaff_R12;
            unaff_R12 = pbVar13;
          }
          local_d50 = CONCAT44(local_d50._4_4_,auVar28._0_4_);
          local_694 = FUN_1800e9950(pbVar13,&DAT_1806bdfc4,&local_d50);
          pbVar13 = pbVar17;
          switch(*pbVar17) {
          default:
switchD_1800cd14f_caseD_0:
            if (pbVar15 != (byte *)0x0) {
              FUN_18015bae0(&local_720,"cannot get value");
              FUN_1800f6e80(local_800,0xd6,&local_720);
                    /* WARNING: Subroutine does not return */
              FUN_180606630(local_800,&DAT_1808d0fe8);
            }
            pbVar15 = (byte *)0x0;
            pbVar17 = pbVar13;
            break;
          case 1:
switchD_1800cd14f_caseD_1:
            pbVar13 = param_2 + 0x20;
            break;
          case 2:
switchD_1800cd14f_caseD_2:
            pbVar13 = unaff_R12;
            unaff_R12 = pbVar13;
          }
          local_d50 = local_d50 & 0xffffffff00000000;
          local_690 = FUN_1800e63a0(pbVar13,&DAT_1806bdfc8,&local_d50);
          pbVar13 = pbVar17;
          switch(*pbVar17) {
          default:
switchD_1800cd197_caseD_0:
            if (pbVar15 != (byte *)0x0) {
              FUN_18015bae0(&local_720,"cannot get value");
              FUN_1800f6e80(local_838,0xd6,&local_720);
                    /* WARNING: Subroutine does not return */
              FUN_180606630(local_838,&DAT_1808d0fe8);
            }
            pbVar15 = (byte *)0x0;
            pbVar17 = pbVar13;
            break;
          case 1:
switchD_1800cd197_caseD_1:
            pbVar13 = param_2 + 0x20;
            break;
          case 2:
switchD_1800cd197_caseD_2:
            pbVar13 = unaff_R12;
            unaff_R12 = pbVar13;
          }
          local_d68 = 0;
          local_68c = FUN_1800e9c30(pbVar13);
          pbVar13 = pbVar17;
          switch(*pbVar17) {
          default:
switchD_1800cd1d9_caseD_0:
            if (pbVar15 != (byte *)0x0) {
              FUN_18015bae0(&local_720,"cannot get value");
              FUN_1800f6e80(local_870,0xd6,&local_720);
                    /* WARNING: Subroutine does not return */
              FUN_180606630(local_870,&DAT_1808d0fe8);
            }
            pbVar15 = (byte *)0x0;
            pbVar17 = pbVar13;
            break;
          case 1:
switchD_1800cd1d9_caseD_1:
            pbVar13 = param_2 + 0x20;
            break;
          case 2:
switchD_1800cd1d9_caseD_2:
            pbVar13 = unaff_R12;
            unaff_R12 = pbVar13;
          }
          local_d50 = local_d50 & 0xffffffff00000000;
          local_688 = FUN_1800e63a0(pbVar13,"count",&local_d50);
          pbVar13 = pbVar17;
          switch(*pbVar17) {
          default:
switchD_1800cd221_caseD_0:
            if (pbVar15 != (byte *)0x0) {
              FUN_18015bae0(&local_720,"cannot get value");
              FUN_1800f6e80(local_8a8,0xd6,&local_720);
                    /* WARNING: Subroutine does not return */
              FUN_180606630(local_8a8,&DAT_1808d0fe8);
            }
            pbVar15 = (byte *)0x0;
            pbVar17 = pbVar13;
            break;
          case 1:
switchD_1800cd221_caseD_1:
            pbVar13 = param_2 + 0x20;
            break;
          case 2:
switchD_1800cd221_caseD_2:
            pbVar13 = unaff_R12;
            unaff_R12 = pbVar13;
          }
          uStack_71f = 0;
          uStack_718 = 0;
          uStack_710 = auVar30._0_8_;
          uStack_708 = auVar30._8_8_;
          local_720 = 0;
          FUN_1800e9d60(pbVar13,local_680);
          local_660 = 0;
          local_65c = 0xffffffffffffffff;
          local_654 = 0xffffffff;
          local_5bc = auVar20._0_4_;
          local_650 = (ulonglong)local_5bc << 0x20;
          auStack_648 = auVar22._0_16_;
          uStack_638 = 0xffffffff;
          local_630 = CONCAT44(auVar24._0_4_,local_5bc);
          uStack_628 = CONCAT44(local_5bc,local_5bc);
          uStack_620 = CONCAT44(0xffffffff,local_5bc);
          lStack_618 = (ulonglong)local_5bc << 0x20;
          local_610 = CONCAT44(local_5bc,auVar24._0_4_);
          uStack_608 = CONCAT44(local_5bc,local_5bc);
          uStack_600 = 0xffffffff;
          auStack_5f8 = auVar26._0_16_;
          uStack_5e8 = CONCAT44(0xffffffff,local_5bc);
          lStack_5e0 = (ulonglong)local_5bc << 0x20;
          local_5c8 = 0xffffffff;
          local_5c4 = 0;
          local_5b0 = 0;
          local_5ac = 0;
          auVar20 = ZEXT1664(auVar20._0_16_);
          auVar22 = ZEXT1664(auStack_648);
          auVar24 = ZEXT1664(auVar24._0_16_);
          auVar26 = ZEXT1664(auStack_5f8);
          auVar28 = ZEXT1664(auVar28._0_16_);
          auVar30 = ZEXT1664(auVar30._0_16_);
          auStack_5d8 = auStack_648;
          local_5b8 = local_5bc;
          local_5b4 = local_5bc;
          FUN_1800cf9c0(lVar18 + 0x18,&local_698);
          FUN_18015c010(local_680);
          FUN_18015c010(&local_720);
          FUN_1800cb400(lVar18 + 0x18);
          bVar16 = *pbVar17;
          pbVar13 = pbVar17;
          switch(bVar16) {
          default:
switchD_1800cd41f_caseD_0:
            if (pbVar15 != (byte *)0x0) {
              FUN_18015bae0(&local_720,"cannot get value");
              FUN_1800f6e80(local_8e0,0xd6,&local_720);
                    /* WARNING: Subroutine does not return */
              FUN_180606630(local_8e0,&DAT_1808d0fe8);
            }
            pbVar15 = (byte *)0x0;
            pbVar17 = pbVar13;
            break;
          case 1:
switchD_1800cd41f_caseD_1:
            pbVar13 = param_2 + 0x20;
            break;
          case 2:
switchD_1800cd41f_caseD_2:
            pbVar13 = unaff_R12;
            unaff_R12 = pbVar13;
          }
          cVar5 = FUN_1800e9e90(pbVar13);
          if (cVar5 != '\0') {
            pbVar13 = pbVar17;
            switch(bVar16) {
            case 0:
              goto switchD_1800cd455_caseD_0;
            case 1:
switchD_1800cd455_caseD_1:
              pbVar17 = local_d58 + 0x20;
              break;
            case 2:
switchD_1800cd455_caseD_2:
              pbVar17 = unaff_R12;
              unaff_R12 = pbVar17;
              break;
            default:
switchD_1800cd455_caseD_3:
              if (pbVar15 != (byte *)0x0) {
                FUN_18015bae0(&local_720,"cannot get value");
                FUN_1800f6e80(local_a68,0xd6,&local_720);
                    /* WARNING: Subroutine does not return */
                FUN_180606630(local_a68,&DAT_1808d0fe8);
              }
              pbVar15 = (byte *)0x0;
              pbVar13 = pbVar17;
            }
            local_720 = 0;
            uStack_71f = 0;
            uStack_718 = 0;
            uStack_710 = 0;
            uStack_708 = 0;
            FUN_18015ba30(&local_720,"appearance",10);
            uVar11 = FUN_180113610(pbVar17,&local_720);
            FUN_18015c010(&local_720);
            FUN_1800c9c00(lVar18 + 0x50,uVar11);
            pbVar17 = pbVar13;
            param_2 = local_d58;
          }
          bVar16 = *pbVar17;
          pbVar13 = pbVar17;
          switch(bVar16) {
          default:
switchD_1800cd4ef_caseD_0:
            if (pbVar15 != (byte *)0x0) {
              FUN_18015bae0(&local_720,"cannot get value");
              FUN_1800f6e80(local_918,0xd6,&local_720);
                    /* WARNING: Subroutine does not return */
              FUN_180606630(local_918,&DAT_1808d0fe8);
            }
            pbVar15 = (byte *)0x0;
            pbVar17 = pbVar13;
            break;
          case 1:
switchD_1800cd4ef_caseD_1:
            pbVar13 = param_2 + 0x20;
            break;
          case 2:
switchD_1800cd4ef_caseD_2:
            pbVar13 = unaff_R12;
            unaff_R12 = pbVar13;
          }
          cVar5 = FUN_1800e6540(pbVar13,"stickers");
          if (cVar5 != '\0') {
            pbVar13 = pbVar17;
            switch(bVar16) {
            case 0:
              goto switchD_1800cd52c_caseD_0;
            case 1:
switchD_1800cd52c_caseD_1:
              pbVar17 = local_d58 + 0x20;
              break;
            case 2:
switchD_1800cd52c_caseD_2:
              pbVar17 = unaff_R12;
              unaff_R12 = pbVar17;
              break;
            default:
switchD_1800cd52c_caseD_3:
              if (pbVar15 != (byte *)0x0) {
                FUN_18015bae0(&local_720,"cannot get value");
                FUN_1800f6e80(local_9f8,0xd6,&local_720);
                    /* WARNING: Subroutine does not return */
                FUN_180606630(local_9f8,&DAT_1808d0fe8);
              }
              pbVar15 = (byte *)0x0;
              pbVar13 = pbVar17;
            }
            local_720 = 0;
            uStack_71f = 0;
            uStack_718 = 0;
            uStack_710 = 0;
            uStack_708 = 0;
            FUN_18015ba30(&local_720,"stickers",8);
            uVar11 = FUN_180113610(pbVar17,&local_720);
            FUN_18015c010(&local_720);
            FUN_1800ca690(lVar18 + 0x60,uVar11);
            pbVar17 = pbVar13;
          }
          bVar16 = *pbVar17;
          pbVar13 = pbVar17;
          switch(bVar16) {
          default:
switchD_1800cd5c1_caseD_0:
            if (pbVar15 != (byte *)0x0) {
              FUN_18015bae0(&local_720,"cannot get value");
              FUN_1800f6e80(local_950,0xd6,&local_720);
                    /* WARNING: Subroutine does not return */
              FUN_180606630(local_950,&DAT_1808d0fe8);
            }
            pbVar15 = (byte *)0x0;
            pbVar17 = pbVar13;
            break;
          case 1:
switchD_1800cd5c1_caseD_1:
            pbVar13 = local_d58 + 0x20;
            break;
          case 2:
switchD_1800cd5c1_caseD_2:
            pbVar13 = unaff_R12;
            unaff_R12 = pbVar13;
          }
          cVar5 = FUN_1800e6540(pbVar13,"charm");
          if (cVar5 != '\0') {
            switch(bVar16) {
            case 0:
              goto switchD_1800cd603_caseD_0;
            case 1:
switchD_1800cd603_caseD_1:
              unaff_R12 = local_d58 + 0x20;
              break;
            case 2:
              break;
            default:
switchD_1800cd603_caseD_3:
              if (pbVar15 != (byte *)0x0) {
                FUN_18015bae0(&local_720,"cannot get value");
                FUN_1800f6e80(local_988,0xd6,&local_720);
                    /* WARNING: Subroutine does not return */
                FUN_180606630(local_988,&DAT_1808d0fe8);
              }
              unaff_R12 = pbVar17;
            }
switchD_1800cd603_caseD_2:
            local_720 = 0;
            uStack_71f = 0;
            uStack_718 = 0;
            uStack_710 = 0;
            uStack_708 = 0;
            FUN_18015ba30(&local_720,"charm",5);
            uVar11 = FUN_180113610(unaff_R12,&local_720);
            FUN_18015c010(&local_720);
            FUN_1800cb250(lVar18 + 0xec,uVar11);
          }
          unaff_R12 = (byte *)(local_d60 & 0xffffffff);
        }
        param_2 = &DAT_1806bdfcc;
        FUN_1800f33e0(&local_700);
        pbVar15 = local_6c0;
      } while( true );
    case '\x02':
switchD_1800ccedc_caseD_2:
      pbStack_6f0 = (byte *)**(undefined8 **)(param_3 + 8);
      goto LAB_1800ccf26;
    default:
switchD_1800ccedc_default:
      pbStack_6e8 = (byte *)0x0;
      goto LAB_1800ccf26;
    }
  }
LAB_1800cd6f5:
  pbVar17 = (byte *)(ulonglong)((int)pbVar17 + 1);
  goto LAB_1800cccd0;
switchD_1800ccedc_caseD_0:
  bVar16 = 0;
  lVar18 = -0x8000000000000000;
  pbVar13 = pbVar17;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  switch((ulonglong)(&switchD_1800ccee9::switchdataD_1800cdfb0)[(longlong)pbVar14] + 0x180000000) {
  case 0x1800cceeb:
switchD_1800cc67e_caseD_5a:
    pbStack_6e8 = (byte *)0x1;
    goto LAB_1800ccf26;
  case 0x1800ccef9:
    goto switchD_1800ccedc_caseD_1;
  case 0x1800ccf0d:
    goto switchD_1800ccedc_caseD_2;
  case 0x1800ccf1e:
    goto switchD_1800ccedc_default;
  case 0x1800ccf3b:
    goto switchD_1800ccf39_caseD_1;
  case 0x1800ccf49:
    goto switchD_1800ccf39_caseD_2;
  default:
    goto switchD_1800ccf39_caseD_0;
  case 0x1800ccfa9:
    goto switchD_1800ccfa7_caseD_0;
  case 0x1800ccfb6:
    goto switchD_1800ccfa7_caseD_1;
  case 0x1800ccfc7:
    goto switchD_1800ccfa7_caseD_2;
  case 0x1800ccfd9:
    goto switchD_1800ccfa7_default;
  case 0x1800cd095:
    goto switchD_1800cd093_caseD_1;
  case 0x1800cd0a3:
    goto switchD_1800cd093_caseD_2;
  case 0x1800cd0b8:
    goto switchD_1800cd093_caseD_0;
  case 0x1800cd105:
    goto switchD_1800cd103_caseD_1;
  case 0x1800cd10b:
    goto switchD_1800cd103_caseD_2;
  case 0x1800cd110:
    goto switchD_1800cd103_caseD_0;
  case 0x1800cd151:
    goto switchD_1800cd14f_caseD_1;
  case 0x1800cd157:
    goto switchD_1800cd14f_caseD_2;
  case 0x1800cd15c:
    goto switchD_1800cd14f_caseD_0;
  case 0x1800cd199:
    goto switchD_1800cd197_caseD_1;
  case 0x1800cd19f:
    goto switchD_1800cd197_caseD_2;
  case 0x1800cd1a4:
    goto switchD_1800cd197_caseD_0;
  case 0x1800cd1db:
    goto switchD_1800cd1d9_caseD_1;
  case 0x1800cd1e1:
    goto switchD_1800cd1d9_caseD_2;
  case 0x1800cd1e6:
    goto switchD_1800cd1d9_caseD_0;
  case 0x1800cd223:
    goto switchD_1800cd221_caseD_1;
  case 0x1800cd229:
    goto switchD_1800cd221_caseD_2;
  case 0x1800cd22e:
    goto switchD_1800cd221_caseD_0;
  case 0x1800cd421:
    goto switchD_1800cd41f_caseD_1;
  case 0x1800cd427:
    goto switchD_1800cd41f_caseD_2;
  case 0x1800cd42c:
    goto switchD_1800cd41f_caseD_0;
  case 0x1800cd457:
    goto switchD_1800cd455_caseD_1;
  case 0x1800cd462:
    goto switchD_1800cd455_caseD_2;
  case 0x1800cd467:
    goto switchD_1800cd455_caseD_3;
  case 0x1800cd4f1:
    goto switchD_1800cd4ef_caseD_1;
  case 0x1800cd4f7:
    goto switchD_1800cd4ef_caseD_2;
  case 0x1800cd4fc:
    goto switchD_1800cd4ef_caseD_0;
  case 0x1800cd52e:
    goto switchD_1800cd52c_caseD_1;
  case 0x1800cd539:
    goto switchD_1800cd52c_caseD_2;
  case 0x1800cd53e:
    goto switchD_1800cd52c_caseD_3;
  case 0x1800cd5c3:
    goto switchD_1800cd5c1_caseD_1;
  case 0x1800cd5ce:
    goto switchD_1800cd5c1_caseD_2;
  case 0x1800cd5d3:
    goto switchD_1800cd5c1_caseD_0;
  case 0x1800cd605:
    goto switchD_1800cd603_caseD_1;
  case 0x1800cd610:
    goto switchD_1800cd603_caseD_3;
  case 0x1800cd61c:
    goto switchD_1800cd603_caseD_2;
  case 0x1800cd8ca:
switchD_1800cd455_caseD_0:
    FUN_18015bae0(&local_720,"cannot get value");
    FUN_1800f6e80(local_aa0,0xd6,&local_720);
                    /* WARNING: Subroutine does not return */
    FUN_180606630(local_aa0,&DAT_1808d0fe8);
  case 0x1800cd952:
switchD_1800cd52c_caseD_0:
    FUN_18015bae0(&local_720,"cannot get value");
    FUN_1800f6e80(local_a30,0xd6,&local_720);
                    /* WARNING: Subroutine does not return */
    FUN_180606630(local_a30,&DAT_1808d0fe8);
  case 0x1800cd9da:
switchD_1800cd603_caseD_0:
    FUN_18015bae0(&local_720,"cannot get value");
    FUN_1800f6e80(local_9c0,0xd6,&local_720);
                    /* WARNING: Subroutine does not return */
    FUN_180606630(local_9c0,&DAT_1808d0fe8);
  }
LAB_1800cd6f1:
  pbVar17 = (byte *)(ulonglong)local_d48[0];
  goto LAB_1800cd6f5;
}



