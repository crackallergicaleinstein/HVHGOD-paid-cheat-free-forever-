// FUN_18036d340 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18036d340 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_18036d340(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  char *******pppppppcVar8;
  undefined8 *******pppppppuVar9;
  char *******pppppppcVar10;
  undefined1 auStack_148 [32];
  longlong local_128;
  undefined1 *local_120;
  undefined8 local_118;
  char local_108;
  char local_107;
  undefined8 *local_f8;
  undefined8 local_f0;
  undefined1 local_e8 [32];
  undefined1 local_c8 [32];
  char *******local_a8 [2];
  longlong local_98;
  ulonglong local_90;
  undefined8 *******local_88 [3];
  ulonglong local_70;
  undefined1 local_68 [16];
  longlong local_58;
  undefined8 *******local_50 [2];
  longlong local_40;
  ulonglong local_38;
  ulonglong local_28;
  
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_148;
  plVar3 = (longlong *)FUN_1801edc30(local_68);
  lVar7 = *plVar3;
  lVar1 = plVar3[1];
  local_58 = plVar3[2];
  if (lVar7 == 0) {
  }
  if (lVar1 == 0) {
  }
  if (local_58 == 0) {
  }
  local_128 = *(longlong *)(param_2 + 0x10);
  if (0x7fffffffffffffffU - local_128 < 2) {
                    /* WARNING: Subroutine does not return */
    FUN_18015bb70();
  }
  local_118 = 2;
  local_120 = &DAT_1807c2514;
  FUN_18015a9c0(local_88);
  if (DAT_180b90248 == lVar7) {
    pppppppuVar9 = local_88;
    if (0xf < local_70) {
      pppppppuVar9 = local_88[0];
    }
    cVar2 = FUN_1804513c0(lVar1,1,2);
    if (cVar2 == '\0') {
      local_107 = '\0';
    }
    else {
      lVar6 = FUN_18017ea70();
      *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
      FUN_1801f3b90(&local_108,lVar1,lVar7,pppppppuVar9);
      lVar6 = FUN_18017ea70();
      if (*(int *)(lVar6 + 4) != 0) {
        *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
      }
    }
    if (local_107 == '\0') {
      local_108 = '\0';
    }
    if (local_108 != '\0') goto LAB_18036d615;
  }
  uVar4 = FUN_18036b840(local_c8);
  puVar5 = (undefined8 *)FUN_18015c130(uVar4,local_e8);
  local_f8 = puVar5;
  if (7 < (ulonglong)puVar5[3]) {
    local_f8 = (undefined8 *)*puVar5;
  }
  local_f0 = puVar5[2];
  FUN_1801a4fb0(local_a8);
  pppppppcVar10 = (char *******)local_a8;
  if (0xf < local_90) {
    pppppppcVar10 = local_a8[0];
  }
  pppppppcVar10 = (char *******)((longlong)pppppppcVar10 + local_98);
  pppppppcVar8 = (char *******)local_a8;
  if (0xf < local_90) {
    pppppppcVar8 = local_a8[0];
  }
  for (; pppppppcVar8 != pppppppcVar10; pppppppcVar8 = (char *******)((longlong)pppppppcVar8 + 1)) {
    if (*(char *)pppppppcVar8 == '\\') {
      *(char *)pppppppcVar8 = '/';
    }
  }
  FUN_18015b930(local_e8);
  FUN_18015b930(local_c8);
  pppppppcVar10 = (char *******)local_a8;
  if (0xf < local_90) {
    pppppppcVar10 = local_a8[0];
  }
  pppppppcVar8 = (char *******)local_a8;
  if (0xf < local_90) {
    pppppppcVar8 = local_a8[0];
  }
  FUN_1802ec710(local_50,pppppppcVar8,(char *)((longlong)pppppppcVar10 + local_98));
  if (local_40 != 0) {
    pppppppuVar9 = local_50;
    if (0xf < local_38) {
      pppppppuVar9 = local_50[0];
    }
    cVar2 = FUN_1804513c0(local_58,1,2);
    if (cVar2 != '\0') {
      lVar6 = FUN_18017ea70();
      *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
      cVar2 = FUN_1801f3b50(local_58,lVar7,pppppppuVar9);
      lVar6 = FUN_18017ea70();
      if (*(int *)(lVar6 + 4) != 0) {
        *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
      }
      if (cVar2 != '\0') {
        pppppppuVar9 = local_88;
        if (0xf < local_70) {
          pppppppuVar9 = local_88[0];
        }
        DAT_180b90248 = lVar7;
        cVar2 = FUN_1804513c0(lVar1,1,2);
        if (cVar2 != '\0') {
          lVar6 = FUN_18017ea70();
          *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
          FUN_1801f3b90(&local_108,lVar1,lVar7,pppppppuVar9);
          lVar7 = FUN_18017ea70();
          if (*(int *)(lVar7 + 4) != 0) {
            *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
          }
        }
      }
    }
  }
  FUN_18015c010(local_50);
  FUN_18015c010(local_a8);
LAB_18036d615:
  FUN_18015c010(local_88);
}



