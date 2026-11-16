// FUN_18046b5c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18046b5c0 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_18046b5c0(longlong *param_1,uint param_2,int param_3)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  longlong lVar6;
  int iVar7;
  uint *puVar8;
  longlong lVar9;
  uint local_res10 [2];
  undefined1 auStack_10b8 [32];
  ulonglong local_1098;
  longlong local_1090;
  uint local_1088 [4];
  char *local_1078;
  undefined8 uStack_1070;
  undefined8 local_1068;
  ulonglong local_1060;
  uint *local_58;
  uint *puStack_50;
  uint *local_48;
  ulonglong local_40;
  
  if (0x1c < param_2) {
    return;
  }
  local_40 = DAT_1808d5f00 ^ (ulonglong)auStack_10b8;
  cVar1 = *(char *)((longlong)(int)param_2 * 0x9c + 1 + *param_1);
  local_58 = (uint *)0x0;
  puStack_50 = (uint *)0x0;
  puVar5 = puStack_50;
  iVar7 = 0;
  local_48 = (uint *)0x0;
  local_1088[0] = 0;
  puStack_50 = (uint *)0x0;
  puVar8 = puStack_50;
  local_res10[0] = param_2;
  puStack_50 = puVar5;
  do {
    uVar3 = local_1088[0];
    if (local_1088[0] != param_2) {
      cVar2 = (&DAT_18077eecc)[(longlong)(int)local_1088[0] * 0x20];
      if ((cVar2 != '\0') && (cVar2 != '\x01')) {
        lVar6 = *param_1;
        lVar9 = (longlong)(int)local_1088[0] * 0x9c;
        if ((*(char *)(lVar9 + 1 + lVar6) == cVar1) &&
           ((((cVar1 - 1U & 0xfd) != 0 ||
             (*(int *)(lVar9 + 8 + lVar6) == *(int *)((longlong)(int)param_2 * 0x9c + 8 + lVar6)))
            && ((cVar2 == '\x03') == ((&DAT_18077eecc)[(longlong)(int)param_2 * 0x20] == '\x03')))))
        {
          if (puVar8 == local_48) {
            FUN_18026b910(&local_58,puVar8,local_1088);
          }
          else {
            *puVar8 = local_1088[0];
            puStack_50 = puStack_50 + 1;
          }
          puVar8 = puStack_50;
          param_2 = local_res10[0];
        }
      }
    }
    puVar5 = local_58;
    local_1088[0] = uVar3 + 1;
  } while ((int)local_1088[0] < 0x1d);
  lVar6 = *param_1;
  lVar9 = (longlong)puVar8 - (longlong)local_58 >> 2;
  if (lVar9 < 0x21) {
    FUN_18046d7f0(local_58,puVar8,lVar6);
  }
  else {
    FUN_1802ad670(&local_1068,lVar9 - (lVar9 - ((longlong)puVar8 - (longlong)local_58 >> 0x3f) >> 1)
                 );
    local_1098 = local_1060;
    local_1090 = lVar6;
    FUN_18046d910(puVar5,puVar8,lVar9,local_1068);
    if (0x400 < local_1060) {
      if (DAT_180c7df30 == (undefined8 *)0x0) {
        local_1078 = "tier0.dll:g_pMemAlloc";
        uStack_1070 = 0x15;
        DAT_180c7df30 = (undefined8 *)FUN_180451750(&local_1078);
      }
      (**(code **)(*(longlong *)*DAT_180c7df30 + 0x18))((longlong *)*DAT_180c7df30,local_1068);
    }
  }
  uVar3 = local_res10[0];
  puVar5 = local_58;
  if (local_58 != puStack_50) {
    do {
      if (*(float *)((longlong)(int)local_res10[0] * 0x9c + 4 + *param_1) <
          *(float *)((longlong)(int)*puVar5 * 0x9c + 4 + *param_1)) break;
      puVar5 = puVar5 + 1;
    } while (puVar5 != puStack_50);
  }
  param_3 = (int)((longlong)puVar5 - (longlong)local_58 >> 2) + param_3;
  if (param_3 < 0) {
    param_3 = 0;
  }
  else {
    iVar4 = (int)((longlong)puStack_50 - (longlong)local_58 >> 2);
    if (iVar4 < param_3) {
      param_3 = iVar4;
    }
  }
  puVar5 = local_58 + param_3;
  if (puStack_50 == local_48) {
    FUN_18026b910(&local_58,puVar5,local_res10);
  }
  else if (puVar5 == puStack_50) {
    *puStack_50 = local_res10[0];
    puStack_50 = puStack_50 + 1;
  }
  else {
    *puStack_50 = puStack_50[-1];
    puStack_50 = puStack_50 + 1;
    FUN_18063aed0(puVar5 + 1,puVar5);
    *puVar5 = uVar3;
  }
  if (0 < (int)((longlong)puStack_50 - (longlong)local_58 >> 2)) {
    lVar6 = 0;
    do {
      *(float *)((longlong)*(int *)((longlong)local_58 + lVar6) * 0x9c + 4 + *param_1) =
           (float)iVar7;
      iVar7 = iVar7 + 1;
      lVar6 = lVar6 + 4;
    } while (iVar7 < (int)((longlong)puStack_50 - (longlong)local_58 >> 2));
  }
  FUN_180159650(&local_58);
}



