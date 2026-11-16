// FUN_18061fed8 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18061fed8 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18061fed8(short *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,uint *param_6)

{
  short *psVar1;
  short sVar2;
  short sVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  short *psVar9;
  short *psVar10;
  uint *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  char cVar14;
  ulonglong uVar15;
  undefined1 auStackY_2a8 [32];
  uint *local_278;
  short *local_270;
  undefined8 local_268;
  undefined8 local_260;
  longlong local_258;
  char local_250;
  undefined8 local_248;
  uint *local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined1 local_228 [256];
  ushort local_128;
  ushort local_126;
  ushort local_124;
  short local_122;
  short local_120;
  short sStack_11e;
  short local_108 [88];
  ulonglong local_58;
  
  local_58 = DAT_1808d5f00 ^ (ulonglong)auStackY_2a8;
  local_248 = param_5;
  local_240 = param_6;
  if (param_1 == (short *)0x0) {
  }
  local_238 = param_3;
  local_230 = param_2;
  if ((*param_1 == 0x43) && (param_1[1] == 0)) {
    iVar5 = FUN_1806160a0();
    if (iVar5 == 0) {
      *param_6 = 0;
    }
    goto LAB_18062032f;
  }
  lVar8 = FUN_18061f698();
  local_258 = lVar8 + 0x98;
  local_260 = param_5;
  cVar14 = '\0';
  local_250 = '\0';
  local_278 = (uint *)(lVar8 + 0xb8);
  psVar10 = (short *)(lVar8 + 0xbc);
  psVar1 = (short *)(lVar8 + 0x1c2);
  local_270 = psVar10;
  local_268 = param_4;
  iVar5 = FUN_18062f9c0();
  if (iVar5 != 0) goto LAB_18062032f;
  uVar12 = 0xffffffffffffffff;
  uVar15 = 0xffffffffffffffff;
  do {
    uVar13 = uVar15;
    uVar15 = uVar13 + 1;
  } while (param_1[uVar15] != 0);
  if (uVar15 < 0x83) {
    psVar9 = psVar1;
    do {
      sVar2 = *psVar9;
      sVar3 = *(short *)((longlong)psVar9 + ((longlong)param_1 - (longlong)psVar1));
      if (sVar2 != sVar3) break;
      psVar9 = psVar9 + 1;
    } while (sVar3 != 0);
    if (sVar2 != sVar3) {
      lVar8 = (longlong)param_1 - (longlong)psVar10;
      do {
        sVar2 = *psVar10;
        sVar3 = *(short *)((longlong)psVar10 + lVar8);
        if (sVar2 != sVar3) break;
        psVar10 = psVar10 + 1;
      } while (sVar3 != 0);
      if (sVar2 != sVar3) goto LAB_180620054;
    }
    puVar11 = local_278;
LAB_180620308:
    *local_240 = *puVar11;
    iVar5 = FUN_1806160a0();
    if (iVar5 != 0) goto LAB_18062032f;
  }
  else {
LAB_180620054:
    FUN_18063ab10(local_228,0,0x1ca);
    cVar4 = FUN_180621d1c();
    iVar5 = FUN_18061fcb4(local_228,param_1);
    puVar11 = local_278;
    if (iVar5 == 0) {
      if (cVar4 == '\0') {
        iVar5 = FUN_180630e00();
      }
      else {
        iVar5 = FUN_180630394(local_228,local_278,local_228);
      }
      if (iVar5 == 0) goto LAB_1806200f8;
      FUN_18061fc10(psVar1,0x83,local_228);
      do {
        uVar12 = uVar12 + 1;
      } while (local_108[uVar12] != 0);
      cVar14 = '\x01';
      iVar5 = FUN_18062f9c0();
      if (iVar5 != 0) goto LAB_180620344;
LAB_1806202cc:
      if ((*param_1 == 0) || (0x82 < uVar15)) {
        *local_270 = 0;
      }
      else {
        iVar5 = FUN_18062f9c0();
        if (iVar5 != 0) {
LAB_180620344:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      goto LAB_180620308;
    }
LAB_1806200f8:
    iVar5 = FUN_1806219e0(param_1);
    if (iVar5 != 0) {
      local_278 = (uint *)((ulonglong)local_278 & 0xffffffff00000000);
      iVar5 = FUN_1806218d4(param_1,0x20001004,&local_278,2);
      if ((iVar5 == 0) || (uVar6 = (uint)local_278, (uint)local_278 == 0)) {
        uVar6 = 0xfde9;
      }
      *puVar11 = uVar6 & 0xffff;
      iVar5 = FUN_18062f9c0();
      if (iVar5 != 0) goto LAB_180620344;
      psVar10 = param_1;
LAB_1806202bd:
      FUN_18061fad8(&local_268,psVar10,uVar13 + 2);
      cVar14 = local_250;
      goto LAB_1806202cc;
    }
    cVar4 = FUN_180620c54(local_228,param_1);
    if ((cVar4 != '\0') && (iVar5 = FUN_1806219e0(local_108), iVar5 != 0)) {
      if (local_128 == 0) {
        local_278 = (uint *)((ulonglong)local_278 & 0xffffffff00000000);
        iVar5 = FUN_1806218d4(local_108,0x20001004,&local_278,2);
        if ((iVar5 == 0) || (uVar6 = (uint)local_278, (uint)local_278 == 0)) goto LAB_180620276;
      }
      else {
        uVar7 = (uint)local_128;
        uVar6 = uVar7 + 0x20;
        if (0x19 < uVar7 - 0x41) {
          uVar6 = uVar7;
        }
        if (uVar6 == 0x75) {
          uVar6 = local_126 + 0x20;
          if (0x19 < local_126 - 0x41) {
            uVar6 = (uint)local_126;
          }
          if (uVar6 == 0x74) {
            uVar6 = local_124 + 0x20;
            if (0x19 < local_124 - 0x41) {
              uVar6 = (uint)local_124;
            }
            if (((uVar6 == 0x66) && (local_122 == 0x38)) && (local_120 == 0)) goto LAB_180620276;
          }
        }
        if (((local_122 != 0x2d) || (local_120 != 0x38)) || (sStack_11e != 0)) goto LAB_180620214;
LAB_180620276:
        uVar6 = 0xfde9;
      }
      *puVar11 = uVar6 & 0xffff;
      iVar5 = FUN_18062f9c0();
      if (iVar5 != 0) goto LAB_180620344;
      do {
        uVar13 = uVar12;
        uVar12 = uVar13 + 1;
      } while (local_108[uVar13 + 1] != 0);
      psVar10 = local_108;
      goto LAB_1806202bd;
    }
  }
LAB_180620214:
  if ((cVar14 != '\0') || (iVar5 = FUN_18062f9c0(), iVar5 == 0)) {
  }
LAB_18062032f:
                    /* WARNING: Subroutine does not return */
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}



