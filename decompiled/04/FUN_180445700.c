// FUN_180445700 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180445700 */

undefined8 FUN_180445700(undefined8 param_1,char *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  lVar1 = *(longlong *)(param_2 + 0x28);
  if (*param_2 == '\0') {
    if (lVar1 + 1U <= *(ulonglong *)(param_2 + 0x30)) {
      *(undefined2 *)(*(longlong *)(param_2 + 0x48) + -1 + lVar1) = 0x24;
      *(longlong *)(param_2 + 0x28) = *(longlong *)(param_2 + 0x28) + 1;
      uVar3 = FUN_180446120(param_1);
      return uVar3;
    }
  }
  else if (lVar1 + 4U < *(ulonglong *)(param_2 + 8)) {
    *(char *)(*(longlong *)(param_2 + 0x48) + -1) = (char)lVar1;
    *(undefined4 *)(lVar1 + *(longlong *)(param_2 + 0x48)) = 0x24000b;
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
    uVar2 = 0xff;
    if (uVar4 < 0xff) {
      uVar2 = uVar4;
    }
    *(ulonglong *)(param_2 + 0x30) = uVar2;
    uVar3 = FUN_180446120(param_1);
    return uVar3;
  }
  return 0x80100009;
}



