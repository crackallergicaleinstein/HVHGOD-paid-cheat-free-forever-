// FUN_180447350 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180447350 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

ulonglong FUN_180447350(longlong param_1,char *param_2,longlong *param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  char *pcVar10;
  undefined **ppuVar11;
  longlong *plVar12;
  
  switch(param_4) {
  case 1:
    if (*(int *)(*param_3 + 0x40) == 0xf8) {
      return 0x100000;
    }
    lVar7 = *(longlong *)(param_2 + 0x28);
    if (*param_2 == '\0') {
      if (*(ulonglong *)(param_2 + 0x30) < lVar7 + 2U) {
        return 0x80100009;
      }
      lVar8 = *(longlong *)(param_2 + 0x48);
      *(undefined2 *)(lVar8 + -1 + lVar7) = 0x7b20;
      *(undefined1 *)(lVar8 + 1 + lVar7) = 0;
      *(longlong *)(param_2 + 0x28) = *(longlong *)(param_2 + 0x28) + 2;
      uVar5 = (**(code **)(param_1 + 0x200))
                        (param_1,param_2,param_3,*(undefined4 *)(*param_3 + 0x40));
      if ((int)uVar5 < 0) {
        return uVar5;
      }
      if (*(ulonglong *)(param_2 + 0x30) < *(longlong *)(param_2 + 0x28) + 1U) {
        return 0x80100009;
      }
      *(undefined2 *)(*(longlong *)(param_2 + 0x28) + -1 + *(longlong *)(param_2 + 0x48)) = 0x7d;
      pcVar4 = &DAT_00000010;
      lVar7 = *(longlong *)(param_2 + 0x28) + 1;
      *(longlong *)(param_2 + 0x28) = lVar7;
      pcVar10 = param_2;
    }
    else {
      if (*(ulonglong *)(param_2 + 8) <= lVar7 + 8U) {
        return 0x80100009;
      }
      plVar12 = (longlong *)(param_2 + 0x48);
      *(char *)(*(longlong *)(param_2 + 0x48) + -1) = (char)lVar7;
      *(undefined8 *)(lVar7 + *plVar12) = 0x7b000300200201;
      *plVar12 = *plVar12 + lVar7 + 6;
      uVar9 = *(longlong *)(param_2 + 8) - (lVar7 + 6);
      param_2[0x28] = '\x02';
      param_2[0x29] = '\0';
      param_2[0x2a] = '\0';
      param_2[0x2b] = '\0';
      param_2[0x2c] = '\0';
      param_2[0x2d] = '\0';
      param_2[0x2e] = '\0';
      param_2[0x2f] = '\0';
      *(ulonglong *)(param_2 + 8) = uVar9;
      uVar5 = 0xff;
      if (uVar9 < 0xff) {
        uVar5 = uVar9;
      }
      *(ulonglong *)(param_2 + 0x30) = uVar5;
      uVar5 = (**(code **)(param_1 + 0x200))
                        (param_1,param_2,param_3,*(undefined4 *)(*param_3 + 0x40));
      if ((int)uVar5 < 0) {
        return uVar5;
      }
      lVar7 = *(longlong *)(param_2 + 0x28);
      pcVar4 = param_2;
      if (*param_2 == '\0') {
        if (*(ulonglong *)(param_2 + 0x30) < lVar7 + 1U) {
          return 0x80100009;
        }
        *(undefined2 *)(lVar7 + -1 + *plVar12) = 0x7d;
        lVar7 = *(longlong *)(param_2 + 0x28) + 1;
        *(longlong *)(param_2 + 0x28) = lVar7;
        pcVar10 = &DAT_00000010;
      }
      else {
        if (*(ulonglong *)(param_2 + 8) <= lVar7 + 4U) {
          return 0x80100009;
        }
        *(char *)(*plVar12 + -1) = (char)lVar7;
        *(undefined4 *)(lVar7 + *plVar12) = 0x7d0004;
        *plVar12 = *plVar12 + lVar7 + 2;
        uVar9 = *(longlong *)(param_2 + 8) - (lVar7 + 2);
        param_2[0x28] = '\x02';
        param_2[0x29] = '\0';
        param_2[0x2a] = '\0';
        param_2[0x2b] = '\0';
        param_2[0x2c] = '\0';
        param_2[0x2d] = '\0';
        param_2[0x2e] = '\0';
        param_2[0x2f] = '\0';
        *(ulonglong *)(param_2 + 8) = uVar9;
        uVar5 = 0xff;
        if (uVar9 < 0xff) {
          uVar5 = uVar9;
        }
        lVar7 = 2;
        *(ulonglong *)(param_2 + 0x30) = uVar5;
        pcVar10 = &DAT_00000010;
      }
    }
    plVar12 = (longlong *)(param_2 + 0x48);
    pcVar4 = pcVar4 + (longlong)pcVar10;
    iVar2 = *(int *)(*param_3 + 0x3c);
    if ((iVar2 != 3) && (iVar2 != 5)) {
      return 0x100000;
    }
    if (*(char *)(*param_3 + 0xf8) == '\0') {
      return 0x100000;
    }
    if (*param_2 != '\0') {
      if (*(ulonglong *)(param_2 + 8) <= lVar7 + 0x10U) {
        return 0x80100009;
      }
      *(char *)(*plVar12 + -1) = (char)lVar7;
      lVar8 = *plVar12;
      *(undefined8 *)(lVar7 + lVar8) = 0x7b020300200201;
      ((undefined8 *)(lVar7 + lVar8))[1] = 0x7d0004007a020d;
      param_2[0x28] = '\x02';
      param_2[0x29] = '\0';
      param_2[0x2a] = '\0';
      param_2[0x2b] = '\0';
      param_2[0x2c] = '\0';
      param_2[0x2d] = '\0';
      param_2[0x2e] = '\0';
      param_2[0x2f] = '\0';
      *plVar12 = *plVar12 + lVar7 + 0xe;
      uVar9 = *(longlong *)(param_2 + 8) - (lVar7 + 0xe);
      *(ulonglong *)(param_2 + 8) = uVar9;
      uVar5 = 0xff;
      if (uVar9 < 0xff) {
        uVar5 = uVar9;
      }
      *(ulonglong *)(param_2 + 0x30) = uVar5;
      return 0x100000;
    }
    ppuVar11 = &PTR_DAT_18075d300;
    goto LAB_180448099;
  case 2:
    if (*(char *)(*param_3 + 0x44) != '\0') {
      return 0x100000;
    }
    switch(*(undefined4 *)(*param_3 + 0x48)) {
    case 0:
      goto LAB_180448123;
    case 1:
      if (*param_2 != '\0') {
        lVar7 = *(longlong *)(param_2 + 0x28);
        if (*(ulonglong *)(param_2 + 8) <= lVar7 + 0x13U) {
          return 0x80100009;
        }
        *(char *)(*(longlong *)(param_2 + 0x48) + -1) = (char)lVar7;
        lVar8 = *(longlong *)(param_2 + 0x48);
        *(undefined8 *)(lVar8 + lVar7) = 0x7b020300200201;
        ((undefined8 *)(lVar8 + lVar7))[1] = 0x400326f7431050d;
        *(undefined2 *)(lVar8 + 0x10 + lVar7) = 32000;
        *(undefined1 *)(lVar8 + 0x12 + lVar7) = 0;
        lVar7 = lVar7 + 0x11;
        goto LAB_1804478ac;
      }
      ppuVar11 = &PTR_s__1to2__180742fa8;
      break;
    case 2:
      if (*param_2 != '\0') {
        lVar7 = *(longlong *)(param_2 + 0x28);
        if (*(ulonglong *)(param_2 + 8) <= lVar7 + 0x13U) {
          return 0x80100009;
        }
        *(char *)(*(longlong *)(param_2 + 0x48) + -1) = (char)lVar7;
        lVar8 = *(longlong *)(param_2 + 0x48);
        *(undefined8 *)(lVar8 + lVar7) = 0x7b020300200201;
        ((undefined8 *)(lVar8 + lVar7))[1] = 0x400346f7431050d;
        *(undefined2 *)(lVar8 + 0x10 + lVar7) = 32000;
        *(undefined1 *)(lVar8 + 0x12 + lVar7) = 0;
        lVar7 = lVar7 + 0x11;
        goto LAB_1804478ac;
      }
      ppuVar11 = &PTR_s__1to4__18076ac70;
      break;
    case 3:
      if (*param_2 != '\0') {
        lVar7 = *(longlong *)(param_2 + 0x28);
        if (*(ulonglong *)(param_2 + 8) <= lVar7 + 0x13U) {
          return 0x80100009;
        }
        *(char *)(*(longlong *)(param_2 + 0x48) + -1) = (char)lVar7;
        lVar8 = *(longlong *)(param_2 + 0x48);
        *(undefined8 *)(lVar8 + lVar7) = 0x7b020300200201;
        ((undefined8 *)(lVar8 + lVar7))[1] = 0x400386f7431050d;
        *(undefined2 *)(lVar8 + 0x10 + lVar7) = 32000;
        *(undefined1 *)(lVar8 + 0x12 + lVar7) = 0;
        lVar7 = lVar7 + 0x11;
        goto LAB_1804478ac;
      }
      ppuVar11 = &PTR_s__1to8__180764130;
      break;
    case 4:
      if (*param_2 != '\0') {
        lVar7 = *(longlong *)(param_2 + 0x28);
        if (*(ulonglong *)(param_2 + 8) <= lVar7 + 0x14U) {
          return 0x80100009;
        }
        *(char *)(*(longlong *)(param_2 + 0x48) + -1) = (char)lVar7;
        lVar8 = *(longlong *)(param_2 + 0x48);
        *(undefined8 *)(lVar8 + lVar7) = 0x7b020300200201;
        ((undefined8 *)(lVar8 + lVar7))[1] = 0x36316f7431060d;
LAB_1804478a4:
        *(undefined4 *)(lVar8 + 0x10 + lVar7) = 0x7d0004;
        lVar7 = lVar7 + 0x12;
LAB_1804478ac:
        *(longlong *)(param_2 + 0x48) = *(longlong *)(param_2 + 0x48) + lVar7;
        uVar9 = *(longlong *)(param_2 + 8) - lVar7;
        *(ulonglong *)(param_2 + 8) = uVar9;
        param_2[0x28] = '\x02';
        param_2[0x29] = '\0';
        param_2[0x2a] = '\0';
        param_2[0x2b] = '\0';
        param_2[0x2c] = '\0';
        param_2[0x2d] = '\0';
        param_2[0x2e] = '\0';
        param_2[0x2f] = '\0';
        uVar5 = 0xff;
        if (uVar9 < 0xff) {
          uVar5 = uVar9;
        }
        *(ulonglong *)(param_2 + 0x30) = uVar5;
        return 0x100000;
      }
      ppuVar11 = &PTR_s__1to16__180753168;
      break;
    case 5:
      if (*param_2 != '\0') {
        lVar7 = *(longlong *)(param_2 + 0x28);
        if (*(ulonglong *)(param_2 + 8) <= lVar7 + 0x14U) {
          return 0x80100009;
        }
        *(char *)(*(longlong *)(param_2 + 0x48) + -1) = (char)lVar7;
        lVar8 = *(longlong *)(param_2 + 0x48);
        *(undefined8 *)(lVar8 + lVar7) = 0x7b020300200201;
        ((undefined8 *)(lVar8 + lVar7))[1] = 0x32336f7431060d;
        goto LAB_1804478a4;
      }
      ppuVar11 = &PTR_s__1to32__18075d2f0;
      break;
    case 6:
      if (*param_2 != '\0') {
        lVar7 = *(longlong *)(param_2 + 0x28);
        if (*(ulonglong *)(param_2 + 8) <= lVar7 + 0x14U) {
          return 0x80100009;
        }
        *(char *)(*(longlong *)(param_2 + 0x48) + -1) = (char)lVar7;
        lVar8 = *(longlong *)(param_2 + 0x48);
        *(undefined8 *)(lVar8 + lVar7) = 0x7b020300200201;
        ((undefined8 *)(lVar8 + lVar7))[1] = 0x34366f7431060d;
        goto LAB_1804478a4;
      }
      ppuVar11 = &PTR_s__1to64__180769ba8;
      break;
    default:
      goto LAB_180448123;
    case 10:
      if (*param_2 != '\0') {
        lVar7 = *(longlong *)(param_2 + 0x28);
        if (*(ulonglong *)(param_2 + 8) <= lVar7 + 0x13U) {
          return 0x80100009;
        }
        *(char *)(*(longlong *)(param_2 + 0x48) + -1) = (char)lVar7;
        lVar8 = *(longlong *)(param_2 + 0x48);
        *(undefined8 *)(lVar8 + lVar7) = 0x7b020300200201;
        ((undefined8 *)(lVar8 + lVar7))[1] = 0x400386f7434050d;
        *(undefined2 *)(lVar8 + 0x10 + lVar7) = 32000;
        *(undefined1 *)(lVar8 + 0x12 + lVar7) = 0;
        lVar7 = lVar7 + 0x11;
        goto LAB_1804478ac;
      }
      ppuVar11 = &PTR_s__4to8__18076a1b8;
      break;
    case 0xb:
      if (*param_2 != '\0') {
        lVar7 = *(longlong *)(param_2 + 0x28);
        if (*(ulonglong *)(param_2 + 8) <= lVar7 + 0x14U) {
          return 0x80100009;
        }
        *(char *)(*(longlong *)(param_2 + 0x48) + -1) = (char)lVar7;
        lVar8 = *(longlong *)(param_2 + 0x48);
        *(undefined8 *)(lVar8 + lVar7) = 0x7b020300200201;
        ((undefined8 *)(lVar8 + lVar7))[1] = 0x36316f7434060d;
        goto LAB_1804478a4;
      }
      ppuVar11 = &PTR_s__4to16__180768f60;
      break;
    case 0xc:
      if (*param_2 != '\0') {
        lVar7 = *(longlong *)(param_2 + 0x28);
        if (*(ulonglong *)(param_2 + 8) <= lVar7 + 0x14U) {
          return 0x80100009;
        }
        *(char *)(*(longlong *)(param_2 + 0x48) + -1) = (char)lVar7;
        lVar8 = *(longlong *)(param_2 + 0x48);
        *(undefined8 *)(lVar8 + lVar7) = 0x7b020300200201;
        ((undefined8 *)(lVar8 + lVar7))[1] = 0x36316f7438060d;
        goto LAB_1804478a4;
      }
      ppuVar11 = &PTR_s__8to16__18076bd50;
    }
    break;
  case 3:
    iVar2 = *(int *)(*param_3 + 0x4c);
    if (*(char *)(*param_3 + 0x58) == '\0') {
      if (iVar2 == 0) {
        return 0x100000;
      }
      if (iVar2 == 1) {
        if (*param_2 != '\0') {
          lVar7 = *(longlong *)(param_2 + 0x28);
          if (*(ulonglong *)(param_2 + 8) <= lVar7 + 0x11U) {
            return 0x80100009;
          }
          *(char *)(*(longlong *)(param_2 + 0x48) + -1) = (char)lVar7;
          lVar8 = *(longlong *)(param_2 + 0x48);
          puVar1 = (undefined8 *)(lVar8 + lVar7);
          *puVar1 = 0x7b020300200201;
          puVar1[1] = 0x7d0004006e72030d;
          *(undefined1 *)(lVar8 + 0x10 + lVar7) = 0;
          lVar7 = lVar7 + 0xf;
          goto LAB_1804478ac;
        }
        ppuVar11 = &PTR_s__rn__18076ac60;
      }
      else if (iVar2 == 2) {
        if (*param_2 != '\0') {
          lVar7 = *(longlong *)(param_2 + 0x28);
          if (*(ulonglong *)(param_2 + 8) <= lVar7 + 0x11U) {
            return 0x80100009;
          }
          *(char *)(*(longlong *)(param_2 + 0x48) + -1) = (char)lVar7;
          lVar8 = *(longlong *)(param_2 + 0x48);
          puVar1 = (undefined8 *)(lVar8 + lVar7);
          *puVar1 = 0x7b020300200201;
          puVar1[1] = 0x7d0004006472030d;
          *(undefined1 *)(lVar8 + 0x10 + lVar7) = 0;
          lVar7 = lVar7 + 0xf;
          goto LAB_1804478ac;
        }
        ppuVar11 = &PTR_s__rd__18076b198;
      }
      else if (iVar2 == 3) {
        if (*param_2 != '\0') {
          lVar7 = *(longlong *)(param_2 + 0x28);
          if (*(ulonglong *)(param_2 + 8) <= lVar7 + 0x11U) {
            return 0x80100009;
          }
          *(char *)(*(longlong *)(param_2 + 0x48) + -1) = (char)lVar7;
          lVar8 = *(longlong *)(param_2 + 0x48);
          puVar1 = (undefined8 *)(lVar8 + lVar7);
          *puVar1 = 0x7b020300200201;
          puVar1[1] = 0x7d0004007572030d;
          *(undefined1 *)(lVar8 + 0x10 + lVar7) = 0;
          lVar7 = lVar7 + 0xf;
          goto LAB_1804478ac;
        }
        ppuVar11 = &PTR_s__ru__180753258;
      }
      else {
        if (iVar2 != 4) {
          return 0x80100004;
        }
        if (*param_2 != '\0') {
          lVar7 = *(longlong *)(param_2 + 0x28);
          if (*(ulonglong *)(param_2 + 8) <= lVar7 + 0x11U) {
            return 0x80100009;
          }
          *(char *)(*(longlong *)(param_2 + 0x48) + -1) = (char)lVar7;
          lVar8 = *(longlong *)(param_2 + 0x48);
          puVar1 = (undefined8 *)(lVar8 + lVar7);
          *puVar1 = 0x7b020300200201;
          puVar1[1] = 0x7d0004007a72030d;
          *(undefined1 *)(lVar8 + 0x10 + lVar7) = 0;
          lVar7 = lVar7 + 0xf;
          goto LAB_1804478ac;
        }
        ppuVar11 = &PTR_s__rz__1807531f0;
      }
    }
    else {
      if (iVar2 == 0) {
        return 0x100000;
      }
      if (iVar2 == 1) {
        if (*param_2 != '\0') {
          lVar7 = *(longlong *)(param_2 + 0x28);
          if (*(ulonglong *)(param_2 + 8) <= lVar7 + 0x15U) {
            return 0x80100009;
          }
          *(char *)(*(longlong *)(param_2 + 0x48) + -1) = (char)lVar7;
          lVar8 = *(longlong *)(param_2 + 0x48);
          *(undefined8 *)(lVar8 + lVar7) = 0x7b020300200201;
          ((undefined8 *)(lVar8 + lVar7))[1] = 0x6561732d6e72070d;
          *(undefined4 *)(lVar8 + 0x10 + lVar7) = 0x7d000400;
          *(undefined1 *)(lVar8 + 0x14 + lVar7) = 0;
          lVar7 = lVar7 + 0x13;
          goto LAB_1804478ac;
        }
        ppuVar11 = &PTR_s__rn_sae__180742f50;
      }
      else if (iVar2 == 2) {
        if (*param_2 != '\0') {
          lVar7 = *(longlong *)(param_2 + 0x28);
          if (*(ulonglong *)(param_2 + 8) <= lVar7 + 0x15U) {
            return 0x80100009;
          }
          *(char *)(*(longlong *)(param_2 + 0x48) + -1) = (char)lVar7;
          lVar8 = *(longlong *)(param_2 + 0x48);
          *(undefined8 *)(lVar8 + lVar7) = 0x7b020300200201;
          ((undefined8 *)(lVar8 + lVar7))[1] = 0x6561732d6472070d;
          *(undefined4 *)(lVar8 + 0x10 + lVar7) = 0x7d000400;
          *(undefined1 *)(lVar8 + 0x14 + lVar7) = 0;
          lVar7 = lVar7 + 0x13;
          goto LAB_1804478ac;
        }
        ppuVar11 = &PTR_s__rd_sae__180753110;
      }
      else if (iVar2 == 3) {
        if (*param_2 != '\0') {
          lVar7 = *(longlong *)(param_2 + 0x28);
          if (*(ulonglong *)(param_2 + 8) <= lVar7 + 0x15U) {
            return 0x80100009;
          }
          *(char *)(*(longlong *)(param_2 + 0x48) + -1) = (char)lVar7;
          lVar8 = *(longlong *)(param_2 + 0x48);
          *(undefined8 *)(lVar8 + lVar7) = 0x7b020300200201;
          ((undefined8 *)(lVar8 + lVar7))[1] = 0x6561732d7572070d;
          *(undefined4 *)(lVar8 + 0x10 + lVar7) = 0x7d000400;
          *(undefined1 *)(lVar8 + 0x14 + lVar7) = 0;
          lVar7 = lVar7 + 0x13;
          goto LAB_1804478ac;
        }
        ppuVar11 = &PTR_s__ru_sae__18077d810;
      }
      else {
        if (iVar2 != 4) {
          return 0x80100004;
        }
        if (*param_2 != '\0') {
          lVar7 = *(longlong *)(param_2 + 0x28);
          if (*(ulonglong *)(param_2 + 8) <= lVar7 + 0x15U) {
            return 0x80100009;
          }
          *(char *)(*(longlong *)(param_2 + 0x48) + -1) = (char)lVar7;
          lVar8 = *(longlong *)(param_2 + 0x48);
          *(undefined8 *)(lVar8 + lVar7) = 0x7b020300200201;
          ((undefined8 *)(lVar8 + lVar7))[1] = 0x6561732d7a72070d;
          *(undefined4 *)(lVar8 + 0x10 + lVar7) = 0x7d000400;
          *(undefined1 *)(lVar8 + 0x14 + lVar7) = 0;
          lVar7 = lVar7 + 0x13;
          goto LAB_1804478ac;
        }
        ppuVar11 = &PTR_s__rz_sae__180753230;
      }
    }
    break;
  case 4:
    if (*(char *)(*param_3 + 0x58) == '\0') {
      return 0x100000;
    }
    if (*(int *)(*param_3 + 0x4c) != 0) {
      return 0x100000;
    }
    if (*param_2 != '\0') {
      lVar7 = *(longlong *)(param_2 + 0x28);
      if (*(ulonglong *)(param_2 + 8) <= lVar7 + 0x12U) {
        return 0x80100009;
      }
      *(char *)(*(longlong *)(param_2 + 0x48) + -1) = (char)lVar7;
      lVar8 = *(longlong *)(param_2 + 0x48);
      puVar1 = (undefined8 *)(lVar8 + lVar7);
      *puVar1 = 0x7b020300200201;
      puVar1[1] = 0x400656173040d;
      *(undefined2 *)(lVar8 + 0x10 + lVar7) = 0x7d;
      lVar7 = lVar7 + 0x10;
      goto LAB_1804478ac;
    }
    ppuVar11 = &PTR_s__sae__18076b4e8;
    break;
  case 5:
    switch(*(undefined4 *)(*param_3 + 0x50)) {
    case 0:
    case 1:
      goto LAB_180448123;
    case 2:
      if (*param_2 != '\0') {
        lVar7 = *(longlong *)(param_2 + 0x28);
        if (*(ulonglong *)(param_2 + 8) <= lVar7 + 0x13U) {
          return 0x80100009;
        }
        *(char *)(*(longlong *)(param_2 + 0x48) + -1) = (char)lVar7;
        lVar8 = *(longlong *)(param_2 + 0x48);
        *(undefined8 *)(lVar8 + lVar7) = 0x7b020300200201;
        ((undefined8 *)(lVar8 + lVar7))[1] = 0x40062616463050d;
        *(undefined2 *)(lVar8 + 0x10 + lVar7) = 32000;
        *(undefined1 *)(lVar8 + 0x12 + lVar7) = 0;
        lVar7 = lVar7 + 0x11;
        goto LAB_1804478ac;
      }
      ppuVar11 = &PTR_s__cdab__1807531c0;
      break;
    case 3:
      if (*param_2 != '\0') {
        lVar7 = *(longlong *)(param_2 + 0x28);
        if (*(ulonglong *)(param_2 + 8) <= lVar7 + 0x13U) {
          return 0x80100009;
        }
        *(char *)(*(longlong *)(param_2 + 0x48) + -1) = (char)lVar7;
        lVar8 = *(longlong *)(param_2 + 0x48);
        *(undefined8 *)(lVar8 + lVar7) = 0x7b020300200201;
        ((undefined8 *)(lVar8 + lVar7))[1] = 0x40063646162050d;
        *(undefined2 *)(lVar8 + 0x10 + lVar7) = 32000;
        *(undefined1 *)(lVar8 + 0x12 + lVar7) = 0;
        lVar7 = lVar7 + 0x11;
        goto LAB_1804478ac;
      }
      ppuVar11 = &PTR_s__badc__180753370;
      break;
    case 4:
      if (*param_2 != '\0') {
        lVar7 = *(longlong *)(param_2 + 0x28);
        if (*(ulonglong *)(param_2 + 8) <= lVar7 + 0x13U) {
          return 0x80100009;
        }
        *(char *)(*(longlong *)(param_2 + 0x48) + -1) = (char)lVar7;
        lVar8 = *(longlong *)(param_2 + 0x48);
        *(undefined8 *)(lVar8 + lVar7) = 0x7b020300200201;
        ((undefined8 *)(lVar8 + lVar7))[1] = 0x40062636164050d;
        *(undefined2 *)(lVar8 + 0x10 + lVar7) = 32000;
        *(undefined1 *)(lVar8 + 0x12 + lVar7) = 0;
        lVar7 = lVar7 + 0x11;
        goto LAB_1804478ac;
      }
      ppuVar11 = &PTR_s__dacb__180769f40;
      break;
    case 5:
      if (*param_2 != '\0') {
        lVar7 = *(longlong *)(param_2 + 0x28);
        if (*(ulonglong *)(param_2 + 8) <= lVar7 + 0x13U) {
          return 0x80100009;
        }
        *(char *)(*(longlong *)(param_2 + 0x48) + -1) = (char)lVar7;
        lVar8 = *(longlong *)(param_2 + 0x48);
        *(undefined8 *)(lVar8 + lVar7) = 0x7b020300200201;
        ((undefined8 *)(lVar8 + lVar7))[1] = 0x40061616161050d;
        *(undefined2 *)(lVar8 + 0x10 + lVar7) = 32000;
        *(undefined1 *)(lVar8 + 0x12 + lVar7) = 0;
        lVar7 = lVar7 + 0x11;
        goto LAB_1804478ac;
      }
      ppuVar11 = &PTR_s__aaaa__180769f30;
      break;
    case 6:
      if (*param_2 != '\0') {
        lVar7 = *(longlong *)(param_2 + 0x28);
        if (*(ulonglong *)(param_2 + 8) <= lVar7 + 0x13U) {
          return 0x80100009;
        }
        *(char *)(*(longlong *)(param_2 + 0x48) + -1) = (char)lVar7;
        lVar8 = *(longlong *)(param_2 + 0x48);
        *(undefined8 *)(lVar8 + lVar7) = 0x7b020300200201;
        ((undefined8 *)(lVar8 + lVar7))[1] = 0x40062626262050d;
        *(undefined2 *)(lVar8 + 0x10 + lVar7) = 32000;
        *(undefined1 *)(lVar8 + 0x12 + lVar7) = 0;
        lVar7 = lVar7 + 0x11;
        goto LAB_1804478ac;
      }
      ppuVar11 = &PTR_s__bbbb__18077d858;
      break;
    case 7:
      if (*param_2 != '\0') {
        lVar7 = *(longlong *)(param_2 + 0x28);
        if (*(ulonglong *)(param_2 + 8) <= lVar7 + 0x13U) {
          return 0x80100009;
        }
        *(char *)(*(longlong *)(param_2 + 0x48) + -1) = (char)lVar7;
        lVar8 = *(longlong *)(param_2 + 0x48);
        *(undefined8 *)(lVar8 + lVar7) = 0x7b020300200201;
        ((undefined8 *)(lVar8 + lVar7))[1] = 0x40063636363050d;
        *(undefined2 *)(lVar8 + 0x10 + lVar7) = 32000;
        *(undefined1 *)(lVar8 + 0x12 + lVar7) = 0;
        lVar7 = lVar7 + 0x11;
        goto LAB_1804478ac;
      }
      ppuVar11 = &PTR_s__cccc__18072c8b8;
      break;
    case 8:
      if (*param_2 != '\0') {
        lVar7 = *(longlong *)(param_2 + 0x28);
        if (*(ulonglong *)(param_2 + 8) <= lVar7 + 0x13U) {
          return 0x80100009;
        }
        *(char *)(*(longlong *)(param_2 + 0x48) + -1) = (char)lVar7;
        lVar8 = *(longlong *)(param_2 + 0x48);
        *(undefined8 *)(lVar8 + lVar7) = 0x7b020300200201;
        ((undefined8 *)(lVar8 + lVar7))[1] = 0x40064646464050d;
        *(undefined2 *)(lVar8 + 0x10 + lVar7) = 32000;
        *(undefined1 *)(lVar8 + 0x12 + lVar7) = 0;
        lVar7 = lVar7 + 0x11;
        goto LAB_1804478ac;
      }
      ppuVar11 = &PTR_s__dddd__18076b050;
      break;
    default:
      goto LAB_180448123;
    }
    break;
  case 6:
    switch(*(undefined4 *)(*param_3 + 0x54)) {
    case 0:
      goto LAB_180448123;
    case 1:
      if (*param_2 != '\0') {
        lVar7 = *(longlong *)(param_2 + 0x28);
        if (*(ulonglong *)(param_2 + 8) <= lVar7 + 0x16U) {
          return 0x80100009;
        }
        *(char *)(*(longlong *)(param_2 + 0x48) + -1) = (char)lVar7;
        lVar8 = *(longlong *)(param_2 + 0x48);
        *(undefined8 *)(lVar8 + lVar7) = 0x7b020300200201;
        ((undefined8 *)(lVar8 + lVar7))[1] = 0x3174616f6c66080d;
        *(undefined4 *)(lVar8 + 0x10 + lVar7) = 0x40036;
        *(undefined2 *)(lVar8 + 0x14 + lVar7) = 0x7d;
        lVar7 = lVar7 + 0x14;
        goto LAB_1804478ac;
      }
      ppuVar11 = &PTR_s__float16__18076afe8;
      break;
    case 2:
      if (*param_2 != '\0') {
        lVar7 = *(longlong *)(param_2 + 0x28);
        if (*(ulonglong *)(param_2 + 8) <= lVar7 + 0x14U) {
          return 0x80100009;
        }
        *(char *)(*(longlong *)(param_2 + 0x48) + -1) = (char)lVar7;
        lVar8 = *(longlong *)(param_2 + 0x48);
        *(undefined8 *)(lVar8 + lVar7) = 0x7b020300200201;
        ((undefined8 *)(lVar8 + lVar7))[1] = 0x38746e6973060d;
        goto LAB_1804478a4;
      }
      ppuVar11 = &PTR_s__sint8__1807747b8;
      break;
    case 3:
      if (*param_2 != '\0') {
        lVar7 = *(longlong *)(param_2 + 0x28);
        if (*(ulonglong *)(param_2 + 8) <= lVar7 + 0x14U) {
          return 0x80100009;
        }
        *(char *)(*(longlong *)(param_2 + 0x48) + -1) = (char)lVar7;
        lVar8 = *(longlong *)(param_2 + 0x48);
        *(undefined8 *)(lVar8 + lVar7) = 0x7b020300200201;
        ((undefined8 *)(lVar8 + lVar7))[1] = 0x38746e6975060d;
        goto LAB_1804478a4;
      }
      ppuVar11 = &PTR_s__uint8__180741a38;
      break;
    case 4:
      if (*param_2 != '\0') {
        lVar7 = *(longlong *)(param_2 + 0x28);
        if (*(ulonglong *)(param_2 + 8) <= lVar7 + 0x15U) {
          return 0x80100009;
        }
        *(char *)(*(longlong *)(param_2 + 0x48) + -1) = (char)lVar7;
        lVar8 = *(longlong *)(param_2 + 0x48);
        *(undefined8 *)(lVar8 + lVar7) = 0x7b020300200201;
        ((undefined8 *)(lVar8 + lVar7))[1] = 0x3631746e6973070d;
        *(undefined4 *)(lVar8 + 0x10 + lVar7) = 0x7d000400;
        *(undefined1 *)(lVar8 + 0x14 + lVar7) = 0;
        lVar7 = lVar7 + 0x13;
        goto LAB_1804478ac;
      }
      ppuVar11 = &PTR_s__sint16__180753220;
      break;
    case 5:
      if (*param_2 != '\0') {
        lVar7 = *(longlong *)(param_2 + 0x28);
        if (*(ulonglong *)(param_2 + 8) <= lVar7 + 0x15U) {
          return 0x80100009;
        }
        *(char *)(*(longlong *)(param_2 + 0x48) + -1) = (char)lVar7;
        lVar8 = *(longlong *)(param_2 + 0x48);
        *(undefined8 *)(lVar8 + lVar7) = 0x7b020300200201;
        ((undefined8 *)(lVar8 + lVar7))[1] = 0x3631746e6975070d;
        *(undefined4 *)(lVar8 + 0x10 + lVar7) = 0x7d000400;
        *(undefined1 *)(lVar8 + 0x14 + lVar7) = 0;
        lVar7 = lVar7 + 0x13;
        goto LAB_1804478ac;
      }
      ppuVar11 = &PTR_s__uint16__18072e348;
      break;
    default:
      goto LAB_180448123;
    }
    break;
  case 7:
    if (*(char *)(*param_3 + 0x59) != '\0') {
      if (*param_2 != '\0') {
        lVar7 = *(longlong *)(param_2 + 0x28);
        if (*(ulonglong *)(param_2 + 8) <= lVar7 + 0x11U) {
          return 0x80100009;
        }
        *(char *)(*(longlong *)(param_2 + 0x48) + -1) = (char)lVar7;
        lVar8 = *(longlong *)(param_2 + 0x48);
        puVar1 = (undefined8 *)(lVar8 + lVar7);
        *puVar1 = 0x7b020300200201;
        puVar1[1] = 0x7d0004006865030d;
        *(undefined1 *)(lVar8 + 0x10 + lVar7) = 0;
        lVar7 = lVar7 + 0xf;
        goto LAB_1804478ac;
      }
      uVar5 = FUN_180444360(param_2 + 0x10,&PTR_s__eh__1807747f0,*(undefined4 *)(param_1 + 0x44));
      if ((int)uVar5 < 0) {
        return uVar5;
      }
    }
LAB_180448123:
    return 0x100000;
  default:
LAB_180448123:
    return 0x80100004;
  }
  pcVar4 = param_2 + 0x10;
LAB_180448099:
  uVar3 = FUN_180444360(pcVar4,ppuVar11,*(undefined4 *)(param_1 + 0x44));
  uVar6 = 0x100000;
  if ((int)uVar3 < 0) {
    uVar6 = uVar3;
  }
  return (ulonglong)uVar6;
}



