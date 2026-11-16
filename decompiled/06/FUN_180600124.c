// FUN_180600124 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180600124 */

ulonglong FUN_180600124(double *param_1,undefined8 param_2)

{
  code *pcVar1;
  ulonglong uVar2;
  double dVar3;
  double local_res8;
  undefined1 local_res18 [16];
  
  local_res8 = *param_1;
  if (((ulonglong)local_res8 & 0x7ff0000000000000) == 0x7ff0000000000000) {
    FUN_180601cbc("boost::math::trunc<%1%>(%1%)",0,&local_res8,local_res18,param_2);
    pcVar1 = (code *)swi(3);
    uVar2 = (*pcVar1)();
    return uVar2;
  }
  if (local_res8 < 0.0) {
    dVar3 = (double)FUN_18061c280();
  }
  else {
    dVar3 = (double)FUN_18061ccf0();
  }
  if ((dVar3 < 2147483648.0) && (-2147483648.0 <= dVar3)) {
    return (ulonglong)(uint)(int)dVar3;
  }
  FUN_180601cbc("boost::math::itrunc<%1%>(%1%)",0,param_1,&local_res8,param_2);
  pcVar1 = (code *)swi(3);
  uVar2 = (*pcVar1)();
  return uVar2;
}



