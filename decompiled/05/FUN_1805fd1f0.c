// FUN_1805fd1f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805fd1f0 */

void FUN_1805fd1f0(undefined4 *param_1,longlong *param_2,byte *param_3)

{
  PVOID pvVar1;
  PVOID local_res8;
  
  *param_1 = 0xe06d7363;
  param_1[1] = 1;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  param_1[6] = 4;
  *(undefined8 *)(param_1 + 8) = 0x19930520;
  *(longlong **)(param_1 + 10) = param_2;
  if ((param_3 != (byte *)0x0) && ((*param_3 & 0x10) != 0)) {
    param_3 = *(byte **)(*(longlong *)(*param_2 + -8) + 0x30);
  }
  *(byte **)(param_1 + 0xc) = param_3;
  if (param_3 == (byte *)0x0) {
    pvVar1 = (PVOID)0x0;
  }
  else {
    pvVar1 = RtlPcToFileHeader(param_3,&local_res8);
  }
  *(PVOID *)(param_1 + 0xe) = pvVar1;
  if ((param_3 != (byte *)0x0) && (((*param_3 & 8) != 0 || (pvVar1 == (PVOID)0x0)))) {
    *(undefined8 *)(param_1 + 8) = 0x1994000;
  }
  return;
}



