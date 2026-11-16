// FUN_18062a870 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18062a870 */

int thunk_FUN_18062a150(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lStackX_10;
  longlong lStackX_18;
  longlong lStackX_20;
  longlong *plStack_58;
  longlong *plStack_50;
  undefined8 uStack_48;
  
  if (param_2 == (longlong *)0x0) {
    puVar1 = (undefined4 *)FUN_18060fe00();
    iVar5 = 0x16;
    *puVar1 = 0x16;
    FUN_18060aad4();
  }
  else {
    *param_2 = 0;
    lVar4 = *param_1;
    plStack_58 = (longlong *)0x0;
    plStack_50 = (longlong *)0x0;
    uStack_48 = 0;
    while (plVar6 = plStack_50, plVar7 = plStack_58, lVar4 != 0) {
      lStackX_10 = CONCAT53(lStackX_10._3_5_,0x3f2a);
      lVar4 = FUN_180634840(lVar4,&lStackX_10);
      if (lVar4 == 0) {
        iVar5 = FUN_18062a38c(*param_1,0,0,&plStack_58);
        plVar7 = plStack_58;
        if (iVar5 != 0) {
          plVar6 = plStack_58;
          if (plStack_58 != plStack_50) {
            do {
              FUN_180621380(*plVar6);
              plVar6 = plVar6 + 1;
            } while (plVar6 != plStack_50);
          }
          goto LAB_18062a29f;
        }
      }
      else {
        iVar5 = FUN_18062a510(*param_1,lVar4,&plStack_58);
        plVar7 = plStack_58;
        if (iVar5 != 0) {
          plVar6 = plStack_58;
          if (plStack_58 != plStack_50) {
            do {
              FUN_180621380(*plVar6);
              plVar6 = plVar6 + 1;
            } while (plVar6 != plStack_50);
          }
          goto LAB_18062a29f;
        }
      }
      param_1 = param_1 + 1;
      lVar4 = *param_1;
    }
    lVar4 = 0;
    lStackX_18 = 0;
    lVar8 = ((longlong)plStack_50 - (longlong)plStack_58 >> 3) + 1;
    plVar2 = plStack_58;
    if (plStack_58 != plStack_50) {
      do {
        lVar3 = -1;
        do {
          lVar3 = lVar3 + 1;
        } while (*(char *)(*plVar2 + lVar3) != '\0');
        plVar2 = plVar2 + 1;
        lVar4 = lVar4 + 1 + lVar3;
      } while (plVar2 != plStack_50);
      lStackX_18 = lVar4;
    }
    lVar4 = __acrt_allocate_buffer_for_argv(lVar8,lStackX_18,1);
    if (lVar4 == 0) {
      FUN_180621380(0);
      for (plVar2 = plVar7; plVar2 != plVar6; plVar2 = plVar2 + 1) {
        FUN_180621380(*plVar2);
      }
      iVar5 = -1;
LAB_18062a29f:
      FUN_180621380(plVar7);
    }
    else {
      lVar8 = lVar4 + lVar8 * 8;
      lStackX_20 = lVar8;
      if (plVar7 != plVar6) {
        lStackX_10 = lVar4 - (longlong)plVar7;
        plVar2 = plVar7;
        do {
          lVar3 = -1;
          do {
            lVar9 = lVar3;
            lVar3 = lVar9 + 1;
          } while (*(char *)(*plVar2 + lVar3) != '\0');
          iVar5 = FUN_1806157a0();
          if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          *(longlong *)(lStackX_10 + (longlong)plVar2) = lVar8;
          lVar8 = lVar8 + lVar9 + 2;
          plVar2 = plVar2 + 1;
        } while (plVar2 != plVar6);
      }
      *param_2 = lVar4;
      FUN_180621380(0);
      for (plVar2 = plVar7; plVar2 != plVar6; plVar2 = plVar2 + 1) {
        FUN_180621380(*plVar2);
      }
      FUN_180621380(plVar7);
      iVar5 = 0;
    }
  }
  return iVar5;
}



