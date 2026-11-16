// FUN_180165e50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180165e50 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_180165e50(undefined1 (*param_1) [16],longlong *param_2,ushort *******param_3)

{
  ushort uVar1;
  ushort *******pppppppuVar2;
  ulonglong uVar3;
  longlong lVar4;
  ushort *******pppppppuVar5;
  ushort *puVar6;
  ushort *******pppppppuVar7;
  longlong lVar8;
  ushort *******pppppppuVar9;
  ushort *puVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined1 auStack_1b8 [32];
  ushort *******local_198;
  ushort *local_188;
  ulonglong uStack_180;
  char local_168 [256];
  ushort *******local_68 [2];
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_1b8;
  local_188 = (ushort *)*param_2;
  uStack_180 = param_2[1];
  local_198 = param_3;
  FUN_180165be0(local_68,&local_188);
  pppppppuVar2 = (ushort *******)local_68;
  if (7 < local_50) {
    pppppppuVar2 = local_68[0];
  }
  pppppppuVar7 = (ushort *******)((longlong)pppppppuVar2 + local_58 * 2);
  if (pppppppuVar2 != pppppppuVar7) {
    while (uVar1 = *(ushort *)pppppppuVar2, uVar1 != 0xfffd) {
      if (((0x5e < (ushort)(uVar1 - 0x20)) && (uVar1 < 0xa0)) ||
         (pppppppuVar2 = (ushort *******)((longlong)pppppppuVar2 + 2), pppppppuVar2 == pppppppuVar7)
         ) break;
    }
    if ((pppppppuVar2 != pppppppuVar7) &&
       (pppppppuVar5 = (ushort *******)((longlong)pppppppuVar2 + 2), pppppppuVar5 != pppppppuVar7))
    {
      do {
        uVar1 = *(ushort *)pppppppuVar5;
        if ((uVar1 != 0xfffd) && (((ushort)(uVar1 - 0x20) < 0x5f || (0x9f < uVar1)))) {
          *(ushort *)pppppppuVar2 = uVar1;
          pppppppuVar2 = (ushort *******)((longlong)pppppppuVar2 + 2);
        }
        pppppppuVar5 = (ushort *******)((longlong)pppppppuVar5 + 2);
      } while (pppppppuVar5 != pppppppuVar7);
    }
  }
  pppppppuVar5 = (ushort *******)local_68;
  if (7 < local_50) {
    pppppppuVar5 = local_68[0];
  }
  lVar8 = (longlong)pppppppuVar2 - (longlong)pppppppuVar5 >> 1;
  uVar3 = (longlong)pppppppuVar7 - (longlong)pppppppuVar2 >> 1;
  if (local_58 - lVar8 < uVar3) {
    uVar3 = local_58 - lVar8;
  }
  pppppppuVar2 = (ushort *******)local_68;
  if (7 < local_50) {
    pppppppuVar2 = local_68[0];
  }
  puVar6 = (ushort *)((longlong)pppppppuVar2 + lVar8 * 2);
  uVar11 = local_58 - uVar3;
  FUN_18063aed0(puVar6,puVar6 + uVar3,(uVar11 - lVar8) * 2 + 2);
  pppppppuVar2 = local_68[0];
  pppppppuVar7 = (ushort *******)local_68;
  if (7 < local_50) {
    pppppppuVar7 = local_68[0];
  }
  local_58 = uVar11;
  if (uVar11 != 0) {
    pppppppuVar5 = (ushort *******)((longlong)pppppppuVar7 + uVar11 * 2);
    uVar12 = FUN_18063ab10(local_168,0,0x100);
    puVar10 = &DAT_180700940;
    puVar6 = &DAT_180700940;
    do {
      pppppppuVar9 = pppppppuVar7;
      if (0xff < *puVar6) goto joined_r0x000180166083;
      local_168[(byte)*puVar6] = '\x01';
      puVar6 = puVar6 + 1;
    } while (puVar6 != (ushort *)&DAT_18070094a);
    for (; pppppppuVar9 < pppppppuVar5; pppppppuVar9 = (ushort *******)((longlong)pppppppuVar9 + 2))
    {
      local_68[0] = pppppppuVar2;
      if ((0xff < *(ushort *)pppppppuVar9) || (local_168[*(ushort *)pppppppuVar9] == '\0'))
      goto LAB_1801660bf;
    }
  }
LAB_180166021:
  *param_1 = (undefined1  [16])0x0;
  *(undefined8 *)param_1[1] = 0;
  *(undefined8 *)(param_1[1] + 8) = 0;
  FUN_18015ba30(param_1,*local_198,local_198[1]);
LAB_18016604a:
  FUN_18015b930(local_68);
joined_r0x000180166083:
  if (pppppppuVar5 <= pppppppuVar9) goto LAB_180166021;
  lVar8 = FUN_18017c020(uVar12,*(ushort *)pppppppuVar9,5);
  if (lVar8 == 0) {
    uVar11 = local_58;
    goto LAB_1801660bf;
  }
  pppppppuVar9 = (ushort *******)((longlong)pppppppuVar9 + 2);
  uVar12 = extraout_XMM0_Qa;
  goto joined_r0x000180166083;
LAB_1801660bf:
  uVar3 = (longlong)pppppppuVar9 - (longlong)pppppppuVar7 >> 1;
  if (uVar3 != 0xffffffffffffffff) {
    pppppppuVar2 = (ushort *******)local_68;
    if (7 < local_50) {
      pppppppuVar2 = local_68[0];
    }
    lVar8 = -1;
    local_198 = pppppppuVar2;
    if (uVar11 != 0) {
      lVar4 = -1;
      if (uVar11 - 1 != -1) {
        lVar4 = uVar11 - 1;
      }
      uVar12 = FUN_18063ab10(local_168,0,0x100);
      do {
        if (0xff < *puVar10) {
          pppppppuVar7 = (ushort *******)((longlong)pppppppuVar2 + lVar4 * 2);
          goto LAB_180166170;
        }
        local_168[(byte)*puVar10] = '\x01';
        puVar10 = puVar10 + 1;
      } while (puVar10 != (ushort *)&DAT_18070094a);
      pppppppuVar7 = (ushort *******)((longlong)pppppppuVar2 + lVar4 * 2);
      while ((*(ushort *)pppppppuVar7 < 0x100 && (local_168[*(ushort *)pppppppuVar7] != '\0'))) {
        if (pppppppuVar7 == pppppppuVar2) goto LAB_18016619c;
        pppppppuVar7 = (ushort *******)((longlong)pppppppuVar7 + -2);
      }
LAB_180166191:
      lVar8 = (longlong)pppppppuVar7 - (longlong)pppppppuVar2 >> 1;
    }
LAB_18016619c:
    if (uVar11 < uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_18015ac40();
    }
    uStack_180 = (lVar8 - uVar3) + 1;
    local_188 = (ushort *)((longlong)local_198 + uVar3 * 2);
    if (uVar11 - uVar3 < uStack_180) {
      uStack_180 = uVar11 - uVar3;
    }
    FUN_180165d20(param_1,&local_188);
    goto LAB_18016604a;
  }
  goto LAB_180166021;
LAB_180166170:
  lVar4 = FUN_18017c020(uVar12,*(ushort *)pppppppuVar7,5);
  if (lVar4 == 0) goto LAB_180166191;
  if (pppppppuVar7 == pppppppuVar2) goto LAB_18016619c;
  pppppppuVar7 = (ushort *******)((longlong)pppppppuVar7 + -2);
  uVar12 = extraout_XMM0_Qa_00;
  goto LAB_180166170;
}



