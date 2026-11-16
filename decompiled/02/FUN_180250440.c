// FUN_180250440 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180250440 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

longlong * FUN_180250440(longlong *param_1,ulonglong param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  char *local_18;
  undefined8 local_10;
  
  uVar2 = 0x7fffffffffffffff;
  if ((longlong)param_2 < 0x7fffffffffffffff) {
    uVar2 = param_2;
  }
  if (param_2 < 0x201) {
    plVar1 = param_1 + 2;
    uVar2 = param_2;
  }
  else {
    if ((uVar2 < 0x2000000000000000) && (0 < (longlong)uVar2)) {
      do {
        plVar1 = (longlong *)FUN_1805f6194(uVar2 * 8,&DAT_1806898a0);
        if (plVar1 != (longlong *)0x0) {
          if (uVar2 < 0x201) goto LAB_1802504b3;
          goto LAB_180250505;
        }
        uVar2 = uVar2 >> 1;
      } while (uVar2 != 0);
    }
    plVar1 = (longlong *)0x0;
LAB_1802504b3:
    if (DAT_180c7df30 == (undefined8 *)0x0) {
      local_18 = "tier0.dll:g_pMemAlloc";
      local_10 = 0x15;
      DAT_180c7df30 = (undefined8 *)FUN_180451750(&local_18);
    }
    (**(code **)(*(longlong *)*DAT_180c7df30 + 0x18))((longlong *)*DAT_180c7df30,plVar1);
    uVar2 = 0x200;
    plVar1 = param_1 + 2;
  }
LAB_180250505:
  *param_1 = (longlong)plVar1;
  param_1[1] = uVar2;
  return param_1;
}



