// FUN_1806301cc - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806301cc */

ulonglong FUN_1806301cc(short *param_1,longlong param_2)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  uint local_res8 [2];
  
  local_res8[0] = 0;
  if (((param_1 == (short *)0x0) || (*param_1 == 0)) ||
     (iVar1 = FUN_180635190(param_1,&DAT_1806b6cc8), iVar1 == 0)) {
    uVar3 = 0x20001004;
  }
  else {
    iVar1 = FUN_180615da0(param_1,L"utf8");
    if (iVar1 == 0) {
      return 0xfde9;
    }
    iVar1 = FUN_180615da0(param_1,L"utf-8");
    if (iVar1 == 0) {
      return 0xfde9;
    }
    iVar1 = FUN_180635190(param_1,&DAT_1806b6ce0);
    if (iVar1 != 0) {
      uVar2 = FUN_18061f130(param_1);
      return uVar2;
    }
    uVar3 = 0x2000000b;
  }
  uVar2 = FUN_1806218d4(param_2 + 600,uVar3,local_res8,2);
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  if ((int)local_res8[0] < 3) {
    return 0xfde9;
  }
  return (ulonglong)local_res8[0];
}



