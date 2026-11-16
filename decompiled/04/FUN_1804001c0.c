// FUN_1804001c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804001c0 */

undefined1 FUN_1804001c0(longlong param_1)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 uVar9;
  longlong local_28 [2];
  
  if (*(longlong *)(param_1 + 0x5800) == 0) {
    return *(undefined1 *)(param_1 + 0x5810);
  }
  plVar5 = (longlong *)FUN_180416b80();
  lVar2 = *plVar5;
  if (lVar2 == 0) {
    uVar9 = 0;
  }
  else {
    FUN_18017bf40(local_28);
    plVar5 = (longlong *)(lVar2 + (ulonglong)*(uint *)(lVar2 + 0x20) * 8 + 0x28);
    *plVar5 = *plVar5 + (local_28[0] - *(longlong *)(lVar2 + 0x18));
    uVar9 = *(undefined4 *)(lVar2 + 0x20);
    *(undefined4 *)(lVar2 + 0x20) = 0xb;
    *(longlong *)(lVar2 + 0x18) = local_28[0];
  }
  lVar6 = *(longlong *)(param_1 + 0x5800);
  do {
    if (lVar6 == 0) {
      *(undefined8 *)(param_1 + 0x5808) = 0;
      uVar1 = *(undefined1 *)(param_1 + 0x5810);
      if (lVar2 != 0) {
        FUN_18017bf40(local_28);
        plVar5 = (longlong *)(lVar2 + (ulonglong)*(uint *)(lVar2 + 0x20) * 8 + 0x28);
        *plVar5 = *plVar5 + (local_28[0] - *(longlong *)(lVar2 + 0x18));
        *(longlong *)(lVar2 + 0x18) = local_28[0];
        *(undefined4 *)(lVar2 + 0x20) = uVar9;
      }
      return uVar1;
    }
    *(longlong *)(param_1 + 0x5800) = lVar6 + -1;
    lVar6 = (lVar6 + -1) * 0x20;
    plVar5 = (longlong *)(lVar6 + param_1);
    if (*(char *)(lVar6 + 0x18 + param_1) == '\0') {
      FUN_18063aed0(*plVar5,plVar5[1] + 0x1800 + param_1,plVar5[2]);
    }
    else {
      lVar6 = *plVar5;
      if (((lVar6 != 0) && (lVar8 = plVar5[1] + 0x1800 + param_1, lVar8 != 0)) &&
         (lVar3 = plVar5[2], lVar3 != 0)) {
        lVar7 = FUN_18017ea70();
        *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
        cVar4 = FUN_1804514c0(lVar6,lVar8,lVar3);
        lVar6 = FUN_18017ea70();
        if (*(int *)(lVar6 + 4) != 0) {
          *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
        }
        if (cVar4 != '\0') goto LAB_1804002dc;
      }
      *(undefined1 *)(param_1 + 0x5810) = 0;
    }
LAB_1804002dc:
    lVar6 = *(longlong *)(param_1 + 0x5800);
  } while( true );
}



