// FUN_18062c158 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18062c158 */

ulonglong thunk_FUN_18062b8c4(longlong param_1,int param_2)

{
  ulonglong uVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  
  uVar9 = 0;
  if (param_1 == 0) {
    puVar4 = (undefined4 *)FUN_18060fe00();
    *puVar4 = 0x16;
    return 0xffffffffffffffff;
  }
  lVar5 = FUN_180606b00(param_1,0x3d);
  if ((lVar5 == 0) || (lVar5 == param_1)) {
    puVar4 = (undefined4 *)FUN_18060fe00();
    *puVar4 = 0x16;
    FUN_180621380(param_1);
    return 0xffffffffffffffff;
  }
  cVar2 = *(char *)(lVar5 + 1);
  if (DAT_180bb1d78 == DAT_180bb1d90) {
    DAT_180bb1d78 = (longlong *)FUN_18062bf80(DAT_180bb1d78);
  }
  if (DAT_180bb1d78 == (longlong *)0x0) {
    if ((param_2 == 0) || (DAT_180bb1d80 == 0)) {
      if (cVar2 == '\0') goto LAB_18062bace;
      DAT_180bb1d78 = (longlong *)_calloc_base(1,8);
      FUN_180621380(0);
      if (DAT_180bb1d78 != (longlong *)0x0) {
        if (DAT_180bb1d80 == 0) {
          DAT_180bb1d80 = _calloc_base(1,8);
          FUN_180621380(0);
          if (DAT_180bb1d80 == 0) goto LAB_18062b976;
        }
LAB_18062ba15:
        if (DAT_180bb1d78 != (longlong *)0x0) goto LAB_18062ba1e;
      }
    }
    else {
      lVar6 = FUN_18061a958();
      if (lVar6 != 0) {
        if (DAT_180bb1d78 == DAT_180bb1d90) {
          DAT_180bb1d78 = (longlong *)FUN_18062bf80(DAT_180bb1d78);
        }
        goto LAB_18062ba15;
      }
      puVar4 = (undefined4 *)FUN_18060fe00();
      *puVar4 = 0x16;
    }
  }
  else {
LAB_18062ba1e:
    plVar7 = DAT_180bb1d78;
    lVar10 = lVar5 - param_1;
    lVar6 = *DAT_180bb1d78;
    plVar8 = DAT_180bb1d78;
    while (lVar6 != 0) {
      iVar3 = FUN_180629db0(param_1,lVar6,lVar10);
      if ((iVar3 == 0) &&
         ((*(char *)(lVar10 + *plVar8) == '=' || (*(char *)(lVar10 + *plVar8) == '\0')))) {
        lVar6 = (longlong)plVar8 - (longlong)plVar7 >> 3;
        goto LAB_18062ba64;
      }
      plVar8 = plVar8 + 1;
      lVar6 = *plVar8;
    }
    lVar6 = -((longlong)plVar8 - (longlong)plVar7 >> 3);
LAB_18062ba64:
    if ((-1 < lVar6) && (*plVar7 != 0)) {
      FUN_180621380(plVar7[lVar6]);
      if (cVar2 == '\0') {
        for (; plVar7[lVar6] != 0; lVar6 = lVar6 + 1) {
          plVar7[lVar6] = plVar7[lVar6 + 1];
        }
        plVar7 = (longlong *)_recalloc_base(plVar7,lVar6,8);
        FUN_180621380(0);
        lVar6 = param_1;
        if (plVar7 != (longlong *)0x0) {
          DAT_180bb1d78 = plVar7;
        }
      }
      else {
        plVar7[lVar6] = param_1;
LAB_18062bb29:
        lVar6 = 0;
      }
      if (param_2 == 0) {
LAB_18062bbcc:
        FUN_180621380(lVar6);
        return 0;
      }
      lVar10 = -1;
      do {
        lVar11 = lVar10;
        lVar10 = lVar11 + 1;
      } while (*(char *)(param_1 + lVar10) != '\0');
      lVar10 = _calloc_base(lVar11 + 3,1);
      if (lVar10 == 0) {
        FUN_180621380(0);
      }
      else {
        iVar3 = FUN_18061f0b0();
        if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        *(undefined1 *)((lVar10 - param_1) + lVar5) = 0;
        iVar3 = FUN_180634cb4(lVar10,-(ulonglong)(cVar2 != '\0') & lVar5 + 1 + (lVar10 - param_1));
        if (iVar3 != 0) {
          FUN_180621380(lVar10);
          goto LAB_18062bbcc;
        }
        puVar4 = (undefined4 *)FUN_18060fe00();
        *puVar4 = 0x2a;
        FUN_180621380(lVar10);
        uVar9 = 0xffffffff;
      }
      FUN_180621380(lVar6);
      return uVar9;
    }
    if (cVar2 == '\0') {
LAB_18062bace:
      uVar9 = 0;
      goto LAB_18062b97a;
    }
    uVar1 = -lVar6 + 2;
    if (((ulonglong)-lVar6 <= uVar1) && (uVar1 < 0x1fffffffffffffff)) {
      plVar7 = (longlong *)_recalloc_base(plVar7,uVar1,8);
      FUN_180621380(0);
      if (plVar7 != (longlong *)0x0) {
        plVar7[-lVar6] = param_1;
        plVar7[1 - lVar6] = 0;
        DAT_180bb1d78 = plVar7;
        goto LAB_18062bb29;
      }
    }
  }
LAB_18062b976:
  uVar9 = 0xffffffffffffffff;
LAB_18062b97a:
  FUN_180621380(param_1);
  return uVar9 & 0xffffffff;
}



