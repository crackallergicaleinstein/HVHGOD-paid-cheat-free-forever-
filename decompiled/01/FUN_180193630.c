// FUN_180193630 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180193630 */

void FUN_180193630(undefined8 param_1,longlong param_2,char param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 local_18 [2];
  
  puVar1 = *(undefined8 **)(param_2 + 8);
  for (puVar2 = (undefined8 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined8 *)*puVar2) {
    FUN_1801ad260(puVar2 + 0x14);
    if (param_3 != '\0') {
      plVar3 = puVar2 + 0xc;
      if (7 < (ulonglong)puVar2[0xf]) {
        plVar3 = (longlong *)*plVar3;
      }
      FUN_1805fb9a8(plVar3);
    }
  }
  if (*(ulonglong *)(param_2 + 0x10) != 0) {
    if (*(ulonglong *)(param_2 + 0x10) < *(ulonglong *)(param_2 + 0x38) >> 3) {
      FUN_1801b2bb0(param_2,**(undefined8 **)(param_2 + 8),*(undefined8 **)(param_2 + 8));
    }
    else {
      FUN_1801b66f0();
      *(undefined8 *)*(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_2 + 8);
      *(longlong *)(*(longlong *)(param_2 + 8) + 8) = *(longlong *)(param_2 + 8);
      *(undefined8 *)(param_2 + 0x10) = 0;
      local_18[0] = *(undefined8 *)(param_2 + 8);
      FUN_1800f9880(*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x20),local_18);
    }
  }
  return;
}



