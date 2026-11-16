// FUN_180630860 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180630860 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180630860(undefined8 param_1)

{
  longlong *plVar1;
  uint *puVar2;
  LCID Locale;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  short *psVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined1 auStack_138 [32];
  WCHAR local_118 [120];
  ulonglong local_28;
  
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_138;
  lVar4 = FUN_18061f698();
  plVar1 = (longlong *)(lVar4 + 0x98);
  lVar5 = FUN_18061f698();
  puVar2 = *(uint **)(lVar5 + 0x3a0);
  Locale = FUN_180630bb8(param_1);
  iVar3 = GetLocaleInfoW(Locale,(-(uint)(*(int *)(lVar4 + 0xb4) != 0) & 0xfffff005) + 0x1002,
                         local_118,0x78);
  if (iVar3 == 0) goto LAB_180630a73;
  iVar3 = FUN_180615da0(*(undefined8 *)(lVar4 + 0xa0),local_118);
  lVar5 = -1;
  if (iVar3 == 0) {
    iVar3 = GetLocaleInfoW(Locale,(-(uint)(*(int *)(lVar4 + 0xb0) != 0) & 0xfffff002) + 0x1001,
                           local_118,0x78);
    if (iVar3 == 0) goto LAB_180630a73;
    iVar3 = FUN_180615da0(*plVar1,local_118);
    if (iVar3 == 0) {
      puVar2[1] = Locale;
      *puVar2 = *puVar2 | 0x304;
LAB_1806309a5:
      puVar2[2] = Locale;
    }
    else if ((*puVar2 & 2) == 0) {
      if ((*(int *)(lVar4 + 0xac) == 0) ||
         (iVar3 = FUN_180633210(*plVar1,local_118,(longlong)*(int *)(lVar4 + 0xac)), iVar3 != 0)) {
        if ((*puVar2 & 1) == 0) {
          uVar8 = 0;
          psVar7 = &DAT_1806b6ce8;
          do {
            if ((short)Locale == *psVar7) goto LAB_1806309a8;
            uVar8 = uVar8 + 1;
            psVar7 = psVar7 + 1;
          } while (uVar8 < 10);
          *puVar2 = *puVar2 | 1;
          goto LAB_1806309a5;
        }
      }
      else {
        *puVar2 = *puVar2 | 2;
        lVar6 = -1;
        puVar2[2] = Locale;
        do {
          lVar6 = lVar6 + 1;
        } while (*(short *)(*plVar1 + lVar6 * 2) != 0);
        if ((int)lVar6 == *(int *)(lVar4 + 0xac)) {
          puVar2[1] = Locale;
        }
      }
    }
  }
LAB_1806309a8:
  if ((*puVar2 & 0x300) == 0x300) {
  }
  iVar3 = GetLocaleInfoW(Locale,(-(uint)(*(int *)(lVar4 + 0xb0) != 0) & 0xfffff002) + 0x1001,
                         local_118,0x78);
  if (iVar3 == 0) {
LAB_180630a73:
    *puVar2 = 0;
  }
  iVar3 = FUN_180615da0(*plVar1,local_118);
  if (iVar3 == 0) {
    uVar8 = *puVar2;
    *puVar2 = uVar8 | 0x200;
    if ((*(int *)(lVar4 + 0xb0) == 0) && (*(int *)(lVar4 + 0xac) != 0)) {
      do {
        lVar5 = lVar5 + 1;
      } while (*(short *)(*plVar1 + lVar5 * 2) != 0);
      if ((int)lVar5 == *(int *)(lVar4 + 0xac)) {
        uVar9 = 1;
        goto LAB_180630a4c;
      }
    }
    *puVar2 = uVar8 | 0x300;
  }
  else {
    if (*(int *)(lVar4 + 0xb0) != 0) {
    }
    if (*(int *)(lVar4 + 0xac) == 0) {
    }
    iVar3 = FUN_180615da0(*plVar1,local_118);
    if (iVar3 != 0) {
    }
    uVar9 = 0;
LAB_180630a4c:
    iVar3 = FUN_180630cbc(Locale,uVar9,puVar2);
    if (iVar3 == 0) {
    }
    *puVar2 = *puVar2 | 0x100;
  }
  if (puVar2[1] == 0) {
    puVar2[1] = Locale;
  }
}



