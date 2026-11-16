// FUN_18059a9d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18059a9d0 */

ulonglong FUN_18059a9d0(longlong *param_1,longlong param_2)

{
  byte bVar1;
  char *pcVar2;
  byte *pbVar3;
  bool bVar4;
  short sVar5;
  undefined4 uVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint *puVar12;
  int iVar13;
  char *pcVar14;
  byte *pbVar15;
  short sVar16;
  longlong *plVar17;
  uint uVar18;
  uint local_res8 [2];
  longlong local_res10;
  uint local_res18 [2];
  
  lVar11 = param_1[0x12];
  lVar9 = param_1[4];
  local_res8[0] = 0;
  local_res10 = param_2;
  if (*(char *)((longlong)param_1 + 0xb4) == '\0') {
    pcVar2 = (char *)param_1[0x13];
    plVar17 = param_1 + 2;
    pcVar14 = pcVar2 + *(uint *)(param_1 + 0x14);
    *param_1 = (longlong)pcVar2;
    *plVar17 = (longlong)pcVar14;
    while (pcVar2 < pcVar14) {
      if ((((*pcVar2 == 'e') && (pcVar2 + 9 < pcVar14)) && (pcVar2[1] == 'e')) &&
         (((pcVar2[2] == 'x' && (pcVar2[3] == 'e')) && (pcVar2[4] == 'c')))) {
        *plVar17 = (ulonglong)*(uint *)(param_1 + 0x14) + param_1[0x13];
        (*(code *)param_1[8])(param_1);
        pbVar15 = (byte *)*param_1;
        pbVar3 = (byte *)*plVar17;
        uVar8 = FUN_18063b630(pbVar15,10,(longlong)pbVar3 - (longlong)pbVar15);
        if ((uVar8 == 0) ||
           (uVar10 = FUN_18063b630(pbVar15,0xd,(longlong)pbVar3 - (longlong)pbVar15), uVar10 < uVar8
           )) {
          bVar4 = true;
        }
        else {
          bVar4 = false;
        }
        while( true ) {
          if (pbVar3 <= pbVar15) {
            return 3;
          }
          bVar1 = *pbVar15;
          if (((bVar1 != 0x20) && (bVar1 != 9)) && (((!bVar4 || (bVar1 != 0xd)) && (bVar1 != 10))))
          break;
          pbVar15 = pbVar15 + 1;
        }
        if (pbVar3 <= pbVar15) {
          return 3;
        }
        plVar17 = param_1 + 0x15;
        uVar18 = ((int)param_1[0x13] - (int)pbVar15) + (int)param_1[0x14];
        if (*(char *)((longlong)param_1 + 0xb5) == '\0') {
          lVar11 = param_1[0x13];
          *plVar17 = lVar11;
          param_1[0x13] = 0;
          *(undefined4 *)(param_1 + 0x14) = 0;
          *(undefined1 *)((longlong)param_1 + 0xb6) = 1;
        }
        else {
          lVar11 = FUN_18057abe0(lVar9,uVar18 + 1,local_res8);
          *plVar17 = lVar11;
          if (local_res8[0] != 0) {
            return (ulonglong)local_res8[0];
          }
        }
        lVar9 = local_res10;
        *(uint *)(param_1 + 0x16) = uVar18;
        if (((((pbVar3 <= pbVar15 + 3) ||
              (((bVar1 = *pbVar15, 9 < bVar1 - 0x30 && (5 < bVar1 - 0x61)) && (5 < bVar1 - 0x41))))
             || (((bVar1 = pbVar15[1], 9 < bVar1 - 0x30 && (5 < bVar1 - 0x61)) && (5 < bVar1 - 0x41)
                 ))) ||
            (((bVar1 = pbVar15[2], 9 < bVar1 - 0x30 && (5 < bVar1 - 0x61)) && (5 < bVar1 - 0x41))))
           || (((bVar1 = pbVar15[3], 9 < bVar1 - 0x30 && (5 < bVar1 - 0x61)) && (5 < bVar1 - 0x41)))
           ) {
          FUN_18063aed0(lVar11,pbVar15,uVar18);
          goto LAB_18059adea;
        }
        *param_1 = (longlong)pbVar15;
        (**(code **)(*(longlong *)(local_res10 + 8) + 0x30))(param_1,lVar11,uVar18,local_res18,0);
        *(uint *)(param_1 + 0x16) = local_res18[0];
        *(undefined1 *)((ulonglong)local_res18[0] + *plVar17) = 0;
        goto LAB_18059adef;
      }
      (*(code *)param_1[8])(param_1);
      if ((int)param_1[3] != 0) {
        return 3;
      }
      (*(code *)param_1[7])(param_1);
      pcVar2 = (char *)*param_1;
    }
  }
  else {
    uVar6 = FUN_1805780f0(lVar11);
    puVar12 = (uint *)(param_1 + 0x16);
    *puVar12 = 0;
    while( true ) {
      iVar13 = 0;
      sVar5 = FUN_180578720(lVar11,local_res18);
      sVar16 = 0;
      if (local_res18[0] == 0) {
        if ((ushort)(sVar5 + 0x7fffU) < 2) {
          iVar7 = FUN_1805785e0(lVar11,local_res18);
          iVar13 = 0;
          if (local_res18[0] == 0) {
            iVar13 = iVar7;
          }
        }
        sVar16 = sVar5;
      }
      if (local_res18[0] != 0) {
        return (ulonglong)local_res18[0];
      }
      if (sVar16 != -0x7ffe) break;
      *puVar12 = *puVar12 + iVar13;
      uVar8 = FUN_180578910(lVar11,iVar13);
      local_res8[0] = (uint)uVar8;
      if (local_res8[0] != 0) {
        return uVar8;
      }
    }
    if (*puVar12 != 0) {
      uVar8 = FUN_1805788b0(lVar11,uVar6);
      local_res8[0] = (uint)uVar8;
      if (local_res8[0] != 0) {
        return uVar8;
      }
      lVar9 = FUN_18057abe0(lVar9,*puVar12,local_res8);
      param_1[0x15] = lVar9;
      if (local_res8[0] != 0) {
        return (ulonglong)local_res8[0];
      }
      *puVar12 = 0;
      while( true ) {
        iVar13 = 0;
        sVar5 = FUN_180578720(lVar11,local_res18);
        sVar16 = 0;
        if (local_res18[0] == 0) {
          if ((ushort)(sVar5 + 0x7fffU) < 2) {
            iVar7 = FUN_1805785e0(lVar11,local_res18);
            iVar13 = 0;
            if (local_res18[0] == 0) {
              iVar13 = iVar7;
            }
          }
          sVar16 = sVar5;
        }
        if ((local_res18[0] != 0) || (sVar16 != -0x7ffe)) break;
        uVar8 = FUN_180578100(lVar11,(ulonglong)*puVar12 + param_1[0x15],iVar13);
        if ((int)uVar8 != 0) {
          return uVar8;
        }
        *puVar12 = *puVar12 + iVar13;
        local_res8[0] = 0;
      }
      local_res8[0] = 0;
LAB_18059adea:
      lVar9 = local_res10;
LAB_18059adef:
      plVar17 = param_1 + 0x15;
      puVar12 = (uint *)(param_1 + 0x16);
      (**(code **)(lVar9 + 0x20))(*plVar17,*puVar12,0xd971);
      if (3 < *puVar12) {
        *(undefined1 *)*plVar17 = 0x20;
        *(undefined1 *)(*plVar17 + 1) = 0x20;
        *(undefined1 *)(*plVar17 + 2) = 0x20;
        *(undefined1 *)(*plVar17 + 3) = 0x20;
        lVar11 = *plVar17;
        param_1[1] = lVar11;
        param_1[2] = (ulonglong)*puVar12 + lVar11;
        *param_1 = lVar11;
        return (ulonglong)local_res8[0];
      }
    }
  }
  return 3;
}



