// FUN_1801fd970 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801fd970 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801fd970(undefined8 param_1,longlong param_2,undefined8 param_3,int param_4)

{
  char *pcVar1;
  int iVar2;
  ULONGLONG UVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  char *local_68;
  longlong local_60;
  char *local_58;
  longlong local_50;
  
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  lVar5 = DAT_1808e7b40;
  lVar4 = DAT_1808da460;
  uVar7 = 1000;
  if ((DAT_1808e7b40 == DAT_1808da460) && (lVar6 = DAT_180c633c0, DAT_180c633c0 != 0)) {
LAB_1801fdb04:
    FUN_1801a5f80(lVar6,param_3);
  }
  else {
    UVar3 = GetTickCount64();
    if ((lVar5 != lVar4) || (DAT_180c633b8 <= UVar3)) {
      iVar2 = FUN_1805f68d0(&DAT_1808e7af0);
      if (iVar2 != 0) goto LAB_1801fddd9;
      if (DAT_1808e7b3c == 0x7fffffff) {
        DAT_1808e7b3c = 0x7ffffffe;
        goto LAB_1801fddce;
      }
      if (DAT_1808e7b40 == lVar4) {
        if ((DAT_180c633c0 == 0) && (DAT_180c633b8 <= UVar3)) goto LAB_1801fda68;
      }
      else {
        DAT_1808e7ae0 = 1000;
LAB_1801fda68:
        lVar5 = -1;
        do {
          local_60 = lVar5 + 1;
          pcVar1 = "lient.dll:48895C24??48897424??574883EC20488DB9????????488BF1" + lVar5;
          lVar5 = local_60;
        } while (*pcVar1 != '\0');
        local_68 = "client.dll:48895C24??48897424??574883EC20488DB9????????488BF1";
        local_58 = "patterns::econ_item_view_invalidate_description";
        local_50 = 0x2f;
        DAT_180c633c0 = FUN_1800e5d20(&local_58,&local_68);
        DAT_1808e7b40 = lVar4;
        DAT_180c633b8 = 0xffffffffffffffff;
        if (DAT_180c633c0 == 0) {
          DAT_180c633b8 = DAT_1808e7ae0 + UVar3;
          if (DAT_1808e7ae0 < 60000) {
            DAT_1808e7ae0 = DAT_1808e7ae0 * 2;
          }
          else {
            DAT_1808e7ae0 = 60000;
          }
        }
        else {
          DAT_1808e7ae0 = 1000;
        }
      }
      lVar6 = DAT_180c633c0;
      FUN_1805f68fc(&DAT_1808e7af0);
      if (lVar6 != 0) goto LAB_1801fdb04;
    }
  }
  iVar2 = DAT_180c633b0;
  if (DAT_180c633b0 == 0) {
    UVar3 = GetTickCount64();
    if (UVar3 < DAT_180c633a8) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_1805f68d0(&DAT_1808e7a90);
      if (iVar2 != 0) goto LAB_1801fddd9;
      if (DAT_1808e7adc == 0x7fffffff) {
        DAT_1808e7adc = 0x7ffffffe;
        goto LAB_1801fddce;
      }
      if ((DAT_180c633b0 == 0) && (DAT_180c633a8 <= UVar3)) {
        DAT_180c633b0 = FUN_1804174b0("C_CSPlayerPawn",0x22bae6fd);
        if (DAT_180c633b0 == 0) {
          DAT_180c633a8 = UVar3 + 1000;
        }
        else {
          DAT_180c633a8 = 0xffffffffffffffff;
        }
      }
      iVar2 = DAT_180c633b0;
      FUN_1805f68fc(&DAT_1808e7a90);
    }
  }
  *(undefined1 *)(iVar2 + param_2) = 1;
  if (param_2 != 0) {
    lVar4 = FUN_18017ea70();
    *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
    FUN_1801aebc0(param_2);
    lVar4 = FUN_18017ea70();
    if (*(int *)(lVar4 + 4) != 0) {
      *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + -1;
    }
    if ((DAT_180bbeb00 == param_2) && (DAT_1808daef0 == param_2)) {
      _DAT_1808dafbc = 0xffffffffffffffff;
    }
  }
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  lVar5 = DAT_1808e7a80;
  lVar4 = DAT_1808da460;
  if ((DAT_1808e7a80 == DAT_1808da460) && (lVar6 = DAT_180c633a0, DAT_180c633a0 != 0))
  goto LAB_1801fdd6a;
  UVar3 = GetTickCount64();
  if ((lVar5 == lVar4) && (UVar3 < DAT_180c63398)) {
    return;
  }
  iVar2 = FUN_1805f68d0(&DAT_1808e7a30);
  if (iVar2 != 0) {
LAB_1801fddd9:
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_1808e7a7c == 0x7fffffff) {
    DAT_1808e7a7c = 0x7ffffffe;
LAB_1801fddce:
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  if (DAT_1808e7a80 == lVar4) {
    if ((DAT_180c633a0 == 0) && (DAT_180c63398 <= UVar3)) goto LAB_1801fdcd2;
  }
  else {
    DAT_1808e7a20 = 1000;
LAB_1801fdcd2:
    lVar5 = -1;
    do {
      local_50 = lVar5 + 1;
      lVar6 = lVar5 + 1;
      lVar5 = local_50;
    } while ("client.dll:85D20F88????????555657"[lVar6] != '\0');
    local_58 = "client.dll:85D20F88????????555657";
    local_68 = "patterns::set_bodygroup";
    local_60 = 0x17;
    DAT_180c633a0 = FUN_1800e5d20(&local_68,&local_58);
    DAT_1808e7a80 = lVar4;
    DAT_180c63398 = 0xffffffffffffffff;
    if (DAT_180c633a0 == 0) {
      DAT_180c63398 = DAT_1808e7a20 + UVar3;
      uVar7 = DAT_1808e7a20 * 2;
      if (59999 < DAT_1808e7a20) {
        uVar7 = 60000;
      }
    }
    DAT_1808e7a20 = uVar7;
  }
  lVar6 = DAT_180c633a0;
  FUN_1805f68fc(&DAT_1808e7a30);
  if (lVar6 == 0) {
    return;
  }
LAB_1801fdd6a:
  if ((param_2 == 0) || (DAT_180bbeb00 != param_2)) {
    FUN_1801fabe0(lVar6,param_2,0,1);
    FUN_1801fabe0(lVar6,param_2,param_4 != 2,1);
  }
  return;
}



