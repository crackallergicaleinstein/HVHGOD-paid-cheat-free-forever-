// FUN_18059a2e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18059a2e0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18059a2e0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  byte bVar2;
  longlong lVar3;
  char *_Str2;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  byte *pbVar8;
  int iVar9;
  byte *pbVar10;
  int iVar11;
  longlong *plVar12;
  undefined1 auStack_b8 [32];
  int local_98;
  char local_94;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  byte *local_70;
  ulonglong local_68;
  ulonglong local_60;
  longlong local_58;
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_b8;
  pbVar8 = (byte *)param_2[2];
  lVar3 = *param_2;
  plVar1 = param_2 + 0x3a;
  local_90 = param_2[4];
  iVar11 = 0;
  local_50 = *(undefined8 **)(param_1 + 0x2a0);
  local_94 = '\0';
  local_68 = 0;
  local_88 = param_1;
  local_70 = pbVar8;
  uVar4 = (*(code *)param_2[9])(param_2);
  if (-1 < (int)uVar4) {
    uVar7 = (longlong)pbVar8 - lVar3 >> 3;
    local_60 = uVar7 & 0xffffffff;
    if ((longlong)(int)uVar4 <= (longlong)uVar7) {
      local_60 = (ulonglong)uVar4;
    }
    if ((int)local_60 == 0) {
    }
    if ((int)param_2[3] != 0) {
    }
    if ((int)param_2[0x23] == 0) {
      iVar9 = (int)local_60 + 6;
      local_98 = (**(code **)*local_50)(param_2 + 0x2f,iVar9,local_90);
      lVar3 = local_90;
      if (((local_98 != 0) ||
          (local_98 = (**(code **)*local_50)(param_2 + 0x24,iVar9,local_90), local_98 != 0)) ||
         (local_98 = (**(code **)*local_50)(plVar1,4,lVar3), local_98 != 0)) goto LAB_18059a946;
    }
    (*(code *)param_2[7])(param_2);
    pbVar10 = (byte *)*param_2;
    if (pbVar10 < pbVar8) {
      local_80 = 0;
      do {
        if (pbVar10 + 3 < pbVar8) {
          bVar2 = pbVar10[3];
          if (((bVar2 < 0x3d) && ((0x1000832100003601U >> ((ulonglong)bVar2 & 0x3f) & 1) != 0)) ||
             (((byte)(bVar2 - 0x3e) < 0x40 &&
              ((0xa0000000a0000001U >> ((ulonglong)(byte)(bVar2 - 0x3e) & 0x3f) & 1) != 0)))) {
            if (*pbVar10 == 100) {
              if (((pbVar10[1] == 0x65) && (pbVar10[2] == 0x66)) && (iVar11 != 0))
              goto LAB_18059a6a3;
            }
            else if (((*pbVar10 == 0x65) && (pbVar10[1] == 0x6e)) && (pbVar10[2] == 100)) break;
          }
        }
        (*(code *)param_2[8])(param_2);
        if (pbVar8 <= (byte *)*param_2) goto LAB_18059a941;
        if ((int)param_2[3] != 0) {
        }
        if (*pbVar10 == 0x2f) {
          if (pbVar8 <= pbVar10 + 2) goto LAB_18059a941;
          pbVar10 = pbVar10 + 1;
          pbVar8 = (byte *)param_2[2];
          uVar4 = (int)(byte *)*param_2 - (int)pbVar10;
          local_58 = *(longlong *)(*(longlong *)(local_88 + 0xd0) + 0x50);
          (*(code *)param_2[7])(param_2);
          if ((pbVar8 <= (byte *)*param_2) || (9 < *(byte *)*param_2 - 0x30)) {
LAB_18059a839:
            if (local_58 == 0) {
              *(undefined4 *)(param_2 + 3) = 3;
            }
          }
          uVar5 = (*(code *)param_2[9])(param_2);
          (*(code *)param_2[8])(param_2);
          local_78 = *param_2 + 1;
          if (((int)uVar5 < 0) || ((longlong)pbVar8 - local_78 <= (longlong)(int)uVar5))
          goto LAB_18059a839;
          *param_2 = (longlong)(int)(uVar5 + 1) + *param_2;
          if ((int)param_2[3] != 0) {
          }
          if ((int)param_2[0x23] == 0) {
            local_98 = (*(code *)param_2[0x2d])(param_2 + 0x24,iVar11,pbVar10,uVar4 + 1);
            lVar3 = local_80;
            if (local_98 != 0) goto LAB_18059a946;
            *(undefined1 *)((ulonglong)uVar4 + *(longlong *)(local_80 + param_2[0x28])) = 0;
            if ((*pbVar10 == 0x2e) &&
               (iVar9 = strcmp(".notdef",*(char **)(param_2[0x28] + local_80)), iVar9 == 0)) {
              local_68 = CONCAT44(local_68._4_4_,iVar11);
              local_94 = '\x01';
            }
            if (((int)*(uint *)(local_88 + 0x118) < 0) || ((int)local_60 + 5 <= iVar11)) {
              local_98 = (*(code *)param_2[0x38])(param_2 + 0x2f,iVar11,local_78,uVar5);
            }
            else {
              if (uVar5 <= *(uint *)(local_88 + 0x118)) goto LAB_18059a941;
              lVar6 = FUN_18057ab40(local_90,local_78,uVar5,&local_98);
              if (local_98 != 0) goto LAB_18059a946;
              (*(code *)local_50[4])(lVar6,uVar5,0x10ea);
              local_98 = (*(code *)param_2[0x38])
                                   (param_2 + 0x2f,iVar11,lVar6 + *(int *)(local_88 + 0x118),
                                    uVar5 - *(int *)(local_88 + 0x118));
              FUN_18057abd0(local_90,lVar6);
            }
            if (local_98 != 0) goto LAB_18059a946;
            iVar11 = iVar11 + 1;
            local_80 = lVar3 + 8;
          }
          pbVar8 = local_70;
        }
        (*(code *)param_2[7])(param_2);
        pbVar10 = (byte *)*param_2;
      } while (pbVar10 < pbVar8);
      if (iVar11 != 0) {
LAB_18059a6a3:
        plVar12 = param_2 + 0x24;
        *(int *)(param_2 + 0x23) = iVar11;
        if (local_94 == '\0') {
          local_50 = (undefined8 *)CONCAT35(local_50._5_3_,0xe0de1f78b);
          local_98 = (*(code *)param_2[0x43])
                               (plVar1,0,*(undefined8 *)param_2[0x28],*(undefined4 *)param_2[0x29]);
          if (local_98 == 0) {
            local_98 = (*(code *)param_2[0x43])
                                 (plVar1,1,*(undefined8 *)param_2[0x33],*(undefined4 *)param_2[0x34]
                                 );
            if ((((local_98 == 0) &&
                 (local_98 = (*(code *)param_2[0x2d])(plVar12,0,".notdef",8), local_98 == 0)) &&
                (local_98 = (*(code *)param_2[0x38])(param_2 + 0x2f,0,&local_50,5), local_98 == 0))
               && ((local_98 = (*(code *)param_2[0x2d])
                                         (plVar12,iVar11,*(undefined8 *)param_2[0x3e],
                                          *(undefined4 *)param_2[0x3f]), local_98 == 0 &&
                   (local_98 = (*(code *)param_2[0x38])
                                         (param_2 + 0x2f,iVar11,*(undefined8 *)(param_2[0x3e] + 8),
                                          *(undefined4 *)(param_2[0x3f] + 4)), local_98 == 0)))) {
              *(int *)(param_2 + 0x23) = (int)param_2[0x23] + 1;
            }
          }
        }
        else {
          _Str2 = *(char **)param_2[0x28];
          iVar11 = strcmp(".notdef",_Str2);
          if (iVar11 == 0) {
          }
          local_98 = (*(code *)param_2[0x43])(plVar1,0,_Str2,*(undefined4 *)param_2[0x29]);
          if (local_98 == 0) {
            local_98 = (*(code *)param_2[0x43])
                                 (plVar1,1,*(undefined8 *)param_2[0x33],*(undefined4 *)param_2[0x34]
                                 );
            uVar7 = local_68;
            if (local_98 == 0) {
              lVar3 = (longlong)(int)local_68 * 8;
              lVar6 = (longlong)(int)local_68 * 4;
              local_98 = (*(code *)param_2[0x43])
                                   (plVar1,2,*(undefined8 *)(param_2[0x28] + lVar3),
                                    *(undefined4 *)(lVar6 + param_2[0x29]));
              if (((local_98 == 0) &&
                  (local_98 = (*(code *)param_2[0x43])
                                        (plVar1,3,*(undefined8 *)(lVar3 + param_2[0x33]),
                                         *(undefined4 *)(param_2[0x34] + lVar6)), local_98 == 0)) &&
                 ((local_98 = (*(code *)param_2[0x2d])
                                        (plVar12,uVar7 & 0xffffffff,*(undefined8 *)param_2[0x3e],
                                         *(undefined4 *)param_2[0x3f]), local_98 == 0 &&
                  (((local_98 = (*(code *)param_2[0x38])
                                          (param_2 + 0x2f,uVar7 & 0xffffffff,
                                           *(undefined8 *)(param_2[0x3e] + 8),
                                           *(undefined4 *)(param_2[0x3f] + 4)), local_98 == 0 &&
                    (local_98 = (*(code *)param_2[0x2d])
                                          (plVar12,0,*(undefined8 *)(param_2[0x3e] + 0x10),
                                           *(undefined4 *)(param_2[0x3f] + 8)), local_98 == 0)) &&
                   (local_98 = (*(code *)param_2[0x38])
                                         (param_2 + 0x2f,0,*(undefined8 *)(param_2[0x3e] + 0x18),
                                          *(undefined4 *)(param_2[0x3f] + 0xc)), local_98 == 0))))))
              {
              }
            }
          }
        }
        goto LAB_18059a946;
      }
    }
  }
LAB_18059a941:
  local_98 = 3;
LAB_18059a946:
  *(int *)(param_2 + 3) = local_98;
}



