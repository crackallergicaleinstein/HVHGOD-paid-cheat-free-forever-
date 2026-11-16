// FUN_1800abd30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800abd30 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800abd30(undefined8 *param_1,uint *param_2,ulonglong param_3)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined1 local_68;
  undefined8 *local_60;
  undefined1 local_58;
  undefined7 uStack_57;
  undefined8 uStack_50;
  ulonglong uStack_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_98;
  if ((param_3 < 4) || (uVar1 = *param_2, 0x4000000 < uVar1)) {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  else {
    local_60 = param_1;
    FUN_18015ae30(&local_58,uVar1,0);
    puVar4 = &local_58;
    if (0xf < uStack_40) {
      puVar4 = (undefined1 *)CONCAT71(uStack_57,local_58);
    }
    iVar2 = FUN_1804207a0(param_2 + 1,puVar4,(int)param_3 + -4,uVar1);
    if (iVar2 < 0) {
      *(undefined1 *)(param_1 + 4) = 0;
      FUN_18015c010(&local_58);
    }
    else {
      uVar3 = (ulonglong)iVar2;
      if (uStack_48 < uVar3) {
        uVar5 = uVar3 - uStack_48;
        if (uStack_40 - uStack_48 < uVar5) {
          local_78 = 0;
          FUN_18013fa60(&local_58,uVar5,local_68,uVar5);
        }
        else {
          puVar4 = &local_58;
          if (0xf < uStack_40) {
            puVar4 = (undefined1 *)CONCAT71(uStack_57,local_58);
          }
          puVar4 = puVar4 + uStack_48;
          uStack_48 = uVar3;
          FUN_18063ab10(puVar4,0,uVar5);
          puVar4[uVar5] = 0;
        }
      }
      else {
        puVar4 = &local_58;
        if (0xf < uStack_40) {
          puVar4 = (undefined1 *)CONCAT71(uStack_57,local_58);
        }
        uStack_48 = uVar3;
        puVar4[uVar3] = 0;
      }
      *param_1 = CONCAT71(uStack_57,local_58);
      param_1[1] = uStack_50;
      param_1[2] = uStack_48;
      param_1[3] = uStack_40;
      uStack_48 = 0;
      uStack_40 = 0xf;
      local_58 = 0;
      *(undefined1 *)(param_1 + 4) = 1;
      FUN_18015c010(&local_58);
    }
  }
}



