// FUN_1803f9f40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803f9f40 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

ulonglong FUN_1803f9f40(undefined8 *param_1)

{
  uint uVar1;
  ulonglong in_RAX;
  longlong *plVar2;
  ulonglong uVar3;
  undefined1 local_48 [64];
  
  if (*(char *)(param_1 + 0xb) == '\0') goto LAB_1803f9fdc;
  plVar2 = (longlong *)(*(code *)*param_1)(local_48,param_1[3]);
  uVar3 = 0;
  if (((char)plVar2[7] == '\0') || (*(char *)(param_1 + 0xb) == '\0')) {
    in_RAX = (ulonglong)((char)plVar2[7] == *(char *)(param_1 + 0xb));
  }
  else {
    if ((((*plVar2 == param_1[4]) && (plVar2[1] == param_1[5])) &&
        (uVar3 = param_1[6], plVar2[2] == uVar3)) &&
       (((uVar3 = param_1[7], plVar2[3] == uVar3 && (uVar3 = param_1[8], plVar2[4] == uVar3)) &&
        ((uVar3 = param_1[9], plVar2[5] == uVar3 &&
         (uVar3 = (ulonglong)*(uint *)(param_1 + 10),
         *(uint *)(plVar2 + 6) == *(uint *)(param_1 + 10))))))) {
      uVar1 = *(uint *)((longlong)param_1 + 0x54);
      uVar3 = (ulonglong)uVar1;
      if (*(uint *)((longlong)plVar2 + 0x34) == uVar1) {
        in_RAX = CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
        goto LAB_1803f9fd0;
      }
    }
    in_RAX = uVar3 & 0xffffffffffffff00;
  }
LAB_1803f9fd0:
  if ((char)in_RAX != '\0') {
    return CONCAT71((int7)(in_RAX >> 8),1);
  }
LAB_1803f9fdc:
  return in_RAX & 0xffffffffffffff00;
}



