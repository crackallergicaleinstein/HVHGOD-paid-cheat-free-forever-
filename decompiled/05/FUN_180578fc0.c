// FUN_180578fc0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180578fc0 */

ulonglong FUN_180578fc0(longlong *param_1,longlong *param_2,longlong param_3,int param_4,int param_5
                       ,undefined8 param_6)

{
  char cVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined1 *puVar7;
  uint uVar9;
  uint uVar8;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  undefined4 *puVar16;
  undefined1 local_64 [4];
  undefined1 local_60 [4];
  int local_5c;
  ulonglong local_58;
  longlong local_50;
  longlong local_48;
  
  local_48 = *param_1;
  local_5c = 0;
  if (param_5 != -1) {
    local_5c = param_5;
  }
  if (local_5c != 0) {
    return 1;
  }
  uVar15 = 0;
  local_50 = (longlong)param_4;
  if (0 < param_4) {
    lVar13 = 0;
    do {
      uVar12 = *(uint *)(param_3 + lVar13 * 4);
      if ((code *)param_2[4] == (code *)0x0) {
        if (uVar12 <= *(uint *)(param_2 + 1)) goto LAB_180579090;
LAB_180579150:
        uVar10 = 0x55;
        goto LAB_1805794a6;
      }
      iVar4 = (*(code *)param_2[4])(param_2,uVar12,0,0);
      uVar10 = -(uint)(iVar4 != 0) & 0x55;
      if (iVar4 != 0) goto LAB_1805794a6;
LAB_180579090:
      uVar10 = 0;
      *(uint *)((longlong)param_2 + 0xc) = uVar12;
      uVar12 = *(uint *)((longlong)param_2 + 0xc);
      if (*(uint *)(param_2 + 1) <= uVar12 + 3) goto LAB_180579150;
      if ((code *)param_2[4] == (code *)0x0) {
        puVar7 = (undefined1 *)((ulonglong)uVar12 + *param_2);
        if (puVar7 != (undefined1 *)0x0) goto LAB_1805790e4;
      }
      else {
        iVar4 = (*(code *)param_2[4])(param_2,(ulonglong)uVar12,local_64);
        if (iVar4 != 4) goto LAB_180579150;
        uVar12 = *(uint *)((longlong)param_2 + 0xc);
        puVar7 = local_64;
LAB_1805790e4:
        uVar10 = CONCAT31(CONCAT21(CONCAT11(*puVar7,puVar7[1]),puVar7[2]),puVar7[3]);
      }
      *(uint *)((longlong)param_2 + 0xc) = uVar12 + 4;
      if ((0xffffff < uVar10) || (0xffffff - uVar10 < uVar15 + 6)) {
        uVar10 = 9;
        goto LAB_1805794a6;
      }
      lVar13 = lVar13 + 1;
      uVar15 = uVar15 + 6 + uVar10;
    } while (lVar13 < local_50);
  }
  uVar12 = uVar15 + 2;
  if (uVar12 < 6) {
    uVar10 = 10;
  }
  else {
    uVar10 = 0;
    puVar16 = (undefined4 *)0x0;
    if ((int)uVar12 < 1) {
      if ((int)uVar12 < 0) {
        uVar10 = 6;
        goto LAB_1805794a6;
      }
    }
    else {
      puVar16 = (undefined4 *)(**(code **)(local_48 + 8))(local_48,uVar12);
      uVar10 = 0x40;
      if (puVar16 != (undefined4 *)0x0) {
        uVar10 = 0;
      }
    }
    if (uVar10 == 0) {
      *(undefined2 *)(puVar16 + 1) = 0;
      uVar10 = 1;
      cVar3 = '\x01';
      *puVar16 = 0x180;
      uVar14 = 6;
      uVar12 = 6;
      local_58 = 2;
      iVar4 = 0;
      if (0 < param_4) {
        lVar13 = 0;
        do {
          uVar12 = (uint)uVar14;
          uVar9 = *(uint *)(param_3 + lVar13 * 4);
          if ((code *)param_2[4] == (code *)0x0) {
            if (*(uint *)(param_2 + 1) < uVar9) goto LAB_180579497;
          }
          else {
            iVar5 = (*(code *)param_2[4])(param_2,uVar9,0,0);
            if (iVar5 != 0) goto LAB_180579497;
          }
          *(uint *)((longlong)param_2 + 0xc) = uVar9;
          uVar11 = 0;
          uVar9 = *(uint *)((longlong)param_2 + 0xc);
          if (*(uint *)(param_2 + 1) <= uVar9 + 3) goto LAB_180579497;
          if ((code *)param_2[4] == (code *)0x0) {
            puVar7 = (undefined1 *)((ulonglong)uVar9 + *param_2);
            if (puVar7 != (undefined1 *)0x0) goto LAB_180579280;
          }
          else {
            iVar5 = (*(code *)param_2[4])(param_2,(ulonglong)uVar9,local_60,4);
            if (iVar5 != 4) goto LAB_180579497;
            uVar9 = *(uint *)((longlong)param_2 + 0xc);
            puVar7 = local_60;
LAB_180579280:
            uVar11 = CONCAT31(CONCAT21(CONCAT11(*puVar7,puVar7[1]),puVar7[2]),puVar7[3]);
          }
          uVar8 = uVar9 + 4;
          *(uint *)((longlong)param_2 + 0xc) = uVar8;
          if ((0x7fffffff < uVar11) || (*(uint *)(param_2 + 1) <= uVar9 + 5)) goto LAB_180579497;
          if ((code *)param_2[4] == (code *)0x0) {
            cVar1 = '\0';
            pcVar6 = (char *)(*param_2 + (ulonglong)uVar8);
            if (pcVar6 != (char *)0x0) goto LAB_1805792fe;
          }
          else {
            iVar5 = (*(code *)param_2[4])(param_2,uVar8,&param_5,2);
            if (iVar5 != 2) goto LAB_180579497;
            uVar8 = *(uint *)((longlong)param_2 + 0xc);
            pcVar6 = (char *)&param_5;
LAB_1805792fe:
            cVar1 = *pcVar6;
          }
          *(uint *)((longlong)param_2 + 0xc) = uVar8 + 2;
          if (cVar1 != '\0') {
            iVar5 = uVar11 - 2;
            if (uVar11 < 3) {
              iVar5 = 0;
            }
            if (cVar1 == cVar3) {
              iVar4 = iVar4 + iVar5;
              cVar1 = cVar3;
            }
            else {
              iVar2 = (int)local_58;
              if (uVar15 + 2 < iVar2 + 3U) goto LAB_180579497;
              *(char *)((ulonglong)(iVar2 + 3U) + (longlong)puVar16) = (char)((uint)iVar4 >> 0x18);
              *(char *)((local_58 & 0xffffffff) + (longlong)puVar16) = (char)iVar4;
              *(char *)((ulonglong)(iVar2 + 1) + (longlong)puVar16) = (char)((uint)iVar4 >> 8);
              *(char *)((ulonglong)(iVar2 + 2) + (longlong)puVar16) = (char)((uint)iVar4 >> 0x10);
              if (cVar1 == '\x05') break;
              if (uVar15 + 2 < uVar12 + 6) goto LAB_180579497;
              *(undefined1 *)(uVar14 + (longlong)puVar16) = 0x80;
              *(char *)((ulonglong)(uVar12 + 1) + (longlong)puVar16) = cVar1;
              local_58 = (ulonglong)(uVar12 + 2);
              *(undefined1 *)(local_58 + (longlong)puVar16) = 0;
              *(undefined1 *)((ulonglong)(uVar12 + 3) + (longlong)puVar16) = 0;
              *(undefined1 *)((ulonglong)(uVar12 + 4) + (longlong)puVar16) = 0;
              *(undefined1 *)((ulonglong)(uVar12 + 5) + (longlong)puVar16) = 0;
              uVar14 = (ulonglong)(uVar12 + 6);
              iVar4 = iVar5;
            }
            if (((uVar15 < (uint)uVar14) || (uVar12 = iVar5 + (uint)uVar14, uVar15 < uVar12)) ||
               (iVar5 = FUN_180578100(param_2,uVar14 + (longlong)puVar16), iVar5 != 0))
            goto LAB_180579497;
            uVar14 = (ulonglong)uVar12;
            cVar3 = cVar1;
          }
          uVar12 = (uint)uVar14;
          lVar13 = lVar13 + 1;
        } while (lVar13 < local_50);
      }
      if (uVar12 + 2 <= uVar15 + 2) {
        iVar5 = (int)local_58;
        *(undefined1 *)((ulonglong)uVar12 + (longlong)puVar16) = 0x80;
        *(undefined1 *)((ulonglong)(uVar12 + 1) + (longlong)puVar16) = 3;
        if (iVar5 + 3U <= uVar15 + 2) {
          *(char *)((local_58 & 0xffffffff) + (longlong)puVar16) = (char)iVar4;
          *(char *)((ulonglong)(iVar5 + 1) + (longlong)puVar16) = (char)((uint)iVar4 >> 8);
          *(char *)((ulonglong)(iVar5 + 2) + (longlong)puVar16) = (char)((uint)iVar4 >> 0x10);
          *(char *)((ulonglong)(iVar5 + 3U) + (longlong)puVar16) = (char)((uint)iVar4 >> 0x18);
          uVar14 = FUN_18057c7d0(param_1,puVar16,uVar12 + 2,local_5c,"type1",param_6);
          return uVar14;
        }
      }
LAB_180579497:
      (**(code **)(local_48 + 0x10))(local_48,puVar16);
    }
  }
LAB_1805794a6:
  return (ulonglong)uVar10;
}



