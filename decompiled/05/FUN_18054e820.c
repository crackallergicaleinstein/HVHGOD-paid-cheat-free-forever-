// FUN_18054e820 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18054e820 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_18054e820(undefined8 param_1,undefined8 param_2,code *param_3,undefined8 param_4)

{
  int iVar1;
  char cVar2;
  
  if (DAT_180bbecdb == '\0') {
    FUN_1804c2800(param_2);
    cVar2 = FUN_180486160(param_1,param_2);
    if (DAT_180bbecdb == '\0') {
      if (cVar2 != '\0') {
        FUN_180488320("##settings");
      }
      cVar2 = FUN_180488630("##settings",param_2,param_4);
      if (cVar2 != '\0') {
        (*param_3)();
        FUN_1804aeac0();
      }
    }
    else {
      FUN_180493f00(param_2);
      (*param_3)();
      if (DAT_180c62d18 != DAT_180c62d20) {
        FUN_18015c010(DAT_180c62d20 + -0x20);
        DAT_180c62d20 = DAT_180c62d20 + -0x20;
      }
      DAT_1808e4e38 = 0xffffffff;
    }
    iVar1 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
    if (iVar1 < 2) {
      FUN_1804c5a40("Calling PopID() too many times!");
    }
    else {
      *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar1 + -1;
    }
  }
  else {
    FUN_180493f00();
    (*param_3)();
    if (DAT_180c62d18 != DAT_180c62d20) {
      FUN_18015c010(DAT_180c62d20 + -0x20);
      DAT_180c62d20 = DAT_180c62d20 + -0x20;
    }
    DAT_1808e4e38 = 0xffffffff;
  }
  return;
}



