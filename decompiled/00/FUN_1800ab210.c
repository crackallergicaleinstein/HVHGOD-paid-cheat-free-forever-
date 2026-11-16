// FUN_1800ab210 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800ab210 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1800ab210(char *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  char cVar6;
  undefined1 uVar7;
  uint uVar8;
  char *pcVar9;
  ulonglong uVar10;
  char *pcVar11;
  undefined8 uVar12;
  longlong *plVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined1 auStack_8a8 [48];
  undefined8 local_878;
  undefined1 local_870 [16];
  undefined1 local_860 [16];
  longlong local_850;
  undefined1 local_848 [16];
  longlong lStack_838;
  longlong lStack_830;
  undefined1 local_820 [56];
  undefined1 local_7e8 [56];
  undefined1 local_7b0 [56];
  undefined1 local_778 [56];
  undefined1 local_740 [56];
  undefined1 local_708 [56];
  undefined1 local_6d0 [56];
  undefined1 local_698 [56];
  undefined1 local_660 [1592];
  ulonglong local_28;
  
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_8a8;
  uVar14 = 0;
  uVar10 = local_878 >> 0x20;
  local_878 = local_878 & 0xffffffff00000000;
  local_850 = param_2;
  switch(*(undefined1 *)(param_2 + 4)) {
  case 0:
    pcVar11 = *(char **)(param_2 + 8);
    cVar6 = FUN_1800e6540(param_1,&DAT_1806bbee0);
    if (cVar6 != '\0') {
      local_870 = (undefined1  [16])0x0;
      local_860 = (undefined1  [16])0x0;
      FUN_18015ba30(local_870,&DAT_1806bbee0,1);
      pcVar9 = (char *)FUN_180113610(param_1,local_870);
      FUN_18015c010(local_870);
      if (*pcVar9 != '\x04') {
        local_878 = FUN_180112a50(pcVar9);
        uVar12 = FUN_180156f00(local_870);
        FUN_1800f6ca0(local_820,0x12e,uVar12);
                    /* WARNING: Subroutine does not return */
        FUN_180606630(local_820,&DAT_1808d1050);
      }
      *pcVar11 = pcVar9[8];
    }
    cVar6 = FUN_1800e6540(param_1,&DAT_1806bbee4);
    if (cVar6 != '\0') {
      local_870 = (undefined1  [16])0x0;
      local_860 = (undefined1  [16])0x0;
      FUN_18015ba30(local_870,&DAT_1806bbee4,1);
      pcVar9 = (char *)FUN_180113610(param_1,local_870);
      FUN_18015c010(local_870);
      pcVar11[0x10] = '\0';
      if (*pcVar9 == '\0') {
        pcVar11[8] = '\0';
        pcVar11[9] = '\0';
        pcVar11[10] = '\0';
        pcVar11[0xb] = '\0';
        pcVar11[0xc] = '\0';
        pcVar11[0xd] = '\0';
        pcVar11[0xe] = '\0';
        pcVar11[0xf] = '\0';
      }
      else {
        local_878 = local_878 & 0xffffffff00000000;
        uVar16 = FUN_1800e63a0(pcVar9,&DAT_1806bbed8,&local_878);
        *(undefined4 *)(pcVar11 + 8) = uVar16;
        local_878 = local_878 & 0xffffffff00000000;
        uVar16 = FUN_1800e63a0(pcVar9,&DAT_1806bbedc,&local_878);
        *(undefined4 *)(pcVar11 + 0xc) = uVar16;
      }
    }
    if ((*(int *)(pcVar11 + 8) != 0) && (*(int *)(pcVar11 + 0xc) == 0)) {
      pcVar11[0x10] = *pcVar11;
    }
    break;
  case 1:
    if (*param_1 != '\x04') {
      local_878 = FUN_180112a50(param_1);
      uVar12 = FUN_180156f00(local_870);
      FUN_1800f6ca0(local_7e8,0x12e,uVar12);
                    /* WARNING: Subroutine does not return */
      FUN_180606630(local_7e8,&DAT_1808d1050);
    }
    **(char **)(param_2 + 8) = param_1[8];
    break;
  case 2:
    uVar16 = FUN_1800e62a0(param_1);
    **(undefined4 **)(param_2 + 8) = uVar16;
    break;
  case 3:
    uVar7 = FUN_1800e6780(param_1);
    **(undefined1 **)(param_2 + 8) = uVar7;
    break;
  case 4:
    uVar16 = FUN_1800e6880(param_1);
    **(undefined4 **)(param_2 + 8) = uVar16;
    break;
  case 5:
    puVar2 = *(undefined1 **)(param_2 + 8);
    if ((*param_1 == '\x02') && (uVar10 = FUN_1800f3d40(param_1), 3 < uVar10)) {
      uVar7 = FUN_1800e6780(**(undefined8 **)(param_1 + 8));
      *puVar2 = uVar7;
      if (*param_1 != '\x02') {
        local_878 = FUN_180112a50(param_1);
        uVar12 = FUN_18010f410(local_870);
        FUN_1800f6ca0(local_740,0x131,uVar12);
                    /* WARNING: Subroutine does not return */
        FUN_180606630(local_740,&DAT_1808d1050);
      }
      uVar7 = FUN_1800e6780(**(longlong **)(param_1 + 8) + 0x10);
      puVar2[1] = uVar7;
      if (*param_1 != '\x02') {
        local_878 = FUN_180112a50(param_1);
        uVar12 = FUN_18010f410(local_870);
        FUN_1800f6ca0(local_778,0x131,uVar12);
                    /* WARNING: Subroutine does not return */
        FUN_180606630(local_778,&DAT_1808d1050);
      }
      uVar7 = FUN_1800e6780(**(longlong **)(param_1 + 8) + 0x20);
      puVar2[2] = uVar7;
      if (*param_1 != '\x02') {
        local_878 = FUN_180112a50(param_1);
        uVar12 = FUN_18010f410(local_870);
        FUN_1800f6ca0(local_7b0,0x131,uVar12);
                    /* WARNING: Subroutine does not return */
        FUN_180606630(local_7b0,&DAT_1808d1050);
      }
      uVar7 = FUN_1800e6780(**(longlong **)(param_1 + 8) + 0x30);
      puVar2[3] = uVar7;
    }
    break;
  case 6:
    puVar3 = *(undefined4 **)(param_2 + 8);
    if ((*param_1 == '\x02') && (uVar10 = FUN_1800f3d40(param_1), 2 < uVar10)) {
      uVar16 = FUN_1800e6880(**(undefined8 **)(param_1 + 8));
      *puVar3 = uVar16;
      if (*param_1 != '\x02') {
        local_878 = FUN_180112a50(param_1);
        uVar12 = FUN_18010f410(local_870);
        FUN_1800f6ca0(local_6d0,0x131,uVar12);
                    /* WARNING: Subroutine does not return */
        FUN_180606630(local_6d0,&DAT_1808d1050);
      }
      uVar16 = FUN_1800e6880(**(longlong **)(param_1 + 8) + 0x10);
      puVar3[1] = uVar16;
      if (*param_1 != '\x02') {
        local_878 = FUN_180112a50(param_1);
        uVar12 = FUN_18010f410(local_870);
        FUN_1800f6ca0(local_708,0x131,uVar12);
                    /* WARNING: Subroutine does not return */
        FUN_180606630(local_708,&DAT_1808d1050);
      }
      uVar16 = FUN_1800e6880(**(longlong **)(param_1 + 8) + 0x20);
      puVar3[2] = uVar16;
    }
    break;
  case 7:
    lVar15 = *(longlong *)(param_2 + 8);
    if (*param_1 == '\x02') {
      while( true ) {
        uVar8 = FUN_1800f3d40(param_1);
        if (*(uint *)(param_2 + 0x10) < uVar8) {
          uVar8 = *(uint *)(param_2 + 0x10);
        }
        if (uVar8 <= (uint)uVar14) break;
        if (*param_1 != '\x02') {
          local_878 = FUN_180112a50(param_1);
          uVar12 = FUN_18010f410(local_870);
          FUN_1800f6ca0(local_660,0x131,uVar12);
                    /* WARNING: Subroutine does not return */
          FUN_180606630(local_660,&DAT_1808d1050);
        }
        pcVar11 = (char *)(**(longlong **)(param_1 + 8) + uVar14 * 0x10);
        if (*pcVar11 != '\x04') {
          local_878 = FUN_180112a50(pcVar11);
          uVar12 = FUN_180156f00(local_870);
          FUN_1800f6ca0(local_698,0x12e,uVar12);
                    /* WARNING: Subroutine does not return */
          FUN_180606630(local_698,&DAT_1808d1050);
        }
        *(char *)(uVar14 + lVar15) = pcVar11[8];
        uVar14 = (ulonglong)((uint)uVar14 + 1);
      }
    }
    break;
  case 8:
    if (*param_1 == '\x03') {
      lStack_838 = 0;
      lStack_830 = 0xf;
      local_848._1_15_ = SUB1615((undefined1  [16])0x0,1);
      auVar4[0xf] = 0;
      auVar4._0_15_ = local_848._1_15_;
      local_848 = auVar4 << 8;
      local_878 = CONCAT44((int)uVar10,2);
      plVar13 = *(longlong **)(param_1 + 8);
      if ((longlong *)local_848 != plVar13) {
        plVar1 = plVar13 + 2;
        if (0xf < (ulonglong)plVar13[3]) {
          plVar13 = (longlong *)*plVar13;
        }
        FUN_180113930(local_848,plVar13,*plVar1);
      }
      plVar13 = *(longlong **)(param_2 + 8);
      if (plVar13 != (longlong *)local_848) {
        FUN_18015c010(plVar13);
        *plVar13 = local_848._0_8_;
        plVar13[1] = local_848._8_8_;
        plVar13[2] = lStack_838;
        plVar13[3] = lStack_830;
        lStack_838 = 0;
        lStack_830 = 0xf;
        auVar5[0xf] = 0;
        auVar5._0_15_ = local_848._1_15_;
        local_848 = auVar5 << 8;
      }
      FUN_18015c010(local_848);
    }
    break;
  case 9:
    (**(code **)(**(longlong **)(param_2 + 8) + 0x10))(*(longlong **)(param_2 + 8),param_1);
  }
}



