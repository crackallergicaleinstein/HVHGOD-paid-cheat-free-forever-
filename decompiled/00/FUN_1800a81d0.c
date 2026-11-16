// FUN_1800a81d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800a81d0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800a81d0(uint *param_1,undefined8 *param_2)

{
  uint *puVar1;
  undefined1 auVar2 [16];
  ulonglong uVar3;
  uint *puVar4;
  uint extraout_var;
  undefined1 *puVar5;
  uint uVar6;
  uint *puVar7;
  bool bVar8;
  undefined1 auStack_88 [32];
  uint local_68;
  undefined4 uStack_64;
  undefined **ppuStack_60;
  undefined1 local_58 [16];
  undefined8 local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_88;
  if (*(longlong *)(param_1 + 4) == 0) {
    *param_2 = CONCAT44(uStack_64,3);
    param_2[1] = &PTR_vftable_1808d7db8;
  }
  else {
    *(undefined4 *)param_2 = 0;
    param_2[1] = &PTR_vftable_1808d7db8;
    local_48 = 0;
    local_40 = 7;
    local_58._2_14_ = SUB1614((undefined1  [16])0x0,2);
    auVar2._14_2_ = 0;
    auVar2._0_14_ = local_58._2_14_;
    local_58 = auVar2 << 0x10;
    uVar3 = *(ulonglong *)(param_1 + 4);
    if (7 < uVar3) {
      FUN_18010f6b0(local_58,uVar3);
      uVar3 = *(ulonglong *)(param_1 + 4);
    }
    local_48 = 0;
    if (7 < *(ulonglong *)(param_1 + 6)) {
      param_1 = *(uint **)param_1;
    }
    puVar1 = (uint *)((longlong)param_1 + uVar3 * 2);
    for (puVar4 = (uint *)FUN_1800a7b00(param_1,puVar1);
        (puVar4 != puVar1 && (((short)*puVar4 == 0x5c || ((short)*puVar4 == 0x2f))));
        puVar4 = (uint *)((longlong)puVar4 + 2)) {
    }
    if ((((puVar4 != param_1) &&
         (5 < (longlong)((longlong)puVar1 - (longlong)puVar4 & 0xfffffffffffffffeU))) &&
        ((*puVar4 & 0xffffffdf) - 0x3a0041 < 0x1a)) &&
       (((short)puVar4[1] == 0x5c || ((short)puVar4[1] == 0x2f)))) {
      puVar4 = puVar4 + 1;
    }
    FUN_1800f52e0(local_58,param_1,(longlong)puVar4 - (longlong)param_1 >> 1);
    uVar6 = 0;
    local_68 = 0;
    if (puVar4 != puVar1) {
      do {
        puVar7 = puVar4;
        do {
          if (((short)*puVar7 != 0x5c) && ((short)*puVar7 != 0x2f)) break;
          puVar7 = (uint *)((longlong)puVar7 + 2);
        } while (puVar7 != puVar1);
        for (; ((puVar7 != puVar1 && ((short)*puVar7 != 0x5c)) && ((short)*puVar7 != 0x2f));
            puVar7 = (uint *)((longlong)puVar7 + 2)) {
        }
        FUN_1800f52e0(local_58,puVar4,(longlong)puVar7 - (longlong)puVar4 >> 1);
        puVar5 = local_58;
        if (7 < local_40) {
          puVar5 = (undefined1 *)local_58._0_8_;
        }
        FUN_1805fb3b0(puVar5);
        if (extraout_var != 0) {
          if (extraout_var < 0x41) {
            if (((extraout_var != 0x40) && (extraout_var != 2)) && (extraout_var != 3)) {
              bVar8 = extraout_var == 0x35;
              goto LAB_1800a83a1;
            }
          }
          else if (extraout_var != 0x7b) {
            bVar8 = extraout_var == 0x10b;
LAB_1800a83a1:
            if (!bVar8) {
              uVar6 = extraout_var;
            }
          }
        }
        puVar4 = puVar7;
      } while (puVar7 != puVar1);
      local_68 = extraout_var;
      if ((extraout_var != 0) && (local_68 = extraout_var, uVar6 != 0)) {
        local_68 = uVar6;
      }
    }
    ppuStack_60 = &PTR_vftable_1808d7db8;
    *param_2 = CONCAT44(uStack_64,local_68);
    param_2[1] = &PTR_vftable_1808d7db8;
    FUN_18015b930(local_58);
  }
}



