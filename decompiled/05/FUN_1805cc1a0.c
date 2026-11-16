// FUN_1805cc1a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805cc1a0 */

ulonglong FUN_1805cc1a0(longlong param_1,longlong param_2,undefined8 param_3,ulonglong param_4)

{
  uint uVar1;
  longlong lVar2;
  undefined4 uVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  longlong lVar8;
  int iVar9;
  ulonglong local_res20;
  
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  iVar9 = 0;
  *(undefined8 *)(param_2 + 0xd8) = 0;
  *(undefined4 *)(param_2 + 0xe0) = 0;
  local_res20 = param_4;
  uVar3 = FUN_1805780f0();
  iVar4 = FUN_180578540(param_1,&local_res20);
  do {
    if ((int)local_res20 != 0) {
LAB_1805cc3b2:
      return local_res20 & 0xffffffff;
    }
    if (iVar4 != 0x774f4646) {
      if (((((iVar4 != 0x10000) && (iVar4 != 0x74746366)) && (iVar4 != 0x4f54544f)) &&
          ((iVar4 != 0x74727565 && (iVar4 != 0x74797031)))) &&
         ((iVar4 != -0x5a949d9c && ((iVar4 != -0x5a938c8c && (iVar4 != 0x20000)))))) {
        return 2;
      }
      *(undefined4 *)(param_2 + 0xd8) = 0x74746366;
      if (iVar4 == 0x74746366) {
        uVar5 = FUN_180578280(param_1,&DAT_1806852c8,param_2 + 0xd8);
        local_res20 = CONCAT44(local_res20._4_4_,(int)uVar5);
        if ((int)uVar5 != 0) {
          return uVar5;
        }
        uVar1 = *(uint *)(param_2 + 0xe0);
        if (uVar1 == 0) {
          return 8;
        }
        if (*(uint *)(param_1 + 8) >> 5 < uVar1) {
          return 10;
        }
        uVar6 = FUN_18057ac40(uVar6,4,0,uVar1,0,&local_res20);
        *(undefined8 *)(param_2 + 0xe8) = uVar6;
        if ((int)local_res20 == 0) {
          uVar5 = FUN_180577bf0(param_1,*(int *)(param_2 + 0xe0) << 2);
          local_res20 = CONCAT44(local_res20._4_4_,(int)uVar5);
          if ((int)uVar5 != 0) {
            return uVar5;
          }
          if (0 < *(int *)(param_2 + 0xe0)) {
            lVar8 = 0;
            do {
              lVar2 = *(longlong *)(param_2 + 0xe8);
              uVar3 = FUN_180577e30(param_1);
              *(undefined4 *)(lVar2 + lVar8) = uVar3;
              lVar8 = lVar8 + 4;
              iVar9 = iVar9 + 1;
            } while (iVar9 < *(int *)(param_2 + 0xe0));
          }
          FUN_180577d30(param_1);
        }
      }
      else {
        *(undefined4 *)(param_2 + 0xdc) = 0x10000;
        *(undefined4 *)(param_2 + 0xe0) = 1;
        puVar7 = (undefined4 *)FUN_18057abe0(uVar6,4,&local_res20);
        *(undefined4 **)(param_2 + 0xe8) = puVar7;
        if ((int)local_res20 == 0) {
          *puVar7 = uVar3;
        }
      }
      goto LAB_1805cc3b2;
    }
    uVar5 = FUN_1805788b0(param_1,uVar3);
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    local_res20._0_4_ = (int)uVar5;
    uVar5 = FUN_1805cec10(param_1,param_2);
    local_res20 = CONCAT44(local_res20._4_4_,(int)uVar5);
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    param_1 = *(longlong *)(param_2 + 0xa0);
    uVar3 = FUN_1805780f0(param_1);
    iVar4 = FUN_180578540(param_1,&local_res20);
  } while( true );
}



