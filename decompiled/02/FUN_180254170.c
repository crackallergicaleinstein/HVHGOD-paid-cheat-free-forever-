// FUN_180254170 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180254170 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180254170(longlong param_1,longlong param_2,float param_3,float param_4,undefined8 param_5)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  ULONGLONG UVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_6b8 [32];
  undefined **local_698;
  char *local_690;
  undefined8 local_688;
  double local_680;
  double local_678;
  char local_668 [1536];
  ulonglong local_68;
  
  local_68 = DAT_1808d5f00 ^ (ulonglong)auStack_6b8;
  puVar5 = &DAT_180c64960;
  plVar8 = &DAT_180c64960;
  do {
    pcVar3 = (char *)*plVar8;
    if (pcVar3 == (char *)0x0) {
LAB_1802541f9:
      plVar8[1] = plVar8[1] + 1;
      *plVar8 = param_2;
      goto LAB_180254200;
    }
    lVar7 = param_2 - (longlong)pcVar3;
    do {
      cVar1 = *pcVar3;
      cVar2 = pcVar3[lVar7];
      if (cVar1 != cVar2) break;
      pcVar3 = pcVar3 + 1;
    } while (cVar2 != '\0');
    if (cVar1 == cVar2) goto LAB_1802541f9;
    plVar8 = plVar8 + 2;
  } while (plVar8 != (longlong *)&DAT_180c64ae0);
  DAT_180c64958 = (double)((longlong)DAT_180c64958 + 1);
LAB_180254200:
  UVar4 = GetTickCount64();
  if (DAT_180c64948 <= UVar4) {
    DAT_180c64948 = UVar4 + 2000;
    if (param_1 == 0) {
      uVar6 = 0xffffffffffffffff;
    }
    else {
      uVar6 = *(undefined8 *)(param_1 + 8);
    }
    FUN_18063ab10(local_668,0,0x600);
    local_678 = (double)param_4;
    local_680 = (double)param_3;
    local_688 = param_5;
    local_698 = (undefined **)param_2;
    local_690 = (char *)uVar6;
    FUN_18015ad60(local_668,0x600,0xffffffffffffffff,
                  "reason=%s command=%lld target=0x%llx hitchance=%.1f required=%.1f");
    local_690 = local_668;
    local_698 = &PTR_180700558;
    if (local_668[0] != '\0') {
      local_698 = (undefined **)&DAT_1806bcfc0;
    }
    FUN_1800f6900(0);
    if (param_1 == 0) {
      do {
        lVar7 = puVar5[1];
        if (lVar7 != 0) {
          FUN_18063ab10(local_668,0,0x600);
          local_680 = DAT_180c64958;
          local_698 = (undefined **)*puVar5;
          local_688 = 0xffffffffffffffff;
          local_690 = (char *)lVar7;
          FUN_18015ad60(local_668,0x600,0xffffffffffffffff,
                        "reason=%s occurrences=%llu command=%lld overflow=%llu interval_ms=2000");
          local_690 = local_668;
          local_698 = &PTR_180700558;
          if (local_668[0] != '\0') {
            local_698 = (undefined **)&DAT_1806bcfc0;
          }
          FUN_1800f6900(0);
        }
        puVar5[1] = 0;
        puVar5 = puVar5 + 2;
      } while (puVar5 != (undefined8 *)&DAT_180c64ae0);
    }
    else {
      do {
        lVar7 = puVar5[1];
        if (lVar7 != 0) {
          FUN_18063ab10(local_668,0,0x600);
          local_680 = DAT_180c64958;
          local_688 = *(undefined8 *)(param_1 + 8);
          local_698 = (undefined **)*puVar5;
          local_690 = (char *)lVar7;
          FUN_18015ad60(local_668,0x600,0xffffffffffffffff,
                        "reason=%s occurrences=%llu command=%lld overflow=%llu interval_ms=2000");
          local_690 = local_668;
          local_698 = &PTR_180700558;
          if (local_668[0] != '\0') {
            local_698 = (undefined **)&DAT_1806bcfc0;
          }
          FUN_1800f6900(0);
        }
        puVar5[1] = 0;
        puVar5 = puVar5 + 2;
      } while (puVar5 != (undefined8 *)&DAT_180c64ae0);
    }
    DAT_180c64958 = 0.0;
  }
}



