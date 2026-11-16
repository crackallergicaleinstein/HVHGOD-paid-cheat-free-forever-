// FUN_18043fb40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18043fb40 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 * FUN_18043fb40(float *param_1,undefined8 *param_2,byte *param_3)

{
  float *pfVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  char *local_58;
  undefined8 local_50;
  float *local_48;
  undefined8 *local_40;
  
  uVar8 = (((((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_3[1]) *
            0x100000001b3 ^ (ulonglong)param_3[2]) * 0x100000001b3 ^ (ulonglong)param_3[3]) *
          0x100000001b3;
  puVar6 = *(undefined8 **)
            (*(longlong *)(param_1 + 6) + 8 + (uVar8 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
  pfVar1 = param_1 + 2;
  puVar7 = *(undefined8 **)pfVar1;
  if (puVar6 != puVar7) {
    iVar2 = *(int *)(puVar6 + 2);
    puVar7 = puVar6;
    while( true ) {
      if (*(int *)param_3 == iVar2) {
        *param_2 = puVar7;
        *(undefined1 *)(param_2 + 1) = 0;
        return param_2;
      }
      if (puVar7 == *(undefined8 **)
                     (*(longlong *)(param_1 + 6) + (uVar8 & *(ulonglong *)(param_1 + 0xc)) * 0x10))
      break;
      puVar7 = (undefined8 *)puVar7[1];
      iVar2 = *(int *)(puVar7 + 2);
    }
  }
  if (*(longlong *)(param_1 + 4) == 0xaaaaaaaaaaaaaaa) {
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
  puVar6 = (undefined8 *)
           (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x18);
  *(undefined4 *)(puVar6 + 2) = *(undefined4 *)param_3;
  *(undefined1 *)((longlong)puVar6 + 0x14) = 0;
  if (*param_1 < (float)(*(longlong *)(param_1 + 4) + 1) / (float)*(ulonglong *)(param_1 + 0xe)) {
    local_40 = puVar6;
    FUN_1803d2720(param_1);
    puVar3 = *(undefined8 **)
              (*(longlong *)(param_1 + 6) + 8 + (uVar8 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
    puVar7 = *(undefined8 **)pfVar1;
    if (puVar3 != puVar7) {
      iVar2 = *(int *)(puVar3 + 2);
      puVar7 = puVar3;
      while (*(int *)(puVar6 + 2) != iVar2) {
        if (puVar7 == *(undefined8 **)
                       (*(longlong *)(param_1 + 6) + (uVar8 & *(ulonglong *)(param_1 + 0xc)) * 0x10)
           ) goto LAB_18043fd11;
        puVar7 = (undefined8 *)puVar7[1];
        iVar2 = *(int *)(puVar7 + 2);
      }
      puVar7 = (undefined8 *)*puVar7;
    }
  }
LAB_18043fd11:
  puVar3 = (undefined8 *)puVar7[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar6 = puVar7;
  puVar6[1] = puVar3;
  *puVar3 = puVar6;
  puVar7[1] = puVar6;
  uVar8 = uVar8 & *(ulonglong *)(param_1 + 0xc);
  lVar4 = *(longlong *)(param_1 + 6);
  puVar5 = *(undefined8 **)(lVar4 + uVar8 * 0x10);
  if (puVar5 == *(undefined8 **)pfVar1) {
    *(undefined8 **)(lVar4 + uVar8 * 0x10) = puVar6;
  }
  else {
    if (puVar5 == puVar7) {
      *(undefined8 **)(lVar4 + uVar8 * 0x10) = puVar6;
      goto LAB_18043fd5e;
    }
    if (*(undefined8 **)(lVar4 + 8 + uVar8 * 0x10) != puVar3) goto LAB_18043fd5e;
  }
  *(undefined8 **)(lVar4 + 8 + uVar8 * 0x10) = puVar6;
LAB_18043fd5e:
  *param_2 = puVar6;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



