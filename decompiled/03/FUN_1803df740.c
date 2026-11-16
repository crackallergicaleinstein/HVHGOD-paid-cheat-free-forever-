// FUN_1803df740 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803df740 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_1803df740(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  longlong lVar2;
  undefined *puVar3;
  char cVar4;
  int iVar5;
  ULONGLONG UVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  code *pcVar10;
  code *pcVar11;
  ulonglong uVar12;
  undefined *local_58 [2];
  char *local_48;
  longlong local_40;
  char *local_38;
  longlong local_30;
  
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  lVar7 = DAT_1809baa50;
  lVar8 = DAT_1808da460;
  uVar12 = 1000;
  if ((DAT_1809baa50 != DAT_1808da460) || (pcVar11 = (code *)DAT_180c71fd8, DAT_180c71fd8 == 0)) {
    UVar6 = GetTickCount64();
    if ((lVar7 == lVar8) && (UVar6 < DAT_180c71fe0)) {
      pcVar11 = (code *)0x0;
    }
    else {
      local_58[0] = &DAT_1809baa60;
      iVar5 = FUN_1805f68d0(&DAT_1809baa60);
      if (iVar5 != 0) goto LAB_1803dfaea;
      if (DAT_1809baaac == 0x7fffffff) {
        DAT_1809baaac = 0x7ffffffe;
        goto LAB_1803dfadf;
      }
      if (DAT_1809baa50 == lVar8) {
        if ((DAT_180c71fd8 == 0) && (DAT_180c71fe0 <= UVar6)) goto LAB_1803df83b;
      }
      else {
        DAT_1809baab0 = 1000;
LAB_1803df83b:
        lVar7 = -1;
        do {
          local_40 = lVar7 + 1;
          lVar2 = lVar7 + 1;
          lVar7 = local_40;
        } while ("client.dll:4883EC28>E8????????8B8010590000"[lVar2] != '\0');
        local_48 = "client.dll:4883EC28>E8????????8B8010590000";
        local_38 = "patterns::get_usercmd_base";
        local_30 = 0x1a;
        DAT_180c71fd8 = FUN_1800e5d20(&local_38,&local_48);
        DAT_1809baa50 = lVar8;
        DAT_180c71fe0 = 0xffffffffffffffff;
        if (DAT_180c71fd8 == 0) {
          DAT_180c71fe0 = DAT_1809baab0 + UVar6;
          if (DAT_1809baab0 < 60000) {
            DAT_1809baab0 = DAT_1809baab0 * 2;
          }
          else {
            DAT_1809baab0 = 60000;
          }
        }
        else {
          DAT_1809baab0 = 1000;
        }
      }
      pcVar11 = (code *)DAT_180c71fd8;
      FUN_1805f68fc(&DAT_1809baa60);
    }
  }
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  lVar7 = DAT_1809baab8;
  lVar8 = DAT_1808da460;
  if ((DAT_1809baab8 == DAT_1808da460) && (pcVar10 = (code *)DAT_180c71fe8, DAT_180c71fe8 != 0))
  goto LAB_1803dfa25;
  UVar6 = GetTickCount64();
  if ((lVar7 == lVar8) && (UVar6 < DAT_180c71fc0)) {
    pcVar10 = (code *)0x0;
    goto LAB_1803dfa25;
  }
  local_58[0] = &DAT_1809ba990;
  iVar5 = FUN_1805f68d0(&DAT_1809ba990);
  if (iVar5 != 0) {
LAB_1803dfaea:
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_1809ba9dc == 0x7fffffff) {
    DAT_1809ba9dc = 0x7ffffffe;
LAB_1803dfadf:
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  if (DAT_1809baab8 == lVar8) {
    if ((DAT_180c71fe8 == 0) && (DAT_180c71fc0 <= UVar6)) goto LAB_1803df996;
  }
  else {
    DAT_1809ba9e0 = 1000;
LAB_1803df996:
    lVar7 = -1;
    do {
      local_30 = lVar7 + 1;
      lVar2 = lVar7 + 1;
      lVar7 = local_30;
    } while ("client.dll:40534883EC208BDAE8????????4C8BC0"[lVar2] != '\0');
    local_38 = "client.dll:40534883EC208BDAE8????????4C8BC0";
    local_48 = "patterns::get_usercmd";
    local_40 = 0x15;
    DAT_180c71fe8 = FUN_1800e5d20(&local_48,&local_38);
    DAT_1809baab8 = lVar8;
    DAT_180c71fc0 = 0xffffffffffffffff;
    if (DAT_180c71fe8 == 0) {
      DAT_180c71fc0 = DAT_1809ba9e0 + UVar6;
      uVar12 = DAT_1809ba9e0 * 2;
      if (59999 < DAT_1809ba9e0) {
        uVar12 = 60000;
      }
    }
    DAT_1809ba9e0 = uVar12;
  }
  pcVar10 = (code *)DAT_180c71fe8;
  FUN_1805f68fc(&DAT_1809ba990);
LAB_1803dfa25:
  if (((pcVar11 != (code *)0x0) && (pcVar10 != (code *)0x0)) &&
     (lVar8 = (*pcVar11)(param_2), lVar8 != 0)) {
    lVar7 = FUN_18017ea70();
    *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
    bVar1 = false;
    if (lVar8 + 0x5910 != 0) {
      local_58[0] = (undefined *)((ulonglong)local_58[0] & 0xffffffff00000000);
      cVar4 = FUN_1804514f0(local_58,lVar8 + 0x5910,4);
      if (cVar4 == '\0') {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
    }
    puVar3 = local_58[0];
    lVar8 = FUN_18017ea70();
    if (*(int *)(lVar8 + 4) != 0) {
      *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
    }
    if (bVar1) {
      uVar9 = (*pcVar10)(param_2,(ulonglong)puVar3 & 0xffffffff);
      return uVar9;
    }
  }
  return 0;
}



