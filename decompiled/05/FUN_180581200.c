// FUN_180581200 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180581200 */

int FUN_180581200(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int local_res8 [2];
  
  plVar1 = (longlong *)
           FUN_18057abe0(*(undefined8 *)(param_1 + 0x98),*(int *)(param_1 + 0x10) * 2 + 0x2f8,
                         local_res8);
  if (local_res8[0] == 0) {
    FUN_18063ab10(plVar1 + 4,0,0x2b8);
    *plVar1 = param_1;
    *(undefined4 *)(plVar1 + 1) = *(undefined4 *)(param_1 + 0x10);
    plVar1[2] = (longlong)(plVar1 + 0x5f);
    plVar1[0x5e] = param_3;
    *(undefined2 *)(plVar1 + 0x5b) = 0;
    *(undefined8 *)((longlong)plVar1 + 0x2e4) = 0;
    *(undefined8 *)((longlong)plVar1 + 0x2dc) = 0;
    *(undefined4 *)((longlong)plVar1 + 0x2ec) = 0;
    local_res8[0] = FUN_180580e30(plVar1);
    if (local_res8[0] != 0) {
      FUN_180581140(plVar1);
      *param_2 = 0;
      return local_res8[0];
    }
    *(undefined4 *)(plVar1 + 3) = 0;
    local_res8[0] = 0;
  }
  *param_2 = (longlong)plVar1;
  return local_res8[0];
}



