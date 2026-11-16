// FUN_180227b20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180227b20 */

ulonglong FUN_180227b20(longlong param_1,undefined4 param_2,ulonglong param_3,undefined8 param_4)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  ULONGLONG UVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  char local_a8 [16];
  undefined8 *local_98;
  undefined1 *local_90;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  
  uVar5 = DAT_180c63120;
  if ((((DAT_180c63119 != '\0') && (DAT_1808e6c00 != '\0')) &&
      (UVar4 = GetTickCount64(), UVar4 < uVar5)) && ((param_3 != 0 && (DAT_180c630e8 == param_3))))
  {
    FUN_1802269c0(param_1,param_2,param_3,param_4);
  }
  uVar9 = DAT_180c63120;
  uVar5 = 0;
  if ((DAT_180c63119 != '\0') && (uVar5 = 0, DAT_1808e6c00 != '\0')) {
    uVar5 = GetTickCount64();
    if (((uVar5 < uVar9) &&
        (((param_3 != 0 && (uVar5 = DAT_180c630e8, DAT_180c630e8 == param_3)) &&
         (uVar5 = DAT_180c630f0, DAT_180c630f0 == param_3)))) &&
       (((uVar5 = DAT_180c630f8, DAT_180c630f8 == param_3 &&
         (uVar5 = (ulonglong)DAT_180c63100, (DAT_180c63100 & 1) != 0)) &&
        (uVar5 = 0, DAT_180c63118 != '\0')))) {
      if ((DAT_180cd3a70 & 1) == 0) {
        DAT_180cd3a70 = DAT_180cd3a70 | 1;
        local_78 = 0xb60000000f;
        uStack_70 = 0xffffffff00000005;
        uStack_68 = 0xffffffffffffffff;
        uStack_60 = 0x48ffffffff;
        local_58 = 0x540000008d;
        uStack_50 = 0x3000000024;
        uStack_48 = 0x8b00000048;
        uStack_40 = 0x88000000cf;
        local_38 = 0x1d00000047;
        uStack_30 = 0x47000000c6;
        local_28 = 0x1c;
        local_24 = 1;
        local_20 = 0xe8;
        local_98 = &local_78;
        local_90 = local_1c;
        lVar6 = FUN_180219910(&local_98);
        lVar7 = 0;
        if (lVar6 != 0) {
          lVar7 = FUN_180219870(lVar6,3,7);
        }
        DAT_180cd3a78 = lVar7;
      }
      uVar5 = 0;
      if (DAT_180cd3a78 != 0) {
        puVar8 = (ulonglong *)FUN_180224dc0(&local_98,param_1,param_2);
        uVar5 = *puVar8;
        uVar9 = puVar8[1];
        if (uVar5 != 0) {
          uVar9 = uVar5;
        }
        if (uVar9 != 0) {
          lVar7 = FUN_18017ea70();
          *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
          if (param_1 + 0x812 == 0) {
            bVar1 = false;
          }
          else {
            local_a8[0] = '\0';
            cVar2 = FUN_1804514f0(local_a8,param_1 + 0x812,1);
            if (cVar2 == '\0') {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
          }
          cVar2 = local_a8[0];
          uVar5 = FUN_18017ea70();
          if (*(int *)(uVar5 + 4) != 0) {
            *(int *)(uVar5 + 4) = *(int *)(uVar5 + 4) + -1;
          }
          if ((bVar1) && (cVar2 == '\x01')) {
            lVar7 = FUN_18017ea70();
            *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
            if (param_1 + 0x844 == 0) {
              bVar1 = false;
            }
            else {
              local_a8[0] = '\0';
              cVar2 = FUN_1804514f0(local_a8,param_1 + 0x844,1);
              if (cVar2 == '\0') {
                bVar1 = false;
              }
              else {
                bVar1 = true;
              }
            }
            cVar2 = local_a8[0];
            uVar5 = FUN_18017ea70();
            if (*(int *)(uVar5 + 4) != 0) {
              *(int *)(uVar5 + 4) = *(int *)(uVar5 + 4) + -1;
            }
            if ((bVar1) && (cVar2 == '\x01')) {
              lVar7 = FUN_18017ea70();
              *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
              if (param_1 + 0x830 == 0) {
                bVar1 = false;
              }
              else {
                local_a8[0] = '\0';
                cVar2 = FUN_1804514f0(local_a8,param_1 + 0x830,1);
                if (cVar2 == '\0') {
                  bVar1 = false;
                }
                else {
                  bVar1 = true;
                }
              }
              cVar2 = local_a8[0];
              uVar5 = FUN_18017ea70();
              if (*(int *)(uVar5 + 4) != 0) {
                *(int *)(uVar5 + 4) = *(int *)(uVar5 + 4) + -1;
              }
              if ((bVar1) && (cVar2 == '\x01')) {
                lVar7 = FUN_18017ea70();
                *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
                param_1 = param_1 + 0x831;
                if (param_1 == 0) {
                  bVar1 = false;
                }
                else {
                  local_a8[0] = '\0';
                  cVar2 = FUN_1804514f0(local_a8,param_1,1);
                  if (cVar2 == '\0') {
                    bVar1 = false;
                  }
                  else {
                    bVar1 = true;
                  }
                }
                cVar2 = local_a8[0];
                uVar5 = FUN_18017ea70();
                if (*(int *)(uVar5 + 4) != 0) {
                  *(int *)(uVar5 + 4) = *(int *)(uVar5 + 4) + -1;
                }
                lVar7 = DAT_180cd3a78;
                if ((bVar1) && (cVar2 == '\0')) {
                  lVar6 = FUN_18017ea70();
                  *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
                  if (lVar7 == 0) {
                    bVar1 = false;
                  }
                  else {
                    local_a8[0] = '\0';
                    cVar2 = FUN_1804514f0(local_a8,lVar7,1);
                    if (cVar2 == '\0') {
                      bVar1 = false;
                    }
                    else {
                      bVar1 = true;
                    }
                  }
                  cVar2 = local_a8[0];
                  uVar5 = FUN_18017ea70();
                  if (*(int *)(uVar5 + 4) != 0) {
                    *(int *)(uVar5 + 4) = *(int *)(uVar5 + 4) + -1;
                  }
                  if ((bVar1) && (cVar2 == '\x01')) {
                    local_a8[0] = cVar2;
                    cVar2 = FUN_1804513c0(param_1,1,1);
                    if (cVar2 == '\0') {
                      return 0;
                    }
                    lVar7 = FUN_18017ea70();
                    *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
                    bVar3 = FUN_1801ad7b0(param_1,local_a8);
                    lVar7 = FUN_18017ea70();
                    if (*(int *)(lVar7 + 4) != 0) {
                      *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
                    }
                    return (ulonglong)bVar3;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return uVar5 & 0xffffffffffffff00;
}



