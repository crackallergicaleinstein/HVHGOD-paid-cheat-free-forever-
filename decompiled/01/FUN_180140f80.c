// FUN_180140f80 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180140f80 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_180140f80(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined1 local_c8 [56];
  undefined1 local_90 [32];
  undefined1 local_70 [32];
  undefined1 local_50 [40];
  
  uVar14 = 0;
  uVar15 = 0;
  lVar11 = 0;
  lVar13 = 0;
  lVar9 = 0;
  uVar12 = 0;
  if (param_2[2] != 0) {
    do {
      uVar4 = param_2[3];
      puVar5 = param_2;
      if (0xf < uVar4) {
        puVar5 = (undefined8 *)*param_2;
      }
      bVar1 = *(byte *)((longlong)puVar5 + uVar12);
      bVar2 = *(byte *)((longlong)&PTR_1806fe780 + (ulonglong)bVar1);
      if ((char)uVar15 == '\0') {
        uVar14 = 0xffU >> (bVar2 & 0x1f) & (uint)bVar1;
      }
      else {
        uVar14 = bVar1 & 0x3f | uVar14 << 6;
      }
      bVar2 = (&DAT_1806fe880)[uVar15 * 0x10 + (ulonglong)bVar2];
      uVar15 = (ulonglong)bVar2;
      if (bVar2 == 0) {
        switch(uVar14) {
        case 8:
          *(undefined2 *)(lVar11 + 0x5a + (longlong)param_1) = 0x625c;
          lVar11 = lVar11 + 2;
          break;
        case 9:
          *(undefined2 *)(lVar11 + 0x5a + (longlong)param_1) = 0x745c;
          lVar11 = lVar11 + 2;
          break;
        case 10:
          *(undefined2 *)(lVar11 + 0x5a + (longlong)param_1) = 0x6e5c;
          lVar11 = lVar11 + 2;
          break;
        default:
          if (uVar14 < 0x20) {
            FUN_18015abc0((longlong)param_1 + lVar11 + 0x5a,7,"\\u%04x",uVar14 & 0xffff);
            lVar11 = lVar11 + 6;
          }
          else {
            puVar5 = param_2;
            if (0xf < uVar4) {
              puVar5 = (undefined8 *)*param_2;
            }
            *(undefined1 *)(lVar11 + 0x5a + (longlong)param_1) =
                 *(undefined1 *)((longlong)puVar5 + uVar12);
            lVar11 = lVar11 + 1;
          }
          break;
        case 0xc:
          *(undefined2 *)(lVar11 + 0x5a + (longlong)param_1) = 0x665c;
          lVar11 = lVar11 + 2;
          break;
        case 0xd:
          *(undefined2 *)(lVar11 + 0x5a + (longlong)param_1) = 0x725c;
          lVar11 = lVar11 + 2;
          break;
        case 0x22:
          *(undefined2 *)(lVar11 + 0x5a + (longlong)param_1) = 0x225c;
          lVar11 = lVar11 + 2;
          break;
        case 0x5c:
          *(undefined2 *)(lVar11 + 0x5a + (longlong)param_1) = 0x5c5c;
          lVar11 = lVar11 + 2;
        }
        if (0x200U - lVar11 < 0xd) {
          (**(code **)(*(longlong *)*param_1 + 8))
                    ((longlong *)*param_1,(longlong)param_1 + 0x5a,lVar11);
          lVar11 = 0;
        }
        lVar9 = 0;
        lVar13 = lVar11;
      }
      else if (bVar2 == 1) {
        iVar3 = *(int *)(param_1 + 0x50);
        if (iVar3 == 0) {
          FUN_180151a70(local_50,(ulonglong)bVar1);
          FUN_18015b9b0(local_90,uVar12);
          uVar7 = FUN_18014fda0(local_70);
          FUN_1800f6ca0(local_c8,0x13c,uVar7);
                    /* WARNING: Subroutine does not return */
          FUN_180606630(local_c8,&DAT_1808d1050);
        }
        if ((iVar3 == 1) || (iVar3 == 2)) {
          if (lVar9 != 0) {
            uVar12 = uVar12 - 1;
          }
          lVar11 = lVar13;
          if (iVar3 == 1) {
            lVar9 = (longlong)param_1 + 0x5a;
            *(undefined1 *)(lVar9 + lVar13) = 0xef;
            *(undefined1 *)(lVar13 + 0x5b + (longlong)param_1) = 0xbf;
            *(undefined1 *)(lVar9 + lVar13 + 2) = 0xbd;
            lVar11 = lVar13 + 3;
            if (0x1ffU - (lVar13 + 2) < 0xd) {
              (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,lVar9,lVar11);
              lVar11 = 0;
            }
          }
          lVar9 = 0;
          uVar15 = 0;
          lVar13 = lVar11;
        }
      }
      else {
        puVar5 = param_2;
        if (0xf < uVar4) {
          puVar5 = (undefined8 *)*param_2;
        }
        *(undefined1 *)(lVar11 + 0x5a + (longlong)param_1) =
             *(undefined1 *)((longlong)puVar5 + uVar12);
        lVar11 = lVar11 + 1;
        lVar9 = lVar9 + 1;
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < (ulonglong)param_2[2]);
    if ((char)uVar15 == '\0') {
      if (lVar11 == 0) {
        return;
      }
      plVar8 = (longlong *)*param_1;
      puVar10 = (undefined *)((longlong)param_1 + 0x5a);
      lVar9 = *plVar8;
      lVar13 = lVar11;
    }
    else {
      iVar3 = *(int *)(param_1 + 0x50);
      if (iVar3 == 0) {
        puVar6 = (undefined1 *)FUN_180151ba0(param_2);
        FUN_180151a70(local_70,*puVar6);
        uVar7 = FUN_18014fe70(local_90);
        FUN_1800f6ca0(local_c8,0x13c,uVar7);
                    /* WARNING: Subroutine does not return */
        FUN_180606630(local_c8,&DAT_1808d1050);
      }
      if (iVar3 == 1) {
        (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,(longlong)param_1 + 0x5a);
        plVar8 = (longlong *)*param_1;
        lVar9 = *plVar8;
        lVar13 = 3;
        puVar10 = &DAT_1806dd558;
      }
      else {
        if (iVar3 != 2) {
          return;
        }
        plVar8 = (longlong *)*param_1;
        puVar10 = (undefined *)((longlong)param_1 + 0x5a);
        lVar9 = *plVar8;
      }
    }
    (**(code **)(lVar9 + 8))(plVar8,puVar10,lVar13);
  }
  return;
}



