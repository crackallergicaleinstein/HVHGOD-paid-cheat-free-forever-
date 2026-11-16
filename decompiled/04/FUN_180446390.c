// FUN_180446390 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180446390 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_180446390(longlong param_1,char *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  switch(*(undefined4 *)(param_3[2] + 0x2c)) {
  case 200:
    if ((*(char *)(param_1 + 5) == '\0') && ((*(ulonglong *)(*param_3 + 0x20) & 0x4000000000) == 0))
    {
      return 0x100000;
    }
  case 0xc6:
  case 199:
  case 0xca:
  case 0xcb:
    uVar2 = (**(code **)(param_1 + 0x200))(param_1);
    if ((int)uVar2 < 0) {
      return uVar2;
    }
    break;
  case 0xc9:
    if ((*(char *)(param_1 + 5) == '\0') && ((*(ulonglong *)(*param_3 + 0x20) & 0x8000000000) == 0))
    {
      return 0x100000;
    }
    uVar2 = (**(code **)(param_1 + 0x200))(param_1);
    if ((int)uVar2 < 0) {
      return uVar2;
    }
    break;
  default:
    return 0x100000;
  }
  lVar1 = *(longlong *)(param_2 + 0x28);
  if (*param_2 == '\0') {
    if (lVar1 + 1U <= *(ulonglong *)(param_2 + 0x30)) {
      *(undefined2 *)(*(longlong *)(param_2 + 0x48) + -1 + lVar1) = 0x3a;
      *(longlong *)(param_2 + 0x28) = *(longlong *)(param_2 + 0x28) + 1;
      return 0x100000;
    }
  }
  else if (lVar1 + 4U < *(ulonglong *)(param_2 + 8)) {
    *(char *)(*(longlong *)(param_2 + 0x48) + -1) = (char)lVar1;
    *(undefined4 *)(lVar1 + *(longlong *)(param_2 + 0x48)) = 0x3a0002;
    *(longlong *)(param_2 + 0x48) = *(longlong *)(param_2 + 0x48) + lVar1 + 2;
    uVar4 = *(longlong *)(param_2 + 8) - (lVar1 + 2);
    param_2[0x28] = '\x02';
    param_2[0x29] = '\0';
    param_2[0x2a] = '\0';
    param_2[0x2b] = '\0';
    param_2[0x2c] = '\0';
    param_2[0x2d] = '\0';
    param_2[0x2e] = '\0';
    param_2[0x2f] = '\0';
    *(ulonglong *)(param_2 + 8) = uVar4;
    uVar3 = 0xff;
    if (uVar4 < 0xff) {
      uVar3 = uVar4;
    }
    *(ulonglong *)(param_2 + 0x30) = uVar3;
    return 0x100000;
  }
  return 0x80100009;
}



