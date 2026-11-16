// FUN_1802f50e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802f50e0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802f50e0(undefined1 (*param_1) [16],longlong param_2,int param_3,int *param_4)

{
  int *piVar1;
  void *pvVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_88 [40];
  undefined1 (*local_60) [16];
  undefined1 local_58 [16];
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_88;
  if (param_3 - 2U < 2) {
    uStack_48 = 0;
    uStack_40 = 0xf;
    local_58._1_15_ = SUB1615((undefined1  [16])0x0,1);
    auVar3[0xf] = 0;
    auVar3._0_15_ = local_58._1_15_;
    local_58 = auVar3 << 8;
    piVar1 = param_4 + 10;
    local_60 = param_1;
    if (param_4 != piVar1) {
      if (param_3 == 2) {
        do {
          iVar5 = *param_4;
          pvVar2 = *(void **)(*(longlong *)(param_2 + (longlong)iVar5 * 8) + 0x10);
          lVar7 = -1;
          do {
            lVar7 = lVar7 + 1;
          } while (*(char *)((longlong)pvVar2 + lVar7) != '\0');
          if (lVar7 != 0) {
            uVar6 = FUN_18015b2a0(local_58,&DAT_180800878,4);
            uVar6 = FUN_18015b2a0(uVar6,pvVar2,lVar7);
            FUN_18015b2a0(uVar6,&DAT_180800874,2);
            if (((iVar5 == 1) && (lVar7 == 8)) && (iVar5 = memcmp(pvVar2,"vesthelm",8), iVar5 == 0))
            {
              FUN_18015b2a0(local_58,"buy vest; ",10);
            }
          }
          param_4 = param_4 + 1;
        } while (param_4 != piVar1);
      }
      else {
        do {
          iVar5 = *param_4;
          pvVar2 = *(void **)(*(longlong *)(param_2 + (longlong)iVar5 * 8) + 0x18);
          lVar7 = -1;
          do {
            lVar7 = lVar7 + 1;
          } while (*(char *)((longlong)pvVar2 + lVar7) != '\0');
          if (lVar7 != 0) {
            uVar6 = FUN_18015b2a0(local_58,&DAT_180800878,4);
            uVar6 = FUN_18015b2a0(uVar6,pvVar2,lVar7);
            FUN_18015b2a0(uVar6,&DAT_180800874,2);
            if (((iVar5 == 1) && (lVar7 == 8)) && (iVar5 = memcmp(pvVar2,"vesthelm",8), iVar5 == 0))
            {
              FUN_18015b2a0(local_58,"buy vest; ",10);
            }
          }
          param_4 = param_4 + 1;
        } while (param_4 != piVar1);
      }
    }
    *(undefined8 *)*param_1 = local_58._0_8_;
    *(undefined8 *)(*param_1 + 8) = local_58._8_8_;
    *(undefined8 *)param_1[1] = uStack_48;
    *(undefined8 *)(param_1[1] + 8) = uStack_40;
    uStack_48 = 0;
    uStack_40 = 0xf;
    auVar4[0xf] = 0;
    auVar4._0_15_ = local_58._1_15_;
    local_58 = auVar4 << 8;
    FUN_18015c010(local_58);
  }
  else {
    *param_1 = (undefined1  [16])0x0;
    *(undefined8 *)param_1[1] = 0;
    *(undefined8 *)(param_1[1] + 8) = 0xf;
    (*param_1)[0] = 0;
  }
}



