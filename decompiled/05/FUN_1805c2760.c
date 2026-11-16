// FUN_1805c2760 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805c2760 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1805c2760(longlong param_1,longlong param_2)

{
  int *piVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ushort uVar7;
  ushort uVar8;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  int *local_70;
  int local_68;
  ushort local_64 [2];
  int local_60;
  int iStack_5c;
  uint uStack_58;
  uint uStack_54;
  int local_50;
  ushort local_4c;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_1808d5f00 ^ (ulonglong)auStack_98;
  uVar5 = *(undefined8 *)(param_2 + 0x30);
  local_64[0] = 0;
  local_44 = FUN_1805780f0(param_2);
  local_50 = FUN_180578540(param_2,&local_68);
  if ((local_68 == 0) && (local_68 = FUN_180578280(param_2,&DAT_180684898,&local_50), local_68 == 0)
     ) {
    if (local_50 == 0x4f54544f) {
      uVar7 = local_4c;
      if (local_4c == 0) {
      }
    }
    else {
      iVar3 = FUN_1805c9b50(&local_50,param_2,local_64);
      if (iVar3 != 0) {
      }
      uVar7 = local_64[0];
    }
    local_68 = 0;
    *(ushort *)(param_1 + 0xf4) = uVar7;
    local_70 = &local_68;
    *(int *)(param_1 + 0xf0) = local_50;
    local_78 = 0;
    uVar5 = FUN_18057ac40(uVar5,0x10,0,uVar7);
    *(undefined8 *)(param_1 + 0xf8) = uVar5;
    if (((local_68 == 0) && (local_68 = FUN_1805788b0(param_2,local_44 + 0xc), local_68 == 0)) &&
       (iVar3 = FUN_180577bf0(param_2,(ulonglong)local_4c << 4), iVar3 == 0)) {
      uVar7 = 0;
      uVar8 = 0;
      local_68 = 0;
      if (local_4c != 0) {
        do {
          iVar3 = FUN_180577e30(param_2);
          local_60 = iVar3;
          iStack_5c = FUN_180577e30(param_2);
          uVar4 = FUN_180577e30(param_2);
          uStack_58 = uVar4;
          uStack_54 = FUN_180577e30(param_2);
          if (uVar4 <= *(uint *)(param_2 + 8)) {
            uVar4 = *(uint *)(param_2 + 8) - uVar4;
            if (uVar4 < uStack_54) {
              if ((iVar3 != 0x686d7478) && (iVar3 != 0x766d7478)) goto LAB_1805c294b;
              uStack_54 = uVar4 & 0xfffffffc;
            }
            uVar2 = 0;
            if (uVar7 != 0) {
              do {
                if (*(int *)(*(longlong *)(param_1 + 0xf8) + (ulonglong)uVar2 * 0x10) == iVar3)
                goto LAB_1805c294b;
                uVar2 = uVar2 + 1;
              } while (uVar2 < uVar7);
            }
            uVar6 = (ulonglong)uVar7;
            uVar7 = uVar7 + 1;
            piVar1 = (int *)(*(longlong *)(param_1 + 0xf8) + uVar6 * 0x10);
            *piVar1 = local_60;
            piVar1[1] = iStack_5c;
            piVar1[2] = uStack_58;
            piVar1[3] = uStack_54;
          }
LAB_1805c294b:
          uVar8 = uVar8 + 1;
        } while (uVar8 < local_4c);
      }
      *(ushort *)(param_1 + 0xf4) = uVar7;
      FUN_180577d30(param_2);
    }
  }
}



