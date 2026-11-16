// FUN_18050cd00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18050cd00 */

void FUN_18050cd00(void)

{
  int *piVar1;
  int *piVar2;
  int local_res8 [2];
  int local_res10 [6];
  
  if ((DAT_180c62f50 != 0) && (*(int *)(DAT_180c62f50 + 0x24) == 0)) {
    if (DAT_180cad2e0 == 0) {
      if (DAT_180c8fdb8 == 1) {
        local_res10[0] = 5;
        piVar2 = local_res8;
        local_res8[0] = 0;
        if (-1 < DAT_180c8fdbc) {
          piVar2 = &DAT_180c8fdbc;
        }
        piVar1 = local_res10;
        if (DAT_180c8fdbc < 6) {
          piVar1 = piVar2;
        }
        (&DAT_180c8fdc4)[*piVar1] = 1;
      }
      if (DAT_180c8fdb8 == 2) {
        local_res10[0] = 0x21;
        piVar2 = local_res8;
        local_res8[0] = 0;
        if (-1 < DAT_180c8fdc0) {
          piVar2 = &DAT_180c8fdc0;
        }
        piVar1 = local_res10;
        if (DAT_180c8fdc0 < 0x22) {
          piVar1 = piVar2;
        }
        (&DAT_180c8fdca)[*piVar1] = 1;
        return;
      }
    }
    else {
      if (DAT_180c7e25c == 1) {
        local_res10[0] = 5;
        piVar2 = local_res8;
        local_res8[0] = 0;
        if (-1 < DAT_180c7e260) {
          piVar2 = &DAT_180c7e260;
        }
        piVar1 = local_res10;
        if (DAT_180c7e260 < 6) {
          piVar1 = piVar2;
        }
        (&DAT_180c7e268)[*piVar1] = 1;
      }
      if (DAT_180c7e25c == 2) {
        local_res10[0] = 0x21;
        piVar2 = local_res8;
        local_res8[0] = 0;
        if (-1 < DAT_180c7e264) {
          piVar2 = &DAT_180c7e264;
        }
        piVar1 = local_res10;
        if (DAT_180c7e264 < 0x22) {
          piVar1 = piVar2;
        }
        (&DAT_180c7e26e)[*piVar1] = 1;
      }
    }
  }
  return;
}



