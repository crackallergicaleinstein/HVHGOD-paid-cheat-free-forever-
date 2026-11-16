// FUN_18062ce58 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18062ce58 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18062ce58(longlong param_1,ushort *param_2,ulonglong param_3,longlong param_4)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  DWORD DVar4;
  ushort *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auStack_b8 [32];
  char *local_98;
  undefined8 local_90;
  undefined8 local_88;
  int *local_80;
  int local_78 [2];
  ushort *local_70;
  undefined8 local_68;
  char local_60 [8];
  ulonglong local_58;
  
  local_58 = DAT_1808d5f00 ^ (ulonglong)auStack_b8;
  local_78[0] = 0;
  uVar8 = 0;
  if ((param_1 == 0) || (param_3 != 0)) {
    local_70 = param_2;
    if (param_2 == (ushort *)0x0) {
      *(undefined1 *)(param_4 + 0x30) = 1;
      *(undefined4 *)(param_4 + 0x2c) = 0x16;
      local_98 = (char *)0x0;
      local_90 = param_4;
      FUN_18060aa1c(0,0,0,0);
    }
    else {
      if (*(char *)(param_4 + 0x28) == '\0') {
        FUN_18060e230(param_4);
      }
      lVar6 = *(longlong *)(param_4 + 0x18);
      iVar3 = *(int *)(lVar6 + 0xc);
      if (iVar3 == 0xfde9) {
        local_68 = 0;
        local_98 = (char *)param_4;
        FUN_180634ea8(param_1,&local_70,param_3,&local_68);
      }
      else {
        if (param_1 == 0) {
          if (*(longlong *)(lVar6 + 0x138) == 0) {
            uVar2 = *local_70;
            while( true ) {
              if (uVar2 == 0) {
              }
              if (0xff < uVar2) break;
              local_70 = local_70 + 1;
              uVar2 = *local_70;
            }
            goto LAB_18062cf69;
          }
          local_80 = local_78;
          local_88 = 0;
          local_90 = (ulonglong)local_90._4_4_ << 0x20;
          local_98 = (char *)0x0;
          iVar3 = FUN_18062b638(iVar3,0,local_70,0xffffffff);
          if ((iVar3 != 0) && (local_78[0] == 0)) {
          }
        }
        else {
          if (*(longlong *)(lVar6 + 0x138) == 0) {
            if (param_3 == 0) {
            }
            while (*local_70 < 0x100) {
              *(char *)(param_1 + uVar8) = (char)*local_70;
              uVar2 = *local_70;
              local_70 = local_70 + 1;
              if (uVar2 == 0) {
              }
              uVar8 = uVar8 + 1;
              if (param_3 <= uVar8) {
              }
            }
LAB_18062cf69:
            *(undefined1 *)(param_4 + 0x30) = 1;
            *(undefined4 *)(param_4 + 0x2c) = 0x2a;
          }
          local_98 = (char *)param_1;
          if (*(int *)(lVar6 + 8) == 1) {
            if (param_3 != 0) {
              puVar5 = local_70;
              uVar8 = param_3;
              do {
                if (*puVar5 == 0) {
                  param_3 = ((longlong)puVar5 - (longlong)local_70 >> 1) + 1;
                  break;
                }
                puVar5 = puVar5 + 1;
                uVar8 = uVar8 - 1;
              } while (uVar8 != 0);
            }
            local_80 = local_78;
            local_88 = 0;
            local_90 = CONCAT44(local_90._4_4_,(int)param_3);
            iVar3 = FUN_18062b638(iVar3,0,local_70,param_3 & 0xffffffff);
            if ((iVar3 != 0) && (local_78[0] == 0)) {
            }
            goto LAB_18062cf69;
          }
          local_80 = local_78;
          local_88 = 0;
          local_90 = CONCAT44(local_90._4_4_,(int)param_3);
          iVar3 = FUN_18062b638(iVar3,0,local_70,0xffffffff);
          if (local_78[0] == 0) {
            if (iVar3 != 0) {
            }
            DVar4 = GetLastError();
            if (DVar4 == 0x7a) {
              if (param_3 == 0) {
              }
              uVar8 = 0;
              while( true ) {
                local_80 = local_78;
                local_88 = 0;
                iVar3 = *(int *)(*(longlong *)(param_4 + 0x18) + 8);
                if (5 < iVar3) {
                  iVar3 = 5;
                }
                local_90 = CONCAT44(local_90._4_4_,iVar3);
                local_98 = local_60;
                iVar3 = FUN_18062b638(*(undefined4 *)(*(longlong *)(param_4 + 0x18) + 0xc),0,
                                      local_70,1);
                if ((((iVar3 == 0) || (local_78[0] != 0)) || (iVar3 < 0)) ||
                   (uVar7 = (ulonglong)iVar3, 5 < uVar7)) break;
                if (param_3 < uVar7 + uVar8) {
                }
                lVar6 = 0;
                if (0 < (longlong)uVar7) {
                  do {
                    cVar1 = local_60[lVar6];
                    *(char *)(param_1 + uVar8) = cVar1;
                    if (cVar1 == '\0') {
                    }
                    lVar6 = lVar6 + 1;
                    uVar8 = uVar8 + 1;
                  } while (lVar6 < (longlong)uVar7);
                }
                local_70 = local_70 + 1;
                if (param_3 <= uVar8) {
                }
              }
            }
          }
        }
        *(undefined4 *)(param_4 + 0x2c) = 0x2a;
        *(undefined1 *)(param_4 + 0x30) = 1;
      }
    }
  }
}



