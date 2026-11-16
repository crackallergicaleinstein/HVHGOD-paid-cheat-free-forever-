// FUN_180151be0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180151be0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 * FUN_180151be0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined1 (*pauVar7) [16];
  undefined8 uVar8;
  char *local_38;
  undefined8 local_30;
  
  *param_1 = std::basic_streambuf<char,std::char_traits<char>_>::vftable;
  puVar1 = param_1 + 1;
  *puVar1 = 0;
  puVar2 = param_1 + 2;
  *puVar2 = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  puVar3 = param_1 + 5;
  *puVar3 = 0;
  puVar4 = param_1 + 6;
  *puVar4 = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  puVar5 = param_1 + 9;
  *(undefined4 *)puVar5 = 0;
  puVar6 = (undefined4 *)((longlong)param_1 + 0x4c);
  *puVar6 = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_38 = "tier0.dll:g_pMemAlloc";
    local_30 = 0x15;
    DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_38);
  }
  pauVar7 = (undefined1 (*) [16])
            (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x10);
  if (pauVar7 != (undefined1 (*) [16])0x0) {
    *pauVar7 = (undefined1  [16])0x0;
    uVar8 = FUN_1805fbf84(1);
    *(undefined8 *)(*pauVar7 + 8) = uVar8;
  }
  param_1[0xc] = pauVar7;
  param_1[3] = puVar1;
  param_1[4] = puVar2;
  param_1[7] = puVar3;
  param_1[8] = puVar4;
  param_1[10] = puVar5;
  param_1[0xb] = puVar6;
  *puVar2 = 0;
  *puVar4 = 0;
  *puVar6 = 0;
  *puVar1 = 0;
  *puVar3 = 0;
  *(undefined4 *)puVar5 = 0;
  return param_1;
}



