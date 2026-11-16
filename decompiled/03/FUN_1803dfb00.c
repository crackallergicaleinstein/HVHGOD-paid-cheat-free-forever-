// FUN_1803dfb00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803dfb00 */

char * FUN_1803dfb00(undefined8 param_1,undefined8 *param_2)

{
  char *pcVar1;
  int *piVar2;
  undefined8 uVar3;
  int iVar4;
  ULONGLONG UVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  char *pcVar11;
  char *local_98;
  longlong local_90;
  undefined8 *local_88;
  char *local_78;
  longlong local_70;
  undefined *local_68;
  
  if (param_2 == (undefined8 *)0x0) {
    return (char *)0x0;
  }
  piVar2 = (int *)param_2[2];
  if (piVar2 != (int *)0x0) {
    iVar4 = *(int *)(param_2 + 1);
    if ((iVar4 < *piVar2) && (lVar7 = *(longlong *)(piVar2 + (longlong)iVar4 * 2 + 2), lVar7 != 0))
    {
      *(int *)(param_2 + 1) = iVar4 + 1;
      pcVar1 = (char *)(lVar7 + 0x10);
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      pcVar1[4] = '\0';
      pcVar1[5] = '\0';
      pcVar1[6] = '\0';
      pcVar1[7] = '\0';
      *(undefined8 *)(lVar7 + 0x18) = 0;
      *(undefined8 *)(lVar7 + 0x20) = 0;
      *(undefined8 *)(lVar7 + 0x28) = 0;
      *(undefined8 *)(lVar7 + 0x30) = 0;
      return pcVar1;
    }
  }
  local_88 = param_2;
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  lVar6 = DAT_1809ba9e8;
  lVar7 = DAT_1808da460;
  uVar10 = 1000;
  if ((DAT_1809ba9e8 != DAT_1808da460) || (lVar8 = DAT_180c71fc8, DAT_180c71fc8 == 0)) {
    UVar5 = GetTickCount64();
    if ((lVar6 == lVar7) && (UVar5 < DAT_180c71fd0)) {
      lVar8 = 0;
    }
    else {
      local_68 = &DAT_1809baa00;
      iVar4 = FUN_1805f68d0(&DAT_1809baa00);
      if (iVar4 != 0) goto LAB_1803dff0b;
      if (DAT_1809baa4c == 0x7fffffff) {
        DAT_1809baa4c = 0x7ffffffe;
        goto LAB_1803dff20;
      }
      if (DAT_1809ba9e8 == lVar7) {
        if ((DAT_180c71fc8 == 0) && (DAT_180c71fd0 <= UVar5)) goto LAB_1803dfc5b;
      }
      else {
        DAT_1809ba9f0 = 1000;
LAB_1803dfc5b:
        lVar6 = -1;
        do {
          local_70 = lVar6 + 1;
          pcVar1 = "lient.dll:488B54CA088D4101894708EB16488B0F>E8????????488BD0488BCF" + lVar6;
          lVar6 = local_70;
        } while (*pcVar1 != '\0');
        local_78 = "client.dll:488B54CA088D4101894708EB16488B0F>E8????????488BD0488BCF";
        local_98 = "patterns::subtick_move_alloc";
        local_90 = 0x1c;
        DAT_180c71fc8 = FUN_1800e5d20(&local_98,&local_78);
        DAT_1809ba9e8 = lVar7;
        DAT_180c71fd0 = 0xffffffffffffffff;
        if (DAT_180c71fc8 == 0) {
          DAT_180c71fd0 = DAT_1809ba9f0 + UVar5;
          if (DAT_1809ba9f0 < 60000) {
            DAT_1809ba9f0 = DAT_1809ba9f0 * 2;
          }
          else {
            DAT_1809ba9f0 = 60000;
          }
        }
        else {
          DAT_1809ba9f0 = 1000;
        }
      }
      lVar8 = DAT_180c71fc8;
      FUN_1805f68fc(&DAT_1809baa00);
    }
  }
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  lVar6 = DAT_1809ba920;
  lVar7 = DAT_1808da460;
  if ((DAT_1809ba920 == DAT_1808da460) && (lVar9 = DAT_180c71fa8, DAT_180c71fa8 != 0))
  goto LAB_1803dfe5a;
  UVar5 = GetTickCount64();
  if ((lVar6 == lVar7) && (UVar5 < DAT_180c71fb0)) {
    lVar9 = 0;
  }
  else {
    local_68 = &DAT_1809ba930;
    iVar4 = FUN_1805f68d0(&DAT_1809ba930);
    if (iVar4 != 0) {
LAB_1803dff0b:
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1809ba97c == 0x7fffffff) {
      DAT_1809ba97c = 0x7ffffffe;
LAB_1803dff20:
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if (DAT_1809ba920 == lVar7) {
      if ((DAT_180c71fa8 == 0) && (DAT_180c71fb0 <= UVar5)) goto LAB_1803dfdbf;
    }
    else {
      DAT_1809ba928 = 1000;
LAB_1803dfdbf:
      lVar6 = -1;
      do {
        local_90 = lVar6 + 1;
        lVar9 = lVar6 + 1;
        lVar6 = local_90;
      } while ("client.dll:>E8????????4C8BD0458B4A10"[lVar9] != '\0');
      local_98 = "client.dll:>E8????????4C8BD0458B4A10";
      local_78 = "patterns::utl_vector_push";
      local_70 = 0x19;
      DAT_180c71fa8 = FUN_1800e5d20(&local_78,&local_98);
      DAT_1809ba920 = lVar7;
      DAT_180c71fb0 = 0xffffffffffffffff;
      if (DAT_180c71fa8 == 0) {
        DAT_180c71fb0 = DAT_1809ba928 + UVar5;
        uVar10 = DAT_1809ba928 * 2;
        if (59999 < DAT_1809ba928) {
          uVar10 = 60000;
        }
      }
      DAT_1809ba928 = uVar10;
    }
    lVar9 = DAT_180c71fa8;
    FUN_1805f68fc(&DAT_1809ba930);
  }
  param_2 = local_88;
LAB_1803dfe5a:
  if ((lVar8 != 0) && (lVar9 != 0)) {
    uVar3 = *param_2;
    lVar7 = FUN_18017ea70();
    *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
    FUN_1801ad7c0(&local_98,lVar8,uVar3);
    lVar7 = FUN_18017ea70();
    pcVar1 = local_98;
    if (*(int *)(lVar7 + 4) != 0) {
      *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
    }
    if (((char)local_90 != '\0') && (local_98 != (char *)0x0)) {
      lVar7 = FUN_18017ea70();
      *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
      FUN_180252bd0(&local_98,lVar9,param_2,pcVar1);
      lVar7 = FUN_18017ea70();
      if (*(int *)(lVar7 + 4) != 0) {
        *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
      }
      if ((char)local_90 != '\0') {
        pcVar11 = (char *)0x0;
        if (pcVar1 != (char *)0x0) {
          pcVar11 = pcVar1 + 0x10;
        }
        return pcVar11;
      }
    }
  }
  return (char *)0x0;
}



