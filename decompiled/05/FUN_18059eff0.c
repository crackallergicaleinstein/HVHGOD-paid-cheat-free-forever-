// FUN_18059eff0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18059eff0 */

undefined8 FUN_18059eff0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  if ((lVar1 == 0) || (lVar2 = *(longlong *)(lVar1 + 0x170), lVar2 == 0)) {
    return 3;
  }
  uVar4 = *(uint *)(lVar2 + 0x260);
  if (((((*(char *)(lVar2 + 0x230) == '\0') || (*(int *)(lVar2 + 0x240) != *(int *)(lVar1 + 0x168)))
       || (*(uint *)(lVar2 + 0x244) != uVar4)) ||
      ((uVar4 != 0 &&
       (iVar3 = memcmp(*(void **)(lVar2 + 0x268),*(void **)(lVar2 + 0x248),(ulonglong)uVar4 << 2),
       iVar3 != 0)))) &&
     (uVar5 = FUN_18059c9b0((char *)(lVar2 + 0x230),*(undefined4 *)(lVar1 + 0x168),uVar4,
                            *(undefined8 *)(lVar2 + 0x268)), (int)uVar5 != 0)) {
    return uVar5;
  }
  uVar4 = FUN_1805a13c0(param_1,*(longlong *)(param_1 + 0x28) + -8);
  if (*(uint *)(param_1 + 0x30) < uVar4) {
    uVar5 = 3;
  }
  else {
    uVar5 = FUN_18059f140(lVar2,param_1,uVar4);
    *(undefined1 *)(lVar2 + 0x231) = 1;
  }
  return uVar5;
}



