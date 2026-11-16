// FUN_18020c3d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18020c3d0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_18020c3d0(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  byte bVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined1 auStack_b8 [48];
  longlong local_88;
  undefined4 local_80;
  undefined4 local_7c;
  longlong *local_78;
  longlong *local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined8 local_58;
  int local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  int local_40;
  undefined8 local_3c;
  undefined4 local_34;
  undefined4 local_30;
  undefined8 local_2c;
  ulonglong local_20;
  
  lVar14 = DAT_180bbab70;
  local_20 = DAT_1808d5f00 ^ (ulonglong)auStack_b8;
  if ((DAT_180bbab70 == 0) || (plVar1 = (longlong *)param_2[3], plVar1 == (longlong *)param_2[4])) {
    *(undefined1 *)(param_2 + 2) = 4;
  }
  else {
    local_40 = (int)param_2[7];
    if ((local_40 == 0x47) || (local_40 == 0x50)) {
      bVar15 = 1;
    }
    else {
      bVar15 = 0;
    }
    if ((local_40 - 0x4dU < 0x16) && ((0x240001U >> (local_40 - 0x4dU & 0x1f) & 1) != 0)) {
      bVar7 = true;
    }
    else {
      bVar7 = false;
    }
    if ((bVar15 != 0) || (bVar7)) {
      local_50 = (int)param_2[6];
      uVar8 = local_50 + 3U >> 2;
      uVar9 = 1;
      if (1 < uVar8) {
        uVar9 = uVar8;
      }
      uVar13 = (ulonglong)(uVar9 * ((bVar15 ^ 1) + 1) * 8);
      if ((bVar15 != 0) || (bVar7)) {
        local_4c = *(uint *)((longlong)param_2 + 0x34);
        uVar9 = local_4c + 3 >> 2;
        uVar11 = 1;
        if (1 < uVar9) {
          uVar11 = (ulonglong)uVar9;
        }
      }
      else {
        local_4c = *(uint *)((longlong)param_2 + 0x34);
        uVar11 = (ulonglong)local_4c;
      }
    }
    else {
      local_50 = (int)param_2[6];
      uVar13 = (ulonglong)(uint)(local_50 * 4);
      local_4c = *(uint *)((longlong)param_2 + 0x34);
      uVar11 = (ulonglong)local_4c;
    }
    local_80 = (undefined4)uVar13;
    if ((ulonglong)(plVar1[1] - *plVar1) < uVar11 * uVar13) {
      *(undefined1 *)(param_2 + 2) = 4;
    }
    else {
      local_3c = 1;
      local_2c = 0;
      local_48 = 1;
      local_44 = 1;
      local_34 = 1;
      local_30 = 8;
      local_70 = (longlong *)0x0;
      local_88 = *plVar1;
      local_7c = 0;
      iVar10 = (**(code **)(*(longlong *)DAT_180bbab70 + 0x28))
                         (DAT_180bbab70,&local_50,&local_88,&local_70);
      if (iVar10 < 0) {
        *(undefined1 *)(param_2 + 2) = 4;
      }
      else {
        local_64 = 4;
        local_58 = 0;
        local_68 = (undefined4)param_2[7];
        local_5c = 1;
        local_78 = (longlong *)0x0;
        iVar10 = (**(code **)(*(longlong *)lVar14 + 0x38))(lVar14,local_70,&local_68,&local_78);
        plVar1 = local_78;
        if (iVar10 < 0) {
          *(undefined1 *)(param_2 + 2) = 4;
        }
        else {
          local_78 = (longlong *)0x0;
          plVar2 = (longlong *)*param_2;
          *param_2 = (longlong)plVar1;
          if (plVar2 != (longlong *)0x0) {
            (**(code **)(*plVar2 + 0x10))();
          }
          *(int *)(param_2 + 1) = (int)param_2[6];
          *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)param_2 + 0x34);
          lVar14 = param_2[4];
          lVar12 = param_2[3];
          if (lVar12 != lVar14) {
            do {
              FUN_180113710(lVar12);
              lVar12 = lVar12 + 0x18;
            } while (lVar12 != lVar14);
            lVar14 = param_2[3];
            param_2[4] = lVar14;
          }
          if (lVar14 != param_2[5]) {
            if (param_2[3] == lVar14) {
              FUN_180210a20(param_2 + 3);
            }
            else {
              lVar14 = lVar14 - param_2[3];
              lVar14 = lVar14 / 6 + (lVar14 >> 0x3f);
              uVar13 = (lVar14 >> 2) - (lVar14 >> 0x3f);
              if (0xaaaaaaaaaaaaaaa < uVar13) {
                    /* WARNING: Subroutine does not return */
                FUN_18015bc80();
              }
              lVar14 = FUN_18015bca0(uVar13 * 0x18);
              puVar3 = (undefined8 *)param_2[4];
              puVar16 = (undefined8 *)param_2[3];
              if (puVar16 != puVar3) {
                puVar17 = (undefined8 *)(lVar14 + 0x10);
                do {
                  uVar4 = puVar16[2];
                  puVar16[2] = 0;
                  uVar5 = puVar16[1];
                  puVar16[1] = 0;
                  uVar6 = *puVar16;
                  *puVar16 = 0;
                  puVar17[-2] = uVar6;
                  puVar17[-1] = uVar5;
                  *puVar17 = uVar4;
                  puVar17 = puVar17 + 3;
                  puVar16 = puVar16 + 3;
                } while (puVar16 != puVar3);
              }
              FUN_180211f60(param_2 + 3,lVar14,uVar13,uVar13);
            }
          }
          *(undefined1 *)(param_2 + 2) = 3;
        }
        plVar1 = local_78;
        if (local_78 != (longlong *)0x0) {
          local_78 = (longlong *)0x0;
          (**(code **)(*plVar1 + 0x10))();
        }
      }
      plVar1 = local_70;
      if (local_70 != (longlong *)0x0) {
        local_70 = (longlong *)0x0;
        (**(code **)(*plVar1 + 0x10))();
      }
    }
  }
}



