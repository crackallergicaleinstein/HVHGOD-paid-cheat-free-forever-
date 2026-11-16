// FUN_1800ceae0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800ceae0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800ceae0(longlong param_1,char *param_2)

{
  ulonglong uVar1;
  undefined1 auVar2 [16];
  char cVar3;
  undefined2 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  char *pcVar9;
  longlong *plVar10;
  longlong lVar11;
  int iVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  longlong *plVar17;
  uint uVar18;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined8 local_108;
  ulonglong local_100;
  undefined1 local_f8 [56];
  undefined1 local_c0;
  undefined7 uStack_bf;
  longlong *plStack_b8;
  longlong *plStack_b0;
  ulonglong uStack_a8;
  undefined1 local_a0 [16];
  ulonglong local_90;
  ulonglong local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_138;
  uVar18 = 0;
  local_100 = local_100 & 0xffffffff00000000;
  local_108 = (undefined1 *)((ulonglong)local_108 & 0xffffffff00000000);
  LOCK();
  *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 1;
  UNLOCK();
  *(undefined4 *)(param_1 + 0x10) = 0;
  uStack_bf = 0;
  plStack_b8 = (longlong *)0x0;
  plStack_b0 = (longlong *)0x0;
  uStack_a8 = 0xf;
  local_c0 = 0;
  FUN_1800ce320(0,0,&local_c0);
  *(undefined8 *)(param_1 + 0x60) = 0;
  if (*param_2 != '\x01') {
  }
  local_c0 = 0;
  uStack_bf = 0;
  plStack_b8 = (longlong *)0x0;
  plStack_b0 = (longlong *)0x0;
  uStack_a8 = 0;
  FUN_1800e6b50(param_2,&local_c0,&DAT_1806be004);
  uVar7 = FUN_1800f3e20(param_2,&local_80);
  cVar3 = FUN_1800e6ca0(&local_c0,uVar7);
  if (cVar3 == '\0') {
    switch(*(undefined1 *)CONCAT71(uStack_bf,local_c0)) {
    default:
      if (uStack_a8 != 0) {
        FUN_18015bae0(&local_80,"cannot get value");
        FUN_1800f6e80(local_f8,0xd6,&local_80);
                    /* WARNING: Subroutine does not return */
        FUN_180606630(local_f8,&DAT_1808d0fe8);
      }
      uVar4 = FUN_1800f69b0((undefined1 *)CONCAT71(uStack_bf,local_c0));
      break;
    case 1:
      uVar4 = FUN_1800f69b0((longlong)plStack_b8 + 0x40);
      break;
    case 2:
      uVar4 = FUN_1800f69b0(plStack_b0);
    }
  }
  else {
    uVar4 = 0;
  }
  *(undefined2 *)(param_1 + 0x10) = uVar4;
  if (*param_2 != '\x01') {
    local_108 = (undefined1 *)FUN_180112a50(param_2);
    uVar7 = FUN_1800f6bd0(local_f8,"cannot use value() with ",&local_108);
    FUN_1800f6ca0(&local_80,0x132,uVar7);
                    /* WARNING: Subroutine does not return */
    FUN_180606630(&local_80,&DAT_1808d1050);
  }
  local_c0 = 0;
  uStack_bf = 0;
  plStack_b8 = (longlong *)0x0;
  plStack_b0 = (longlong *)0x0;
  uStack_a8 = 0;
  FUN_1800e6b50(param_2,&local_c0,&DAT_1806bdfcc);
  uVar7 = FUN_1800f3e20(param_2,&local_80);
  cVar3 = FUN_1800e6ca0(&local_c0,uVar7);
  if (cVar3 == '\0') {
    switch(*(undefined1 *)CONCAT71(uStack_bf,local_c0)) {
    default:
      if (uStack_a8 != 0) {
        FUN_18015bae0(&local_80,"cannot get value");
        FUN_1800f6e80(local_f8,0xd6,&local_80);
                    /* WARNING: Subroutine does not return */
        FUN_180606630(local_f8,&DAT_1808d0fe8);
      }
      uVar4 = FUN_1800f69b0((undefined1 *)CONCAT71(uStack_bf,local_c0));
      break;
    case 1:
      uVar4 = FUN_1800f69b0((longlong)plStack_b8 + 0x40);
      break;
    case 2:
      uVar4 = FUN_1800f69b0(plStack_b0);
    }
  }
  else {
    uVar4 = 0;
  }
  *(undefined2 *)(param_1 + 0x12) = uVar4;
  local_c0 = SUB81(param_2,0);
  uStack_bf = (undefined7)((ulonglong)param_2 >> 8);
  uStack_a8 = -0x8000000000000000;
  switch(*param_2) {
  case '\x01':
    break;
  case '\x02':
  }
  plStack_b0 = (longlong *)0x0;
  plStack_b8 = (longlong *)0x0;
  switch(*param_2) {
  default:
    uStack_a8 = 1;
    break;
  case '\x01':
    plStack_b8 = (longlong *)**(longlong **)(param_2 + 8);
    break;
  case '\x02':
    plStack_b0 = *(longlong **)(*(longlong *)(param_2 + 8) + 8);
  }
  if (*param_2 != '\x01') goto LAB_1800cede2;
  plVar10 = (longlong *)**(longlong **)(param_2 + 8);
  plVar13 = (longlong *)plVar10[1];
  plVar17 = plVar10;
  if (*(char *)((longlong)plVar13 + 0x19) == '\0') {
    do {
      uVar1 = plVar13[6];
      plVar8 = plVar13 + 4;
      if (0xf < (ulonglong)plVar13[7]) {
        plVar8 = (longlong *)*plVar8;
      }
      uVar16 = uVar1;
      if (0x14 < uVar1) {
        uVar16 = 0x14;
      }
      iVar5 = memcmp(plVar8,"custom_model_options",uVar16);
      if (iVar5 == 0) {
        if (0x13 < uVar1) {
          if (0x14 < uVar1) goto LAB_1800ced6d;
          cVar3 = '\0';
          goto LAB_1800ced73;
        }
        cVar3 = -1;
      }
      else if (iVar5 < 0) {
        cVar3 = -1;
      }
      else {
LAB_1800ced6d:
        cVar3 = '\x01';
LAB_1800ced73:
        plVar17 = plVar13;
      }
      plVar8 = plVar13 + 2;
      if (-1 < cVar3) {
        plVar8 = plVar13;
      }
      plVar13 = (longlong *)*plVar8;
    } while (*(char *)((longlong)plVar13 + 0x19) == '\0');
    uVar18 = (uint)local_100;
  }
  if (*(char *)((longlong)plVar17 + 0x19) == '\0') {
    plVar13 = plVar17 + 4;
    uVar1 = plVar17[6];
    if (0xf < (ulonglong)plVar17[7]) {
      plVar13 = (longlong *)*plVar13;
    }
    uVar16 = uVar1;
    if (0x14 < uVar1) {
      uVar16 = 0x14;
    }
    iVar5 = memcmp(plVar13,"custom_model_options",uVar16);
    if (iVar5 == 0) {
      if (0x14 < uVar1) goto LAB_1800cedd1;
    }
    else if (-1 < iVar5) goto LAB_1800cedd1;
  }
  else {
LAB_1800cedd1:
    plVar17 = plVar10;
  }
  plStack_b8 = plVar17;
LAB_1800cede2:
  uVar7 = FUN_1800f3e20(param_2,&local_80);
  cVar3 = FUN_1800e6ca0(&local_c0,uVar7);
  if (cVar3 == '\0') {
    switch((char)*(longlong *)CONCAT71(uStack_bf,local_c0)) {
    default:
      plVar10 = (longlong *)CONCAT71(uStack_bf,local_c0);
      if (uStack_a8 != 0) {
        FUN_18015bae0(&local_80,"cannot get value");
        FUN_1800f6e80(local_f8,0xd6,&local_80);
                    /* WARNING: Subroutine does not return */
        FUN_180606630(local_f8,&DAT_1808d0fe8);
      }
      break;
    case '\x01':
      plVar10 = plStack_b8 + 8;
      break;
    case '\x02':
      plVar10 = plStack_b0;
    }
    if ((char)*plVar10 == '\x01') {
      local_108 = &local_c0;
      uVar6 = FUN_1800cf3d0(&local_108,"cloth_motion");
      *(undefined4 *)(param_1 + 0x60) = uVar6;
      uVar6 = FUN_1800cf3d0(&local_108,"hands_mode");
      *(undefined4 *)(param_1 + 100) = uVar6;
    }
  }
  local_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  FUN_1800e6b50(param_2,&local_80,"custom_agents");
  uVar7 = FUN_1800f3e20(param_2,&local_c0);
  cVar3 = FUN_1800e6ca0(&local_80,uVar7);
  if ((cVar3 == '\0') && (pcVar9 = (char *)FUN_1800f34a0(&local_80), *pcVar9 == '\x01')) {
    iVar5 = 2;
    do {
      local_c0 = 0;
      uStack_bf = 0;
      plStack_b8 = (longlong *)0x0;
      plStack_b0 = (longlong *)0x0;
      uStack_a8 = 0;
      uVar7 = FUN_1800f34a0(&local_80);
      local_108 = &DAT_1806be004;
      if (iVar5 == 2) {
        local_108 = &DAT_1806bdfcc;
      }
      FUN_1800ea030(uVar7,&local_c0,&local_108);
      uVar7 = FUN_1800f34a0(&local_80);
      uVar7 = FUN_1800f3e20(uVar7,local_f8);
      cVar3 = FUN_1800e6ca0(&local_c0,uVar7);
      if ((cVar3 == '\0') && (pcVar9 = (char *)FUN_1800f34a0(&local_c0), *pcVar9 == '\x03')) {
        pcVar9 = (char *)FUN_1800f34a0(&local_c0);
        local_90 = 0;
        local_88 = 0xf;
        local_a0._1_15_ = SUB1615((undefined1  [16])0x0,1);
        auVar2[0xf] = 0;
        auVar2._0_15_ = local_a0._1_15_;
        local_a0 = auVar2 << 8;
        local_108 = (undefined1 *)(CONCAT44(local_108._4_4_,uVar18) | 2);
        if (*pcVar9 != '\x03') {
          local_100 = FUN_180112a50(pcVar9);
          uVar7 = FUN_1800f6bd0(local_f8,"type must be string, but is ",&local_100);
          FUN_1800f6ca0(&local_80,0x12e,uVar7);
                    /* WARNING: Subroutine does not return */
          FUN_180606630(&local_80,&DAT_1808d1050);
        }
        plVar10 = *(longlong **)(pcVar9 + 8);
        if ((longlong *)local_a0 != plVar10) {
          plVar13 = plVar10 + 2;
          if (0xf < (ulonglong)plVar10[3]) {
            plVar10 = (longlong *)*plVar10;
          }
          FUN_180113930(local_a0,plVar10,*plVar13);
        }
        uVar18 = uVar18 & 0xfffffffd | 1;
        if (local_90 < 0x201) {
          plVar10 = (longlong *)local_a0;
          if (0xf < local_88) {
            plVar10 = (longlong *)local_a0._0_8_;
          }
          if (10 < local_90) {
            lVar14 = *plVar10 + -0x6574636172616863;
            if ((lVar14 == 0) &&
               (lVar14 = (ulonglong)*(ushort *)(plVar10 + 1) - 0x7372, lVar14 == 0)) {
              lVar14 = (ulonglong)*(byte *)((longlong)plVar10 + 10) - 0x2f;
            }
            if (lVar14 == 0) {
              plVar10 = (longlong *)local_a0;
              if (0xf < local_88) {
                plVar10 = (longlong *)local_a0._0_8_;
              }
              if (6 < local_90) {
                iVar12 = *(int *)((longlong)plVar10 + (local_90 - 7)) + -0x646d762e;
                if ((iVar12 == 0) &&
                   (iVar12 = *(ushort *)((longlong)plVar10 + (local_90 - 3)) - 0x5f6c, iVar12 == 0))
                {
                  iVar12 = *(byte *)((longlong)plVar10 + (local_90 - 1)) - 99;
                }
                if (iVar12 == 0) {
                  plVar10 = (longlong *)local_a0;
                  if (0xf < local_88) {
                    plVar10 = (longlong *)local_a0._0_8_;
                  }
                  if (1 < local_90) {
                    lVar14 = local_90 + (longlong)plVar10;
                    lVar11 = thunk_FUN_1805f9970(plVar10,lVar14,&DAT_1806be0f8,2);
                    if ((lVar11 != lVar14) && (lVar11 - (longlong)plVar10 != -1))
                    goto LAB_1800cf188;
                  }
                  plVar10 = (longlong *)local_a0;
                  if (0xf < local_88) {
                    plVar10 = (longlong *)local_a0._0_8_;
                  }
                  local_118 = 5;
                  lVar14 = FUN_18010fae0(plVar10,local_90,local_88,&DAT_1806be0fc);
                  uVar1 = local_90;
                  if (lVar14 == -1) {
                    local_c0 = 0;
                    uStack_bf = 0;
                    plStack_b8 = (longlong *)0x0;
                    plStack_b0 = (longlong *)0x0;
                    uStack_a8 = 0;
                    puVar15 = (undefined8 *)local_a0;
                    if (0xf < local_88) {
                      puVar15 = (undefined8 *)local_a0._0_8_;
                    }
                    if (0x7fffffffffffffff < local_90) {
                    /* WARNING: Subroutine does not return */
                      FUN_18015bb70();
                    }
                    if (local_90 < 0x10) {
                      plStack_b0 = (longlong *)local_90;
                      uStack_a8 = 0xf;
                      plStack_b8 = (longlong *)puVar15[1];
                      local_c0 = (undefined1)*puVar15;
                      uStack_bf = (undefined7)((ulonglong)*puVar15 >> 8);
                    }
                    else {
                      uVar16 = local_90 | 0xf;
                      if (uVar16 < 0x8000000000000000) {
                        if (uVar16 < 0x16) {
                          uVar16 = 0x16;
                        }
                      }
                      else {
                        uVar16 = 0x7fffffffffffffff;
                      }
                      uVar7 = FUN_18015bca0(uVar16 + 1);
                      local_c0 = (undefined1)uVar7;
                      uStack_bf = (undefined7)((ulonglong)uVar7 >> 8);
                      plStack_b0 = (longlong *)uVar1;
                      uStack_a8 = uVar16;
                      FUN_18063aed0(uVar7,puVar15,uVar1 + 1);
                    }
                    FUN_1800ce320(param_1,iVar5,&local_c0);
                  }
                }
              }
            }
          }
        }
LAB_1800cf188:
        FUN_18015c010(local_a0);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 4);
  }
}



