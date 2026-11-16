// FUN_180156160 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180156160 */

undefined1 FUN_180156160(undefined8 *param_1)

{
  undefined1 uVar1;
  byte *pbVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 *puVar7;
  char *pcVar8;
  undefined8 **ppuVar9;
  uint uVar10;
  byte bVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined4 local_104;
  undefined1 local_100 [8];
  undefined8 *local_f8;
  undefined1 *local_f0;
  undefined8 *local_e8;
  undefined4 *local_e0;
  undefined8 *local_d8;
  undefined4 *local_d0;
  undefined8 *local_c8;
  undefined4 *local_c0;
  undefined8 *local_b8;
  undefined1 *local_b0;
  undefined8 *local_a8;
  undefined1 *local_a0;
  undefined8 *local_98;
  undefined1 *local_90;
  
  param_1[0xc] = 0;
  puVar7 = param_1 + 10;
  if (0xf < (ulonglong)param_1[0xd]) {
    puVar7 = (undefined8 *)param_1[10];
  }
  *(undefined1 *)puVar7 = 0;
  if (param_1[7] != param_1[8]) {
    param_1[8] = param_1[7];
  }
  param_1[0x13] = 0xffffffffffffffff;
  local_res8[0] = *(undefined1 *)((longlong)param_1 + 0x14);
  FUN_180157850(param_1 + 7,local_res8);
  uVar14 = 0x8f00000080;
  uVar15 = 0xbf00000080;
  uVar12 = 0xbf00000080;
  uVar13 = 0xbf00000080;
  uVar16 = 0xbf00000090;
  uVar17 = 0xbf00000080;
  uVar18 = 0x9f00000080;
  uVar19 = 0xbf00000080;
  uVar20 = 0xbf000000a0;
  uVar21 = 0xbf00000080;
LAB_180156211:
  param_1[4] = param_1[4] + 1;
  param_1[5] = param_1[5] + 1;
  if (*(char *)(param_1 + 3) == '\0') {
    pbVar2 = (byte *)*param_1;
    if (pbVar2 == (byte *)param_1[1]) {
      uVar4 = 0xffffffff;
    }
    else {
      uVar4 = (uint)*pbVar2;
      *param_1 = pbVar2 + 1;
    }
    *(uint *)((longlong)param_1 + 0x14) = uVar4;
  }
  else {
    *(undefined1 *)(param_1 + 3) = 0;
  }
  if (*(int *)((longlong)param_1 + 0x14) != -1) {
    local_res8[0] = (undefined1)*(int *)((longlong)param_1 + 0x14);
    FUN_180157850(param_1 + 7,local_res8);
  }
  uVar4 = *(int *)((longlong)param_1 + 0x14) + 1;
  if (*(int *)((longlong)param_1 + 0x14) != 10) {
    if (uVar4 < 0xf6) goto LAB_180156279;
switchD_18015628d_caseD_2b:
    pcVar8 = "invalid string: ill-formed UTF-8 byte";
    goto LAB_180156750;
  }
  param_1[6] = param_1[6] + 1;
  param_1[5] = 0;
LAB_180156279:
  uVar1 = *(undefined1 *)((longlong)&UINT_180156844 + (longlong)(int)uVar4);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uVar1) {
  case 0:
    pcVar8 = "invalid string: missing closing quote";
    break;
  case 1:
    pcVar8 = "invalid string: control character U+0000 (NUL) must be escaped to \\u0000";
    break;
  case 2:
    pcVar8 = "invalid string: control character U+0001 (SOH) must be escaped to \\u0001";
    break;
  case 3:
    pcVar8 = "invalid string: control character U+0002 (STX) must be escaped to \\u0002";
    break;
  case 4:
    pcVar8 = "invalid string: control character U+0003 (ETX) must be escaped to \\u0003";
    break;
  case 5:
    pcVar8 = "invalid string: control character U+0004 (EOT) must be escaped to \\u0004";
    break;
  case 6:
    pcVar8 = "invalid string: control character U+0005 (ENQ) must be escaped to \\u0005";
    break;
  case 7:
    pcVar8 = "invalid string: control character U+0006 (ACK) must be escaped to \\u0006";
    break;
  case 8:
    pcVar8 = "invalid string: control character U+0007 (BEL) must be escaped to \\u0007";
    break;
  case 9:
    pcVar8 = "invalid string: control character U+0008 (BS) must be escaped to \\u0008 or \\b";
    break;
  case 10:
    pcVar8 = "invalid string: control character U+0009 (HT) must be escaped to \\u0009 or \\t";
    break;
  case 0xb:
    pcVar8 = "invalid string: control character U+000A (LF) must be escaped to \\u000A or \\n";
    break;
  case 0xc:
    pcVar8 = "invalid string: control character U+000B (VT) must be escaped to \\u000B";
    break;
  case 0xd:
    pcVar8 = "invalid string: control character U+000C (FF) must be escaped to \\u000C or \\f";
    break;
  case 0xe:
    pcVar8 = "invalid string: control character U+000D (CR) must be escaped to \\u000D or \\r";
    break;
  case 0xf:
    pcVar8 = "invalid string: control character U+000E (SO) must be escaped to \\u000E";
    break;
  case 0x10:
    pcVar8 = "invalid string: control character U+000F (SI) must be escaped to \\u000F";
    break;
  case 0x11:
    pcVar8 = "invalid string: control character U+0010 (DLE) must be escaped to \\u0010";
    break;
  case 0x12:
    pcVar8 = "invalid string: control character U+0011 (DC1) must be escaped to \\u0011";
    break;
  case 0x13:
    pcVar8 = "invalid string: control character U+0012 (DC2) must be escaped to \\u0012";
    break;
  case 0x14:
    pcVar8 = "invalid string: control character U+0013 (DC3) must be escaped to \\u0013";
    break;
  case 0x15:
    pcVar8 = "invalid string: control character U+0014 (DC4) must be escaped to \\u0014";
    break;
  case 0x16:
    pcVar8 = "invalid string: control character U+0015 (NAK) must be escaped to \\u0015";
    break;
  case 0x17:
    pcVar8 = "invalid string: control character U+0016 (SYN) must be escaped to \\u0016";
    break;
  case 0x18:
    pcVar8 = "invalid string: control character U+0017 (ETB) must be escaped to \\u0017";
    break;
  case 0x19:
    pcVar8 = "invalid string: control character U+0018 (CAN) must be escaped to \\u0018";
    break;
  case 0x1a:
    pcVar8 = "invalid string: control character U+0019 (EM) must be escaped to \\u0019";
    break;
  case 0x1b:
    pcVar8 = "invalid string: control character U+001A (SUB) must be escaped to \\u001A";
    break;
  case 0x1c:
    pcVar8 = "invalid string: control character U+001B (ESC) must be escaped to \\u001B";
    break;
  case 0x1d:
    pcVar8 = "invalid string: control character U+001C (FS) must be escaped to \\u001C";
    break;
  case 0x1e:
    pcVar8 = "invalid string: control character U+001D (GS) must be escaped to \\u001D";
    break;
  case 0x1f:
    pcVar8 = "invalid string: control character U+001E (RS) must be escaped to \\u001E";
    break;
  case 0x20:
    pcVar8 = "invalid string: control character U+001F (US) must be escaped to \\u001F";
    break;
  case 0x21:
    FUN_18015af80(param_1 + 10);
    goto LAB_180156211;
  case 0x22:
    return 4;
  case 0x23:
    uVar5 = FUN_180157250(param_1);
    switch(uVar5) {
    case 0x22:
      FUN_18015af80(param_1 + 10,0x22);
      goto LAB_180156211;
    default:
      pcVar8 = "invalid string: forbidden character after backslash";
      break;
    case 0x2f:
      FUN_18015af80(param_1 + 10,0x2f);
      goto LAB_180156211;
    case 0x5c:
      FUN_18015af80(param_1 + 10,0x5c);
      goto LAB_180156211;
    case 0x62:
      FUN_18015af80(param_1 + 10,8);
      goto LAB_180156211;
    case 0x66:
      FUN_18015af80(param_1 + 10,0xc);
      goto LAB_180156211;
    case 0x6e:
      FUN_18015af80(param_1 + 10,10);
      goto LAB_180156211;
    case 0x72:
      FUN_18015af80(param_1 + 10,0xd);
      goto LAB_180156211;
    case 0x74:
      FUN_18015af80(param_1 + 10,9);
      goto LAB_180156211;
    case 0x75:
      goto switchD_1801562b7_caseD_75;
    }
  case 0x24:
    local_res10 = 0x80;
    local_res14 = 0xbf;
    local_f8 = (undefined8 *)&local_res10;
    local_f0 = local_res8 + 0x10;
    ppuVar9 = &local_f8;
    goto LAB_1801564a8;
  case 0x25:
    local_e8 = &local_118;
    local_e0 = &local_108;
    ppuVar9 = &local_e8;
    local_118 = uVar20;
    uStack_110 = uVar21;
    goto LAB_1801564a8;
  case 0x26:
    local_d8 = &local_118;
    local_d0 = &local_108;
    ppuVar9 = &local_d8;
    local_118 = uVar12;
    uStack_110 = uVar13;
    goto LAB_1801564a8;
  case 0x27:
    local_c8 = &local_118;
    local_c0 = &local_108;
    ppuVar9 = &local_c8;
    local_118 = uVar18;
    uStack_110 = uVar19;
    goto LAB_1801564a8;
  case 0x28:
    local_108 = 0x80;
    local_104 = 0xbf;
    local_b8 = &local_118;
    local_b0 = local_100;
    ppuVar9 = &local_b8;
    local_118 = uVar16;
    uStack_110 = uVar17;
    goto LAB_1801564a8;
  case 0x29:
    local_108 = 0x80;
    local_104 = 0xbf;
    local_a8 = &local_118;
    local_a0 = local_100;
    ppuVar9 = &local_a8;
    local_118 = uVar12;
    uStack_110 = uVar13;
    goto LAB_1801564a8;
  case 0x2a:
    local_108 = 0x80;
    local_104 = 0xbf;
    local_98 = &local_118;
    local_90 = local_100;
    ppuVar9 = &local_98;
    local_118 = uVar14;
    uStack_110 = uVar15;
LAB_1801564a8:
    cVar3 = FUN_180157040(param_1,ppuVar9);
    if (cVar3 == '\0') {
      return 0xe;
    }
    goto LAB_180156211;
  case 0x2b:
    goto switchD_18015628d_caseD_2b;
  case 0x2c:
    return uVar1;
  }
LAB_180156750:
  param_1[0xe] = pcVar8;
  return 0xe;
switchD_1801562b7_caseD_75:
  uVar4 = FUN_180157120(param_1);
  if (uVar4 == 0xffffffff) {
LAB_1801565c5:
    pcVar8 = "invalid string: \'\\u\' must be followed by 4 hex digits";
  }
  else {
    if (0x3ff < uVar4 - 0xd800) {
      if (uVar4 - 0xdc00 < 0x400) {
        pcVar8 = "invalid string: surrogate U+DC00..U+DFFF must follow U+D800..U+DBFF";
        goto LAB_180156750;
      }
LAB_1801563e3:
      if (0x7f < (int)uVar4) {
        if ((int)uVar4 < 0x800) {
          uVar10 = uVar4 >> 6 | 0xc0;
        }
        else {
          uVar10 = uVar4 >> 6 & 0xffffff3f | 0x80;
          bVar11 = (byte)(uVar4 >> 0xc);
          if ((int)uVar4 < 0x10000) {
            bVar11 = bVar11 | 0xe0;
          }
          else {
            FUN_18015af80(param_1 + 10,(byte)(uVar4 >> 0x12) | 0xf0);
            bVar11 = bVar11 & 0x3f | 0x80;
          }
          FUN_18015af80(param_1 + 10,bVar11);
        }
        FUN_18015af80(param_1 + 10,uVar10 & 0xff);
        uVar4 = (uint)((byte)uVar4 & 0x3f | 0x80);
      }
      FUN_18015af80(param_1 + 10,uVar4 & 0xff);
      goto LAB_180156211;
    }
    iVar6 = FUN_180157250(param_1);
    if ((iVar6 == 0x5c) && (iVar6 = FUN_180157250(param_1), iVar6 == 0x75)) {
      iVar6 = FUN_180157120(param_1);
      if (iVar6 == -1) goto LAB_1801565c5;
      if (iVar6 - 0xdc00U < 0x400) {
        uVar4 = uVar4 * 0x400 + -0x35fdc00 + iVar6;
        goto LAB_1801563e3;
      }
    }
    pcVar8 = "invalid string: surrogate U+D800..U+DBFF must be followed by U+DC00..U+DFFF";
  }
  goto LAB_180156750;
}



