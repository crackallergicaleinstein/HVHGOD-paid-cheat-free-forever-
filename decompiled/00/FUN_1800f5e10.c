// FUN_1800f5e10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800f5e10 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1800f5e10(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined1 **local_60;
  longlong local_48;
  undefined1 *local_40;
  undefined1 local_38;
  undefined1 local_37 [7];
  undefined1 local_30 [16];
  ulonglong local_20;
  ulonglong local_18;
  ulonglong local_10;
  
  local_10 = DAT_1808d5f00 ^ (ulonglong)auStack_98;
  uVar8 = **(ulonglong **)(param_1 + 0x38);
  if (uVar8 != 0) {
    iVar5 = **(int **)(param_1 + 0x50);
    if (uVar8 < uVar8 + (longlong)iVar5) {
      **(int **)(param_1 + 0x50) = iVar5 + -1;
      **(longlong **)(param_1 + 0x38) = **(longlong **)(param_1 + 0x38) + 1;
    }
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    if (**(longlong **)(param_1 + 0x18) == param_1 + 0x70) {
      uVar1 = *(undefined8 *)(param_1 + 0x90);
      lVar2 = *(longlong *)(param_1 + 0x88);
      **(longlong **)(param_1 + 0x18) = lVar2;
      **(longlong **)(param_1 + 0x38) = lVar2;
      **(int **)(param_1 + 0x50) = (int)uVar1 - (int)lVar2;
    }
    if (*(longlong *)(param_1 + 0x68) != 0) {
      local_20 = 0;
      local_18 = 0xf;
      local_30._1_15_ = SUB1615((undefined1  [16])0x0,1);
      auVar3[0xf] = 0;
      auVar3._0_15_ = local_30._1_15_;
      local_30 = auVar3 << 8;
      uVar4 = FUN_18060b448(*(undefined8 *)(param_1 + 0x80));
      while( true ) {
        if (uVar4 == 0xffffffff) goto LAB_1800f5fed;
        FUN_18015af80(local_30,uVar4 & 0xff);
        puVar7 = local_30;
        if (0xf < local_18) {
          puVar7 = (undefined1 *)local_30._0_8_;
        }
        local_60 = &local_40;
        local_68 = local_37;
        local_70 = &local_38;
        local_78 = &local_48;
        iVar5 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x30))
                          (*(longlong **)(param_1 + 0x68),param_1 + 0x74,puVar7,puVar7 + local_20);
        if ((iVar5 != 0) && (iVar5 != 1)) goto LAB_1800f5fed;
        if (local_40 != &local_38) break;
        puVar7 = local_30;
        if (0xf < local_18) {
          puVar7 = (undefined1 *)local_30._0_8_;
        }
        uVar8 = local_48 - (longlong)puVar7;
        if (local_20 < (ulonglong)(local_48 - (longlong)puVar7)) {
          uVar8 = local_20;
        }
        puVar7 = local_30;
        if (0xf < local_18) {
          puVar7 = (undefined1 *)local_30._0_8_;
        }
        uVar6 = local_20 - uVar8;
        FUN_18063aed0(puVar7,puVar7 + uVar8,uVar6 + 1);
        local_20 = uVar6;
        uVar4 = FUN_18060b448(*(undefined8 *)(param_1 + 0x80));
      }
      puVar7 = local_30;
      if (0xf < local_18) {
        puVar7 = (undefined1 *)local_30._0_8_;
      }
      puVar7 = puVar7 + (local_20 - local_48);
      while (0 < (longlong)puVar7) {
        puVar7 = puVar7 + -1;
        ungetc((int)(char)puVar7[local_48],*(FILE **)(param_1 + 0x80));
      }
LAB_1800f5fed:
      FUN_18015c010(local_30);
    }
    FUN_18060b448(*(undefined8 *)(param_1 + 0x80));
  }
}



