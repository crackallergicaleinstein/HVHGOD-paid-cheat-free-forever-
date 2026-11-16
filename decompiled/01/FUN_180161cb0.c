// FUN_180161cb0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180161cb0 */

undefined8 FUN_180161cb0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  char *pcVar6;
  int *piVar7;
  byte bVar8;
  byte bVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined1 local_res8 [8];
  int local_f8 [2];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  int local_78 [20];
  
  *(undefined8 *)(param_1 + 0x60) = 0;
  puVar5 = (undefined1 *)(param_1 + 0x50);
  if (0xf < *(ulonglong *)(param_1 + 0x68)) {
    puVar5 = *(undefined1 **)(param_1 + 0x50);
  }
  *puVar5 = 0;
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (lVar1 != *(longlong *)(param_1 + 0x40)) {
    *(longlong *)(param_1 + 0x40) = lVar1;
  }
  *(undefined8 *)(param_1 + 0x98) = 0xffffffffffffffff;
  local_res8[0] = *(undefined1 *)(param_1 + 0x14);
  FUN_180157850((longlong *)(param_1 + 0x38),local_res8);
  iVar2 = FUN_180162620(param_1);
  uVar3 = iVar2 + 1;
  if (uVar3 < 0xf6) {
    uVar12 = 0x8f00000080;
    uVar13 = 0xbf00000080;
    uVar10 = 0xbf00000080;
    uVar11 = 0xbf00000080;
    uVar14 = 0xbf00000090;
    uVar15 = 0xbf00000080;
    uVar16 = 0x9f00000080;
    uVar17 = 0xbf00000080;
    uVar18 = 0xbf000000a0;
    uVar19 = 0xbf00000080;
    do {
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((&switchD_180161d96::switchdataD_1801624a8)[(int)uVar3]) {
      case 0:
        pcVar6 = "invalid string: missing closing quote";
        goto LAB_1801621fa;
      case 1:
        pcVar6 = "invalid string: control character U+0000 (NUL) must be escaped to \\u0000";
        goto LAB_1801621fa;
      case 2:
        pcVar6 = "invalid string: control character U+0001 (SOH) must be escaped to \\u0001";
        goto LAB_1801621fa;
      case 3:
        pcVar6 = "invalid string: control character U+0002 (STX) must be escaped to \\u0002";
        goto LAB_1801621fa;
      case 4:
        pcVar6 = "invalid string: control character U+0003 (ETX) must be escaped to \\u0003";
        goto LAB_1801621fa;
      case 5:
        pcVar6 = "invalid string: control character U+0004 (EOT) must be escaped to \\u0004";
        goto LAB_1801621fa;
      case 6:
        pcVar6 = "invalid string: control character U+0005 (ENQ) must be escaped to \\u0005";
        goto LAB_1801621fa;
      case 7:
        pcVar6 = "invalid string: control character U+0006 (ACK) must be escaped to \\u0006";
        goto LAB_1801621fa;
      case 8:
        pcVar6 = "invalid string: control character U+0007 (BEL) must be escaped to \\u0007";
        goto LAB_1801621fa;
      case 9:
        pcVar6 = "invalid string: control character U+0008 (BS) must be escaped to \\u0008 or \\b";
        goto LAB_1801621fa;
      case 10:
        pcVar6 = "invalid string: control character U+0009 (HT) must be escaped to \\u0009 or \\t";
        goto LAB_1801621fa;
      case 0xb:
        pcVar6 = "invalid string: control character U+000A (LF) must be escaped to \\u000A or \\n";
        goto LAB_1801621fa;
      case 0xc:
        pcVar6 = "invalid string: control character U+000B (VT) must be escaped to \\u000B";
        goto LAB_1801621fa;
      case 0xd:
        pcVar6 = "invalid string: control character U+000C (FF) must be escaped to \\u000C or \\f";
        goto LAB_1801621fa;
      case 0xe:
        pcVar6 = "invalid string: control character U+000D (CR) must be escaped to \\u000D or \\r";
        goto LAB_1801621fa;
      case 0xf:
        pcVar6 = "invalid string: control character U+000E (SO) must be escaped to \\u000E";
        goto LAB_1801621fa;
      case 0x10:
        pcVar6 = "invalid string: control character U+000F (SI) must be escaped to \\u000F";
        goto LAB_1801621fa;
      case 0x11:
        pcVar6 = "invalid string: control character U+0010 (DLE) must be escaped to \\u0010";
        goto LAB_1801621fa;
      case 0x12:
        pcVar6 = "invalid string: control character U+0011 (DC1) must be escaped to \\u0011";
        goto LAB_1801621fa;
      case 0x13:
        pcVar6 = "invalid string: control character U+0012 (DC2) must be escaped to \\u0012";
        goto LAB_1801621fa;
      case 0x14:
        pcVar6 = "invalid string: control character U+0013 (DC3) must be escaped to \\u0013";
        goto LAB_1801621fa;
      case 0x15:
        pcVar6 = "invalid string: control character U+0014 (DC4) must be escaped to \\u0014";
        goto LAB_1801621fa;
      case 0x16:
        pcVar6 = "invalid string: control character U+0015 (NAK) must be escaped to \\u0015";
        goto LAB_1801621fa;
      case 0x17:
        pcVar6 = "invalid string: control character U+0016 (SYN) must be escaped to \\u0016";
        goto LAB_1801621fa;
      case 0x18:
        pcVar6 = "invalid string: control character U+0017 (ETB) must be escaped to \\u0017";
        goto LAB_1801621fa;
      case 0x19:
        pcVar6 = "invalid string: control character U+0018 (CAN) must be escaped to \\u0018";
        goto LAB_1801621fa;
      case 0x1a:
        pcVar6 = "invalid string: control character U+0019 (EM) must be escaped to \\u0019";
        goto LAB_1801621fa;
      case 0x1b:
        pcVar6 = "invalid string: control character U+001A (SUB) must be escaped to \\u001A";
        goto LAB_1801621fa;
      case 0x1c:
        pcVar6 = "invalid string: control character U+001B (ESC) must be escaped to \\u001B";
        goto LAB_1801621fa;
      case 0x1d:
        pcVar6 = "invalid string: control character U+001C (FS) must be escaped to \\u001C";
        goto LAB_1801621fa;
      case 0x1e:
        pcVar6 = "invalid string: control character U+001D (GS) must be escaped to \\u001D";
        goto LAB_1801621fa;
      case 0x1f:
        pcVar6 = "invalid string: control character U+001E (RS) must be escaped to \\u001E";
        goto LAB_1801621fa;
      case 0x20:
        pcVar6 = "invalid string: control character U+001F (US) must be escaped to \\u001F";
        goto LAB_1801621fa;
      default:
        FUN_18015af80(param_1 + 0x50,*(undefined1 *)(param_1 + 0x14));
        break;
      case 0x23:
        return 4;
      case 0x5d:
        uVar4 = FUN_180162620(param_1);
        switch(uVar4) {
        case 0x22:
          FUN_18015af80(param_1 + 0x50,0x22);
          break;
        default:
          pcVar6 = "invalid string: forbidden character after backslash";
          goto LAB_1801621fa;
        case 0x2f:
          FUN_18015af80(param_1 + 0x50,0x2f);
          break;
        case 0x5c:
          FUN_18015af80(param_1 + 0x50,0x5c);
          break;
        case 0x62:
          FUN_18015af80(param_1 + 0x50,8);
          break;
        case 0x66:
          FUN_18015af80(param_1 + 0x50,0xc);
          break;
        case 0x6e:
          FUN_18015af80(param_1 + 0x50,10);
          break;
        case 0x72:
          FUN_18015af80(param_1 + 0x50,0xd);
          break;
        case 0x74:
          FUN_18015af80(param_1 + 0x50,9);
          break;
        case 0x75:
          uVar3 = FUN_180162740(param_1);
          if (uVar3 == 0xffffffff) {
LAB_180162254:
            pcVar6 = "invalid string: \'\\u\' must be followed by 4 hex digits";
            goto LAB_1801621fa;
          }
          if (uVar3 - 0xd800 < 0x400) {
            iVar2 = FUN_180162620(param_1);
            if ((iVar2 == 0x5c) && (iVar2 = FUN_180162620(param_1), iVar2 == 0x75)) {
              iVar2 = FUN_180162740(param_1);
              if (iVar2 == -1) goto LAB_180162254;
              if (iVar2 - 0xdc00U < 0x400) {
                uVar3 = uVar3 * 0x400 + -0x35fdc00 + iVar2;
                goto LAB_180161eee;
              }
            }
            pcVar6 = "invalid string: surrogate U+D800..U+DBFF must be followed by U+DC00..U+DFFF";
            goto LAB_1801621fa;
          }
          if (uVar3 - 0xdc00 < 0x400) {
            pcVar6 = "invalid string: surrogate U+DC00..U+DFFF must follow U+D800..U+DBFF";
            goto LAB_1801621fa;
          }
LAB_180161eee:
          if (0x7f < (int)uVar3) {
            bVar9 = (byte)(uVar3 >> 6);
            if ((int)uVar3 < 0x800) {
              bVar9 = bVar9 | 0xc0;
            }
            else {
              bVar9 = bVar9 & 0x3f | 0x80;
              bVar8 = (byte)(uVar3 >> 0xc);
              if ((int)uVar3 < 0x10000) {
                bVar8 = bVar8 | 0xe0;
              }
              else {
                FUN_18015af80(param_1 + 0x50,(byte)(uVar3 >> 0x12) | 0xf0);
                bVar8 = bVar8 & 0x3f | 0x80;
              }
              FUN_18015af80(param_1 + 0x50,bVar8);
            }
            FUN_18015af80(param_1 + 0x50,bVar9);
            uVar3 = (uint)((byte)uVar3 & 0x3f | 0x80);
          }
          FUN_18015af80(param_1 + 0x50,uVar3 & 0xff);
        }
        break;
      case 0x81:
      case 0x82:
      case 0x83:
      case 0x84:
      case 0x85:
      case 0x86:
      case 0x87:
      case 0x88:
      case 0x89:
      case 0x8a:
      case 0x8b:
      case 0x8c:
      case 0x8d:
      case 0x8e:
      case 0x8f:
      case 0x90:
      case 0x91:
      case 0x92:
      case 0x93:
      case 0x94:
      case 0x95:
      case 0x96:
      case 0x97:
      case 0x98:
      case 0x99:
      case 0x9a:
      case 0x9b:
      case 0x9c:
      case 0x9d:
      case 0x9e:
      case 0x9f:
      case 0xa0:
      case 0xa1:
      case 0xa2:
      case 0xa3:
      case 0xa4:
      case 0xa5:
      case 0xa6:
      case 0xa7:
      case 0xa8:
      case 0xa9:
      case 0xaa:
      case 0xab:
      case 0xac:
      case 0xad:
      case 0xae:
      case 0xaf:
      case 0xb0:
      case 0xb1:
      case 0xb2:
      case 0xb3:
      case 0xb4:
      case 0xb5:
      case 0xb6:
      case 0xb7:
      case 0xb8:
      case 0xb9:
      case 0xba:
      case 0xbb:
      case 0xbc:
      case 0xbd:
      case 0xbe:
      case 0xbf:
      case 0xc0:
      case 0xc1:
      case 0xc2:
        goto switchD_180161d96_caseD_81;
      case 0xc3:
      case 0xc4:
      case 0xc5:
      case 0xc6:
      case 199:
      case 200:
      case 0xc9:
      case 0xca:
      case 0xcb:
      case 0xcc:
      case 0xcd:
      case 0xce:
      case 0xcf:
      case 0xd0:
      case 0xd1:
      case 0xd2:
      case 0xd3:
      case 0xd4:
      case 0xd5:
      case 0xd6:
      case 0xd7:
      case 0xd8:
      case 0xd9:
      case 0xda:
      case 0xdb:
      case 0xdc:
      case 0xdd:
      case 0xde:
      case 0xdf:
      case 0xe0:
        local_f8[0] = 0x80;
        local_f8[1] = 0xbf;
        FUN_18015af80(param_1 + 0x50,*(undefined1 *)(param_1 + 0x14));
        piVar7 = local_f8;
        do {
          FUN_180162620(param_1);
          if ((*(int *)(param_1 + 0x14) < *piVar7) || (piVar7[1] < *(int *)(param_1 + 0x14)))
          goto switchD_180161d96_caseD_81;
          FUN_18015af80(param_1 + 0x50);
          piVar7 = piVar7 + 2;
        } while (piVar7 != (int *)&local_f0);
        break;
      case 0xe1:
        local_a8 = uVar18;
        uStack_a0 = uVar19;
        FUN_18015af80(param_1 + 0x50,*(undefined1 *)(param_1 + 0x14));
        piVar7 = (int *)&local_a8;
        do {
          FUN_180162620(param_1);
          if ((*(int *)(param_1 + 0x14) < *piVar7) || (piVar7[1] < *(int *)(param_1 + 0x14)))
          goto switchD_180161d96_caseD_81;
          FUN_18015af80(param_1 + 0x50);
          piVar7 = piVar7 + 2;
        } while (piVar7 != (int *)&local_98);
        break;
      case 0xe2:
      case 0xe3:
      case 0xe4:
      case 0xe5:
      case 0xe6:
      case 0xe7:
      case 0xe8:
      case 0xe9:
      case 0xea:
      case 0xeb:
      case 0xec:
      case 0xed:
      case 0xef:
      case 0xf0:
        local_98 = uVar10;
        uStack_90 = uVar11;
        FUN_18015af80(param_1 + 0x50,*(undefined1 *)(param_1 + 0x14));
        piVar7 = (int *)&local_98;
        do {
          FUN_180162620(param_1);
          if ((*(int *)(param_1 + 0x14) < *piVar7) || (piVar7[1] < *(int *)(param_1 + 0x14)))
          goto switchD_180161d96_caseD_81;
          FUN_18015af80(param_1 + 0x50);
          piVar7 = piVar7 + 2;
        } while (piVar7 != (int *)&local_88);
        break;
      case 0xee:
        local_88 = uVar16;
        uStack_80 = uVar17;
        FUN_18015af80(param_1 + 0x50,*(undefined1 *)(param_1 + 0x14));
        piVar7 = (int *)&local_88;
        do {
          FUN_180162620(param_1);
          if ((*(int *)(param_1 + 0x14) < *piVar7) || (piVar7[1] < *(int *)(param_1 + 0x14)))
          goto switchD_180161d96_caseD_81;
          FUN_18015af80(param_1 + 0x50);
          piVar7 = piVar7 + 2;
        } while (piVar7 != local_78);
        break;
      case 0xf1:
        local_e0 = 0x80;
        local_dc = 0xbf;
        local_f0 = uVar14;
        uStack_e8 = uVar15;
        FUN_18015af80(param_1 + 0x50,*(undefined1 *)(param_1 + 0x14));
        piVar7 = (int *)&local_f0;
        do {
          FUN_180162620(param_1);
          if ((*(int *)(param_1 + 0x14) < *piVar7) || (piVar7[1] < *(int *)(param_1 + 0x14)))
          goto switchD_180161d96_caseD_81;
          FUN_18015af80(param_1 + 0x50);
          piVar7 = piVar7 + 2;
        } while (piVar7 != (int *)&local_d8);
        break;
      case 0xf2:
      case 0xf3:
      case 0xf4:
        local_c8 = 0x80;
        local_c4 = 0xbf;
        local_d8 = uVar10;
        uStack_d0 = uVar11;
        FUN_18015af80(param_1 + 0x50,*(undefined1 *)(param_1 + 0x14));
        piVar7 = (int *)&local_d8;
        do {
          FUN_180162620(param_1);
          if ((*(int *)(param_1 + 0x14) < *piVar7) || (piVar7[1] < *(int *)(param_1 + 0x14)))
          goto switchD_180161d96_caseD_81;
          FUN_18015af80(param_1 + 0x50);
          piVar7 = piVar7 + 2;
        } while (piVar7 != (int *)&local_c0);
        break;
      case 0xf5:
        local_b0 = 0x80;
        local_ac = 0xbf;
        local_c0 = uVar12;
        uStack_b8 = uVar13;
        FUN_18015af80(param_1 + 0x50,*(undefined1 *)(param_1 + 0x14));
        piVar7 = (int *)&local_c0;
        do {
          FUN_180162620(param_1);
          if ((*(int *)(param_1 + 0x14) < *piVar7) || (piVar7[1] < *(int *)(param_1 + 0x14)))
          goto switchD_180161d96_caseD_81;
          FUN_18015af80(param_1 + 0x50);
          piVar7 = piVar7 + 2;
        } while (piVar7 != (int *)&local_a8);
      }
      iVar2 = FUN_180162620(param_1);
      uVar3 = iVar2 + 1;
    } while (uVar3 < 0xf6);
  }
switchD_180161d96_caseD_81:
  pcVar6 = "invalid string: ill-formed UTF-8 byte";
LAB_1801621fa:
  *(char **)(param_1 + 0x70) = pcVar6;
  return 0xe;
}



