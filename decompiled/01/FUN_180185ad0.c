// FUN_180185ad0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180185ad0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180185ad0(undefined8 *param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  uint *puVar4;
  char cVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  undefined8 local_60;
  undefined1 local_58 [16];
  undefined8 local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_88;
  uVar3 = param_1[1];
  if (7 < uVar3) {
    puVar4 = (uint *)*param_1;
    uVar1 = puVar4[1];
    if (((uVar1 < 0x1001) && (uVar2 = *puVar4, (ulonglong)uVar1 * 0x10 + (ulonglong)uVar2 <= uVar3))
       && (uVar8 = 0, uVar1 != 0)) {
      do {
        lVar6 = (ulonglong)(uVar8 << 4) + 8 + (ulonglong)uVar2;
        uVar7 = *(ulonglong *)(lVar6 + (longlong)puVar4);
        if ((longlong)uVar7 < 0) {
        }
        if (uVar3 - lVar6 < uVar7) {
        }
        uVar7 = lVar6 + uVar7;
        for (uVar9 = uVar7; uVar9 < uVar3; uVar9 = uVar9 + 1) {
          if ((*(char *)((longlong)puVar4 + uVar9) == '\0') || (0x200 < uVar9 - uVar7))
          goto LAB_180185b99;
        }
        if (uVar9 == uVar3) {
        }
LAB_180185b99:
        if (0x200 < uVar9 - uVar7) {
        }
        local_58 = (undefined1  [16])0x0;
        local_48 = 0;
        local_40 = 0;
        FUN_18015ba30(local_58,(longlong)puVar4 + uVar7);
        local_68 = local_58;
        if (0xf < local_40) {
          local_68 = (undefined1 *)local_58._0_8_;
        }
        local_60 = local_48;
        cVar5 = FUN_1801856e0(&local_68);
        if (cVar5 == '\0') {
          FUN_18015c010(local_58);
        }
        FUN_1801b1650(param_2,local_58);
        FUN_18015c010(local_58);
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar1);
    }
  }
}



