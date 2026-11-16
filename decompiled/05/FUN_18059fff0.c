// FUN_18059fff0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18059fff0 */

int FUN_18059fff0(undefined8 param_1,longlong param_2,uint param_3,undefined8 *param_4,
                 undefined8 param_5,char param_6,int param_7)

{
  char cVar1;
  byte bVar2;
  char cVar3;
  undefined1 uVar4;
  ushort uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  undefined8 uVar10;
  uint uVar11;
  int iVar12;
  longlong *plVar13;
  ulonglong uVar14;
  undefined4 uVar15;
  int local_res8 [2];
  uint local_res10;
  undefined8 in_stack_ffffffffffffff48;
  undefined4 uVar17;
  undefined8 uVar16;
  undefined8 in_stack_ffffffffffffff50;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  longlong lStack_70;
  longlong local_68 [2];
  uint local_58;
  undefined8 local_48;
  longlong local_40;
  
  uVar17 = (undefined4)((ulonglong)in_stack_ffffffffffffff48 >> 0x20);
  uVar15 = (undefined4)((ulonglong)in_stack_ffffffffffffff50 >> 0x20);
  uVar10 = *(undefined8 *)(param_2 + 0x30);
  FUN_18063ab10(param_4,0,0x1138);
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  lStack_70 = 0;
  iVar6 = FUN_1805780f0(param_2);
  param_4[2] = uVar10;
  cVar1 = (char)param_7;
  *(char *)((longlong)param_4 + 0x2c) = (char)param_7;
  *param_4 = param_1;
  param_4[1] = param_2;
  *(int *)(param_4 + 3) = iVar6;
  local_res8[0] = FUN_180578280(param_2,&DAT_1806708d0,param_4);
  if (local_res8[0] != 0) goto LAB_1805a010d;
  if (cVar1 == '\0') {
    bVar2 = FUN_180578210(param_2,local_res8);
    if (local_res8[0] != 0) goto LAB_1805a010d;
    if (((*(char *)((longlong)param_4 + 0x24) == '\x01') &&
        (3 < *(byte *)((longlong)param_4 + 0x26))) && (bVar2 < 5)) goto LAB_1805a00df;
  }
  else if ((*(char *)((longlong)param_4 + 0x24) == '\x02') &&
          (4 < *(byte *)((longlong)param_4 + 0x26))) {
    uVar5 = FUN_180578720(param_2,local_res8);
    *(uint *)(param_4 + 5) = (uint)uVar5;
    if (local_res8[0] != 0) goto LAB_1805a010d;
LAB_1805a00df:
    local_res8[0] = FUN_1805788b0(param_2,(uint)*(byte *)((longlong)param_4 + 0x26) + iVar6);
    if (local_res8[0] == 0) {
      if (cVar1 == '\0') {
        local_res8[0] = FUN_1805a0cb0(param_4 + 6,param_2,0,0);
        if (local_res8[0] != 0) goto joined_r0x0001805a00fb;
        if ((1 < *(uint *)(param_4 + 8)) &&
           (*(uint *)((longlong)param_4 + 0x4c) < *(uint *)(param_4 + 8))) {
          local_res8[0] = 3 - (uint)(param_6 != '\0');
          goto LAB_1805a010d;
        }
        local_res8[0] = FUN_1805a0cb0(param_4 + 0xa4,param_2,0,0);
        if ((local_res8[0] != 0) ||
           (((local_res8[0] = FUN_1805a0cb0(&local_98,param_2,1,0), local_res8[0] != 0 ||
             (local_res8[0] = FUN_1805a0cb0(param_4 + 0x12,param_2,1,0), local_res8[0] != 0)) ||
            (local_res8[0] = FUN_1805a0a50(&local_98,param_4 + 0xb9,param_4 + 0xba,param_4 + 0xbb),
            local_res8[0] != 0)))) goto LAB_1805a010d;
        if (*(uint *)(param_4 + 8) <= *(uint *)(param_4 + 0xa6)) goto LAB_1805a02c7;
      }
      else {
        param_4[0xa4] = 0;
        param_4[0xa5] = 0;
        param_4[0xa6] = 0;
        param_4[0xa7] = 0;
        param_4[0xa8] = 0;
        param_4[0xa9] = 0;
        uVar7 = FUN_1805780f0(param_2);
        *(undefined4 *)((longlong)param_4 + 0x53c) = *(undefined4 *)(param_4 + 5);
        *(undefined4 *)(param_4 + 0xa7) = uVar7;
        local_res8[0] = FUN_180578910(param_2);
        if ((local_res8[0] != 0) ||
           (local_res8[0] = FUN_1805a0cb0(param_4 + 0x12,param_2,1,cVar1), local_res8[0] != 0))
        goto LAB_1805a010d;
LAB_1805a02c7:
        *(undefined4 *)(param_4 + 0xb8) = (undefined4)local_88;
        if (param_6 == '\0') {
          local_res10 = 0;
          if (1 < *(uint *)(param_4 + 8)) goto LAB_1805a06bb;
        }
        else {
          local_res10 = param_3 & 0xffff;
          if ((0 < (int)param_3) && (*(uint *)(param_4 + 8) <= local_res10)) {
            local_res8[0] = 6;
            goto LAB_1805a010d;
          }
          *(undefined4 *)((longlong)param_4 + 0x1c) = *(undefined4 *)(param_4 + 8);
        }
        if ((int)param_3 < 0) goto LAB_1805a010d;
        uVar7 = 0x1000;
        if (cVar1 != '\0') {
          uVar7 = 0x3000;
        }
        uVar16 = CONCAT44(uVar17,iVar6);
        local_res8[0] =
             FUN_1805a2840(param_4 + 0xbc,param_4 + 0xa4,local_res10,param_2,uVar16,
                           CONCAT44(uVar15,uVar7),param_4,param_5);
        uVar17 = (undefined4)((ulonglong)uVar16 >> 0x20);
        if (((local_res8[0] != 0) ||
            (local_res8[0] = FUN_1805788b0(param_2,*(int *)((longlong)param_4 + 0x64c) + iVar6),
            local_res8[0] != 0)) ||
           (local_res8[0] = FUN_1805a0cb0(param_4 + 0x9e,param_2,0,cVar1), local_res8[0] != 0))
        goto LAB_1805a010d;
        if ((*(int *)(param_4 + 0xcc) == 0xffff) && (cVar1 == '\0')) {
          *(undefined4 *)(param_4 + 0x115) = 0;
          local_res8[0] = 0;
        }
        else {
          local_res8[0] =
               FUN_1805a2c60(param_4 + 0x222,param_2,iVar6,*(undefined4 *)(param_4 + 0xd2));
          if (((local_res8[0] != 0) ||
              (local_res8[0] = FUN_1805788b0(param_2,*(int *)(param_4 + 0xd0) + iVar6),
              local_res8[0] != 0)) ||
             (local_res8[0] = FUN_1805a0cb0(local_68,param_2,0,cVar1), local_res8[0] != 0))
          goto LAB_1805a010d;
          if (local_58 < 0x101) {
            uVar16 = 0;
            *(uint *)(param_4 + 0x115) = local_58;
            lVar9 = FUN_18057ad10(uVar10,0x2c8,0,local_58,0,local_res8);
            uVar17 = (undefined4)((ulonglong)uVar16 >> 0x20);
            if (local_res8[0] == 0) {
              if (local_58 != 0) {
                plVar13 = param_4 + 0x116;
                uVar14 = (ulonglong)local_58;
                do {
                  *plVar13 = lVar9;
                  plVar13 = plVar13 + 1;
                  lVar9 = lVar9 + 0x2c8;
                  uVar14 = uVar14 - 1;
                } while (uVar14 != 0);
              }
              uVar14 = 0;
              if (local_58 != 0) {
                uVar15 = 0x1000;
                iVar12 = local_res8[0];
                if (cVar1 != '\0') {
                  uVar15 = 0x4000;
                }
                do {
                  local_res8[0] = iVar12;
                  uVar16 = CONCAT44((int)((ulonglong)uVar16 >> 0x20),iVar6);
                  local_res8[0] =
                       FUN_1805a2840(param_4[uVar14 + 0x116],local_68,uVar14,param_2,uVar16,uVar15,
                                     param_4,param_5);
                  uVar17 = (undefined4)((ulonglong)uVar16 >> 0x20);
                  if (local_res8[0] != 0) goto LAB_1805a0590;
                  uVar11 = (int)uVar14 + 1;
                  uVar14 = (ulonglong)uVar11;
                  iVar12 = 0;
                } while (uVar11 < local_58);
              }
              if ((cVar1 == '\0') || (1 < local_58)) {
                iVar12 = *(int *)(param_4 + 0xa0);
                param_7 = FUN_1805788b0(param_2,*(int *)((longlong)param_4 + 0x684) + iVar6);
                iVar8 = param_7;
                if (param_7 == 0) {
                  cVar3 = FUN_180578210(param_2,&param_7);
                  iVar8 = param_7;
                  if (param_7 == 0) {
                    *(char *)(param_4 + 0x216) = cVar3;
                    *(undefined4 *)(param_4 + 0x219) = 0;
                    if (cVar3 == '\0') {
LAB_1805a0574:
                      *(int *)(param_4 + 0x218) = iVar12;
                      iVar8 = FUN_180577d80(param_2,iVar12,param_4 + 0x217);
                    }
                    else if (cVar3 == '\x03') {
                      uVar5 = FUN_180578720(param_2,&param_7);
                      iVar8 = param_7;
                      if (param_7 == 0) {
                        if (uVar5 != 0) {
                          iVar12 = (uint)uVar5 * 3 + 2;
                          goto LAB_1805a0574;
                        }
                        iVar8 = 3;
                      }
                    }
                    else {
                      iVar8 = 3;
                    }
                  }
                }
                local_res8[0] = iVar8;
              }
            }
          }
LAB_1805a0590:
          if (local_68[0] != 0) {
            uVar10 = *(undefined8 *)(local_68[0] + 0x30);
            if (local_40 != 0) {
              FUN_180578860(local_68[0],&local_40);
            }
            FUN_18057abd0(uVar10,local_48);
          }
          if (local_res8[0] != 0) goto LAB_1805a010d;
        }
        if (*(int *)((longlong)param_4 + 0x64c) != 0) {
          *(undefined4 *)(param_4 + 4) = *(undefined4 *)(param_4 + 0xa0);
          local_res8[0] = FUN_1805a0a50(param_4 + 0x12,param_4 + 0xb7,0,0);
          if (local_res8[0] == 0) {
            if ((cVar1 == '\0') && (*(int *)(param_4 + 4) != 0)) {
              if ((*(int *)(param_4 + 0xcc) == 0xffff) || (param_6 == '\0')) {
                uVar4 = 0;
              }
              else {
                uVar4 = 1;
              }
              local_res8[0] =
                   FUN_18059f5e0(param_4 + 0x9a,*(int *)(param_4 + 4),param_2,iVar6,
                                 CONCAT44(uVar17,*(undefined4 *)((longlong)param_4 + 0x644)),uVar4);
              if ((local_res8[0] != 0) ||
                 ((*(int *)(param_4 + 0xcc) == 0xffff &&
                  (local_res8[0] =
                        FUN_18059f900(param_4 + 0x18,param_4 + 0x9a,*(undefined4 *)(param_4 + 4),
                                      param_2,iVar6,*(undefined4 *)(param_4 + 0xc9)),
                  local_res8[0] != 0)))) goto LAB_1805a010d;
            }
            uVar10 = FUN_1805a09a0(param_4,local_res10);
            param_4[0xb6] = uVar10;
          }
          goto LAB_1805a010d;
        }
      }
LAB_1805a06bb:
      local_res8[0] = 3;
      goto LAB_1805a010d;
    }
joined_r0x0001805a00fb:
    if (param_6 == '\0') goto LAB_1805a010d;
  }
  local_res8[0] = 2;
LAB_1805a010d:
  if (local_98 == 0) {
    return local_res8[0];
  }
  uVar10 = *(undefined8 *)(local_98 + 0x30);
  if (lStack_70 != 0) {
    FUN_180578860(local_98,&lStack_70);
  }
  FUN_18057abd0(uVar10,local_78);
  return local_res8[0];
}



