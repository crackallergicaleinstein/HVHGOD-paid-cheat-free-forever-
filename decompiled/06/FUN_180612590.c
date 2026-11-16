// FUN_180612590 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180612590 */

undefined8 FUN_180612590(undefined8 *param_1)

{
  if (*(char *)(param_1 + 1) != '\0') {
                    /* WARNING: Subroutine does not return */
    _invoke_watson(L"!_is_double",L"__crt_strtox::floating_point_value::as_float",
                   L"minkernel\\crts\\ucrt\\inc\\corecrt_internal_strtox.h",0x1e1,0);
  }
  return *param_1;
}



