// FUN_1803c85c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803c85c0 */

undefined1
FUN_1803c85c0(longlong param_1,longlong param_2,longlong param_3,int param_4,int param_5,
             char param_6)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  byte local_68 [8];
  longlong local_60;
  longlong lStack_58;
  undefined8 uStack_50;
  byte bStack_48;
  uint7 uStack_47;
  int local_40;
  longlong local_38;
  longlong local_30;
  
  local_40 = param_4;
  local_38 = param_3;
  local_30 = param_1;
  iVar4 = FUN_1805f68d0();
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (*(int *)(param_1 + 0x4c) == 0x7fffffff) {
    *(undefined4 *)(param_1 + 0x4c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  plVar9 = (longlong *)0x0;
  plVar10 = (longlong *)0x0;
  for (plVar5 = (longlong *)(param_1 + 0x50); plVar5 != (longlong *)(param_1 + 0x250);
      plVar5 = plVar5 + 4) {
    if (((*plVar5 == param_2) && ((int)plVar5[2] == param_4)) && (plVar5[1] == param_3)) {
      if (*(int *)((longlong)plVar5 + 0x14) == param_5) {
        plVar9 = plVar5;
      }
      else {
        local_60 = 0;
        lStack_58 = 0;
        uStack_50 = 0;
        bStack_48 = 0;
        *plVar5 = 0;
        plVar5[1] = 0;
        plVar5[2] = 0;
        plVar5[3] = (ulonglong)uStack_47 << 8;
      }
    }
    if ((*plVar5 == 0) && (plVar10 == (longlong *)0x0)) {
      plVar10 = plVar5;
    }
  }
  if ((param_6 == '\0') && (plVar9 == (longlong *)0x0)) goto LAB_1803c8744;
  lVar7 = param_2 + 0x78;
  lVar6 = FUN_18017ea70();
  *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
  if (lVar7 == 0) {
    bVar1 = false;
  }
  else {
    local_68[0] = 0;
    cVar3 = FUN_1804514f0(local_68,lVar7,1);
    if (cVar3 == '\0') {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
  }
  bVar2 = local_68[0];
  lVar6 = FUN_18017ea70();
  if (*(int *)(lVar6 + 4) != 0) {
    *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
  }
  if (bVar1) {
    if (param_6 == '\0') {
      if (plVar9 == (longlong *)0x0) {
LAB_1803c8744:
        uVar8 = 1;
        goto LAB_1803c87b5;
      }
      local_68[0] = bVar2 & 0xf7 | *(byte *)(plVar9 + 3);
      if (lVar7 != 0) {
        lVar6 = FUN_18017ea70();
        *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
        cVar3 = FUN_1801ad7b0(lVar7,local_68);
        lVar7 = FUN_18017ea70();
        if (*(int *)(lVar7 + 4) != 0) {
          *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
        }
        if (cVar3 != '\0') {
          local_60 = 0;
          lStack_58 = 0;
          uStack_50 = 0;
          bStack_48 = 0;
          *plVar9 = 0;
          plVar9[1] = 0;
          plVar9[2] = 0;
          plVar9[3] = (ulonglong)uStack_47 << 8;
          goto LAB_1803c8744;
        }
      }
    }
    else {
      if (plVar9 == (longlong *)0x0) {
        if (plVar10 == (longlong *)0x0) goto LAB_1803c8786;
        lStack_58 = local_38;
        uStack_50 = CONCAT44(param_5,local_40);
        bStack_48 = bVar2 & 8;
        *plVar10 = param_2;
        plVar10[1] = local_38;
        plVar10[2] = uStack_50;
        plVar10[3] = CONCAT71(uStack_47,bVar2) & 0xffffffffffffff08;
        local_60 = param_2;
      }
      local_68[0] = bVar2 & 0xf7;
      if (lVar7 != 0) {
        lVar6 = FUN_18017ea70();
        *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
        uVar8 = FUN_1801ad7b0(lVar7,local_68);
        lVar7 = FUN_18017ea70();
        if (*(int *)(lVar7 + 4) != 0) {
          *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
        }
        goto LAB_1803c87b5;
      }
    }
  }
LAB_1803c8786:
  uVar8 = 0;
LAB_1803c87b5:
  FUN_1805f68fc(local_30);
  return uVar8;
}



