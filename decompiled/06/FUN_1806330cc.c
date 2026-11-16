// FUN_1806330cc - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806330cc */

undefined2 FUN_1806330cc(undefined2 param_1)

{
  int iVar1;
  undefined2 local_res8 [4];
  undefined4 local_res10 [6];
  
  local_res8[0] = param_1;
  iVar1 = __dcrt_lowio_ensure_console_output_initialized();
  if (iVar1 != 0) {
    local_res10[0] = 0;
    iVar1 = __dcrt_write_console(local_res8,1,local_res10);
    if (iVar1 != 0) {
      return local_res8[0];
    }
  }
  return 0xffff;
}



