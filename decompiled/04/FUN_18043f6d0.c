// FUN_18043f6d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18043f6d0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 * FUN_18043f6d0(float *param_1,undefined8 *param_2,byte *param_3)

{
  float *pfVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  char *local_58;
  undefined8 local_50;
  float *local_48;
  undefined8 *local_40;
  
  uVar7 = (((((((((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_3[1])
                * 0x100000001b3 ^ (ulonglong)param_3[2]) * 0x100000001b3 ^ (ulonglong)param_3[3]) *
              0x100000001b3 ^ (ulonglong)param_3[4]) * 0x100000001b3 ^ (ulonglong)param_3[5]) *
            0x100000001b3 ^ (ulonglong)param_3[6]) * 0x100000001b3 ^ (ulonglong)param_3[7]) *
          0x100000001b3;
  puVar5 = *(undefined8 **)
            (*(longlong *)(param_1 + 6) + 8 + (uVar7 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
  pfVar1 = param_1 + 2;
  puVar6 = *(undefined8 **)pfVar1;
  if (puVar5 != puVar6) {
    lVar2 = puVar5[2];
    puVar6 = puVar5;
    while( true ) {
      if (*(longlong *)param_3 == lVar2) {
        *param_2 = puVar6;
        *(undefined1 *)(param_2 + 1) = 0;
        return param_2;
      }
      if (puVar6 == *(undefined8 **)
                     (*(longlong *)(param_1 + 6) + (uVar7 & *(ulonglong *)(param_1 + 0xc)) * 0x10))
      break;
      puVar6 = (undefined8 *)puVar6[1];
      lVar2 = puVar6[2];
    }
  }
  if (*(longlong *)(param_1 + 4) == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_1805fa8b8("unordered_map/set too long");
  }
  local_40 = (undefined8 *)0x0;
  local_48 = pfVar1;
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_58 = "tier0.dll:g_pMemAlloc";
    local_50 = 0x15;
    DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_58);
  }
  puVar5 = (undefined8 *)
           (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x20);
  puVar5[2] = *(undefined8 *)param_3;
  *(undefined4 *)(puVar5 + 3) = 0;
  if (*param_1 < (float)(*(longlong *)(param_1 + 4) + 1) / (float)*(ulonglong *)(param_1 + 0xe)) {
    local_40 = puVar5;
    FUN_1801b8c20(param_1);
    puVar3 = *(undefined8 **)
              (*(longlong *)(param_1 + 6) + 8 + (uVar7 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
    puVar6 = *(undefined8 **)pfVar1;
    if (puVar3 != puVar6) {
      lVar2 = puVar3[2];
      puVar6 = puVar3;
      while (puVar5[2] != lVar2) {
        if (puVar6 == *(undefined8 **)
                       (*(longlong *)(param_1 + 6) + (uVar7 & *(ulonglong *)(param_1 + 0xc)) * 0x10)
           ) goto LAB_18043f8d4;
        puVar6 = (undefined8 *)puVar6[1];
        lVar2 = puVar6[2];
      }
      puVar6 = (undefined8 *)*puVar6;
    }
  }
LAB_18043f8d4:
  puVar3 = (undefined8 *)puVar6[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar5 = puVar6;
  puVar5[1] = puVar3;
  *puVar3 = puVar5;
  puVar6[1] = puVar5;
  uVar7 = uVar7 & *(ulonglong *)(param_1 + 0xc);
  lVar2 = *(longlong *)(param_1 + 6);
  puVar4 = *(undefined8 **)(lVar2 + uVar7 * 0x10);
  if (puVar4 == *(undefined8 **)pfVar1) {
    *(undefined8 **)(lVar2 + uVar7 * 0x10) = puVar5;
  }
  else {
    if (puVar4 == puVar6) {
      *(undefined8 **)(lVar2 + uVar7 * 0x10) = puVar5;
      goto LAB_18043f921;
    }
    if (*(undefined8 **)(lVar2 + 8 + uVar7 * 0x10) != puVar3) goto LAB_18043f921;
  }
  *(undefined8 **)(lVar2 + 8 + uVar7 * 0x10) = puVar5;
LAB_18043f921:
  *param_2 = puVar5;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



